/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAuctionBidMenu.uc
 * 
 * Stats:
 *	Constants:1
 *	Properties:15
 *	Functions:18
 *
 *******************************************************************************/
class TgUIAuctionBidMenu extends TgUIAuctionGeneral
	native;

const AUCTION_BID_REFRESH_TIME = 15.0f;

var TgUIScrollList m_BidAndAuctionsList;
var init array<init sAuctionItemStruct> m_BidAndAuctionMembers;
var int m_nSelectionIndex;
var sAuctionBidTab m_AuctionBidTab[2];
var UIPanel m_BidPanel;
var UILabel m_BidCreditsLabel;
var UIEditBox m_BidEditBox;
var UIButton m_RebidButton;
var UIPanel m_AuctionPanel;
var UILabel m_AuctionCreditsLabel;
var UIButton m_CancelAuctionButton;
var int m_CurrentBidCredits;
var int m_CurrentAuctionCredits;
var native Pointer m_pMyBidsData;
var native Pointer m_pMyAuctionsData;

native function PostInitSceneDriver();
native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function bool TickTgUIScene();
native function ResizeDisplayList(int newSize);
native function UpdateBidListDisplay();
native function UpdateHighlight();
native function bool OnSceneKeyPressed(const out InputEventParameters EventParms);
native function bool OnBidButton(const out InputEventParameters EventParms);
native function bool OnCancelAuctionButton(const out InputEventParameters EventParms);
native function bool OnAuctionItemSelect(const out InputEventParameters EventParms);
native noexport function OnAuctionItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnAuctionTimeStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
event SetAuctionItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnAuctionItemStateChange;
	}
}

event SetAuctionItemSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnAuctionItemSelect;
	}
}

event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKeyPressed;	
	// BlockSize:3072
	MetaCastToken(NullReferenceException) /= @NULL(18433024);
	// Failed to format nests!:System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.(Boolean )
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
	// 2 & Type:Switch Position:279
	// Failed to format remaining nests!:System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.(Boolean )
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
	// 2 & Type:Switch Position:279
}

defaultproperties
{
	m_nSelectionIndex=-1
	m_eCurrentMode=AUC_MODE_MYBIDS
}