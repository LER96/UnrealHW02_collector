// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonSurviorGameMode.h"
#include "ThirdPersonSurviorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include <Kismet/GameplayStatics.h>
#include "Blueprint/UserWidget.h"
#include "GameFramework/PawnMovementComponent.h"

AThirdPersonSurviorGameMode::AThirdPersonSurviorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PrimaryActorTick.bCanEverTick = true;
	DecayRate = 0.015f;
	GameTime = 300.0f;
}

void AThirdPersonSurviorGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GameTime -= DeltaTime;

	AThirdPersonSurviorCharacter* MyCharacter = Cast<AThirdPersonSurviorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	if (MyCharacter)
	{
		if (MyCharacter->GetCurrentGemsAmount() >= GemsAmountToWin)
		{
			SetCurrentState(EGamePlayState::EWon);
		}
		else if (MyCharacter->GetCurrentHealth() > 0)
		{
			MyCharacter->UpdateHealth(-DeltaTime * DecayRate * (MyCharacter->GetMaxHealth()));
			/*if (MyCharacter->GetCurrentHealth() <= 0)
			{
				SetCurrentState(EGamePlayState::EGameOver);
			}*/
		}
	}

	if (GameTime <= 0.0f || MyCharacter->GetCurrentHealth() <= 0)
	{
		SetCurrentState(EGamePlayState::EGameOver);
	}
}


void AThirdPersonSurviorGameMode::BeginPlay()
{
	Super::BeginPlay();

	SetCurrentState(EGamePlayState::EPlaying);

	const AThirdPersonSurviorCharacter* MyCharacter = Cast< AThirdPersonSurviorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	GemsAmountToWin = 20;

	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

int AThirdPersonSurviorGameMode::GetGemsAmountToWin() const
{
	return GemsAmountToWin;
}

EGamePlayState AThirdPersonSurviorGameMode::GetCurrentState() const
{
	return CurrentState;
}

void AThirdPersonSurviorGameMode::SetCurrentState(EGamePlayState NewState)
{
	if (CurrentState != NewState)
	{
		CurrentState = NewState;
		HandleNewState(CurrentState);
	}
}

void AThirdPersonSurviorGameMode::HandleNewState(EGamePlayState NewState)
{
	switch (NewState)
	{
	case EGamePlayState::EPlaying:
	{
	}
	case EGamePlayState::EGameOver:
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (PlayerController)
		{
			PlayerController->SetCinematicMode(true, false, false, true, true);
		}

		ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
		if (MyCharacter)
		{
			MyCharacter->GetMesh()->SetSimulatePhysics(true);
			MyCharacter->GetMovementComponent()->MovementState.bCanJump = false;
		}
		break;
	}
	case EGamePlayState::EWon:
	{
	}
	case EGamePlayState::EUnknown:
		break;
	}

}

