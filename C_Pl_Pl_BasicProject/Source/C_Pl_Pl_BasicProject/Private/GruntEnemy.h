// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "GruntEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AGruntEnemy : public AEnemyBase
{
	GENERATED_BODY()

	public:
		int healthInfo = 100;
		
		void kill();
	protected:
		void SetUpEnemyStats();
		virtual void BeginPlay() override;
		virtual void Tick(float DeltaTime) override;
	private:

	
};
