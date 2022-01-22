// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyBase::Hit(int damageTaken)
{
	health -= damageTaken;
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{

	Super::BeginPlay();
	/*auto level = GetWorld()->GetLevel(0);
	this->PrimaryActorTick.Target = this;
	this->PrimaryActorTick.RegisterTickFunction(level);*/
}



// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if (health <= 0 && isDead == false) {
		dead();
	}*/
	
}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyBase::dead()
{
	isDead = true;
	UE_LOG(LogTemp, Warning, TEXT("Killing myself"));
	Destroy();
}

