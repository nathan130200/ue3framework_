/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUITutorialItem.uc
 * 
 * Stats:
 *	Enums:1
 *	Structs:1
 *	Properties:13
 *	Functions:3
 *
 *******************************************************************************/
class TgUITutorialItem extends TgUISceneDriver_Tooltip
	native;

enum ETutClassDevType
{
	TutDev_Melee,
	TutDev_Ranged,
	TutDev_Offhand1,
	TutDev_Specialty,
	TutDev_Offhand2,
	TutDev_MAX
};

struct native sTutItemInfo
{
	var UIPanel m_Outer;
	var UILabel m_Key;

	structdefaultproperties
	{
		m_Outer=none
		m_Key=none
	}
};

var TgGame.TgUIAction_TriggerTutorial.ETutorialTypes m_ActiveTutorial;
var float m_TimeOpened;
var UIPanel m_SingleFrame;
var UIButton m_SingleFrameExit;
var UIPanel m_DoubleFrame;
var UIButton m_DoubleFrameExit[2];
var sTutItemInfo m_AssaultDevs[5];
var sTutItemInfo m_MedicDevs[5];
var sTutItemInfo m_ReconDevs[5];
var sTutItemInfo m_RoboticsDevs[5];
var sTutItemInfo m_Jetpack;
var MaterialInstanceConstant m_BlingMIC;
var int m_BlingMICId;

native function PostOpenScene();
native function bool TickTgUIScene();
native function bool OnCloseButton(const out InputEventParameters EventParms);

defaultproperties
{
	m_BlingMICId=7570
}