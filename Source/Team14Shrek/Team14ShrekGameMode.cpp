// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team14ShrekGameMode.h"
#include "Team14ShrekHUD.h"
#include "Team14ShrekCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeam14ShrekGameMode::ATeam14ShrekGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATeam14ShrekHUD::StaticClass();
}
