// Fill out your copyright notice in the Description page of Project Settings.


#include "Pedestal.h"

// Sets default values
APedestal::APedestal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APedestal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APedestal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

