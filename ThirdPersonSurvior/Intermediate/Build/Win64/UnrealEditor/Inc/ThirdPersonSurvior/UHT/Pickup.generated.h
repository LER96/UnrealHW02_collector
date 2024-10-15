// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AThirdPersonSurviorCharacter;
#ifdef THIRDPERSONSURVIOR_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define THIRDPERSONSURVIOR_Pickup_generated_h

#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPickup);


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonSurvior"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APickup(APickup&&); \
	APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h_10_PROLOG
#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h_13_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSURVIOR_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_Public_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
