// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "puddle.generated.h"

UCLASS()
class TOLEXP_API Apuddle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Apuddle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
