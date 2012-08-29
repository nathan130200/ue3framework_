/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_Facilities.uc
 * 
 * Stats:
 *	Enums:1
 *	Structs:4
 *	Properties:21
 *	Functions:30
 *
 *******************************************************************************/
class TgUIAgencyMenu_Facilities extends TgUIAgencyMenu
	native;

enum FacilityConfirmIndex
{
	FCI_Headquarters,
	FCI_DefenseConfig,
	FCI_Transfer,
	FCI_Abandon,
	FCI_MAX
};

struct native HexInfoStruct
{
	var UIPanel HexInfoPanel;
	var UILabel HeaderLabel;
	var UILabel BuildingLabel;
	var UIButton BuildingButton;
	var UILabel OutputValueLabel;
	var UILabel HqPenaltyLabel;
	var UILabel ResourceBonusLabel;
	var UILabel ResourceBonusTypeLabel;
	var UILabel AdjacencyBonusLabel;
	var UILabel AdjustedOutputLabel;
	var UILabel InefficiencyLabel;
	var UILabel TotalOutputLabel;
	var UIButton ChangeFacilityButton;
	var UIButton ChangeHQButton;
	var UIButton TransferButton;
	var UIButton AbandonButton;

	structdefaultproperties
	{
		HexInfoPanel=none
		HeaderLabel=none
		BuildingLabel=none
		BuildingButton=none
		OutputValueLabel=none
		HqPenaltyLabel=none
		ResourceBonusLabel=none
		ResourceBonusTypeLabel=none
		AdjacencyBonusLabel=none
		AdjustedOutputLabel=none
		InefficiencyLabel=none
		TotalOutputLabel=none
		ChangeFacilityButton=none
		ChangeHQButton=none
		TransferButton=none
		AbandonButton=none
	}
};

struct native FacilityMemberStruct
{
	var UILabel memberName;
	var UILabel memberCount;
	var UILabel memberCost;
	var UIImage memberHighlight;
	var UIButton memberCancelButton;
	var int nHpQueId;
	var int nItemId;
	var int nCount;
	var int nCost;

	structdefaultproperties
	{
		memberName=none
		memberCount=none
		memberCost=none
		memberHighlight=none
		memberCancelButton=none
		nHpQueId=0
		nItemId=0
		nCount=0
		nCost=0
	}
};

struct native FacilityQueueStruct
{
	var UIPanel QueueInfoPanel;
	var UILabel HeaderLabel;
	var UILabel CurrentTaskLabel;
	var TgUIPrimaryHUD_SlotWidgets CurrentTaskItem;
	var UIImage CurrentTaskProgressBar;
	var MaterialInstanceConstant CurrentTaskProgressBarMIC;
	var UILabel CurrentTaskProgressLabel;
	var UIButton CurrentTaskCancelButton;
	var int nActivenHpQueId;
	var int nActiveItemId;
	var int nActiveCount;
	var int nActiveCost;
	var TgUIScrollList PendingTaskScrollList;
	var init array<init FacilityMemberStruct> PendingTaskMembers;
	var UIButton AddTaskButton;

	structdefaultproperties
	{
		QueueInfoPanel=none
		HeaderLabel=none
		CurrentTaskLabel=none
		CurrentTaskItem=none
		CurrentTaskProgressBar=none
		CurrentTaskProgressBarMIC=none
		CurrentTaskProgressLabel=none
		CurrentTaskCancelButton=none
		nActivenHpQueId=0
		nActiveItemId=0
		nActiveCount=0
		nActiveCost=0
		PendingTaskScrollList=none
		PendingTaskMembers=none
		AddTaskButton=none
	}
};

struct native DefensiveConfigStruct
{
	var UIPanel DefenseInfoPanel;
	var UIButton DefenseButtons[6];
	var UIButton ApplyButton;
	var int nLocalDefensePosition;

	structdefaultproperties
	{
		DefenseInfoPanel=none
		DefenseButtons[0]=none
		DefenseButtons[1]=none
		DefenseButtons[2]=none
		DefenseButtons[3]=none
		DefenseButtons[4]=none
		DefenseButtons[5]=none
		ApplyButton=none
		nLocalDefensePosition=0
	}
};

var UIPanel m_FacilitiesPagePanel;
var bool m_bCanEditHexMap;
var bool m_bZoneChangeDisable;
var bool m_bDragMode;
var int m_nCallbackHexPosition;
var int m_nCachedHexUpdateCount;
var TgUIHexWidget_Zone m_pHexWidget;
var UIComboBox m_ZoneListComboBox;
var HexInfoStruct m_HexInfo;
var FacilityQueueStruct m_QueueInfo;
var DefensiveConfigStruct m_DefenseInfo;
var MaterialInstanceConstant m_TaskProgressBarParent;
var UIPanel m_NavigationPanel;
var UIButton m_ZoomInButton;
var UIButton m_ZoomOutButton;
var UIButton m_PanButtons[4];
var name m_HexButtonStyleResolverTag;
var name m_InactiveShieldStyleName;
var name m_ActiveShieldStyleName;
var Vector m_DragMousePosition;
var float m_fZoomDelta;

native function PostOpenScene();
native function PreCloseScene();
native function FixupWidgets();
native function bool TickTgUIScene();
native function RegisterCallbacks();
native function UpdateToolTipData();
native function UpdateHexMap();
native function PostRender();
native function int GetSelectedHexCellPosition();
native function int GetHoverHexCellPosition();
native function bool OnAgencyMenuKey(const out InputEventParameters EventParms);
native function OnZoneChanged(UIObject Sender, int PlayerIndex);
native function bool OnChangeFacility(const out InputEventParameters EventParms);
native function bool OnChangeHQ(const out InputEventParameters EventParms);
native function bool OnTransferHex(const out InputEventParameters EventParms);
native function bool OnAbandonHex(const out InputEventParameters EventParms);
native function bool OnAddTask(const out InputEventParameters EventParms);
native function bool OnCancelTask(const out InputEventParameters EventParms);
native function bool OnCancelCurrentTask(const out InputEventParameters EventParms);
native noexport function OnCurrentTaskStateChanged(UIScreenObject Sender, int nPlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function UpdateDefenseButtons();
native function bool OnShieldTileClicked(const out InputEventParameters EventParms);
native function bool OnDefenseApplied(const out InputEventParameters EventParms);
native function bool OnNavButton(const out InputEventParameters EventParms);
native function UpdateZoneList();
native function UpdateHexInformation();
native function UpdateProductionInformation();
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	J0x00:

	m_ZoneListComboBox.__OnValueChanged__Delegate = OnZoneChanged;
	// This is an implied JumpToken; Continue!
	goto J0x00;
	// Failed to decompile this line:
		// Failed to decompile this Function's code.
		344
Index was out of range. Must be non-negative and less than the size of the collection.
		Parameter name: index

   at UELib.Core.UStruct.UByteCodeDecompiler.(Int32 , Int32 )
		   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
}

event SetCancelTaskDelegate(UIButton Button)
{
	Button.__OnRawInputKey__Delegate = OnCancelTask;
}

defaultproperties
{
	m_nCallbackHexPosition=-1
	m_nCachedHexUpdateCount=-1
	m_TaskProgressBarParent=MaterialInstanceConstant'HUD_A.Achievement_Progression_Bar.MIC_Task_ProgressionBar'
	m_HexButtonStyleResolverTag=Background Image Style
	m_InactiveShieldStyleName=TG_Button_Hex_Reg
	m_ActiveShieldStyleName=TG_Button_Hex_Shield
}