// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThirdPersonSurviorGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGamePlayState : uint8;
#ifdef THIRDPERSONSURVIOR_ThirdPersonSurviorGameMode_generated_h
#error "ThirdPersonSurviorGameMode.generated.h already included, missing '#pragma once' in ThirdPersonSurviorGameMode.h"
#endif
#define THIRDPERSONSURVIOR_ThirdPersonSurviorGameMode_generated_h

#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetGemsAmountToWin);


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonSurviorGameMode(); \
	friend struct Z_Construct_UClass_AThirdPersonSurviorGameMode_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonSurviorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonSurvior"), THIRDPERSONSURVIOR_API) \
	DECLARE_SERIALIZER(AThirdPersonSurviorGameMode)


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThirdPersonSurviorGameMode(AThirdPersonSurviorGameMode&&); \
	AThirdPersonSurviorGameMode(const AThirdPersonSurviorGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THIRDPERSONSURVIOR_API, AThirdPersonSurviorGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonSurviorGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonSurviorGameMode) \
	THIRDPERSONSURVIOR_API virtual ~AThirdPersonSurviorGameMode();


#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_18_PROLOG
#define FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSURVIOR_API UClass* StaticClass<class AThirdPersonSurviorGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonSurvior_Source_ThirdPersonSurvior_ThirdPersonSurviorGameMode_h


#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(EGamePlayState::EPlaying) \
	op(EGamePlayState::EGameOver) \
	op(EGamePlayState::EWon) \
	op(EGamePlayState::EUnknown) 

enum class EGamePlayState : uint8;
template<> struct TIsUEnumClass<EGamePlayState> { enum { Value = true }; };
template<> THIRDPERSONSURVIOR_API UEnum* StaticEnum<EGamePlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
