// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroPegajoso.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroPegajoso : public AMuro
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

	// Sobrescribe la función NotifyActorBeginOverlap de la clase base AMuro
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

public:
	AMuroPegajoso();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
