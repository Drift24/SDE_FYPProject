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
bool UMyGameUserSettings::GetPlayerCanSeeThemselves() const
{
	return PlayerCanSeeThemselves;
}
bool UMyGameUserSettings::GetDebugConfigIsOn() const
{
	return DebugConfiguration;
}
bool UMyGameUserSettings::GetScaledBodyTrackingIsOn() const
{
	return ScaledBodyTracking;
}
bool UMyGameUserSettings::GetDpadMovementIsOn() const
{
	return DpadMovementIsOn;
}
bool UMyGameUserSettings::GetSnapTurningIsOn() const
{
	return SnapTurningIsOn;
}
int32 UMyGameUserSettings::GetPlayerSpawnLocation() const
{
	return PlayerSpawnLocation;
}
bool UMyGameUserSettings::GetIsSpectatorModeOn() const
{
	return IsSpectatorModeOn;
}
UMyGameUserSettings::UMyGameUserSettings(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	ThighTracking = bool(true);
	KneeTracking = bool(false);
	FootTracking = bool(false);
	ChestTracking = bool(false);
	WaistTracking = bool(false);
	DefaultIPAddress = TEXT("192.168.50.4");
	DebugConfiguration = bool(false);
	PlayerCanSeeThemselves = bool(false);
	ScaledBodyTracking = bool(false);
	DpadMovementIsOn = bool(false);
	SnapTurningIsOn = bool(false);
	PlayerSpawnLocation = int32(1);
	IsSpectatorModeOn = bool(false);
}