// Copyright Epic Games, Inc. All Rights Reserved.

#include "RacingCarWheelFront.h"
#include "UObject/ConstructorHelpers.h"

URacingCarWheelFront::URacingCarWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}