/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgentProfile_Equip.uc
 * 
 * Stats:
 *	Constants:3
 *	Enums:3
 *	Structs:3
 *	Properties:31
 *	Functions:41
 *
 *******************************************************************************/
class TgUIAgentProfile_Equip extends TgUIAgentProfile
	native;

const AP_NBR_OF_EQUIPPED_FLAIR = 8;
const AP_NBR_OF_EQUIPPED_UPGRADES = 7;
const AP_NBR_OF_EQUIPPED_DEVICES = 9;

enum Repair_ConfirmTypes
{
	REPAIR_CONFIRM,
	REPAIR_CONFIRM,
	REPAIR_CONFIRM,
	REPAIR_CONFIRM,
	REPAIR_CONFIRM,
	REPAIR_CONFIRM_MAX
};

enum SupportedEquipTutorials
{
	STut_RANGED,
	STut_OFFHAND,
	STut_SPECIALTY,
	STut_OFFHAND2_DEFAULT,
	STut_OFFHAND2_ROBO,
	STut_OFFHAND2_MEDIC,
	STut_MAX
};

enum TutorialStep
{
	TS_SLOT_SELECT,
	TS_DEVICE_SELECT,
	TS_CLOSE,
	TS_MAX
};

struct native EquippedItemStruct
{
	var UIPanel devicePanel;
	var TgUIInvWidget deviceWidget;
	var UIProgressBar deviceDurabilityBar;
	var UIButton deviceRepairButton;

	structdefaultproperties
	{
		devicePanel=none
		deviceWidget=none
		deviceDurabilityBar=none
		deviceRepairButton=none
	}
};

struct native sTutTypePanels
{
	var int SlotIndex;
	var UIPanel StepPanels[3];

	structdefaultproperties
	{
		SlotIndex=0
		StepPanels[0]=none
		StepPanels[1]=none
		StepPanels[2]=none
	}
};

struct native DeviceListItemStruct extends EquippedItemStruct
{
	var UIButton deviceButton;
	var UILabel deviceNameLabel;
	var UILabel deviceSkillLabel;
	var UILabel deviceGenLabel;
	var UIPanel selectedHLPanel;
	var UIPanel mouseOverPanel;
	var UILabel deviceGenTitleLabel;
	var UILabel deviceDurTitleLabel;
};

var init array<init DeviceListItemStruct> m_InventoryItems;
var init array<init EquippedItemStruct> m_EquippedDevices;
var init array<init EquippedItemStruct> m_EquippedUpgrades;
var init array<init EquippedItemStruct> m_EquippedFlair;
var UIButton m_DeviceTabButton;
var UIButton m_ArmorTabButton;
var UIButton m_AppearanceTabButton;
var UIPanel m_DevicePanel;
var UIPanel m_ArmorPanel;
var UIPanel m_AppearancePanel;
var UIButton m_PrevArrowButton;
var UIButton m_NextArrowButton;
var UILabel m_PagingLabel;
var UILabel m_FeedbackLabel;
var TgUISkeletalMeshWidget m_PaperDollMeshWidget;
var TgSkeletalMeshActor_EquipScreen m_PaperDoll;
var UIPanel m_TutorialMainPanel;
var sTutTypePanels m_TutPanels[6];
var int m_CurrentPage;
var int m_CurrentType;
var int m_CurrentFilter;
var int m_CurrentSort;
var bool m_IsDirty;
var bool m_bRefresh;
var bool m_bTutorialMode;
var bool m_bShouldHandleChildScenePopup;
var TgUIAgentProfile_Equip.Repair_ConfirmTypes m_eRepairConfirmType;
var TgUIAgentProfile_Equip.TutorialStep m_eTutorialStep;
var TgUIAgentProfile_Equip.SupportedEquipTutorials m_eTutorialType;
var TgInventoryObject m_SelectedInvObj;
var int m_nPendingModInventoryId;

native function bool TickTgUIScene();
native function FixupWidgets();
native function PreCloseScene();
native function bool IsReadOnlyMode();
native function bool OnAgentMenuKey(const out InputEventParameters EventParms);
native function bool OnSelectDeviceTab(const out InputEventParameters EventParms);
native function bool OnSelectArmorTab(const out InputEventParameters EventParms);
native function bool OnSelectAppearanceTab(const out InputEventParameters EventParms);
native function bool OnNextDevicePageButton(const out InputEventParameters EventParms);
native function bool OnPrevDevicePageButton(const out InputEventParameters EventParms);
native function bool OnRepairButtonClick(const out InputEventParameters EventParms);
native noexport function OnRepairButtonMouseOver(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnDeviceListStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnDeviceListSelect(const out InputEventParameters EventParms);
native noexport function OnInvItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnInvItemSelect(const out InputEventParameters EventParms);
native function bool OnEquippedItemSelect(const out InputEventParameters EventParms);
native noexport function OnEquippedItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function bool OnConfirmOkClicked(const out InputEventParameters EventParms);
native function SetupPaperDoll();
native function DestroyPaperDoll();
native function UpdatePaperDoll(bool bInit);
native function OnPaperDollUpdated();
native noexport function BeginTutorial(optional TgGame.TgUIAction_TriggerTutorial.ETutorialTypes TutType)
{
	TutType = 3;
}

native noexport function UpdateTutorialProgress(TgUIAgentProfile_Equip.TutorialStep Step, optional int NewTutorialType)
{
	NewTutorialType = -1;	
}

native function bool CheckTutorialStep(TgUIAgentProfile_Equip.TutorialStep Step);
native function bool CheckTutorialDisabled(TgUIAgentProfile_Equip.TutorialStep Step);
native function PostRender();
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	// End:0x2a Loop:False
	if(m_DeviceTabButton != none)
	{
		m_DeviceTabButton.__OnRawInputKey__Delegate = OnSelectDeviceTab;
	}
	m_ArmorTabButton
	none
	)
	m_ArmorTabButton.__OnRawInputKey__Delegate = OnSelectArmorTab;
	m_AppearanceTabButton
	none
	)
	m_AppearanceTabButton.__OnRawInputKey__Delegate = OnSelectAppearanceTab;
// BlockSize:3072
case switch(@NULL(-54271)):
	{
// BlockSize:3072
OnNextDevicePageButton != case switch(@NULL(-54271)):;
	{
}

event SetInvItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnInvItemStateChange;
	}
}

event SetInvItemSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnInvItemSelect;
	}
}

event SetDeviceListSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnDeviceListSelect;
	}
}

event SetDeviceListStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnDeviceListStateChange;
	}
}

event SetEquippedItemSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnEquippedItemSelect;
	}
}

event SetEquippedItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnEquippedItemStateChange;
	}
}

event SetRepairButtonMouseOver(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnRepairButtonMouseOver;
	}
}

event SetEquippedItemRepairClick(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnRepairButtonClick;
	}
}

function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x71 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x69 Loop:False
		if(CheckTutorialDisabled(2))
		{
			return true;
		}
		CloseTgUIScene();
		return true;
	}
	return false;
}

event SelectTab(TgUIAgentProfile.TG_AGENT_TABS Tab)
{
	// End:0x11 Loop:False
	if(CheckTutorialDisabled(3))
	{
		return;
	}
	super.SelectTab(Tab);
}

defaultproperties
{
	m_nPageSize=9
}