// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SavgaSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class SAVGAPROJECT_API USavgaSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	USavgaSaveGame();

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	FVector PlayerLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	FString QuestText;

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	float Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	int HealthPack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	int Key;

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	int QuestItem;
	
};
