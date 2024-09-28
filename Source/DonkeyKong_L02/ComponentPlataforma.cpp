// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentPlataforma.h"
#include "Engine/World.h"
// Sets default values
AComponentPlataforma::AComponentPlataforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	meshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	meshPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = meshPlataforma;

	FVector NewScale(2.0f, 6.0f, 0.5f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);


	subir = false;
	detener = false;
	incrementoZ = 2.0f;

}

// Called when the game starts or when spawned
void AComponentPlataforma::BeginPlay()
{
	Super::BeginPlay();

	posicionActual = GetActorLocation();
	posicionInicial = posicionActual;
	posicionFinal = posicionActual + FVector(0.0f, 0.0f, 200.0f); // Modifica el vector de acuerdo a tu necesidad
}


// Called every frame
void AComponentPlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bDeberiaMoverse && !detener) {
		if (!subir)
		{
			if (posicionActual.Z < posicionFinal.Z)
			{
				posicionActual.Z += incrementoZ;
			}
			else
			{
				subir = true;
			}
		}
		else
		{
			if (posicionActual.Z > posicionInicial.Z)
			{
				posicionActual.Z -= incrementoZ;
			}
			else
			{
				subir = false;
			}
		}
	}

	SetActorLocation(posicionActual);

}



