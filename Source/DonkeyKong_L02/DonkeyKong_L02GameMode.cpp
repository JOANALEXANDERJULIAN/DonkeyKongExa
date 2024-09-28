// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_L02GameMode.h"
#include "DonkeyKong_L02Character.h"
#include "UObject/ConstructorHelpers.h"
#include "ComponentPlataforma.h"
#include "Enemigo1.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "Muro.h"
#include "MuroElectrico.h"
#include "MuroLadrillo.h"
#include "MuroPegajoso.h"
#include "MuroCongelado.h"
#include "MuroMetalico.h"
#include "Enemy01.h" 
#include "Kismet/GameplayStatics.h"

ADonkeyKong_L02GameMode::ADonkeyKong_L02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		//holazzcxzc
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADonkeyKong_L02GameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, TEXT("Creando plataformas"));

	// Variables para la creación de plataformas
	FVector posicionInicial = FVector(1090.0f, 640.0f, 430.0f);
	FRotator rotacionInicial = FRotator(-1.0f, -1.0f, -11.0f);
	FTransform SpawnLocationCP;
	float anchoComponentPlataforma = 600.0f;
	float incrementoAltoComponentPlataforma = -105.0f;
	float incrementoAltoEntrePisos = 800.0f;
	float incrementoInicioPiso = 100.0f;
	int32 PlataformaId = 10;

	// Declaración correcta de PlataformasEnPisoArray
	TArray<AComponentPlataforma*> PlataformasEnPisoArray;
	// Loop para generar plataformas en 5 pisos
	for (int npp = 0; npp < 5; npp++)
	{
		// Ajustar rotación y posiciones para los primeros 4 pisos
		if (npp < 4)
		{
			rotacionInicial.Roll = rotacionInicial.Roll * -1;
			incrementoInicioPiso = incrementoInicioPiso * -1;
			incrementoAltoComponentPlataforma = incrementoAltoComponentPlataforma * -1;
		}
		else
		{
			// Último piso debe ser plano
			rotacionInicial = FRotator(0.0f, 0.0f, 0.0f);
		}
		// Asegúrate de que esta declaración esté fuera del bucle
		PlataformasEnPisoArray.Empty(); // Limpiar el array para cada piso

		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
		TMap<int32, AComponentPlataforma*> PlataformasEnPiso;

		// Crear plataformas para cada piso
		for (int ncp = 0; ncp < 10; ncp++)
		{
			FVector PlataformaPosicion = FVector(posicionInicial.X, posicionInicial.Y - anchoComponentPlataforma * ncp, posicionInicial.Z);

			// Asegurar que el último piso sea plano
			if (npp == 4)
			{
				PlataformaPosicion.Y = posicionInicial.Y - anchoComponentPlataforma * ncp;
			}

			SpawnLocationCP.SetLocation(PlataformaPosicion);
			AComponentPlataforma* NuevaPlataforma = GetWorld()->SpawnActor<AComponentPlataforma>(AComponentPlataforma::StaticClass(), SpawnLocationCP);

			if (NuevaPlataforma)
			{
				// Almacena la plataforma en el TMap utilizando PlataformaId como clave
				ComponentesPlataformaMap.Add(PlataformaId++, NuevaPlataforma);
				// Almacena en el array
				PlataformasEnPisoArray.Add(NuevaPlataforma);
				// Cambia esto a la forma correcta de almacenar en PlataformasEnPiso
				PlataformasEnPiso.Add(PlataformaId - 1, NuevaPlataforma); // Usa PlataformaId - 1 como clave
			}

			if (ncp < 4)
			{
				posicionInicial.Z += incrementoAltoComponentPlataforma;
			}
		}

		// Movimiento aleatorio para plataformas en los primeros 4 pisos
		if (npp < 4)
		{
			TArray<int32> ClavesPlataformas;
			PlataformasEnPiso.GetKeys(ClavesPlataformas);

			// Seleccionar aleatoriamente 3 plataformas para moverse
			if (ClavesPlataformas.Num() > 2)
			{
				while (ClavesPlataformas.Num() > 2)
				{
					ClavesPlataformas.RemoveAt(FMath::RandRange(0, ClavesPlataformas.Num() - 1));
				}

				for (int32 Clave : ClavesPlataformas)
				{
					if (AComponentPlataforma* Plataforma = *PlataformasEnPiso.Find(Clave))
					{
						Plataforma->SetDeberiaMoverse(true);
					}
				}
			}

			// Ajuste de posición para el siguiente piso
			posicionInicial.Z += incrementoAltoEntrePisos;
			posicionInicial.Y -= incrementoInicioPiso;
		}
	}

	// Colocar al personaje en la última plataforma
	float alturaUltimaPlataforma = posicionInicial.Z - incrementoAltoEntrePisos;
	float alturaPlataforma = 430.0f;  // Ajusta esto según la altura real de tus plataformas
	ADonkeyKong_L02Character* MiPersonaje = Cast<ADonkeyKong_L02Character>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (MiPersonaje)
	{
		FVector NuevaPosicionPersonaje = MiPersonaje->GetActorLocation();
		NuevaPosicionPersonaje.Z = alturaUltimaPlataforma;
		MiPersonaje->SetActorLocation(NuevaPosicionPersonaje);

		// Crear enemigos y muros sobre las plataformas
		CrearEnemigosSobrePlataformas();
		CrearMurosSobrePlataformas();
		CrearEnemigoSobrePlataforma();
	}
}

void ADonkeyKong_L02GameMode::CrearEnemigosSobrePlataformas()
{
	if (ComponentesPlataformaMap.Num() > 0)
	{
		TArray<AComponentPlataforma*> PlataformasDisponibles;
		ComponentesPlataformaMap.GenerateValueArray(PlataformasDisponibles);

		for (int32 i = 0; i < 3; i++)
		{
			int32 IndiceAleatorio = FMath::RandRange(0, PlataformasDisponibles.Num() - 1);
			AComponentPlataforma* PlataformaSeleccionada = PlataformasDisponibles[IndiceAleatorio];

			if (PlataformaSeleccionada)
			{
				FVector EnemigoLocation = PlataformaSeleccionada->GetActorLocation() + FVector(0.0f, -1.0f, 90.0f);
				GetWorld()->SpawnActor<AEnemigo1>(AEnemigo1::StaticClass(), EnemigoLocation, FRotator::ZeroRotator);
				PlataformasDisponibles.RemoveAt(IndiceAleatorio);
			}
		}
	}
}

void ADonkeyKong_L02GameMode::CrearEnemigoSobrePlataforma()
{
	// Suponiendo que quieres colocar solo un enemigo en el centro de las plataformas
	if (ComponentesPlataformaMap.Num() > 0)
	{
		// Calcula la posición central
		FVector PosicionCentral(0.0f, 0.0f, 0.0f);
		for (auto& Plataforma : ComponentesPlataformaMap)
		{
			PosicionCentral += Plataforma.Value->GetActorLocation();
		}
		PosicionCentral /= ComponentesPlataformaMap.Num(); // Promedio

		// Spawn del enemigo
		FRotator EnemigoRotacion = FRotator::ZeroRotator;
		GetWorld()->SpawnActor<AEnemy01>(AEnemy01::StaticClass(), PosicionCentral + FVector(0.0f, 0.0f, 90.0f), EnemigoRotacion);
	}
}
void ADonkeyKong_L02GameMode::CrearMurosSobrePlataformas()
{
	if (ComponentesPlataformaMap.Num() > 0)
	{
		TMap<int32, TArray<AComponentPlataforma*>> PlataformasPorPiso;

		// Agrupar plataformas por pisos según la altura Z
		for (auto& Elem : ComponentesPlataformaMap)
		{
			int32 Piso = FMath::FloorToInt(Elem.Value->GetActorLocation().Z / 750.0f);
			PlataformasPorPiso.FindOrAdd(Piso).Add(Elem.Value);
		}

		// Crear muros aleatorios en cada piso
		for (auto& Elem : PlataformasPorPiso)
		{
			TArray<AComponentPlataforma*>& PlataformasEnPiso = Elem.Value;

			if (PlataformasEnPiso.Num() > 0)
			{
				ShuffleArray(PlataformasEnPiso);
				AComponentPlataforma* PlataformaSeleccionada = PlataformasEnPiso[0];

				if (PlataformaSeleccionada)
				{
					FVector MuroLocation = PlataformaSeleccionada->GetActorLocation() + FVector(0.0f, -1.0f, 90.0f);
					FRotator MuroRotator = FRotator::ZeroRotator;

					// Seleccionar aleatoriamente el tipo de muro
					TSubclassOf<AMuro> ClaseMuroAleatoria;
					int32 TipoMuro = FMath::RandRange(0, 4);
					switch (TipoMuro)
					{
					case 0:
						ClaseMuroAleatoria = AMuroElectrico::StaticClass();
						break;
					case 1:
						ClaseMuroAleatoria = AMuroLadrillo::StaticClass();
						break;
					case 2:
						ClaseMuroAleatoria = AMuroPegajoso::StaticClass();
						break;
					case 3:
						ClaseMuroAleatoria = AMuroCongelado::StaticClass();
						break;
					case 4:
						ClaseMuroAleatoria = AMuroMetalico::StaticClass();
						break;
					}

					GetWorld()->SpawnActor<AMuro>(ClaseMuroAleatoria, MuroLocation, MuroRotator);
				}
			}
		}
	}
}


/*void ADonkeyKong_L02GameMode::CrearMurosSobrePlataformas()
{
    if (ComponentesPlataformaMap.Num() > 0)
    {
        // Mapa para agrupar plataformas por pisos
        TMap<int32, TArray<AComponentPlataforma*>> PlataformasPorPiso;

        // Clasificar las plataformas por piso
        for (auto& Elem : ComponentesPlataformaMap)
        {
            int32 PlataformaId = Elem.Key;
            AComponentPlataforma* Plataforma = Elem.Value;

            // Extraer el piso de acuerdo con la posición Z (ajustar según tu lógica)
            int32 Piso = FMath::FloorToInt(Plataforma->GetActorLocation().Z / 750.0f); // Dividir por la altura entre pisos

            PlataformasPorPiso.FindOrAdd(Piso).Add(Plataforma);
        }

        // Iterar sobre cada piso y seleccionar aleatoriamente una plataforma
        for (auto& Elem : PlataformasPorPiso)
        {
            int32 Piso = Elem.Key;
            TArray<AComponentPlataforma*>& PlataformasEnPiso = Elem.Value;

            if (PlataformasEnPiso.Num() > 0)
            {
                // Seleccionar aleatoriamente una plataforma del piso actual
                int32 IndiceAleatorioPlataforma = FMath::RandRange(0, PlataformasEnPiso.Num() - 1);
                AComponentPlataforma* PlataformaSeleccionada = PlataformasEnPiso[IndiceAleatorioPlataforma];

                if (PlataformaSeleccionada)
                {
                    FVector MuroLocation = PlataformaSeleccionada->GetActorLocation() + FVector(0.0f, 0.0f, 80.0f); // Ajuste en altura
                    FRotator MuroRotator = FRotator::ZeroRotator;

                    // Seleccionar aleatoriamente una de las clases de muro
                    int32 IndiceAleatorioMuro = FMath::RandRange(0, 3); // Cambia el rango si añades más clases hijas

                    TSubclassOf<AMuro> ClaseMuroSeleccionada;
                    switch (IndiceAleatorioMuro)
                    {
                    case 0:
                        ClaseMuroSeleccionada = AMuroElectrico::StaticClass();
                        break;
                    case 1:
                        ClaseMuroSeleccionada = AMuroLadrillo::StaticClass();
                        break;
                    case 2:
                        ClaseMuroSeleccionada = AMuroPegajoso::StaticClass();
                        break;
                    case 3:
                        ClaseMuroSeleccionada = AMuroCongelado::StaticClass();
                        break;
                    default:
                        ClaseMuroSeleccionada = AMuroElectrico::StaticClass(); // Fallback
                        break;
                    }

                    // Spawn del muro seleccionado
                    GetWorld()->SpawnActor<AMuro>(ClaseMuroSeleccionada, MuroLocation, MuroRotator);
                }
            }
        }
    }
}*/





