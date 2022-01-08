// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoCrate.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values
AAmmoCrate::AAmmoCrate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AmmoBox = CreateDefaultSubobject<UBoxComponent>(TEXT("AmmoCrateCollider"));
	AmmoBox->SetBoxExtent(FVector(32.f,32.f,32.f));
	RootComponent = AmmoBox;
	AmmoBox->OnComponentBeginOverlap.AddDynamic(this, &AAmmoCrate::onOverlapBegin);
}

// Called when the game starts or when spawned
void AAmmoCrate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAmmoCrate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAmmoCrate::onOverlapBegin(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Ammo Crate"));
}

void AAmmoCrate::onOverlapEnd(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

