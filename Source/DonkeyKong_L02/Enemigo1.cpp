// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo1.h"
//#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "projectile.h"

// Sets default values
AEnemigo1::AEnemigo1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Cube(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Cube"));
	CubeMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.25f));
	CubeMesh->SetRelativeRotation(FRotator(0.f, 0.f, 90.f));
	CubeMesh->SetStaticMesh(Cube.Object);
	SetRootComponent(CubeMesh);

	Fire = FVector(0.f, 90.f, 0.f);
	FireRate = 0.2f;
	bCanFire = true;
}


// Called when the game starts or when spawned
void AEnemigo1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FireShot();
}
void AEnemigo1::FireShot()
{
	if (bCanFire == true) {
		FVector DirectionRight = FVector(0.f, -1.f, 0.f);
		FVector DirectionLeft = FVector(0.f, 1.f, 0.f);
		const FRotator FireRotationRight = DirectionRight.Rotation();
		const FRotator FireRotationLeft = DirectionLeft.Rotation();
		const FVector SpawnLocationRight = GetActorLocation() + FireRotationRight.RotateVector(Fire);
		const FVector SpawnLocationLeft = GetActorLocation() + FireRotationLeft.RotateVector(Fire);
		UWorld* const World1 = GetWorld();
		if (World1 != nullptr) {
			//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("Spawneo")));
			World1->SpawnActor<Aprojectile>(SpawnLocationRight, FireRotationRight);
			World1->SpawnActor<Aprojectile>(SpawnLocationLeft, FireRotationLeft);
		}
		bCanFire = false;
		World1->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEnemigo1::ShotTimer, FireRate);
	}
}

void AEnemigo1::ShotTimer()
{
	bCanFire = true;
}
