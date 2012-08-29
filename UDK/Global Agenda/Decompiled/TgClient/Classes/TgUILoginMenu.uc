/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUILoginMenu.uc
 * 
 * Stats:
 *	Enums:1
 *	Structs:1
 *	Properties:42
 *	Functions:42
 *
 *******************************************************************************/
class TgUILoginMenu extends TgUISceneDriver_Tooltip
	native
	config(UI);

enum LoginScreenProcessingState
{
	LSPS_NONE,
	LSPS_LOGGING_IN,
	LSPS_CREATING_CHAR,
	LSPS_MAX
};

struct native sLoginStatusPanel
{
	var bool m_Active;
	var bool m_EnableFade;
	var float m_fTimeStarted;
	var UIPanel m_MainPanel;
	var UILabel m_StatusLabel[2];
	var UIButton m_OKButton;
	var UIButton m_CancelButton;

	structdefaultproperties
	{
		m_Active=false
		m_EnableFade=false
		m_fTimeStarted=0.00
		m_MainPanel=none
		m_StatusLabel[0]=none
		m_StatusLabel[1]=none
		m_OKButton=none
		m_CancelButton=none
	}
};

var TgUILoginMenu.LoginScreenProcessingState m_ProcessingState;
var bool m_bCheckForAuto;
var bool m_bCreatingPlayerName;
var bool m_SaveAccountInfo;
var bool m_bHasProcessedAnnouncement;
var globalconfig bool m_bShowStatus;
var bool m_bCrawlActive;
var bool m_bCrawlLinkActive;
var sLoginStatusPanel m_StatusPanel;
var UILabelButton m_LoginButton;
var UILabelButton m_QuitButton;
var UILabelButton m_CreditsButton;
var UILabelButton m_SettingsButton;
var UILabelButton m_NameButton;
var UIEditBox m_AccountEditBox;
var UIEditBox m_PasswordEditBox;
var UIEditBox m_NameEditBox;
var UICheckbox m_SaveAcctCheckbox;
var int m_TriggeredAccountLogin;
var int m_TriggerCharacterCreate;
var UILabel m_Version;
var UIPanel m_LoginPanel;
var UIPanel m_NamePanel;
var UIPanel m_AnnouncementPanel;
var UILabel m_AnnouncementLabel;
var UILabelButton m_Weblink;
var float m_fTimeOfLogin;
var globalconfig int m_nTimeBetweenUpdates;
var UIPanel m_CrawlPanel;
var UIButton m_CrawlLink;
var UILabel m_CrawlText;
var UIScrollFrame m_CrawlScrollFrame;
var UIButton m_TwitterButton;
var float m_fTimeOfLastCrawlTextUpdate;
var UIPanel m_QueuePanel;
var UILabel m_ServerFullLabel;
var UILabel m_PosLabel;
var UILabel m_TimeLabel;
var UILabelButton m_DisconnectButton;
var UILabelButton m_QueueButton;
var UIButton m_BlockerButton;
var UIButton m_CloseButton;

native function PreCloseScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function GetSavedAccountInfo();
native function ProcessQuit();
native function ToggleSaveAccountInfo();
native function ProcessDisconnect();
native function ProcessQueueButton();
native function CloseQueuePanel();
native function SetProcessingState(TgUILoginMenu.LoginScreenProcessingState NewState);
native function TgUILoginMenu.LoginScreenProcessingState GetProcessingState();
native function bool IsProcessing();
native function TriggerLogin();
native function TriggerCharCreate();
native function TickStatusPanel();
native noexport function UpdateStatusPanel(bool bEnable, optional string DisplayString, optional bool bFadeOut);
native noexport function UpdateSavedLoginInfo(optional bool bLog)
{
	bLog = false;
}

native function HandleStatusOK();
native function HandleStatusCancel();
native function OnCreateCharacter();
native function StartWebLink();
native function bool OnCrawlButtonClick(const out InputEventParameters EventParms);
native function bool OnCrawlScrollOverride(UIScreenObject Sender, float Nudges, bool bMaxedOut);
native function TickVisuals(float DeltaTime);
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
function bool OnStatusOKButtonKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		HandleStatusOK();
		return true;
	}
	return false;
}

function bool OnStatusCancelButtonKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		HandleStatusCancel();
		return true;
	}
	return false;
}

function bool OnLoginButtonKey(const out InputEventParameters EventParms)
{
	// End:0x85 Loop:False
	if(EventParms.EventType == 0 && (EventParms.InputKeyName == 'LeftMouseButton' || (EventParms.InputKeyName == 'Space') || (EventParms.InputKeyName == 'Enter')))
	{
		TriggerLogin();
	}
	return false;
}

function bool OnQuitButtonKey(const out InputEventParameters EventParms)
{
	// End:0x87 Loop:False
	if(EventParms.EventType == 0 && (EventParms.InputKeyName == 'LeftMouseButton' || (EventParms.InputKeyName == 'Space') || (EventParms.InputKeyName == 'Enter')))
	{
		ProcessQuit();
		return true;
	}
	return false;
}

function bool OnQueueButtonKey(const out InputEventParameters EventParms)
{
	// End:0x87 Loop:False
	if(EventParms.EventType == 0 && (EventParms.InputKeyName == 'LeftMouseButton' || (EventParms.InputKeyName == 'Space') || (EventParms.InputKeyName == 'Enter')))
	{
		ProcessQueueButton();
		return true;
	}
	return false;
}

function bool OnDisconnectButtonKey(const out InputEventParameters EventParms)
{
	// End:0x87 Loop:False
	if(EventParms.EventType == 0 && (EventParms.InputKeyName == 'LeftMouseButton' || (EventParms.InputKeyName == 'Space') || (EventParms.InputKeyName == 'Enter')))
	{
		ProcessDisconnect();
		return true;
	}
	return false;
}

function bool OnCloseButtonKey(const out InputEventParameters EventParms)
{
	// End:0x87 Loop:False
	if(EventParms.EventType == 0 && (EventParms.InputKeyName == 'LeftMouseButton' || (EventParms.InputKeyName == 'Space') || (EventParms.InputKeyName == 'Enter')))
	{
		CloseQueuePanel();
		return true;
	}
	return false;
}

native function bool OnSettingsCreditsButtonKey(const out InputEventParameters EventParms);
function bool OnCheckboxKey(const out InputEventParameters EventParms)
{
	// End:0x85 Loop:False
	if(EventParms.EventType == 0 && (EventParms.InputKeyName == 'LeftMouseButton' || (EventParms.InputKeyName == 'Space') || (EventParms.InputKeyName == 'Enter')))
	{
		ToggleSaveAccountInfo();
	}
	return false;
}

function bool OnEditBoxInputKey(const out InputEventParameters EventParms)
{
	// End:0x40 Loop:False
	if(EventParms.InputKeyName == 'Up' || (EventParms.InputKeyName == 'Down'))
	{
		return true;
	}
	return false;
}

function bool OnSetFocusToAccountEditBox(const out InputEventParameters EventParms)
{
	// End:0x73 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' || (EventParms.InputKeyName == 'Tab' && (EventParms.EventType == 1)))
	{
		m_AccountEditBox.SetFocus(none);
		return true;
	}
	return false;
}

function bool OnSetFocusToPasswordEditBox(const out InputEventParameters EventParms)
{
	// End:0x73 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' || (EventParms.InputKeyName == 'Tab' && (EventParms.EventType == 1)))
	{
		m_PasswordEditBox.SetFocus(none);
		return true;
	}
	return false;
}

function bool OnLoginSubmitText(UIEditBox ebox, int PlayerIndex)
{
	TriggerLogin();
	return false;
}

noexport function OnNotifyAccountEditBoxStateChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState)
{
	// End:0x33 Loop:False
	if(NewlyActiveState.Class == class'UIState_Pressed'.default.Class)
	{
		SetFocusedWidget(m_AccountEditBox);
	}
}

noexport function OnNotifyPasswordEditBoxStateChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState)
{
	// End:0x33 Loop:False
	if(NewlyActiveState.Class == class'UIState_Pressed'.default.Class)
	{
		SetFocusedWidget(m_PasswordEditBox);
	}
}

function bool OnWeblinkKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.EventType == 0 && (EventParms.InputKeyName == 'LeftMouseButton'))
	{
		StartWebLink();
		return true;
	}
	return false;
}

defaultproperties
{
	m_bCheckForAuto=true
	m_bShowStatus=true
	m_nTimeBetweenUpdates=3
}