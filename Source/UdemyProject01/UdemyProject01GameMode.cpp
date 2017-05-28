// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UdemyProject01GameMode.h"
#include "UdemyProject01HUD.h"
#include "UdemyProject01Character.h"
#include "UObject/ConstructorHelpers.h"

AUdemyProject01GameMode::AUdemyProject01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUdemyProject01HUD::StaticClass();
}
