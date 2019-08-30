// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SoundRoomGameMode.h"
#include "SoundRoomHUD.h"
#include "SoundRoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoundRoomGameMode::ASoundRoomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASoundRoomHUD::StaticClass();
}
