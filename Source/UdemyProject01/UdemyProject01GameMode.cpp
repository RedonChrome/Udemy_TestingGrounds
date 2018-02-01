// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UdemyProject01GameMode.h"
#include "UdemyProject01HUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemyProject01GameMode::AUdemyProject01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behavior/FirstPersonCharacter")); //Blueprint'/Game/Player/Behavior/FirstPersonCharacter.FirstPersonCharacter'
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUdemyProject01HUD::StaticClass();
}
