// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "TrapPickup.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSURVIOR_API ATrapPickup : public APickup
{
	GENERATED_BODY()
	
public:

	ATrapPickup();

	virtual void OnPickup(AThirdPersonSurviorCharacter* Character) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage", meta = (BlueprintProtected = "true"))
	float DamageAmount;
};
