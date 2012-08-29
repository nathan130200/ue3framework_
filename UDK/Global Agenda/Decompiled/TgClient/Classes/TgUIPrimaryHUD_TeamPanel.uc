/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_TeamPanel.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:30
 *	Functions:3
 *
 *******************************************************************************/
class TgUIPrimaryHUD_TeamPanel extends Object
	native;

const NUM_TEAM_PANEL_MEMBERS = 12;

struct native sTeamHealthStruct
{
	var UIPanel m_PlayerPanel;
	var UILabel m_PlayerNameLabel;
	var UIImage m_PlayerHealthImage;
	var MaterialInstanceConstant m_PlayerHealthMIC;
	var UILabel m_PlayerHealthLabel;
	var UIImage m_PlayerIconImage;
	var UIImage m_PlayerStatusImage;

	structdefaultproperties
	{
		m_PlayerPanel=none
		m_PlayerNameLabel=none
		m_PlayerHealthImage=none
		m_PlayerHealthMIC=none
		m_PlayerHealthLabel=none
		m_PlayerIconImage=none
		m_PlayerStatusImage=none
	}
};

var TgUIPrimaryHUD_Settings m_SettingsPlayer;
var TgUIPrimaryHUD_Settings m_SettingsTeam;
var TgUISceneDriver m_PrimaryScene;
var bool m_bActive;
var UIPanel m_PlayerPanel;
var UIPanel m_TeamPanel;
var int m_nTeamUpdateSeq;
var UIPanel m_XpProgPanel;
var UILabel m_XpProgLabel;
var UIImage m_XpProgImage;
var MaterialInstanceConstant m_XpProgMIC;
var UILabel m_LevelLabel;
var sTeamHealthStruct m_TeamHealthItem[12];
var MaterialInstanceConstant m_PlayerHealthMICParent;
var MaterialInstanceConstant m_TeamHealthMICParent;
var UIImage m_PowerPoolImage;
var MaterialInstanceConstant m_PowerPoolMIC;
var UILabel m_PowerPoolLabel;
var UIImage m_MoraleBoostImage;
var MaterialInstanceConstant m_MoraleBoostMIC;
var UILabel m_MoraleBoostLabel;
var MaterialInstanceConstant m_MoraleBoostAssaultMIC;
var MaterialInstanceConstant m_MoraleBoostMedicMIC;
var MaterialInstanceConstant m_MoraleBoostReconMIC;
var MaterialInstanceConstant m_MoraleBoostRoboticsMIC;
var MaterialInstanceConstant m_MoraleBoostDefaultMIC;
var Texture2D m_StatusDead;
var Texture2D m_StatusOffline;
var UIImage m_SpeakerImage[12];
var int m_nLastXP;

native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);

defaultproperties
{
	m_SettingsPlayer=TgSettings0
	m_SettingsTeam=TgSettings1
	m_XpProgMIC=MaterialInstanceConstant'HUD_A.Character_Stats.MIC_Level_Prog_Character_Skills'
	m_PlayerHealthMICParent=MaterialInstanceConstant'HUD_A.MAT_Healthbar.MIC_Player_HealthbarFriendly_UI'
	m_TeamHealthMICParent=MaterialInstanceConstant'HUD_A.MAT_Healthbar.MIC_Player_HealthbarB_UI'
	m_PowerPoolMIC=MaterialInstanceConstant'HUD_A.MAT_POWERBAR.MIC_Player_PowerBarA'
	m_MoraleBoostAssaultMIC=MaterialInstanceConstant'HUD_A.Morale_Bar.MIC_GUI_HUD_MoraleBar_Assault'
	m_MoraleBoostMedicMIC=MaterialInstanceConstant'HUD_A.Morale_Bar.MIC_GUI_HUD_MoraleBar_Medic'
	m_MoraleBoostReconMIC=MaterialInstanceConstant'HUD_A.Morale_Bar.MIC_GUI_HUD_MoraleBar_Recon'
	m_MoraleBoostRoboticsMIC=MaterialInstanceConstant'HUD_A.Morale_Bar.MIC_GUI_HUD_MoraleBar_Robotics'
	m_MoraleBoostDefaultMIC=MaterialInstanceConstant'HUD_A.Morale_Bar.MIC_GUI_HUD_MoraleBar_Default'
	m_StatusDead=Texture2D'GA_Menu_Assets.Dead_Status_01'
	m_StatusOffline=Texture2D'GA_Menu_Assets.Icons.Team_Diconnect'
}