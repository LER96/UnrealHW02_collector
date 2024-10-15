// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealthPickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSURVIOR_HealthPickup_generated_h
#error "HealthPickup.generated.h already included, missing '#pragma once' in HealthPickup.h"
#endif
#define THIRDPERSONSURVIOR_HealthPickup_generated_h

#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_HealthPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend struct Z_Construct_UClass_AHealthPickup_Statics; \
public: \
	DECLARE_CLASS(AHealthPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonSurvior"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup)


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_HealthPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHealthPickup(AHealthPickup&&); \
	AHealthPickup(const AHealthPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPickup) \
	NO_API virtual ~AHealthPickup();


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_HealthPickup_h_12_PROLOG
#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_HealthPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_HealthPickup_h_15_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_HealthPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSURVIOR_API UClass* StaticClass<class AHealthPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_HealthPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
