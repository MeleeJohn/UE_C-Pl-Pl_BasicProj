// Fill out your copyright notice in the Description page of Project Settings.


#include "GunParentClass.h"

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

