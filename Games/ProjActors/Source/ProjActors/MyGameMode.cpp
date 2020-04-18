// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Granade.h"
#include "Engine/World.h"
#include "Engine/Engine.h"


void AMyGameMode::StartPlay()
{
	Super::StartPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("I`m in the game mode \n Granade launched"));
}

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();
	TArray<AActor*> GranadeLocation;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), GranadeLocation);
	//UE_LOG(LogTemp, Warning, TEXT("Target Points Found %d"), GranadeLocation.Num());

	if (GranadeLocation.Num())
	{
		FActorSpawnParameters params = FActorSpawnParameters();
		for (auto It: GranadeLocation)
		{
			GetWorld()->SpawnActor<AGranade>(It->GetActorLocation(), It->GetActorRotation(), params);
			//GEngine->AddOnScreenDebugMessage(-1,-1,FColor::Red,TEXT("Actor Created"));
			//UE_LOG(LogTemp, Warning, TEXT("Transform = %s"), *It->GetActorLocation().ToString());
		}
	}
}

