// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponentPlataforma.generated.h"

class UStaticMeshComponent;
UCLASS()
class DONKEYKONG_L02_API AComponentPlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComponentPlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UStaticMeshComponent* MeshPlataforma; // Cambiado para consistencia
	bool bDeberiaMoverse; // Nuevo miembro
	FVector posicionInicial;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoZ;
	bool detener;
	bool subir;

public:
	FORCEINLINE UStaticMeshComponent* GetMeshPlataforma() const { return MeshPlataforma; }
	FORCEINLINE void SetIncrementoZ(float incremento) { incrementoZ = incremento; }
	FORCEINLINE void SetDetener(bool _detener) { detener = _detener; }
	FORCEINLINE void SetDeberiaMoverse(bool deberiaMoverse) { bDeberiaMoverse = deberiaMoverse; } // Nueva función para modificar el miembro
 private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* meshPlataforma;
};
