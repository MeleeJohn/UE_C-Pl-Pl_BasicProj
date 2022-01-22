// Fill out your copyright notice in the Description page of Project Settings.


#include "GruntEnemy.h"


void AGruntEnemy::BeginPlay() {
	Super::BeginPlay();
	SetUpEnemyStats();

}

void AGruntEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (health <= 0 && isDead == false) {
		kill();
	}
}

void AGruntEnemy::kill()
{
	isDead = true;
	UE_LOG(LogTemp, Warning, TEXT("Killing myself"));
	Destroy();
}

void AGruntEnemy::SetUpEnemyStats()
{
	health = healthInfo;
}
