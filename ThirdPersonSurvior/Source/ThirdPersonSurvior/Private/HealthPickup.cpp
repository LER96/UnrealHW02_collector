// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPickup.h"

AHealthPickup::AHealthPickup()
{
	GetMesh()->SetSimulatePhysics(false);
	HealAmount = 150.0f;
}


float AHealthPickup::GetHealAmount() const
{
	return HealAmount;
}

void AHealthPickup::OnPickup(AThirdPersonSurviorCharacter* Character)
{
	Character->UpdateHealth(HealAmount);

	Destroy();
}
