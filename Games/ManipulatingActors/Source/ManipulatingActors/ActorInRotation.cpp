// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorInRotation.h"
#include "Engine\Engine.h"

// Sets default values
AActorInRotation::AActorInRotation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorInRotation::BeginPlay()
{
	Super::BeginPlay();

	TArray<int32> MyUnrealArray;
	MyUnrealArray.Add(-20);
	MyUnrealArray.Add(30);
	MyUnrealArray.Add(92);
	MyUnrealArray.Add(5);
	MyUnrealArray.Add(49);
	for (int32 elemento : MyUnrealArray)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange,FString::Printf(TEXT("%d"),elemento), false);
	}


	float RotRandom = FMath::RandRange(-90.f,90.f);
	float PosRandom  = FMath::RandRange(-5.f, 5.f);
	float EscalaRandom = FMath::RandRange(0.05f, 0.2f);



	FTransform NovoTransform = FTransform(FRotator(RotRandom, RotRandom, RotRandom), FVector(PosRandom, PosRandom, PosRandom), FVector(EscalaRandom, EscalaRandom, EscalaRandom));
	AddActorLocalTransform(NovoTransform);


	
}

// Called every frame
void AActorInRotation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalRotation(FRotator(0.f, 50.f, 0.f) * DeltaTime * Speed );

}

