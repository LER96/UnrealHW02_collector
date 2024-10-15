// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonSurvior/Public/TrapPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrapPickup() {}

// Begin Cross Module References
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_APickup();
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_ATrapPickup();
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_ATrapPickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThirdPersonSurvior();
// End Cross Module References

// Begin Class ATrapPickup
void ATrapPickup::StaticRegisterNativesATrapPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrapPickup);
UClass* Z_Construct_UClass_ATrapPickup_NoRegister()
{
	return ATrapPickup::StaticClass();
}
struct Z_Construct_UClass_ATrapPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TrapPickup.h" },
		{ "ModuleRelativePath", "Public/TrapPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/TrapPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrapPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrapPickup_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrapPickup, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrapPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapPickup_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrapPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATrapPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonSurvior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrapPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrapPickup_Statics::ClassParams = {
	&ATrapPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATrapPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrapPickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrapPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrapPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrapPickup()
{
	if (!Z_Registration_Info_UClass_ATrapPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrapPickup.OuterSingleton, Z_Construct_UClass_ATrapPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrapPickup.OuterSingleton;
}
template<> THIRDPERSONSURVIOR_API UClass* StaticClass<ATrapPickup>()
{
	return ATrapPickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrapPickup);
ATrapPickup::~ATrapPickup() {}
// End Class ATrapPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_TrapPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrapPickup, ATrapPickup::StaticClass, TEXT("ATrapPickup"), &Z_Registration_Info_UClass_ATrapPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrapPickup), 585565390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_TrapPickup_h_2572518887(TEXT("/Script/ThirdPersonSurvior"),
	Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_TrapPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_TrapPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
