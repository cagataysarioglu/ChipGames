// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterBase.h"
#include "SavgaSaveGame.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerCharacterBase::APlayerCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("SaveGame", IE_Pressed, this, &APlayerCharacterBase::SaveGame);
	InputComponent->BindAction("LoadGame", IE_Pressed, this, &APlayerCharacterBase::LoadGame);

}

void APlayerCharacterBase::SaveGame()
{
	// Create an instance of save game class
	USavgaSaveGame* SaveGameInstance = Cast<USavgaSaveGame>(UGameplayStatics::CreateSaveGameObject(USavgaSaveGame::StaticClass()));
	// Set the save game instance variables equal to the player's current variables
	SaveGameInstance->PlayerLocation = this->GetActorLocation();
	SaveGameInstance->Health = this->CurrentHealth;
	SaveGameInstance->HealthPack = this->HealthPack;
	SaveGameInstance->Key = this->DoorKey;
	SaveGameInstance->QuestItem = this->QuestItem;
	SaveGameInstance->QuestText = this->QuestText;
	// Save the save game instance
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("SaveSlot"), 0);
}

void APlayerCharacterBase::LoadGame()
{
	// Create an instance of save game class
	USavgaSaveGame* SaveGameInstance = Cast<USavgaSaveGame>(UGameplayStatics::CreateSaveGameObject(USavgaSaveGame::StaticClass()));
	// Load the saved game into the save game instance variable
	SaveGameInstance = Cast<USavgaSaveGame>(UGameplayStatics::LoadGameFromSlot("SaveSlot", 0));
	// Set the player's properties from the saved game file
	this->SetActorLocation(SaveGameInstance->PlayerLocation);
	this->CurrentHealth = SaveGameInstance->Health;
	this->HealthPack = SaveGameInstance->HealthPack;
	this->DoorKey = SaveGameInstance->Key;
	this->QuestItem = SaveGameInstance->QuestItem;
	this->QuestText = SaveGameInstance->QuestText;
	
}