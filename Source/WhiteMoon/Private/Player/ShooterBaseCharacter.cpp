// WhiteMoon Game. Copyright sixfourbitmonkey.

#include "Player/ShooterBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"

AShooterBaseCharacter::AShooterBaseCharacter()
{

    PrimaryActorTick.bCanEverTick = true;

    CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(GetRootComponent());
}

void AShooterBaseCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AShooterBaseCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AShooterBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &AShooterBaseCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AShooterBaseCharacter::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &AShooterBaseCharacter::LookUp);
    PlayerInputComponent->BindAxis("TurnAround", this, &AShooterBaseCharacter::TurnAround);
}

void AShooterBaseCharacter::MoveForward(float Value)
{
    AddMovementInput(GetActorForwardVector(), Value);
}

void AShooterBaseCharacter::MoveRight(float Value)
{
    AddMovementInput(GetActorRightVector(), Value);
}

void AShooterBaseCharacter::LookUp(float Value) 
{
    AddControllerPitchInput(Value);
}

void AShooterBaseCharacter::TurnAround(float Value) 
{
    AddControllerYawInput(Value);
}
