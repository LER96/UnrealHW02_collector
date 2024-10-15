// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonSurvior/ThirdPersonSurviorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonSurviorGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_AThirdPersonSurviorGameMode();
THIRDPERSONSURVIOR_API UClass* Z_Construct_UClass_AThirdPersonSurviorGameMode_NoRegister();
THIRDPERSONSURVIOR_API UEnum* Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThirdPersonSurvior();
// End Cross Module References

// Begin Enum EGamePlayState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamePlayState;
static UEnum* EGamePlayState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGamePlayState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGamePlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState, (UObject*)Z_Construct_UPackage__Script_ThirdPersonSurvior(), TEXT("EGamePlayState"));
	}
	return Z_Registration_Info_UEnum_EGamePlayState.OuterSingleton;
}
template<> THIRDPERSONSURVIOR_API UEnum* StaticEnum<EGamePlayState>()
{
	return EGamePlayState_StaticEnum();
}
struct Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EGameOver.Name", "EGamePlayState::EGameOver" },
		{ "EPlaying.Name", "EGamePlayState::EPlaying" },
		{ "EUnknown.Name", "EGamePlayState::EUnknown" },
		{ "EWon.Name", "EGamePlayState::EWon" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGamePlayState::EPlaying", (int64)EGamePlayState::EPlaying },
		{ "EGamePlayState::EGameOver", (int64)EGamePlayState::EGameOver },
		{ "EGamePlayState::EWon", (int64)EGamePlayState::EWon },
		{ "EGamePlayState::EUnknown", (int64)EGamePlayState::EUnknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonSurvior,
	nullptr,
	"EGamePlayState",
	"EGamePlayState",
	Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState()
{
	if (!Z_Registration_Info_UEnum_EGamePlayState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamePlayState.InnerSingleton, Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGamePlayState.InnerSingleton;
}
// End Enum EGamePlayState

// Begin Class AThirdPersonSurviorGameMode Function GetCurrentState
struct Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics
{
	struct ThirdPersonSurviorGameMode_eventGetCurrentState_Parms
	{
		EGamePlayState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonSurviorGameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_ThirdPersonSurvior_EGamePlayState, METADATA_PARAMS(0, nullptr) }; // 842800343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonSurviorGameMode, nullptr, "GetCurrentState", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::ThirdPersonSurviorGameMode_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::ThirdPersonSurviorGameMode_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThirdPersonSurviorGameMode::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// End Class AThirdPersonSurviorGameMode Function GetCurrentState

// Begin Class AThirdPersonSurviorGameMode Function GetGemsAmountToWin
struct Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics
{
	struct ThirdPersonSurviorGameMode_eventGetGemsAmountToWin_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gems" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThirdPersonSurviorGameMode_eventGetGemsAmountToWin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonSurviorGameMode, nullptr, "GetGemsAmountToWin", nullptr, nullptr, Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::ThirdPersonSurviorGameMode_eventGetGemsAmountToWin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::ThirdPersonSurviorGameMode_eventGetGemsAmountToWin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThirdPersonSurviorGameMode::execGetGemsAmountToWin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGemsAmountToWin();
	P_NATIVE_END;
}
// End Class AThirdPersonSurviorGameMode Function GetGemsAmountToWin

// Begin Class AThirdPersonSurviorGameMode
void AThirdPersonSurviorGameMode::StaticRegisterNativesAThirdPersonSurviorGameMode()
{
	UClass* Class = AThirdPersonSurviorGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentState", &AThirdPersonSurviorGameMode::execGetCurrentState },
		{ "GetGemsAmountToWin", &AThirdPersonSurviorGameMode::execGetGemsAmountToWin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonSurviorGameMode);
UClass* Z_Construct_UClass_AThirdPersonSurviorGameMode_NoRegister()
{
	return AThirdPersonSurviorGameMode::StaticClass();
}
struct Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThirdPersonSurviorGameMode.h" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GemsAmountToWin_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Gems" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTime_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Time" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonSurviorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GemsAmountToWin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetCurrentState, "GetCurrentState" }, // 144623582
		{ &Z_Construct_UFunction_AThirdPersonSurviorGameMode_GetGemsAmountToWin, "GetGemsAmountToWin" }, // 1180770982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonSurviorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorGameMode, DecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayRate_MetaData), NewProp_DecayRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_GemsAmountToWin = { "GemsAmountToWin", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorGameMode, GemsAmountToWin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GemsAmountToWin_MetaData), NewProp_GemsAmountToWin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_GameTime = { "GameTime", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorGameMode, GameTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTime_MetaData), NewProp_GameTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorGameMode, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonSurviorGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_DecayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_GemsAmountToWin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_GameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::NewProp_CurrentWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonSurvior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::ClassParams = {
	&AThirdPersonSurviorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThirdPersonSurviorGameMode()
{
	if (!Z_Registration_Info_UClass_AThirdPersonSurviorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonSurviorGameMode.OuterSingleton, Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPersonSurviorGameMode.OuterSingleton;
}
template<> THIRDPERSONSURVIOR_API UClass* StaticClass<AThirdPersonSurviorGameMode>()
{
	return AThirdPersonSurviorGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonSurviorGameMode);
AThirdPersonSurviorGameMode::~AThirdPersonSurviorGameMode() {}
// End Class AThirdPersonSurviorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGamePlayState_StaticEnum, TEXT("EGamePlayState"), &Z_Registration_Info_UEnum_EGamePlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 842800343U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonSurviorGameMode, AThirdPersonSurviorGameMode::StaticClass, TEXT("AThirdPersonSurviorGameMode"), &Z_Registration_Info_UClass_AThirdPersonSurviorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonSurviorGameMode), 2947429063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_3756272461(TEXT("/Script/ThirdPersonSurvior"),
	Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
