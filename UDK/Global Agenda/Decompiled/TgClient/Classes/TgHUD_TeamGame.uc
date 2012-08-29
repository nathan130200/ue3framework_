/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgHUD_TeamGame.uc
 * 
 * Stats:
 *	Properties:1
 *	Functions:3
 *
 *******************************************************************************/
class TgHUD_TeamGame extends TgHUD_Game
	hidecategories(Navigation)
	config(Game)
	transient;

var Color m_PlayerColor;

function DrawHUD()
{
	super.DrawHUD();
	// End:0x2f Loop:False
	if(!WorldInfo.GRI.bMatchHasBegun)
	{
		DrawTeams();
	}
}

function DrawTeams()
{
	local int I, ItemsPerPage, maxRowCount, ScrollTop;
	local TgRepInfo_Game GRI;
	local float LeftPos, TopPos, RightPos, Width, Height, XL,
		YL, W, H, Scale, InitLeftPos,
		ColWidth;

	local int taskCount, Index;

	GRI = TgRepInfo_Game(WorldInfo.GRI);
	// End:0x27 Loop:False
	if(GRI == none)
	{
		return;
	}
	WorldInfo.GRI.SortPRIArray();
	Scale = Canvas.ClipX / float(1024);
	LeftPos = 0.00;
	RightPos = LeftPos;
	TopPos = Canvas.ClipY * 0.50;
	Width = Canvas.ClipX * 0.40;
	Height = Canvas.ClipY * 0.40;
	Canvas.SetDrawColor(0, 0, 0, 128);
	Canvas.SetPos(LeftPos, TopPos);
	Canvas.DrawTile(Canvas.DefaultTexture, Width, Height, 0.00, 0.00, 32.00, 32.00);
	Canvas.SetPos(LeftPos + float(2), TopPos + float(2));
	Canvas.SetDrawColor(255, 255, 0, 255);
	Canvas.DrawBox(Width - float(4), Height - float(4));
	LeftPos += float(16) * Scale;
	RightPos = LeftPos;
	InitLeftPos = LeftPos;
	TopPos += float(16) * Scale;
	Width -= float(32) * Scale;
	Height -= float(32) * Scale;
	taskCount = 2;
	Canvas.Font = class'Engine'.static.GetMediumFont();
	ColWidth = Width - float(8) / float(taskCount);
	Canvas.StrLen(string('99'), XL, YL);
	Canvas.Font = class'Engine'.static.GetMediumFont();
	Canvas.StrLen(string('99'), W, H);
	YL += H;
	ItemsPerPage = int(Height / YL * 1.20);
	Index = 1;
	J0x2d8:

	// End:0x353 Loop:True
	if(Index <= taskCount)
	{
		// End:0x349 Loop:False
		if(maxRowCount < GRI.GetTaskForce(Index).GetPlayerCount())
		{
			maxRowCount = GRI.GetTaskForce(Index).GetPlayerCount();
		}
		++ Index;
		// This is an implied JumpToken; Continue!
		goto J0x2d8;
	}
	// End:0x379 Loop:False
	if(ScrollTop < 0 || (maxRowCount <= ItemsPerPage))
	{
		ScrollTop = 0;
	}
	// End:0x3a1
	else
	{
		// End:0x3a1 Loop:False
		if(ScrollTop + ItemsPerPage > maxRowCount)
		{
			ScrollTop = maxRowCount - ItemsPerPage;
		}
	}
	I = 0;
	J0x3a8:

	// End:0x4a8 Loop:True
	if(I < ItemsPerPage)
	{
		RightPos = InitLeftPos;
		Index = 0;
		J0x3c9:

		// End:0x49e Loop:True
		if(Index < taskCount)
		{
			LeftPos = RightPos;
			RightPos = LeftPos + ColWidth;
			// End:0x494 Loop:False
			if(ScrollTop + I < GRI.GetTaskForce(Index).GetPlayerCount())
			{
				DrawCol(LeftPos, RightPos, TopPos + float(I) * YL * 1.20, GRI.GetTaskForce(Index).GetPlayer(ScrollTop + I));
			}
			++ Index;
			// This is an implied JumpToken; Continue!
			goto J0x3c9;
		}
		++ I;
		// This is an implied JumpToken; Continue!
		goto J0x3a8;
	}
}

simulated function DrawCol(float X1, float X2, float Y, TgRepInfo_Player prep)
{
	local float XL, YL;
	local string S;

	Canvas.Font = class'Engine'.static.GetTinyFont();
	// End:0x51 Loop:False
	if(prep == m_PawnOwner.PlayerReplicationInfo)
	{
		Canvas.DrawColor = m_PlayerColor;
	}
	// End:0x7f
	else
	{
		Canvas.DrawColor = prep.Team.GetTextColor();
	}
	Canvas.SetPos(X1, Y);
	Canvas.DrawText(prep.PlayerName);
	S = "" $ string(int(prep.bReadyToPlay));
	Canvas.StrLen(S, XL, YL);
	Canvas.SetPos(X2 - XL - float(4), Y);
	Canvas.DrawText(S);
	Canvas.Font = class'Engine'.static.GetTinyFont();
	// End:0x1c2 Loop:False
	if(prep.r_TaskForce == TgRepInfo_Player(m_PawnOwner.PlayerReplicationInfo).r_TaskForce)
	{
		Canvas.SetPos(X1, Y + YL);
		Canvas.SetDrawColor(180, 180, 180, 255);
	}
}

defaultproperties
{
	m_PlayerColor=(R=0,G=255,B=255,A=255)
	m_FxLightManager=TgFxLightMan0
}