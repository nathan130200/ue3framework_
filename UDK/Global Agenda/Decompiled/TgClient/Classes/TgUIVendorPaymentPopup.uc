/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIVendorPaymentPopup.uc
 * 
 * Stats:
 *	Structs:4
 *	Properties:13
 *	Functions:4
 *
 *******************************************************************************/
class TgUIVendorPaymentPopup extends TgUIVendorBase
	native;

struct native OneCurrencyOption
{
	var UIPanel m_Outer;
	var UIButton m_APIcon;
	var UIButton m_CreditIcon;
	var UIButton m_TokenIcon;
	var UILabel m_Price;
	var UILabel m_Currency;

	structdefaultproperties
	{
		m_Outer=none
		m_APIcon=none
		m_CreditIcon=none
		m_TokenIcon=none
		m_Price=none
		m_Currency=none
	}
};

struct native TwoCurrencyOption
{
	var UIPanel m_Outer;
	var OneCurrencyOption m_Currency1;
	var OneCurrencyOption m_Currency2;

	structdefaultproperties
	{
		m_Outer=none
		m_Currency1=(m_Outer=none,m_APIcon=none,m_CreditIcon=none,m_TokenIcon=none,m_Price=none,m_Currency=none)
		m_Currency2=(m_Outer=none,m_APIcon=none,m_CreditIcon=none,m_TokenIcon=none,m_Price=none,m_Currency=none)
	}
};

struct native StdPaymentOptionPanel
{
	var UIPanel m_Outer;
	var OneCurrencyOption m_OneCurrency;
	var TwoCurrencyOption m_TwoCurrency;
	var UILabel m_PurchaseButtonLabel;
	var UIButton m_PurchaseButton;

	structdefaultproperties
	{
		m_Outer=none
		m_OneCurrency=(m_Outer=none,m_APIcon=none,m_CreditIcon=none,m_TokenIcon=none,m_Price=none,m_Currency=none)
		m_TwoCurrency=(m_Outer=none,m_Currency1=(m_Outer=none,m_APIcon=none,m_CreditIcon=none,m_TokenIcon=none,m_Price=none,m_Currency=none),m_Currency2=(m_Outer=none,m_APIcon=none,m_CreditIcon=none,m_TokenIcon=none,m_Price=none,m_Currency=none))
		m_PurchaseButtonLabel=none
		m_PurchaseButton=none
	}
};

struct native APPaymentOptionPanel
{
	var UIPanel m_Outer;
	var OneCurrencyOption m_OneCurrency;
	var UILabel m_PurchaseButtonLabel;
	var UIButton m_PurchaseButton;

	structdefaultproperties
	{
		m_Outer=none
		m_OneCurrency=(m_Outer=none,m_APIcon=none,m_CreditIcon=none,m_TokenIcon=none,m_Price=none,m_Currency=none)
		m_PurchaseButtonLabel=none
		m_PurchaseButton=none
	}
};

var UIPanel m_Outer;
var UILabel m_ItemName;
var TgUIInvWidget m_ItemIcon;
var UILabel m_PaymentLabel;
var StdPaymentOptionPanel m_CostTypeStd;
var APPaymentOptionPanel m_CostTypeAP;
var int m_nNumOptions;
var bool m_bItemUpdated;
var bool m_bIsSingleOptionAPOnly;
var init TgInventoryObject m_pPurchasingItem;
var init TgUIVendorBase m_pCaller;
var sCostDisplayItems m_Costs;
var UIButton m_CloseButton;

native function bool OnButtonDelegate(const out InputEventParameters EventParms);
native noexport function OnInvItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function PostOpenScene();
native function PreCloseScene();

defaultproperties
{
	m_bEscapeKeyCloses=true
}