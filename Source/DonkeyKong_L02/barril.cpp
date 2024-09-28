// Fill out your copyright notice in the Description page of Project Settings.
/*

#include "barril.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Character.h"
// Sets default values
Abarril::Abarril()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BarrilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrilMesh"));
	RootComponent = BarrilMesh;

	BarrilMesh->SetSimulatePhysics(true);
	BarrilMesh->SetMobility(EComponentMobility::Movable);
	BarrilMesh->SetCollisionProfileName(TEXT("PhysicsActor"));
}


// Called when the game starts or when spawned
void Abarril::BeginPlay()
{
	Super::BeginPlay();
	ApplyBarrilProperties();
}

// Called every frame
void Abarril::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Abarril::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (barrilType == EbarrilType::BT_Fantasma)
    {
        // No colisiona con el actor
        return;
    }

    if (OtherActor && (OtherActor != this) && OtherComp)
    {
        ACharacter* Character = Cast<ACharacter>(OtherActor);
        if (Character)
        {
            // Aplicar daño al personaje
            UGameplayStatics::ApplyDamage(Character, 10.0f, nullptr, this, nullptr);
        }
    }

}

void Abarril::ApplyBarrilProperties()
{
    switch (barrilType)
    {
    case EbarrilType::BT_Corcho:
        BarrilMesh->SetMassOverrideInKg(NAME_None, 10.0f); // Masa ligera
        break;
    case EbarrilType::BT_Acero:
        BarrilMesh->SetMassOverrideInKg(NAME_None, 1000.0f); // Masa pesada
        break;
    case EbarrilType::BT_Fantasma:
        BarrilMesh->SetCollisionProfileName(TEXT("NoCollision")); // No colisiona
        BarrilMesh->SetSimulatePhysics(false); // Desactiva física
        break;
    default:
        break;
    }
}
*/
