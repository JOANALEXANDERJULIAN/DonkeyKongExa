// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyTortuga.generated.h"
class AProjectile;  // Declara la clase del proyectil
class UStaticMeshComponent;
UCLASS()
class DONKEYKONG_L02_API AEnemyTortuga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyTortuga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CuboMesh;  // El cubo que dispara proyectiles

	FTimerHandle TimerHandle_Disparo; // Timer para disparos constantes

	// Función que dispara el proyectil
	void DispararProyectile();

	// Configuración de la posición inicial del cubo
	void SetPosicionAleatoriaSobrePlataforma();
};*/
