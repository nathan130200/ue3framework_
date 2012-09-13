static char weap = 0;

bool APBIsVisible(APlayerController* Controller, FVector Location)
{
	AActor* bTrace = IsVisible::FastTraceAPB( Controller, CameraLocation, Location );

	if(AcAPBPawn* target = reinterpret_cast<AcAPBPawn*>(bTrace))
		return true;

	return false;
}

void Draw( UCanvas* Canvas, APlayerController* Controll, FVector CameraLocation, FRotator CameraRotation, AcAPBPawn* you )
{
	if ( Canvas == NULL || Controll == NULL || Controll->WorldInfo == NULL || Controll->WorldInfo->PawnList == NULL || you == NULL )
		return;

	CurrentBest = 999999.0f;
	CurrentTarget = NULL;
	VisiblePlayerCount = 0;
	
	for ( APawn* Pawn = Controll->WorldInfo->PawnList; Pawn; Pawn = Pawn->NextPawn)
	{
		if ( Controll == NULL || Pawn == NULL || Pawn->bDeleteMe || Pawn == Controll->Pawn )
			continue;

		AcAPBPawn* APBPawnTarget = reinterpret_cast<AcAPBPawn*>(Pawn);
		AcAPBPlayerController* TargetController = reinterpret_cast<AcAPBPlayerController*>(Pawn);
		AcAPBPlayerController* myAPBController = reinterpret_cast<AcAPBPlayerController*>(Controll);

		if (!APBPawnTarget->IsAlive() || Pawn->IsA(AVehicle::StaticClass()))
			 continue;

		FVector Location = Pawn->Location;


		bool IsPlayer = true; 
		bool IsVisible = true; //APBIsVisible(Controll, Location);
		bool IsEnemy = IsPlayer ? (  myAPBController->m_eFaction != APBPawnTarget->m_eFaction ) : false;

		FColor DrawColor = Misc::GetTeamColor( IsPlayer, IsVisible, IsEnemy );

		FVector Screen = WorldToScreen::World2( Canvas, Location );
		
		if (CheckBoxes[0].Checked)
		{
			ESP::APBName(Canvas, Screen, reinterpret_cast<AcAPBPawn*>(Pawn), DrawColor);
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

		if(CheckBoxes[3].Checked)
		{
			//ESP::BoneESP(Canvas, Pawn, DrawColor);
		}

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
			//Aim::AutoFireBot(IsVisible, IsEnemy, Location, Pawn, Canvas);
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