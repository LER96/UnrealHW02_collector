// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonSurvior/ThirdPersonSurviorCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonSurviorCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_AThirdPersonSurviorCharacter();
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_AThirdPersonSurviorCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThirdPersonSurvior();
// End Cross Module References

// Begin Class AThirdPersonSurviorCharacter Function GetCurrentGemsAmount
struct Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics
{
	struct ThirdPersonSurviorCharacter_eventGetCurrentGemsAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gems" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonSurviorCharacter_eventGetCurrentGemsAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonSurviorCharacter, nullptr, "GetCurrentGemsAmount", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::ThirdPersonSurviorCharacter_eventGetCurrentGemsAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::ThirdPersonSurviorCharacter_eventGetCurrentGemsAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThirdPersonSurviorCharacter::execGetCurrentGemsAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentGemsAmount();
	P_NATIVE_END;
}
// End Class AThirdPersonSurviorCharacter Function GetCurrentGemsAmount

// Begin Class AThirdPersonSurviorCharacter Function GetCurrentHealth
struct Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics
{
	struct ThirdPersonSurviorCharacter_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonSurviorCharacter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonSurviorCharacter, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::ThirdPersonSurviorCharacter_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::ThirdPersonSurviorCharacter_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThirdPersonSurviorCharacter::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class AThirdPersonSurviorCharacter Function GetCurrentHealth

// Begin Class AThirdPersonSurviorCharacter Function GetMaxHealth
struct Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics
{
	struct ThirdPersonSurviorCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonSurviorCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonSurviorCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::ThirdPersonSurviorCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::ThirdPersonSurviorCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThirdPersonSurviorCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class AThirdPersonSurviorCharacter Function GetMaxHealth

// Begin Class AThirdPersonSurviorCharacter Function HealthChangeEffect
static FName NAME_AThirdPersonSurviorCharacter_HealthChangeEffect = FName(TEXT("HealthChangeEffect"));
void AThirdPersonSurviorCharacter::HealthChangeEffect()
{
	ProcessEvent(FindFunctionChecked(NAME_AThirdPersonSurviorCharacter_HealthChangeEffect),NULL);
}
struct Z_Construct_UFunction_AThirdPersonSurviorCharacter_HealthChangeEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_HealthChangeEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonSurviorCharacter, nullptr, "HealthChangeEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_HealthChangeEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonSurviorCharacter_HealthChangeEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AThirdPersonSurviorCharacter_HealthChangeEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonSurviorCharacter_HealthChangeEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AThirdPersonSurviorCharacter Function HealthChangeEffect

// Begin Class AThirdPersonSurviorCharacter Function UpdateGemsAmount
struct Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateGemsAmount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gems" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateGemsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonSurviorCharacter, nullptr, "UpdateGemsAmount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateGemsAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateGemsAmount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateGemsAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateGemsAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThirdPersonSurviorCharacter::execUpdateGemsAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGemsAmount();
	P_NATIVE_END;
}
// End Class AThirdPersonSurviorCharacter Function UpdateGemsAmount

// Begin Class AThirdPersonSurviorCharacter Function UpdateHealth
struct Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics
{
	struct ThirdPersonSurviorCharacter_eventUpdateHealth_Parms
	{
		float HealthChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::NewProp_HealthChange = { "HealthChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonSurviorCharacter_eventUpdateHealth_Parms, HealthChange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::NewProp_HealthChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonSurviorCharacter, nullptr, "UpdateHealth", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::ThirdPersonSurviorCharacter_eventUpdateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::ThirdPersonSurviorCharacter_eventUpdateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThirdPersonSurviorCharacter::execUpdateHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHealth(Z_Param_HealthChange);
	P_NATIVE_END;
}
// End Class AThirdPersonSurviorCharacter Function UpdateHealth

// Begin Class AThirdPersonSurviorCharacter
void AThirdPersonSurviorCharacter::StaticRegisterNativesAThirdPersonSurviorCharacter()
{
	UClass* Class = AThirdPersonSurviorCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentGemsAmount", &AThirdPersonSurviorCharacter::execGetCurrentGemsAmount },
		{ "GetCurrentHealth", &AThirdPersonSurviorCharacter::execGetCurrentHealth },
		{ "GetMaxHealth", &AThirdPersonSurviorCharacter::execGetMaxHealth },
		{ "UpdateGemsAmount", &AThirdPersonSurviorCharacter::execUpdateGemsAmount },
		{ "UpdateHealth", &AThirdPersonSurviorCharacter::execUpdateHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonSurviorCharacter);
UClass* Z_Construct_UClass_AThirdPersonSurviorCharacter_NoRegister()
{
	return AThirdPersonSurviorCharacter::StaticClass();
}
struct Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdPersonSurviorCharacter.h" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGemsAmount_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGemsAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentGemsAmount, "GetCurrentGemsAmount" }, // 56488318
		{ &Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetCurrentHealth, "GetCurrentHealth" }, // 366698592
		{ &Z_Construct_UFunction_AThirdPersonSurviorCharacter_GetMaxHealth, "GetMaxHealth" }, // 2033006642
		{ &Z_Construct_UFunction_AThirdPersonSurviorCharacter_HealthChangeEffect, "HealthChangeEffect" }, // 2265413147
		{ &Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateGemsAmount, "UpdateGemsAmount" }, // 3479653443
		{ &Z_Construct_UFunction_AThirdPersonSurviorCharacter_UpdateHealth, "UpdateHealth" }, // 3860719267
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonSurviorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_CurrentGemsAmount = { "CurrentGemsAmount", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorCharacter, CurrentGemsAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGemsAmount_MetaData), NewProp_CurrentGemsAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::NewProp_CurrentGemsAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonSurvior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::ClassParams = {
	&AThirdPersonSurviorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThirdPersonSurviorCharacter()
{
	if (!Z_Registration_Info_UClass_AThirdPersonSurviorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonSurviorCharacter.OuterSingleton, Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPersonSurviorCharacter.OuterSingleton;
}
template<> THIRDPERSONSURVIOR_API UClass* StaticClass<AThirdPersonSurviorCharacter>()
{
	return AThirdPersonSurviorCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonSurviorCharacter);
AThirdPersonSurviorCharacter::~AThirdPersonSurviorCharacter() {}
// End Class AThirdPersonSurviorCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonSurviorCharacter, AThirdPersonSurviorCharacter::StaticClass, TEXT("AThirdPersonSurviorCharacter"), &Z_Registration_Info_UClass_AThirdPersonSurviorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonSurviorCharacter), 333239501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_1191594558(TEXT("/Script/ThirdPersonSurvior"),
	Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
