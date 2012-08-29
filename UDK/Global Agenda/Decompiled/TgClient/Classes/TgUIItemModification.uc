/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIItemModification.uc
 * 
 * Stats:
 *	Structs:3
 *	Properties:19
 *	Functions:31
 *
 *******************************************************************************/
class TgUIItemModification extends TgUISceneDriver_Tooltip
	native;

struct native BaseItemModStruct
{
	var TgUIInvWidget deviceWidget;
	var UIButton deviceButton;
	var UILabel deviceNameLabel;
	var UILabel deviceSkillLabel;
	var UIPanel selectedHLPanel;
	var UIPanel mouseOverPanel;

	structdefaultproperties
	{
		deviceWidget=none
		deviceButton=none
		deviceNameLabel=none
		deviceSkillLabel=none
		selectedHLPanel=none
		mouseOverPanel=none
	}
};

struct native ExtendedItemModStruct extends BaseItemModStruct
{
	var UILabel deviceGenTitleLabel;
	var UILabel deviceDurTitleLabel;
	var UILabel deviceGenLabel;
	var UIProgressBar deviceDurabilityBar;
};

struct native PagingStruct
{
	var UIButton PrevButton;
	var UIButton NextButton;
	var UILabel PagingLabel;

	structdefaultproperties
	{
		PrevButton=none
		NextButton=none
		PagingLabel=none
	}
};

var UIButton m_CloseButton;
var PagingStruct m_DevicePaging;
var PagingStruct m_KitPaging;
var UIButton m_CombineButton;
var UILabel m_KitHeaderLabel;
var UIComboBox m_FilterComboBox;
var array<string> m_ItemTypeStringList;
var array<int> m_ItemTypeCodeList;
var init array<init ExtendedItemModStruct> m_DeviceItems;
var init array<init BaseItemModStruct> m_KitItems;
var int m_CurrentPage;
var int m_CurrentKitPage;
var int m_CurrentType;
var TgInventoryObject m_SelectedDevice;
var TgInventoryObject m_SelectedKit;
var int m_nModPendingInventoryId;
var bool m_bRefresh;
var TgInventoryManager m_InventoryManager;
var TgPawn_Character m_PlayerPawn;

native function bool TickTgUIScene();
native function PostOpenScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function bool OnItemModMenuKey(const out InputEventParameters EventParms);
native function bool OnCombineClick(const out InputEventParameters EventParms);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function bool OnNextDevicePageClick(const out InputEventParameters EventParms);
native function bool OnPrevDevicePageClick(const out InputEventParameters EventParms);
native function bool OnNextKitPageClick(const out InputEventParameters EventParms);
native function bool OnPrevKitPageClick(const out InputEventParameters EventParms);
native noexport function OnDeviceItemMouseOver(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnDeviceItemClick(const out InputEventParameters EventParms);
native noexport function OnDeviceListMouseOver(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnDeviceListClick(const out InputEventParameters EventParms);
native noexport function OnKitItemMouseOver(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnKitItemClick(const out InputEventParameters EventParms);
native noexport function OnKitMouseOver(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnKitClick(const out InputEventParameters EventParms);
native function OnFilterChangedDelegate(UIObject Sender, int PlayerIndex);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnItemModMenuKey;
	m_CloseButton
	none
	)
	m_CloseButton.__OnRawInputKey__Delegate = OnCloseButton;
	)
	@NULL(1458176)
	@NULL(1375797504)
	)
	@NULL(201327872)
	@NULL(-54271)
	OnNextDevicePageClick != );
	@NULL(1375797504)
	)
	@NULL(201327872)
	@NULL(-54271)
	OnPrevDevicePageClick != );
	@NULL(1359020288)
	)
	@NULL(201327872)
	@NULL(-54271)
	OnNextKitPageClick != );
	@NULL(1359020288)
	)
	@NULL(201327872)
	@NULL(-54271)
	OnPrevKitPageClick != );
	@NULL(-54271)
	OnCombineClick != );
	@NULL(-53247)
	OnFilterChangedDelegate != @NULL(34079232);
}

function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x60 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
}

event SetOnDeviceItemMouseOver(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnDeviceItemMouseOver;
	}
}

event SetOnDeviceItemClick(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnDeviceItemClick;
	}
}

event SetOnDeviceListClick(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnDeviceListClick;
	}
}

event SetOnDeviceListMouseOver(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnDeviceListMouseOver;
	}
}

event SetOnKitItemMouseOver(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnKitItemMouseOver;
	}
}

event SetOnKitItemClick(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnKitItemClick;
	}
}

event SetOnKitClick(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnKitClick;
	}
}

event SetOnKitMouseOver(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnKitMouseOver;
	}
}

defaultproperties
{
	m_bHookChat=true
	m_nPageSize=9
}