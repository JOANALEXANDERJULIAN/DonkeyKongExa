// Fill out your copyright notice in the Description page of Project Settings.


#include "projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
// Sets default values
Aprojectile::Aprojectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	//static ConstructorHelpers::FObjectFinder<UMaterial> ProjectileMaterial(TEXT("Material'/Game/Meshs/Materiales/MaterialBala.MaterialBala'"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectiloMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	//ProjectileMesh->SetMaterial(0, ProjectileMaterial.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &Aprojectile::OnHit);// set up a notification for when this component hits something
	SetRootComponent(ProjectileMesh);

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void Aprojectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}


