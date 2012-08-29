/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIReceivedItemScreen.uc
 * 
 * Stats:
 *	Properties:15
 *	Functions:6
 *
 *******************************************************************************/
class TgUIReceivedItemScreen extends TgUIRewardScreen
	native;

var UIPanel m_ItemPanel;
var native Pointer m_ItemData;
var TgUIPrimaryHUD_SlotWidgets m_wItem;
var UILabel m_ItemNameLabel;
var TgInventoryObject m_InvItem;
var int m_nFromContainerType;
var int m_nFromContainerId;
var Material m_RandomLootMat;
var MaterialInstanceConstant m_RandomLootMIC;
var UIImage m_RandomLootImage;
var float m_fTimeOfLastRandom;
var float m_fTimeBetweenRandom;
var float m_fAutoDismissTimeAfterReveal;
var int m_nDeferredPositionUpdate;
var init string m_PromoContainerName;

native function PostInitSceneDriver();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function RevealHiddenReward();
native noexport function OnItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
event SetItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnItemStateChange;
	}
}

defaultproperties
{
	m_RandomLootMat=Material'GA_Menu_FA.MAT_RandomLoot'
	m_fTimeBetweenRandom=0.05
	m_fAutoDismissTimeAfterReveal=3.00
	m_fRevealTime=2.00
	m_bCloseChildrenOnClose=false
}