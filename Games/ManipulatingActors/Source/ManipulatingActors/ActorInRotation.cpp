// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorInRotation.h"

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
	
}

// Called every frame
void AActorInRotation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalRotation(FRotator(0.f, 50.f, 0.f) * DeltaTime * Speed );

}

