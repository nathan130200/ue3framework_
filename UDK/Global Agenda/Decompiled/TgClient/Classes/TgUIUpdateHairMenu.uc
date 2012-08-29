/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIUpdateHairMenu.uc
 * 
 * Stats:
 *	Structs:1
 *	Properties:33
 *	Functions:20
 *
 *******************************************************************************/
class TgUIUpdateHairMenu extends TgUIVendorBase
	native;

struct native sUHPStruct
{
	var UIImage m_Outer;
	var UIImage m_APIcon;
	var UIImage m_TokenIcon;
	var UILabel m_CurrencyLabel;
	var UILabel m_Value;

	structdefaultproperties
	{
		m_Outer=none
		m_APIcon=none
		m_TokenIcon=none
		m_CurrencyLabel=none
		m_Value=none
	}
};

var TgSkeletalMeshActor_CharacterBuilder m_PaperDoll;
var export editinline TgSkeletalMeshComponent m_ShoulderMesh;
var int m_MaleShoulderMeshId;
var int m_FemaleShoulderMeshId;
var UIButton m_CloseButton;
var UIButton m_SubmitButton;
var UIButton m_CancelButton;
var TgUISkeletalMeshWidget m_PaperDollMeshWidget;
var UISlider m_HairStyleSlider;
var UISlider m_HairColorSlider;
var UISlider m_FacialHairSlider;
var UISlider m_HairAccessoryColorSlider;
var UISlider m_SecondaryHairColorSlider;
var UILabel m_CreditsDataLabel;
var UILabel m_CreditsCostLabel;
var UILabel m_ExclusiveLabel;
var UIImage m_ShadeSlider3;
var bool m_bEnableBackgroundFading;
var bool m_bHasAPPrices;
var bool m_bHasNonAPPrices;
var float m_fFadeInTime;
var float m_fFadeOutTime;
var float m_fFadeAmount;
var AnimTree m_HeadAnimTree;
var TgMorphNodeBlendList_ByHairStyle m_HairStyleMorphNode;
var TgMorphNodeBlendList m_HairColorMorphNode;
var TgMorphNodeBlendList m_HairAccessoryMorphNode;
var TgMorphNodeBlendList m_FacialHairMorphNode;
var TgMorphNodeBlendList m_SecondaryHairColorMorphNode;
var int m_nCachedCurrency;
var init native Pointer m_LootTableItem;
var sUFPStruct m_PlayerBalance;
var sUFPStruct m_ServicePrice;

native function PostOpenScene();
native function bool TickTgUIScene();
native function SubmitButtonPressed();
native function OnHairStyleSliderValueChanged(UIObject Sender, int PlayerIndex);
native function OnHairColorSliderValueChanged(UIObject Sender, int PlayerIndex);
native function OnFacialHairSliderValueChanged(UIObject Sender, int PlayerIndex);
native function OnHairAccessoryColorSliderValueChanged(UIObject Sender, int PlayerIndex);
native function OnSecondaryHairColorSliderValueChanged(UIObject Sender, int PlayerIndex);
native function PreCloseScene();
native function UpdateSliderDisableStatus();
native function UpdateExclusiveLabelStatus();
native function UpdateCreditsInfo();
native function CompleteTransaction();
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	// End:0x12b Loop:False
	if(m_UIScene != none)
	{
		// End:0x2f Loop:False
		if(m_CloseButton != none)
		{
			m_CloseButton.__OnRawInputKey__Delegate = OnCloseButton;
		}
		m_CancelButton
		none
		)
		m_CancelButton.__OnRawInputKey__Delegate = OnCancelButton;
		m_SubmitButton
		none
		)
		m_SubmitButton.__OnRawInputKey__Delegate = OnSubmitButton;
		m_HairStyleSlider
		none
		)
		m_HairStyleSlider.__OnValueChanged__Delegate = OnHairStyleSliderValueChanged;
		m_HairColorSlider
		none
		)
		m_HairColorSlider.__OnValueChanged__Delegate = OnHairColorSliderValueChanged;
		m_FacialHairSlider
		none
		)
		m_FacialHairSlider.__OnValueChanged__Delegate = OnFacialHairSliderValueChanged;
		m_HairAccessoryColorSlider
		none
		)
		m_HairAccessoryColorSlider.__OnValueChanged__Delegate = OnHairAccessoryColorSliderValueChanged;
		m_SecondaryHairColorSlider
		none
		)
		m_SecondaryHairColorSlider.__OnValueChanged__Delegate = OnSecondaryHairColorSliderValueChanged;
	}
}

event InitializeUpdateHairMenu();
function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x60 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
	return false;
}

function bool OnCancelButton(const out InputEventParameters EventParms)
{
	// End:0x60 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
	return false;
}

function bool OnSubmitButton(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SubmitButtonPressed();
		return true;
	}
	return false;
}

defaultproperties
{
	m_MaleShoulderMeshId=2332
	m_FemaleShoulderMeshId=2339
	m_bEnableBackgroundFading=true
	m_fFadeInTime=0.30
	m_fFadeOutTime=0.20
	m_fFadeAmount=0.98
	m_bEscapeKeyCloses=true
	m_bHookChat=true
}