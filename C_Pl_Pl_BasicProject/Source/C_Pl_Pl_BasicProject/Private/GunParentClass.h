// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "String.h"

#include "GunParentClass.generated.h"


UCLASS()
class AGunParentClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunParentClass();
	void gunParentStartFire();
	void gunParentStopFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int MagCapacity = 0;
	int SpareMagCount = 0;
	bool isAuto;
	int damage;

private:

	FString WeaponName;
	
	
	int AmmoReserve = MagCapacity * SpareMagCount;

};
