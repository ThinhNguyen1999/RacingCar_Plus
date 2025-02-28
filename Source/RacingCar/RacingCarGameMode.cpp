// Copyright Epic Games, Inc. All Rights Reserved.

#include "RacingCarGameMode.h"
#include "RacingCarPlayerController.h"

ARacingCarGameMode::ARacingCarGameMode()
{
	PlayerControllerClass = ARacingCarPlayerController::StaticClass();
}
