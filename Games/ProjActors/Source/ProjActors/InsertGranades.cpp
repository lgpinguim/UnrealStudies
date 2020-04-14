// Fill out your copyright notice in the Description page of Project Settings.


#include "InsertGranades.h"
#include "Granade.h"
#include "Engine/World.h"
#include "Components/SphereComponent.h"


// Sets default values
AInsertGranades::AInsertGranades()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ActorCollider = CreateAbstractDefaultSubobject<USphereComponent>(FName("Collider"));
	RootComponent = ActorCollider;

}

// Called when the game starts or when spawned
void AInsertGranades::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->SpawnActor<AGranade>(BpGranade, GetActorLocation(), GetActorRotation());

}

// Called every frame
void AInsertGranades::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

