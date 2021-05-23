#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameData.generated.h"

USTRUCT()
struct FSaveData
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere)
	TArray<uint8> Data;
};

UCLASS()
class SAVGAPROJECT_API USaveGameData : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TMap<FString, FSaveData> SerializedData;
};
