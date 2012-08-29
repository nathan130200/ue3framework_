/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIDevInGame.uc
 * 
 * Stats:
 *	Properties:5
 *	Functions:8
 *
 *******************************************************************************/
class TgUIDevInGame extends TgUISceneDriver
	native;

var UIButton m_CloseButton;
var UIButton m_SpawnBotButton;
var UIButton m_EquipScreenButton;
var UIButton m_MissionScreenButton;
var UIButton m_LaunchScreenButton;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
function bool OnCloseButtonKey(const out InputEventParameters EventParms)
{
	// End:0x43 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		CloseTgUIScene();
		return true;
	}
	return false;
}

function bool OnMissionScreenButtonKey(const out InputEventParameters EventParms)
{
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

event FixupWidgetsUC()
{
	m_CloseButton.__OnRawInputKey__Delegate = OnCloseButtonKey;
	MetaCastToken-MetaCastToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.MetaCastToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())	
	@NULL(423886848)
	m_LaunchScreenButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnLaunchScreenButtonKey != @NULL(34079232);
}

defaultproperties
{
	m_bEscapeKeyCloses=true
}