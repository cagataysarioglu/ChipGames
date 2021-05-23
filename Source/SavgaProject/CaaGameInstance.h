// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CaaGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SAVGAPROJECT_API UCaaGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
};
