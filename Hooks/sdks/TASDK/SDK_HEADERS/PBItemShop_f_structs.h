/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PBItemShop_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function PBItemShop.PBCachedOffersMap.ClearCachedCategory
// [0x00020400] ( FUNC_Native )
struct UPBCachedOffersMap_execClearCachedCategory_Parms
{
	struct FString                                     cached_category;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBCachedOffersMap.ClearCache
// [0x00020400] ( FUNC_Native )
struct UPBCachedOffersMap_execClearCache_Parms
{
};

// Function PBItemShop.PBCachedOffersMap.GetItemOffers
// [0x00424400] ( FUNC_Native )
struct UPBCachedOffersMap_execGetItemOffers_Parms
{
	struct FGuid                                       itemId;                                           		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBOffer >                          offers;                                           		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nMarketCategory;                                  		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBCachedOffersMap.GetUniqueOffers
// [0x00424400] ( FUNC_Native )
struct UPBCachedOffersMap_execGetUniqueOffers_Parms
{
	TArray< struct FString >                           categories;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FPBUniqueOffer >                    offers;                                           		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nMarketCategory;                                  		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBCachedOffersMap.GetOffers
// [0x00424400] ( FUNC_Native )
struct UPBCachedOffersMap_execGetOffers_Parms
{
	TArray< struct FString >                           categories;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FPBOffer >                          offers;                                           		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nMarketCategory;                                  		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBCachedOffersMap.AddItemOffers
// [0x00424400] ( FUNC_Native )
struct UPBCachedOffersMap_execAddItemOffers_Parms
{
	TArray< struct FPBOffer >                          offers;                                           		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nMarketCategory;                                  		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PBItemShop.PBCachedOffersMap.AddOffers
// [0x00424400] ( FUNC_Native )
struct UPBCachedOffersMap_execAddOffers_Parms
{
	TArray< struct FPBOffer >                          offers;                                           		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nMarketCategory;                                  		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PBItemShop.PBCachedOffersMap.AddUniqueOffers
// [0x00424400] ( FUNC_Native )
struct UPBCachedOffersMap_execAddUniqueOffers_Parms
{
	TArray< struct FPBUniqueOffer >                    offers;                                           		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nMarketCategory;                                  		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetCasTicketDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetCasTicketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetCasTicketDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetCasTicketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetCasTicketDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetCasTicketDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     casTicket;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     subscriptionURL;                                  		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetCasTicket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetCasTicket_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnFinalizeSteamTransactionDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnFinalizeSteamTransactionDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnFinalizeSteamTransactionDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnFinalizeSteamTransactionDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnFinalizeSteamTransactionDone
// [0x00120000] 
struct UPBItemShopClient_execOnFinalizeSteamTransactionDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.FinalizeSteamTransaction
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventFinalizeSteamTransaction_Parms
{
	struct FString                                     orderId;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bAuthorized : 1;                                  		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnFundWalletDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnFundWalletDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnFundWalletDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnFundWalletDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnFundWalletDone
// [0x00120000] 
struct UPBItemShopClient_execOnFundWalletDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                newRmtcAmount;                                    		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     orderId;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     tax;                                              		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     VATTax;                                           		// 0x0030 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     orderTotal;                                       		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FSOEStationCashProductFundWallet            fundWalletProduct;                                		// 0x0048 (0x0040) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.FundWallet
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventFundWallet_Parms
{
	int                                                paymentSourceId;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     currency;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     fullSku;                                          		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     steamId;                                          		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetStationCashProductsDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetStationCashProductsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetStationCashProductsDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetStationCashProductsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetStationCashProductsDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetStationCashProductsDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FSOEStationCashProduct >            StationCashProducts;                              		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetStationCashProducts
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetStationCashProducts_Parms
{
	struct FString                                     currency;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetPaymentSourcesDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetPaymentSourcesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetPaymentSourcesDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetPaymentSourcesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetPaymentSourcesDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetPaymentSourcesDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     defaultcurrency;                                  		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      parentPasswordRequired : 1;                       		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                walletPaymentSourceID;                            		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetPaymentSources
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetPaymentSources_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnIsSteamCustomerDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnIsSteamCustomerDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnIsSteamCustomerDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnIsSteamCustomerDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnIsSteamCustomerDone
// [0x00120000] 
struct UPBItemShopClient_execOnIsSteamCustomerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      IsSteamCustomer : 1;                              		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.IsSteamCustomer
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventIsSteamCustomer_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCreateStationHandleDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnCreateStationHandleDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCreateStationHandleDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnCreateStationHandleDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnCreateStationHandleDone
// [0x00120000] 
struct UPBItemShopClient_execOnCreateStationHandleDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.CreateStationHandle
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventCreateStationHandle_Parms
{
	struct FString                                     stationHandle;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCheckStationHandleAvailabilityDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnCheckStationHandleAvailabilityDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCheckStationHandleAvailabilityDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnCheckStationHandleAvailabilityDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnCheckStationHandleAvailabilityDone
// [0x00120000] 
struct UPBItemShopClient_execOnCheckStationHandleAvailabilityDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      avaialble : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.CheckStationHandleAvailability
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventCheckStationHandleAvailability_Parms
{
	struct FString                                     stationHandle;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetUnlockedOffersAtRankDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetUnlockedOffersAtRankDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetUnlockedOffersAtRankDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetUnlockedOffersAtRankDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetUnlockedOffersAtRankDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetUnlockedOffersAtRankDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBOffer >                          offers;                                           		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetUnlockedOffersAtRank
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetUnlockedOffersAtRank_Parms
{
	int                                                OldRank;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewRank;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetClientProfileDetails
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetClientProfileDetails_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetClientProfileDetails
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetClientProfileDetails_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetClientProfileDetails
// [0x00120000] 
struct UPBItemShopClient_execOnGetClientProfileDetails_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AmoutClientProfileDetails;                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPbmnClientProfileDetail >          ClientProfileDetails;                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetClientProfileDetails
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetClientProfileDetails_Parms
{
	int                                                AmountAccountNick;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           AccountNick;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetAccountAndProfilesForName
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetAccountAndProfilesForName_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetAccountAndProfilesForName
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetAccountAndProfilesForName_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetAccountAndProfilesForName
// [0x00120000] 
struct UPBItemShopClient_execOnGetAccountAndProfilesForName_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AmountAccountProfiles;                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPbmnAccountProfile >               AccountProfiles;                                  		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetAccountAndProfilesForName
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetAccountAndProfilesForName_Parms
{
	struct FString                                     SearchName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetUniqueCategoriesDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetUniqueCategoriesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetUniqueCategoriesDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetUniqueCategoriesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetUniqueCategoriesDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetUniqueCategoriesDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           categoriesName;                                   		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetUniqueCategories
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetUniqueCategories_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnReportAbuseDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnReportAbuseDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnReportAbuseDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnReportAbuseDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnReportAbuseDone
// [0x00120000] 
struct UPBItemShopClient_execOnReportAbuseDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.ReportAbuse
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventReportAbuse_Parms
{
	struct FPBReportInfo                               abuseReport;                                      		// 0x0000 (0x0050) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0050 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCheckoutBasketDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnCheckoutBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCheckoutBasketDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnCheckoutBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnCheckoutBasketDone
// [0x00120000] 
struct UPBItemShopClient_execOnCheckoutBasketDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.CheckoutBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventCheckoutBasket_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.CheckoutBasketPartial
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventCheckoutBasketPartial_Parms
{
	TArray< struct FGuid >                             basketItems;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSetPaymentForBasketItemDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnSetPaymentForBasketItemDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSetPaymentForBasketItemDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnSetPaymentForBasketItemDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnSetPaymentForBasketItemDone
// [0x00120000] 
struct UPBItemShopClient_execOnSetPaymentForBasketItemDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.SetPaymentForBasketItem
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventSetPaymentForBasketItem_Parms
{
	TArray< struct FGuid >                             basketItemId;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< int >                                      paymentOption;                                    		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteAllItemsFromBasketDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnDeleteAllItemsFromBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteAllItemsFromBasketDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnDeleteAllItemsFromBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnDeleteAllItemsFromBasketDone
// [0x00120000] 
struct UPBItemShopClient_execOnDeleteAllItemsFromBasketDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.DeleteAllItemsFromBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventDeleteAllItemsFromBasket_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteItemFromBasketDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnDeleteItemFromBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteItemFromBasketDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnDeleteItemFromBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnDeleteItemFromBasketDone
// [0x00120000] 
struct UPBItemShopClient_execOnDeleteItemFromBasketDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.DeleteItemFromBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventDeleteItemFromBasket_Parms
{
	int                                                amountBasketItems;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FGuid >                             basketItems;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnAddItemToBasketDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnAddItemToBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnAddItemToBasketDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnAddItemToBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnAddItemToBasketDone
// [0x00120000] 
struct UPBItemShopClient_execOnAddItemToBasketDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPBBasketItem                               basketItemId;                                     		// 0x0008 (0x003C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.AddItemToBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventAddItemToBasket_Parms
{
	struct FGuid                                       OfferId;                                          		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                quantity;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                paymentOption;                                    		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetBasketDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetBasketDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetBasketDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetBasketDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetBasketDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                amountBasketItems;                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBBasketItem >                     basketItems;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetBasket_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnClearNameReservedDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnClearNameReservedDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnClearNameReservedDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnClearNameReservedDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnClearNameReservedDone
// [0x00120000] 
struct UPBItemShopClient_execOnClearNameReservedDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.ClearNameReserved
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventClearNameReserved_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnReserveNameDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnReserveNameDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnReserveNameDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnReserveNameDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnReserveNameDone
// [0x00120000] 
struct UPBItemShopClient_execOnReserveNameDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.ReserveName
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventReserveName_Parms
{
	struct FString                                     newCharacterName;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnIsGameAvailableDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnIsGameAvailableDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnIsGameAvailableDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnIsGameAvailableDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnIsGameAvailableDone
// [0x00120000] 
struct UPBItemShopClient_execOnIsGameAvailableDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      GameAvailable : 1;                                		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.IsGameAvailable
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventIsGameAvailable_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetLatestNewsDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetLatestNewsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetLatestNewsDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetLatestNewsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetLatestNewsDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetLatestNewsDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBNews >                           News;                                             		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetLatestNews
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetLatestNews_Parms
{
	struct FString                                     locale;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.IsCriticalError
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execIsCriticalError_Parms
{
	int                                                ErrorCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnLogError
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnLogError_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnLogError
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnLogError_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnLogError
// [0x00120000] 
struct UPBItemShopClient_execOnLogError_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetAnsweredSurveyIDListDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetAnsweredSurveyIDListDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetAnsweredSurveyIDListDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetAnsweredSurveyIDListDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetAnsweredSurveyIDListDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetAnsweredSurveyIDListDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      SurveyIds;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetAnsweredSurveyIDList
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetAnsweredSurveyIDList_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetSurveyListDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetSurveyListDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetSurveyListDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetSurveyListDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetSurveyListDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetSurveyListDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBSurvey >                         ArrayOfSurveys;                                   		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetSurveyList
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetSurveyList_Parms
{
	unsigned long                                      GetAnswered : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetSurveyDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetSurveyDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetSurveyDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetSurveyDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetSurveyDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetSurveyDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPBSurvey                                   InSurvey;                                         		// 0x0008 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetSurvey
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetSurvey_Parms
{
	int                                                SurveyID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSubmitSurveyDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnSubmitSurveyDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSubmitSurveyDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnSubmitSurveyDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnSubmitSurveyDone
// [0x00120000] 
struct UPBItemShopClient_execOnSubmitSurveyDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.SubmitSurvey
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventSubmitSurvey_Parms
{
	int                                                SurveyID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBSurveyAnswer >                   Answers;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSubmitBugDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnSubmitBugDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSubmitBugDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnSubmitBugDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnSubmitBugDone
// [0x00120000] 
struct UPBItemShopClient_execOnSubmitBugDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.SubmitBug
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventSubmitBug_Parms
{
	struct FPBDefaultBugInfo                           BugInfo;                                          		// 0x0000 (0x00E8) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x00E8 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetMinimumClientVersionDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetMinimumClientVersionDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetMinimumClientVersionDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetMinimumClientVersionDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetMinimumClientVersionDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetMinimumClientVersionDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     versionId;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetMinimumClientVersion
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetMinimumClientVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteEventByBackendDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnDeleteEventByBackendDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteEventByBackendDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnDeleteEventByBackendDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnDeleteEventByBackendDone
// [0x00120000] 
struct UPBItemShopClient_execOnDeleteEventByBackendDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                EventCode;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.DeleteEventByBackend
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventDeleteEventByBackend_Parms
{
	int                                                EventCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetEventByBackendDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetEventByBackendDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetEventByBackendDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetEventByBackendDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetEventByBackendDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetEventByBackendDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPBShopEvent                                eventDetails;                                     		// 0x0008 (0x0048) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetEventByBackend
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetEventByBackend_Parms
{
	int                                                EventCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnEventsByBackend
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnEventsByBackend_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnEventsByBackend
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnEventsByBackend_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnEventsByBackend
// [0x00120000] 
struct UPBItemShopClient_execOnEventsByBackend_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      eventCodes;                                       		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FPBShopEvent >                      criticalEvents;                                   		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnVerifyPromoCodeDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnVerifyPromoCodeDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnVerifyPromoCodeDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnVerifyPromoCodeDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnVerifyPromoCodeDone
// [0x00120000] 
struct UPBItemShopClient_execOnVerifyPromoCodeDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Error;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBPromoCodeOffer >                 PromoCodeResult;                                  		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                AmountIgc;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.VerifyPromoCode
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventVerifyPromoCode_Parms
{
	struct FString                                     Code;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnUsePromoCodeDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnUsePromoCodeDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnUsePromoCodeDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnUsePromoCodeDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnUsePromoCodeDone
// [0x00120000] 
struct UPBItemShopClient_execOnUsePromoCodeDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.UsePromoCode
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventUsePromoCode_Parms
{
	struct FString                                     Code;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetGameServerStatusDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetGameServerStatusDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetGameServerStatusDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetGameServerStatusDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetGameServerStatusDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetGameServerStatusDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       gameServerId;                                     		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     URL;                                              		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Status;                                           		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetGameServerStatus
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetGameServerStatus_Parms
{
	struct FGuid                                       gameServerId;                                     		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCancelGameServerRequestDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnCancelGameServerRequestDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCancelGameServerRequestDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnCancelGameServerRequestDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnCancelGameServerRequestDone
// [0x00120000] 
struct UPBItemShopClient_execOnCancelGameServerRequestDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.CancelGameServerRequest
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventCancelGameServerRequest_Parms
{
	struct FGuid                                       gameServerId;                                     		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnRequestGameServerDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnRequestGameServerDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnRequestGameServerDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnRequestGameServerDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnRequestGameServerDone
// [0x00120000] 
struct UPBItemShopClient_execOnRequestGameServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       gameServerId;                                     		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.RequestGameServer
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventRequestGameServer_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                regioncode;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetDefaultInventoryDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetDefaultInventoryDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetDefaultInventoryDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetDefaultInventoryDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetDefaultInventoryDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetDefaultInventoryDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBItem >                           items;                                            		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetDefaultInventory
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetDefaultInventory_Parms
{
	struct FGuid                                       characterGender;                                  		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnUpdateWeaponPresetNameDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnUpdateWeaponPresetNameDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnUpdateWeaponPresetNameDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnUpdateWeaponPresetNameDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnUpdateWeaponPresetNameDone
// [0x00120000] 
struct UPBItemShopClient_execOnUpdateWeaponPresetNameDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.UpdateWeaponPresetName
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventUpdateWeaponPresetName_Parms
{
	int                                                indexOfPreset;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     PresetName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetWeaponPresetNamesDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetWeaponPresetNamesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetWeaponPresetNamesDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetWeaponPresetNamesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetWeaponPresetNamesDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetWeaponPresetNamesDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           weaponPresetNames;                                		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetWeaponPresetNames
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetWeaponPresetNames_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetMaxNumberProfilesDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetMaxNumberProfilesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetMaxNumberProfilesDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetMaxNumberProfilesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetMaxNumberProfilesDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetMaxNumberProfilesDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                maxNumberProfiles;                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetMaxNumberProfiles
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetMaxNumberProfiles_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteProfileDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnDeleteProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteProfileDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnDeleteProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnDeleteProfileDone
// [0x00120000] 
struct UPBItemShopClient_execOnDeleteProfileDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.DeleteProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventDeleteProfile_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeselectProfileDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnDeselectProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeselectProfileDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnDeselectProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnDeselectProfileDone
// [0x00120000] 
struct UPBItemShopClient_execOnDeselectProfileDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.DeselectProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventDeselectProfile_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGenerateGameSpyTokenDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGenerateGameSpyTokenDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGenerateGameSpyTokenDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGenerateGameSpyTokenDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGenerateGameSpyTokenDone
// [0x00120000] 
struct UPBItemShopClient_execOnGenerateGameSpyTokenDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     gameSpyToken;                                     		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     gameSpyChallenge;                                 		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GenerateGameSpyToken
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGenerateGameSpyToken_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetCharacterProfileDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetCharacterProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetCharacterProfileDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetCharacterProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetCharacterProfileDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetCharacterProfileDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPBCharacterProfile                         CharacterProfile;                                 		// 0x0008 (0x00B4) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetCharacterProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetCharacterProfile_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                LatestInventoryEntriesAmount;                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSelectProfileDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnSelectProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSelectProfileDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnSelectProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnSelectProfileDone
// [0x00120000] 
struct UPBItemShopClient_execOnSelectProfileDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     gameSpyToken;                                     		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     gameSpyChallenge;                                 		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.SelectProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventSelectProfile_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnUpdateProfileDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnUpdateProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnUpdateProfileDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnUpdateProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnUpdateProfileDone
// [0x00120000] 
struct UPBItemShopClient_execOnUpdateProfileDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.UpdateProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventUpdateProfile_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                avatarPicture;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetProfileDetailsDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetProfileDetailsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetProfileDetailsDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetProfileDetailsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetProfileDetailsDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetProfileDetailsDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CharacterName;                                    		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGuid                                       characterGender;                                  		// 0x0024 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       characterHead;                                    		// 0x0034 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       characterSkin;                                    		// 0x0044 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                avatarPicture;                                    		// 0x0054 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rank;                                             		// 0x0058 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                xp;                                               		// 0x005C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                credits;                                          		// 0x0060 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                coolness;                                         		// 0x0064 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                profileReputation;                                		// 0x0068 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      accountLevel;                                     		// 0x006C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetProfileDetails
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetProfileDetails_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetProfilesDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetProfilesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetProfilesDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetProfilesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetProfilesDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetProfilesDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBProfile >                        Profiles;                                         		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetProfiles
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetProfiles_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCreateProfileDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnCreateProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCreateProfileDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnCreateProfileDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnCreateProfileDone
// [0x00120000] 
struct UPBItemShopClient_execOnCreateProfileDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.CreateProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventCreateProfile_Parms
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGuid                                       characterGender;                                  		// 0x000C (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       characterHead;                                    		// 0x001C (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       characterSkin;                                    		// 0x002C (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                avatarPicture;                                    		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnIsValidNameDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnIsValidNameDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnIsValidNameDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnIsValidNameDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnIsValidNameDone
// [0x00120000] 
struct UPBItemShopClient_execOnIsValidNameDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Valid : 1;                                        		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.IsValidName
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventIsValidName_Parms
{
	struct FString                                     checkName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnIsCharacterNameAvailableDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnIsCharacterNameAvailableDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnIsCharacterNameAvailableDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnIsCharacterNameAvailableDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnIsCharacterNameAvailableDone
// [0x00120000] 
struct UPBItemShopClient_execOnIsCharacterNameAvailableDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      available : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.IsCharacterNameAvailable
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventIsCharacterNameAvailable_Parms
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSetPresetItemDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnSetPresetItemDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSetPresetItemDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnSetPresetItemDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnSetPresetItemDone
// [0x00120000] 
struct UPBItemShopClient_execOnSetPresetItemDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.SetPresetItem
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventSetPresetItem_Parms
{
	TArray< struct FGuid >                             serialNumber;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< int >                                      Preset;                                           		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnRepairInventoryItemDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnRepairInventoryItemDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnRepairInventoryItemDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnRepairInventoryItemDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnRepairInventoryItemDone
// [0x00120000] 
struct UPBItemShopClient_execOnRepairInventoryItemDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       serialNumber;                                     		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.RepairInventoryItem
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventRepairInventoryItem_Parms
{
	struct FGuid                                       serialNumber;                                     		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     currency;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteInventoryItemDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnDeleteInventoryItemDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteInventoryItemDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnDeleteInventoryItemDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnDeleteInventoryItemDone
// [0x00120000] 
struct UPBItemShopClient_execOnDeleteInventoryItemDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       serialNumber;                                     		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.DeleteInventoryItem
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventDeleteInventoryItem_Parms
{
	struct FGuid                                       serialNumber;                                     		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetInventoryItemDetailsDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetInventoryItemDetailsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetInventoryItemDetailsDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetInventoryItemDetailsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetInventoryItemDetailsDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetInventoryItemDetailsDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       itemId;                                           		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     itemDescription;                                  		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                XpBoost;                                          		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                creditBoost;                                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                groupXpBoost;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                groupIgcBoost;                                    		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       serialNumber;                                     		// 0x0034 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FPBDate                                     purchaseDate;                                     		// 0x0044 (0x0014) [0x0000000000000080]              ( CPF_Parm )
	int                                                condition;                                        		// 0x0058 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                maxCondition;                                     		// 0x005C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                idealCondition;                                   		// 0x0060 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                timeInUse;                                        		// 0x0064 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                repairCostsCoins;                                 		// 0x0068 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                repairCostsCredits;                               		// 0x006C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetInventoryItemDetails
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetInventoryItemDetails_Parms
{
	struct FGuid                                       serialNumber;                                     		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetLatestInventoryEntriesDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetLatestInventoryEntriesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetLatestInventoryEntriesDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetLatestInventoryEntriesDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetLatestInventoryEntriesDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetLatestInventoryEntriesDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBItem >                           items;                                            		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetLatestInventoryEntries
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetLatestInventoryEntries_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetInventoryDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetInventoryDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetInventoryDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetInventoryDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetInventoryDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetInventoryDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBItem >                           items;                                            		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetInventory
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetInventory_Parms
{
	struct FString                                     Category;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetAmountDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetAmountDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetAmountDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetAmountDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetAmountDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetAmountDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetAmount
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetAmount_Parms
{
	struct FString                                     currency;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnBuyOfferDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnBuyOfferDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnBuyOfferDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnBuyOfferDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnBuyOfferDone
// [0x00120000] 
struct UPBItemShopClient_execOnBuyOfferDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.BuyOffer
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventBuyOffer_Parms
{
	struct FGuid                                       OfferId;                                          		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                quantity;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                paymentOption;                                    		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetOfferDetailsDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetOfferDetailsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetOfferDetailsDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetOfferDetailsDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetOfferDetailsDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetOfferDetailsDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       OfferId;                                          		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     offerDescription;                                 		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGuid                                       itemId;                                           		// 0x0024 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     itemDescription;                                  		// 0x0034 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                XpBoost;                                          		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                creditBoost;                                      		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                groupXpBoost;                                     		// 0x0048 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                groupIgcBoost;                                    		// 0x004C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetOfferDetails
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetOfferDetails_Parms
{
	struct FGuid                                       OfferId;                                          		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient._onGetItemOffersDone
// [0x00440003] ( FUNC_Final )
struct UPBItemShopClient_exec_onGetItemOffersDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBOffer >                          offers;                                           		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetItemOffersDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetItemOffersDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetItemOffersDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetItemOffersDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetItemOffersDone
// [0x00120002] 
struct UPBItemShopClient_execOnGetItemOffersDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBOffer >                          offers;                                           		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetItemOffers
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetItemOffers_Parms
{
	struct FGuid                                       itemId;                                           		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                marketCategory;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetUniqueOffersOldDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetUniqueOffersOldDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetUniqueOffersOldDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetUniqueOffersOldDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetUniqueOffersOldDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetUniqueOffersOldDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBOffer >                          offers;                                           		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetUniqueOffersOld
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetUniqueOffersOld_Parms
{
	struct FString                                     Category;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient._onGetUniqueOffersDone
// [0x00440003] ( FUNC_Final )
struct UPBItemShopClient_exec_onGetUniqueOffersDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBUniqueOffer >                    offers;                                           		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetUniqueOffersDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetUniqueOffersDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetUniqueOffersDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetUniqueOffersDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetUniqueOffersDone
// [0x00120002] 
struct UPBItemShopClient_execOnGetUniqueOffersDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBUniqueOffer >                    offers;                                           		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetUniqueOffers
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetUniqueOffers_Parms
{
	TArray< struct FString >                           categories;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                marketCategory;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient._onGetOffersDone
// [0x00440003] ( FUNC_Final )
struct UPBItemShopClient_exec_onGetOffersDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBOffer >                          offers;                                           		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetOffersDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetOffersDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetOffersDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetOffersDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetOffersDone
// [0x00120002] 
struct UPBItemShopClient_execOnGetOffersDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBOffer >                          offers;                                           		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetOffers
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetOffers_Parms
{
	TArray< struct FString >                           categories;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                marketCategory;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetSubscriptionModeDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetSubscriptionModeDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetSubscriptionModeDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetSubscriptionModeDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetSubscriptionModeDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetSubscriptionModeDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       subscriptionId;                                   		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                CreditsBoost;                                     		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                XpBoost;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                groupXpBoost;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                groupIgcBoost;                                    		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                slowWeaponDamage;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                slowStyleLoss;                                    		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                itemShopRankBonus;                                		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Duration;                                         		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                discount;                                         		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      recuring : 1;                                     		// 0x003C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetSubscriptionMode
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetSubscriptionMode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetProgressionDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnGetProgressionDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetProgressionDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnGetProgressionDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnGetProgressionDone
// [0x00120000] 
struct UPBItemShopClient_execOnGetProgressionDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Heat2xp;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Heat2credit;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              RankFormulaPower;                                 		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RankFormulaA;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RankFormulaB;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RankFormulaC;                                     		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetProgression
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventGetProgression_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnLogoutDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnLogoutDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnLogoutDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnLogoutDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnLogoutDone
// [0x00120000] 
struct UPBItemShopClient_execOnLogoutDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.Logout
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventLogout_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnLoginDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnLoginDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnLoginDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnLoginDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnLoginDone
// [0x00120000] 
struct UPBItemShopClient_execOnLoginDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       UserId;                                           		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     stationHandle;                                    		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.LoginWithKey
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventLoginWithKey_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     locale;                                           		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Key;                                              		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.LoginWithSession
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventLoginWithSession_Parms
{
	struct FString                                     SessionId;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.Login
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventLogin_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnPingDone
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnPingDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnPingDone
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnPingDone_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnPingDone
// [0x00120000] 
struct UPBItemShopClient_execOnPingDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.Ping
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopClient_eventPing_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSessionEnded
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnSessionEnded_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSessionEnded
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnSessionEnded_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnSessionEnded
// [0x00120000] 
struct UPBItemShopClient_execOnSessionEnded_Parms
{
	int                                                Reason;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Detail;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDisconnect
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnDisconnect_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDisconnect
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnDisconnect_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnDisconnect
// [0x00120000] 
struct UPBItemShopClient_execOnDisconnect_Parms
{
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnQueueChanged
// [0x00020002] 
struct UPBItemShopClient_execRemoveDelegate_OnQueueChanged_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnQueueChanged
// [0x00020002] 
struct UPBItemShopClient_execAddDelegate_OnQueueChanged_Parms
{
	struct FScriptDelegate                             func;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.OnQueueChanged
// [0x00120000] 
struct UPBItemShopClient_execOnQueueChanged_Parms
{
	int                                                nQueueSize;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.RemoveAllDelegatesForParent
// [0x00020002] 
struct UPBItemShopClient_execRemoveAllDelegatesForParent_Parms
{
	class UObject*                                     Parent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPBItemShopClient_execRemoveDelegate_Parms
{
	struct FString                                     DelegateName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ShopDelegateType;                                 		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.AddDelegate
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPBItemShopClient_execAddDelegate_Parms
{
	struct FString                                     DelegateName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Parent;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ShopDelegateType;                                 		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.SetResponseDelay
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execSetResponseDelay_Parms
{
	int                                                milliseconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.SetPingInterval
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execSetPingInterval_Parms
{
	int                                                Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopClient.GetSessionString
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execGetSessionString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.GetProfileId
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execGetProfileId_Parms
{
	struct FGuid                                       ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.GetUserId
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execGetUserId_Parms
{
	struct FGuid                                       ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.ClientVersion
// [0x00420400] ( FUNC_Native )
struct UPBItemShopClient_execClientVersion_Parms
{
	struct FString                                     Version;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.ClientAPIReady
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execClientAPIReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.ClientCancelRequest
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execClientCancelRequest_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.ClientCancelAllRequests
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execClientCancelAllRequests_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.IsBusy
// [0x00020400] ( FUNC_Native )
struct UPBItemShopClient_execIsBusy_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopClient.ClearCachedCategory
// [0x00020002] 
struct UPBItemShopClient_execClearCachedCategory_Parms
{
	struct FString                                     cached_category;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopClient.ClearCache
// [0x00020002] 
struct UPBItemShopClient_execClearCache_Parms
{
};

// Function PBItemShop.PBItemShopClient.ScriptInitializeDelegate
// [0x00120002] 
struct UPBItemShopClient_execScriptInitializeDelegate_Parms
{
};

// Function PBItemShop.PBItemShopClient.Initialize
// [0x00022400] ( FUNC_Native )
struct UPBItemShopClient_execInitialize_Parms
{
};

// Function PBItemShop.PBItemShopClient.GetInstance
// [0x00022400] ( FUNC_Native )
struct UPBItemShopClient_execGetInstance_Parms
{
	class UPBItemShopClient*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnSubmitMapVoteDone
// [0x00120000] 
struct UPBItemShopServer_execOnSubmitMapVoteDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errocode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.SubmitMapVote
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execSubmitMapVote_Parms
{
	struct FPBMapVoteData                              Data;                                             		// 0x0000 (0x0024) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnSubmitMatchStatsDone
// [0x00120000] 
struct UPBItemShopServer_execOnSubmitMatchStatsDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errocode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.SubmitMatchStats
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execSubmitMatchStats_Parms
{
	struct FPBMatchStatsData                           Data;                                             		// 0x0000 (0x005C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x005C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnGetBoostersServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnGetBoostersServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errocode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                subscriptionIgc;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                subscriptionXp;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBOfferServer >                    offers;                                           		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopServer.GetBoostersServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execGetBoostersServer_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnDeleteEventByBackendDone
// [0x00120000] 
struct UPBItemShopServer_execOnDeleteEventByBackendDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                EventCode;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.DeleteEventByBackend
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBItemShopServer_eventDeleteEventByBackend_Parms
{
	int                                                EventCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnSubmitProgressionServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnSubmitProgressionServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.SubmitProgression
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execSubmitProgression_Parms
{
	TArray< struct FPBSubmitProgressionProfileData >   ProfileData;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnGetProgressionDone
// [0x00120000] 
struct UPBItemShopServer_execOnGetProgressionDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Heat2Fans;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Heat2IGC;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FormulaPower;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FormulaA;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FormulaB;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FormulaC;                                         		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxNumCreditBoost;                                		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxNumXpBoost;                                    		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxPercentageCreditBoost;                         		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxPercentageXpBoost;                             		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.GetProgression
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execGetProgression_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnIncrementCoolnessServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnIncrementCoolnessServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.IncrementCoolnessServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execIncrementCoolnessServer_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                incrementValue;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnSendPlayerStatusServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnSendPlayerStatusServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.SendPlayerStatusServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execSendPlayerStatusServer_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                Status;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       orchestratorId;                                   		// 0x0014 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnGetSubscriptionModeServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnGetSubscriptionModeServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       subscriptionId;                                   		// 0x0018 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                subscriptionCreditsBoost;                         		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                subscriptionXpBoost;                              		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                slowWeaponDamage;                                 		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                groupIgcBoost;                                    		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                groupXpBoost;                                     		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.GetSubscriptionModeServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execGetSubscriptionModeServer_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnGetPresetsServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnGetPresetsServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errocode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPBItemServer >                     items;                                            		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopServer.GetPresetsServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execGetPresetsServer_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnUpdateProfileDetailsServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnUpdateProfileDetailsServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.UpdateProfileDetailsServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execUpdateProfileDetailsServer_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Field;                                            		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnGetProfileDetailsServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnGetProfileDetailsServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ProfileId;                                        		// 0x0008 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CharacterName;                                    		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     UserId;                                           		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SessionId;                                        		// 0x0030 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGuid                                       characterGender;                                  		// 0x003C (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       characterHead;                                    		// 0x004C (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       characterSkin;                                    		// 0x005C (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                avatarPicture;                                    		// 0x006C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rank;                                             		// 0x0070 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                xp;                                               		// 0x0074 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                credits;                                          		// 0x0078 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                coolness;                                         		// 0x007C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                profileReputation;                                		// 0x0080 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      accountLevel;                                     		// 0x0084 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.GetProfileDetailsServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execGetProfileDetailsServer_Parms
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnLogoutServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnLogoutServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.LogoutServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execLogoutServer_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnLoginServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnLoginServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     gameSpyToken;                                     		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     gameSpyChallenge;                                 		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopServer.LoginServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execLoginServer_Parms
{
	struct FString                                     ServerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGuid                                       gameRequestId;                                    		// 0x0018 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnPingServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnPingServerDone_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.PingServer
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execPingServer_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.OnGetEventsByBackendServerDone
// [0x00120000] 
struct UPBItemShopServer_execOnGetEventsByBackendServerDone_Parms
{
	int                                                ErrorCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      eventCodes;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FPBCriticalEvent >                  criticalEvents;                                   		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopServer.OnDisconnect
// [0x00120000] 
struct UPBItemShopServer_execOnDisconnect_Parms
{
};

// Function PBItemShop.PBItemShopServer.SetServerResponseDelay
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execSetServerResponseDelay_Parms
{
	int                                                milliseconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PBItemShop.PBItemShopServer.ServerAPIReady
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execServerAPIReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.ServerCancelRequest
// [0x00020400] ( FUNC_Native )
struct UPBItemShopServer_execServerCancelRequest_Parms
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PBItemShop.PBItemShopServer.PBServerItemToClient
// [0x00422002] 
struct UPBItemShopServer_execPBServerItemToClient_Parms
{
	struct FPBItemServer                               pServerItem;                                      		// 0x0000 (0x0094) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPBItem                                     pItem;                                            		// 0x0094 (0x00BC) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopServer.ServerItemTypeToClientItemType
// [0x00022002] 
struct UPBItemShopServer_execServerItemTypeToClientItemType_Parms
{
	unsigned char                                      serverItemType;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PBItemShop.PBItemShopServer.GetInstance
// [0x00022400] ( FUNC_Native )
struct UPBItemShopServer_execGetInstance_Parms
{
	class UPBItemShopServer*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif