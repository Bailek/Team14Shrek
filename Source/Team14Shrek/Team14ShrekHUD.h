// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Team14ShrekHUD.generated.h"

UCLASS()
class ATeam14ShrekHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATeam14ShrekHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

