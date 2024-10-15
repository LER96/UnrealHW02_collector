// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThirdPersonSurviorCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSURVIOR_ThirdPersonSurviorCharacter_generated_h
#error "ThirdPersonSurviorCharacter.generated.h already included, missing '#pragma once' in ThirdPersonSurviorCharacter.h"
#endif
#define THIRDPERSONSURVIOR_ThirdPersonSurviorCharacter_generated_h

#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateGemsAmount); \
	DECLARE_FUNCTION(execGetCurrentGemsAmount); \
	DECLARE_FUNCTION(execUpdateHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth);


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_CALLBACK_WRAPPERS
#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonSurviorCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonSurviorCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonSurviorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonSurvior"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonSurviorCharacter)


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThirdPersonSurviorCharacter(AThirdPersonSurviorCharacter&&); \
	AThirdPersonSurviorCharacter(const AThirdPersonSurviorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonSurviorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonSurviorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonSurviorCharacter) \
	NO_API virtual ~AThirdPersonSurviorCharacter();


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_18_PROLOG
#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_CALLBACK_WRAPPERS \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSURVIOR_API UClass* StaticClass<class AThirdPersonSurviorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
