/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PBItemShop_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum PBItemShop.PBItemShopClient.PBAccountLevel
/*enum PBAccountLevel
{
	PBAL_User                                          = 0,
	PBAL_TestUser                                      = 1,
	PBAL_GM                                            = 2,
	PBAL_Superuser                                     = 3,
	PBAL_MAX                                           = 4
};*/

// Enum PBItemShop.PBItemShopClient.PBServiceType
/*enum PBServiceType
{
	NOT_SERVICE                                        = 0,
	CHANGE_AVATAR                                      = 1,
	CHANGE_SKIN                                        = 2,
	CHANGE_NAME                                        = 3,
	BOOSTER                                            = 4,
	REPAIR                                             = 5,
	PBServiceType_MAX                                  = 6
};*/

// Enum PBItemShop.PBItemShopClient.PBGameServerStatus
/*enum PBGameServerStatus
{
	PBSS_NoRight                                       = 0,
	PBSS_BadID                                         = 1,
	PBSS_PendingOpen                                   = 2,
	PBSS_AcceptedOpen                                  = 3,
	PBSS_Launching                                     = 4,
	PBSS_Failed                                        = 5,
	PBSS_Open                                          = 6,
	PBSS_Crashed                                       = 7,
	PBSS_PendingClose                                  = 8,
	PBSS_AcceptedClose                                 = 9,
	PBSS_Closed                                        = 10,
	PBSS_MAX                                           = 11
};*/

// Enum PBItemShop.PBItemShopClient.PBPriceModel
/*enum PBPriceModel
{
	PBPM_Invalid                                       = 0,
	PBPM_OnlyCoins                                     = 1,
	PBPM_OnlyCredits                                   = 2,
	PBPM_CoinsOrCredits                                = 3,
	PBPM_MAX                                           = 4
};*/

// Enum PBItemShop.PBItemShopClient.PBPaymentOption
/*enum PBPaymentOption
{
	PBPO_Invalid                                       = 0,
	PBPO_Coins                                         = 1,
	PBPO_Credits                                       = 2,
	PBPO_MAX                                           = 3
};*/

// Enum PBItemShop.PBItemShopClient.PBColorGroup
/*enum PBColorGroup
{
	PBCG_No_Group                                      = 0,
	PBCG_Basic_Colors                                  = 1,
	PBCG_Special_Colors                                = 2,
	PBCG_Basic_Patterns                                = 3,
	PBCG_Special_Patterns                              = 4,
	PBCG_MAX                                           = 5
};*/

// Enum PBItemShop.PBItemShopServer.EPbmnServerItemType
/*enum EPbmnServerItemType
{
	ServerItemType_Character                           = 0,
	ServerItemType_Weapon                              = 1,
	ServerItemType_WeaponMod                           = 2,
	ServerItemType_Service                             = 3,
	ServerItemType_Skill                               = 4,
	ServerItemType_Taunt                               = 5,
	ServerItemType_WeaponRepair                        = 6,
	ServerItemType_WeaponMaterial                      = 7,
	ServerItemType_WeaponDecal                         = 8,
	ServerItemType_MAX                                 = 9
};*/

// Enum PBItemShop.PBItemShopServer.EPbmnServerServiceType
/*enum EPbmnServerServiceType
{
	ServerServiceType_NOT_SERVICE                      = 0,
	ServerServiceType_CHANGE_AVATAR                    = 1,
	ServerServiceType_CHANGE_SKIN                      = 2,
	ServerServiceType_CHANGE_NAME                      = 3,
	ServerServiceType_BOOSTER                          = 4,
	ServerServiceType_REPAIR                           = 5,
	ServerServiceType_MAX                              = 6
};*/

// Enum PBItemShop.PBItemShopServer.EPbmnServerColorGroup
/*enum EPbmnServerColorGroup
{
	ServerColorGroup_NO_GROUP                          = 0,
	ServerColorGroup_BASIC_COLORS                      = 1,
	ServerColorGroup_SPECIAL_COLORS                    = 2,
	ServerColorGroup_BASIC_PATTERNS                    = 3,
	ServerColorGroup_SPECIAL_PATTERNS                  = 4,
	ServerColorGroup_MAX                               = 5
};*/

// Enum PBItemShop.PBItemShopServer.EPbmnServerPriceModel
/*enum EPbmnServerPriceModel
{
	ServerPriceModel_Invalid                           = 0,
	ServerPriceModel_OnlyCoins                         = 1,
	ServerPriceModel_OnlyCredits                       = 2,
	ServerPriceModel_CoinsAndCredits                   = 3,
	ServerPriceModel_CoinsOrCredits                    = 4,
	ServerPriceModel_MAX                               = 5
};*/

// Enum PBItemShop.PBItemShopServer.ECriticalEventType
/*enum ECriticalEventType
{
	EventType_AchievementComplete                      = 0,
	EventType_AchievementAccomplished                  = 1,
	EventType_BuddyOnline                              = 2,
	EventType_BuddyOffline                             = 3,
	EventType_BuddyRequest                             = 4,
	EventType_BuddyMessage                             = 5,
	EventType_BannedByGM                               = 6,
	EventType_KickedByGM                               = 7,
	EventType_MutedByGM                                = 8,
	EventType_CSIntervention                           = 9,
	EventType_Kicked                                   = 10,
	EventType_Muted                                    = 11,
	EventType_ItemAdded                                = 12,
	EventType_ItemRemoved                              = 13,
	EventType_ItemUnusable                             = 14,
	EventType_PromotionCode                            = 15,
	EventType_ServiceExpired                           = 16,
	EventType_Rankup                                   = 17,
	EventType_ServerShutdown                           = 18,
	EventType_ServerAnnouncement                       = 19,
	EventType_Unused                                   = 20,
	EventType_MaintenanceAnnouncement                  = 21,
	EventType_PremiumExpired                           = 22,
	EventType_MAX                                      = 23
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class PBItemShop.PBCachedOffersMap
// 0x004C (0x0088 - 0x003C)
class UPBCachedOffersMap : public UObject
{
public:
	int                                                general_market_category;                          		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                general_unique_market_category;                   		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                requested_market_category;                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                requested_unique_market_category;                 		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FMap_Mirror                                 CacheMap;                                         		// 0x004C (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1327 ];

		return pClassPointer;
	};

	void ClearCachedCategory ( struct FString cached_category );
	void ClearCache ( );
	bool GetItemOffers ( struct FGuid itemId, int nMarketCategory, TArray< struct FPBOffer >* offers );
	bool GetUniqueOffers ( TArray< struct FString > categories, int nMarketCategory, TArray< struct FPBUniqueOffer >* offers );
	bool GetOffers ( TArray< struct FString > categories, int nMarketCategory, TArray< struct FPBOffer >* offers );
	void AddItemOffers ( int nMarketCategory, TArray< struct FPBOffer >* offers );
	void AddOffers ( int nMarketCategory, TArray< struct FPBOffer >* offers );
	void AddUniqueOffers ( int nMarketCategory, TArray< struct FPBUniqueOffer >* offers );
};

UClass* UPBCachedOffersMap::pClassPointer = NULL;

// Class PBItemShop.PBItemShopClient
// 0x03B0 (0x03EC - 0x003C)
class UPBItemShopClient : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FTItemShopDelegate >                mDelegates;                                       		// 0x0040 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FTCallItem >                        mCalls;                                           		// 0x004C (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      mbAddToQueue : 1;                                 		// 0x0058 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                mCallID;                                          		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mLastMarketCategoryFlag;                          		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPBCachedOffersMap*                          mCacheMap;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __ScriptInitializeDelegate__Delegate;             		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueueChanged__Delegate;                       		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDisconnect__Delegate;                         		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSessionEnded__Delegate;                       		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPingDone__Delegate;                           		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginDone__Delegate;                          		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutDone__Delegate;                         		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetProgressionDone__Delegate;                 		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetSubscriptionModeDone__Delegate;            		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetOffersDone__Delegate;                      		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUniqueOffersDone__Delegate;                		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUniqueOffersOldDone__Delegate;             		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetItemOffersDone__Delegate;                  		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetOfferDetailsDone__Delegate;                		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnBuyOfferDone__Delegate;                       		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetAmountDone__Delegate;                      		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetInventoryDone__Delegate;                   		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetLatestInventoryEntriesDone__Delegate;      		// 0x0134 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetInventoryItemDetailsDone__Delegate;        		// 0x0140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteInventoryItemDone__Delegate;            		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRepairInventoryItemDone__Delegate;            		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSetPresetItemDone__Delegate;                  		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIsCharacterNameAvailableDone__Delegate;       		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIsValidNameDone__Delegate;                    		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateProfileDone__Delegate;                  		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetProfilesDone__Delegate;                    		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetProfileDetailsDone__Delegate;              		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateProfileDone__Delegate;                  		// 0x01AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSelectProfileDone__Delegate;                  		// 0x01B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetCharacterProfileDone__Delegate;            		// 0x01C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGenerateGameSpyTokenDone__Delegate;           		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeselectProfileDone__Delegate;                		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteProfileDone__Delegate;                  		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetMaxNumberProfilesDone__Delegate;           		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetWeaponPresetNamesDone__Delegate;           		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateWeaponPresetNameDone__Delegate;         		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetDefaultInventoryDone__Delegate;            		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRequestGameServerDone__Delegate;              		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelGameServerRequestDone__Delegate;        		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetGameServerStatusDone__Delegate;            		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUsePromoCodeDone__Delegate;                   		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnVerifyPromoCodeDone__Delegate;                		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEventsByBackend__Delegate;                    		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetEventByBackendDone__Delegate;              		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteEventByBackendDone__Delegate;           		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetMinimumClientVersionDone__Delegate;        		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSubmitBugDone__Delegate;                      		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSubmitSurveyDone__Delegate;                   		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetSurveyDone__Delegate;                      		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetSurveyListDone__Delegate;                  		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetAnsweredSurveyIDListDone__Delegate;        		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogError__Delegate;                           		// 0x02CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetLatestNewsDone__Delegate;                  		// 0x02D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIsGameAvailableDone__Delegate;                		// 0x02E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReserveNameDone__Delegate;                    		// 0x02F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClearNameReservedDone__Delegate;              		// 0x02FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetBasketDone__Delegate;                      		// 0x0308 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddItemToBasketDone__Delegate;                		// 0x0314 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteItemFromBasketDone__Delegate;           		// 0x0320 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteAllItemsFromBasketDone__Delegate;       		// 0x032C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSetPaymentForBasketItemDone__Delegate;        		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCheckoutBasketDone__Delegate;                 		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReportAbuseDone__Delegate;                    		// 0x0350 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUniqueCategoriesDone__Delegate;            		// 0x035C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetAccountAndProfilesForName__Delegate;       		// 0x0368 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetClientProfileDetails__Delegate;            		// 0x0374 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUnlockedOffersAtRankDone__Delegate;        		// 0x0380 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCheckStationHandleAvailabilityDone__Delegate; 		// 0x038C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateStationHandleDone__Delegate;            		// 0x0398 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIsSteamCustomerDone__Delegate;                		// 0x03A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetPaymentSourcesDone__Delegate;              		// 0x03B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetStationCashProductsDone__Delegate;         		// 0x03BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFundWalletDone__Delegate;                     		// 0x03C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFinalizeSteamTransactionDone__Delegate;       		// 0x03D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetCasTicketDone__Delegate;                   		// 0x03E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1328 ];

		return pClassPointer;
	};

	int RemoveDelegate_OnGetCasTicketDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetCasTicketDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetCasTicketDone ( int RequestID, int ErrorCode, struct FString casTicket, struct FString subscriptionURL );
	int eventGetCasTicket ( );
	int RemoveDelegate_OnFinalizeSteamTransactionDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnFinalizeSteamTransactionDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnFinalizeSteamTransactionDone ( int RequestID, int ErrorCode, struct FString ErrorMessage );
	int eventFinalizeSteamTransaction ( struct FString orderId, unsigned long bAuthorized );
	int RemoveDelegate_OnFundWalletDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnFundWalletDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnFundWalletDone ( int RequestID, int ErrorCode, struct FString ErrorMessage, int newRmtcAmount, struct FString orderId, struct FString tax, struct FString VATTax, struct FString orderTotal, struct FSOEStationCashProductFundWallet fundWalletProduct );
	int eventFundWallet ( int paymentSourceId, struct FString currency, struct FString fullSku, struct FString steamId );
	int RemoveDelegate_OnGetStationCashProductsDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetStationCashProductsDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetStationCashProductsDone ( int RequestID, int ErrorCode, struct FString ErrorMessage, TArray< struct FSOEStationCashProduct > StationCashProducts );
	int eventGetStationCashProducts ( struct FString currency );
	int RemoveDelegate_OnGetPaymentSourcesDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetPaymentSourcesDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetPaymentSourcesDone ( int RequestID, int ErrorCode, struct FString ErrorMessage, struct FString defaultcurrency, unsigned long parentPasswordRequired, int walletPaymentSourceID );
	int eventGetPaymentSources ( );
	int RemoveDelegate_OnIsSteamCustomerDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnIsSteamCustomerDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnIsSteamCustomerDone ( int RequestID, int ErrorCode, struct FString ErrorMessage, unsigned long IsSteamCustomer );
	int eventIsSteamCustomer ( );
	int RemoveDelegate_OnCreateStationHandleDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnCreateStationHandleDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnCreateStationHandleDone ( int RequestID, int ErrorCode );
	int eventCreateStationHandle ( struct FString stationHandle );
	int RemoveDelegate_OnCheckStationHandleAvailabilityDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnCheckStationHandleAvailabilityDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnCheckStationHandleAvailabilityDone ( int RequestID, int ErrorCode, unsigned long avaialble );
	int eventCheckStationHandleAvailability ( struct FString stationHandle );
	int RemoveDelegate_OnGetUnlockedOffersAtRankDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetUnlockedOffersAtRankDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetUnlockedOffersAtRankDone ( int RequestID, int ErrorCode, TArray< struct FPBOffer > offers );
	int eventGetUnlockedOffersAtRank ( int OldRank, int NewRank );
	int RemoveDelegate_OnGetClientProfileDetails ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetClientProfileDetails ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetClientProfileDetails ( int RequestID, int ErrorCode, int AmoutClientProfileDetails, TArray< struct FPbmnClientProfileDetail > ClientProfileDetails );
	int eventGetClientProfileDetails ( int AmountAccountNick, TArray< struct FString > AccountNick );
	int RemoveDelegate_OnGetAccountAndProfilesForName ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetAccountAndProfilesForName ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetAccountAndProfilesForName ( int RequestID, int ErrorCode, int AmountAccountProfiles, TArray< struct FPbmnAccountProfile > AccountProfiles );
	int eventGetAccountAndProfilesForName ( struct FString SearchName );
	int RemoveDelegate_OnGetUniqueCategoriesDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetUniqueCategoriesDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetUniqueCategoriesDone ( int RequestID, int ErrorCode, TArray< struct FString > categoriesName );
	int eventGetUniqueCategories ( );
	int RemoveDelegate_OnReportAbuseDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnReportAbuseDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnReportAbuseDone ( int RequestID, int ErrorCode );
	int eventReportAbuse ( struct FPBReportInfo abuseReport );
	int RemoveDelegate_OnCheckoutBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnCheckoutBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnCheckoutBasketDone ( int RequestID, int ErrorCode );
	int eventCheckoutBasket ( );
	int eventCheckoutBasketPartial ( TArray< struct FGuid > basketItems );
	int RemoveDelegate_OnSetPaymentForBasketItemDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnSetPaymentForBasketItemDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnSetPaymentForBasketItemDone ( int RequestID, int ErrorCode );
	int eventSetPaymentForBasketItem ( TArray< struct FGuid > basketItemId, TArray< int > paymentOption );
	int RemoveDelegate_OnDeleteAllItemsFromBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnDeleteAllItemsFromBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnDeleteAllItemsFromBasketDone ( int RequestID, int ErrorCode );
	int eventDeleteAllItemsFromBasket ( );
	int RemoveDelegate_OnDeleteItemFromBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnDeleteItemFromBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnDeleteItemFromBasketDone ( int RequestID, int ErrorCode );
	int eventDeleteItemFromBasket ( int amountBasketItems, TArray< struct FGuid > basketItems );
	int RemoveDelegate_OnAddItemToBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnAddItemToBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnAddItemToBasketDone ( int RequestID, int ErrorCode, struct FPBBasketItem basketItemId );
	int eventAddItemToBasket ( struct FGuid OfferId, int quantity, int paymentOption );
	int RemoveDelegate_OnGetBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetBasketDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetBasketDone ( int RequestID, int ErrorCode, int amountBasketItems, TArray< struct FPBBasketItem > basketItems );
	int eventGetBasket ( );
	int RemoveDelegate_OnClearNameReservedDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnClearNameReservedDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnClearNameReservedDone ( int RequestID, int ErrorCode );
	int eventClearNameReserved ( );
	int RemoveDelegate_OnReserveNameDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnReserveNameDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnReserveNameDone ( int RequestID, int ErrorCode );
	int eventReserveName ( struct FString newCharacterName );
	int RemoveDelegate_OnIsGameAvailableDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnIsGameAvailableDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnIsGameAvailableDone ( int RequestID, int ErrorCode, unsigned long GameAvailable );
	int eventIsGameAvailable ( );
	int RemoveDelegate_OnGetLatestNewsDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetLatestNewsDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetLatestNewsDone ( int RequestID, int ErrorCode, TArray< struct FPBNews > News );
	int eventGetLatestNews ( struct FString locale );
	bool IsCriticalError ( int ErrorCode );
	int RemoveDelegate_OnLogError ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnLogError ( struct FScriptDelegate func, class UObject* Parent );
	void OnLogError ( int RequestID, int ErrorCode );
	int RemoveDelegate_OnGetAnsweredSurveyIDListDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetAnsweredSurveyIDListDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetAnsweredSurveyIDListDone ( int RequestID, int ErrorCode, TArray< int > SurveyIds );
	int eventGetAnsweredSurveyIDList ( );
	int RemoveDelegate_OnGetSurveyListDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetSurveyListDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetSurveyListDone ( int RequestID, int ErrorCode, TArray< struct FPBSurvey > ArrayOfSurveys );
	int eventGetSurveyList ( unsigned long GetAnswered );
	int RemoveDelegate_OnGetSurveyDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetSurveyDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetSurveyDone ( int RequestID, int ErrorCode, struct FPBSurvey InSurvey );
	int eventGetSurvey ( int SurveyID );
	int RemoveDelegate_OnSubmitSurveyDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnSubmitSurveyDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnSubmitSurveyDone ( int RequestID, int ErrorCode );
	int eventSubmitSurvey ( int SurveyID, TArray< struct FPBSurveyAnswer > Answers );
	int RemoveDelegate_OnSubmitBugDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnSubmitBugDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnSubmitBugDone ( int RequestID, int ErrorCode );
	int eventSubmitBug ( struct FPBDefaultBugInfo BugInfo );
	int RemoveDelegate_OnGetMinimumClientVersionDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetMinimumClientVersionDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetMinimumClientVersionDone ( int RequestID, int ErrorCode, struct FString versionId );
	int eventGetMinimumClientVersion ( );
	int RemoveDelegate_OnDeleteEventByBackendDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnDeleteEventByBackendDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnDeleteEventByBackendDone ( int RequestID, int ErrorCode, int EventCode );
	int eventDeleteEventByBackend ( int EventCode );
	int RemoveDelegate_OnGetEventByBackendDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetEventByBackendDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetEventByBackendDone ( int RequestID, int ErrorCode, struct FPBShopEvent eventDetails );
	int eventGetEventByBackend ( int EventCode );
	int RemoveDelegate_OnEventsByBackend ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnEventsByBackend ( struct FScriptDelegate func, class UObject* Parent );
	void OnEventsByBackend ( int RequestID, int ErrorCode, TArray< int > eventCodes, TArray< struct FPBShopEvent > criticalEvents );
	int RemoveDelegate_OnVerifyPromoCodeDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnVerifyPromoCodeDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnVerifyPromoCodeDone ( int RequestID, int Error, TArray< struct FPBPromoCodeOffer > PromoCodeResult, int AmountIgc );
	int eventVerifyPromoCode ( struct FString Code );
	int RemoveDelegate_OnUsePromoCodeDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnUsePromoCodeDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnUsePromoCodeDone ( int RequestID, int ErrorCode );
	int eventUsePromoCode ( struct FString Code );
	int RemoveDelegate_OnGetGameServerStatusDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetGameServerStatusDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetGameServerStatusDone ( int RequestID, int ErrorCode, struct FGuid gameServerId, struct FString URL, int Status );
	int eventGetGameServerStatus ( struct FGuid gameServerId );
	int RemoveDelegate_OnCancelGameServerRequestDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnCancelGameServerRequestDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnCancelGameServerRequestDone ( int RequestID, int ErrorCode );
	int eventCancelGameServerRequest ( struct FGuid gameServerId );
	int RemoveDelegate_OnRequestGameServerDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnRequestGameServerDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnRequestGameServerDone ( int RequestID, int ErrorCode, struct FGuid gameServerId );
	int eventRequestGameServer ( struct FString URL, int regioncode );
	int RemoveDelegate_OnGetDefaultInventoryDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetDefaultInventoryDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetDefaultInventoryDone ( int RequestID, int ErrorCode, TArray< struct FPBItem > items );
	int eventGetDefaultInventory ( struct FGuid characterGender );
	int RemoveDelegate_OnUpdateWeaponPresetNameDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnUpdateWeaponPresetNameDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnUpdateWeaponPresetNameDone ( int RequestID, int ErrorCode );
	int eventUpdateWeaponPresetName ( int indexOfPreset, struct FString PresetName );
	int RemoveDelegate_OnGetWeaponPresetNamesDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetWeaponPresetNamesDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetWeaponPresetNamesDone ( int RequestID, int ErrorCode, TArray< struct FString > weaponPresetNames );
	int eventGetWeaponPresetNames ( );
	int RemoveDelegate_OnGetMaxNumberProfilesDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetMaxNumberProfilesDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetMaxNumberProfilesDone ( int RequestID, int ErrorCode, int maxNumberProfiles );
	int eventGetMaxNumberProfiles ( );
	int RemoveDelegate_OnDeleteProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnDeleteProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnDeleteProfileDone ( int RequestID, int ErrorCode, struct FGuid ProfileId );
	int eventDeleteProfile ( struct FGuid ProfileId );
	int RemoveDelegate_OnDeselectProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnDeselectProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnDeselectProfileDone ( int RequestID, int ErrorCode, struct FGuid ProfileId );
	int eventDeselectProfile ( );
	int RemoveDelegate_OnGenerateGameSpyTokenDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGenerateGameSpyTokenDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGenerateGameSpyTokenDone ( int RequestID, int ErrorCode, struct FGuid ProfileId, struct FString gameSpyToken, struct FString gameSpyChallenge );
	int eventGenerateGameSpyToken ( struct FGuid ProfileId );
	int RemoveDelegate_OnGetCharacterProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetCharacterProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetCharacterProfileDone ( int RequestID, int ErrorCode, struct FPBCharacterProfile CharacterProfile );
	int eventGetCharacterProfile ( struct FGuid ProfileId, int LatestInventoryEntriesAmount );
	int RemoveDelegate_OnSelectProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnSelectProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnSelectProfileDone ( int RequestID, int ErrorCode, struct FGuid ProfileId, struct FString gameSpyToken, struct FString gameSpyChallenge );
	int eventSelectProfile ( struct FGuid ProfileId );
	int RemoveDelegate_OnUpdateProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnUpdateProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnUpdateProfileDone ( int RequestID, int ErrorCode, struct FGuid ProfileId );
	int eventUpdateProfile ( struct FGuid ProfileId, int avatarPicture );
	int RemoveDelegate_OnGetProfileDetailsDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetProfileDetailsDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetProfileDetailsDone ( int RequestID, int ErrorCode, struct FGuid ProfileId, struct FString CharacterName, struct FGuid characterGender, struct FGuid characterHead, struct FGuid characterSkin, int avatarPicture, int Rank, int xp, int credits, int coolness, int profileReputation, unsigned char accountLevel );
	int eventGetProfileDetails ( struct FGuid ProfileId );
	int RemoveDelegate_OnGetProfilesDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetProfilesDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetProfilesDone ( int RequestID, int ErrorCode, TArray< struct FPBProfile > Profiles );
	int eventGetProfiles ( );
	int RemoveDelegate_OnCreateProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnCreateProfileDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnCreateProfileDone ( int RequestID, int ErrorCode, struct FGuid ProfileId );
	int eventCreateProfile ( struct FString CharacterName, struct FGuid characterGender, struct FGuid characterHead, struct FGuid characterSkin, int avatarPicture );
	int RemoveDelegate_OnIsValidNameDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnIsValidNameDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnIsValidNameDone ( int RequestID, int ErrorCode, unsigned long Valid );
	int eventIsValidName ( struct FString checkName );
	int RemoveDelegate_OnIsCharacterNameAvailableDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnIsCharacterNameAvailableDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnIsCharacterNameAvailableDone ( int RequestID, int ErrorCode, unsigned long available );
	int eventIsCharacterNameAvailable ( struct FString CharacterName );
	int RemoveDelegate_OnSetPresetItemDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnSetPresetItemDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnSetPresetItemDone ( int RequestID, int ErrorCode );
	int eventSetPresetItem ( TArray< struct FGuid > serialNumber, TArray< int > Preset );
	int RemoveDelegate_OnRepairInventoryItemDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnRepairInventoryItemDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnRepairInventoryItemDone ( int RequestID, int ErrorCode, struct FGuid serialNumber );
	int eventRepairInventoryItem ( struct FGuid serialNumber, struct FString currency );
	int RemoveDelegate_OnDeleteInventoryItemDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnDeleteInventoryItemDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnDeleteInventoryItemDone ( int RequestID, int ErrorCode, struct FGuid serialNumber );
	int eventDeleteInventoryItem ( struct FGuid serialNumber );
	int RemoveDelegate_OnGetInventoryItemDetailsDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetInventoryItemDetailsDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetInventoryItemDetailsDone ( int RequestID, int ErrorCode, struct FGuid itemId, struct FString itemDescription, int XpBoost, int creditBoost, int groupXpBoost, int groupIgcBoost, struct FGuid serialNumber, struct FPBDate purchaseDate, int condition, int maxCondition, int idealCondition, int timeInUse, int repairCostsCoins, int repairCostsCredits );
	int eventGetInventoryItemDetails ( struct FGuid serialNumber );
	int RemoveDelegate_OnGetLatestInventoryEntriesDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetLatestInventoryEntriesDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetLatestInventoryEntriesDone ( int RequestID, int ErrorCode, TArray< struct FPBItem > items );
	int eventGetLatestInventoryEntries ( int Amount );
	int RemoveDelegate_OnGetInventoryDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetInventoryDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetInventoryDone ( int RequestID, int ErrorCode, TArray< struct FPBItem > items );
	int eventGetInventory ( struct FString Category );
	int RemoveDelegate_OnGetAmountDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetAmountDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetAmountDone ( int RequestID, int ErrorCode, int Amount );
	int eventGetAmount ( struct FString currency );
	int RemoveDelegate_OnBuyOfferDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnBuyOfferDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnBuyOfferDone ( int RequestID, int ErrorCode );
	int eventBuyOffer ( struct FGuid OfferId, int quantity, int paymentOption );
	int RemoveDelegate_OnGetOfferDetailsDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetOfferDetailsDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetOfferDetailsDone ( int RequestID, int ErrorCode, struct FGuid OfferId, struct FString offerDescription, struct FGuid itemId, struct FString itemDescription, int XpBoost, int creditBoost, int groupXpBoost, int groupIgcBoost );
	int eventGetOfferDetails ( struct FGuid OfferId );
	void _onGetItemOffersDone ( int RequestID, int ErrorCode, TArray< struct FPBOffer >* offers );
	int RemoveDelegate_OnGetItemOffersDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetItemOffersDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetItemOffersDone ( int RequestID, int ErrorCode, TArray< struct FPBOffer > offers );
	int eventGetItemOffers ( struct FGuid itemId, int marketCategory );
	int RemoveDelegate_OnGetUniqueOffersOldDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetUniqueOffersOldDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetUniqueOffersOldDone ( int RequestID, int ErrorCode, TArray< struct FPBOffer > offers );
	int eventGetUniqueOffersOld ( struct FString Category );
	void _onGetUniqueOffersDone ( int RequestID, int ErrorCode, TArray< struct FPBUniqueOffer >* offers );
	int RemoveDelegate_OnGetUniqueOffersDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetUniqueOffersDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetUniqueOffersDone ( int RequestID, int ErrorCode, TArray< struct FPBUniqueOffer > offers );
	int eventGetUniqueOffers ( TArray< struct FString > categories, int marketCategory );
	void _onGetOffersDone ( int RequestID, int ErrorCode, TArray< struct FPBOffer >* offers );
	int RemoveDelegate_OnGetOffersDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetOffersDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetOffersDone ( int RequestID, int ErrorCode, TArray< struct FPBOffer > offers );
	int eventGetOffers ( TArray< struct FString > categories, int marketCategory );
	int RemoveDelegate_OnGetSubscriptionModeDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetSubscriptionModeDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetSubscriptionModeDone ( int RequestID, int ErrorCode, struct FGuid subscriptionId, int CreditsBoost, int XpBoost, int groupXpBoost, int groupIgcBoost, int slowWeaponDamage, int slowStyleLoss, int itemShopRankBonus, int Duration, int discount, unsigned long recuring );
	int eventGetSubscriptionMode ( );
	int RemoveDelegate_OnGetProgressionDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnGetProgressionDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnGetProgressionDone ( int RequestID, float Heat2xp, float Heat2credit, float RankFormulaPower, int RankFormulaA, int RankFormulaB, int RankFormulaC );
	int eventGetProgression ( );
	int RemoveDelegate_OnLogoutDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnLogoutDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnLogoutDone ( int RequestID, int ErrorCode );
	int eventLogout ( );
	int RemoveDelegate_OnLoginDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnLoginDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnLoginDone ( int RequestID, int ErrorCode, struct FGuid UserId, struct FString stationHandle );
	int eventLoginWithKey ( struct FString UserName, struct FString Password, struct FString locale, struct FString Key );
	int eventLoginWithSession ( struct FString SessionId );
	int eventLogin ( struct FString UserName, struct FString Password );
	int RemoveDelegate_OnPingDone ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnPingDone ( struct FScriptDelegate func, class UObject* Parent );
	void OnPingDone ( int RequestID, int ErrorCode );
	int eventPing ( );
	int RemoveDelegate_OnSessionEnded ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnSessionEnded ( struct FScriptDelegate func, class UObject* Parent );
	void OnSessionEnded ( int Reason, int Detail, struct FString Message );
	int RemoveDelegate_OnDisconnect ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnDisconnect ( struct FScriptDelegate func, class UObject* Parent );
	void OnDisconnect ( );
	int RemoveDelegate_OnQueueChanged ( struct FScriptDelegate func, class UObject* Parent );
	int AddDelegate_OnQueueChanged ( struct FScriptDelegate func, class UObject* Parent );
	void OnQueueChanged ( int nQueueSize );
	void RemoveAllDelegatesForParent ( class UObject* Parent );
	int RemoveDelegate ( struct FString DelegateName, class UObject* Parent, struct FName ShopDelegateType );
	int AddDelegate ( struct FString DelegateName, class UObject* Parent, struct FName ShopDelegateType );
	void SetResponseDelay ( int milliseconds );
	void SetPingInterval ( int Seconds );
	struct FString GetSessionString ( );
	struct FGuid GetProfileId ( );
	struct FGuid GetUserId ( );
	bool ClientVersion ( struct FString* Version );
	bool ClientAPIReady ( );
	bool ClientCancelRequest ( int RequestID );
	bool ClientCancelAllRequests ( );
	bool IsBusy ( );
	void ClearCachedCategory ( struct FString cached_category );
	void ClearCache ( );
	void ScriptInitializeDelegate ( );
	void Initialize ( );
	class UPBItemShopClient* GetInstance ( );
};

UClass* UPBItemShopClient::pClassPointer = NULL;

// Class PBItemShop.PBItemShopServer
// 0x00CC (0x0108 - 0x003C)
class UPBItemShopServer : public UObject
{
public:
	struct FScriptDelegate                             __OnDisconnect__Delegate;                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetEventsByBackendServerDone__Delegate;       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPingServerDone__Delegate;                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginServerDone__Delegate;                    		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutServerDone__Delegate;                   		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetProfileDetailsServerDone__Delegate;        		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateProfileDetailsServerDone__Delegate;     		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetPresetsServerDone__Delegate;               		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetSubscriptionModeServerDone__Delegate;      		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSendPlayerStatusServerDone__Delegate;         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIncrementCoolnessServerDone__Delegate;        		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetProgressionDone__Delegate;                 		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSubmitProgressionServerDone__Delegate;        		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteEventByBackendDone__Delegate;           		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetBoostersServerDone__Delegate;              		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSubmitMatchStatsDone__Delegate;               		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSubmitMapVoteDone__Delegate;                  		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1329 ];

		return pClassPointer;
	};

	void OnSubmitMapVoteDone ( int RequestID, int errocode );
	int SubmitMapVote ( struct FPBMapVoteData Data );
	void OnSubmitMatchStatsDone ( int RequestID, int errocode );
	int SubmitMatchStats ( struct FPBMatchStatsData Data );
	void OnGetBoostersServerDone ( int RequestID, int errocode, int subscriptionIgc, int subscriptionXp, TArray< struct FPBOfferServer > offers );
	int GetBoostersServer ( );
	void OnDeleteEventByBackendDone ( int RequestID, int ErrorCode, int EventCode );
	int eventDeleteEventByBackend ( int EventCode );
	void OnSubmitProgressionServerDone ( int RequestID, int ErrorCode );
	int SubmitProgression ( TArray< struct FPBSubmitProgressionProfileData > ProfileData );
	void OnGetProgressionDone ( int RequestID, int ErrorCode, float Heat2Fans, float Heat2IGC, float FormulaPower, int FormulaA, int FormulaB, int FormulaC, int MaxNumCreditBoost, int MaxNumXpBoost, int MaxPercentageCreditBoost, int MaxPercentageXpBoost );
	int GetProgression ( );
	void OnIncrementCoolnessServerDone ( int RequestID, int ErrorCode );
	int IncrementCoolnessServer ( struct FGuid ProfileId, int incrementValue );
	void OnSendPlayerStatusServerDone ( int RequestID, int ErrorCode, struct FGuid ProfileId );
	int SendPlayerStatusServer ( struct FGuid ProfileId, int Status, struct FGuid orchestratorId );
	void OnGetSubscriptionModeServerDone ( int RequestID, int ErrorCode, struct FGuid ProfileId, struct FGuid subscriptionId, int subscriptionCreditsBoost, int subscriptionXpBoost, int slowWeaponDamage, int groupIgcBoost, int groupXpBoost );
	int GetSubscriptionModeServer ( struct FGuid ProfileId );
	void OnGetPresetsServerDone ( int RequestID, int errocode, struct FGuid ProfileId, TArray< struct FPBItemServer > items );
	int GetPresetsServer ( struct FGuid ProfileId );
	void OnUpdateProfileDetailsServerDone ( int RequestID, int ErrorCode, struct FGuid ProfileId );
	int UpdateProfileDetailsServer ( struct FGuid ProfileId, struct FString Field, int Value );
	void OnGetProfileDetailsServerDone ( int RequestID, int ErrorCode, struct FGuid ProfileId, struct FString CharacterName, struct FString UserId, struct FString SessionId, struct FGuid characterGender, struct FGuid characterHead, struct FGuid characterSkin, int avatarPicture, int Rank, int xp, int credits, int coolness, int profileReputation, unsigned char accountLevel );
	int GetProfileDetailsServer ( struct FGuid ProfileId );
	void OnLogoutServerDone ( int RequestID, int ErrorCode );
	int LogoutServer ( );
	void OnLoginServerDone ( int RequestID, int ErrorCode, struct FString gameSpyToken, struct FString gameSpyChallenge );
	int LoginServer ( struct FString ServerName, struct FString Password, struct FGuid gameRequestId );
	void OnPingServerDone ( int RequestID, int ErrorCode );
	int PingServer ( );
	void OnGetEventsByBackendServerDone ( int ErrorCode, TArray< int > eventCodes, TArray< struct FPBCriticalEvent > criticalEvents );
	void OnDisconnect ( );
	void SetServerResponseDelay ( int milliseconds );
	bool ServerAPIReady ( );
	bool ServerCancelRequest ( int RequestID );
	void PBServerItemToClient ( struct FPBItemServer pServerItem, struct FPBItem* pItem );
	struct FString ServerItemTypeToClientItemType ( unsigned char serverItemType );
	class UPBItemShopServer* GetInstance ( );
};

UClass* UPBItemShopServer::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif