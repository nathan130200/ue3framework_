bool AutoKnifeKeyIsPressed = NULL;
bool AutoKnifeWeaponOut = FALSE;
BOOL AutoFireAimed = FALSE;
float BestDistance = INT_MAX;

BOOL bLocked = false;
int ToTarget = -1;

BOOL FireStarted = FALSE;

class Aim
{
public:
	static int GetClosestPawn()
	{
		float Best = INT_MAX;
		int ret = -1;

		for (int i = 0; i < TotalPlayers; i++)
		{
			if (!CurrentPawns[i].Pawn || !CurrentPawns[i].IsVisible || !CurrentPawns[i].IsEnemy )
				continue;

			if (CurrentPawns[i].Distance < Best)
			{
				Best = CurrentPawns[i].Distance;
				ret = i;
			}
		}

		return ret;
	}

	static void Aim::AutoKnife()
	{
		if( GetAsyncKeyState( CurrentAimbotKey ) )
		{
		}
	}

	static void Aim::AimBot()
	{
		BOOL AutoFire = CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Auto Fire Bot")].Checked;

		if( GetAsyncKeyState( CurrentAimbotKey ))
		{
			if( !bLocked || ToTarget == -1 )
				ToTarget = GetClosestPawn();

			if (ToTarget == -1 || !CurrentPawns[ToTarget].Pawn || !CurrentPawns[ToTarget].IsVisible || !CurrentPawns[ToTarget].IsEnemy)
				_asm{ jmp niggers };

			FVector AimVelocity = CurrentPawns[ToTarget].Pawn->Velocity;
			//AimVelocity -= Controller->Pawn->Velocity;

			FVector AimLocation = CurrentPawns[ToTarget].WorldPos + AimVelocity * Controller->PlayerReplicationInfo->ExactPing;

			if( LocalPlayer && LocalPlayer->Actor && LocalPlayer->Actor->Pawn )
			{
				APBCharacter* Char = reinterpret_cast<APBCharacter*>(LocalPlayer->Actor->Pawn);

				if( Char && Char->pCurrentWeaponInfo && Char->pCurrentWeaponInfo->pCachedWeapon )
					AimLocation += Char->pCurrentWeaponInfo->pCachedWeapon->vCurrentRecoil;
			}

			APBPController->ClientSetCtrlRotation((AimLocation - CameraLocation).Rotator());
			bLocked = true;

			if (AutoFire)
			{
				APBPController->StartFire(0);
				FireStarted = TRUE;
			}
			return;
		}
niggers:
		if (AutoFire && FireStarted)
		{
			APBPController->StopFire(0);
			FireStarted = FALSE;
		}

		bLocked = FALSE;
		ToTarget = -1;
	}
};