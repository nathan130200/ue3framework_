bool AutoKnifeKeyIsPressed = NULL;
bool AutoKnifeWeaponOut = FALSE;
BOOL AutoFireAimed = FALSE;

class Aim
{
public:
	static void Aim::AutoFireBot(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn, UCanvas* pCanvas)
	{
		APBPlayerController* APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );

		if(GetAsyncKeyState( 'F' ))
		{
			FVector vHeadBone;

			vHeadBone = WorldToScreen::BRBones(Location, Pawn);

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
				if (!AutoFireAimed)
				{
					AutoFireAimed = TRUE;
					//APBPController->StartFire(2);
				}

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
			AutoFireAimed = FALSE;
		}
	}

	static void Aim::AutoKnife(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn, UCanvas* Canvas, FColor DrawColor )
	{
		if( GetAsyncKeyState( 'F' ) )
		{
			//CRender::DrawStringEx( Canvas, 100, 180, ColorGreen, 0, L"Pressing F");


			FVector vHeadBone;

			APBPlayerController* APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );
			vHeadBone = WorldToScreen::BRBones(Location, Pawn);

			float Distance = (vHeadBone - CameraLocation).Length();

			if( IsEnemy && IsVisible )
			{
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

			float PawnDistance = Radar::calcdist(CameraLocation, Location) / 100;
			//CRender::DrawStringEx( Canvas, 100, 160, ColorGreen, 0, L"Current Target %d Distance %f", CurrentTarget, PawnDistance);

			if(CurrentTarget && PawnDistance < 1.0f)
			{
				APBPController->SwitchWeapon(0);

				FVector AimForward = (CurrentLocation - CameraLocation);
				FRotator AimRotation = AimForward.Rotator();
					
				APBPlayerController* APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );
				//APBPController->ClientSetCtrlRotation(AimRotation);

				APBPController->StartFire(0);

				AutoKnifeWeaponOut = true;
			}

			if (PawnDistance > 1.0f)
			{
				if(AutoKnifeWeaponOut)
				{
					APBPController->SwitchWeapon(1);
					AutoKnifeWeaponOut = false;
				}
			}
		}
	}

	static void LockOn(UCanvas* pCanvas, int x, int y)
	{
		INPUT inInput; 

		int iHalfWidth     = pCanvas->ClipX;
		int iHalfHeight    = pCanvas->ClipY; 

		x -= iHalfWidth; 
		y -= iHalfHeight; 

		inInput.mi.dx = 0;

		inInput.mi.dx               = (long)x; 
		inInput.mi.dy               = (long)y; 
		inInput.mi.mouseData        = 0; 
		inInput.mi.dwFlags          = 0; 
		inInput.mi.time             = 0; 
		inInput.mi.dwExtraInfo      = GetMessageExtraInfo(); 
		inInput.type                = 0; 

		if(x > -iHalfWidth     &&    x < iHalfWidth && y > -iHalfHeight     &&     y < iHalfHeight) 
			SendInput(1, &inInput, sizeof(inInput)); 
	}

	static void Aim::AimBot(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn, UCanvas* Canvas, FColor DrawColor )
	{
		if( GetAsyncKeyState( 'F' ) )
		{
			FVector vHeadBone;

			vHeadBone = WorldToScreen::BRBones(Location, Pawn);
			vHeadBone = WorldToScreen::World(Canvas, vHeadBone);

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

				APBPlayerController* APBPController = reinterpret_cast<APBPlayerController*>( LocalPlayer->Actor );
				APBPController->SetRotation(AimRotation);
				APBPController->SetRelativeRotation(AimRotation);
				APBPController->SetLocation(CurrentLocation);
				APBPController->SetRelativeLocation(CurrentLocation);
			}
		}
	}
};