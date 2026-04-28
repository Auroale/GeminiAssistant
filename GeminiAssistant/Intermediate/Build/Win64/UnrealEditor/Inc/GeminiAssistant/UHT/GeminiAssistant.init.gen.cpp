// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeminiAssistant_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	GEMINIASSISTANT_API UFunction* Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeminiAssistant;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeminiAssistant()
	{
		if (!Z_Registration_Info_UPackage__Script_GeminiAssistant.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_GeminiAssistant_GeminiResponseDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/GeminiAssistant",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000040,
			0x7EE76781,
			0x3B4BE375,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeminiAssistant.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_GeminiAssistant.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeminiAssistant(Z_Construct_UPackage__Script_GeminiAssistant, TEXT("/Script/GeminiAssistant"), Z_Registration_Info_UPackage__Script_GeminiAssistant, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7EE76781, 0x3B4BE375));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
