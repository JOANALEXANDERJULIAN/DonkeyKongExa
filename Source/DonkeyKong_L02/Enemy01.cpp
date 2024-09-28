// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy01.h"
#include "projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
// Sets default values
AEnemy01::AEnemy01()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Cargar la malla del cono
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Cono(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	ConoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Cono"));
	ConoMesh->SetStaticMesh(Cono.Object);
	SetRootComponent(ConoMesh);

	// Configurar el tiempo entre disparos
	TiempoEntreDisparos = 3.0f;
}

// Called when the game starts or when spawned
void AEnemy01::BeginPlay()
{
	Super::BeginPlay();
	// Iniciar el temporizador para disparar proyectiles
	GetWorldTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEnemy01::DispararProyectiles, TiempoEntreDisparos, true);
}

// Called every frame
void AEnemy01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AEnemy01::DispararProyectiles()
{
    // Aquí defines la dirección en la que quieres disparar
    TArray<FVector> Direcciones;

    // Define direcciones: arriba, abajo, izquierda, derecha, y diagonales
    Direcciones.Add(FVector(1.0f, 0.0f, 0.0f));  // Derecha
    Direcciones.Add(FVector(-1.0f, 0.0f, 0.0f)); // Izquierda
    Direcciones.Add(FVector(0.0f, 1.0f, 0.0f));  // Arriba
    Direcciones.Add(FVector(0.0f, -1.0f, 0.0f)); // Abajo
    Direcciones.Add(FVector(1.0f, 1.0f, 0.0f).GetSafeNormal());  // Diagonal derecha arriba
    Direcciones.Add(FVector(-1.0f, -1.0f, 0.0f).GetSafeNormal()); // Diagonal izquierda abajo
    Direcciones.Add(FVector(1.0f, -1.0f, 0.0f).GetSafeNormal()); // Diagonal derecha abajo
    Direcciones.Add(FVector(-1.0f, 1.0f, 0.0f).GetSafeNormal()); // Diagonal izquierda arriba

    for (const FVector& Direccion : Direcciones)
    {
        GenerarDisparo(Direccion);
    }
}


// Función para generar un disparo en una dirección específica
void AEnemy01::GenerarDisparo(FVector Direccion)
{
    UWorld* const World = GetWorld();
    if (World != nullptr && ProyectilClass != nullptr)
    {
        const FRotator FireRotation = Direccion.Rotation();
        const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(FVector(100.f, 0.f, 0.f)); // Ajustar la distancia si es necesario
        World->SpawnActor<Aprojectile>(ProyectilClass, SpawnLocation, FireRotation);
    }
}
