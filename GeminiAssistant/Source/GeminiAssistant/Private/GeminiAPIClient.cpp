#include "GeminiAPIClient.h"
#include "GeminiEditorSettings.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonReader.h"
#include "Subsystems/EditorActorSubsystem.h"
#include "Editor.h"

void UGeminiAPIClient::SendPromptToGemini(const FString& Prompt)
{
    const UGeminiEditorSettings* Settings = GetDefault<UGeminiEditorSettings>();
    if (!Settings || Settings->GeminiAPIKey.IsEmpty()) return;

    FString ApiUrl = FString::Printf(TEXT("https://generativelanguage.googleapis.com/v1beta/models/%s:generateContent?key=%s"), *Settings->DefaultModel, *Settings->GeminiAPIKey);

    TSharedPtr<FJsonObject> RootObject = MakeShareable(new FJsonObject());
    TArray<TSharedPtr<FJsonValue>> ContentsArray;
    TSharedPtr<FJsonObject> ContentObject = MakeShareable(new FJsonObject());
    TSharedPtr<FJsonObject> PartsObject = MakeShareable(new FJsonObject());
    
    PartsObject->SetStringField("text", Prompt);
    
    TArray<TSharedPtr<FJsonValue>> PartsArray;
    PartsArray.Add(MakeShareable(new FJsonValueObject(PartsObject)));
    ContentObject->SetArrayField("parts", PartsArray);
    ContentsArray.Add(MakeShareable(new FJsonValueObject(ContentObject)));
    RootObject->SetArrayField("contents", ContentsArray);

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UGeminiAPIClient::OnHttpResponseReceived);
    Request->SetURL(ApiUrl);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetContentAsString(OutputString);
    Request->ProcessRequest();
}

void UGeminiAPIClient::OnHttpResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (bWasSuccessful && Response.IsValid())
    {
        FString RawResponse = Response->GetContentAsString();
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(RawResponse);

        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        {
            FString CleanText = "Error: Could not parse text.";
            FString TokenStats = "";

            // --- 1. Parse the AI Text ---
            const TArray<TSharedPtr<FJsonValue>>* CandidatesArray;
            if (JsonObject->TryGetArrayField(TEXT("candidates"), CandidatesArray) && CandidatesArray->Num() > 0)
            {
                const TSharedPtr<FJsonObject> CandidateObj = (*CandidatesArray)[0]->AsObject();
                const TSharedPtr<FJsonObject> ContentObj = CandidateObj->GetObjectField(TEXT("content"));
                const TArray<TSharedPtr<FJsonValue>> PartsArray = ContentObj->GetArrayField(TEXT("parts"));
                CleanText = PartsArray[0]->AsObject()->GetStringField(TEXT("text"));
            }

            // --- 2. Parse Token Usage ---
            const TSharedPtr<FJsonObject>* UsageObject;
            if (JsonObject->TryGetObjectField(TEXT("usageMetadata"), UsageObject))
            {
                int32 PromptTokens = 0;
                int32 CandidateTokens = 0;
                int32 TotalTokens = 0;

                (*UsageObject)->TryGetNumberField(TEXT("promptTokenCount"), PromptTokens);
                (*UsageObject)->TryGetNumberField(TEXT("candidatesTokenCount"), CandidateTokens);
                (*UsageObject)->TryGetNumberField(TEXT("totalTokenCount"), TotalTokens);

                TokenStats = FString::Printf(TEXT("\n\n=======================\n[Tokens Used -> Prompt: %d | AI Response: %d | Total: %d]"), PromptTokens, CandidateTokens, TotalTokens);
            }

            // --- 3. Broadcast to UI ---
            OnResponseReceived.Broadcast(CleanText + TokenStats);
        }
        else
        {
            OnResponseReceived.Broadcast("Error: Failed to deserialize JSON.");
        }
    }
    else
    {
        OnResponseReceived.Broadcast("Error: HTTP Request Failed.");
    }
}

void UGeminiAPIClient::ParseAndExecuteAICommand(const FString& AIResponse)
{
    // Basic extraction: Find the last '{' and '}' in the response
    int32 StartIndex = AIResponse.Find("{", ESearchCase::IgnoreCase, ESearchDir::FromEnd);
    int32 EndIndex = AIResponse.Find("}", ESearchCase::IgnoreCase, ESearchDir::FromEnd);

    if (StartIndex != INDEX_NONE && EndIndex != INDEX_NONE && EndIndex > StartIndex)
    {
        FString JsonCommand = AIResponse.Mid(StartIndex, EndIndex - StartIndex + 1);
        
        TSharedPtr<FJsonObject> CommandObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonCommand);

        if (FJsonSerializer::Deserialize(Reader, CommandObject) && CommandObject.IsValid())
        {
            FString Action;
            if (CommandObject->TryGetStringField("action", Action) && Action == "spawn")
            {
                FString ClassName;
                CommandObject->TryGetStringField("class", ClassName);
                
                const TArray<TSharedPtr<FJsonValue>>* LocationArray;
                FVector SpawnLocation(0.0f, 0.0f, 0.0f);
                
                if (CommandObject->TryGetArrayField("location", LocationArray) && LocationArray->Num() == 3)
                {
                    SpawnLocation.X = (*LocationArray)[0]->AsNumber();
                    SpawnLocation.Y = (*LocationArray)[1]->AsNumber();
                    SpawnLocation.Z = (*LocationArray)[2]->AsNumber();
                }

                // Execute in Editor
                if (UEditorActorSubsystem* EditorActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>())
                {
                    // For now, we default to spawning a Basic Cube if "Cube" is requested
                    FString AssetPath = TEXT("/Engine/BasicShapes/Cube.Cube"); 
                    UObject* LoadedAsset = StaticLoadObject(UObject::StaticClass(), nullptr, *AssetPath);
                    
                    if (LoadedAsset)
                    {
                        EditorActorSubsystem->SpawnActorFromObject(LoadedAsset, SpawnLocation);
                        UE_LOG(LogTemp, Log, TEXT("Gemini spawned %s at %s"), *ClassName, *SpawnLocation.ToString());
                    }
                }
            }
        }
    }
}

FString UGeminiAPIClient::GetWorldContextAsJson()
{
    if (!GEditor) return "{}";

    UEditorActorSubsystem* EditorActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>();
    if (!EditorActorSubsystem) return "{}";

    TArray<AActor*> WorldActors = EditorActorSubsystem->GetAllLevelActors();
    
    // Build a simple JSON array of actor names and locations
    FString ContextJson = "{\"world_context\":[";
    for (int32 i = 0; i < WorldActors.Num(); ++i)
    {
        AActor* Actor = WorldActors[i];
        if (Actor)
        {
            FVector Loc = Actor->GetActorLocation();
            ContextJson += FString::Printf(TEXT("{\"name\": \"%s\", \"location\": [%f, %f, %f]}"), 
                *Actor->GetActorLabel(), Loc.X, Loc.Y, Loc.Z);
            
            if (i < WorldActors.Num() - 1) ContextJson += ",";
        }
    }
    ContextJson += "]}";
    
    return ContextJson;
}