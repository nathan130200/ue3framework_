/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_DangerBox.uc
 * 
 * Stats:
 *	Constants:3
 *	Structs:2
 *	Properties:9
 *	Functions:12
 *
 *******************************************************************************/
class TgUIPrimaryHUD_DangerBox extends Object
	native;

const TG_MAX_ALERT_NUMBER = 1000;
const TG_MAX_ALERT_DISPLAYS = 5;
const ALERT_FADE_DURATION = 0.5f;

struct native AlertInfo
{
	var TgGame.TgObject.AlertPriority ePriority;
	var TgGame.TgObject.AlertType eType;
	var float fDuration;
	var float fInitTime;
	var float fFadeInitTime;
	var float fOpacity;
	var int nMessageId;
	var init string sMessage;
	var int nAlertNumber;
	var int nSoundResId;
	var bool bHasPlayedSound;
	var bool bFadeOut;
	var bool bForceUpdate;

	structdefaultproperties
	{
		ePriority=APT_Minimal
		eType=ATT_Regular
		fDuration=0.00
		fInitTime=0.00
		fFadeInitTime=0.00
		fOpacity=0.00
		nMessageId=0
		sMessage=""
		nAlertNumber=0
		nSoundResId=0
		bHasPlayedSound=false
		bFadeOut=false
		bForceUpdate=false
	}
};

struct native AlertPanel
{
	var UIPanel wDangerPanel;
	var UILabel wDangerLabel[3];

	structdefaultproperties
	{
		wDangerPanel=none
		wDangerLabel[0]=none
		wDangerLabel[1]=none
		wDangerLabel[2]=none
	}
};

var TgUIPrimaryHUD_Settings m_Settings;
var UIPanel m_DangerBoxPanel;
var AlertPanel m_DangerBoxStruct[5];
var TgUISceneDriver m_PrimaryScene;
var export editinline AudioComponent m_AudioComp;
var bool m_bUseColorizedAlerts;
var int m_nDisplayedAlertNumbers[5];
var int m_nAlertNumberCounter;
var array<AlertInfo> m_AlertList;

native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native noexport function AddAlert(TgGame.TgObject.AlertPriority Priority, TgGame.TgObject.AlertType Type, float fDuration, int nMsgId, optional string sMessage);
native function RemoveAlert(int nMsgId);
native function CancelAllAlerts();
native function RemoveTimedOutAlerts();
native function UpdateDisplay();
native function UpdateAlertFade();
native function InitAlertFade(int nAlertIndex);
native function RegisterForAlerts();
native function UnregisterForAlerts();
native function TgPawn GetLocalPawn();

defaultproperties
{
	m_Settings=TgSettings0
	m_bUseColorizedAlerts=true
}