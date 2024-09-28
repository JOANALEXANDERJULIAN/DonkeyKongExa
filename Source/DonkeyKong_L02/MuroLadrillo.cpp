// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroLadrillo.h"
#include "GameFramework/Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/Engine.h"
void AMuroLadrillo::BeginPlay()
{
	Super::BeginPlay();
}

AMuroLadrillo::AMuroLadrillo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroLadrilloAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroLadrilloAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroLadrilloAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (MaterialAsset.Succeeded())
	{
		muroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}
}

void AMuroLadrillo::Tick(float DeltaTime)
{
}
void AMuroLadrillo::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// Verificar si el actor que colisionó es el personaje principal
	if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
	{
		// Mostrar mensaje específico para MuroElectrico
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Muro de Ladrillo"));
	}
}

