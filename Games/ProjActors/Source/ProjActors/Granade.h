// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Granade.generated.h"

UCLASS()
class PROJACTORS_API AGranade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGranade();
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void SlowTime(float TimeDilatation);

	UFUNCTION()
		void RestoreTime();

	FTimerHandle Timer, ClockTimer;

	class UAudioComponent* ExplosionSound;

	class UParticleSystemComponent* GranadeExplosion;

	UFUNCTION()
		void BlowupGranade();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	private:
		UPROPERTY(EditAnywhere, Category = "Granade")
			class UStaticMeshComponent* ActorMesh;

		class USphereComponent* ActorCollider;

};
