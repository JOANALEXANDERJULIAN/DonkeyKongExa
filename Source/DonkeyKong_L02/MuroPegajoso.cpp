// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroPegajoso.h"
#include "GameFramework/Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/Engine.h"
void AMuroPegajoso::BeginPlay()
{
	Super::BeginPlay();
}

AMuroPegajoso::AMuroPegajoso()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroPegajosoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroPegajosoAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroPegajosoAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Grass.M_Ground_Grass'"));
	if (MaterialAsset.Succeeded())
	{
		muroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Sparks.P_Sparks'"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}
}

void AMuroPegajoso::Tick(float DeltaTime)
{
}
void AMuroPegajoso::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// Verificar si el actor que colisionó es el personaje principal
	if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
	{
		// Mostrar mensaje específico para MuroElectrico
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Mario Pegajoso"));
	}
}