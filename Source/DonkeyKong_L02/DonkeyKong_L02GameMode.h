// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_L02GameMode.generated.h"
class AComponentPlataforma;
//class ATortuga;
//class Abarril;
/*UENUM(BlueprintType)
enum class EbarrilType : uint8
{
	BT_Corcho UMETA(DisplayName = "Corcho"),
	BT_Acero UMETA(DisplayName = "Acero"),
	BT_Fantasma UMETA(DisplayName = "Fantasma")
};*/
UCLASS(minimalapi)
class ADonkeyKong_L02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_L02GameMode();

	
	virtual void BeginPlay() override;

	// Declaración del método para crear enemigos sobre plataformas
	void CrearEnemigosSobrePlataformas(); // Asegúrate de agregar esta línea
	void CrearMurosSobrePlataformas();
	void CrearEnemigoSobrePlataforma();
private:
	
	TMap<int32, AComponentPlataforma*> ComponentesPlataformaMap; // Descomentar o asegurarse de que esté aquí

	// Implementación de la función ShuffleArray en el archivo .h
	template<typename T>
	void ShuffleArray(TArray<T>& Array)
	{
		const int32 LastIndex = Array.Num() - 1;
		for (int32 i = 0; i <= LastIndex; ++i)
		{
			const int32 SwapIndex = FMath::RandRange(i, LastIndex);
			if (i != SwapIndex)
			{
				Array.Swap(i, SwapIndex);
			}
		}
	}



};



