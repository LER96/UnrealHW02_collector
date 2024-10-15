#include "Pickup.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent = PickupMesh;
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
}

void APickup::OnPickup(AThirdPersonSurviorCharacter* Character)
{
}

void APickup::NotifyActorBeginOverlap(AActor* Actor)
{
	AThirdPersonSurviorCharacter* Character = Cast<AThirdPersonSurviorCharacter>(Actor);

	if (Character)
	{
		OnPickup(Character);
	}
}
