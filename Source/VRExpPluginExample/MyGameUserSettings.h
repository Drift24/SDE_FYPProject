// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "MyGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class VREXPPLUGINEXAMPLE_API UMyGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static UMyGameUserSettings* GetBetterGameUserSettings();
	UFUNCTION(BlueprintCallable)
	void SetThighTracking(bool thighTracking);

	UFUNCTION(BlueprintPure)
	bool GetThighTracking() const;

	UFUNCTION(BlueprintPure)
	bool GetKneeTracking() const;

	UFUNCTION(BlueprintPure)
	bool GetFootTracking() const;

	UFUNCTION(BlueprintPure)
	bool GetChestTracking() const;

	UFUNCTION(BlueprintPure)
	bool GetWaistTracking() const;

	UFUNCTION(BlueprintPure)
	FString GetDefaultIPAddress() const;

	UFUNCTION(BlueprintPure)
	bool GetIsUsingDefaultIPAddress() const;

	UFUNCTION(BlueprintPure)
	bool GetPlayerCanSeeThemselves() const;

	

	
protected:
	UPROPERTY(Config)
	bool ThighTracking;
	UPROPERTY(Config)
	bool KneeTracking;
	UPROPERTY(Config)
	bool FootTracking;
	UPROPERTY(Config)
	bool ChestTracking;
	UPROPERTY(Config)
	bool WaistTracking;
	UPROPERTY(Config)
	FString DefaultIPAddress;
	UPROPERTY(Config)
	bool IsUsingDefaultIPAddress;
	UPROPERTY(Config)
	bool DebugConfiguration;
	UPROPERTY(Config)
	bool PlayerCanSeeThemselves;
	
	

	

	
	
};
