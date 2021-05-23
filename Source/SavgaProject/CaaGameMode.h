// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CaaGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SAVGAPROJECT_API ACaaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACaaGameMode();

	virtual void InitGameState() override;
	
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) override;
};
