// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_ConnectThings.generated.h"

/**
 * 
 */

UCLASS()
class DATAASSETTEST_API UDataAsset_ConnectThings : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void OpenCloseDoor(bool HasBeenOpened);
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDoorOpen, bool, bIsOpening);
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FDoorOpen OpenCloseCalled;
};
