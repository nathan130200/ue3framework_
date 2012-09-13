/*
#############################################################################################
# Bullet Run (Unknown) SDK
# ========================================================================================= #
# File: PBItemShop_classes.h
# ========================================================================================= #
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
public:
};

// Class PBItemShop.PBItemShopClient
// 0x03F4 (0x0430 - 0x003C)
class UPBItemShopClient : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FTPBRegionList                              RegionList;                                       		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTItemShopDelegate >                mDelegates;                                       		// 0x0050 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FTCallItem >                        mCalls;                                           		// 0x005C (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      mbAddToQueue : 1;                                 		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                mCallID;                                          		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mLastMarketCategoryFlag;                          		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPBCachedOffersMap*                          mCacheMap;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	TArray< struct FTPBItemShopUnlockedOffers >        mUnlockedOffersCache;                             		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       mSelectedCharacterGuid;                           		// 0x0084 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __ScriptInitializeDelegate__Delegate;             		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueueChanged__Delegate;                       		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDisconnect__Delegate;                         		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSessionEnded__Delegate;                       		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPingDone__Delegate;                           		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginDone__Delegate;                          		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutDone__Delegate;                         		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetProgressionDone__Delegate;                 		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetSubscriptionModeDone__Delegate;            		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetOffersDone__Delegate;                      		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUniqueOffersDone__Delegate;                		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUniqueOffersOldDone__Delegate;             		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetItemOffersDone__Delegate;                  		// 0x0124 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetOfferDetailsDone__Delegate;                		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnBuyOfferDone__Delegate;                       		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetAmountDone__Delegate;                      		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetInventoryDone__Delegate;                   		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetLatestInventoryEntriesDone__Delegate;      		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetInventoryItemDetailsDone__Delegate;        		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteInventoryItemDone__Delegate;            		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRepairInventoryItemDone__Delegate;            		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSetPresetItemDone__Delegate;                  		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIsCharacterNameAvailableDone__Delegate;       		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIsValidNameDone__Delegate;                    		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateProfileDone__Delegate;                  		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetProfilesDone__Delegate;                    		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetProfileDetailsDone__Delegate;              		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateProfileDone__Delegate;                  		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSelectProfileDone__Delegate;                  		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetCharacterProfileDone__Delegate;            		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGenerateGameSpyTokenDone__Delegate;           		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeselectProfileDone__Delegate;                		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteProfileDone__Delegate;                  		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetMaxNumberProfilesDone__Delegate;           		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetWeaponPresetNamesDone__Delegate;           		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateWeaponPresetNameDone__Delegate;         		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetDefaultInventoryDone__Delegate;            		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRequestGameServerDone__Delegate;              		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetGameRegionsDone__Delegate;                 		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelGameServerRequestDone__Delegate;        		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetGameServerStatusDone__Delegate;            		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUsePromoCodeDone__Delegate;                   		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnVerifyPromoCodeDone__Delegate;                		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEventsByBackend__Delegate;                    		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetEventByBackendDone__Delegate;              		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteEventByBackendDone__Delegate;           		// 0x02B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetMinimumClientVersionDone__Delegate;        		// 0x02BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSubmitBugDone__Delegate;                      		// 0x02C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSubmitSurveyDone__Delegate;                   		// 0x02D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetSurveyDone__Delegate;                      		// 0x02E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetSurveyListDone__Delegate;                  		// 0x02EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetAnsweredSurveyIDListDone__Delegate;        		// 0x02F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogError__Delegate;                           		// 0x0304 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetLatestNewsDone__Delegate;                  		// 0x0310 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIsGameAvailableDone__Delegate;                		// 0x031C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReserveNameDone__Delegate;                    		// 0x0328 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClearNameReservedDone__Delegate;              		// 0x0334 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetBasketDone__Delegate;                      		// 0x0340 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddItemToBasketDone__Delegate;                		// 0x034C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteItemFromBasketDone__Delegate;           		// 0x0358 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteAllItemsFromBasketDone__Delegate;       		// 0x0364 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSetPaymentForBasketItemDone__Delegate;        		// 0x0370 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCheckoutBasketDone__Delegate;                 		// 0x037C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReportAbuseDone__Delegate;                    		// 0x0388 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUniqueCategoriesDone__Delegate;            		// 0x0394 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetAccountAndProfilesForName__Delegate;       		// 0x03A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetClientProfileDetails__Delegate;            		// 0x03AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUnlockedOffersAtRankDone__Delegate;        		// 0x03B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCheckStationHandleAvailabilityDone__Delegate; 		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateStationHandleDone__Delegate;            		// 0x03D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnIsSteamCustomerDone__Delegate;                		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetPaymentSourcesDone__Delegate;              		// 0x03E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetStationCashProductsDone__Delegate;         		// 0x03F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFundWalletDone__Delegate;                     		// 0x0400 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFinalizeSteamTransactionDone__Delegate;       		// 0x040C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetCasTicketDone__Delegate;                   		// 0x0418 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSetLastDisplayedCoolnessDone__Delegate;       		// 0x0424 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
};

// Class PBItemShop.PBItemShopResult
// 0x0000 (0x003C - 0x003C)
class UPBItemShopResult : public UObject
{
public:
public:
};

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
public:
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif