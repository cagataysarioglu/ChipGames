// Fill out your copyright notice in the Description page of Project Settings.

#include "SaveManager.h"

void USaveManager::Init()
{
}

void USaveManager::QueryAllSaveInterfaces()
{
}

void USaveManager::SaveGame()
{
}

void USaveManager::LoadGame()
{
}

void USaveManager::DeleteSlot(const FString& slot)
{
}

FString USaveManager::GetNewSaveSlot(bool& slot_found)
{
	return FString();
}

void USaveManager::SetCurrentSaveSlot(const FString& slot)
{
}

FString USaveManager::GetCurrentSaveSlot()
{
	return FString();
}

TArray<FSaveMetadata> USaveManager::GetAllSaveMetadata()
{
	return TArray<FSaveMetadata>();
}
