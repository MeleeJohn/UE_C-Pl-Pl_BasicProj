// Fill out your copyright notice in the Description page of Project Settings.


#include "GunParentClass.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "EnemyBase.h"


// Sets default values
AGunParentClass::AGunParentClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGunParentClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGunParentClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGunParentClass::gunParentStartFire()	
{
	
	FVector traceStartLoc = GetActorLocation();
	FVector traceEndLoc = traceStartLoc + (GetActorRightVector() * 300);
	FHitResult traceHitResult;

	FCollisionQueryParams traceParams;

	if (isAuto) {
		UE_LOG(LogTemp, Warning, TEXT("gun is on auto fire"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("gun is on single fire"));
		GetWorld()->LineTraceSingleByChannel(traceHitResult, traceStartLoc, traceEndLoc, ECC_Visibility, traceParams);
		if (traceHitResult.GetActor() != nullptr ) {
			if (traceHitResult.Actor.Get()->ActorHasTag("Enemy")) {
				UE_LOG(LogTemp, Warning, TEXT("Woah I just hit an enemy"));
				AEnemyBase* hitEnemy = Cast<AEnemyBase, AActor>(traceHitResult.Actor);
				hitEnemy->Hit(damage);
				UE_LOG(LogTemp, Warning, TEXT("Enemy health %i"), hitEnemy->health);
			}
		}
		DrawDebugLine(GetWorld(), traceStartLoc, traceEndLoc, FColor::Orange, false, 2.0f);

		UE_LOG(LogTemp, Warning, TEXT("Distance to end is %f"), traceHitResult.Distance);
	}
	
}

void AGunParentClass::gunParentStopFire()
{

}

