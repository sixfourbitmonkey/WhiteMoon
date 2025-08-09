// WhiteMoon Game. Copyright sixfourbitmonkey.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterBaseCharacter.generated.h"

class UCameraComponent;

UCLASS()
class WHITEMOON_API AShooterBaseCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AShooterBaseCharacter();
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    virtual void BeginPlay() override;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UCameraComponent* CameraComponent;

private:
    void MoveForward(float Value);
    void MoveRight(float Value);
    void LookUp(float Value);
    void TurnAround(float Value);
};
