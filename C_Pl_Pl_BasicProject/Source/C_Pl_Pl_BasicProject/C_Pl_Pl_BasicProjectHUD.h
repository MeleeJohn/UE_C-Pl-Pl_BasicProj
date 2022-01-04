// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "C_Pl_Pl_BasicProjectHUD.generated.h"

UCLASS()
class AC_Pl_Pl_BasicProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AC_Pl_Pl_BasicProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

