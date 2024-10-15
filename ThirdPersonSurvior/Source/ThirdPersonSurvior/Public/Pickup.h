// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <ThirdPersonSurvior/ThirdPersonSurviorCharacter.h>
#include "Pickup.generated.h"

UCLASS()
class THIRDPERSONSURVIOR_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	FORCEINLINE UStaticMeshComponent* GetMesh() const { return PickupMesh; }

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	virtual void OnPickup(AThirdPersonSurviorCharacter* Character);

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* PickupMesh;
};
