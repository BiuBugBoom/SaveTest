// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueWarGameMode.h"
#include "BlueWarPawn.h"
#include "BlueWarHud.h"

ABlueWarGameMode::ABlueWarGameMode()
{
	DefaultPawnClass = ABlueWarPawn::StaticClass();
	HUDClass = ABlueWarHud::StaticClass();
}
