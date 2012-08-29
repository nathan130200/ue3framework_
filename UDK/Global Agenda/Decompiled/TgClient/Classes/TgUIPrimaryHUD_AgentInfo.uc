/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_AgentInfo.uc
 * 
 * Stats:
 *	Properties:41
 *	Functions:8
 *
 *******************************************************************************/
class TgUIPrimaryHUD_AgentInfo extends Object
	native;

var TgUIPrimaryHUD_Settings m_Settings;
var TgUISceneDriver m_PrimaryScene;
var bool m_bNeedsAgencyUpdate;
var bool m_bNeedsPlayerUpdate;
var bool m_bNeedsQueueUpdate;
var int m_nCachedPlayerXP;
var int m_nCachedPlayerCurrency;
var int m_nCachedPlayerToken;
var int m_nCachedPlayerHZPoints;
var int m_nCachedQueueId;
var int m_nCachedUnreadMail;
var UIPanel m_BasePanel;
var UIPanel m_TitlePanel;
var UIImage m_MailIcon;
var float m_MailIconRightPos;
var UIPanel m_AgencyNamePanel;
var UILabel m_AgencyNameLabel;
var UIPanel m_AllianceNamePanel;
var UILabel m_AllianceNameLabel;
var UIPanel m_PlayerTitlePanel;
var UILabel m_PlayerTitleLabel;
var UIPanel m_UpperLinePanel;
var UIPanel m_LocationPanel;
var UILabel m_LocationLabel;
var UIPanel m_LocationLinePanel;
var UIPanel m_PlayerStatsPanel;
var UILabel m_Currency;
var UILabel m_Level;
var UILabel m_Token;
var UILabel m_HZPoints;
var UIPanel m_XPPanel;
var UIImage m_XPProgressBar;
var MaterialInstanceConstant m_XPProgressBarMICParent;
var MaterialInstanceConstant m_XPProgressBarMIC;
var UILabel m_XPValue;
var UIPanel m_MiddleLinePanel;
var UIPanel m_QueuePanel;
var UILabel m_QueueStatusLabel;
var UILabel m_QueueAbortLabel;
var UIPanel m_BottomPanel;
var int c_nNewMailSoundCueResId;

native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native function UpdateAgencyValues();
native function UpdateQueueValues();
native function UpdatePlayerValues();
native function UpdatePositioning();
native function bool CheckPlayerUpdate();
native function bool CheckQueueUpdate();

defaultproperties
{
	m_Settings=TgSettings0
	m_nCachedPlayerXP=-1
	m_nCachedPlayerCurrency=-1
	m_nCachedPlayerToken=-1
	m_nCachedPlayerHZPoints=-1
	m_nCachedQueueId=-1
	m_nCachedUnreadMail=-1
	m_XPProgressBarMICParent=MaterialInstanceConstant'HUD_A.Character_Stats.MIC_Level_Prog_Character_Skills'
	c_nNewMailSoundCueResId=5593
}