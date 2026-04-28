// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeminiAPIClient.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGeminiAPIClient() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GEMINIASSISTANT_API UClass* Z_Construct_UClass_UGeminiAPIClient();
GEMINIASSISTANT_API UClass* Z_Construct_UClass_UGeminiAPIClient_NoRegister();
GEMINIASSISTANT_API UFunction* Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GeminiAssistant();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FGeminiResponseDelegate ***********************************************
struct Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics
{
	struct _Script_GeminiAssistant_eventGeminiResponseDelegate_Parms
	{
		FString ResponseText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate to broadcast the final parsed string to your Blueprint Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/GeminiAPIClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate to broadcast the final parsed string to your Blueprint Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FGeminiResponseDelegate constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FGeminiResponseDelegate constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FGeminiResponseDelegate Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::NewProp_ResponseText = { "ResponseText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GeminiAssistant_eventGeminiResponseDelegate_Parms, ResponseText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseText_MetaData), NewProp_ResponseText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::NewProp_ResponseText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FGeminiResponseDelegate Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GeminiAssistant, nullptr, "GeminiResponseDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::_Script_GeminiAssistant_eventGeminiResponseDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::_Script_GeminiAssistant_eventGeminiResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGeminiResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& GeminiResponseDelegate, const FString& ResponseText)
{
	struct _Script_GeminiAssistant_eventGeminiResponseDelegate_Parms
	{
		FString ResponseText;
	};
	_Script_GeminiAssistant_eventGeminiResponseDelegate_Parms Parms;
	Parms.ResponseText=ResponseText;
	GeminiResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FGeminiResponseDelegate *************************************************

// ********** Begin Class UGeminiAPIClient Function GetWorldContextAsJson **************************
struct Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics
{
	struct GeminiAPIClient_eventGetWorldContextAsJson_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gemini AI|Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gathers current level data to feed to the AI\n" },
#endif
		{ "ModuleRelativePath", "Public/GeminiAPIClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gathers current level data to feed to the AI" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetWorldContextAsJson constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWorldContextAsJson constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWorldContextAsJson Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeminiAPIClient_eventGetWorldContextAsJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::PropPointers) < 2048);
// ********** End Function GetWorldContextAsJson Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGeminiAPIClient, nullptr, "GetWorldContextAsJson", 	Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::GeminiAPIClient_eventGetWorldContextAsJson_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::GeminiAPIClient_eventGetWorldContextAsJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeminiAPIClient::execGetWorldContextAsJson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetWorldContextAsJson();
	P_NATIVE_END;
}
// ********** End Class UGeminiAPIClient Function GetWorldContextAsJson ****************************

// ********** Begin Class UGeminiAPIClient Function ParseAndExecuteAICommand ***********************
struct Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics
{
	struct GeminiAPIClient_eventParseAndExecuteAICommand_Parms
	{
		FString AIResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gemini AI|Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parses the AI response for a JSON command block and executes it\n" },
#endif
		{ "ModuleRelativePath", "Public/GeminiAPIClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parses the AI response for a JSON command block and executes it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ParseAndExecuteAICommand constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AIResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ParseAndExecuteAICommand constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ParseAndExecuteAICommand Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::NewProp_AIResponse = { "AIResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeminiAPIClient_eventParseAndExecuteAICommand_Parms, AIResponse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIResponse_MetaData), NewProp_AIResponse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::NewProp_AIResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::PropPointers) < 2048);
// ********** End Function ParseAndExecuteAICommand Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGeminiAPIClient, nullptr, "ParseAndExecuteAICommand", 	Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::GeminiAPIClient_eventParseAndExecuteAICommand_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::GeminiAPIClient_eventParseAndExecuteAICommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeminiAPIClient::execParseAndExecuteAICommand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AIResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ParseAndExecuteAICommand(Z_Param_AIResponse);
	P_NATIVE_END;
}
// ********** End Class UGeminiAPIClient Function ParseAndExecuteAICommand *************************

// ********** Begin Class UGeminiAPIClient Function SendPromptToGemini *****************************
struct Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics
{
	struct GeminiAPIClient_eventSendPromptToGemini_Parms
	{
		FString Prompt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gemini AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Exposed to Blueprints so the UI can trigger the request\n" },
#endif
		{ "ModuleRelativePath", "Public/GeminiAPIClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposed to Blueprints so the UI can trigger the request" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SendPromptToGemini constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendPromptToGemini constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendPromptToGemini Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeminiAPIClient_eventSendPromptToGemini_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::NewProp_Prompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::PropPointers) < 2048);
// ********** End Function SendPromptToGemini Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGeminiAPIClient, nullptr, "SendPromptToGemini", 	Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::GeminiAPIClient_eventSendPromptToGemini_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::GeminiAPIClient_eventSendPromptToGemini_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeminiAPIClient::execSendPromptToGemini)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendPromptToGemini(Z_Param_Prompt);
	P_NATIVE_END;
}
// ********** End Class UGeminiAPIClient Function SendPromptToGemini *******************************

// ********** Begin Class UGeminiAPIClient *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGeminiAPIClient;
UClass* UGeminiAPIClient::GetPrivateStaticClass()
{
	using TClass = UGeminiAPIClient;
	if (!Z_Registration_Info_UClass_UGeminiAPIClient.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GeminiAPIClient"),
			Z_Registration_Info_UClass_UGeminiAPIClient.InnerSingleton,
			StaticRegisterNativesUGeminiAPIClient,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGeminiAPIClient.InnerSingleton;
}
UClass* Z_Construct_UClass_UGeminiAPIClient_NoRegister()
{
	return UGeminiAPIClient::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGeminiAPIClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GeminiAPIClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GeminiAPIClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResponseReceived_MetaData[] = {
		{ "Category", "Gemini AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The event dispatcher for the Widget to bind to\n" },
#endif
		{ "ModuleRelativePath", "Public/GeminiAPIClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The event dispatcher for the Widget to bind to" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGeminiAPIClient constinit property declarations *************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResponseReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGeminiAPIClient constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetWorldContextAsJson"), .Pointer = &UGeminiAPIClient::execGetWorldContextAsJson },
		{ .NameUTF8 = UTF8TEXT("ParseAndExecuteAICommand"), .Pointer = &UGeminiAPIClient::execParseAndExecuteAICommand },
		{ .NameUTF8 = UTF8TEXT("SendPromptToGemini"), .Pointer = &UGeminiAPIClient::execSendPromptToGemini },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeminiAPIClient_GetWorldContextAsJson, "GetWorldContextAsJson" }, // 1279728369
		{ &Z_Construct_UFunction_UGeminiAPIClient_ParseAndExecuteAICommand, "ParseAndExecuteAICommand" }, // 4064050779
		{ &Z_Construct_UFunction_UGeminiAPIClient_SendPromptToGemini, "SendPromptToGemini" }, // 4152127858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeminiAPIClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGeminiAPIClient_Statics

// ********** Begin Class UGeminiAPIClient Property Definitions ************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeminiAPIClient_Statics::NewProp_OnResponseReceived = { "OnResponseReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeminiAPIClient, OnResponseReceived), Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResponseReceived_MetaData), NewProp_OnResponseReceived_MetaData) }; // 1551250397
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeminiAPIClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeminiAPIClient_Statics::NewProp_OnResponseReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeminiAPIClient_Statics::PropPointers) < 2048);
// ********** End Class UGeminiAPIClient Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UGeminiAPIClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GeminiAssistant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeminiAPIClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeminiAPIClient_Statics::ClassParams = {
	&UGeminiAPIClient::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGeminiAPIClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeminiAPIClient_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeminiAPIClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeminiAPIClient_Statics::Class_MetaDataParams)
};
void UGeminiAPIClient::StaticRegisterNativesUGeminiAPIClient()
{
	UClass* Class = UGeminiAPIClient::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UGeminiAPIClient_Statics::Funcs));
}
UClass* Z_Construct_UClass_UGeminiAPIClient()
{
	if (!Z_Registration_Info_UClass_UGeminiAPIClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeminiAPIClient.OuterSingleton, Z_Construct_UClass_UGeminiAPIClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeminiAPIClient.OuterSingleton;
}
UGeminiAPIClient::UGeminiAPIClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGeminiAPIClient);
UGeminiAPIClient::~UGeminiAPIClient() {}
// ********** End Class UGeminiAPIClient ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h__Script_GeminiAssistant_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeminiAPIClient, UGeminiAPIClient::StaticClass, TEXT("UGeminiAPIClient"), &Z_Registration_Info_UClass_UGeminiAPIClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeminiAPIClient), 2262704763U) },
	};
}; // Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h__Script_GeminiAssistant_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h__Script_GeminiAssistant_1181821786{
	TEXT("/Script/GeminiAssistant"),
	Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h__Script_GeminiAssistant_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiAPIClient_h__Script_GeminiAssistant_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
