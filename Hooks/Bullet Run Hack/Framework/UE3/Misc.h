class Misc
{
public:
	static void Misc::GetBoneName(APawn* you)
	{
		for (INT i = 0; i < 64; i++ )
			Utils::add_log("c:\\bones.txt", "index: (%i) bone: %s", i, you->Mesh->GetBoneName(i).GetName());
	}

	static void Misc::DrawCossHair(UCanvas* pCanvas, const FColor& Color)
	{
		pCanvas->Draw2DLine(pCanvas->ClipX/2 -10,pCanvas->ClipY/2, pCanvas->ClipX/2 +10, pCanvas->ClipY/2,Color);
		pCanvas->Draw2DLine(pCanvas->ClipX/2 ,pCanvas->ClipY/2 -10, pCanvas->ClipX/2, pCanvas->ClipY/2 +10,Color);
	}

	static FColor Misc::GetTeamColor(bool IsPlayer, bool IsVisible, bool IsEnemy )
	{
		FColor ColorRed		= CRender::MakeColor(255,0,0,255);
		FColor ColorGreen	= CRender::MakeColor(0,255,0,255);
		FColor ColorBlue	= CRender::MakeColor(0,0,255,255);
		FColor ColorYellow	= CRender::MakeColor(255,255,0,255);

		FColor DrawColor = ColorBlue;
		if ( IsPlayer )
		{
			DrawColor = IsVisible ? ColorGreen : ColorBlue;
			if ( IsEnemy )
				DrawColor = IsVisible ? ColorRed : ColorYellow;
		}
		return DrawColor;
	}

	static void Misc::wallhack(APawn* Target)
	{
		if(Target->Mesh != NULL)
		{
			Target->Mesh->SetDepthPriorityGroup(2);	
		}
	}

	static void Misc::wallhackOff(APawn* Target)
	{
		if(Target->Mesh != NULL)
		{
			Target->Mesh->SetDepthPriorityGroup(1);	
		}
	}

	static void  Misc::LineToTarget( UCanvas* pCanvas, PawnInfo Pawn, FColor cColor )
	{
		if(Pawn.IsEnemy && Pawn.IsVisible)
		{
			FVector top, tyou;
			top = Pawn.Location;
			top = WorldToScreen::World(pCanvas, top);
			
			pCanvas->Draw2DLine(pCanvas->ClipX/2 ,pCanvas->ClipY/2, top.X, top.Y, cColor);
		}
	}

	static void Misc::info(UCanvas* Canvas, PawnInfo Pawn, FColor DrawColor)
	{
	/*	if(IsTarget && IsVisible)
		{
			float PawnDistance = Radar::calcdist(CameraLocation,Location) /100;
			CRender::DrawStringEx( Canvas, 10, 10 + (VisiblePlayerCount * 15), DrawColor, 0, L"Name: %s Health: (%i) Distance: (%0.2f)", Target->PlayerReplicationInfo->PlayerName.Data, Target->Health, PawnDistance );
			VisiblePlayerCount++;
		}
	*/
	}
};
