// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonSurvior/Public/GemPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGemPickup() {}

// Begin Cross Module References
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_AGemPickup();
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_AGemPickup_NoRegister();
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_APickup();
UPackage* Z_Construct_UPackage__Script_ThirdPersonSurvior();
// End Cross Module References

// Begin Class AGemPickup
void AGemPickup::StaticRegisterNativesAGemPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGemPickup);
UClass* Z_Construct_UClass_AGemPickup_NoRegister()
{
	return AGemPickup::StaticClass();
}
struct Z_Construct_UClass_AGemPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GemPickup.h" },
		{ "ModuleRelativePath", "Public/GemPickup.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGemPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGemPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonSurvior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGemPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGemPickup_Statics::ClassParams = {
	&AGemPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGemPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AGemPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGemPickup()
{
	if (!Z_Registration_Info_UClass_AGemPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGemPickup.OuterSingleton, Z_Construct_UClass_AGemPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGemPickup.OuterSingleton;
}
template<> THIRDPERSONSURVIOR_API UClass* StaticClass<AGemPickup>()
{
	return AGemPickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGemPickup);
AGemPickup::~AGemPickup() {}
// End Class AGemPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_GemPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGemPickup, AGemPickup::StaticClass, TEXT("AGemPickup"), &Z_Registration_Info_UClass_AGemPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGemPickup), 1137832730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_GemPickup_h_2656170627(TEXT("/Script/ThirdPersonSurvior"),
	Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_GemPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_GemPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
