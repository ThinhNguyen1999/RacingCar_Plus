// Copyright Epic Games, Inc. All Rights Reserved.

#include "RacingCarWheelRear.h"
#include "UObject/ConstructorHelpers.h"

URacingCarWheelRear::URacingCarWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}