// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeminiAPIClient.h"

#ifdef GEMINIASSISTANT_GeminiAPIClient_generated_h
#error "GeminiAPIClient.generated.h already included, missing '#pragma once' in GeminiAPIClient.h"
#endif
#define GEMINIASSISTANT_GeminiAPIClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FGeminiResponseDelegate ***********************************************
#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_9_DELEGATE \
GEMINIASSISTANT_API void FGeminiResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& GeminiResponseDelegate, const FString& ResponseText);


// ********** End Delegate FGeminiResponseDelegate *************************************************

// ********** Begin Class UGeminiAPIClient *********************************************************
#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorldContextAsJson); \
	DECLARE_FUNCTION(execParseAndExecuteAICommand); \
	DECLARE_FUNCTION(execSendPromptToGemini);


struct Z_Construct_UClass_UGeminiAPIClient_Statics;
GEMINIASSISTANT_API UClass* Z_Construct_UClass_UGeminiAPIClient_NoRegister();

#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeminiAPIClient(); \
	friend struct ::Z_Construct_UClass_UGeminiAPIClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEMINIASSISTANT_API UClass* ::Z_Construct_UClass_UGeminiAPIClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeminiAPIClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeminiAssistant"), Z_Construct_UClass_UGeminiAPIClient_NoRegister) \
	DECLARE_SERIALIZER(UGeminiAPIClient)


#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeminiAPIClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeminiAPIClient(UGeminiAPIClient&&) = delete; \
	UGeminiAPIClient(const UGeminiAPIClient&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeminiAPIClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeminiAPIClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeminiAPIClient) \
	NO_API virtual ~UGeminiAPIClient();


#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_11_PROLOG
#define FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_14_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeminiAPIClient;

// ********** End Class UGeminiAPIClient ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
