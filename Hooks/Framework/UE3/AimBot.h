bool AutoKnifeKeyIsPressed = NULL;
bool AutoKnifeWeaponOut = FALSE;
BOOL AutoFireAimed = FALSE;


class Aim
{
public:
	static void Aim::AimBot(bool IsVisible, bool IsEnemy, FVector Location, APawn* Pawn, UCanvas* Canvas, FColor DrawColor )
	{
		if( GetAsyncKeyState( 'F' ) )
		{
			if( IsEnemy && IsVisible )
			{
				FVector	vHeadBone;

#ifdef APBSDK
				FName BoneName;
				BoneName.Index = Framework::FindName("Bip01_Head");
				BoneName.Recursion = 0;
				vHeadBone = WorldToScreen::World2( Canvas, Pawn->Mesh->GetBoneLocation( BoneName, 0 ));
#endif
				float Distance = (vHeadBone - CameraLocation).Length();
				if (Distance <= CurrentBest)
				{
					if (CurrentTargetedPawn)
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

#ifdef GASDK || TASDK || CCSDK
				Controller->Rotation = AimRotation;
#endif

#ifdef RDSDK	
				Controller->Rotation = AimRotation;
#endif

#ifdef APBSDK
				AcAPBPawn* APBPawn = reinterpret_cast<AcAPBPawn*>(LocalPlayer->Actor->Pawn);
				APBPawn->SetCameraAimRotPawn( &AimRotation );
#endif
			}
		}
	}
};