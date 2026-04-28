#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GeminiEditorSettings.generated.h"

// --- THE FIX IS ON THIS LINE BELOW ---
// Changed config to 'Editor' and added 'defaultconfig' to trigger the UI menu
UCLASS(config = Editor, defaultconfig, meta = (DisplayName = "Gemini AI Settings"))
class GEMINIASSISTANT_API UGeminiEditorSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    UGeminiEditorSettings();

    // Forces it specifically into the "Plugins" tab
    virtual FName GetCategoryName() const override { return FName("Plugins"); }
    virtual FName GetSectionName() const override { return FName("Gemini Assistant"); }

    UPROPERTY(Config, EditAnywhere, Category = "Authentication", meta = (DisplayName = "Gemini API Key", IsPassword = true))
    FString GeminiAPIKey;

    UPROPERTY(Config, EditAnywhere, Category = "Preferences")
    FString DefaultModel = TEXT("gemini-1.5-pro");
};