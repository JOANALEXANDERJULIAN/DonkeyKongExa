// Fill out your copyright notice in the Description page of Project Settings.
/*
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "barril.generated.h"
UENUM(BlueprintType)
enum class EbarrilType : uint8
{
	BT_Corcho UMETA(DisplayName = "Corcho"),
	BT_Acero UMETA(DisplayName = "Acero"),
	BT_Fantasma UMETA(DisplayName = "Fantasma")
};
class UStaticMeshComponent;
UCLASS()
class DONKEYKONG_L02_API Abarril : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Abarril();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UStaticMeshComponent* BarrilMesh;

	// Tipo de barril
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barril")
	EbarrilType barrilType;

	// Método para aplicar propiedades según el tipo de barril
	void ApplyBarrilProperties();
};
*/