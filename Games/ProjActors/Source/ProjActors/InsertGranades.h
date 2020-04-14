// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InsertGranades.generated.h"

UCLASS()
class PROJACTORS_API AInsertGranades : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInsertGranades();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class USphereComponent* ActorCollider;

	UPROPERTY(EditAnywhere, Category = "Granade Type")
		TSubclassOf<class AGranade> BpGranade;

};
