// Fill out your copyright notice in the Description page of Project Settings.


#include "Pistol.h"

void APistol::BeginPlay()
{
	SetUpWeaponInfo();
}

void APistol::SetUpWeaponInfo()
{
	MagCapacity = pistolMagSize;
	CurrentAmmo = MagCapacity;
	SpareMagCount = pistolSpareMags;
	isAuto = false;
	damage = 10;
}




