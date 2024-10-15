// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "GemPickup.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSURVIOR_API AGemPickup : public APickup
{
	GENERATED_BODY()
	
public:
	 
	AGemPickup();

	virtual void OnPickup(AThirdPersonSurviorCharacter* Character) override;
};
