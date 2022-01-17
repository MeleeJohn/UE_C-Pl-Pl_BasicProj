// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GunParentClass.h"
#include "Pistol.generated.h"

/**
 * 
 */
UCLASS()
class C_PL_PL_BASICPROJECT_API APistol : public AGunParentClass
{
	GENERATED_BODY()
	
	public:

	private:
		int pistolMagSize;
		int pistolSpareMags;

		void SetUpWeaponInfo();

	protected:	

		virtual void BeginPlay() override;
};
