// Fill out your copyright notice in the Description page of Project Settings.
/*

#include "EnemyTortuga.h"
#include "Projectile.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
// Sets default values
AEnemyTortuga::AEnemyTortuga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Configura el cubo
	CuboMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CuboMesh"));
	RootComponent = CuboMesh;

	// Carga una malla para el cubo (puedes cambiarla por otra)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	if (CuboMeshAsset.Succeeded())
	{
		CuboMesh->SetStaticMesh(CuboMeshAsset.Object);
	}

}

// Called when the game starts or when spawned
void AEnemyTortuga::BeginPlay()
{
	Super::BeginPlay();
	SetPosicionAleatoriaSobrePlataforma(); // Posiciona el cubo aleatoriamente sobre las plataformas

	// Configura el timer para disparar proyectiles cada 2 segundos
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparo, this, &AEnemyTortuga::DispararProyectile, 2.0f, true);
}

// Called every frame
void AEnemyTortuga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Función que dispara el proyectil
void AEnemyTortuga::DispararProyectile()
{
	if (ProjectileClass != nullptr)
	{
		// La posición del proyectil debe estar en frente del cubo
		FVector SpawnLocation = GetActorLocation() + FVector(100.0f, 0.0f, 0.0f);
		FRotator SpawnRotation = GetActorRotation();

		// Configura el disparo del proyectil
		GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
	}
}


// Posiciona el cubo aleatoriamente sobre las plataformas
void AEnemyTortuga::SetPosicionAleatoriaSobrePlataforma()
{
	// Obtén las plataformas en el mundo y selecciona una posición aleatoria (esto depende de tu implementación de plataformas)
	TArray<AComponentPlataforma*> Plataformas;
	// Suponiendo que tienes un array global o forma de obtener las plataformas, rellena 'Plataformas' aquí.

	if (Plataformas.Num() > 0)
	{
		// Selecciona una plataforma aleatoria
		int32 PlataformaIndex = FMath::RandRange(0, Plataformas.Num() - 1);
		FVector PlataformaLocation = Plataformas[PlataformaIndex]->GetActorLocation();

		// Posiciona el cubo en esa plataforma
		SetActorLocation(PlataformaLocation + FVector(0.0f, 0.0f, 100.0f)); // Ajusta Z según sea necesario
	}
}*/
