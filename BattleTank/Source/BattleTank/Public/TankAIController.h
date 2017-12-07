// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "AIController.h"
#include "Engine/World.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;

};
