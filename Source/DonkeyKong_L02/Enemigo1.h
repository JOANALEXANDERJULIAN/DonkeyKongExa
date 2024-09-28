// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo1.generated.h"

UCLASS()
class DONKEYKONG_L02_API AEnemigo1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* CubeMesh;

	//Para que dispare a la derecha
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Fire;

	float FireRate;

	uint32 bCanFire : 1;

	void FireShot();

	FTimerHandle TimerHandle_ShotTimerExpired;
	void ShotTimer();
};
