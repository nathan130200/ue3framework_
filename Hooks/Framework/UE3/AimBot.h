bool AutoKnifeKeyIsPressed = NULL;
bool AutoKnifeWeaponOut = FALSE;

class Aim
{
public:

	static void Aim::AutoFireBot(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn, UCanvas* pCanvas)
	{
		APBPlayerController* APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );

		if(GetAsyncKeyState( 'F' ))
		{
			FVector vHeadBone;
#ifdef BRSDK
			vHeadBone = WorldToScreen::BRBones(Location, Pawn);
#endif

#ifdef GASDK || TASDK			
			vHeadBone = Location;
#endif
			if( IsEnemy && IsVisible )
			{
				float Distance = (vHeadBone - CameraLocation).Length();

				if (Distance <= CurrentBest)
				{
					if (CurrentTargetedPawn && CurrentTargetedPawn->Health > 0)
					{
						CurrentBest = Distance;
						CurrentTarget = Pawn;
						CurrentLocation = vHeadBone;
					}
					else
					{
						CurrentTargetedPawn = Pawn;
					}
				}
			}

			if(CurrentTarget && !AutoFireKeyIsPressed)
			{
				APBPController->StartFire(2);
				APBPController->StartFire(0);
				AutoFireKeyIsPressed = TRUE;
			}
			else
			{
				APBPController->StopFire(0);
				AutoFireKeyIsPressed = FALSE;
			}
		}
		else
		{
			APBPController->StopFire(0);
			AutoFireKeyIsPressed = FALSE;
		}
	}

	static void Aim::AutoKnife(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn, UCanvas* Canvas, FColor DrawColor )
	{
		if( GetAsyncKeyState( 'F' ) )
		{
			FVector vHeadBone;
#ifdef BRSDK
			vHeadBone = WorldToScreen::BRBones(Location, Pawn);
#endif

#ifdef GASDK || TASDK			
			vHeadBone = Location;
#endif
			if( IsEnemy && IsVisible )
			{
				float Distance = (vHeadBone - CameraLocation).Length();
				if (Distance <= CurrentBest)
				{
					if (CurrentTargetedPawn && CurrentTargetedPawn->Health > 0)
					{
						CurrentBest = Distance;
						CurrentTarget = Pawn;
						CurrentLocation = vHeadBone;
					}
					else
					{
						CurrentTargetedPawn = Pawn;
					}
				}
			}

			if(CurrentTarget)
			{
				
				FVector AimForward = (CurrentLocation - CameraLocation);
				FRotator AimRotation = AimForward.Rotator();

#ifdef GASDK || TASDK
				Controller->Rotation = AimRotation;
#endif

#ifdef BRSDK
				APBPlayerController* APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );
				APBPController->ClientSetCtrlRotation(AimRotation);
#endif
			}
		}
	}

	static void Aim::AimBot(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn, UCanvas* Canvas, FColor DrawColor )
	{
		if( GetAsyncKeyState( 'F' ) )
		{
			FVector vHeadBone;
#ifdef BRSDK
			vHeadBone = WorldToScreen::BRBones(Location, Pawn);
#endif

#ifdef GASDK || TASDK			
			vHeadBone = Location;
#endif
			if( IsEnemy && IsVisible )
			{
				float Distance = (vHeadBone - CameraLocation).Length();
				if (Distance <= CurrentBest)
				{
					if (CurrentTargetedPawn && CurrentTargetedPawn->Health > 0)
					{
						CurrentBest = Distance;
						CurrentTarget = Pawn;
						CurrentLocation = vHeadBone;
					}
					else
					{
						CurrentTargetedPawn = Pawn;
					}
				}
			}

			if( CurrentTarget)
			{
				FVector AimForward = (CurrentLocation - CameraLocation);
				FRotator AimRotation = AimForward.Rotator();

#ifdef GASDK || TASDK
				Controller->Rotation = AimRotation;
#endif

#ifdef BRSDK
				APBPlayerController* APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );
				APBPController->ClientSetCtrlRotation(AimRotation);
#endif
			}
		}
	}
};