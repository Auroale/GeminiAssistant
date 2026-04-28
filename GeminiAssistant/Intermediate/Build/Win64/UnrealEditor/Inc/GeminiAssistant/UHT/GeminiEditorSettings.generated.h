// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeminiEditorSettings.h"

#ifdef GEMINIASSISTANT_GeminiEditorSettings_generated_h
#error "GeminiEditorSettings.generated.h already included, missing '#pragma once' in GeminiEditorSettings.h"
#endif
#define GEMINIASSISTANT_GeminiEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeminiEditorSettings ****************************************************
struct Z_Construct_UClass_UGeminiEditorSettings_Statics;
GEMINIASSISTANT_API UClass* Z_Construct_UClass_UGeminiEditorSettings_NoRegister();

#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeminiEditorSettings(); \
	friend struct ::Z_Construct_UClass_UGeminiEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEMINIASSISTANT_API UClass* ::Z_Construct_UClass_UGeminiEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeminiEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeminiAssistant"), Z_Construct_UClass_UGeminiEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UGeminiEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeminiEditorSettings(UGeminiEditorSettings&&) = delete; \
	UGeminiEditorSettings(const UGeminiEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeminiEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeminiEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeminiEditorSettings) \
	NO_API virtual ~UGeminiEditorSettings();


#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h_8_PROLOG
#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeminiEditorSettings;

// ********** End Class UGeminiEditorSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
