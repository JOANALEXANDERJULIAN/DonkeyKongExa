// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroCongelado.h"
#include "GameFramework/Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/Engine.h"
void AMuroCongelado::BeginPlay()
{
Super::BeginPlay();

}
AMuroCongelado::AMuroCongelado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroCongeladoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroCongeladoAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroCongeladoAsset.Object);
	}
	                                                                      //Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Hewn_Stone.M_Brick_Hewn_Stone'"));
	if (MaterialAsset.Succeeded())
	{
		muroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);
	                                                                                 ///Game/StarterContent/Particles/P_Fire.P_Fire
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit'"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}
}

void AMuroCongelado::Tick(float DeltaTime)
{
}

void AMuroCongelado::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// Verificar si el actor que colisionó es el personaje principal
	if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
	{
		// Mostrar mensaje específico para MuroElectrico
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Mario congelado"));
	}
}

