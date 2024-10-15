// Fill out your copyright notice in the Description page of Project Settings.


#include "GemPickup.h"

AGemPickup::AGemPickup()
{
	GetMesh()->SetSimulatePhysics(false);
}

void AGemPickup::OnPickup(AThirdPersonSurviorCharacter* Character)
{
	Character->UpdateGemsAmount();
	Destroy();
}
