static char weap = 0;

void Draw( UCanvas* Canvas, APBPlayerController* Controller, FVector CameraLocation, FRotator CameraRotation, APawn* you )
{
	//wprintf(TEXT("draw function\n"));

	if ( Canvas == NULL || Controller == NULL || Controller->WorldInfo == NULL || Controller->WorldInfo->PawnList == NULL || you == NULL )
		return;

	memset(&CurrentPawns, 0, sizeof(CurrentPawns));

	int i = 0, iMax = -1;

	APawn* Pawn = Controller->WorldInfo->PawnList;
	do
	{
		if( Pawn == NULL || Pawn->PlayerReplicationInfo == NULL || Pawn->bDeleteMe || Pawn == Controller->Pawn )
			continue;

		CurrentPawns[i].Location = Pawn->Location;
		CurrentPawns[i].Pawn = Pawn;
		CurrentPawns[i].Rpi = Pawn->PlayerReplicationInfo;	
		CurrentPawns[i].IsVisible = IsVisible::Visible(Controller, CurrentPawns[i].Pawn, CameraLocation, CurrentPawns[i].Location);
		CurrentPawns[i].ScreenPos = WorldToScreen::World( Canvas, WorldToScreen::BRBones(CurrentPawns[i].Location, CurrentPawns[i].Pawn));
		CurrentPawns[i].WorldPos = WorldToScreen::BRBones(CurrentPawns[i].Location, CurrentPawns[i].Pawn);
		CurrentPawns[i].Distance = (CurrentPawns[i].Location - CameraLocation).Length();
		CurrentPawns[i].IsEnemy = Pawn->PlayerReplicationInfo->Team != Controller->PlayerReplicationInfo->Team;
		//wprintf(L"Pawn %d - %s\n", i, Pawn->PlayerReplicationInfo->PlayerName.Data);
		i++;
	}while(Pawn = Pawn->NextPawn);

	TotalPlayers = iMax = i;

 	for (i = 0; i < iMax; i++)
 	{
 		if( !CurrentPawns[i].Pawn )
 			continue;
 
 		PawnInfo Pawn = CurrentPawns[i];

		FColor DrawColor = Misc::GetTeamColor( TRUE, Pawn.IsVisible, Pawn.IsEnemy );

		if (CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Name ESP")].Checked)
		{
			ESP::Name(Canvas, Pawn, DrawColor);
			Pawn.ScreenPos.Y += 15;
		}

		if (CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Health ESP")].Checked)
		{
			ESP::Health(Canvas, Pawn, DrawColor);
			Pawn.ScreenPos.Y += 15;
		}

		if(CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Distance ESP")].Checked)
		{
			ESP::Distance(Canvas, Pawn, DrawColor);
			Pawn.ScreenPos.Y += 15;
		}

		if(CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Box ESP")].Checked)
		{
			ESP::Boxes( Canvas, Pawn, DrawColor );
		}

		if(CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Visible Enemy Info")].Checked)
		{
			Misc::info(Canvas, Pawn, DrawColor);
		}

		if(CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Line To Target")].Checked)
		{
			Misc::LineToTarget(Canvas, Pawn, DrawColor);
		}

		if (CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Radar")].Checked)
		{
			Radar::DrawRadar( Pawn, Canvas, DrawColor );
		}
 	}

	if (CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"AimBot")].Checked)
	{
		Aim::AimBot();
	}

	if (CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Auto Fire Bot")].Checked)
	{
		//Aim::AutoFireBot(IsVisible, IsEnemy, Location, Pawn, Canvas);
	}

	if (CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"CossHair")].Checked)
	{
		Misc::DrawCossHair(Canvas, ColorGreen);
	}

	if (CheckBoxes[CMenuManager::GetCheckBoxIndexByName(L"Auto Knife")].Checked)
	{
		Aim::AutoKnife();
	}
}