/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_RaidTimer.uc
 * 
 * Stats:
 *	Structs:2
 *	Properties:8
 *	Functions:4
 *
 *******************************************************************************/
class TgUIPrimaryHUD_RaidTimer extends Object
	native;

struct native RaidClockStruct
{
	var UIPanel rcsPanel;
	var UIPanel rcsBonusPanel;
	var UILabel rcsLabel;
	var UIImage rcsDefImage;
	var UIImage rcsAtkImage;
	var UILabel rcsDefBonusTextLabel;
	var UILabel rcsDefBonusLabel;
	var UILabel rcsAtkBonusTextLabel;
	var UILabel rcsAtkBonusLabel;

	structdefaultproperties
	{
		rcsPanel=none
		rcsBonusPanel=none
		rcsLabel=none
		rcsDefImage=none
		rcsAtkImage=none
		rcsDefBonusTextLabel=none
		rcsDefBonusLabel=none
		rcsAtkBonusTextLabel=none
		rcsAtkBonusLabel=none
	}
};

struct native RaidTicketStruct
{
	var UIPanel rtsTicketPanel;
	var UILabel rtsTicketHeaderLabel;
	var UILabel rtsTicketLabel;
	var UIImage rtsTicketBarImage;
	var MaterialInstanceConstant rtsTicketBarMIC;
	var bool rtsBonusPanelAdjusted;

	structdefaultproperties
	{
		rtsTicketPanel=none
		rtsTicketHeaderLabel=none
		rtsTicketLabel=none
		rtsTicketBarImage=none
		rtsTicketBarMIC=none
		rtsBonusPanelAdjusted=false
	}
};

var TgUIPrimaryHUD_Settings m_Settings;
var bool m_bActive;
var bool m_bPrimary;
var TgUISceneDriver m_PrimaryScene;
var RaidTicketStruct m_RaidTicketBar;
var MaterialInstanceConstant m_TicketBarParent[2];
var RaidClockStruct m_RaidClock;
var int m_nCachedRaidHexUpdateCount;

native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native function UpdateRaidTicketBar();

defaultproperties
{
	begin object name=TgSettings0 class=TgUIPrimaryHUD_Settings 
		m_VisibilityConfigType=VCT_Managed
	object end
	m_Settings=TgSettings0
	m_TicketBarParent[0]=MaterialInstanceConstant'HUD_A.MAT_TicketBar.MIC_Player_TicketBar_AllieTeam'
	m_TicketBarParent[1]=MaterialInstanceConstant'HUD_A.MAT_TicketBar.MIC_Player_TicketBar_EnemyTeam'
	m_nCachedRaidHexUpdateCount=-1
}