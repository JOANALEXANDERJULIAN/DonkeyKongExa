// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy01.generated.h"

UCLASS()
class DONKEYKONG_L02_API AEnemy01 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Disparar proyectiles en todas direcciones
	void DispararProyectiles();

private:
	// Componente Static Mesh para la forma de cono
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* ConoMesh;

	// Tiempo entre disparos
	UPROPERTY(EditAnywhere, Category = "Disparo")
	float TiempoEntreDisparos;

	// Clase de los proyectiles
	UPROPERTY(EditAnywhere, Category = "Disparo")
	TSubclassOf<AActor> ProyectilClass;

	// Función para generar un disparo
	void GenerarDisparo(FVector Direccion);
	// Manejador de temporizador para controlar el tiempo entre disparos
	FTimerHandle TimerHandle_ShotTimerExpired;
};
