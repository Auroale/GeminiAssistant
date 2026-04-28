// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeminiEditorSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGeminiEditorSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
GEMINIASSISTANT_API UClass* Z_Construct_UClass_UGeminiEditorSettings();
GEMINIASSISTANT_API UClass* Z_Construct_UClass_UGeminiEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeminiAssistant();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGeminiEditorSettings ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGeminiEditorSettings;
UClass* UGeminiEditorSettings::GetPrivateStaticClass()
{
	using TClass = UGeminiEditorSettings;
	if (!Z_Registration_Info_UClass_UGeminiEditorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GeminiEditorSettings"),
			Z_Registration_Info_UClass_UGeminiEditorSettings.InnerSingleton,
			StaticRegisterNativesUGeminiEditorSettings,
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
	return Z_Registration_Info_UClass_UGeminiEditorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UGeminiEditorSettings_NoRegister()
{
	return UGeminiEditorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGeminiEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- THE FIX IS ON THIS LINE BELOW ---\n// Changed config to 'Editor' and added 'defaultconfig' to trigger the UI menu\n" },
#endif
		{ "DisplayName", "Gemini AI Settings" },
		{ "IncludePath", "GeminiEditorSettings.h" },
		{ "ModuleRelativePath", "Public/GeminiEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- THE FIX IS ON THIS LINE BELOW ---\nChanged config to 'Editor' and added 'defaultconfig' to trigger the UI menu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeminiAPIKey_MetaData[] = {
		{ "Category", "Authentication" },
		{ "DisplayName", "Gemini API Key" },
		{ "IsPassword", "TRUE" },
		{ "ModuleRelativePath", "Public/GeminiEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultModel_MetaData[] = {
		{ "Category", "Preferences" },
		{ "ModuleRelativePath", "Public/GeminiEditorSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGeminiEditorSettings constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_GeminiAPIKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGeminiEditorSettings constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeminiEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGeminiEditorSettings_Statics

// ********** Begin Class UGeminiEditorSettings Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeminiEditorSettings_Statics::NewProp_GeminiAPIKey = { "GeminiAPIKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeminiEditorSettings, GeminiAPIKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeminiAPIKey_MetaData), NewProp_GeminiAPIKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeminiEditorSettings_Statics::NewProp_DefaultModel = { "DefaultModel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeminiEditorSettings, DefaultModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultModel_MetaData), NewProp_DefaultModel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeminiEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeminiEditorSettings_Statics::NewProp_GeminiAPIKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeminiEditorSettings_Statics::NewProp_DefaultModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeminiEditorSettings_Statics::PropPointers) < 2048);
// ********** End Class UGeminiEditorSettings Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UGeminiEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GeminiAssistant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeminiEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeminiEditorSettings_Statics::ClassParams = {
	&UGeminiEditorSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeminiEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeminiEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeminiEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeminiEditorSettings_Statics::Class_MetaDataParams)
};
void UGeminiEditorSettings::StaticRegisterNativesUGeminiEditorSettings()
{
}
UClass* Z_Construct_UClass_UGeminiEditorSettings()
{
	if (!Z_Registration_Info_UClass_UGeminiEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeminiEditorSettings.OuterSingleton, Z_Construct_UClass_UGeminiEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeminiEditorSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGeminiEditorSettings);
UGeminiEditorSettings::~UGeminiEditorSettings() {}
// ********** End Class UGeminiEditorSettings ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h__Script_GeminiAssistant_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeminiEditorSettings, UGeminiEditorSettings::StaticClass, TEXT("UGeminiEditorSettings"), &Z_Registration_Info_UClass_UGeminiEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeminiEditorSettings), 1623759352U) },
	};
}; // Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h__Script_GeminiAssistant_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h__Script_GeminiAssistant_2499420535{
	TEXT("/Script/GeminiAssistant"),
	Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h__Script_GeminiAssistant_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_GeminiAssistant_Source_GeminiAssistant_Public_GeminiEditorSettings_h__Script_GeminiAssistant_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
