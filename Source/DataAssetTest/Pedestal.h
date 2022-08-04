// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAsset_ConnectThings.h"
#include "GameFramework/Actor.h"
#include "Pedestal.generated.h"

UCLASS()
class DATAASSETTEST_API APedestal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APedestal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataAsset_ConnectThings* Connector;

};
