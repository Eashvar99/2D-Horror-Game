// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Horror2DGameMode.h"
#include "Horror2DCharacter.h"

AHorror2DGameMode::AHorror2DGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AHorror2DCharacter::StaticClass();	
}
