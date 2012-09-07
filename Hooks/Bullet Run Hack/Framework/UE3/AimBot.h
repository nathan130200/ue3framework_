bool AutoKnifeKeyIsPressed = NULL;
bool AutoKnifeWeaponOut = FALSE;
BOOL AutoFireAimed = FALSE;
float BestDistance = INT_MAX;

bool bLocked = false;
int ToTarget = -1;

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
				_asm{jmp niggers};

			FVector AimVelocity = CurrentPawns[ToTarget].Pawn->Velocity;
			AimVelocity -= Controller->Pawn->Velocity;
			FVector AimLocation = CurrentPawns[ToTarget].WorldPos + AimVelocity * Controller->PlayerReplicationInfo->ExactPing;

			APBPController->ClientSetCtrlRotation((AimLocation - CameraLocation).Rotator());
			bLocked = true;

			if (AutoFire)
				APBPController->StartFire(0);

			return;
		}
niggers:
		if (AutoFire)
			APBPController->StopFire(0);

		bLocked = false;
		ToTarget = -1;
	}
};