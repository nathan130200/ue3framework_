/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUILFGPopup.uc
 * 
 * Stats:
 *	Constants:3
 *	Structs:2
 *	Properties:12
 *	Functions:8
 *
 *******************************************************************************/
class TgUILFGPopup extends TgUISceneDriver
	native;

const LFG_PLAYERS_PER_TEAM = 6;
const LFG_ALERT_TIME = 20;
const LFG_RESET_TIME = 5;

struct native sLFGPlayerStruct
{
	var UIPanel m_LFGPlayerPanel;
	var UIImage m_LFGPlayerIcon;
	var UILabel m_LFGPlayerName;
	var UILabel m_LFGPlayerAgency;
	var UILabel m_LFGPlayerLevel;
	var UILabel m_LFGPlayerStatus;

	structdefaultproperties
	{
		m_LFGPlayerPanel=none
		m_LFGPlayerIcon=none
		m_LFGPlayerName=none
		m_LFGPlayerAgency=none
		m_LFGPlayerLevel=none
		m_LFGPlayerStatus=none
	}
};

struct native sLFGDataStruct
{
	var int m_LFGProfileId;
	var string m_LFGPlayerName;
	var int m_LFGAgencyId;
	var int m_LFGLevel;
	var int m_LFGStatusId;
	var int m_LFGTaskforce;

	structdefaultproperties
	{
		m_LFGProfileId=0
		m_LFGPlayerName=""
		m_LFGAgencyId=0
		m_LFGLevel=0
		m_LFGStatusId=0
		m_LFGTaskforce=0
	}
};

var UIButton m_CloseButton;
var sLFGPlayerStruct m_LFGPlayer[6];
var sLFGDataStruct m_LFGData[6];
var UIPanel m_TeamListPanel;
var UILabel m_AlertLabel;
var UILabel m_TimerLabel;
var UIButton m_AcceptButton;
var UIButton m_CancelButton;
var float m_AlertTimer;
var bool m_PlayerResponded;
var bool m_ResetMode;
var SoundCue m_OpenSoundCue;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function bool OnLFGPopupKey(const out InputEventParameters EventParms);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnAcceptButton(const out InputEventParameters EventParms);
native function bool OnCancelButton(const out InputEventParameters EventParms);
native function UpdateLFGWidgets();
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnLFGPopupKey;
	self
	@NULL(201327872)
	@NULL(-54271)
	OnCloseButton != self;
	@NULL(-54271)
	OnAcceptButton != self;
	@NULL(-54271)
	OnCancelButton != @NULL(34079232);
}

defaultproperties
{
	m_OpenSoundCue=SoundCue'SND_B_UI.A_CUE_UI_Menu_Popup'
}