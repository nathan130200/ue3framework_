void Draw( UCanvas* Canvas, APlayerController* Controller, FVector CameraLocation, FRotator CameraRotation, APawn* you )
{
	if ( Canvas == NULL || Controller == NULL || Controller->WorldInfo == NULL || Controller->WorldInfo->PawnList == NULL || you == NULL )
		return;

	CurrentBest = 999999.0f;
	CurrentTarget = NULL;
	VisiblePlayerCount = 0;
	
	for ( APawn* Pawn = Controller->WorldInfo->PawnList; Pawn; Pawn = Pawn->NextPawn)
	{
		if ( Controller == NULL || Pawn == NULL || Pawn->PlayerReplicationInfo == NULL || Pawn->bDeleteMe || Pawn == Controller->Pawn || Pawn->Health < 1 )
			continue;

		FVector Location = Pawn->Location;
		bool IsPlayer = ( Pawn->PlayerReplicationInfo != NULL );
		bool IsVisible = IsVisible::Visible( Controller, Pawn, CameraLocation, Location );
		bool IsEnemy = IsPlayer ? ( Pawn->PlayerReplicationInfo->Team != Controller->PlayerReplicationInfo->Team ) : true;

		FColor DrawColor = Misc::GetTeamColor( IsPlayer, IsVisible, IsEnemy );
		
		FVector Screen = WorldToScreen::World( Canvas, Location );

		if (CheckBoxes[0].Checked)
		{
			ESP::Name(Canvas, Screen, Pawn, DrawColor);
			Screen.Y += 15;
		}

		if (CheckBoxes[1].Checked)
		{
			ESP::Health(Canvas, Screen, Pawn, DrawColor);
			Screen.Y += 15;
		}
		
		if(CheckBoxes[2].Checked)
		{
			ESP::Distance(Canvas, Screen, Location, Pawn, DrawColor);
			Screen.Y += 15;
		}

//		if(CheckBoxes[3].Checked)
//		{
//			ESP::BoneESP(Canvas, Pawn, DrawColor);
//		}

		if(CheckBoxes[4].Checked)
		{
			ESP::Boxes( Canvas, Pawn, DrawColor );
		}

		if(CheckBoxes[5].Checked)
		{
			Aim::AimBot(IsVisible, IsEnemy, Location, Pawn, Canvas, DrawColor);
		}

		if(CheckBoxes[6].Checked)
		{
			Aim::AutoFireBot(IsVisible, IsEnemy, Location, Pawn, Canvas);
		}

		if(CheckBoxes[7].Checked)
		{
			Misc::info(Canvas, Pawn, DrawColor, Location, IsEnemy, IsVisible);
		}

		if(CheckBoxes[8].Checked)
		{
			Misc::LineToTarget( Canvas, Pawn, DrawColor, IsEnemy, IsVisible);
		}

		if(CheckBoxes[9].Checked)
		{
			Misc::DrawCossHair(Canvas, ColorGreen);
		}

		if(CheckBoxes[10].Checked)
		{
			Radar::DrawRadar( Pawn, Canvas, DrawColor );
		}
	}
}