// Fill out your copyright notice in the Description page of Project Settings.

#include "SaveManager.h"
#include "SaveGameMetadata.h"
#include "SaveGameData.h"
#include "Kismet/GameplayStatics.h"

static const FString KMetadataSaveSlot = "SaveGameMetadata";
static const int32 KMaxSaveSlots = 40;

FString USaveManager::CurrentSaveSlot;

void USaveManager::Init()
{
	CurrentSaveSlot = "Default";

	// Make sure the metadata file exists in case the game has never been ran.
	USaveGame* SaveGameMetadata = UGameplayStatics::LoadGameFromSlot(KMetadataSaveSlot, 0);

	if (SaveGameMetadata == nullptr)
	{
		// Since the metadata file does not exist, we need to create one.
		USaveGame* SaveGameObject = UGameplayStatics::CreateSaveGameObject(USaveGameMetadata::StaticClass());

		UGameplayStatics::SaveGameToSlot(SaveGameObject, KMetadataSaveSlot, 0);
	}

}

void USaveManager::QueryAllSaveInterfaces()
{
}

void USaveManager::SaveGame()
{
	// Create a new save game data instance.
	USaveGameData* SaveGameData = Cast<USaveGameData>(UGameplayStatics::CreateSaveGameObject(USaveGameData::StaticClass()));

	// Go over all the actors that need to be saved and save them.

	// Save the game to the current slot.
	UGameplayStatics::SaveGameToSlot(SaveGameData, CurrentSaveSlot, 0);

	// Update the metadata file with the new slot.
	USaveGameMetadata* SaveGameMetadata = Cast<USaveGameMetadata>(UGameplayStatics::LoadGameFromSlot(KMetadataSaveSlot, 0));

	FSaveMetadata& SaveMetadata = SaveGameMetadata->SavedGamesMetadata.FindOrAdd(CurrentSaveSlot);
	SaveMetadata.SlotName = CurrentSaveSlot;
	SaveMetadata.Date = FDateTime::Now();

	// Save the changes to the metadata file.
	UGameplayStatics::SaveGameToSlot(SaveGameMetadata, KMetadataSaveSlot, 0);

}

void USaveManager::LoadGame()
{
	USaveGameData* SaveGameData = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(CurrentSaveSlot, 0));

	if (SaveGameData == nullptr)
	{
		// No saves exist yet for this slot. Save a default one.
		SaveGame();

		// Reload it.
		SaveGameData = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(CurrentSaveSlot, 0));
	}

	// Loop over all actors that need to load dat and load their data.

}

void USaveManager::DeleteSlot(const FString& slot)
{
	// Delete the slot.
	UGameplayStatics::DeleteGameInSlot(slot, 0);

	// Loading the metadata file.
	USaveGameMetadata* SaveGameMetadata = Cast<USaveGameMetadata>(UGameplayStatics::LoadGameFromSlot(KMetadataSaveSlot, 0));

	SaveGameMetadata->SavedGamesMetadata.Remove(slot);

	// Save the metadata slot.
	UGameplayStatics::SaveGameToSlot(SaveGameMetadata, KMetadataSaveSlot, 0);

}

FString USaveManager::GetNewSaveSlot(bool& slot_found)
{
	slot_found = false;

	// Loading the metadata file.
	USaveGameMetadata* SaveGameMetadata = Cast<USaveGameMetadata>(UGameplayStatics::LoadGameFromSlot(KMetadataSaveSlot, 0));

	for (int32 i = 0; i < KMaxSaveSlots; ++i)
	{
		// SaklananOyun0, SaklananOyun1, SaklananOyun2 etc.
		FString slotName = "SaklananOyun" + FString::FromInt(i);

		if (SaveGameMetadata->SavedGamesMetadata.Contains(slotName) == false)
		{
			// We found a free slot.
			slot_found = true;
			return slotName;
		}
	}

	return FString();
}

void USaveManager::SetCurrentSaveSlot(const FString& slot)
{
	CurrentSaveSlot = slot;
}

FString USaveManager::GetCurrentSaveSlot()
{
	return CurrentSaveSlot;
}

TArray<FSaveMetadata> USaveManager::GetAllSaveMetadata()
{
	TArray<FSaveMetadata> metadata;

	// Loading the metadata file.
	USaveGameMetadata* SaveGameMetadata = Cast<USaveGameMetadata>(UGameplayStatics::LoadGameFromSlot(KMetadataSaveSlot, 0));

	metadata.Reserve(SaveGameMetadata->SavedGamesMetadata.Num());

	// Add each saved game's metadata to the return array.
	for (const auto& saved_game : SaveGameMetadata->SavedGamesMetadata)
	{
		metadata.Push(saved_game.Value);
	}

	return metadata;
}
