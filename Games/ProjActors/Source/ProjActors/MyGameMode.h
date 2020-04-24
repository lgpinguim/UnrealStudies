// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJACTORS_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()

		public:
			AMyGameMode();
			virtual void BeginPlay() override;
			virtual void StartPlay() override;

	
};
