/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICustomHeadMenu.uc
 * 
 * Stats:
 *	Constants:8
 *	Enums:2
 *	Structs:3
 *	Properties:24
 *	Functions:28
 *
 *******************************************************************************/
class TgUICustomHeadMenu extends TgUISceneDriver_Tooltip
	native;

const NUM_CUSTOM_HEAD_SECTIONS = 3;
const HARDCODE_DUPLICATE_CHARNAME = 9;
const MORPH_HEAD_MALE_MESH_ID = 1605;
const MORPH_HEAD_FEMALE_MESH_ID = 1593;
const CREATE_CHAR_TIMEOUT = 30.0f;
const DEFAULT_CLASS_ID = 1148;
const NUM_CUSTOM_CATEGORIES = 8;
const HAIR_STYLE_MASTER_SLIDER_IDX = 1;

enum CREATEHEAD_VERIFY_STATES
{
	CHCN_NONE,
	CHCN_WAITING_FOR_NAME_VERIFY,
	CHCN_NAME_OK,
	CHCN_NAME_ERROR,
	CHCN_CLIENTSIDE_NAME_ERROR,
	CHCN_CREATING_CHARACTER,
	CHCN_CREATING_CHARACTER_ERROR,
	CHCN_CREATING_CHARACTER_SUCCESS,
	CHCN_MAX
};

enum EHeadMorphClass
{
	HMC_POSE,
	HMC_BLEND,
	HMC_LIST,
	HMC_MAX
};

struct native sCustomHeadNodeStruct
{
	var name chnsPoseID;
	var TgGame.TgObject.EHeadMorphGroups chnsGroupID;
	var TgUICustomHeadMenu.EHeadMorphClass chnsClassID;
	var float chnsNodeWeight;
	var int chnsNodeCount;
	var string chnsNodeName;
	var int chnsNodeOrder;
	var UIPrefabInstance chnsNodePrefab;
	var UISlider chnsNodeSlider;
	var UILabel chnsNodeLabel;

	structdefaultproperties
	{
		chnsPoseID=None
		chnsGroupID=HMG_None
		chnsClassID=HMC_POSE
		chnsNodeWeight=0.00
		chnsNodeCount=0
		chnsNodeName=""
		chnsNodeOrder=0
		chnsNodePrefab=none
		chnsNodeSlider=none
		chnsNodeLabel=none
	}
};

struct native sCustomHeadGroupStruct
{
	var int chgsGroupID;
	var init array<init sCustomHeadNodeStruct> chgsNodeList;

	structdefaultproperties
	{
		chgsGroupID=0
		chgsNodeList=none
	}
};

struct native sCustomHeadPresetStruct
{
	var bool chpsPresetLocked;
	var UIButton chpsPresetLockButton;
	var UIButton chpsPresetDetails;
	var UIImage chpsPresetSelect;
	var UIImage chpsPresetUnselect;
	var UIImage chpsPresetHover;
	var UISlider chpsPresetSlider;
	var int chpsPresetCount;
	var int chpsPresetIndex;
	var TgMorphNodeMasterSlider chpsMasterSlider;

	structdefaultproperties
	{
		chpsPresetLocked=false
		chpsPresetLockButton=none
		chpsPresetDetails=none
		chpsPresetSelect=none
		chpsPresetUnselect=none
		chpsPresetHover=none
		chpsPresetSlider=none
		chpsPresetCount=0
		chpsPresetIndex=0
		chpsMasterSlider=none
	}
};

var TgSkeletalMeshActor_CharacterBuilder m_CustomModel;
var init array<init MorphNodeBase> m_MorphNodes;
var init array<init sCustomHeadGroupStruct> m_NodeData;
var UIPanel m_BasicPanel;
var UIPanel m_DetailPanel;
var TgUIScrollList m_MorphScrollFrame;
var int m_CurrentMorphGroup;
var bool m_DetailMode;
var bool m_bPlayTutorial;
var bool m_bCreateLock;
var UIButton m_RandomButton;
var UIButton m_NextButton;
var UIButton m_BackButton;
var sCustomHeadPresetStruct m_GroupPreset[8];
var TgMorphNodeBlendList_ByHairStyle m_HairStyleMorphNode;
var TgMorphNodeBlendList m_FacialHairMorphNode;
var TgMorphNodeBlendList m_EyeColorMorphNode;
var UIButton m_BlockerButton;
var int m_nCurrentGender;
var int m_nCurrentProfile;
var int m_nHairSelection;
var float m_fCreateTimeout;
var TgUICustomHeadMenu.CREATEHEAD_VERIFY_STATES m_CreateHeadVerifyState;
var transient array<byte> m_nMorphSettings;

native function FixupTgUIScene();
native function PostOpenScene();
native function bool TickTgUIScene();
native function BuildNodeData();
native function PopulateMorphSliders();
native function OpenTutorialConfirmPopup();
native function OnSliderValueChanged(UIObject Sender, int PlayerIndex);
native function OnGroupSliderValueChanged(UIObject Sender, int PlayerIndex);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnBackButton(const out InputEventParameters EventParms);
native function bool OnRandomAllButton(const out InputEventParameters EventParms);
native function bool OnLockButtonDelegate(const out InputEventParameters EventParms);
native function bool OnDetailButtonDelegate(const out InputEventParameters EventParms);
native function bool CreateHeadNextButton(const out InputEventParameters EventParms);
native noexport function OnDetailButtonMouseOverDelegate(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function SaveMorphSettings();
event SetCreateHeadVerifyState(TgUICustomHeadMenu.CREATEHEAD_VERIFY_STATES stateIn)
{
	m_CreateHeadVerifyState = stateIn;
}

event SendSections()
{
	local CustomCharacterAssembly newCustomAssembly;

	// End:0x11c Loop:False
	if(m_CustomModel != none)
	{
		newCustomAssembly.nGenderTypeId = m_nCurrentGender;
		newCustomAssembly.HeadMeshId = ((m_nCurrentGender == 852) ? 1593 : 1605);
		newCustomAssembly.HairMeshId = m_nHairSelection;
		newCustomAssembly.bBald = newCustomAssembly.HairMeshId == 403 || (newCustomAssembly.HairMeshId == 0);
		newCustomAssembly.SuitMeshId = class'TgPawn_Character'.static.GetDefaultSuitMeshId(m_nCurrentGender == 852, m_nCurrentProfile);
		newCustomAssembly.HelmetMeshId = -1;
		newCustomAssembly.bHideHelmet = true;
		m_CustomModel.SetCustomAssembly(newCustomAssembly);
	}
}

event GoToCharacterSelect()
{
	local TgLoginHUD TgLoginHUD;

	TgLoginHUD = TgLoginHUD(m_HUDParent);
	// End:0x2f Loop:False
	if(TgLoginHUD != none)
	{
		TgLoginHUD.LoadCharCreateMenu();
	}
}

event SetSliderValueChangeDelegate(UISlider slider)
{
	// End:0x24 Loop:False
	if(slider != none)
	{
		slider.__OnValueChanged__Delegate = OnSliderValueChanged;
	}
}

event SetGroupSliderValueChangeDelegate(UISlider slider)
{
	// End:0x24 Loop:False
	if(slider != none)
	{
		slider.__OnValueChanged__Delegate = OnGroupSliderValueChanged;
	}
}

event SetLockButtonDelegate(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnLockButtonDelegate;
	}
}

event SetDetailButtonDelegate(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnDetailButtonDelegate;
	}
}

event SetDetailButtonMouseOverDelegate(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__NotifyActiveStateChanged__Delegate = OnDetailButtonMouseOverDelegate;
	}
}

event ZoomIn()
{
	local TgPlayerController tgpc;

	tgpc = TgPlayerController(m_HUDParent.PlayerOwner);
	// End:0x54 Loop:False
	if(tgpc != none)
	{
		tgpc.ConsoleCommand("CauseEvent morphcam");
	}
}

event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	MetaCastToken-MetaCastToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.MetaCastToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())	
	@NULL(423886848)
	m_RandomButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnRandomAllButton != MetaCastToken(ArgumentOutOfRangeException);
}
