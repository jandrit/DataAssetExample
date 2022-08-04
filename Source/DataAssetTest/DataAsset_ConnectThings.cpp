// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAsset_ConnectThings.h"

void UDataAsset_ConnectThings::OpenCloseDoor_Implementation(bool HasBeenOpened)
{
	OpenCloseCalled.Broadcast(HasBeenOpened);
}
