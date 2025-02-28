// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RacingCarPawn.h"
#include "RacingCarSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class RACINGCAR_API ARacingCarSportsCar : public ARacingCarPawn
{
	GENERATED_BODY()
	
public:

	ARacingCarSportsCar();
};
