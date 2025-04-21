// Copyright Epic Games, Inc. All Rights Reserved.

#include "EXProjectGameMode.h"
#include "EXProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEXProjectGameMode::AEXProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
