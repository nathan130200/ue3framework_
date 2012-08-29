/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIEndRaidScreen.uc
 * 
 * Stats:
 *	Constants:2
 *	Properties:9
 *	Functions:9
 *
 *******************************************************************************/
class TgUIEndRaidScreen extends TgUISceneDriver
	native;

const NUM_OVERALL_RAID_STATS = 3;
const NUM_ALLIANCE_RAID_STATS = 4;

var UISafeRegionPanel m_AspectPanel;
var UILabel m_ResultLabel;
var UILabel m_RaidStats[3];
var UILabel m_RaiderStats[4];
var UILabel m_DefenderStats[4];
var int m_eRaidPhase;
var int m_nCachedRaidHexUpdateCount;
var UIButton m_CloseButton;
var TgUIHexWidget_Raid m_pHexWidget;

native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function SetLabelTextAndColor(bool bAttackersWon);
native function bool OnCloseButtonPressed(const out InputEventParameters EventParms);
native function HideScene();
native function ShowScene();
event FixupWidgetsUC()
{
	m_CloseButton.__OnRawInputKey__Delegate = OnCloseButtonPressed;
}

defaultproperties
{
	m_nCachedRaidHexUpdateCount=-1
}