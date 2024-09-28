// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroCongelado.generated.h"
/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroCongelado : public AMuro
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

	// Sobrescribe la funci�n NotifyActorBeginOverlap de la clase base AMuro
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
public:
	AMuroCongelado();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
