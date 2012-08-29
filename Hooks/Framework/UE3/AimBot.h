class Aim
{
public:

	static void Aim::AutoFireBot(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn, UCanvas* pCanvas)
	{
		if( IsEnemy && IsVisible )
		{
			float Distance = (Location - CameraLocation).Length();

			if ( Distance < CurrentBest )
			{
					CurrentBest = Distance;
					CurrentTarget = Pawn;
					CurrentLocation = Location;
			}
		}

		DWORD FIsPressed = GetAsyncKeyState( 'F' );

		if( FIsPressed && CurrentTarget )
		{
			if (!AutoFireKeyIsPressed)
			{
				mouse_event(MOUSEEVENTF_LEFTDOWN,  0, 0, 0, 0);
				//mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
				AutoFireKeyIsPressed = TRUE;
			}
		}
		else
		{
			if(AutoFireKeyIsPressed)
			{
				mouse_event(MOUSEEVENTF_LEFTUP,  0, 0, 0, 0);
				//mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
				AutoFireKeyIsPressed = FALSE;
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