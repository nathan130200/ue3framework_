/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIClassSelectScene.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:2
 *	Structs:1
 *	Properties:11
 *	Functions:8
 *
 *******************************************************************************/
class TgUIClassSelectScene extends TgUISceneDriver
	native;

const NUM_SELECT_CLASSES = 4;
const SELECT_LOCKOUT_TIME = 3.5f;

enum eClassSelectIndex
{
	CSI_ASSAULT,
	CSI_MEDIC,
	CSI_RECON,
	CSI_ROBOTICS,
	CSI_MAX
};

enum eGenderSelectIndex
{
	GSI_MALE,
	GSI_FEMALE,
	GSI_MAX
};

struct native sClassSelectStruct
{
	var UIPanel cssClassPanel;
	var UIButton cssClassButton;
	var UIButton cssMaleButton;
	var UIButton cssFemaleButton;
	var UIImage cssClassIcon;
	var UILabel cssClassName;

	structdefaultproperties
	{
		cssClassPanel=none
		cssClassButton=none
		cssMaleButton=none
		cssFemaleButton=none
		cssClassIcon=none
		cssClassName=none
	}
};

var float m_LastSelectTime;
var sClassSelectStruct m_ClassSelect[4];
var int m_HighlightClass;
var int m_HighlightGender;
var int m_SelectedClass;
var int m_SelectedGender;
var UIButton m_BackButton;
var UIButton m_NextButton;
var UIPanel m_DescriptionPanel;
var UILabel m_ClassGenderLabel;
var UILabel m_DescriptionLabel;

native function FixupTgUIScene();
native function HighlightClassGender(int ClassIndex, int genderIndex);
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnSelectClassGenderDelegate(const out InputEventParameters EventParms);
native function bool OnBackButtonDelegate(const out InputEventParameters EventParms);
native function bool OnNextButtonDelegate(const out InputEventParameters EventParms);
native noexport function OnClassMouseOverDelegate(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	m_BackButton
	none
	)
	m_BackButton.__OnRawInputKey__Delegate = OnBackButtonDelegate;
	m_NextButton
	none
	)
	m_NextButton.__OnRawInputKey__Delegate = OnNextButtonDelegate;
	@NULL(-66640640)
	@NULL(299237526)
	@NULL(369372160)
	m_ClassSelect[I].cssClassButton.__NotifyActiveStateChanged__Delegate = OnClassMouseOverDelegate;
	// Failed to decompile this line:
		// Failed to decompile this Function's code.
		267
Index was out of range. Must be non-negative and less than the size of the collection.
		Parameter name: index

   at UELib.Core.UStruct.UByteCodeDecompiler.(Int32 , Int32 )
		   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
}
