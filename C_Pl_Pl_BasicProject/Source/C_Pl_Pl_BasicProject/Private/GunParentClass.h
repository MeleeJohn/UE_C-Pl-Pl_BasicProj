// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunParentClass.generated.h"
#include "String.h"

UCLASS()
class AGunParentClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunParentClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	FString WeaponName;
	int MagCapacity = 0;
	int SpareMagCount = 0;
	int AmmoReserve = MagCapacity * SpareMagCount;

};
