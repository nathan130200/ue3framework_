/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAuctionGeneral.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:2
 *	Structs:2
 *	Properties:12
 *	Functions:8
 *
 *******************************************************************************/
class TgUIAuctionGeneral extends TgUISceneDriver_Tooltip
	native;

const TG_AUCTION_DEPOSIT = 4;

enum AuctionSceneMode
{
	AUC_MODE_MYAUCTIONS,
	AUC_MODE_MYBIDS,
	AUC_MODE_MAX
};

enum AuctionMode
{
	AUCTION_MODE_BID,
	AUCTION_MODE_BUYOUT,
	AUCTION_MODE_MAX
};

struct native sAuctionItemStruct
{
	var UIPrefabInstance wMemberPrefab;
	var UIButton wMemberButton;
	var UIImage wCheckMark;
	var TgUIPrimaryHUD_SlotWidgets wItem;
	var UILabel wName;
	var UILabel wQuantity;
	var UILabel wTimeLeft;
	var UILabel wCurrentBid;
	var UILabel wBuyout;
	var UILabel wMultiUse;
	var UIImage wHighlight;
	var UILabel wPrice;
	var UIPanel wSelectedPanel;
	var UIImage wLineSeparator;
	var TgInventoryObject InvItem;
	var int nAuctionItemId;
	var int nItemId;
	var int nStartPrice;
	var int nQualityValueId;

	structdefaultproperties
	{
		wMemberPrefab=none
		wMemberButton=none
		wCheckMark=none
		wItem=none
		wName=none
		wQuantity=none
		wTimeLeft=none
		wCurrentBid=none
		wBuyout=none
		wMultiUse=none
		wHighlight=none
		wPrice=none
		wSelectedPanel=none
		wLineSeparator=none
		InvItem=none
		nAuctionItemId=0
		nItemId=0
		nStartPrice=0
		nQualityValueId=0
	}
};

struct native sAuctionBidTab
{
	var UIButton TabButton;
	var UILabel TabLabel;
	var UIPanel TabPanel;

	structdefaultproperties
	{
		TabButton=none
		TabLabel=none
		TabPanel=none
	}
};

var UIButton m_TabBids;
var UIButton m_TabBrowse;
var UIButton m_TabAddAuctions;
var UIButton m_TabAuctions;
var UIButton m_CloseButton;
var UIButton m_BuyoutButton;
var sPagingPanel m_PagingPanel;
var TgUIAuctionGeneral.AuctionSceneMode m_eCurrentMode;
var TgUIAuctionGeneral.AuctionMode m_eAuctionMode;
var float m_fUpdateTimer;
var TgPawn_Character m_PlayerPawn;
var sAuctionItemStruct m_ItemSelected;

native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnTabButton(const out InputEventParameters EventParms);
native function bool OnBuyoutButton(const out InputEventParameters EventParms);
native function bool OnAuctionItemSelect(const out InputEventParameters EventParms);
native function OpenBuyoutConfirmPopup(const out sAuctionItemStruct sItemSelected);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function bool ValidateAuctionFeature();
