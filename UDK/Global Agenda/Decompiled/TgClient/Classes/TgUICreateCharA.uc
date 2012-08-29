/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICreateCharA.uc
 * 
 * Stats:
 *	Constants:5
 *	Structs:2
 *	Properties:12
 *	Functions:14
 *
 *******************************************************************************/
class TgUICreateCharA extends TgUISceneDriver
	native;

const MORPH_HEAD_MALE_MESH_ID = 1605;
const MORPH_HEAD_FEMALE_MESH_ID = 1593;
const DEFAULT_MALE_HAIR_MESH_ID = 1937;
const DEFAULT_FEMALE_HAIR_MESH_ID = 1783;
const DEFAULT_CLASS_ID = 1148;

struct native sGenderButtonStruct
{
	var UIButton m_GenderButton;
	var UIImage m_SelectImage;
	var UIImage m_UnselectImage;

	structdefaultproperties
	{
		m_GenderButton=none
		m_SelectImage=none
		m_UnselectImage=none
	}
};

struct native sPresetHeadArchetype
{
	var UIPrefabInstance m_PresetHeadInstance;
	var UIButton m_PresetHeadButton;
	var UILabel m_PresetHeadLabel;
	var UIImage m_PresetHeadHighlight;

	structdefaultproperties
	{
		m_PresetHeadInstance=none
		m_PresetHeadButton=none
		m_PresetHeadLabel=none
		m_PresetHeadHighlight=none
	}
};

var UIButton m_BackButton;
var UIButton m_NextButton;
var UILabel m_NameLabel;
var sGenderButtonStruct m_MaleButton;
var sGenderButtonStruct m_FemaleButton;
var TgUIScrollList m_HeadScroll;
var init array<init sPresetHeadArchetype> m_PresetHeadList;
var int m_nCurrentGender;
var int m_nCurrentProfile;
var int m_nHeadSelection;
var int m_nHairSelection;
var TgSkeletalMeshActor_CharacterBuilder m_CustomModel;

native function PreCloseScene();
native function FixupTgUIScene();
native function SetupCustomModel();
native function BuildHeadList();
native function SelectHead(int headIndex);
native function SaveMorphSettings();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnBackButtonDelegate(const out InputEventParameters EventParms);
native function bool OnNextButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSelectHeadDelegate(const out InputEventParameters EventParms);
native function bool OnGenderButtonDelegate(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	@NULL(201327872).NativeFunctionToken(ArgumentOutOfRangeException);
}

event SetSelectHeadDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnSelectHeadDelegate;
	}
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

defaultproperties
{
	m_nCurrentGender=853
	m_nHeadSelection=-1
}