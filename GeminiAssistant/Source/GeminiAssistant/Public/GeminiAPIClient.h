#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/IHttpRequest.h"
#include "GeminiAPIClient.generated.h"

// Delegate to broadcast the final parsed string to your Blueprint Widget
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeminiResponseDelegate, const FString&, ResponseText);

UCLASS(Blueprintable, BlueprintType)
class GEMINIASSISTANT_API UGeminiAPIClient : public UObject
{
    GENERATED_BODY()

public:
    // Exposed to Blueprints so the UI can trigger the request
    UFUNCTION(BlueprintCallable, Category = "Gemini AI")
    void SendPromptToGemini(const FString& Prompt);

    // Parses the AI response for a JSON command block and executes it
    UFUNCTION(BlueprintCallable, Category = "Gemini AI|Execution")
    void ParseAndExecuteAICommand(const FString& AIResponse);

    // Gathers current level data to feed to the AI
    UFUNCTION(BlueprintPure, Category = "Gemini AI|Context")
    FString GetWorldContextAsJson();

    // The event dispatcher for the Widget to bind to
    UPROPERTY(BlueprintAssignable, Category = "Gemini AI")
    FGeminiResponseDelegate OnResponseReceived;

private:
    // Internal callback triggered when Google replies
    void OnHttpResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};