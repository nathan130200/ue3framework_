/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_Clock.uc
 * 
 * Stats:
 *	Properties:15
 *	Functions:9
 *
 *******************************************************************************/
class TgUIPrimaryHUD_Clock extends Object
	native;

var TgUIPrimaryHUD_Settings m_Settings;
var bool m_bActive;
var bool m_bIsAlarm;
var bool m_bUsesBar;
var bool m_bIsMissionTimer;
var bool m_bCountingDown;
var UIPanel m_BaseClockPanel;
var UIImage m_ImageClock;
var UIImage m_ImageAlarm;
var UILabel m_LabelText;
var UILabel m_TimeDisplayText;
var UIProgressBar m_TimeDisplayBar;
var float m_fClockTimeBase;
var float m_fClockTimeStarted;
var TgUISceneDriver m_PrimaryScene;

native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native function UseAsMissionTimer(bool bIsMissionTimer);
native noexport function SetStyle(optional bool bUsingProgressBar, optional bool bUsingAlarmImage)
{
	bUsingProgressBar = false;
	bUsingAlarmImage = false;	
}

native function SetTime(float fTimeBase, float fTimeStarted, bool bCountingDown);
native function Clear();
native function UpdateMissionTimer();
native function UpdateTimer();

defaultproperties
{
	m_Settings=TgSettings0
}