/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIVendorBase.uc
 * 
 * Stats:
 *	Enums:2
 *	Structs:1
 *	Properties:2
 *	Functions:1
 *
 *******************************************************************************/
class TgUIVendorBase extends TgUISceneDriver_Tooltip
	native;

enum VendorType
{
	TG_VT_Currency,
	TG_VT_Token,
	TG_VT_HZPoints,
	TG_VT_RealWorldCurrency,
	TG_VT_MAX
};

enum ePurchaseMethod
{
	PurchaseMethod_None,
	PurchaseMethod_AP,
	PurchaseMethod_Std,
	PurchaseMethod_MAX
};

struct native sCostDisplayItems
{
	var int StdPrice;
	var int OrigStdPrice;
	var int APPrice;
	var int OrigAPPrice;

	structdefaultproperties
	{
		StdPrice=0
		OrigStdPrice=0
		APPrice=0
		OrigAPPrice=0
	}
};

var TgUIVendorBase.VendorType m_VendorType;
var TgPawn_Character m_PlayerPawn;

native function PostOpenScene();
