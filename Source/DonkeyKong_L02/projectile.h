// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "projectile.generated.h"
class UStaticMeshComponent;
class UProjectileMovementComponent;
UCLASS()
class DONKEYKONG_L02_API Aprojectile : public AActor
{
	GENERATED_BODY()
	// Sphere collision component 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;
	// Projectile movement component 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;
	UPROPERTY()
	UMaterialInstanceDynamic* ProjectileMaterial;
public:	
	// Sets default values for this actor's properties
	Aprojectile();
	//Function to handle the projectile hitting something 
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// Returns ProjectileMesh subobject 
	FORCEINLINE UStaticMeshComponent* GetProjectileMesh() const { return ProjectileMesh; }
	// Returns ProjectileMovement subobject 
	FORCEINLINE UProjectileMovementComponent* GetProjectilemovement() const { return ProjectileMovement; }


};
