// Fill out your copyright notice in the Description page of Project Settings.


#include "Granade.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/AudioComponent.h"
#include "TimerManager.h"
#include "Sound/SoundCue.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "MyPlayer.h"

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

	ExplosionSound = CreateDefaultSubobject<UAudioComponent>(FName("Explosion Sound"));
	ExplosionSound->bAutoActivate = false;
	ExplosionSound->bAutoDestroy = true;
	ExplosionSound->SetupAttachment(ActorMesh);

	GranadeExplosion = CreateDefaultSubobject <UParticleSystemComponent>(FName("Explosion particles"));
	GranadeExplosion->bAutoActivate = false;
	GranadeExplosion->bAutoDestroy = true;
	GranadeExplosion->SetupAttachment(ActorMesh);

	ConstructorHelpers::FObjectFinder<USoundCue>GranadeSound(TEXT("SoundCue'/Game/StarterContent/Audio/Explosion_Cue.Explosion_Cue'"));

	ConstructorHelpers::FObjectFinder<UStaticMesh>Granade(TEXT("StaticMesh'/Game/FBX/granada.granada'"));

	ConstructorHelpers::FObjectFinder<UParticleSystem>ExplosionParticle(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));

		if (Granade.Succeeded()  && GranadeSound.Succeeded() && ExplosionParticle.Succeeded())
		{
			ActorMesh->SetStaticMesh(Granade.Object);
			ExplosionSound->SetSound(GranadeSound.Object);
			GranadeExplosion->SetTemplate(ExplosionParticle.Object);
			
		}

}

void AGranade::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Granade destroyed");
	GetWorldTimerManager().ClearTimer(Timer);

}

// Called when the game starts or when spawned
void AGranade::BeginPlay()
{
	Super::BeginPlay();
	SlowTime(0.1);
	ActorMesh ->SetSimulatePhysics(true);
	ActorMesh->SetEnableGravity(true);

	GetWorldTimerManager().SetTimer(Timer,this,&AGranade::BlowupGranade,5.f,false);

	
}

void AGranade::SlowTime(float TimeDilatation)
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), TimeDilatation);
	GetWorldTimerManager().SetTimer(ClockTimer,this,&AGranade::RestoreTime, (3.f * TimeDilatation),false);
}

void AGranade::RestoreTime()
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.f);
	GetWorldTimerManager().ClearTimer(ClockTimer);
}

void AGranade::BlowupGranade()
{
	SetLifeSpan(5.5f);
	ExplosionSound->Play();
	SlowTime(0.05);
	GranadeExplosion->ActivateSystem(true);
	ActorMesh->SetVisibility(false);
}

// Called every frame
void AGranade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

