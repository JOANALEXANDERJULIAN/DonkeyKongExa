// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "Tortuga.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ATortuga::ATortuga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    tortugaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroMesh"));
    tortugaMesh->SetStaticMesh(mesh.Object);
    RootComponent = tortugaMesh;

    //posicionInicial = FVector(0.0f, 0.0f, 0.0f);
    //posicionActual = FVector(0.0f, 0.0f, 0.0f);
    //posicionFinal = FVector(0.0f, 0.0f, 0.0f);
    //incrementoZ = 2.0f;
    //bajando = true;
}

void ATortuga::moverTortuga()
{
}

// Called when the game starts or when spawned
/*void ATortuga::BeginPlay()
{
	Super::BeginPlay();
	/*posicionInicial = GetActorLocation();
	posicionActual = posicionInicial;
	posicionFinal = posicionInicial + FVector(0.0f, 0.0f, 100.0f);
}*/

/*void ATortuga::Tick(float DeltaTime)
{
	//if (bajando)
	//{
	//	posicionActual.Z -= incrementoZ;
	//	if (posicionActual.Z <= posicionFinal.Z)
	//	{
	//		bajando = false;
	//	}
	//}
	//else
	//{
	//	posicionActual.Z += incrementoZ;
	//	if (posicionActual.Z >= posicionInicial.Z)
	//	{
	//		bajando = true;
	//	}
	//}

	//SetActorLocation(posicionActual);
}*/
