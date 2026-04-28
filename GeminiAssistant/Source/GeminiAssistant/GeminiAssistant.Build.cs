using UnrealBuildTool;

public class GeminiAssistant : ModuleRules
{
    public GeminiAssistant(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] { 
            "Core", 
            "CoreUObject", 
            "Engine", 
            "InputCore", 
            "Http", 
            "Json", 
            "JsonUtilities",
            "UnrealEd",          // Required for Editor functionality
            "EditorSubsystem",   // Required for UEditorActorSubsystem
            "DeveloperSettings"  // Required for UDeveloperSettings (Project Settings)
        });

        PrivateDependencyModuleNames.AddRange(new string[] {  });
    }
}