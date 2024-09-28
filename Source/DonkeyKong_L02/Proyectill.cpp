// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "Proyectill.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AProyectill::AProyectill()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create and setup the mesh component
    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    RootComponent = ProjectileMesh;
    ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
    ProjectileMesh->OnComponentHit.AddDynamic(this, &AProyectill::OnHit);

    // Create the projectile movement component
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->UpdatedComponent = ProjectileMesh;
    ProjectileMovement->InitialSpeed = 1000.f;
    ProjectileMovement->MaxSpeed = 1000.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = false;
    ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity
}

// Called when the game starts or when spawned
void AProyectill::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void AProyectill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Function to handle the projectile hitting something
void AProyectill::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    // Only add impulse and destroy projectile if we hit a physics-enabled component
    if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
    {
        OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
    }

    Destroy();
}*/
