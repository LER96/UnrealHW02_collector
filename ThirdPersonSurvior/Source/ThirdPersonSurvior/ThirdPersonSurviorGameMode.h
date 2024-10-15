// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ThirdPersonSurviorGameMode.generated.h"

UENUM(BlueprintType)
enum class EGamePlayState : uint8
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class AThirdPersonSurviorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AThirdPersonSurviorGameMode();

	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintPure, Category = "Gems")
	int GetGemsAmountToWin() const; 

	UFUNCTION(BlueprintPure, Category = "Power")
	EGamePlayState GetCurrentState() const;

	void SetCurrentState(EGamePlayState NewState);

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", Meta = (BlueprintProtected = "true"))
	float DecayRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gems", Meta = (BlueprintProtected = "true"))
	int GemsAmountToWin;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Time", Meta = (BlueprintProtected = "true"))
	float GameTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", Meta = (BlueprintProtected = "true"))
	TSubclassOf<UUserWidget> HUDWidgetClass;

	UPROPERTY()
	UUserWidget* CurrentWidget;

private:

	EGamePlayState CurrentState;

	void HandleNewState(EGamePlayState NewState);

	TArray<class ASpawnVolume*> SpawnVolumeActors;
};
