// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "BlueWarHud.generated.h"


UCLASS(config = Game)
class ABlueWarHud : public AHUD
{
	GENERATED_BODY()

public:
	ABlueWarHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
