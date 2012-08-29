/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_BuffBar.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:4
 *	Functions:7
 *
 *******************************************************************************/
class TgUIPrimaryHUD_BuffBar extends Object
	native;

const NUM_UIBUFFSLOTS = 10;

struct native transient sBuffWidgetData
{
	var init bool bActive;
	var init UIButton BaseButton;
	var init UIImage BuffIconImage;
	var init UIProgressBar BuffProgressBar;
	var init UILabel BuffName;
	var init UILabel BuffStackLabel;
	var init int BuffID;
	var init int BuffStacks;
	var init float fTimeRemaining;

	structdefaultproperties
	{
		bActive=false
		BaseButton=none
		BuffIconImage=none
		BuffProgressBar=none
		BuffName=none
		BuffStackLabel=none
		BuffID=0
		BuffStacks=0
		fTimeRemaining=0.00
	}
};

var TgUIPrimaryHUD_Settings m_Settings;
var sBuffWidgetData m_BuffWidgets[10];
var TgUISceneDriver m_PrimaryScene;
var bool m_bDebuffBar;

native function TickPrimaryHUDElement(float TimeNow);
native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function UpdateBuffWidget(int WidgetIndex);
native function bool AddBuff(int EffectID, int nIndex, float TimeRemaining, int nNumStacks);
native noexport function Reset(optional bool bHide)
{
	bHide = false;
}

native function CheckBuffs();

defaultproperties
{
	m_Settings=TgSettings0
}