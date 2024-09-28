

#include "MuroMetalico.h"
#include "GameFramework/Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/Engine.h"

void AMuroMetalico::BeginPlay()
{
	Super::BeginPlay();

}
AMuroMetalico::AMuroMetalico()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroMetalicoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroMetalicoAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroMetalicoAsset.Object);
	}
	//Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	if (MaterialAsset.Succeeded())
	{
		muroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);
	///Game/StarterContent/Particles/P_Fire.P_Fire
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit'"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}
}

void AMuroMetalico::Tick(float DeltaTime)
{
}

void AMuroMetalico::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// Verificar si el actor que colisionó es el personaje principal
	if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
	{
		// Mostrar mensaje específico para MuroElectrico
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Muro Metalico"));
	}
};



/*Acharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(Getworld(), 0);
if (MyCharacter)
{
	//establecer la mueva posicion 
	Fvetor NewLocation = Fvector(1100.0f, 1300.0f, 5300.0f);
	MyCharacter->SetActorLocation(NewLocation)
}*/