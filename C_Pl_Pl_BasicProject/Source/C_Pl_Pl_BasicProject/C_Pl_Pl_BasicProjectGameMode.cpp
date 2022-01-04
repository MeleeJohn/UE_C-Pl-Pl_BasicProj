// Copyright Epic Games, Inc. All Rights Reserved.

#include "C_Pl_Pl_BasicProjectGameMode.h"
#include "C_Pl_Pl_BasicProjectHUD.h"
#include "C_Pl_Pl_BasicProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AC_Pl_Pl_BasicProjectGameMode::AC_Pl_Pl_BasicProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AC_Pl_Pl_BasicProjectHUD::StaticClass();
}
