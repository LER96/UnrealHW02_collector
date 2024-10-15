// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "HealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSURVIOR_API AHealthPickup : public APickup
{
	GENERATED_BODY()

public: 
	AHealthPickup();

	float GetHealAmount() const;

	virtual void OnPickup(AThirdPersonSurviorCharacter* Character) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (BlueprintProtected = "true"))
	float HealAmount;
};
