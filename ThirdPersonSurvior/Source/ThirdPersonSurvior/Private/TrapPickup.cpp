// Fill out your copyright notice in the Description page of Project Settings.


#include "TrapPickup.h"

ATrapPickup::ATrapPickup()
{
	GetMesh()->SetSimulatePhysics(false);
	DamageAmount = -200.0f;
}

void ATrapPickup::OnPickup(AThirdPersonSurviorCharacter* Character)
{
	Character->UpdateHealth(DamageAmount);
	Destroy();
}
