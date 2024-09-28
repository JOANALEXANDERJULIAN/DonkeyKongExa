// Fill out your copyright notice in the Description page of Project Settings.

/*#pragma once*/
/*
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectill.generated.h"
class UStaticMeshComponent;
class UProjectileMovementComponent;
UCLASS()
class DONKEYKONG_L02_API AProyectill : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProyectill();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Function to handle the projectile hitting something
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	// Mesh component for the projectile
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;

	// Projectile movement component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;
};*/
