// Fill out your copyright notice in the Description page of Project Settings.

//COIN INFO--------------
// This coin must detect when a player has collided with it and must then be destroyed and then add a point to the player score.
// Furthermore add code to create a UI text element that tracks the players points
// Once that is done use the level blueprint to continusly spawn coins.
// Lastly, limit the amount of coins on screen to an X value that is randomly set within the level blueprint.
//-----------------------
#include "Coin.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"


// Sets default values
ACoin::ACoin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WoahABox"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	RootComponent = CollisionBox;
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACoin::onOverlapBegin);

}


// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACoin::onOverlapBegin(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//UE_LOG(LogTemp, Warning, TEXT("Woah did something just go over me?"));
	pickedUp();
}

void ACoin::onOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}


void ACoin::pickedUp()
{
	UE_LOG(LogTemp, Warning, TEXT("Woah did something just go over me?"));
}

