// Fill out your copyright notice in the Description page of Project Settings.


#include "Granade.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AGranade::AGranade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ActorCollider = CreateDefaultSubobject<USphereComponent>(FName("Collider"));
	ActorCollider->SetSphereRadius(12.f);
	ActorCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = ActorCollider;

	ActorMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Malha"));
	ActorMesh->SetRelativeLocation(FVector(3.2f, 0.f, 0.f));
	ActorMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	ActorMesh->SetupAttachment(RootComponent);

	ConstructorHelpers::FObjectFinder<UStaticMesh>Granade(TEXT("StaticMesh'/Game/FBX/granada.granada'"));

		if (Granade.Succeeded())
		{
			ActorMesh->SetStaticMesh(Granade.Object);
		}

}

// Called when the game starts or when spawned
void AGranade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGranade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

