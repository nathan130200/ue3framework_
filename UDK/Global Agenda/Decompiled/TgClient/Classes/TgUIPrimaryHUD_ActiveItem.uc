/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_ActiveItem.uc
 * 
 * Stats:
 *	Properties:16
 *	Functions:15
 *
 *******************************************************************************/
class TgUIPrimaryHUD_ActiveItem extends Object
	native;

var TgUIPrimaryHUD_Settings m_Settings;
var bool m_bProgressBarActive;
var bool m_bFinished;
var bool m_bProgressBarTextNeedsUpdate;
var bool m_bActiveTextActive;
var bool m_bProgressBarInSecondaryMode;
var float m_fTimeStarted;
var float m_fTimeDuration;
var float m_fTimeDone;
var UIImage m_ProgressBarBG;
var UIProgressBar m_ProgressBar;
var UILabel m_ProgressBarLabel;
var UILabel m_ActiveTextLabel;
var UIImage m_ActiveTextImage;
var float m_fProgressBarSecondaryValue;
var TgUISceneDriver m_PrimaryScene;

native function TickPrimaryHUDElement(float TimeNow);
native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native noexport function StartProgressBar(float TimeDuration, optional string ProgressLabel);
native function SetProgressBarText(string newProgressBarText);
native function DeactivateProgressBar();
native function HideProgressBar();
native function ShowProgressBar();
native function UpdateProgressBar(float TimeNow);
native function SetActiveText(string sMessage);
native function SetActiveTextById(int nMsgId);
native function HideActiveText();
native function ShowActiveText();
native function SetSecondaryModeOn(bool bSecondaryModeOn);
native function SetSecondaryValue(float fSecondaryValue);

defaultproperties
{
	m_Settings=TgSettings0
}