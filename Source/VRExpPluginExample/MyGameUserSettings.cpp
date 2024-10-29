// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameUserSettings.h"

UMyGameUserSettings* UMyGameUserSettings::GetBetterGameUserSettings()
{
	return Cast<UMyGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

void UMyGameUserSettings::SetThighTracking(bool thighTracking)
{
	
	ThighTracking = thighTracking;
}

bool UMyGameUserSettings::GetThighTracking() const
{
	return ThighTracking;
}
bool UMyGameUserSettings::GetKneeTracking() const
{
	return KneeTracking;
}
bool UMyGameUserSettings::GetFootTracking() const
{
	return FootTracking;
}
bool UMyGameUserSettings::GetChestTracking() const
{
	return ChestTracking;
}
bool UMyGameUserSettings::GetWaistTracking() const
{
	return WaistTracking;
}
FString UMyGameUserSettings::GetDefaultIPAddress() const
{
	return DefaultIPAddress;
}
bool UMyGameUserSettings::GetIsUsingDefaultIPAddress() const
{
	return IsUsingDefaultIPAddress;
}
bool UMyGameUserSettings::GetPlayerCanSeeThemselves() const
{
	return PlayerCanSeeThemselves;
}
UMyGameUserSettings::UMyGameUserSettings(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	ThighTracking = bool(true);
	KneeTracking = bool(false);
	FootTracking = bool(false);
	ChestTracking = bool(false);
	WaistTracking = bool(false);
	DefaultIPAddress = TEXT("192.168.50.4");
	IsUsingDefaultIPAddress = bool(false);
	DebugConfiguration = bool(true);
	PlayerCanSeeThemselves = bool(true);

}