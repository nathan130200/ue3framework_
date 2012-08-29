/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIInGameMainMenu.uc
 * 
 * Stats:
 *	Properties:11
 *	Functions:12
 *
 *******************************************************************************/
class TgUIInGameMainMenu extends TgUISceneDriver
	native;

var UIButton m_EndMissionButton;
var UIButton m_SettingsButton;
var UIButton m_ReturnToGameButton;
var UIButton m_ExitGameButton;
var UIButton m_DisconnectButton;
var UIImage m_NoMissionBG;
var UIImage m_MissionBG;
var UIButton m_SpawnBotButton;
var UIButton m_EquipScreenButton;
var UIButton m_MissionScreenButton;
var UIButton m_LaunchScreenButton;

native function bool TickTgUIScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function ProcessQuit();
function bool OnEndMissionButton(const out InputEventParameters EventParms)
{
	local TgPlayerController PC;
	local WorldInfo WI;

	// End:0xc7 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1))
	{
		// End:0xc7 Loop:False
		if(m_HUDParent != none)
		{
			WI = m_HUDParent.WorldInfo;
			// End:0xc7 Loop:False
			if(WI != none && (WI.GetGameClass() == class'TgGame_Mission'))
			{
				PC = TgPlayerController(m_HUDParent.Owner);
				// End:0xc7 Loop:False
				if(PC != none)
				{
					CloseTgUIScene();
					PC.ChangeInstance(0);
				}
			}
		}
	}
	return false;
}

function bool OnReturnToGameButtonKey(const out InputEventParameters EventParms)
{
	// End:0x41 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1))
	{
		CloseTgUIScene();
	}
	return false;
}

function bool OnExitGameButtonKey(const out InputEventParameters EventParms)
{
	// End:0x45 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1))
	{
		ProcessQuit();
	}
	return false;
}

function bool OnSettingsButtonKey(const out InputEventParameters EventParms)
{
	local TgHUD_Game tghudgame;

	// End:0x6d Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1))
	{
		tghudgame = TgHUD_Game(m_HUDParent);
		// End:0x6d Loop:False
		if(tghudgame != none)
		{
			tghudgame.ToggleManagedSceneByID(0);
		}
	}
	return false;
}

function bool OnLaunchScreenButtonKey(const out InputEventParameters EventParms)
{
	// End:0x43 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		CloseTgUIScene();
		return true;
	}
	return false;
}

function bool OnSpawnBotButtonKey(const out InputEventParameters EventParms)
{
	local TgHUD_Game tghudgame;

	// End:0x74 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		tghudgame = TgHUD_Game(m_HUDParent);
		// End:0x58 Loop:False
		if(tghudgame == none)
		{
			return true;
		}
		CloseTgUIScene();
		tghudgame.ShowDevSpawnBotMenu();
		return true;
	}
	return false;
}

function bool OnDisconnectButtonKey(const out InputEventParameters EventParms)
{
	local TgPlayerController tgpc;

	// End:0x0d Loop:False
	if(m_HUDParent == none)
	{
		return false;
	}
	tgpc = TgPlayerController(m_HUDParent.PlayerOwner);
	// End:0xa9 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		CloseTgUIScene();
		// End:0xa7 Loop:False
		if(tgpc != none)
		{
			tgpc.ConsoleCommand("disconnect LEAVEGAMEONLY");
		}
		return true;
	}
	return false;
}

event FixupWidgetsUC()
{
	m_EndMissionButton.__OnRawInputKey__Delegate = OnEndMissionButton;	
	@NULL(201327872)
	@NULL(-54271)
	OnSettingsButtonKey != ;
	@NULL(-54271)
	OnReturnToGameButtonKey != ;
	@NULL(-54271)
	OnExitGameButtonKey != ;
	@NULL(-54271)
	OnDisconnectButtonKey != ;
	@NULL(-54271)
	OnSpawnBotButtonKey != ;
	@NULL(-54271)
	OnLaunchScreenButtonKey != @NULL(34079232);
}

defaultproperties
{
	m_bEscapeKeyCloses=true
}