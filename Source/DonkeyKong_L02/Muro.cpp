// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "Engine/Engine.h" // Para mostrar mensajes en pantalla
#include "GameFramework/Character.h" 
// Sets default values
AMuro::AMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	muroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroMesh"));
	RootComponent = muroMesh;

	SetActorScale3D(FVector(1.0f, 0.2f, 1.0f));

	// Habilitar la detección de colisiones
	muroMesh->SetCollisionProfileName(TEXT("OverlapAll"));
}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMuro::NotifyActorBeginOverlap(AActor* OtherActor)
{
	// Verificar si el actor que colisionó es el personaje principal
	if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
	{
		// Mostrar mensaje por defecto (puedes sobrescribir esto en las clases hijas)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Mario colisionó con un muro"));
	}
}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


