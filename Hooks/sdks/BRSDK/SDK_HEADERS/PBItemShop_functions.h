/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PBItemShop_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function PBItemShop.PBCachedOffersMap.ClearCachedCategory
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 cached_category                ( CPF_Parm | CPF_NeedCtorLink )

void UPBCachedOffersMap::ClearCachedCategory ( struct FString cached_category )
{
	static UFunction* pFnClearCachedCategory = NULL;

	if ( ! pFnClearCachedCategory )
		pFnClearCachedCategory = (UFunction*) UObject::GObjObjects()->Data[ 36395 ];

	UPBCachedOffersMap_execClearCachedCategory_Parms ClearCachedCategory_Parms;
	memcpy ( &ClearCachedCategory_Parms.cached_category, &cached_category, 0xC );

	pFnClearCachedCategory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCachedCategory, &ClearCachedCategory_Parms, NULL );

	pFnClearCachedCategory->FunctionFlags |= 0x400;
};

// Function PBItemShop.PBCachedOffersMap.ClearCache
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPBCachedOffersMap::ClearCache ( )
{
	static UFunction* pFnClearCache = NULL;

	if ( ! pFnClearCache )
		pFnClearCache = (UFunction*) UObject::GObjObjects()->Data[ 36394 ];

	UPBCachedOffersMap_execClearCache_Parms ClearCache_Parms;

	pFnClearCache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCache, &ClearCache_Parms, NULL );

	pFnClearCache->FunctionFlags |= 0x400;
};

// Function PBItemShop.PBCachedOffersMap.GetItemOffers
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   itemId                         ( CPF_Parm )
// int                            nMarketCategory                ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPBCachedOffersMap::GetItemOffers ( struct FGuid itemId, int nMarketCategory, TArray< struct FPBOffer >* offers )
{
	static UFunction* pFnGetItemOffers = NULL;

	if ( ! pFnGetItemOffers )
		pFnGetItemOffers = (UFunction*) UObject::GObjObjects()->Data[ 36388 ];

	UPBCachedOffersMap_execGetItemOffers_Parms GetItemOffers_Parms;
	memcpy ( &GetItemOffers_Parms.itemId, &itemId, 0x10 );
	GetItemOffers_Parms.nMarketCategory = nMarketCategory;

	pFnGetItemOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetItemOffers, &GetItemOffers_Parms, NULL );

	pFnGetItemOffers->FunctionFlags |= 0x400;

	if ( offers )
		memcpy ( offers, &GetItemOffers_Parms.offers, 0xC );

	return GetItemOffers_Parms.ReturnValue;
};

// Function PBItemShop.PBCachedOffersMap.GetUniqueOffers
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       categories                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            nMarketCategory                ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FPBUniqueOffer > offers                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPBCachedOffersMap::GetUniqueOffers ( TArray< struct FString > categories, int nMarketCategory, TArray< struct FPBUniqueOffer >* offers )
{
	static UFunction* pFnGetUniqueOffers = NULL;

	if ( ! pFnGetUniqueOffers )
		pFnGetUniqueOffers = (UFunction*) UObject::GObjObjects()->Data[ 34786 ];

	UPBCachedOffersMap_execGetUniqueOffers_Parms GetUniqueOffers_Parms;
	memcpy ( &GetUniqueOffers_Parms.categories, &categories, 0xC );
	GetUniqueOffers_Parms.nMarketCategory = nMarketCategory;

	pFnGetUniqueOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUniqueOffers, &GetUniqueOffers_Parms, NULL );

	pFnGetUniqueOffers->FunctionFlags |= 0x400;

	if ( offers )
		memcpy ( offers, &GetUniqueOffers_Parms.offers, 0xC );

	return GetUniqueOffers_Parms.ReturnValue;
};

// Function PBItemShop.PBCachedOffersMap.GetOffers
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       categories                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            nMarketCategory                ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPBCachedOffersMap::GetOffers ( TArray< struct FString > categories, int nMarketCategory, TArray< struct FPBOffer >* offers )
{
	static UFunction* pFnGetOffers = NULL;

	if ( ! pFnGetOffers )
		pFnGetOffers = (UFunction*) UObject::GObjObjects()->Data[ 34779 ];

	UPBCachedOffersMap_execGetOffers_Parms GetOffers_Parms;
	memcpy ( &GetOffers_Parms.categories, &categories, 0xC );
	GetOffers_Parms.nMarketCategory = nMarketCategory;

	pFnGetOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOffers, &GetOffers_Parms, NULL );

	pFnGetOffers->FunctionFlags |= 0x400;

	if ( offers )
		memcpy ( offers, &GetOffers_Parms.offers, 0xC );

	return GetOffers_Parms.ReturnValue;
};

// Function PBItemShop.PBCachedOffersMap.AddItemOffers
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// int                            nMarketCategory                ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBCachedOffersMap::AddItemOffers ( int nMarketCategory, TArray< struct FPBOffer >* offers )
{
	static UFunction* pFnAddItemOffers = NULL;

	if ( ! pFnAddItemOffers )
		pFnAddItemOffers = (UFunction*) UObject::GObjObjects()->Data[ 34775 ];

	UPBCachedOffersMap_execAddItemOffers_Parms AddItemOffers_Parms;
	AddItemOffers_Parms.nMarketCategory = nMarketCategory;

	pFnAddItemOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddItemOffers, &AddItemOffers_Parms, NULL );

	pFnAddItemOffers->FunctionFlags |= 0x400;

	if ( offers )
		memcpy ( offers, &AddItemOffers_Parms.offers, 0xC );
};

// Function PBItemShop.PBCachedOffersMap.AddOffers
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// int                            nMarketCategory                ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBCachedOffersMap::AddOffers ( int nMarketCategory, TArray< struct FPBOffer >* offers )
{
	static UFunction* pFnAddOffers = NULL;

	if ( ! pFnAddOffers )
		pFnAddOffers = (UFunction*) UObject::GObjObjects()->Data[ 34738 ];

	UPBCachedOffersMap_execAddOffers_Parms AddOffers_Parms;
	AddOffers_Parms.nMarketCategory = nMarketCategory;

	pFnAddOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddOffers, &AddOffers_Parms, NULL );

	pFnAddOffers->FunctionFlags |= 0x400;

	if ( offers )
		memcpy ( offers, &AddOffers_Parms.offers, 0xC );
};

// Function PBItemShop.PBCachedOffersMap.AddUniqueOffers
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// int                            nMarketCategory                ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FPBUniqueOffer > offers                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBCachedOffersMap::AddUniqueOffers ( int nMarketCategory, TArray< struct FPBUniqueOffer >* offers )
{
	static UFunction* pFnAddUniqueOffers = NULL;

	if ( ! pFnAddUniqueOffers )
		pFnAddUniqueOffers = (UFunction*) UObject::GObjObjects()->Data[ 34734 ];

	UPBCachedOffersMap_execAddUniqueOffers_Parms AddUniqueOffers_Parms;
	AddUniqueOffers_Parms.nMarketCategory = nMarketCategory;

	pFnAddUniqueOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddUniqueOffers, &AddUniqueOffers_Parms, NULL );

	pFnAddUniqueOffers->FunctionFlags |= 0x400;

	if ( offers )
		memcpy ( offers, &AddUniqueOffers_Parms.offers, 0xC );
};

// Function PBItemShop.PBItemShopClient.debugPrintSetPreset
// [0x00C20002] 
// Parameters infos:
// TArray< struct FGuid >         serialNumber                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< int >                  Preset                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::debugPrintSetPreset ( TArray< struct FGuid >* serialNumber, TArray< int >* Preset )
{
	static UFunction* pFndebugPrintSetPreset = NULL;

	if ( ! pFndebugPrintSetPreset )
		pFndebugPrintSetPreset = (UFunction*) UObject::GObjObjects()->Data[ 36405 ];

	UPBItemShopClient_execdebugPrintSetPreset_Parms debugPrintSetPreset_Parms;

	this->ProcessEvent ( pFndebugPrintSetPreset, &debugPrintSetPreset_Parms, NULL );

	if ( serialNumber )
		memcpy ( serialNumber, &debugPrintSetPreset_Parms.serialNumber, 0xC );

	if ( Preset )
		memcpy ( Preset, &debugPrintSetPreset_Parms.Preset, 0xC );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetCasTicketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetCasTicketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetCasTicketDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetCasTicketDone )
		pFnRemoveDelegate_OnGetCasTicketDone = (UFunction*) UObject::GObjObjects()->Data[ 36401 ];

	UPBItemShopClient_execRemoveDelegate_OnGetCasTicketDone_Parms RemoveDelegate_OnGetCasTicketDone_Parms;
	memcpy ( &RemoveDelegate_OnGetCasTicketDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetCasTicketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetCasTicketDone, &RemoveDelegate_OnGetCasTicketDone_Parms, NULL );

	return RemoveDelegate_OnGetCasTicketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetCasTicketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetCasTicketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetCasTicketDone = NULL;

	if ( ! pFnAddDelegate_OnGetCasTicketDone )
		pFnAddDelegate_OnGetCasTicketDone = (UFunction*) UObject::GObjObjects()->Data[ 36397 ];

	UPBItemShopClient_execAddDelegate_OnGetCasTicketDone_Parms AddDelegate_OnGetCasTicketDone_Parms;
	memcpy ( &AddDelegate_OnGetCasTicketDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetCasTicketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetCasTicketDone, &AddDelegate_OnGetCasTicketDone_Parms, NULL );

	return AddDelegate_OnGetCasTicketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetCasTicketDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 casTicket                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 subscriptionURL                ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetCasTicketDone ( int requestId, int ErrorCode, struct FString casTicket, struct FString subscriptionURL )
{
	static UFunction* pFnOnGetCasTicketDone = NULL;

	if ( ! pFnOnGetCasTicketDone )
		pFnOnGetCasTicketDone = (UFunction*) UObject::GObjObjects()->Data[ 36284 ];

	UPBItemShopClient_execOnGetCasTicketDone_Parms OnGetCasTicketDone_Parms;
	OnGetCasTicketDone_Parms.requestId = requestId;
	OnGetCasTicketDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetCasTicketDone_Parms.casTicket, &casTicket, 0xC );
	memcpy ( &OnGetCasTicketDone_Parms.subscriptionURL, &subscriptionURL, 0xC );

	this->ProcessEvent ( pFnOnGetCasTicketDone, &OnGetCasTicketDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetCasTicket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetCasTicket ( )
{
	static UFunction* pFnGetCasTicket = NULL;

	if ( ! pFnGetCasTicket )
		pFnGetCasTicket = (UFunction*) UObject::GObjObjects()->Data[ 36282 ];

	UPBItemShopClient_eventGetCasTicket_Parms GetCasTicket_Parms;

	pFnGetCasTicket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCasTicket, &GetCasTicket_Parms, NULL );

	pFnGetCasTicket->FunctionFlags |= 0x400;

	return GetCasTicket_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnFinalizeSteamTransactionDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnFinalizeSteamTransactionDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnFinalizeSteamTransactionDone = NULL;

	if ( ! pFnRemoveDelegate_OnFinalizeSteamTransactionDone )
		pFnRemoveDelegate_OnFinalizeSteamTransactionDone = (UFunction*) UObject::GObjObjects()->Data[ 36278 ];

	UPBItemShopClient_execRemoveDelegate_OnFinalizeSteamTransactionDone_Parms RemoveDelegate_OnFinalizeSteamTransactionDone_Parms;
	memcpy ( &RemoveDelegate_OnFinalizeSteamTransactionDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnFinalizeSteamTransactionDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnFinalizeSteamTransactionDone, &RemoveDelegate_OnFinalizeSteamTransactionDone_Parms, NULL );

	return RemoveDelegate_OnFinalizeSteamTransactionDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnFinalizeSteamTransactionDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnFinalizeSteamTransactionDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnFinalizeSteamTransactionDone = NULL;

	if ( ! pFnAddDelegate_OnFinalizeSteamTransactionDone )
		pFnAddDelegate_OnFinalizeSteamTransactionDone = (UFunction*) UObject::GObjObjects()->Data[ 36274 ];

	UPBItemShopClient_execAddDelegate_OnFinalizeSteamTransactionDone_Parms AddDelegate_OnFinalizeSteamTransactionDone_Parms;
	memcpy ( &AddDelegate_OnFinalizeSteamTransactionDone_Parms.func, &func, 0xC );
	AddDelegate_OnFinalizeSteamTransactionDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnFinalizeSteamTransactionDone, &AddDelegate_OnFinalizeSteamTransactionDone_Parms, NULL );

	return AddDelegate_OnFinalizeSteamTransactionDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnFinalizeSteamTransactionDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnFinalizeSteamTransactionDone ( int requestId, int ErrorCode, struct FString ErrorMessage )
{
	static UFunction* pFnOnFinalizeSteamTransactionDone = NULL;

	if ( ! pFnOnFinalizeSteamTransactionDone )
		pFnOnFinalizeSteamTransactionDone = (UFunction*) UObject::GObjObjects()->Data[ 36270 ];

	UPBItemShopClient_execOnFinalizeSteamTransactionDone_Parms OnFinalizeSteamTransactionDone_Parms;
	OnFinalizeSteamTransactionDone_Parms.requestId = requestId;
	OnFinalizeSteamTransactionDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnFinalizeSteamTransactionDone_Parms.ErrorMessage, &ErrorMessage, 0xC );

	this->ProcessEvent ( pFnOnFinalizeSteamTransactionDone, &OnFinalizeSteamTransactionDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.FinalizeSteamTransaction
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 orderId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bAuthorized                    ( CPF_Parm )

int UPBItemShopClient::eventFinalizeSteamTransaction ( struct FString orderId, unsigned long bAuthorized )
{
	static UFunction* pFnFinalizeSteamTransaction = NULL;

	if ( ! pFnFinalizeSteamTransaction )
		pFnFinalizeSteamTransaction = (UFunction*) UObject::GObjObjects()->Data[ 36266 ];

	UPBItemShopClient_eventFinalizeSteamTransaction_Parms FinalizeSteamTransaction_Parms;
	memcpy ( &FinalizeSteamTransaction_Parms.orderId, &orderId, 0xC );
	FinalizeSteamTransaction_Parms.bAuthorized = bAuthorized;

	pFnFinalizeSteamTransaction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFinalizeSteamTransaction, &FinalizeSteamTransaction_Parms, NULL );

	pFnFinalizeSteamTransaction->FunctionFlags |= 0x400;

	return FinalizeSteamTransaction_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnFundWalletDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnFundWalletDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnFundWalletDone = NULL;

	if ( ! pFnRemoveDelegate_OnFundWalletDone )
		pFnRemoveDelegate_OnFundWalletDone = (UFunction*) UObject::GObjObjects()->Data[ 36262 ];

	UPBItemShopClient_execRemoveDelegate_OnFundWalletDone_Parms RemoveDelegate_OnFundWalletDone_Parms;
	memcpy ( &RemoveDelegate_OnFundWalletDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnFundWalletDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnFundWalletDone, &RemoveDelegate_OnFundWalletDone_Parms, NULL );

	return RemoveDelegate_OnFundWalletDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnFundWalletDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnFundWalletDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnFundWalletDone = NULL;

	if ( ! pFnAddDelegate_OnFundWalletDone )
		pFnAddDelegate_OnFundWalletDone = (UFunction*) UObject::GObjObjects()->Data[ 36258 ];

	UPBItemShopClient_execAddDelegate_OnFundWalletDone_Parms AddDelegate_OnFundWalletDone_Parms;
	memcpy ( &AddDelegate_OnFundWalletDone_Parms.func, &func, 0xC );
	AddDelegate_OnFundWalletDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnFundWalletDone, &AddDelegate_OnFundWalletDone_Parms, NULL );

	return AddDelegate_OnFundWalletDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnFundWalletDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            newRmtcAmount                  ( CPF_Parm )
// struct FString                 orderId                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 tax                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 VATTax                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 orderTotal                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FSOEStationCashProductFundWallet fundWalletProduct              ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnFundWalletDone ( int requestId, int ErrorCode, struct FString ErrorMessage, int newRmtcAmount, struct FString orderId, struct FString tax, struct FString VATTax, struct FString orderTotal, struct FSOEStationCashProductFundWallet fundWalletProduct )
{
	static UFunction* pFnOnFundWalletDone = NULL;

	if ( ! pFnOnFundWalletDone )
		pFnOnFundWalletDone = (UFunction*) UObject::GObjObjects()->Data[ 36248 ];

	UPBItemShopClient_execOnFundWalletDone_Parms OnFundWalletDone_Parms;
	OnFundWalletDone_Parms.requestId = requestId;
	OnFundWalletDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnFundWalletDone_Parms.ErrorMessage, &ErrorMessage, 0xC );
	OnFundWalletDone_Parms.newRmtcAmount = newRmtcAmount;
	memcpy ( &OnFundWalletDone_Parms.orderId, &orderId, 0xC );
	memcpy ( &OnFundWalletDone_Parms.tax, &tax, 0xC );
	memcpy ( &OnFundWalletDone_Parms.VATTax, &VATTax, 0xC );
	memcpy ( &OnFundWalletDone_Parms.orderTotal, &orderTotal, 0xC );
	memcpy ( &OnFundWalletDone_Parms.fundWalletProduct, &fundWalletProduct, 0x40 );

	this->ProcessEvent ( pFnOnFundWalletDone, &OnFundWalletDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.FundWallet
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            paymentSourceId                ( CPF_Parm )
// struct FString                 currency                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 fullSku                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 steamId                        ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventFundWallet ( int paymentSourceId, struct FString currency, struct FString fullSku, struct FString steamId )
{
	static UFunction* pFnFundWallet = NULL;

	if ( ! pFnFundWallet )
		pFnFundWallet = (UFunction*) UObject::GObjObjects()->Data[ 36242 ];

	UPBItemShopClient_eventFundWallet_Parms FundWallet_Parms;
	FundWallet_Parms.paymentSourceId = paymentSourceId;
	memcpy ( &FundWallet_Parms.currency, &currency, 0xC );
	memcpy ( &FundWallet_Parms.fullSku, &fullSku, 0xC );
	memcpy ( &FundWallet_Parms.steamId, &steamId, 0xC );

	pFnFundWallet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFundWallet, &FundWallet_Parms, NULL );

	pFnFundWallet->FunctionFlags |= 0x400;

	return FundWallet_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetStationCashProductsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetStationCashProductsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetStationCashProductsDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetStationCashProductsDone )
		pFnRemoveDelegate_OnGetStationCashProductsDone = (UFunction*) UObject::GObjObjects()->Data[ 36238 ];

	UPBItemShopClient_execRemoveDelegate_OnGetStationCashProductsDone_Parms RemoveDelegate_OnGetStationCashProductsDone_Parms;
	memcpy ( &RemoveDelegate_OnGetStationCashProductsDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetStationCashProductsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetStationCashProductsDone, &RemoveDelegate_OnGetStationCashProductsDone_Parms, NULL );

	return RemoveDelegate_OnGetStationCashProductsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetStationCashProductsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetStationCashProductsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetStationCashProductsDone = NULL;

	if ( ! pFnAddDelegate_OnGetStationCashProductsDone )
		pFnAddDelegate_OnGetStationCashProductsDone = (UFunction*) UObject::GObjObjects()->Data[ 36234 ];

	UPBItemShopClient_execAddDelegate_OnGetStationCashProductsDone_Parms AddDelegate_OnGetStationCashProductsDone_Parms;
	memcpy ( &AddDelegate_OnGetStationCashProductsDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetStationCashProductsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetStationCashProductsDone, &AddDelegate_OnGetStationCashProductsDone_Parms, NULL );

	return AddDelegate_OnGetStationCashProductsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetStationCashProductsDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FSOEStationCashProduct > StationCashProducts            ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetStationCashProductsDone ( int requestId, int ErrorCode, struct FString ErrorMessage, TArray< struct FSOEStationCashProduct > StationCashProducts )
{
	static UFunction* pFnOnGetStationCashProductsDone = NULL;

	if ( ! pFnOnGetStationCashProductsDone )
		pFnOnGetStationCashProductsDone = (UFunction*) UObject::GObjObjects()->Data[ 36228 ];

	UPBItemShopClient_execOnGetStationCashProductsDone_Parms OnGetStationCashProductsDone_Parms;
	OnGetStationCashProductsDone_Parms.requestId = requestId;
	OnGetStationCashProductsDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetStationCashProductsDone_Parms.ErrorMessage, &ErrorMessage, 0xC );
	memcpy ( &OnGetStationCashProductsDone_Parms.StationCashProducts, &StationCashProducts, 0xC );

	this->ProcessEvent ( pFnOnGetStationCashProductsDone, &OnGetStationCashProductsDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetStationCashProducts
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 currency                       ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventGetStationCashProducts ( struct FString currency )
{
	static UFunction* pFnGetStationCashProducts = NULL;

	if ( ! pFnGetStationCashProducts )
		pFnGetStationCashProducts = (UFunction*) UObject::GObjObjects()->Data[ 36225 ];

	UPBItemShopClient_eventGetStationCashProducts_Parms GetStationCashProducts_Parms;
	memcpy ( &GetStationCashProducts_Parms.currency, &currency, 0xC );

	pFnGetStationCashProducts->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStationCashProducts, &GetStationCashProducts_Parms, NULL );

	pFnGetStationCashProducts->FunctionFlags |= 0x400;

	return GetStationCashProducts_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetPaymentSourcesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetPaymentSourcesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetPaymentSourcesDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetPaymentSourcesDone )
		pFnRemoveDelegate_OnGetPaymentSourcesDone = (UFunction*) UObject::GObjObjects()->Data[ 36221 ];

	UPBItemShopClient_execRemoveDelegate_OnGetPaymentSourcesDone_Parms RemoveDelegate_OnGetPaymentSourcesDone_Parms;
	memcpy ( &RemoveDelegate_OnGetPaymentSourcesDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetPaymentSourcesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetPaymentSourcesDone, &RemoveDelegate_OnGetPaymentSourcesDone_Parms, NULL );

	return RemoveDelegate_OnGetPaymentSourcesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetPaymentSourcesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetPaymentSourcesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetPaymentSourcesDone = NULL;

	if ( ! pFnAddDelegate_OnGetPaymentSourcesDone )
		pFnAddDelegate_OnGetPaymentSourcesDone = (UFunction*) UObject::GObjObjects()->Data[ 36217 ];

	UPBItemShopClient_execAddDelegate_OnGetPaymentSourcesDone_Parms AddDelegate_OnGetPaymentSourcesDone_Parms;
	memcpy ( &AddDelegate_OnGetPaymentSourcesDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetPaymentSourcesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetPaymentSourcesDone, &AddDelegate_OnGetPaymentSourcesDone_Parms, NULL );

	return AddDelegate_OnGetPaymentSourcesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetPaymentSourcesDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 defaultcurrency                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  parentPasswordRequired         ( CPF_Parm )
// int                            walletPaymentSourceID          ( CPF_Parm )

void UPBItemShopClient::OnGetPaymentSourcesDone ( int requestId, int ErrorCode, struct FString ErrorMessage, struct FString defaultcurrency, unsigned long parentPasswordRequired, int walletPaymentSourceID )
{
	static UFunction* pFnOnGetPaymentSourcesDone = NULL;

	if ( ! pFnOnGetPaymentSourcesDone )
		pFnOnGetPaymentSourcesDone = (UFunction*) UObject::GObjObjects()->Data[ 36210 ];

	UPBItemShopClient_execOnGetPaymentSourcesDone_Parms OnGetPaymentSourcesDone_Parms;
	OnGetPaymentSourcesDone_Parms.requestId = requestId;
	OnGetPaymentSourcesDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetPaymentSourcesDone_Parms.ErrorMessage, &ErrorMessage, 0xC );
	memcpy ( &OnGetPaymentSourcesDone_Parms.defaultcurrency, &defaultcurrency, 0xC );
	OnGetPaymentSourcesDone_Parms.parentPasswordRequired = parentPasswordRequired;
	OnGetPaymentSourcesDone_Parms.walletPaymentSourceID = walletPaymentSourceID;

	this->ProcessEvent ( pFnOnGetPaymentSourcesDone, &OnGetPaymentSourcesDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetPaymentSources
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetPaymentSources ( )
{
	static UFunction* pFnGetPaymentSources = NULL;

	if ( ! pFnGetPaymentSources )
		pFnGetPaymentSources = (UFunction*) UObject::GObjObjects()->Data[ 36208 ];

	UPBItemShopClient_eventGetPaymentSources_Parms GetPaymentSources_Parms;

	pFnGetPaymentSources->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPaymentSources, &GetPaymentSources_Parms, NULL );

	pFnGetPaymentSources->FunctionFlags |= 0x400;

	return GetPaymentSources_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnIsSteamCustomerDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnIsSteamCustomerDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnIsSteamCustomerDone = NULL;

	if ( ! pFnRemoveDelegate_OnIsSteamCustomerDone )
		pFnRemoveDelegate_OnIsSteamCustomerDone = (UFunction*) UObject::GObjObjects()->Data[ 36204 ];

	UPBItemShopClient_execRemoveDelegate_OnIsSteamCustomerDone_Parms RemoveDelegate_OnIsSteamCustomerDone_Parms;
	memcpy ( &RemoveDelegate_OnIsSteamCustomerDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnIsSteamCustomerDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnIsSteamCustomerDone, &RemoveDelegate_OnIsSteamCustomerDone_Parms, NULL );

	return RemoveDelegate_OnIsSteamCustomerDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnIsSteamCustomerDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnIsSteamCustomerDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnIsSteamCustomerDone = NULL;

	if ( ! pFnAddDelegate_OnIsSteamCustomerDone )
		pFnAddDelegate_OnIsSteamCustomerDone = (UFunction*) UObject::GObjObjects()->Data[ 36200 ];

	UPBItemShopClient_execAddDelegate_OnIsSteamCustomerDone_Parms AddDelegate_OnIsSteamCustomerDone_Parms;
	memcpy ( &AddDelegate_OnIsSteamCustomerDone_Parms.func, &func, 0xC );
	AddDelegate_OnIsSteamCustomerDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnIsSteamCustomerDone, &AddDelegate_OnIsSteamCustomerDone_Parms, NULL );

	return AddDelegate_OnIsSteamCustomerDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnIsSteamCustomerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  IsSteamCustomer                ( CPF_Parm )

void UPBItemShopClient::OnIsSteamCustomerDone ( int requestId, int ErrorCode, struct FString ErrorMessage, unsigned long IsSteamCustomer )
{
	static UFunction* pFnOnIsSteamCustomerDone = NULL;

	if ( ! pFnOnIsSteamCustomerDone )
		pFnOnIsSteamCustomerDone = (UFunction*) UObject::GObjObjects()->Data[ 36195 ];

	UPBItemShopClient_execOnIsSteamCustomerDone_Parms OnIsSteamCustomerDone_Parms;
	OnIsSteamCustomerDone_Parms.requestId = requestId;
	OnIsSteamCustomerDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnIsSteamCustomerDone_Parms.ErrorMessage, &ErrorMessage, 0xC );
	OnIsSteamCustomerDone_Parms.IsSteamCustomer = IsSteamCustomer;

	this->ProcessEvent ( pFnOnIsSteamCustomerDone, &OnIsSteamCustomerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.IsSteamCustomer
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventIsSteamCustomer ( )
{
	static UFunction* pFnIsSteamCustomer = NULL;

	if ( ! pFnIsSteamCustomer )
		pFnIsSteamCustomer = (UFunction*) UObject::GObjObjects()->Data[ 36193 ];

	UPBItemShopClient_eventIsSteamCustomer_Parms IsSteamCustomer_Parms;

	pFnIsSteamCustomer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSteamCustomer, &IsSteamCustomer_Parms, NULL );

	pFnIsSteamCustomer->FunctionFlags |= 0x400;

	return IsSteamCustomer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCreateStationHandleDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnCreateStationHandleDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnCreateStationHandleDone = NULL;

	if ( ! pFnRemoveDelegate_OnCreateStationHandleDone )
		pFnRemoveDelegate_OnCreateStationHandleDone = (UFunction*) UObject::GObjObjects()->Data[ 36189 ];

	UPBItemShopClient_execRemoveDelegate_OnCreateStationHandleDone_Parms RemoveDelegate_OnCreateStationHandleDone_Parms;
	memcpy ( &RemoveDelegate_OnCreateStationHandleDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnCreateStationHandleDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnCreateStationHandleDone, &RemoveDelegate_OnCreateStationHandleDone_Parms, NULL );

	return RemoveDelegate_OnCreateStationHandleDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCreateStationHandleDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnCreateStationHandleDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnCreateStationHandleDone = NULL;

	if ( ! pFnAddDelegate_OnCreateStationHandleDone )
		pFnAddDelegate_OnCreateStationHandleDone = (UFunction*) UObject::GObjObjects()->Data[ 36185 ];

	UPBItemShopClient_execAddDelegate_OnCreateStationHandleDone_Parms AddDelegate_OnCreateStationHandleDone_Parms;
	memcpy ( &AddDelegate_OnCreateStationHandleDone_Parms.func, &func, 0xC );
	AddDelegate_OnCreateStationHandleDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnCreateStationHandleDone, &AddDelegate_OnCreateStationHandleDone_Parms, NULL );

	return AddDelegate_OnCreateStationHandleDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnCreateStationHandleDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnCreateStationHandleDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnCreateStationHandleDone = NULL;

	if ( ! pFnOnCreateStationHandleDone )
		pFnOnCreateStationHandleDone = (UFunction*) UObject::GObjObjects()->Data[ 36182 ];

	UPBItemShopClient_execOnCreateStationHandleDone_Parms OnCreateStationHandleDone_Parms;
	OnCreateStationHandleDone_Parms.requestId = requestId;
	OnCreateStationHandleDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnCreateStationHandleDone, &OnCreateStationHandleDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.CreateStationHandle
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 StationHandle                  ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventCreateStationHandle ( struct FString StationHandle )
{
	static UFunction* pFnCreateStationHandle = NULL;

	if ( ! pFnCreateStationHandle )
		pFnCreateStationHandle = (UFunction*) UObject::GObjObjects()->Data[ 36179 ];

	UPBItemShopClient_eventCreateStationHandle_Parms CreateStationHandle_Parms;
	memcpy ( &CreateStationHandle_Parms.StationHandle, &StationHandle, 0xC );

	pFnCreateStationHandle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateStationHandle, &CreateStationHandle_Parms, NULL );

	pFnCreateStationHandle->FunctionFlags |= 0x400;

	return CreateStationHandle_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCheckStationHandleAvailabilityDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnCheckStationHandleAvailabilityDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnCheckStationHandleAvailabilityDone = NULL;

	if ( ! pFnRemoveDelegate_OnCheckStationHandleAvailabilityDone )
		pFnRemoveDelegate_OnCheckStationHandleAvailabilityDone = (UFunction*) UObject::GObjObjects()->Data[ 36175 ];

	UPBItemShopClient_execRemoveDelegate_OnCheckStationHandleAvailabilityDone_Parms RemoveDelegate_OnCheckStationHandleAvailabilityDone_Parms;
	memcpy ( &RemoveDelegate_OnCheckStationHandleAvailabilityDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnCheckStationHandleAvailabilityDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnCheckStationHandleAvailabilityDone, &RemoveDelegate_OnCheckStationHandleAvailabilityDone_Parms, NULL );

	return RemoveDelegate_OnCheckStationHandleAvailabilityDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCheckStationHandleAvailabilityDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnCheckStationHandleAvailabilityDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnCheckStationHandleAvailabilityDone = NULL;

	if ( ! pFnAddDelegate_OnCheckStationHandleAvailabilityDone )
		pFnAddDelegate_OnCheckStationHandleAvailabilityDone = (UFunction*) UObject::GObjObjects()->Data[ 36171 ];

	UPBItemShopClient_execAddDelegate_OnCheckStationHandleAvailabilityDone_Parms AddDelegate_OnCheckStationHandleAvailabilityDone_Parms;
	memcpy ( &AddDelegate_OnCheckStationHandleAvailabilityDone_Parms.func, &func, 0xC );
	AddDelegate_OnCheckStationHandleAvailabilityDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnCheckStationHandleAvailabilityDone, &AddDelegate_OnCheckStationHandleAvailabilityDone_Parms, NULL );

	return AddDelegate_OnCheckStationHandleAvailabilityDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnCheckStationHandleAvailabilityDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// unsigned long                  avaialble                      ( CPF_Parm )

void UPBItemShopClient::OnCheckStationHandleAvailabilityDone ( int requestId, int ErrorCode, unsigned long avaialble )
{
	static UFunction* pFnOnCheckStationHandleAvailabilityDone = NULL;

	if ( ! pFnOnCheckStationHandleAvailabilityDone )
		pFnOnCheckStationHandleAvailabilityDone = (UFunction*) UObject::GObjObjects()->Data[ 36167 ];

	UPBItemShopClient_execOnCheckStationHandleAvailabilityDone_Parms OnCheckStationHandleAvailabilityDone_Parms;
	OnCheckStationHandleAvailabilityDone_Parms.requestId = requestId;
	OnCheckStationHandleAvailabilityDone_Parms.ErrorCode = ErrorCode;
	OnCheckStationHandleAvailabilityDone_Parms.avaialble = avaialble;

	this->ProcessEvent ( pFnOnCheckStationHandleAvailabilityDone, &OnCheckStationHandleAvailabilityDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.CheckStationHandleAvailability
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 StationHandle                  ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventCheckStationHandleAvailability ( struct FString StationHandle )
{
	static UFunction* pFnCheckStationHandleAvailability = NULL;

	if ( ! pFnCheckStationHandleAvailability )
		pFnCheckStationHandleAvailability = (UFunction*) UObject::GObjObjects()->Data[ 36164 ];

	UPBItemShopClient_eventCheckStationHandleAvailability_Parms CheckStationHandleAvailability_Parms;
	memcpy ( &CheckStationHandleAvailability_Parms.StationHandle, &StationHandle, 0xC );

	pFnCheckStationHandleAvailability->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckStationHandleAvailability, &CheckStationHandleAvailability_Parms, NULL );

	pFnCheckStationHandleAvailability->FunctionFlags |= 0x400;

	return CheckStationHandleAvailability_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient._OnGetUnlockedOffersAtRankDone
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::_OnGetUnlockedOffersAtRankDone ( int requestId, int ErrorCode, TArray< struct FPBOffer > offers )
{
	static UFunction* pFn_OnGetUnlockedOffersAtRankDone = NULL;

	if ( ! pFn_OnGetUnlockedOffersAtRankDone )
		pFn_OnGetUnlockedOffersAtRankDone = (UFunction*) UObject::GObjObjects()->Data[ 36151 ];

	UPBItemShopClient_exec_OnGetUnlockedOffersAtRankDone_Parms _OnGetUnlockedOffersAtRankDone_Parms;
	_OnGetUnlockedOffersAtRankDone_Parms.requestId = requestId;
	_OnGetUnlockedOffersAtRankDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &_OnGetUnlockedOffersAtRankDone_Parms.offers, &offers, 0xC );

	this->ProcessEvent ( pFn_OnGetUnlockedOffersAtRankDone, &_OnGetUnlockedOffersAtRankDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetUnlockedOffersAtRankDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetUnlockedOffersAtRankDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetUnlockedOffersAtRankDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetUnlockedOffersAtRankDone )
		pFnRemoveDelegate_OnGetUnlockedOffersAtRankDone = (UFunction*) UObject::GObjObjects()->Data[ 36156 ];

	UPBItemShopClient_execRemoveDelegate_OnGetUnlockedOffersAtRankDone_Parms RemoveDelegate_OnGetUnlockedOffersAtRankDone_Parms;
	memcpy ( &RemoveDelegate_OnGetUnlockedOffersAtRankDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetUnlockedOffersAtRankDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetUnlockedOffersAtRankDone, &RemoveDelegate_OnGetUnlockedOffersAtRankDone_Parms, NULL );

	return RemoveDelegate_OnGetUnlockedOffersAtRankDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetUnlockedOffersAtRankDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetUnlockedOffersAtRankDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetUnlockedOffersAtRankDone = NULL;

	if ( ! pFnAddDelegate_OnGetUnlockedOffersAtRankDone )
		pFnAddDelegate_OnGetUnlockedOffersAtRankDone = (UFunction*) UObject::GObjObjects()->Data[ 36152 ];

	UPBItemShopClient_execAddDelegate_OnGetUnlockedOffersAtRankDone_Parms AddDelegate_OnGetUnlockedOffersAtRankDone_Parms;
	memcpy ( &AddDelegate_OnGetUnlockedOffersAtRankDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetUnlockedOffersAtRankDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetUnlockedOffersAtRankDone, &AddDelegate_OnGetUnlockedOffersAtRankDone_Parms, NULL );

	return AddDelegate_OnGetUnlockedOffersAtRankDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetUnlockedOffersAtRankDone
// [0x00120002] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetUnlockedOffersAtRankDone ( int requestId, int ErrorCode, TArray< struct FPBOffer > offers )
{
	static UFunction* pFnOnGetUnlockedOffersAtRankDone = NULL;

	if ( ! pFnOnGetUnlockedOffersAtRankDone )
		pFnOnGetUnlockedOffersAtRankDone = (UFunction*) UObject::GObjObjects()->Data[ 36146 ];

	UPBItemShopClient_execOnGetUnlockedOffersAtRankDone_Parms OnGetUnlockedOffersAtRankDone_Parms;
	OnGetUnlockedOffersAtRankDone_Parms.requestId = requestId;
	OnGetUnlockedOffersAtRankDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetUnlockedOffersAtRankDone_Parms.offers, &offers, 0xC );

	this->ProcessEvent ( pFnOnGetUnlockedOffersAtRankDone, &OnGetUnlockedOffersAtRankDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetUnlockedOffersAtRank
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldRank                        ( CPF_Parm )
// int                            NewRank                        ( CPF_Parm )

int UPBItemShopClient::eventGetUnlockedOffersAtRank ( int OldRank, int NewRank )
{
	static UFunction* pFnGetUnlockedOffersAtRank = NULL;

	if ( ! pFnGetUnlockedOffersAtRank )
		pFnGetUnlockedOffersAtRank = (UFunction*) UObject::GObjObjects()->Data[ 36142 ];

	UPBItemShopClient_eventGetUnlockedOffersAtRank_Parms GetUnlockedOffersAtRank_Parms;
	GetUnlockedOffersAtRank_Parms.OldRank = OldRank;
	GetUnlockedOffersAtRank_Parms.NewRank = NewRank;

	pFnGetUnlockedOffersAtRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUnlockedOffersAtRank, &GetUnlockedOffersAtRank_Parms, NULL );

	pFnGetUnlockedOffersAtRank->FunctionFlags |= 0x400;

	return GetUnlockedOffersAtRank_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetClientProfileDetails
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetClientProfileDetails ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetClientProfileDetails = NULL;

	if ( ! pFnRemoveDelegate_OnGetClientProfileDetails )
		pFnRemoveDelegate_OnGetClientProfileDetails = (UFunction*) UObject::GObjObjects()->Data[ 36138 ];

	UPBItemShopClient_execRemoveDelegate_OnGetClientProfileDetails_Parms RemoveDelegate_OnGetClientProfileDetails_Parms;
	memcpy ( &RemoveDelegate_OnGetClientProfileDetails_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetClientProfileDetails_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetClientProfileDetails, &RemoveDelegate_OnGetClientProfileDetails_Parms, NULL );

	return RemoveDelegate_OnGetClientProfileDetails_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetClientProfileDetails
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetClientProfileDetails ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetClientProfileDetails = NULL;

	if ( ! pFnAddDelegate_OnGetClientProfileDetails )
		pFnAddDelegate_OnGetClientProfileDetails = (UFunction*) UObject::GObjObjects()->Data[ 36134 ];

	UPBItemShopClient_execAddDelegate_OnGetClientProfileDetails_Parms AddDelegate_OnGetClientProfileDetails_Parms;
	memcpy ( &AddDelegate_OnGetClientProfileDetails_Parms.func, &func, 0xC );
	AddDelegate_OnGetClientProfileDetails_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetClientProfileDetails, &AddDelegate_OnGetClientProfileDetails_Parms, NULL );

	return AddDelegate_OnGetClientProfileDetails_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetClientProfileDetails
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// int                            AmoutClientProfileDetails      ( CPF_Parm )
// TArray< struct FPbmnClientProfileDetail > ClientProfileDetails           ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetClientProfileDetails ( int requestId, int ErrorCode, int AmoutClientProfileDetails, TArray< struct FPbmnClientProfileDetail > ClientProfileDetails )
{
	static UFunction* pFnOnGetClientProfileDetails = NULL;

	if ( ! pFnOnGetClientProfileDetails )
		pFnOnGetClientProfileDetails = (UFunction*) UObject::GObjObjects()->Data[ 36128 ];

	UPBItemShopClient_execOnGetClientProfileDetails_Parms OnGetClientProfileDetails_Parms;
	OnGetClientProfileDetails_Parms.requestId = requestId;
	OnGetClientProfileDetails_Parms.ErrorCode = ErrorCode;
	OnGetClientProfileDetails_Parms.AmoutClientProfileDetails = AmoutClientProfileDetails;
	memcpy ( &OnGetClientProfileDetails_Parms.ClientProfileDetails, &ClientProfileDetails, 0xC );

	this->ProcessEvent ( pFnOnGetClientProfileDetails, &OnGetClientProfileDetails_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetClientProfileDetails
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AmountAccountNick              ( CPF_Parm )
// TArray< struct FString >       AccountNick                    ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventGetClientProfileDetails ( int AmountAccountNick, TArray< struct FString > AccountNick )
{
	static UFunction* pFnGetClientProfileDetails = NULL;

	if ( ! pFnGetClientProfileDetails )
		pFnGetClientProfileDetails = (UFunction*) UObject::GObjObjects()->Data[ 36123 ];

	UPBItemShopClient_eventGetClientProfileDetails_Parms GetClientProfileDetails_Parms;
	GetClientProfileDetails_Parms.AmountAccountNick = AmountAccountNick;
	memcpy ( &GetClientProfileDetails_Parms.AccountNick, &AccountNick, 0xC );

	pFnGetClientProfileDetails->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClientProfileDetails, &GetClientProfileDetails_Parms, NULL );

	pFnGetClientProfileDetails->FunctionFlags |= 0x400;

	return GetClientProfileDetails_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetAccountAndProfilesForName
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetAccountAndProfilesForName ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetAccountAndProfilesForName = NULL;

	if ( ! pFnRemoveDelegate_OnGetAccountAndProfilesForName )
		pFnRemoveDelegate_OnGetAccountAndProfilesForName = (UFunction*) UObject::GObjObjects()->Data[ 36119 ];

	UPBItemShopClient_execRemoveDelegate_OnGetAccountAndProfilesForName_Parms RemoveDelegate_OnGetAccountAndProfilesForName_Parms;
	memcpy ( &RemoveDelegate_OnGetAccountAndProfilesForName_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetAccountAndProfilesForName_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetAccountAndProfilesForName, &RemoveDelegate_OnGetAccountAndProfilesForName_Parms, NULL );

	return RemoveDelegate_OnGetAccountAndProfilesForName_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetAccountAndProfilesForName
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetAccountAndProfilesForName ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetAccountAndProfilesForName = NULL;

	if ( ! pFnAddDelegate_OnGetAccountAndProfilesForName )
		pFnAddDelegate_OnGetAccountAndProfilesForName = (UFunction*) UObject::GObjObjects()->Data[ 36115 ];

	UPBItemShopClient_execAddDelegate_OnGetAccountAndProfilesForName_Parms AddDelegate_OnGetAccountAndProfilesForName_Parms;
	memcpy ( &AddDelegate_OnGetAccountAndProfilesForName_Parms.func, &func, 0xC );
	AddDelegate_OnGetAccountAndProfilesForName_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetAccountAndProfilesForName, &AddDelegate_OnGetAccountAndProfilesForName_Parms, NULL );

	return AddDelegate_OnGetAccountAndProfilesForName_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetAccountAndProfilesForName
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// int                            AmountAccountProfiles          ( CPF_Parm )
// TArray< struct FPbmnAccountProfile > AccountProfiles                ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetAccountAndProfilesForName ( int requestId, int ErrorCode, int AmountAccountProfiles, TArray< struct FPbmnAccountProfile > AccountProfiles )
{
	static UFunction* pFnOnGetAccountAndProfilesForName = NULL;

	if ( ! pFnOnGetAccountAndProfilesForName )
		pFnOnGetAccountAndProfilesForName = (UFunction*) UObject::GObjObjects()->Data[ 36109 ];

	UPBItemShopClient_execOnGetAccountAndProfilesForName_Parms OnGetAccountAndProfilesForName_Parms;
	OnGetAccountAndProfilesForName_Parms.requestId = requestId;
	OnGetAccountAndProfilesForName_Parms.ErrorCode = ErrorCode;
	OnGetAccountAndProfilesForName_Parms.AmountAccountProfiles = AmountAccountProfiles;
	memcpy ( &OnGetAccountAndProfilesForName_Parms.AccountProfiles, &AccountProfiles, 0xC );

	this->ProcessEvent ( pFnOnGetAccountAndProfilesForName, &OnGetAccountAndProfilesForName_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetAccountAndProfilesForName
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SearchName                     ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventGetAccountAndProfilesForName ( struct FString SearchName )
{
	static UFunction* pFnGetAccountAndProfilesForName = NULL;

	if ( ! pFnGetAccountAndProfilesForName )
		pFnGetAccountAndProfilesForName = (UFunction*) UObject::GObjObjects()->Data[ 36106 ];

	UPBItemShopClient_eventGetAccountAndProfilesForName_Parms GetAccountAndProfilesForName_Parms;
	memcpy ( &GetAccountAndProfilesForName_Parms.SearchName, &SearchName, 0xC );

	pFnGetAccountAndProfilesForName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAccountAndProfilesForName, &GetAccountAndProfilesForName_Parms, NULL );

	pFnGetAccountAndProfilesForName->FunctionFlags |= 0x400;

	return GetAccountAndProfilesForName_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetUniqueCategoriesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetUniqueCategoriesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetUniqueCategoriesDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetUniqueCategoriesDone )
		pFnRemoveDelegate_OnGetUniqueCategoriesDone = (UFunction*) UObject::GObjObjects()->Data[ 36102 ];

	UPBItemShopClient_execRemoveDelegate_OnGetUniqueCategoriesDone_Parms RemoveDelegate_OnGetUniqueCategoriesDone_Parms;
	memcpy ( &RemoveDelegate_OnGetUniqueCategoriesDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetUniqueCategoriesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetUniqueCategoriesDone, &RemoveDelegate_OnGetUniqueCategoriesDone_Parms, NULL );

	return RemoveDelegate_OnGetUniqueCategoriesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetUniqueCategoriesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetUniqueCategoriesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetUniqueCategoriesDone = NULL;

	if ( ! pFnAddDelegate_OnGetUniqueCategoriesDone )
		pFnAddDelegate_OnGetUniqueCategoriesDone = (UFunction*) UObject::GObjObjects()->Data[ 36098 ];

	UPBItemShopClient_execAddDelegate_OnGetUniqueCategoriesDone_Parms AddDelegate_OnGetUniqueCategoriesDone_Parms;
	memcpy ( &AddDelegate_OnGetUniqueCategoriesDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetUniqueCategoriesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetUniqueCategoriesDone, &AddDelegate_OnGetUniqueCategoriesDone_Parms, NULL );

	return AddDelegate_OnGetUniqueCategoriesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetUniqueCategoriesDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FString >       categoriesName                 ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetUniqueCategoriesDone ( int requestId, int ErrorCode, TArray< struct FString > categoriesName )
{
	static UFunction* pFnOnGetUniqueCategoriesDone = NULL;

	if ( ! pFnOnGetUniqueCategoriesDone )
		pFnOnGetUniqueCategoriesDone = (UFunction*) UObject::GObjObjects()->Data[ 36093 ];

	UPBItemShopClient_execOnGetUniqueCategoriesDone_Parms OnGetUniqueCategoriesDone_Parms;
	OnGetUniqueCategoriesDone_Parms.requestId = requestId;
	OnGetUniqueCategoriesDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetUniqueCategoriesDone_Parms.categoriesName, &categoriesName, 0xC );

	this->ProcessEvent ( pFnOnGetUniqueCategoriesDone, &OnGetUniqueCategoriesDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetUniqueCategories
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetUniqueCategories ( )
{
	static UFunction* pFnGetUniqueCategories = NULL;

	if ( ! pFnGetUniqueCategories )
		pFnGetUniqueCategories = (UFunction*) UObject::GObjObjects()->Data[ 36091 ];

	UPBItemShopClient_eventGetUniqueCategories_Parms GetUniqueCategories_Parms;

	pFnGetUniqueCategories->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUniqueCategories, &GetUniqueCategories_Parms, NULL );

	pFnGetUniqueCategories->FunctionFlags |= 0x400;

	return GetUniqueCategories_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnReportAbuseDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnReportAbuseDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnReportAbuseDone = NULL;

	if ( ! pFnRemoveDelegate_OnReportAbuseDone )
		pFnRemoveDelegate_OnReportAbuseDone = (UFunction*) UObject::GObjObjects()->Data[ 36087 ];

	UPBItemShopClient_execRemoveDelegate_OnReportAbuseDone_Parms RemoveDelegate_OnReportAbuseDone_Parms;
	memcpy ( &RemoveDelegate_OnReportAbuseDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnReportAbuseDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnReportAbuseDone, &RemoveDelegate_OnReportAbuseDone_Parms, NULL );

	return RemoveDelegate_OnReportAbuseDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnReportAbuseDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnReportAbuseDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnReportAbuseDone = NULL;

	if ( ! pFnAddDelegate_OnReportAbuseDone )
		pFnAddDelegate_OnReportAbuseDone = (UFunction*) UObject::GObjObjects()->Data[ 36083 ];

	UPBItemShopClient_execAddDelegate_OnReportAbuseDone_Parms AddDelegate_OnReportAbuseDone_Parms;
	memcpy ( &AddDelegate_OnReportAbuseDone_Parms.func, &func, 0xC );
	AddDelegate_OnReportAbuseDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnReportAbuseDone, &AddDelegate_OnReportAbuseDone_Parms, NULL );

	return AddDelegate_OnReportAbuseDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnReportAbuseDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnReportAbuseDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnReportAbuseDone = NULL;

	if ( ! pFnOnReportAbuseDone )
		pFnOnReportAbuseDone = (UFunction*) UObject::GObjObjects()->Data[ 36080 ];

	UPBItemShopClient_execOnReportAbuseDone_Parms OnReportAbuseDone_Parms;
	OnReportAbuseDone_Parms.requestId = requestId;
	OnReportAbuseDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnReportAbuseDone, &OnReportAbuseDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.ReportAbuse
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FPBReportInfo           abuseReport                    ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventReportAbuse ( struct FPBReportInfo abuseReport )
{
	static UFunction* pFnReportAbuse = NULL;

	if ( ! pFnReportAbuse )
		pFnReportAbuse = (UFunction*) UObject::GObjObjects()->Data[ 36077 ];

	UPBItemShopClient_eventReportAbuse_Parms ReportAbuse_Parms;
	memcpy ( &ReportAbuse_Parms.abuseReport, &abuseReport, 0x50 );

	pFnReportAbuse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReportAbuse, &ReportAbuse_Parms, NULL );

	pFnReportAbuse->FunctionFlags |= 0x400;

	return ReportAbuse_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCheckoutBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnCheckoutBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnCheckoutBasketDone = NULL;

	if ( ! pFnRemoveDelegate_OnCheckoutBasketDone )
		pFnRemoveDelegate_OnCheckoutBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36073 ];

	UPBItemShopClient_execRemoveDelegate_OnCheckoutBasketDone_Parms RemoveDelegate_OnCheckoutBasketDone_Parms;
	memcpy ( &RemoveDelegate_OnCheckoutBasketDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnCheckoutBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnCheckoutBasketDone, &RemoveDelegate_OnCheckoutBasketDone_Parms, NULL );

	return RemoveDelegate_OnCheckoutBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCheckoutBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnCheckoutBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnCheckoutBasketDone = NULL;

	if ( ! pFnAddDelegate_OnCheckoutBasketDone )
		pFnAddDelegate_OnCheckoutBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36069 ];

	UPBItemShopClient_execAddDelegate_OnCheckoutBasketDone_Parms AddDelegate_OnCheckoutBasketDone_Parms;
	memcpy ( &AddDelegate_OnCheckoutBasketDone_Parms.func, &func, 0xC );
	AddDelegate_OnCheckoutBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnCheckoutBasketDone, &AddDelegate_OnCheckoutBasketDone_Parms, NULL );

	return AddDelegate_OnCheckoutBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnCheckoutBasketDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnCheckoutBasketDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnCheckoutBasketDone = NULL;

	if ( ! pFnOnCheckoutBasketDone )
		pFnOnCheckoutBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36066 ];

	UPBItemShopClient_execOnCheckoutBasketDone_Parms OnCheckoutBasketDone_Parms;
	OnCheckoutBasketDone_Parms.requestId = requestId;
	OnCheckoutBasketDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnCheckoutBasketDone, &OnCheckoutBasketDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.CheckoutBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventCheckoutBasket ( )
{
	static UFunction* pFnCheckoutBasket = NULL;

	if ( ! pFnCheckoutBasket )
		pFnCheckoutBasket = (UFunction*) UObject::GObjObjects()->Data[ 36064 ];

	UPBItemShopClient_eventCheckoutBasket_Parms CheckoutBasket_Parms;

	pFnCheckoutBasket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckoutBasket, &CheckoutBasket_Parms, NULL );

	pFnCheckoutBasket->FunctionFlags |= 0x400;

	return CheckoutBasket_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.CheckoutBasketPartial
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FGuid >         basketItems                    ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventCheckoutBasketPartial ( TArray< struct FGuid > basketItems )
{
	static UFunction* pFnCheckoutBasketPartial = NULL;

	if ( ! pFnCheckoutBasketPartial )
		pFnCheckoutBasketPartial = (UFunction*) UObject::GObjObjects()->Data[ 36060 ];

	UPBItemShopClient_eventCheckoutBasketPartial_Parms CheckoutBasketPartial_Parms;
	memcpy ( &CheckoutBasketPartial_Parms.basketItems, &basketItems, 0xC );

	pFnCheckoutBasketPartial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckoutBasketPartial, &CheckoutBasketPartial_Parms, NULL );

	pFnCheckoutBasketPartial->FunctionFlags |= 0x400;

	return CheckoutBasketPartial_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSetPaymentForBasketItemDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnSetPaymentForBasketItemDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnSetPaymentForBasketItemDone = NULL;

	if ( ! pFnRemoveDelegate_OnSetPaymentForBasketItemDone )
		pFnRemoveDelegate_OnSetPaymentForBasketItemDone = (UFunction*) UObject::GObjObjects()->Data[ 36056 ];

	UPBItemShopClient_execRemoveDelegate_OnSetPaymentForBasketItemDone_Parms RemoveDelegate_OnSetPaymentForBasketItemDone_Parms;
	memcpy ( &RemoveDelegate_OnSetPaymentForBasketItemDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnSetPaymentForBasketItemDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnSetPaymentForBasketItemDone, &RemoveDelegate_OnSetPaymentForBasketItemDone_Parms, NULL );

	return RemoveDelegate_OnSetPaymentForBasketItemDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSetPaymentForBasketItemDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnSetPaymentForBasketItemDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnSetPaymentForBasketItemDone = NULL;

	if ( ! pFnAddDelegate_OnSetPaymentForBasketItemDone )
		pFnAddDelegate_OnSetPaymentForBasketItemDone = (UFunction*) UObject::GObjObjects()->Data[ 36052 ];

	UPBItemShopClient_execAddDelegate_OnSetPaymentForBasketItemDone_Parms AddDelegate_OnSetPaymentForBasketItemDone_Parms;
	memcpy ( &AddDelegate_OnSetPaymentForBasketItemDone_Parms.func, &func, 0xC );
	AddDelegate_OnSetPaymentForBasketItemDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnSetPaymentForBasketItemDone, &AddDelegate_OnSetPaymentForBasketItemDone_Parms, NULL );

	return AddDelegate_OnSetPaymentForBasketItemDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnSetPaymentForBasketItemDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnSetPaymentForBasketItemDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnSetPaymentForBasketItemDone = NULL;

	if ( ! pFnOnSetPaymentForBasketItemDone )
		pFnOnSetPaymentForBasketItemDone = (UFunction*) UObject::GObjObjects()->Data[ 36049 ];

	UPBItemShopClient_execOnSetPaymentForBasketItemDone_Parms OnSetPaymentForBasketItemDone_Parms;
	OnSetPaymentForBasketItemDone_Parms.requestId = requestId;
	OnSetPaymentForBasketItemDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnSetPaymentForBasketItemDone, &OnSetPaymentForBasketItemDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.SetPaymentForBasketItem
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FGuid >         basketItemId                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< int >                  paymentOption                  ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventSetPaymentForBasketItem ( TArray< struct FGuid > basketItemId, TArray< int > paymentOption )
{
	static UFunction* pFnSetPaymentForBasketItem = NULL;

	if ( ! pFnSetPaymentForBasketItem )
		pFnSetPaymentForBasketItem = (UFunction*) UObject::GObjObjects()->Data[ 36043 ];

	UPBItemShopClient_eventSetPaymentForBasketItem_Parms SetPaymentForBasketItem_Parms;
	memcpy ( &SetPaymentForBasketItem_Parms.basketItemId, &basketItemId, 0xC );
	memcpy ( &SetPaymentForBasketItem_Parms.paymentOption, &paymentOption, 0xC );

	pFnSetPaymentForBasketItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPaymentForBasketItem, &SetPaymentForBasketItem_Parms, NULL );

	pFnSetPaymentForBasketItem->FunctionFlags |= 0x400;

	return SetPaymentForBasketItem_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteAllItemsFromBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnDeleteAllItemsFromBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnDeleteAllItemsFromBasketDone = NULL;

	if ( ! pFnRemoveDelegate_OnDeleteAllItemsFromBasketDone )
		pFnRemoveDelegate_OnDeleteAllItemsFromBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36039 ];

	UPBItemShopClient_execRemoveDelegate_OnDeleteAllItemsFromBasketDone_Parms RemoveDelegate_OnDeleteAllItemsFromBasketDone_Parms;
	memcpy ( &RemoveDelegate_OnDeleteAllItemsFromBasketDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnDeleteAllItemsFromBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnDeleteAllItemsFromBasketDone, &RemoveDelegate_OnDeleteAllItemsFromBasketDone_Parms, NULL );

	return RemoveDelegate_OnDeleteAllItemsFromBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteAllItemsFromBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnDeleteAllItemsFromBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnDeleteAllItemsFromBasketDone = NULL;

	if ( ! pFnAddDelegate_OnDeleteAllItemsFromBasketDone )
		pFnAddDelegate_OnDeleteAllItemsFromBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36035 ];

	UPBItemShopClient_execAddDelegate_OnDeleteAllItemsFromBasketDone_Parms AddDelegate_OnDeleteAllItemsFromBasketDone_Parms;
	memcpy ( &AddDelegate_OnDeleteAllItemsFromBasketDone_Parms.func, &func, 0xC );
	AddDelegate_OnDeleteAllItemsFromBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnDeleteAllItemsFromBasketDone, &AddDelegate_OnDeleteAllItemsFromBasketDone_Parms, NULL );

	return AddDelegate_OnDeleteAllItemsFromBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnDeleteAllItemsFromBasketDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnDeleteAllItemsFromBasketDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnDeleteAllItemsFromBasketDone = NULL;

	if ( ! pFnOnDeleteAllItemsFromBasketDone )
		pFnOnDeleteAllItemsFromBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36032 ];

	UPBItemShopClient_execOnDeleteAllItemsFromBasketDone_Parms OnDeleteAllItemsFromBasketDone_Parms;
	OnDeleteAllItemsFromBasketDone_Parms.requestId = requestId;
	OnDeleteAllItemsFromBasketDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnDeleteAllItemsFromBasketDone, &OnDeleteAllItemsFromBasketDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.DeleteAllItemsFromBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventDeleteAllItemsFromBasket ( )
{
	static UFunction* pFnDeleteAllItemsFromBasket = NULL;

	if ( ! pFnDeleteAllItemsFromBasket )
		pFnDeleteAllItemsFromBasket = (UFunction*) UObject::GObjObjects()->Data[ 36030 ];

	UPBItemShopClient_eventDeleteAllItemsFromBasket_Parms DeleteAllItemsFromBasket_Parms;

	pFnDeleteAllItemsFromBasket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteAllItemsFromBasket, &DeleteAllItemsFromBasket_Parms, NULL );

	pFnDeleteAllItemsFromBasket->FunctionFlags |= 0x400;

	return DeleteAllItemsFromBasket_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteItemFromBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnDeleteItemFromBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnDeleteItemFromBasketDone = NULL;

	if ( ! pFnRemoveDelegate_OnDeleteItemFromBasketDone )
		pFnRemoveDelegate_OnDeleteItemFromBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36026 ];

	UPBItemShopClient_execRemoveDelegate_OnDeleteItemFromBasketDone_Parms RemoveDelegate_OnDeleteItemFromBasketDone_Parms;
	memcpy ( &RemoveDelegate_OnDeleteItemFromBasketDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnDeleteItemFromBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnDeleteItemFromBasketDone, &RemoveDelegate_OnDeleteItemFromBasketDone_Parms, NULL );

	return RemoveDelegate_OnDeleteItemFromBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteItemFromBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnDeleteItemFromBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnDeleteItemFromBasketDone = NULL;

	if ( ! pFnAddDelegate_OnDeleteItemFromBasketDone )
		pFnAddDelegate_OnDeleteItemFromBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36022 ];

	UPBItemShopClient_execAddDelegate_OnDeleteItemFromBasketDone_Parms AddDelegate_OnDeleteItemFromBasketDone_Parms;
	memcpy ( &AddDelegate_OnDeleteItemFromBasketDone_Parms.func, &func, 0xC );
	AddDelegate_OnDeleteItemFromBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnDeleteItemFromBasketDone, &AddDelegate_OnDeleteItemFromBasketDone_Parms, NULL );

	return AddDelegate_OnDeleteItemFromBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnDeleteItemFromBasketDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnDeleteItemFromBasketDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnDeleteItemFromBasketDone = NULL;

	if ( ! pFnOnDeleteItemFromBasketDone )
		pFnOnDeleteItemFromBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36019 ];

	UPBItemShopClient_execOnDeleteItemFromBasketDone_Parms OnDeleteItemFromBasketDone_Parms;
	OnDeleteItemFromBasketDone_Parms.requestId = requestId;
	OnDeleteItemFromBasketDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnDeleteItemFromBasketDone, &OnDeleteItemFromBasketDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.DeleteItemFromBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            amountBasketItems              ( CPF_Parm )
// TArray< struct FGuid >         basketItems                    ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventDeleteItemFromBasket ( int amountBasketItems, TArray< struct FGuid > basketItems )
{
	static UFunction* pFnDeleteItemFromBasket = NULL;

	if ( ! pFnDeleteItemFromBasket )
		pFnDeleteItemFromBasket = (UFunction*) UObject::GObjObjects()->Data[ 36014 ];

	UPBItemShopClient_eventDeleteItemFromBasket_Parms DeleteItemFromBasket_Parms;
	DeleteItemFromBasket_Parms.amountBasketItems = amountBasketItems;
	memcpy ( &DeleteItemFromBasket_Parms.basketItems, &basketItems, 0xC );

	pFnDeleteItemFromBasket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteItemFromBasket, &DeleteItemFromBasket_Parms, NULL );

	pFnDeleteItemFromBasket->FunctionFlags |= 0x400;

	return DeleteItemFromBasket_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnAddItemToBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnAddItemToBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnAddItemToBasketDone = NULL;

	if ( ! pFnRemoveDelegate_OnAddItemToBasketDone )
		pFnRemoveDelegate_OnAddItemToBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36010 ];

	UPBItemShopClient_execRemoveDelegate_OnAddItemToBasketDone_Parms RemoveDelegate_OnAddItemToBasketDone_Parms;
	memcpy ( &RemoveDelegate_OnAddItemToBasketDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnAddItemToBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnAddItemToBasketDone, &RemoveDelegate_OnAddItemToBasketDone_Parms, NULL );

	return RemoveDelegate_OnAddItemToBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnAddItemToBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnAddItemToBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnAddItemToBasketDone = NULL;

	if ( ! pFnAddDelegate_OnAddItemToBasketDone )
		pFnAddDelegate_OnAddItemToBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36006 ];

	UPBItemShopClient_execAddDelegate_OnAddItemToBasketDone_Parms AddDelegate_OnAddItemToBasketDone_Parms;
	memcpy ( &AddDelegate_OnAddItemToBasketDone_Parms.func, &func, 0xC );
	AddDelegate_OnAddItemToBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnAddItemToBasketDone, &AddDelegate_OnAddItemToBasketDone_Parms, NULL );

	return AddDelegate_OnAddItemToBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnAddItemToBasketDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FPBBasketItem           basketItemId                   ( CPF_Parm )

void UPBItemShopClient::OnAddItemToBasketDone ( int requestId, int ErrorCode, struct FPBBasketItem basketItemId )
{
	static UFunction* pFnOnAddItemToBasketDone = NULL;

	if ( ! pFnOnAddItemToBasketDone )
		pFnOnAddItemToBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 36002 ];

	UPBItemShopClient_execOnAddItemToBasketDone_Parms OnAddItemToBasketDone_Parms;
	OnAddItemToBasketDone_Parms.requestId = requestId;
	OnAddItemToBasketDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnAddItemToBasketDone_Parms.basketItemId, &basketItemId, 0x3C );

	this->ProcessEvent ( pFnOnAddItemToBasketDone, &OnAddItemToBasketDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.AddItemToBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   OfferId                        ( CPF_Parm )
// int                            quantity                       ( CPF_Parm )
// int                            paymentOption                  ( CPF_Parm )

int UPBItemShopClient::eventAddItemToBasket ( struct FGuid OfferId, int quantity, int paymentOption )
{
	static UFunction* pFnAddItemToBasket = NULL;

	if ( ! pFnAddItemToBasket )
		pFnAddItemToBasket = (UFunction*) UObject::GObjObjects()->Data[ 35997 ];

	UPBItemShopClient_eventAddItemToBasket_Parms AddItemToBasket_Parms;
	memcpy ( &AddItemToBasket_Parms.OfferId, &OfferId, 0x10 );
	AddItemToBasket_Parms.quantity = quantity;
	AddItemToBasket_Parms.paymentOption = paymentOption;

	pFnAddItemToBasket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddItemToBasket, &AddItemToBasket_Parms, NULL );

	pFnAddItemToBasket->FunctionFlags |= 0x400;

	return AddItemToBasket_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetBasketDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetBasketDone )
		pFnRemoveDelegate_OnGetBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 35993 ];

	UPBItemShopClient_execRemoveDelegate_OnGetBasketDone_Parms RemoveDelegate_OnGetBasketDone_Parms;
	memcpy ( &RemoveDelegate_OnGetBasketDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetBasketDone, &RemoveDelegate_OnGetBasketDone_Parms, NULL );

	return RemoveDelegate_OnGetBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetBasketDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetBasketDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetBasketDone = NULL;

	if ( ! pFnAddDelegate_OnGetBasketDone )
		pFnAddDelegate_OnGetBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 35989 ];

	UPBItemShopClient_execAddDelegate_OnGetBasketDone_Parms AddDelegate_OnGetBasketDone_Parms;
	memcpy ( &AddDelegate_OnGetBasketDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetBasketDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetBasketDone, &AddDelegate_OnGetBasketDone_Parms, NULL );

	return AddDelegate_OnGetBasketDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetBasketDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// int                            amountBasketItems              ( CPF_Parm )
// TArray< struct FPBBasketItem > basketItems                    ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetBasketDone ( int requestId, int ErrorCode, int amountBasketItems, TArray< struct FPBBasketItem > basketItems )
{
	static UFunction* pFnOnGetBasketDone = NULL;

	if ( ! pFnOnGetBasketDone )
		pFnOnGetBasketDone = (UFunction*) UObject::GObjObjects()->Data[ 35983 ];

	UPBItemShopClient_execOnGetBasketDone_Parms OnGetBasketDone_Parms;
	OnGetBasketDone_Parms.requestId = requestId;
	OnGetBasketDone_Parms.ErrorCode = ErrorCode;
	OnGetBasketDone_Parms.amountBasketItems = amountBasketItems;
	memcpy ( &OnGetBasketDone_Parms.basketItems, &basketItems, 0xC );

	this->ProcessEvent ( pFnOnGetBasketDone, &OnGetBasketDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetBasket
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetBasket ( )
{
	static UFunction* pFnGetBasket = NULL;

	if ( ! pFnGetBasket )
		pFnGetBasket = (UFunction*) UObject::GObjObjects()->Data[ 35981 ];

	UPBItemShopClient_eventGetBasket_Parms GetBasket_Parms;

	pFnGetBasket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBasket, &GetBasket_Parms, NULL );

	pFnGetBasket->FunctionFlags |= 0x400;

	return GetBasket_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnClearNameReservedDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnClearNameReservedDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnClearNameReservedDone = NULL;

	if ( ! pFnRemoveDelegate_OnClearNameReservedDone )
		pFnRemoveDelegate_OnClearNameReservedDone = (UFunction*) UObject::GObjObjects()->Data[ 35977 ];

	UPBItemShopClient_execRemoveDelegate_OnClearNameReservedDone_Parms RemoveDelegate_OnClearNameReservedDone_Parms;
	memcpy ( &RemoveDelegate_OnClearNameReservedDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnClearNameReservedDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnClearNameReservedDone, &RemoveDelegate_OnClearNameReservedDone_Parms, NULL );

	return RemoveDelegate_OnClearNameReservedDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnClearNameReservedDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnClearNameReservedDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnClearNameReservedDone = NULL;

	if ( ! pFnAddDelegate_OnClearNameReservedDone )
		pFnAddDelegate_OnClearNameReservedDone = (UFunction*) UObject::GObjObjects()->Data[ 35973 ];

	UPBItemShopClient_execAddDelegate_OnClearNameReservedDone_Parms AddDelegate_OnClearNameReservedDone_Parms;
	memcpy ( &AddDelegate_OnClearNameReservedDone_Parms.func, &func, 0xC );
	AddDelegate_OnClearNameReservedDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnClearNameReservedDone, &AddDelegate_OnClearNameReservedDone_Parms, NULL );

	return AddDelegate_OnClearNameReservedDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnClearNameReservedDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnClearNameReservedDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnClearNameReservedDone = NULL;

	if ( ! pFnOnClearNameReservedDone )
		pFnOnClearNameReservedDone = (UFunction*) UObject::GObjObjects()->Data[ 35970 ];

	UPBItemShopClient_execOnClearNameReservedDone_Parms OnClearNameReservedDone_Parms;
	OnClearNameReservedDone_Parms.requestId = requestId;
	OnClearNameReservedDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnClearNameReservedDone, &OnClearNameReservedDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.ClearNameReserved
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventClearNameReserved ( )
{
	static UFunction* pFnClearNameReserved = NULL;

	if ( ! pFnClearNameReserved )
		pFnClearNameReserved = (UFunction*) UObject::GObjObjects()->Data[ 35968 ];

	UPBItemShopClient_eventClearNameReserved_Parms ClearNameReserved_Parms;

	pFnClearNameReserved->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearNameReserved, &ClearNameReserved_Parms, NULL );

	pFnClearNameReserved->FunctionFlags |= 0x400;

	return ClearNameReserved_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnReserveNameDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnReserveNameDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnReserveNameDone = NULL;

	if ( ! pFnRemoveDelegate_OnReserveNameDone )
		pFnRemoveDelegate_OnReserveNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35964 ];

	UPBItemShopClient_execRemoveDelegate_OnReserveNameDone_Parms RemoveDelegate_OnReserveNameDone_Parms;
	memcpy ( &RemoveDelegate_OnReserveNameDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnReserveNameDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnReserveNameDone, &RemoveDelegate_OnReserveNameDone_Parms, NULL );

	return RemoveDelegate_OnReserveNameDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnReserveNameDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnReserveNameDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnReserveNameDone = NULL;

	if ( ! pFnAddDelegate_OnReserveNameDone )
		pFnAddDelegate_OnReserveNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35960 ];

	UPBItemShopClient_execAddDelegate_OnReserveNameDone_Parms AddDelegate_OnReserveNameDone_Parms;
	memcpy ( &AddDelegate_OnReserveNameDone_Parms.func, &func, 0xC );
	AddDelegate_OnReserveNameDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnReserveNameDone, &AddDelegate_OnReserveNameDone_Parms, NULL );

	return AddDelegate_OnReserveNameDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnReserveNameDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnReserveNameDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnReserveNameDone = NULL;

	if ( ! pFnOnReserveNameDone )
		pFnOnReserveNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35957 ];

	UPBItemShopClient_execOnReserveNameDone_Parms OnReserveNameDone_Parms;
	OnReserveNameDone_Parms.requestId = requestId;
	OnReserveNameDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnReserveNameDone, &OnReserveNameDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.ReserveName
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 newCharacterName               ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventReserveName ( struct FString newCharacterName )
{
	static UFunction* pFnReserveName = NULL;

	if ( ! pFnReserveName )
		pFnReserveName = (UFunction*) UObject::GObjObjects()->Data[ 35954 ];

	UPBItemShopClient_eventReserveName_Parms ReserveName_Parms;
	memcpy ( &ReserveName_Parms.newCharacterName, &newCharacterName, 0xC );

	pFnReserveName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReserveName, &ReserveName_Parms, NULL );

	pFnReserveName->FunctionFlags |= 0x400;

	return ReserveName_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnIsGameAvailableDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnIsGameAvailableDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnIsGameAvailableDone = NULL;

	if ( ! pFnRemoveDelegate_OnIsGameAvailableDone )
		pFnRemoveDelegate_OnIsGameAvailableDone = (UFunction*) UObject::GObjObjects()->Data[ 35950 ];

	UPBItemShopClient_execRemoveDelegate_OnIsGameAvailableDone_Parms RemoveDelegate_OnIsGameAvailableDone_Parms;
	memcpy ( &RemoveDelegate_OnIsGameAvailableDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnIsGameAvailableDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnIsGameAvailableDone, &RemoveDelegate_OnIsGameAvailableDone_Parms, NULL );

	return RemoveDelegate_OnIsGameAvailableDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnIsGameAvailableDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnIsGameAvailableDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnIsGameAvailableDone = NULL;

	if ( ! pFnAddDelegate_OnIsGameAvailableDone )
		pFnAddDelegate_OnIsGameAvailableDone = (UFunction*) UObject::GObjObjects()->Data[ 35946 ];

	UPBItemShopClient_execAddDelegate_OnIsGameAvailableDone_Parms AddDelegate_OnIsGameAvailableDone_Parms;
	memcpy ( &AddDelegate_OnIsGameAvailableDone_Parms.func, &func, 0xC );
	AddDelegate_OnIsGameAvailableDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnIsGameAvailableDone, &AddDelegate_OnIsGameAvailableDone_Parms, NULL );

	return AddDelegate_OnIsGameAvailableDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnIsGameAvailableDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// unsigned long                  GameAvailable                  ( CPF_Parm )

void UPBItemShopClient::OnIsGameAvailableDone ( int requestId, int ErrorCode, unsigned long GameAvailable )
{
	static UFunction* pFnOnIsGameAvailableDone = NULL;

	if ( ! pFnOnIsGameAvailableDone )
		pFnOnIsGameAvailableDone = (UFunction*) UObject::GObjObjects()->Data[ 35942 ];

	UPBItemShopClient_execOnIsGameAvailableDone_Parms OnIsGameAvailableDone_Parms;
	OnIsGameAvailableDone_Parms.requestId = requestId;
	OnIsGameAvailableDone_Parms.ErrorCode = ErrorCode;
	OnIsGameAvailableDone_Parms.GameAvailable = GameAvailable;

	this->ProcessEvent ( pFnOnIsGameAvailableDone, &OnIsGameAvailableDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.IsGameAvailable
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventIsGameAvailable ( )
{
	static UFunction* pFnIsGameAvailable = NULL;

	if ( ! pFnIsGameAvailable )
		pFnIsGameAvailable = (UFunction*) UObject::GObjObjects()->Data[ 35940 ];

	UPBItemShopClient_eventIsGameAvailable_Parms IsGameAvailable_Parms;

	pFnIsGameAvailable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsGameAvailable, &IsGameAvailable_Parms, NULL );

	pFnIsGameAvailable->FunctionFlags |= 0x400;

	return IsGameAvailable_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetLatestNewsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetLatestNewsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetLatestNewsDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetLatestNewsDone )
		pFnRemoveDelegate_OnGetLatestNewsDone = (UFunction*) UObject::GObjObjects()->Data[ 35936 ];

	UPBItemShopClient_execRemoveDelegate_OnGetLatestNewsDone_Parms RemoveDelegate_OnGetLatestNewsDone_Parms;
	memcpy ( &RemoveDelegate_OnGetLatestNewsDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetLatestNewsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetLatestNewsDone, &RemoveDelegate_OnGetLatestNewsDone_Parms, NULL );

	return RemoveDelegate_OnGetLatestNewsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetLatestNewsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetLatestNewsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetLatestNewsDone = NULL;

	if ( ! pFnAddDelegate_OnGetLatestNewsDone )
		pFnAddDelegate_OnGetLatestNewsDone = (UFunction*) UObject::GObjObjects()->Data[ 35932 ];

	UPBItemShopClient_execAddDelegate_OnGetLatestNewsDone_Parms AddDelegate_OnGetLatestNewsDone_Parms;
	memcpy ( &AddDelegate_OnGetLatestNewsDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetLatestNewsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetLatestNewsDone, &AddDelegate_OnGetLatestNewsDone_Parms, NULL );

	return AddDelegate_OnGetLatestNewsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetLatestNewsDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBNews >       News                           ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetLatestNewsDone ( int requestId, int ErrorCode, TArray< struct FPBNews > News )
{
	static UFunction* pFnOnGetLatestNewsDone = NULL;

	if ( ! pFnOnGetLatestNewsDone )
		pFnOnGetLatestNewsDone = (UFunction*) UObject::GObjObjects()->Data[ 35927 ];

	UPBItemShopClient_execOnGetLatestNewsDone_Parms OnGetLatestNewsDone_Parms;
	OnGetLatestNewsDone_Parms.requestId = requestId;
	OnGetLatestNewsDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetLatestNewsDone_Parms.News, &News, 0xC );

	this->ProcessEvent ( pFnOnGetLatestNewsDone, &OnGetLatestNewsDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetLatestNews
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 locale                         ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventGetLatestNews ( struct FString locale )
{
	static UFunction* pFnGetLatestNews = NULL;

	if ( ! pFnGetLatestNews )
		pFnGetLatestNews = (UFunction*) UObject::GObjObjects()->Data[ 35924 ];

	UPBItemShopClient_eventGetLatestNews_Parms GetLatestNews_Parms;
	memcpy ( &GetLatestNews_Parms.locale, &locale, 0xC );

	pFnGetLatestNews->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLatestNews, &GetLatestNews_Parms, NULL );

	pFnGetLatestNews->FunctionFlags |= 0x400;

	return GetLatestNews_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.IsCriticalError
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ErrorCode                      ( CPF_Parm )

bool UPBItemShopClient::IsCriticalError ( int ErrorCode )
{
	static UFunction* pFnIsCriticalError = NULL;

	if ( ! pFnIsCriticalError )
		pFnIsCriticalError = (UFunction*) UObject::GObjObjects()->Data[ 35921 ];

	UPBItemShopClient_execIsCriticalError_Parms IsCriticalError_Parms;
	IsCriticalError_Parms.ErrorCode = ErrorCode;

	pFnIsCriticalError->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCriticalError, &IsCriticalError_Parms, NULL );

	pFnIsCriticalError->FunctionFlags |= 0x400;

	return IsCriticalError_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnLogError
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnLogError ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnLogError = NULL;

	if ( ! pFnRemoveDelegate_OnLogError )
		pFnRemoveDelegate_OnLogError = (UFunction*) UObject::GObjObjects()->Data[ 35917 ];

	UPBItemShopClient_execRemoveDelegate_OnLogError_Parms RemoveDelegate_OnLogError_Parms;
	memcpy ( &RemoveDelegate_OnLogError_Parms.func, &func, 0xC );
	RemoveDelegate_OnLogError_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnLogError, &RemoveDelegate_OnLogError_Parms, NULL );

	return RemoveDelegate_OnLogError_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnLogError
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnLogError ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnLogError = NULL;

	if ( ! pFnAddDelegate_OnLogError )
		pFnAddDelegate_OnLogError = (UFunction*) UObject::GObjObjects()->Data[ 35913 ];

	UPBItemShopClient_execAddDelegate_OnLogError_Parms AddDelegate_OnLogError_Parms;
	memcpy ( &AddDelegate_OnLogError_Parms.func, &func, 0xC );
	AddDelegate_OnLogError_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnLogError, &AddDelegate_OnLogError_Parms, NULL );

	return AddDelegate_OnLogError_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnLogError
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnLogError ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnLogError = NULL;

	if ( ! pFnOnLogError )
		pFnOnLogError = (UFunction*) UObject::GObjObjects()->Data[ 35910 ];

	UPBItemShopClient_execOnLogError_Parms OnLogError_Parms;
	OnLogError_Parms.requestId = requestId;
	OnLogError_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLogError, &OnLogError_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetAnsweredSurveyIDListDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetAnsweredSurveyIDListDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetAnsweredSurveyIDListDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetAnsweredSurveyIDListDone )
		pFnRemoveDelegate_OnGetAnsweredSurveyIDListDone = (UFunction*) UObject::GObjObjects()->Data[ 35906 ];

	UPBItemShopClient_execRemoveDelegate_OnGetAnsweredSurveyIDListDone_Parms RemoveDelegate_OnGetAnsweredSurveyIDListDone_Parms;
	memcpy ( &RemoveDelegate_OnGetAnsweredSurveyIDListDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetAnsweredSurveyIDListDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetAnsweredSurveyIDListDone, &RemoveDelegate_OnGetAnsweredSurveyIDListDone_Parms, NULL );

	return RemoveDelegate_OnGetAnsweredSurveyIDListDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetAnsweredSurveyIDListDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetAnsweredSurveyIDListDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetAnsweredSurveyIDListDone = NULL;

	if ( ! pFnAddDelegate_OnGetAnsweredSurveyIDListDone )
		pFnAddDelegate_OnGetAnsweredSurveyIDListDone = (UFunction*) UObject::GObjObjects()->Data[ 35902 ];

	UPBItemShopClient_execAddDelegate_OnGetAnsweredSurveyIDListDone_Parms AddDelegate_OnGetAnsweredSurveyIDListDone_Parms;
	memcpy ( &AddDelegate_OnGetAnsweredSurveyIDListDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetAnsweredSurveyIDListDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetAnsweredSurveyIDListDone, &AddDelegate_OnGetAnsweredSurveyIDListDone_Parms, NULL );

	return AddDelegate_OnGetAnsweredSurveyIDListDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetAnsweredSurveyIDListDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< int >                  SurveyIds                      ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetAnsweredSurveyIDListDone ( int requestId, int ErrorCode, TArray< int > SurveyIds )
{
	static UFunction* pFnOnGetAnsweredSurveyIDListDone = NULL;

	if ( ! pFnOnGetAnsweredSurveyIDListDone )
		pFnOnGetAnsweredSurveyIDListDone = (UFunction*) UObject::GObjObjects()->Data[ 35897 ];

	UPBItemShopClient_execOnGetAnsweredSurveyIDListDone_Parms OnGetAnsweredSurveyIDListDone_Parms;
	OnGetAnsweredSurveyIDListDone_Parms.requestId = requestId;
	OnGetAnsweredSurveyIDListDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetAnsweredSurveyIDListDone_Parms.SurveyIds, &SurveyIds, 0xC );

	this->ProcessEvent ( pFnOnGetAnsweredSurveyIDListDone, &OnGetAnsweredSurveyIDListDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetAnsweredSurveyIDList
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetAnsweredSurveyIDList ( )
{
	static UFunction* pFnGetAnsweredSurveyIDList = NULL;

	if ( ! pFnGetAnsweredSurveyIDList )
		pFnGetAnsweredSurveyIDList = (UFunction*) UObject::GObjObjects()->Data[ 35895 ];

	UPBItemShopClient_eventGetAnsweredSurveyIDList_Parms GetAnsweredSurveyIDList_Parms;

	pFnGetAnsweredSurveyIDList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAnsweredSurveyIDList, &GetAnsweredSurveyIDList_Parms, NULL );

	pFnGetAnsweredSurveyIDList->FunctionFlags |= 0x400;

	return GetAnsweredSurveyIDList_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetSurveyListDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetSurveyListDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetSurveyListDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetSurveyListDone )
		pFnRemoveDelegate_OnGetSurveyListDone = (UFunction*) UObject::GObjObjects()->Data[ 35891 ];

	UPBItemShopClient_execRemoveDelegate_OnGetSurveyListDone_Parms RemoveDelegate_OnGetSurveyListDone_Parms;
	memcpy ( &RemoveDelegate_OnGetSurveyListDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetSurveyListDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetSurveyListDone, &RemoveDelegate_OnGetSurveyListDone_Parms, NULL );

	return RemoveDelegate_OnGetSurveyListDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetSurveyListDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetSurveyListDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetSurveyListDone = NULL;

	if ( ! pFnAddDelegate_OnGetSurveyListDone )
		pFnAddDelegate_OnGetSurveyListDone = (UFunction*) UObject::GObjObjects()->Data[ 35887 ];

	UPBItemShopClient_execAddDelegate_OnGetSurveyListDone_Parms AddDelegate_OnGetSurveyListDone_Parms;
	memcpy ( &AddDelegate_OnGetSurveyListDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetSurveyListDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetSurveyListDone, &AddDelegate_OnGetSurveyListDone_Parms, NULL );

	return AddDelegate_OnGetSurveyListDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetSurveyListDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBSurvey >     ArrayOfSurveys                 ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetSurveyListDone ( int requestId, int ErrorCode, TArray< struct FPBSurvey > ArrayOfSurveys )
{
	static UFunction* pFnOnGetSurveyListDone = NULL;

	if ( ! pFnOnGetSurveyListDone )
		pFnOnGetSurveyListDone = (UFunction*) UObject::GObjObjects()->Data[ 35882 ];

	UPBItemShopClient_execOnGetSurveyListDone_Parms OnGetSurveyListDone_Parms;
	OnGetSurveyListDone_Parms.requestId = requestId;
	OnGetSurveyListDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetSurveyListDone_Parms.ArrayOfSurveys, &ArrayOfSurveys, 0xC );

	this->ProcessEvent ( pFnOnGetSurveyListDone, &OnGetSurveyListDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetSurveyList
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  GetAnswered                    ( CPF_Parm )

int UPBItemShopClient::eventGetSurveyList ( unsigned long GetAnswered )
{
	static UFunction* pFnGetSurveyList = NULL;

	if ( ! pFnGetSurveyList )
		pFnGetSurveyList = (UFunction*) UObject::GObjObjects()->Data[ 35879 ];

	UPBItemShopClient_eventGetSurveyList_Parms GetSurveyList_Parms;
	GetSurveyList_Parms.GetAnswered = GetAnswered;

	pFnGetSurveyList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSurveyList, &GetSurveyList_Parms, NULL );

	pFnGetSurveyList->FunctionFlags |= 0x400;

	return GetSurveyList_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetSurveyDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetSurveyDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetSurveyDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetSurveyDone )
		pFnRemoveDelegate_OnGetSurveyDone = (UFunction*) UObject::GObjObjects()->Data[ 35875 ];

	UPBItemShopClient_execRemoveDelegate_OnGetSurveyDone_Parms RemoveDelegate_OnGetSurveyDone_Parms;
	memcpy ( &RemoveDelegate_OnGetSurveyDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetSurveyDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetSurveyDone, &RemoveDelegate_OnGetSurveyDone_Parms, NULL );

	return RemoveDelegate_OnGetSurveyDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetSurveyDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetSurveyDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetSurveyDone = NULL;

	if ( ! pFnAddDelegate_OnGetSurveyDone )
		pFnAddDelegate_OnGetSurveyDone = (UFunction*) UObject::GObjObjects()->Data[ 35871 ];

	UPBItemShopClient_execAddDelegate_OnGetSurveyDone_Parms AddDelegate_OnGetSurveyDone_Parms;
	memcpy ( &AddDelegate_OnGetSurveyDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetSurveyDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetSurveyDone, &AddDelegate_OnGetSurveyDone_Parms, NULL );

	return AddDelegate_OnGetSurveyDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetSurveyDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FPBSurvey               InSurvey                       ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetSurveyDone ( int requestId, int ErrorCode, struct FPBSurvey InSurvey )
{
	static UFunction* pFnOnGetSurveyDone = NULL;

	if ( ! pFnOnGetSurveyDone )
		pFnOnGetSurveyDone = (UFunction*) UObject::GObjObjects()->Data[ 35867 ];

	UPBItemShopClient_execOnGetSurveyDone_Parms OnGetSurveyDone_Parms;
	OnGetSurveyDone_Parms.requestId = requestId;
	OnGetSurveyDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetSurveyDone_Parms.InSurvey, &InSurvey, 0x1C );

	this->ProcessEvent ( pFnOnGetSurveyDone, &OnGetSurveyDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetSurvey
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SurveyID                       ( CPF_Parm )

int UPBItemShopClient::eventGetSurvey ( int SurveyID )
{
	static UFunction* pFnGetSurvey = NULL;

	if ( ! pFnGetSurvey )
		pFnGetSurvey = (UFunction*) UObject::GObjObjects()->Data[ 35864 ];

	UPBItemShopClient_eventGetSurvey_Parms GetSurvey_Parms;
	GetSurvey_Parms.SurveyID = SurveyID;

	pFnGetSurvey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSurvey, &GetSurvey_Parms, NULL );

	pFnGetSurvey->FunctionFlags |= 0x400;

	return GetSurvey_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSubmitSurveyDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnSubmitSurveyDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnSubmitSurveyDone = NULL;

	if ( ! pFnRemoveDelegate_OnSubmitSurveyDone )
		pFnRemoveDelegate_OnSubmitSurveyDone = (UFunction*) UObject::GObjObjects()->Data[ 35860 ];

	UPBItemShopClient_execRemoveDelegate_OnSubmitSurveyDone_Parms RemoveDelegate_OnSubmitSurveyDone_Parms;
	memcpy ( &RemoveDelegate_OnSubmitSurveyDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnSubmitSurveyDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnSubmitSurveyDone, &RemoveDelegate_OnSubmitSurveyDone_Parms, NULL );

	return RemoveDelegate_OnSubmitSurveyDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSubmitSurveyDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnSubmitSurveyDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnSubmitSurveyDone = NULL;

	if ( ! pFnAddDelegate_OnSubmitSurveyDone )
		pFnAddDelegate_OnSubmitSurveyDone = (UFunction*) UObject::GObjObjects()->Data[ 35856 ];

	UPBItemShopClient_execAddDelegate_OnSubmitSurveyDone_Parms AddDelegate_OnSubmitSurveyDone_Parms;
	memcpy ( &AddDelegate_OnSubmitSurveyDone_Parms.func, &func, 0xC );
	AddDelegate_OnSubmitSurveyDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnSubmitSurveyDone, &AddDelegate_OnSubmitSurveyDone_Parms, NULL );

	return AddDelegate_OnSubmitSurveyDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnSubmitSurveyDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnSubmitSurveyDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnSubmitSurveyDone = NULL;

	if ( ! pFnOnSubmitSurveyDone )
		pFnOnSubmitSurveyDone = (UFunction*) UObject::GObjObjects()->Data[ 35853 ];

	UPBItemShopClient_execOnSubmitSurveyDone_Parms OnSubmitSurveyDone_Parms;
	OnSubmitSurveyDone_Parms.requestId = requestId;
	OnSubmitSurveyDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnSubmitSurveyDone, &OnSubmitSurveyDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.SubmitSurvey
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SurveyID                       ( CPF_Parm )
// TArray< struct FPBSurveyAnswer > Answers                        ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventSubmitSurvey ( int SurveyID, TArray< struct FPBSurveyAnswer > Answers )
{
	static UFunction* pFnSubmitSurvey = NULL;

	if ( ! pFnSubmitSurvey )
		pFnSubmitSurvey = (UFunction*) UObject::GObjObjects()->Data[ 35848 ];

	UPBItemShopClient_eventSubmitSurvey_Parms SubmitSurvey_Parms;
	SubmitSurvey_Parms.SurveyID = SurveyID;
	memcpy ( &SubmitSurvey_Parms.Answers, &Answers, 0xC );

	pFnSubmitSurvey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitSurvey, &SubmitSurvey_Parms, NULL );

	pFnSubmitSurvey->FunctionFlags |= 0x400;

	return SubmitSurvey_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSubmitBugDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnSubmitBugDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnSubmitBugDone = NULL;

	if ( ! pFnRemoveDelegate_OnSubmitBugDone )
		pFnRemoveDelegate_OnSubmitBugDone = (UFunction*) UObject::GObjObjects()->Data[ 35844 ];

	UPBItemShopClient_execRemoveDelegate_OnSubmitBugDone_Parms RemoveDelegate_OnSubmitBugDone_Parms;
	memcpy ( &RemoveDelegate_OnSubmitBugDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnSubmitBugDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnSubmitBugDone, &RemoveDelegate_OnSubmitBugDone_Parms, NULL );

	return RemoveDelegate_OnSubmitBugDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSubmitBugDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnSubmitBugDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnSubmitBugDone = NULL;

	if ( ! pFnAddDelegate_OnSubmitBugDone )
		pFnAddDelegate_OnSubmitBugDone = (UFunction*) UObject::GObjObjects()->Data[ 35840 ];

	UPBItemShopClient_execAddDelegate_OnSubmitBugDone_Parms AddDelegate_OnSubmitBugDone_Parms;
	memcpy ( &AddDelegate_OnSubmitBugDone_Parms.func, &func, 0xC );
	AddDelegate_OnSubmitBugDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnSubmitBugDone, &AddDelegate_OnSubmitBugDone_Parms, NULL );

	return AddDelegate_OnSubmitBugDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnSubmitBugDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnSubmitBugDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnSubmitBugDone = NULL;

	if ( ! pFnOnSubmitBugDone )
		pFnOnSubmitBugDone = (UFunction*) UObject::GObjObjects()->Data[ 35837 ];

	UPBItemShopClient_execOnSubmitBugDone_Parms OnSubmitBugDone_Parms;
	OnSubmitBugDone_Parms.requestId = requestId;
	OnSubmitBugDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnSubmitBugDone, &OnSubmitBugDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.SubmitBug
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FPBDefaultBugInfo       BugInfo                        ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventSubmitBug ( struct FPBDefaultBugInfo BugInfo )
{
	static UFunction* pFnSubmitBug = NULL;

	if ( ! pFnSubmitBug )
		pFnSubmitBug = (UFunction*) UObject::GObjObjects()->Data[ 35834 ];

	UPBItemShopClient_eventSubmitBug_Parms SubmitBug_Parms;
	memcpy ( &SubmitBug_Parms.BugInfo, &BugInfo, 0xE8 );

	pFnSubmitBug->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitBug, &SubmitBug_Parms, NULL );

	pFnSubmitBug->FunctionFlags |= 0x400;

	return SubmitBug_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetMinimumClientVersionDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetMinimumClientVersionDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetMinimumClientVersionDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetMinimumClientVersionDone )
		pFnRemoveDelegate_OnGetMinimumClientVersionDone = (UFunction*) UObject::GObjObjects()->Data[ 35830 ];

	UPBItemShopClient_execRemoveDelegate_OnGetMinimumClientVersionDone_Parms RemoveDelegate_OnGetMinimumClientVersionDone_Parms;
	memcpy ( &RemoveDelegate_OnGetMinimumClientVersionDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetMinimumClientVersionDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetMinimumClientVersionDone, &RemoveDelegate_OnGetMinimumClientVersionDone_Parms, NULL );

	return RemoveDelegate_OnGetMinimumClientVersionDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetMinimumClientVersionDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetMinimumClientVersionDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetMinimumClientVersionDone = NULL;

	if ( ! pFnAddDelegate_OnGetMinimumClientVersionDone )
		pFnAddDelegate_OnGetMinimumClientVersionDone = (UFunction*) UObject::GObjObjects()->Data[ 35826 ];

	UPBItemShopClient_execAddDelegate_OnGetMinimumClientVersionDone_Parms AddDelegate_OnGetMinimumClientVersionDone_Parms;
	memcpy ( &AddDelegate_OnGetMinimumClientVersionDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetMinimumClientVersionDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetMinimumClientVersionDone, &AddDelegate_OnGetMinimumClientVersionDone_Parms, NULL );

	return AddDelegate_OnGetMinimumClientVersionDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetMinimumClientVersionDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 versionId                      ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetMinimumClientVersionDone ( int requestId, int ErrorCode, struct FString versionId )
{
	static UFunction* pFnOnGetMinimumClientVersionDone = NULL;

	if ( ! pFnOnGetMinimumClientVersionDone )
		pFnOnGetMinimumClientVersionDone = (UFunction*) UObject::GObjObjects()->Data[ 35822 ];

	UPBItemShopClient_execOnGetMinimumClientVersionDone_Parms OnGetMinimumClientVersionDone_Parms;
	OnGetMinimumClientVersionDone_Parms.requestId = requestId;
	OnGetMinimumClientVersionDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetMinimumClientVersionDone_Parms.versionId, &versionId, 0xC );

	this->ProcessEvent ( pFnOnGetMinimumClientVersionDone, &OnGetMinimumClientVersionDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetMinimumClientVersion
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetMinimumClientVersion ( )
{
	static UFunction* pFnGetMinimumClientVersion = NULL;

	if ( ! pFnGetMinimumClientVersion )
		pFnGetMinimumClientVersion = (UFunction*) UObject::GObjObjects()->Data[ 35820 ];

	UPBItemShopClient_eventGetMinimumClientVersion_Parms GetMinimumClientVersion_Parms;

	pFnGetMinimumClientVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMinimumClientVersion, &GetMinimumClientVersion_Parms, NULL );

	pFnGetMinimumClientVersion->FunctionFlags |= 0x400;

	return GetMinimumClientVersion_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteEventByBackendDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnDeleteEventByBackendDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnDeleteEventByBackendDone = NULL;

	if ( ! pFnRemoveDelegate_OnDeleteEventByBackendDone )
		pFnRemoveDelegate_OnDeleteEventByBackendDone = (UFunction*) UObject::GObjObjects()->Data[ 35816 ];

	UPBItemShopClient_execRemoveDelegate_OnDeleteEventByBackendDone_Parms RemoveDelegate_OnDeleteEventByBackendDone_Parms;
	memcpy ( &RemoveDelegate_OnDeleteEventByBackendDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnDeleteEventByBackendDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnDeleteEventByBackendDone, &RemoveDelegate_OnDeleteEventByBackendDone_Parms, NULL );

	return RemoveDelegate_OnDeleteEventByBackendDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteEventByBackendDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnDeleteEventByBackendDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnDeleteEventByBackendDone = NULL;

	if ( ! pFnAddDelegate_OnDeleteEventByBackendDone )
		pFnAddDelegate_OnDeleteEventByBackendDone = (UFunction*) UObject::GObjObjects()->Data[ 35812 ];

	UPBItemShopClient_execAddDelegate_OnDeleteEventByBackendDone_Parms AddDelegate_OnDeleteEventByBackendDone_Parms;
	memcpy ( &AddDelegate_OnDeleteEventByBackendDone_Parms.func, &func, 0xC );
	AddDelegate_OnDeleteEventByBackendDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnDeleteEventByBackendDone, &AddDelegate_OnDeleteEventByBackendDone_Parms, NULL );

	return AddDelegate_OnDeleteEventByBackendDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnDeleteEventByBackendDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// int                            EventCode                      ( CPF_Parm )

void UPBItemShopClient::OnDeleteEventByBackendDone ( int requestId, int ErrorCode, int EventCode )
{
	static UFunction* pFnOnDeleteEventByBackendDone = NULL;

	if ( ! pFnOnDeleteEventByBackendDone )
		pFnOnDeleteEventByBackendDone = (UFunction*) UObject::GObjObjects()->Data[ 35808 ];

	UPBItemShopClient_execOnDeleteEventByBackendDone_Parms OnDeleteEventByBackendDone_Parms;
	OnDeleteEventByBackendDone_Parms.requestId = requestId;
	OnDeleteEventByBackendDone_Parms.ErrorCode = ErrorCode;
	OnDeleteEventByBackendDone_Parms.EventCode = EventCode;

	this->ProcessEvent ( pFnOnDeleteEventByBackendDone, &OnDeleteEventByBackendDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.DeleteEventByBackend
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            EventCode                      ( CPF_Parm )

int UPBItemShopClient::eventDeleteEventByBackend ( int EventCode )
{
	static UFunction* pFnDeleteEventByBackend = NULL;

	if ( ! pFnDeleteEventByBackend )
		pFnDeleteEventByBackend = (UFunction*) UObject::GObjObjects()->Data[ 35805 ];

	UPBItemShopClient_eventDeleteEventByBackend_Parms DeleteEventByBackend_Parms;
	DeleteEventByBackend_Parms.EventCode = EventCode;

	pFnDeleteEventByBackend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteEventByBackend, &DeleteEventByBackend_Parms, NULL );

	pFnDeleteEventByBackend->FunctionFlags |= 0x400;

	return DeleteEventByBackend_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetEventByBackendDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetEventByBackendDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetEventByBackendDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetEventByBackendDone )
		pFnRemoveDelegate_OnGetEventByBackendDone = (UFunction*) UObject::GObjObjects()->Data[ 35801 ];

	UPBItemShopClient_execRemoveDelegate_OnGetEventByBackendDone_Parms RemoveDelegate_OnGetEventByBackendDone_Parms;
	memcpy ( &RemoveDelegate_OnGetEventByBackendDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetEventByBackendDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetEventByBackendDone, &RemoveDelegate_OnGetEventByBackendDone_Parms, NULL );

	return RemoveDelegate_OnGetEventByBackendDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetEventByBackendDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetEventByBackendDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetEventByBackendDone = NULL;

	if ( ! pFnAddDelegate_OnGetEventByBackendDone )
		pFnAddDelegate_OnGetEventByBackendDone = (UFunction*) UObject::GObjObjects()->Data[ 35797 ];

	UPBItemShopClient_execAddDelegate_OnGetEventByBackendDone_Parms AddDelegate_OnGetEventByBackendDone_Parms;
	memcpy ( &AddDelegate_OnGetEventByBackendDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetEventByBackendDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetEventByBackendDone, &AddDelegate_OnGetEventByBackendDone_Parms, NULL );

	return AddDelegate_OnGetEventByBackendDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetEventByBackendDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FPBShopEvent            eventDetails                   ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetEventByBackendDone ( int requestId, int ErrorCode, struct FPBShopEvent eventDetails )
{
	static UFunction* pFnOnGetEventByBackendDone = NULL;

	if ( ! pFnOnGetEventByBackendDone )
		pFnOnGetEventByBackendDone = (UFunction*) UObject::GObjObjects()->Data[ 35793 ];

	UPBItemShopClient_execOnGetEventByBackendDone_Parms OnGetEventByBackendDone_Parms;
	OnGetEventByBackendDone_Parms.requestId = requestId;
	OnGetEventByBackendDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetEventByBackendDone_Parms.eventDetails, &eventDetails, 0x48 );

	this->ProcessEvent ( pFnOnGetEventByBackendDone, &OnGetEventByBackendDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetEventByBackend
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            EventCode                      ( CPF_Parm )

int UPBItemShopClient::eventGetEventByBackend ( int EventCode )
{
	static UFunction* pFnGetEventByBackend = NULL;

	if ( ! pFnGetEventByBackend )
		pFnGetEventByBackend = (UFunction*) UObject::GObjObjects()->Data[ 35790 ];

	UPBItemShopClient_eventGetEventByBackend_Parms GetEventByBackend_Parms;
	GetEventByBackend_Parms.EventCode = EventCode;

	pFnGetEventByBackend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEventByBackend, &GetEventByBackend_Parms, NULL );

	pFnGetEventByBackend->FunctionFlags |= 0x400;

	return GetEventByBackend_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnEventsByBackend
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnEventsByBackend ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnEventsByBackend = NULL;

	if ( ! pFnRemoveDelegate_OnEventsByBackend )
		pFnRemoveDelegate_OnEventsByBackend = (UFunction*) UObject::GObjObjects()->Data[ 35786 ];

	UPBItemShopClient_execRemoveDelegate_OnEventsByBackend_Parms RemoveDelegate_OnEventsByBackend_Parms;
	memcpy ( &RemoveDelegate_OnEventsByBackend_Parms.func, &func, 0xC );
	RemoveDelegate_OnEventsByBackend_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnEventsByBackend, &RemoveDelegate_OnEventsByBackend_Parms, NULL );

	return RemoveDelegate_OnEventsByBackend_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnEventsByBackend
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnEventsByBackend ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnEventsByBackend = NULL;

	if ( ! pFnAddDelegate_OnEventsByBackend )
		pFnAddDelegate_OnEventsByBackend = (UFunction*) UObject::GObjObjects()->Data[ 35782 ];

	UPBItemShopClient_execAddDelegate_OnEventsByBackend_Parms AddDelegate_OnEventsByBackend_Parms;
	memcpy ( &AddDelegate_OnEventsByBackend_Parms.func, &func, 0xC );
	AddDelegate_OnEventsByBackend_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnEventsByBackend, &AddDelegate_OnEventsByBackend_Parms, NULL );

	return AddDelegate_OnEventsByBackend_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnEventsByBackend
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< int >                  eventCodes                     ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FPBShopEvent >  criticalEvents                 ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnEventsByBackend ( int requestId, int ErrorCode, TArray< int > eventCodes, TArray< struct FPBShopEvent > criticalEvents )
{
	static UFunction* pFnOnEventsByBackend = NULL;

	if ( ! pFnOnEventsByBackend )
		pFnOnEventsByBackend = (UFunction*) UObject::GObjObjects()->Data[ 35775 ];

	UPBItemShopClient_execOnEventsByBackend_Parms OnEventsByBackend_Parms;
	OnEventsByBackend_Parms.requestId = requestId;
	OnEventsByBackend_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnEventsByBackend_Parms.eventCodes, &eventCodes, 0xC );
	memcpy ( &OnEventsByBackend_Parms.criticalEvents, &criticalEvents, 0xC );

	this->ProcessEvent ( pFnOnEventsByBackend, &OnEventsByBackend_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnVerifyPromoCodeDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnVerifyPromoCodeDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnVerifyPromoCodeDone = NULL;

	if ( ! pFnRemoveDelegate_OnVerifyPromoCodeDone )
		pFnRemoveDelegate_OnVerifyPromoCodeDone = (UFunction*) UObject::GObjObjects()->Data[ 35771 ];

	UPBItemShopClient_execRemoveDelegate_OnVerifyPromoCodeDone_Parms RemoveDelegate_OnVerifyPromoCodeDone_Parms;
	memcpy ( &RemoveDelegate_OnVerifyPromoCodeDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnVerifyPromoCodeDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnVerifyPromoCodeDone, &RemoveDelegate_OnVerifyPromoCodeDone_Parms, NULL );

	return RemoveDelegate_OnVerifyPromoCodeDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnVerifyPromoCodeDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnVerifyPromoCodeDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnVerifyPromoCodeDone = NULL;

	if ( ! pFnAddDelegate_OnVerifyPromoCodeDone )
		pFnAddDelegate_OnVerifyPromoCodeDone = (UFunction*) UObject::GObjObjects()->Data[ 35767 ];

	UPBItemShopClient_execAddDelegate_OnVerifyPromoCodeDone_Parms AddDelegate_OnVerifyPromoCodeDone_Parms;
	memcpy ( &AddDelegate_OnVerifyPromoCodeDone_Parms.func, &func, 0xC );
	AddDelegate_OnVerifyPromoCodeDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnVerifyPromoCodeDone, &AddDelegate_OnVerifyPromoCodeDone_Parms, NULL );

	return AddDelegate_OnVerifyPromoCodeDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnVerifyPromoCodeDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            Error                          ( CPF_Parm )
// TArray< struct FPBPromoCodeOffer > PromoCodeResult                ( CPF_Parm | CPF_NeedCtorLink )
// int                            AmountIgc                      ( CPF_Parm )

void UPBItemShopClient::OnVerifyPromoCodeDone ( int requestId, int Error, TArray< struct FPBPromoCodeOffer > PromoCodeResult, int AmountIgc )
{
	static UFunction* pFnOnVerifyPromoCodeDone = NULL;

	if ( ! pFnOnVerifyPromoCodeDone )
		pFnOnVerifyPromoCodeDone = (UFunction*) UObject::GObjObjects()->Data[ 35761 ];

	UPBItemShopClient_execOnVerifyPromoCodeDone_Parms OnVerifyPromoCodeDone_Parms;
	OnVerifyPromoCodeDone_Parms.requestId = requestId;
	OnVerifyPromoCodeDone_Parms.Error = Error;
	memcpy ( &OnVerifyPromoCodeDone_Parms.PromoCodeResult, &PromoCodeResult, 0xC );
	OnVerifyPromoCodeDone_Parms.AmountIgc = AmountIgc;

	this->ProcessEvent ( pFnOnVerifyPromoCodeDone, &OnVerifyPromoCodeDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.VerifyPromoCode
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Code                           ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventVerifyPromoCode ( struct FString Code )
{
	static UFunction* pFnVerifyPromoCode = NULL;

	if ( ! pFnVerifyPromoCode )
		pFnVerifyPromoCode = (UFunction*) UObject::GObjObjects()->Data[ 35758 ];

	UPBItemShopClient_eventVerifyPromoCode_Parms VerifyPromoCode_Parms;
	memcpy ( &VerifyPromoCode_Parms.Code, &Code, 0xC );

	pFnVerifyPromoCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyPromoCode, &VerifyPromoCode_Parms, NULL );

	pFnVerifyPromoCode->FunctionFlags |= 0x400;

	return VerifyPromoCode_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnUsePromoCodeDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnUsePromoCodeDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnUsePromoCodeDone = NULL;

	if ( ! pFnRemoveDelegate_OnUsePromoCodeDone )
		pFnRemoveDelegate_OnUsePromoCodeDone = (UFunction*) UObject::GObjObjects()->Data[ 35754 ];

	UPBItemShopClient_execRemoveDelegate_OnUsePromoCodeDone_Parms RemoveDelegate_OnUsePromoCodeDone_Parms;
	memcpy ( &RemoveDelegate_OnUsePromoCodeDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnUsePromoCodeDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnUsePromoCodeDone, &RemoveDelegate_OnUsePromoCodeDone_Parms, NULL );

	return RemoveDelegate_OnUsePromoCodeDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnUsePromoCodeDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnUsePromoCodeDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnUsePromoCodeDone = NULL;

	if ( ! pFnAddDelegate_OnUsePromoCodeDone )
		pFnAddDelegate_OnUsePromoCodeDone = (UFunction*) UObject::GObjObjects()->Data[ 35750 ];

	UPBItemShopClient_execAddDelegate_OnUsePromoCodeDone_Parms AddDelegate_OnUsePromoCodeDone_Parms;
	memcpy ( &AddDelegate_OnUsePromoCodeDone_Parms.func, &func, 0xC );
	AddDelegate_OnUsePromoCodeDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnUsePromoCodeDone, &AddDelegate_OnUsePromoCodeDone_Parms, NULL );

	return AddDelegate_OnUsePromoCodeDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnUsePromoCodeDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnUsePromoCodeDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnUsePromoCodeDone = NULL;

	if ( ! pFnOnUsePromoCodeDone )
		pFnOnUsePromoCodeDone = (UFunction*) UObject::GObjObjects()->Data[ 35747 ];

	UPBItemShopClient_execOnUsePromoCodeDone_Parms OnUsePromoCodeDone_Parms;
	OnUsePromoCodeDone_Parms.requestId = requestId;
	OnUsePromoCodeDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnUsePromoCodeDone, &OnUsePromoCodeDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.UsePromoCode
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Code                           ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventUsePromoCode ( struct FString Code )
{
	static UFunction* pFnUsePromoCode = NULL;

	if ( ! pFnUsePromoCode )
		pFnUsePromoCode = (UFunction*) UObject::GObjObjects()->Data[ 35744 ];

	UPBItemShopClient_eventUsePromoCode_Parms UsePromoCode_Parms;
	memcpy ( &UsePromoCode_Parms.Code, &Code, 0xC );

	pFnUsePromoCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUsePromoCode, &UsePromoCode_Parms, NULL );

	pFnUsePromoCode->FunctionFlags |= 0x400;

	return UsePromoCode_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetGameServerStatusDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetGameServerStatusDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetGameServerStatusDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetGameServerStatusDone )
		pFnRemoveDelegate_OnGetGameServerStatusDone = (UFunction*) UObject::GObjObjects()->Data[ 35740 ];

	UPBItemShopClient_execRemoveDelegate_OnGetGameServerStatusDone_Parms RemoveDelegate_OnGetGameServerStatusDone_Parms;
	memcpy ( &RemoveDelegate_OnGetGameServerStatusDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetGameServerStatusDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetGameServerStatusDone, &RemoveDelegate_OnGetGameServerStatusDone_Parms, NULL );

	return RemoveDelegate_OnGetGameServerStatusDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetGameServerStatusDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetGameServerStatusDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetGameServerStatusDone = NULL;

	if ( ! pFnAddDelegate_OnGetGameServerStatusDone )
		pFnAddDelegate_OnGetGameServerStatusDone = (UFunction*) UObject::GObjObjects()->Data[ 35736 ];

	UPBItemShopClient_execAddDelegate_OnGetGameServerStatusDone_Parms AddDelegate_OnGetGameServerStatusDone_Parms;
	memcpy ( &AddDelegate_OnGetGameServerStatusDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetGameServerStatusDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetGameServerStatusDone, &AddDelegate_OnGetGameServerStatusDone_Parms, NULL );

	return AddDelegate_OnGetGameServerStatusDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetGameServerStatusDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   gameServerId                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// int                            Status                         ( CPF_Parm )

void UPBItemShopClient::OnGetGameServerStatusDone ( int requestId, int ErrorCode, struct FGuid gameServerId, struct FString URL, int Status )
{
	static UFunction* pFnOnGetGameServerStatusDone = NULL;

	if ( ! pFnOnGetGameServerStatusDone )
		pFnOnGetGameServerStatusDone = (UFunction*) UObject::GObjObjects()->Data[ 35730 ];

	UPBItemShopClient_execOnGetGameServerStatusDone_Parms OnGetGameServerStatusDone_Parms;
	OnGetGameServerStatusDone_Parms.requestId = requestId;
	OnGetGameServerStatusDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetGameServerStatusDone_Parms.gameServerId, &gameServerId, 0x10 );
	memcpy ( &OnGetGameServerStatusDone_Parms.URL, &URL, 0xC );
	OnGetGameServerStatusDone_Parms.Status = Status;

	this->ProcessEvent ( pFnOnGetGameServerStatusDone, &OnGetGameServerStatusDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetGameServerStatus
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   gameServerId                   ( CPF_Parm )

int UPBItemShopClient::eventGetGameServerStatus ( struct FGuid gameServerId )
{
	static UFunction* pFnGetGameServerStatus = NULL;

	if ( ! pFnGetGameServerStatus )
		pFnGetGameServerStatus = (UFunction*) UObject::GObjObjects()->Data[ 35727 ];

	UPBItemShopClient_eventGetGameServerStatus_Parms GetGameServerStatus_Parms;
	memcpy ( &GetGameServerStatus_Parms.gameServerId, &gameServerId, 0x10 );

	pFnGetGameServerStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameServerStatus, &GetGameServerStatus_Parms, NULL );

	pFnGetGameServerStatus->FunctionFlags |= 0x400;

	return GetGameServerStatus_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCancelGameServerRequestDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnCancelGameServerRequestDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnCancelGameServerRequestDone = NULL;

	if ( ! pFnRemoveDelegate_OnCancelGameServerRequestDone )
		pFnRemoveDelegate_OnCancelGameServerRequestDone = (UFunction*) UObject::GObjObjects()->Data[ 35723 ];

	UPBItemShopClient_execRemoveDelegate_OnCancelGameServerRequestDone_Parms RemoveDelegate_OnCancelGameServerRequestDone_Parms;
	memcpy ( &RemoveDelegate_OnCancelGameServerRequestDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnCancelGameServerRequestDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnCancelGameServerRequestDone, &RemoveDelegate_OnCancelGameServerRequestDone_Parms, NULL );

	return RemoveDelegate_OnCancelGameServerRequestDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCancelGameServerRequestDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnCancelGameServerRequestDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnCancelGameServerRequestDone = NULL;

	if ( ! pFnAddDelegate_OnCancelGameServerRequestDone )
		pFnAddDelegate_OnCancelGameServerRequestDone = (UFunction*) UObject::GObjObjects()->Data[ 35719 ];

	UPBItemShopClient_execAddDelegate_OnCancelGameServerRequestDone_Parms AddDelegate_OnCancelGameServerRequestDone_Parms;
	memcpy ( &AddDelegate_OnCancelGameServerRequestDone_Parms.func, &func, 0xC );
	AddDelegate_OnCancelGameServerRequestDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnCancelGameServerRequestDone, &AddDelegate_OnCancelGameServerRequestDone_Parms, NULL );

	return AddDelegate_OnCancelGameServerRequestDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnCancelGameServerRequestDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnCancelGameServerRequestDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnCancelGameServerRequestDone = NULL;

	if ( ! pFnOnCancelGameServerRequestDone )
		pFnOnCancelGameServerRequestDone = (UFunction*) UObject::GObjObjects()->Data[ 35716 ];

	UPBItemShopClient_execOnCancelGameServerRequestDone_Parms OnCancelGameServerRequestDone_Parms;
	OnCancelGameServerRequestDone_Parms.requestId = requestId;
	OnCancelGameServerRequestDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnCancelGameServerRequestDone, &OnCancelGameServerRequestDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.CancelGameServerRequest
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   gameServerId                   ( CPF_Parm )

int UPBItemShopClient::eventCancelGameServerRequest ( struct FGuid gameServerId )
{
	static UFunction* pFnCancelGameServerRequest = NULL;

	if ( ! pFnCancelGameServerRequest )
		pFnCancelGameServerRequest = (UFunction*) UObject::GObjObjects()->Data[ 35713 ];

	UPBItemShopClient_eventCancelGameServerRequest_Parms CancelGameServerRequest_Parms;
	memcpy ( &CancelGameServerRequest_Parms.gameServerId, &gameServerId, 0x10 );

	pFnCancelGameServerRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelGameServerRequest, &CancelGameServerRequest_Parms, NULL );

	pFnCancelGameServerRequest->FunctionFlags |= 0x400;

	return CancelGameServerRequest_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetGameRegionsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetGameRegionsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetGameRegionsDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetGameRegionsDone )
		pFnRemoveDelegate_OnGetGameRegionsDone = (UFunction*) UObject::GObjObjects()->Data[ 35709 ];

	UPBItemShopClient_execRemoveDelegate_OnGetGameRegionsDone_Parms RemoveDelegate_OnGetGameRegionsDone_Parms;
	memcpy ( &RemoveDelegate_OnGetGameRegionsDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetGameRegionsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetGameRegionsDone, &RemoveDelegate_OnGetGameRegionsDone_Parms, NULL );

	return RemoveDelegate_OnGetGameRegionsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetGameRegionsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetGameRegionsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetGameRegionsDone = NULL;

	if ( ! pFnAddDelegate_OnGetGameRegionsDone )
		pFnAddDelegate_OnGetGameRegionsDone = (UFunction*) UObject::GObjObjects()->Data[ 35705 ];

	UPBItemShopClient_execAddDelegate_OnGetGameRegionsDone_Parms AddDelegate_OnGetGameRegionsDone_Parms;
	memcpy ( &AddDelegate_OnGetGameRegionsDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetGameRegionsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetGameRegionsDone, &AddDelegate_OnGetGameRegionsDone_Parms, NULL );

	return AddDelegate_OnGetGameRegionsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetGameRegionsDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnGetGameRegionsDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnGetGameRegionsDone = NULL;

	if ( ! pFnOnGetGameRegionsDone )
		pFnOnGetGameRegionsDone = (UFunction*) UObject::GObjObjects()->Data[ 35702 ];

	UPBItemShopClient_execOnGetGameRegionsDone_Parms OnGetGameRegionsDone_Parms;
	OnGetGameRegionsDone_Parms.requestId = requestId;
	OnGetGameRegionsDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnGetGameRegionsDone, &OnGetGameRegionsDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetGameRegions
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetGameRegions ( )
{
	static UFunction* pFnGetGameRegions = NULL;

	if ( ! pFnGetGameRegions )
		pFnGetGameRegions = (UFunction*) UObject::GObjObjects()->Data[ 35700 ];

	UPBItemShopClient_eventGetGameRegions_Parms GetGameRegions_Parms;

	pFnGetGameRegions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameRegions, &GetGameRegions_Parms, NULL );

	pFnGetGameRegions->FunctionFlags |= 0x400;

	return GetGameRegions_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnRequestGameServerDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnRequestGameServerDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnRequestGameServerDone = NULL;

	if ( ! pFnRemoveDelegate_OnRequestGameServerDone )
		pFnRemoveDelegate_OnRequestGameServerDone = (UFunction*) UObject::GObjObjects()->Data[ 35696 ];

	UPBItemShopClient_execRemoveDelegate_OnRequestGameServerDone_Parms RemoveDelegate_OnRequestGameServerDone_Parms;
	memcpy ( &RemoveDelegate_OnRequestGameServerDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnRequestGameServerDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnRequestGameServerDone, &RemoveDelegate_OnRequestGameServerDone_Parms, NULL );

	return RemoveDelegate_OnRequestGameServerDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnRequestGameServerDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnRequestGameServerDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnRequestGameServerDone = NULL;

	if ( ! pFnAddDelegate_OnRequestGameServerDone )
		pFnAddDelegate_OnRequestGameServerDone = (UFunction*) UObject::GObjObjects()->Data[ 35692 ];

	UPBItemShopClient_execAddDelegate_OnRequestGameServerDone_Parms AddDelegate_OnRequestGameServerDone_Parms;
	memcpy ( &AddDelegate_OnRequestGameServerDone_Parms.func, &func, 0xC );
	AddDelegate_OnRequestGameServerDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnRequestGameServerDone, &AddDelegate_OnRequestGameServerDone_Parms, NULL );

	return AddDelegate_OnRequestGameServerDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnRequestGameServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   gameServerId                   ( CPF_Parm )

void UPBItemShopClient::OnRequestGameServerDone ( int requestId, int ErrorCode, struct FGuid gameServerId )
{
	static UFunction* pFnOnRequestGameServerDone = NULL;

	if ( ! pFnOnRequestGameServerDone )
		pFnOnRequestGameServerDone = (UFunction*) UObject::GObjObjects()->Data[ 35688 ];

	UPBItemShopClient_execOnRequestGameServerDone_Parms OnRequestGameServerDone_Parms;
	OnRequestGameServerDone_Parms.requestId = requestId;
	OnRequestGameServerDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnRequestGameServerDone_Parms.gameServerId, &gameServerId, 0x10 );

	this->ProcessEvent ( pFnOnRequestGameServerDone, &OnRequestGameServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.RequestGameServer
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// int                            regioncode                     ( CPF_Parm )

int UPBItemShopClient::eventRequestGameServer ( struct FString URL, int regioncode )
{
	static UFunction* pFnRequestGameServer = NULL;

	if ( ! pFnRequestGameServer )
		pFnRequestGameServer = (UFunction*) UObject::GObjObjects()->Data[ 35684 ];

	UPBItemShopClient_eventRequestGameServer_Parms RequestGameServer_Parms;
	memcpy ( &RequestGameServer_Parms.URL, &URL, 0xC );
	RequestGameServer_Parms.regioncode = regioncode;

	pFnRequestGameServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestGameServer, &RequestGameServer_Parms, NULL );

	pFnRequestGameServer->FunctionFlags |= 0x400;

	return RequestGameServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetDefaultInventoryDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetDefaultInventoryDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetDefaultInventoryDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetDefaultInventoryDone )
		pFnRemoveDelegate_OnGetDefaultInventoryDone = (UFunction*) UObject::GObjObjects()->Data[ 35680 ];

	UPBItemShopClient_execRemoveDelegate_OnGetDefaultInventoryDone_Parms RemoveDelegate_OnGetDefaultInventoryDone_Parms;
	memcpy ( &RemoveDelegate_OnGetDefaultInventoryDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetDefaultInventoryDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetDefaultInventoryDone, &RemoveDelegate_OnGetDefaultInventoryDone_Parms, NULL );

	return RemoveDelegate_OnGetDefaultInventoryDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetDefaultInventoryDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetDefaultInventoryDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetDefaultInventoryDone = NULL;

	if ( ! pFnAddDelegate_OnGetDefaultInventoryDone )
		pFnAddDelegate_OnGetDefaultInventoryDone = (UFunction*) UObject::GObjObjects()->Data[ 35676 ];

	UPBItemShopClient_execAddDelegate_OnGetDefaultInventoryDone_Parms AddDelegate_OnGetDefaultInventoryDone_Parms;
	memcpy ( &AddDelegate_OnGetDefaultInventoryDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetDefaultInventoryDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetDefaultInventoryDone, &AddDelegate_OnGetDefaultInventoryDone_Parms, NULL );

	return AddDelegate_OnGetDefaultInventoryDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetDefaultInventoryDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBItem >       items                          ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetDefaultInventoryDone ( int requestId, int ErrorCode, TArray< struct FPBItem > items )
{
	static UFunction* pFnOnGetDefaultInventoryDone = NULL;

	if ( ! pFnOnGetDefaultInventoryDone )
		pFnOnGetDefaultInventoryDone = (UFunction*) UObject::GObjObjects()->Data[ 35671 ];

	UPBItemShopClient_execOnGetDefaultInventoryDone_Parms OnGetDefaultInventoryDone_Parms;
	OnGetDefaultInventoryDone_Parms.requestId = requestId;
	OnGetDefaultInventoryDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetDefaultInventoryDone_Parms.items, &items, 0xC );

	this->ProcessEvent ( pFnOnGetDefaultInventoryDone, &OnGetDefaultInventoryDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetDefaultInventory
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   characterGender                ( CPF_Parm )

int UPBItemShopClient::eventGetDefaultInventory ( struct FGuid characterGender )
{
	static UFunction* pFnGetDefaultInventory = NULL;

	if ( ! pFnGetDefaultInventory )
		pFnGetDefaultInventory = (UFunction*) UObject::GObjObjects()->Data[ 35668 ];

	UPBItemShopClient_eventGetDefaultInventory_Parms GetDefaultInventory_Parms;
	memcpy ( &GetDefaultInventory_Parms.characterGender, &characterGender, 0x10 );

	pFnGetDefaultInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDefaultInventory, &GetDefaultInventory_Parms, NULL );

	pFnGetDefaultInventory->FunctionFlags |= 0x400;

	return GetDefaultInventory_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnUpdateWeaponPresetNameDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnUpdateWeaponPresetNameDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnUpdateWeaponPresetNameDone = NULL;

	if ( ! pFnRemoveDelegate_OnUpdateWeaponPresetNameDone )
		pFnRemoveDelegate_OnUpdateWeaponPresetNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35664 ];

	UPBItemShopClient_execRemoveDelegate_OnUpdateWeaponPresetNameDone_Parms RemoveDelegate_OnUpdateWeaponPresetNameDone_Parms;
	memcpy ( &RemoveDelegate_OnUpdateWeaponPresetNameDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnUpdateWeaponPresetNameDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnUpdateWeaponPresetNameDone, &RemoveDelegate_OnUpdateWeaponPresetNameDone_Parms, NULL );

	return RemoveDelegate_OnUpdateWeaponPresetNameDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnUpdateWeaponPresetNameDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnUpdateWeaponPresetNameDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnUpdateWeaponPresetNameDone = NULL;

	if ( ! pFnAddDelegate_OnUpdateWeaponPresetNameDone )
		pFnAddDelegate_OnUpdateWeaponPresetNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35660 ];

	UPBItemShopClient_execAddDelegate_OnUpdateWeaponPresetNameDone_Parms AddDelegate_OnUpdateWeaponPresetNameDone_Parms;
	memcpy ( &AddDelegate_OnUpdateWeaponPresetNameDone_Parms.func, &func, 0xC );
	AddDelegate_OnUpdateWeaponPresetNameDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnUpdateWeaponPresetNameDone, &AddDelegate_OnUpdateWeaponPresetNameDone_Parms, NULL );

	return AddDelegate_OnUpdateWeaponPresetNameDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnUpdateWeaponPresetNameDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnUpdateWeaponPresetNameDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnUpdateWeaponPresetNameDone = NULL;

	if ( ! pFnOnUpdateWeaponPresetNameDone )
		pFnOnUpdateWeaponPresetNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35657 ];

	UPBItemShopClient_execOnUpdateWeaponPresetNameDone_Parms OnUpdateWeaponPresetNameDone_Parms;
	OnUpdateWeaponPresetNameDone_Parms.requestId = requestId;
	OnUpdateWeaponPresetNameDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnUpdateWeaponPresetNameDone, &OnUpdateWeaponPresetNameDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.UpdateWeaponPresetName
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            indexOfPreset                  ( CPF_Parm )
// struct FString                 PresetName                     ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventUpdateWeaponPresetName ( int indexOfPreset, struct FString PresetName )
{
	static UFunction* pFnUpdateWeaponPresetName = NULL;

	if ( ! pFnUpdateWeaponPresetName )
		pFnUpdateWeaponPresetName = (UFunction*) UObject::GObjObjects()->Data[ 35653 ];

	UPBItemShopClient_eventUpdateWeaponPresetName_Parms UpdateWeaponPresetName_Parms;
	UpdateWeaponPresetName_Parms.indexOfPreset = indexOfPreset;
	memcpy ( &UpdateWeaponPresetName_Parms.PresetName, &PresetName, 0xC );

	pFnUpdateWeaponPresetName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateWeaponPresetName, &UpdateWeaponPresetName_Parms, NULL );

	pFnUpdateWeaponPresetName->FunctionFlags |= 0x400;

	return UpdateWeaponPresetName_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetWeaponPresetNamesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetWeaponPresetNamesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetWeaponPresetNamesDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetWeaponPresetNamesDone )
		pFnRemoveDelegate_OnGetWeaponPresetNamesDone = (UFunction*) UObject::GObjObjects()->Data[ 35649 ];

	UPBItemShopClient_execRemoveDelegate_OnGetWeaponPresetNamesDone_Parms RemoveDelegate_OnGetWeaponPresetNamesDone_Parms;
	memcpy ( &RemoveDelegate_OnGetWeaponPresetNamesDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetWeaponPresetNamesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetWeaponPresetNamesDone, &RemoveDelegate_OnGetWeaponPresetNamesDone_Parms, NULL );

	return RemoveDelegate_OnGetWeaponPresetNamesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetWeaponPresetNamesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetWeaponPresetNamesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetWeaponPresetNamesDone = NULL;

	if ( ! pFnAddDelegate_OnGetWeaponPresetNamesDone )
		pFnAddDelegate_OnGetWeaponPresetNamesDone = (UFunction*) UObject::GObjObjects()->Data[ 35645 ];

	UPBItemShopClient_execAddDelegate_OnGetWeaponPresetNamesDone_Parms AddDelegate_OnGetWeaponPresetNamesDone_Parms;
	memcpy ( &AddDelegate_OnGetWeaponPresetNamesDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetWeaponPresetNamesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetWeaponPresetNamesDone, &AddDelegate_OnGetWeaponPresetNamesDone_Parms, NULL );

	return AddDelegate_OnGetWeaponPresetNamesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetWeaponPresetNamesDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FString >       weaponPresetNames              ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetWeaponPresetNamesDone ( int requestId, int ErrorCode, TArray< struct FString > weaponPresetNames )
{
	static UFunction* pFnOnGetWeaponPresetNamesDone = NULL;

	if ( ! pFnOnGetWeaponPresetNamesDone )
		pFnOnGetWeaponPresetNamesDone = (UFunction*) UObject::GObjObjects()->Data[ 35640 ];

	UPBItemShopClient_execOnGetWeaponPresetNamesDone_Parms OnGetWeaponPresetNamesDone_Parms;
	OnGetWeaponPresetNamesDone_Parms.requestId = requestId;
	OnGetWeaponPresetNamesDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetWeaponPresetNamesDone_Parms.weaponPresetNames, &weaponPresetNames, 0xC );

	this->ProcessEvent ( pFnOnGetWeaponPresetNamesDone, &OnGetWeaponPresetNamesDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetWeaponPresetNames
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetWeaponPresetNames ( )
{
	static UFunction* pFnGetWeaponPresetNames = NULL;

	if ( ! pFnGetWeaponPresetNames )
		pFnGetWeaponPresetNames = (UFunction*) UObject::GObjObjects()->Data[ 35638 ];

	UPBItemShopClient_eventGetWeaponPresetNames_Parms GetWeaponPresetNames_Parms;

	pFnGetWeaponPresetNames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetWeaponPresetNames, &GetWeaponPresetNames_Parms, NULL );

	pFnGetWeaponPresetNames->FunctionFlags |= 0x400;

	return GetWeaponPresetNames_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetMaxNumberProfilesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetMaxNumberProfilesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetMaxNumberProfilesDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetMaxNumberProfilesDone )
		pFnRemoveDelegate_OnGetMaxNumberProfilesDone = (UFunction*) UObject::GObjObjects()->Data[ 35634 ];

	UPBItemShopClient_execRemoveDelegate_OnGetMaxNumberProfilesDone_Parms RemoveDelegate_OnGetMaxNumberProfilesDone_Parms;
	memcpy ( &RemoveDelegate_OnGetMaxNumberProfilesDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetMaxNumberProfilesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetMaxNumberProfilesDone, &RemoveDelegate_OnGetMaxNumberProfilesDone_Parms, NULL );

	return RemoveDelegate_OnGetMaxNumberProfilesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetMaxNumberProfilesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetMaxNumberProfilesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetMaxNumberProfilesDone = NULL;

	if ( ! pFnAddDelegate_OnGetMaxNumberProfilesDone )
		pFnAddDelegate_OnGetMaxNumberProfilesDone = (UFunction*) UObject::GObjObjects()->Data[ 35630 ];

	UPBItemShopClient_execAddDelegate_OnGetMaxNumberProfilesDone_Parms AddDelegate_OnGetMaxNumberProfilesDone_Parms;
	memcpy ( &AddDelegate_OnGetMaxNumberProfilesDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetMaxNumberProfilesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetMaxNumberProfilesDone, &AddDelegate_OnGetMaxNumberProfilesDone_Parms, NULL );

	return AddDelegate_OnGetMaxNumberProfilesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetMaxNumberProfilesDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// int                            maxNumberProfiles              ( CPF_Parm )

void UPBItemShopClient::OnGetMaxNumberProfilesDone ( int requestId, int ErrorCode, int maxNumberProfiles )
{
	static UFunction* pFnOnGetMaxNumberProfilesDone = NULL;

	if ( ! pFnOnGetMaxNumberProfilesDone )
		pFnOnGetMaxNumberProfilesDone = (UFunction*) UObject::GObjObjects()->Data[ 35626 ];

	UPBItemShopClient_execOnGetMaxNumberProfilesDone_Parms OnGetMaxNumberProfilesDone_Parms;
	OnGetMaxNumberProfilesDone_Parms.requestId = requestId;
	OnGetMaxNumberProfilesDone_Parms.ErrorCode = ErrorCode;
	OnGetMaxNumberProfilesDone_Parms.maxNumberProfiles = maxNumberProfiles;

	this->ProcessEvent ( pFnOnGetMaxNumberProfilesDone, &OnGetMaxNumberProfilesDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetMaxNumberProfiles
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetMaxNumberProfiles ( )
{
	static UFunction* pFnGetMaxNumberProfiles = NULL;

	if ( ! pFnGetMaxNumberProfiles )
		pFnGetMaxNumberProfiles = (UFunction*) UObject::GObjObjects()->Data[ 35624 ];

	UPBItemShopClient_eventGetMaxNumberProfiles_Parms GetMaxNumberProfiles_Parms;

	pFnGetMaxNumberProfiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMaxNumberProfiles, &GetMaxNumberProfiles_Parms, NULL );

	pFnGetMaxNumberProfiles->FunctionFlags |= 0x400;

	return GetMaxNumberProfiles_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnDeleteProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnDeleteProfileDone = NULL;

	if ( ! pFnRemoveDelegate_OnDeleteProfileDone )
		pFnRemoveDelegate_OnDeleteProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35620 ];

	UPBItemShopClient_execRemoveDelegate_OnDeleteProfileDone_Parms RemoveDelegate_OnDeleteProfileDone_Parms;
	memcpy ( &RemoveDelegate_OnDeleteProfileDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnDeleteProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnDeleteProfileDone, &RemoveDelegate_OnDeleteProfileDone_Parms, NULL );

	return RemoveDelegate_OnDeleteProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnDeleteProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnDeleteProfileDone = NULL;

	if ( ! pFnAddDelegate_OnDeleteProfileDone )
		pFnAddDelegate_OnDeleteProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35616 ];

	UPBItemShopClient_execAddDelegate_OnDeleteProfileDone_Parms AddDelegate_OnDeleteProfileDone_Parms;
	memcpy ( &AddDelegate_OnDeleteProfileDone_Parms.func, &func, 0xC );
	AddDelegate_OnDeleteProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnDeleteProfileDone, &AddDelegate_OnDeleteProfileDone_Parms, NULL );

	return AddDelegate_OnDeleteProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnDeleteProfileDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

void UPBItemShopClient::OnDeleteProfileDone ( int requestId, int ErrorCode, struct FGuid ProfileId )
{
	static UFunction* pFnOnDeleteProfileDone = NULL;

	if ( ! pFnOnDeleteProfileDone )
		pFnOnDeleteProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35612 ];

	UPBItemShopClient_execOnDeleteProfileDone_Parms OnDeleteProfileDone_Parms;
	OnDeleteProfileDone_Parms.requestId = requestId;
	OnDeleteProfileDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnDeleteProfileDone_Parms.ProfileId, &ProfileId, 0x10 );

	this->ProcessEvent ( pFnOnDeleteProfileDone, &OnDeleteProfileDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.DeleteProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

int UPBItemShopClient::eventDeleteProfile ( struct FGuid ProfileId )
{
	static UFunction* pFnDeleteProfile = NULL;

	if ( ! pFnDeleteProfile )
		pFnDeleteProfile = (UFunction*) UObject::GObjObjects()->Data[ 35609 ];

	UPBItemShopClient_eventDeleteProfile_Parms DeleteProfile_Parms;
	memcpy ( &DeleteProfile_Parms.ProfileId, &ProfileId, 0x10 );

	pFnDeleteProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteProfile, &DeleteProfile_Parms, NULL );

	pFnDeleteProfile->FunctionFlags |= 0x400;

	return DeleteProfile_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient._OnDeselectProfileDone
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

void UPBItemShopClient::_OnDeselectProfileDone ( int requestId, int ErrorCode, struct FGuid ProfileId )
{
	static UFunction* pFn_OnDeselectProfileDone = NULL;

	if ( ! pFn_OnDeselectProfileDone )
		pFn_OnDeselectProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35596 ];

	UPBItemShopClient_exec_OnDeselectProfileDone_Parms _OnDeselectProfileDone_Parms;
	_OnDeselectProfileDone_Parms.requestId = requestId;
	_OnDeselectProfileDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &_OnDeselectProfileDone_Parms.ProfileId, &ProfileId, 0x10 );

	this->ProcessEvent ( pFn_OnDeselectProfileDone, &_OnDeselectProfileDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeselectProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnDeselectProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnDeselectProfileDone = NULL;

	if ( ! pFnRemoveDelegate_OnDeselectProfileDone )
		pFnRemoveDelegate_OnDeselectProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35601 ];

	UPBItemShopClient_execRemoveDelegate_OnDeselectProfileDone_Parms RemoveDelegate_OnDeselectProfileDone_Parms;
	memcpy ( &RemoveDelegate_OnDeselectProfileDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnDeselectProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnDeselectProfileDone, &RemoveDelegate_OnDeselectProfileDone_Parms, NULL );

	return RemoveDelegate_OnDeselectProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeselectProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnDeselectProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnDeselectProfileDone = NULL;

	if ( ! pFnAddDelegate_OnDeselectProfileDone )
		pFnAddDelegate_OnDeselectProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35597 ];

	UPBItemShopClient_execAddDelegate_OnDeselectProfileDone_Parms AddDelegate_OnDeselectProfileDone_Parms;
	memcpy ( &AddDelegate_OnDeselectProfileDone_Parms.func, &func, 0xC );
	AddDelegate_OnDeselectProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnDeselectProfileDone, &AddDelegate_OnDeselectProfileDone_Parms, NULL );

	return AddDelegate_OnDeselectProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnDeselectProfileDone
// [0x00120002] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

void UPBItemShopClient::OnDeselectProfileDone ( int requestId, int ErrorCode, struct FGuid ProfileId )
{
	static UFunction* pFnOnDeselectProfileDone = NULL;

	if ( ! pFnOnDeselectProfileDone )
		pFnOnDeselectProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35592 ];

	UPBItemShopClient_execOnDeselectProfileDone_Parms OnDeselectProfileDone_Parms;
	OnDeselectProfileDone_Parms.requestId = requestId;
	OnDeselectProfileDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnDeselectProfileDone_Parms.ProfileId, &ProfileId, 0x10 );

	this->ProcessEvent ( pFnOnDeselectProfileDone, &OnDeselectProfileDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.DeselectProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventDeselectProfile ( )
{
	static UFunction* pFnDeselectProfile = NULL;

	if ( ! pFnDeselectProfile )
		pFnDeselectProfile = (UFunction*) UObject::GObjObjects()->Data[ 35590 ];

	UPBItemShopClient_eventDeselectProfile_Parms DeselectProfile_Parms;

	pFnDeselectProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeselectProfile, &DeselectProfile_Parms, NULL );

	pFnDeselectProfile->FunctionFlags |= 0x400;

	return DeselectProfile_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGenerateGameSpyTokenDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGenerateGameSpyTokenDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGenerateGameSpyTokenDone = NULL;

	if ( ! pFnRemoveDelegate_OnGenerateGameSpyTokenDone )
		pFnRemoveDelegate_OnGenerateGameSpyTokenDone = (UFunction*) UObject::GObjObjects()->Data[ 35586 ];

	UPBItemShopClient_execRemoveDelegate_OnGenerateGameSpyTokenDone_Parms RemoveDelegate_OnGenerateGameSpyTokenDone_Parms;
	memcpy ( &RemoveDelegate_OnGenerateGameSpyTokenDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGenerateGameSpyTokenDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGenerateGameSpyTokenDone, &RemoveDelegate_OnGenerateGameSpyTokenDone_Parms, NULL );

	return RemoveDelegate_OnGenerateGameSpyTokenDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGenerateGameSpyTokenDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGenerateGameSpyTokenDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGenerateGameSpyTokenDone = NULL;

	if ( ! pFnAddDelegate_OnGenerateGameSpyTokenDone )
		pFnAddDelegate_OnGenerateGameSpyTokenDone = (UFunction*) UObject::GObjObjects()->Data[ 35582 ];

	UPBItemShopClient_execAddDelegate_OnGenerateGameSpyTokenDone_Parms AddDelegate_OnGenerateGameSpyTokenDone_Parms;
	memcpy ( &AddDelegate_OnGenerateGameSpyTokenDone_Parms.func, &func, 0xC );
	AddDelegate_OnGenerateGameSpyTokenDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGenerateGameSpyTokenDone, &AddDelegate_OnGenerateGameSpyTokenDone_Parms, NULL );

	return AddDelegate_OnGenerateGameSpyTokenDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGenerateGameSpyTokenDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// struct FString                 gameSpyToken                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 gameSpyChallenge               ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGenerateGameSpyTokenDone ( int requestId, int ErrorCode, struct FGuid ProfileId, struct FString gameSpyToken, struct FString gameSpyChallenge )
{
	static UFunction* pFnOnGenerateGameSpyTokenDone = NULL;

	if ( ! pFnOnGenerateGameSpyTokenDone )
		pFnOnGenerateGameSpyTokenDone = (UFunction*) UObject::GObjObjects()->Data[ 35576 ];

	UPBItemShopClient_execOnGenerateGameSpyTokenDone_Parms OnGenerateGameSpyTokenDone_Parms;
	OnGenerateGameSpyTokenDone_Parms.requestId = requestId;
	OnGenerateGameSpyTokenDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGenerateGameSpyTokenDone_Parms.ProfileId, &ProfileId, 0x10 );
	memcpy ( &OnGenerateGameSpyTokenDone_Parms.gameSpyToken, &gameSpyToken, 0xC );
	memcpy ( &OnGenerateGameSpyTokenDone_Parms.gameSpyChallenge, &gameSpyChallenge, 0xC );

	this->ProcessEvent ( pFnOnGenerateGameSpyTokenDone, &OnGenerateGameSpyTokenDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GenerateGameSpyToken
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

int UPBItemShopClient::eventGenerateGameSpyToken ( struct FGuid ProfileId )
{
	static UFunction* pFnGenerateGameSpyToken = NULL;

	if ( ! pFnGenerateGameSpyToken )
		pFnGenerateGameSpyToken = (UFunction*) UObject::GObjObjects()->Data[ 35573 ];

	UPBItemShopClient_eventGenerateGameSpyToken_Parms GenerateGameSpyToken_Parms;
	memcpy ( &GenerateGameSpyToken_Parms.ProfileId, &ProfileId, 0x10 );

	pFnGenerateGameSpyToken->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGenerateGameSpyToken, &GenerateGameSpyToken_Parms, NULL );

	pFnGenerateGameSpyToken->FunctionFlags |= 0x400;

	return GenerateGameSpyToken_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetCharacterProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetCharacterProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetCharacterProfileDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetCharacterProfileDone )
		pFnRemoveDelegate_OnGetCharacterProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35569 ];

	UPBItemShopClient_execRemoveDelegate_OnGetCharacterProfileDone_Parms RemoveDelegate_OnGetCharacterProfileDone_Parms;
	memcpy ( &RemoveDelegate_OnGetCharacterProfileDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetCharacterProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetCharacterProfileDone, &RemoveDelegate_OnGetCharacterProfileDone_Parms, NULL );

	return RemoveDelegate_OnGetCharacterProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetCharacterProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetCharacterProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetCharacterProfileDone = NULL;

	if ( ! pFnAddDelegate_OnGetCharacterProfileDone )
		pFnAddDelegate_OnGetCharacterProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35565 ];

	UPBItemShopClient_execAddDelegate_OnGetCharacterProfileDone_Parms AddDelegate_OnGetCharacterProfileDone_Parms;
	memcpy ( &AddDelegate_OnGetCharacterProfileDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetCharacterProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetCharacterProfileDone, &AddDelegate_OnGetCharacterProfileDone_Parms, NULL );

	return AddDelegate_OnGetCharacterProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetCharacterProfileDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FPBCharacterProfile     CharacterProfile               ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetCharacterProfileDone ( int requestId, int ErrorCode, struct FPBCharacterProfile CharacterProfile )
{
	static UFunction* pFnOnGetCharacterProfileDone = NULL;

	if ( ! pFnOnGetCharacterProfileDone )
		pFnOnGetCharacterProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35561 ];

	UPBItemShopClient_execOnGetCharacterProfileDone_Parms OnGetCharacterProfileDone_Parms;
	OnGetCharacterProfileDone_Parms.requestId = requestId;
	OnGetCharacterProfileDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetCharacterProfileDone_Parms.CharacterProfile, &CharacterProfile, 0xB8 );

	this->ProcessEvent ( pFnOnGetCharacterProfileDone, &OnGetCharacterProfileDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetCharacterProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// int                            LatestInventoryEntriesAmount   ( CPF_Parm )

int UPBItemShopClient::eventGetCharacterProfile ( struct FGuid ProfileId, int LatestInventoryEntriesAmount )
{
	static UFunction* pFnGetCharacterProfile = NULL;

	if ( ! pFnGetCharacterProfile )
		pFnGetCharacterProfile = (UFunction*) UObject::GObjObjects()->Data[ 35557 ];

	UPBItemShopClient_eventGetCharacterProfile_Parms GetCharacterProfile_Parms;
	memcpy ( &GetCharacterProfile_Parms.ProfileId, &ProfileId, 0x10 );
	GetCharacterProfile_Parms.LatestInventoryEntriesAmount = LatestInventoryEntriesAmount;

	pFnGetCharacterProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCharacterProfile, &GetCharacterProfile_Parms, NULL );

	pFnGetCharacterProfile->FunctionFlags |= 0x400;

	return GetCharacterProfile_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient._OnSelectProfileDone
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// struct FString                 gameSpyToken                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 gameSpyChallenge               ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::_OnSelectProfileDone ( int requestId, int ErrorCode, struct FGuid ProfileId, struct FString gameSpyToken, struct FString gameSpyChallenge )
{
	static UFunction* pFn_OnSelectProfileDone = NULL;

	if ( ! pFn_OnSelectProfileDone )
		pFn_OnSelectProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35543 ];

	UPBItemShopClient_exec_OnSelectProfileDone_Parms _OnSelectProfileDone_Parms;
	_OnSelectProfileDone_Parms.requestId = requestId;
	_OnSelectProfileDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &_OnSelectProfileDone_Parms.ProfileId, &ProfileId, 0x10 );
	memcpy ( &_OnSelectProfileDone_Parms.gameSpyToken, &gameSpyToken, 0xC );
	memcpy ( &_OnSelectProfileDone_Parms.gameSpyChallenge, &gameSpyChallenge, 0xC );

	this->ProcessEvent ( pFn_OnSelectProfileDone, &_OnSelectProfileDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSelectProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnSelectProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnSelectProfileDone = NULL;

	if ( ! pFnRemoveDelegate_OnSelectProfileDone )
		pFnRemoveDelegate_OnSelectProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35548 ];

	UPBItemShopClient_execRemoveDelegate_OnSelectProfileDone_Parms RemoveDelegate_OnSelectProfileDone_Parms;
	memcpy ( &RemoveDelegate_OnSelectProfileDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnSelectProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnSelectProfileDone, &RemoveDelegate_OnSelectProfileDone_Parms, NULL );

	return RemoveDelegate_OnSelectProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSelectProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnSelectProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnSelectProfileDone = NULL;

	if ( ! pFnAddDelegate_OnSelectProfileDone )
		pFnAddDelegate_OnSelectProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35544 ];

	UPBItemShopClient_execAddDelegate_OnSelectProfileDone_Parms AddDelegate_OnSelectProfileDone_Parms;
	memcpy ( &AddDelegate_OnSelectProfileDone_Parms.func, &func, 0xC );
	AddDelegate_OnSelectProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnSelectProfileDone, &AddDelegate_OnSelectProfileDone_Parms, NULL );

	return AddDelegate_OnSelectProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnSelectProfileDone
// [0x00120002] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// struct FString                 gameSpyToken                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 gameSpyChallenge               ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnSelectProfileDone ( int requestId, int ErrorCode, struct FGuid ProfileId, struct FString gameSpyToken, struct FString gameSpyChallenge )
{
	static UFunction* pFnOnSelectProfileDone = NULL;

	if ( ! pFnOnSelectProfileDone )
		pFnOnSelectProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35537 ];

	UPBItemShopClient_execOnSelectProfileDone_Parms OnSelectProfileDone_Parms;
	OnSelectProfileDone_Parms.requestId = requestId;
	OnSelectProfileDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnSelectProfileDone_Parms.ProfileId, &ProfileId, 0x10 );
	memcpy ( &OnSelectProfileDone_Parms.gameSpyToken, &gameSpyToken, 0xC );
	memcpy ( &OnSelectProfileDone_Parms.gameSpyChallenge, &gameSpyChallenge, 0xC );

	this->ProcessEvent ( pFnOnSelectProfileDone, &OnSelectProfileDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.SelectProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

int UPBItemShopClient::eventSelectProfile ( struct FGuid ProfileId )
{
	static UFunction* pFnSelectProfile = NULL;

	if ( ! pFnSelectProfile )
		pFnSelectProfile = (UFunction*) UObject::GObjObjects()->Data[ 35534 ];

	UPBItemShopClient_eventSelectProfile_Parms SelectProfile_Parms;
	memcpy ( &SelectProfile_Parms.ProfileId, &ProfileId, 0x10 );

	pFnSelectProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectProfile, &SelectProfile_Parms, NULL );

	pFnSelectProfile->FunctionFlags |= 0x400;

	return SelectProfile_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnUpdateProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnUpdateProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnUpdateProfileDone = NULL;

	if ( ! pFnRemoveDelegate_OnUpdateProfileDone )
		pFnRemoveDelegate_OnUpdateProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35530 ];

	UPBItemShopClient_execRemoveDelegate_OnUpdateProfileDone_Parms RemoveDelegate_OnUpdateProfileDone_Parms;
	memcpy ( &RemoveDelegate_OnUpdateProfileDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnUpdateProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnUpdateProfileDone, &RemoveDelegate_OnUpdateProfileDone_Parms, NULL );

	return RemoveDelegate_OnUpdateProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnUpdateProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnUpdateProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnUpdateProfileDone = NULL;

	if ( ! pFnAddDelegate_OnUpdateProfileDone )
		pFnAddDelegate_OnUpdateProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35526 ];

	UPBItemShopClient_execAddDelegate_OnUpdateProfileDone_Parms AddDelegate_OnUpdateProfileDone_Parms;
	memcpy ( &AddDelegate_OnUpdateProfileDone_Parms.func, &func, 0xC );
	AddDelegate_OnUpdateProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnUpdateProfileDone, &AddDelegate_OnUpdateProfileDone_Parms, NULL );

	return AddDelegate_OnUpdateProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnUpdateProfileDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

void UPBItemShopClient::OnUpdateProfileDone ( int requestId, int ErrorCode, struct FGuid ProfileId )
{
	static UFunction* pFnOnUpdateProfileDone = NULL;

	if ( ! pFnOnUpdateProfileDone )
		pFnOnUpdateProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35522 ];

	UPBItemShopClient_execOnUpdateProfileDone_Parms OnUpdateProfileDone_Parms;
	OnUpdateProfileDone_Parms.requestId = requestId;
	OnUpdateProfileDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnUpdateProfileDone_Parms.ProfileId, &ProfileId, 0x10 );

	this->ProcessEvent ( pFnOnUpdateProfileDone, &OnUpdateProfileDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.UpdateProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// int                            avatarPicture                  ( CPF_Parm )

int UPBItemShopClient::eventUpdateProfile ( struct FGuid ProfileId, int avatarPicture )
{
	static UFunction* pFnUpdateProfile = NULL;

	if ( ! pFnUpdateProfile )
		pFnUpdateProfile = (UFunction*) UObject::GObjObjects()->Data[ 35518 ];

	UPBItemShopClient_eventUpdateProfile_Parms UpdateProfile_Parms;
	memcpy ( &UpdateProfile_Parms.ProfileId, &ProfileId, 0x10 );
	UpdateProfile_Parms.avatarPicture = avatarPicture;

	pFnUpdateProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateProfile, &UpdateProfile_Parms, NULL );

	pFnUpdateProfile->FunctionFlags |= 0x400;

	return UpdateProfile_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetProfileDetailsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetProfileDetailsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetProfileDetailsDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetProfileDetailsDone )
		pFnRemoveDelegate_OnGetProfileDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35514 ];

	UPBItemShopClient_execRemoveDelegate_OnGetProfileDetailsDone_Parms RemoveDelegate_OnGetProfileDetailsDone_Parms;
	memcpy ( &RemoveDelegate_OnGetProfileDetailsDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetProfileDetailsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetProfileDetailsDone, &RemoveDelegate_OnGetProfileDetailsDone_Parms, NULL );

	return RemoveDelegate_OnGetProfileDetailsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetProfileDetailsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetProfileDetailsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetProfileDetailsDone = NULL;

	if ( ! pFnAddDelegate_OnGetProfileDetailsDone )
		pFnAddDelegate_OnGetProfileDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35510 ];

	UPBItemShopClient_execAddDelegate_OnGetProfileDetailsDone_Parms AddDelegate_OnGetProfileDetailsDone_Parms;
	memcpy ( &AddDelegate_OnGetProfileDetailsDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetProfileDetailsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetProfileDetailsDone, &AddDelegate_OnGetProfileDetailsDone_Parms, NULL );

	return AddDelegate_OnGetProfileDetailsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetProfileDetailsDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// struct FString                 CharacterName                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FGuid                   characterGender                ( CPF_Parm )
// struct FGuid                   characterHead                  ( CPF_Parm )
// struct FGuid                   characterSkin                  ( CPF_Parm )
// int                            avatarPicture                  ( CPF_Parm )
// int                            Rank                           ( CPF_Parm )
// int                            xp                             ( CPF_Parm )
// float                          xpPercentage                   ( CPF_Parm )
// int                            credits                        ( CPF_Parm )
// int                            coolness                       ( CPF_Parm )
// int                            profileReputation              ( CPF_Parm )
// unsigned char                  accountLevel                   ( CPF_Parm )

void UPBItemShopClient::OnGetProfileDetailsDone ( int requestId, int ErrorCode, struct FGuid ProfileId, struct FString CharacterName, struct FGuid characterGender, struct FGuid characterHead, struct FGuid characterSkin, int avatarPicture, int Rank, int xp, float xpPercentage, int credits, int coolness, int profileReputation, unsigned char accountLevel )
{
	static UFunction* pFnOnGetProfileDetailsDone = NULL;

	if ( ! pFnOnGetProfileDetailsDone )
		pFnOnGetProfileDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35494 ];

	UPBItemShopClient_execOnGetProfileDetailsDone_Parms OnGetProfileDetailsDone_Parms;
	OnGetProfileDetailsDone_Parms.requestId = requestId;
	OnGetProfileDetailsDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetProfileDetailsDone_Parms.ProfileId, &ProfileId, 0x10 );
	memcpy ( &OnGetProfileDetailsDone_Parms.CharacterName, &CharacterName, 0xC );
	memcpy ( &OnGetProfileDetailsDone_Parms.characterGender, &characterGender, 0x10 );
	memcpy ( &OnGetProfileDetailsDone_Parms.characterHead, &characterHead, 0x10 );
	memcpy ( &OnGetProfileDetailsDone_Parms.characterSkin, &characterSkin, 0x10 );
	OnGetProfileDetailsDone_Parms.avatarPicture = avatarPicture;
	OnGetProfileDetailsDone_Parms.Rank = Rank;
	OnGetProfileDetailsDone_Parms.xp = xp;
	OnGetProfileDetailsDone_Parms.xpPercentage = xpPercentage;
	OnGetProfileDetailsDone_Parms.credits = credits;
	OnGetProfileDetailsDone_Parms.coolness = coolness;
	OnGetProfileDetailsDone_Parms.profileReputation = profileReputation;
	OnGetProfileDetailsDone_Parms.accountLevel = accountLevel;

	this->ProcessEvent ( pFnOnGetProfileDetailsDone, &OnGetProfileDetailsDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetProfileDetails
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

int UPBItemShopClient::eventGetProfileDetails ( struct FGuid ProfileId )
{
	static UFunction* pFnGetProfileDetails = NULL;

	if ( ! pFnGetProfileDetails )
		pFnGetProfileDetails = (UFunction*) UObject::GObjObjects()->Data[ 35491 ];

	UPBItemShopClient_eventGetProfileDetails_Parms GetProfileDetails_Parms;
	memcpy ( &GetProfileDetails_Parms.ProfileId, &ProfileId, 0x10 );

	pFnGetProfileDetails->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProfileDetails, &GetProfileDetails_Parms, NULL );

	pFnGetProfileDetails->FunctionFlags |= 0x400;

	return GetProfileDetails_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetProfilesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetProfilesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetProfilesDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetProfilesDone )
		pFnRemoveDelegate_OnGetProfilesDone = (UFunction*) UObject::GObjObjects()->Data[ 35487 ];

	UPBItemShopClient_execRemoveDelegate_OnGetProfilesDone_Parms RemoveDelegate_OnGetProfilesDone_Parms;
	memcpy ( &RemoveDelegate_OnGetProfilesDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetProfilesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetProfilesDone, &RemoveDelegate_OnGetProfilesDone_Parms, NULL );

	return RemoveDelegate_OnGetProfilesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetProfilesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetProfilesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetProfilesDone = NULL;

	if ( ! pFnAddDelegate_OnGetProfilesDone )
		pFnAddDelegate_OnGetProfilesDone = (UFunction*) UObject::GObjObjects()->Data[ 35483 ];

	UPBItemShopClient_execAddDelegate_OnGetProfilesDone_Parms AddDelegate_OnGetProfilesDone_Parms;
	memcpy ( &AddDelegate_OnGetProfilesDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetProfilesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetProfilesDone, &AddDelegate_OnGetProfilesDone_Parms, NULL );

	return AddDelegate_OnGetProfilesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetProfilesDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBProfile >    Profiles                       ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetProfilesDone ( int requestId, int ErrorCode, TArray< struct FPBProfile > Profiles )
{
	static UFunction* pFnOnGetProfilesDone = NULL;

	if ( ! pFnOnGetProfilesDone )
		pFnOnGetProfilesDone = (UFunction*) UObject::GObjObjects()->Data[ 35478 ];

	UPBItemShopClient_execOnGetProfilesDone_Parms OnGetProfilesDone_Parms;
	OnGetProfilesDone_Parms.requestId = requestId;
	OnGetProfilesDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetProfilesDone_Parms.Profiles, &Profiles, 0xC );

	this->ProcessEvent ( pFnOnGetProfilesDone, &OnGetProfilesDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetProfiles
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetProfiles ( )
{
	static UFunction* pFnGetProfiles = NULL;

	if ( ! pFnGetProfiles )
		pFnGetProfiles = (UFunction*) UObject::GObjObjects()->Data[ 35476 ];

	UPBItemShopClient_eventGetProfiles_Parms GetProfiles_Parms;

	pFnGetProfiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProfiles, &GetProfiles_Parms, NULL );

	pFnGetProfiles->FunctionFlags |= 0x400;

	return GetProfiles_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnCreateProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnCreateProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnCreateProfileDone = NULL;

	if ( ! pFnRemoveDelegate_OnCreateProfileDone )
		pFnRemoveDelegate_OnCreateProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35472 ];

	UPBItemShopClient_execRemoveDelegate_OnCreateProfileDone_Parms RemoveDelegate_OnCreateProfileDone_Parms;
	memcpy ( &RemoveDelegate_OnCreateProfileDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnCreateProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnCreateProfileDone, &RemoveDelegate_OnCreateProfileDone_Parms, NULL );

	return RemoveDelegate_OnCreateProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnCreateProfileDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnCreateProfileDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnCreateProfileDone = NULL;

	if ( ! pFnAddDelegate_OnCreateProfileDone )
		pFnAddDelegate_OnCreateProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35468 ];

	UPBItemShopClient_execAddDelegate_OnCreateProfileDone_Parms AddDelegate_OnCreateProfileDone_Parms;
	memcpy ( &AddDelegate_OnCreateProfileDone_Parms.func, &func, 0xC );
	AddDelegate_OnCreateProfileDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnCreateProfileDone, &AddDelegate_OnCreateProfileDone_Parms, NULL );

	return AddDelegate_OnCreateProfileDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnCreateProfileDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

void UPBItemShopClient::OnCreateProfileDone ( int requestId, int ErrorCode, struct FGuid ProfileId )
{
	static UFunction* pFnOnCreateProfileDone = NULL;

	if ( ! pFnOnCreateProfileDone )
		pFnOnCreateProfileDone = (UFunction*) UObject::GObjObjects()->Data[ 35464 ];

	UPBItemShopClient_execOnCreateProfileDone_Parms OnCreateProfileDone_Parms;
	OnCreateProfileDone_Parms.requestId = requestId;
	OnCreateProfileDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnCreateProfileDone_Parms.ProfileId, &ProfileId, 0x10 );

	this->ProcessEvent ( pFnOnCreateProfileDone, &OnCreateProfileDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.CreateProfile
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 CharacterName                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FGuid                   characterGender                ( CPF_Parm )
// struct FGuid                   characterHead                  ( CPF_Parm )
// struct FGuid                   characterSkin                  ( CPF_Parm )
// int                            avatarPicture                  ( CPF_Parm )

int UPBItemShopClient::eventCreateProfile ( struct FString CharacterName, struct FGuid characterGender, struct FGuid characterHead, struct FGuid characterSkin, int avatarPicture )
{
	static UFunction* pFnCreateProfile = NULL;

	if ( ! pFnCreateProfile )
		pFnCreateProfile = (UFunction*) UObject::GObjObjects()->Data[ 35457 ];

	UPBItemShopClient_eventCreateProfile_Parms CreateProfile_Parms;
	memcpy ( &CreateProfile_Parms.CharacterName, &CharacterName, 0xC );
	memcpy ( &CreateProfile_Parms.characterGender, &characterGender, 0x10 );
	memcpy ( &CreateProfile_Parms.characterHead, &characterHead, 0x10 );
	memcpy ( &CreateProfile_Parms.characterSkin, &characterSkin, 0x10 );
	CreateProfile_Parms.avatarPicture = avatarPicture;

	pFnCreateProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateProfile, &CreateProfile_Parms, NULL );

	pFnCreateProfile->FunctionFlags |= 0x400;

	return CreateProfile_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnIsValidNameDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnIsValidNameDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnIsValidNameDone = NULL;

	if ( ! pFnRemoveDelegate_OnIsValidNameDone )
		pFnRemoveDelegate_OnIsValidNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35453 ];

	UPBItemShopClient_execRemoveDelegate_OnIsValidNameDone_Parms RemoveDelegate_OnIsValidNameDone_Parms;
	memcpy ( &RemoveDelegate_OnIsValidNameDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnIsValidNameDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnIsValidNameDone, &RemoveDelegate_OnIsValidNameDone_Parms, NULL );

	return RemoveDelegate_OnIsValidNameDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnIsValidNameDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnIsValidNameDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnIsValidNameDone = NULL;

	if ( ! pFnAddDelegate_OnIsValidNameDone )
		pFnAddDelegate_OnIsValidNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35449 ];

	UPBItemShopClient_execAddDelegate_OnIsValidNameDone_Parms AddDelegate_OnIsValidNameDone_Parms;
	memcpy ( &AddDelegate_OnIsValidNameDone_Parms.func, &func, 0xC );
	AddDelegate_OnIsValidNameDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnIsValidNameDone, &AddDelegate_OnIsValidNameDone_Parms, NULL );

	return AddDelegate_OnIsValidNameDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnIsValidNameDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// unsigned long                  Valid                          ( CPF_Parm )

void UPBItemShopClient::OnIsValidNameDone ( int requestId, int ErrorCode, unsigned long Valid )
{
	static UFunction* pFnOnIsValidNameDone = NULL;

	if ( ! pFnOnIsValidNameDone )
		pFnOnIsValidNameDone = (UFunction*) UObject::GObjObjects()->Data[ 35445 ];

	UPBItemShopClient_execOnIsValidNameDone_Parms OnIsValidNameDone_Parms;
	OnIsValidNameDone_Parms.requestId = requestId;
	OnIsValidNameDone_Parms.ErrorCode = ErrorCode;
	OnIsValidNameDone_Parms.Valid = Valid;

	this->ProcessEvent ( pFnOnIsValidNameDone, &OnIsValidNameDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.IsValidName
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 checkName                      ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventIsValidName ( struct FString checkName )
{
	static UFunction* pFnIsValidName = NULL;

	if ( ! pFnIsValidName )
		pFnIsValidName = (UFunction*) UObject::GObjObjects()->Data[ 35442 ];

	UPBItemShopClient_eventIsValidName_Parms IsValidName_Parms;
	memcpy ( &IsValidName_Parms.checkName, &checkName, 0xC );

	pFnIsValidName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsValidName, &IsValidName_Parms, NULL );

	pFnIsValidName->FunctionFlags |= 0x400;

	return IsValidName_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnIsCharacterNameAvailableDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnIsCharacterNameAvailableDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnIsCharacterNameAvailableDone = NULL;

	if ( ! pFnRemoveDelegate_OnIsCharacterNameAvailableDone )
		pFnRemoveDelegate_OnIsCharacterNameAvailableDone = (UFunction*) UObject::GObjObjects()->Data[ 35438 ];

	UPBItemShopClient_execRemoveDelegate_OnIsCharacterNameAvailableDone_Parms RemoveDelegate_OnIsCharacterNameAvailableDone_Parms;
	memcpy ( &RemoveDelegate_OnIsCharacterNameAvailableDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnIsCharacterNameAvailableDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnIsCharacterNameAvailableDone, &RemoveDelegate_OnIsCharacterNameAvailableDone_Parms, NULL );

	return RemoveDelegate_OnIsCharacterNameAvailableDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnIsCharacterNameAvailableDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnIsCharacterNameAvailableDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnIsCharacterNameAvailableDone = NULL;

	if ( ! pFnAddDelegate_OnIsCharacterNameAvailableDone )
		pFnAddDelegate_OnIsCharacterNameAvailableDone = (UFunction*) UObject::GObjObjects()->Data[ 35434 ];

	UPBItemShopClient_execAddDelegate_OnIsCharacterNameAvailableDone_Parms AddDelegate_OnIsCharacterNameAvailableDone_Parms;
	memcpy ( &AddDelegate_OnIsCharacterNameAvailableDone_Parms.func, &func, 0xC );
	AddDelegate_OnIsCharacterNameAvailableDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnIsCharacterNameAvailableDone, &AddDelegate_OnIsCharacterNameAvailableDone_Parms, NULL );

	return AddDelegate_OnIsCharacterNameAvailableDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnIsCharacterNameAvailableDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// unsigned long                  available                      ( CPF_Parm )

void UPBItemShopClient::OnIsCharacterNameAvailableDone ( int requestId, int ErrorCode, unsigned long available )
{
	static UFunction* pFnOnIsCharacterNameAvailableDone = NULL;

	if ( ! pFnOnIsCharacterNameAvailableDone )
		pFnOnIsCharacterNameAvailableDone = (UFunction*) UObject::GObjObjects()->Data[ 35430 ];

	UPBItemShopClient_execOnIsCharacterNameAvailableDone_Parms OnIsCharacterNameAvailableDone_Parms;
	OnIsCharacterNameAvailableDone_Parms.requestId = requestId;
	OnIsCharacterNameAvailableDone_Parms.ErrorCode = ErrorCode;
	OnIsCharacterNameAvailableDone_Parms.available = available;

	this->ProcessEvent ( pFnOnIsCharacterNameAvailableDone, &OnIsCharacterNameAvailableDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.IsCharacterNameAvailable
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 CharacterName                  ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventIsCharacterNameAvailable ( struct FString CharacterName )
{
	static UFunction* pFnIsCharacterNameAvailable = NULL;

	if ( ! pFnIsCharacterNameAvailable )
		pFnIsCharacterNameAvailable = (UFunction*) UObject::GObjObjects()->Data[ 35427 ];

	UPBItemShopClient_eventIsCharacterNameAvailable_Parms IsCharacterNameAvailable_Parms;
	memcpy ( &IsCharacterNameAvailable_Parms.CharacterName, &CharacterName, 0xC );

	pFnIsCharacterNameAvailable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCharacterNameAvailable, &IsCharacterNameAvailable_Parms, NULL );

	pFnIsCharacterNameAvailable->FunctionFlags |= 0x400;

	return IsCharacterNameAvailable_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSetPresetItemDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnSetPresetItemDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnSetPresetItemDone = NULL;

	if ( ! pFnRemoveDelegate_OnSetPresetItemDone )
		pFnRemoveDelegate_OnSetPresetItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35423 ];

	UPBItemShopClient_execRemoveDelegate_OnSetPresetItemDone_Parms RemoveDelegate_OnSetPresetItemDone_Parms;
	memcpy ( &RemoveDelegate_OnSetPresetItemDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnSetPresetItemDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnSetPresetItemDone, &RemoveDelegate_OnSetPresetItemDone_Parms, NULL );

	return RemoveDelegate_OnSetPresetItemDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSetPresetItemDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnSetPresetItemDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnSetPresetItemDone = NULL;

	if ( ! pFnAddDelegate_OnSetPresetItemDone )
		pFnAddDelegate_OnSetPresetItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35419 ];

	UPBItemShopClient_execAddDelegate_OnSetPresetItemDone_Parms AddDelegate_OnSetPresetItemDone_Parms;
	memcpy ( &AddDelegate_OnSetPresetItemDone_Parms.func, &func, 0xC );
	AddDelegate_OnSetPresetItemDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnSetPresetItemDone, &AddDelegate_OnSetPresetItemDone_Parms, NULL );

	return AddDelegate_OnSetPresetItemDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnSetPresetItemDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnSetPresetItemDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnSetPresetItemDone = NULL;

	if ( ! pFnOnSetPresetItemDone )
		pFnOnSetPresetItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35416 ];

	UPBItemShopClient_execOnSetPresetItemDone_Parms OnSetPresetItemDone_Parms;
	OnSetPresetItemDone_Parms.requestId = requestId;
	OnSetPresetItemDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnSetPresetItemDone, &OnSetPresetItemDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.SetPresetItem
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FGuid >         serialNumber                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< int >                  Preset                         ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventSetPresetItem ( TArray< struct FGuid > serialNumber, TArray< int > Preset )
{
	static UFunction* pFnSetPresetItem = NULL;

	if ( ! pFnSetPresetItem )
		pFnSetPresetItem = (UFunction*) UObject::GObjObjects()->Data[ 35410 ];

	UPBItemShopClient_eventSetPresetItem_Parms SetPresetItem_Parms;
	memcpy ( &SetPresetItem_Parms.serialNumber, &serialNumber, 0xC );
	memcpy ( &SetPresetItem_Parms.Preset, &Preset, 0xC );

	pFnSetPresetItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPresetItem, &SetPresetItem_Parms, NULL );

	pFnSetPresetItem->FunctionFlags |= 0x400;

	return SetPresetItem_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnRepairInventoryItemDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnRepairInventoryItemDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnRepairInventoryItemDone = NULL;

	if ( ! pFnRemoveDelegate_OnRepairInventoryItemDone )
		pFnRemoveDelegate_OnRepairInventoryItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35406 ];

	UPBItemShopClient_execRemoveDelegate_OnRepairInventoryItemDone_Parms RemoveDelegate_OnRepairInventoryItemDone_Parms;
	memcpy ( &RemoveDelegate_OnRepairInventoryItemDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnRepairInventoryItemDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnRepairInventoryItemDone, &RemoveDelegate_OnRepairInventoryItemDone_Parms, NULL );

	return RemoveDelegate_OnRepairInventoryItemDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnRepairInventoryItemDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnRepairInventoryItemDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnRepairInventoryItemDone = NULL;

	if ( ! pFnAddDelegate_OnRepairInventoryItemDone )
		pFnAddDelegate_OnRepairInventoryItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35402 ];

	UPBItemShopClient_execAddDelegate_OnRepairInventoryItemDone_Parms AddDelegate_OnRepairInventoryItemDone_Parms;
	memcpy ( &AddDelegate_OnRepairInventoryItemDone_Parms.func, &func, 0xC );
	AddDelegate_OnRepairInventoryItemDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnRepairInventoryItemDone, &AddDelegate_OnRepairInventoryItemDone_Parms, NULL );

	return AddDelegate_OnRepairInventoryItemDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnRepairInventoryItemDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   serialNumber                   ( CPF_Parm )

void UPBItemShopClient::OnRepairInventoryItemDone ( int requestId, int ErrorCode, struct FGuid serialNumber )
{
	static UFunction* pFnOnRepairInventoryItemDone = NULL;

	if ( ! pFnOnRepairInventoryItemDone )
		pFnOnRepairInventoryItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35398 ];

	UPBItemShopClient_execOnRepairInventoryItemDone_Parms OnRepairInventoryItemDone_Parms;
	OnRepairInventoryItemDone_Parms.requestId = requestId;
	OnRepairInventoryItemDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnRepairInventoryItemDone_Parms.serialNumber, &serialNumber, 0x10 );

	this->ProcessEvent ( pFnOnRepairInventoryItemDone, &OnRepairInventoryItemDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.RepairInventoryItem
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   serialNumber                   ( CPF_Parm )
// struct FString                 currency                       ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventRepairInventoryItem ( struct FGuid serialNumber, struct FString currency )
{
	static UFunction* pFnRepairInventoryItem = NULL;

	if ( ! pFnRepairInventoryItem )
		pFnRepairInventoryItem = (UFunction*) UObject::GObjObjects()->Data[ 35394 ];

	UPBItemShopClient_eventRepairInventoryItem_Parms RepairInventoryItem_Parms;
	memcpy ( &RepairInventoryItem_Parms.serialNumber, &serialNumber, 0x10 );
	memcpy ( &RepairInventoryItem_Parms.currency, &currency, 0xC );

	pFnRepairInventoryItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRepairInventoryItem, &RepairInventoryItem_Parms, NULL );

	pFnRepairInventoryItem->FunctionFlags |= 0x400;

	return RepairInventoryItem_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDeleteInventoryItemDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnDeleteInventoryItemDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnDeleteInventoryItemDone = NULL;

	if ( ! pFnRemoveDelegate_OnDeleteInventoryItemDone )
		pFnRemoveDelegate_OnDeleteInventoryItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35390 ];

	UPBItemShopClient_execRemoveDelegate_OnDeleteInventoryItemDone_Parms RemoveDelegate_OnDeleteInventoryItemDone_Parms;
	memcpy ( &RemoveDelegate_OnDeleteInventoryItemDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnDeleteInventoryItemDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnDeleteInventoryItemDone, &RemoveDelegate_OnDeleteInventoryItemDone_Parms, NULL );

	return RemoveDelegate_OnDeleteInventoryItemDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDeleteInventoryItemDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnDeleteInventoryItemDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnDeleteInventoryItemDone = NULL;

	if ( ! pFnAddDelegate_OnDeleteInventoryItemDone )
		pFnAddDelegate_OnDeleteInventoryItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35386 ];

	UPBItemShopClient_execAddDelegate_OnDeleteInventoryItemDone_Parms AddDelegate_OnDeleteInventoryItemDone_Parms;
	memcpy ( &AddDelegate_OnDeleteInventoryItemDone_Parms.func, &func, 0xC );
	AddDelegate_OnDeleteInventoryItemDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnDeleteInventoryItemDone, &AddDelegate_OnDeleteInventoryItemDone_Parms, NULL );

	return AddDelegate_OnDeleteInventoryItemDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnDeleteInventoryItemDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   serialNumber                   ( CPF_Parm )

void UPBItemShopClient::OnDeleteInventoryItemDone ( int requestId, int ErrorCode, struct FGuid serialNumber )
{
	static UFunction* pFnOnDeleteInventoryItemDone = NULL;

	if ( ! pFnOnDeleteInventoryItemDone )
		pFnOnDeleteInventoryItemDone = (UFunction*) UObject::GObjObjects()->Data[ 35382 ];

	UPBItemShopClient_execOnDeleteInventoryItemDone_Parms OnDeleteInventoryItemDone_Parms;
	OnDeleteInventoryItemDone_Parms.requestId = requestId;
	OnDeleteInventoryItemDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnDeleteInventoryItemDone_Parms.serialNumber, &serialNumber, 0x10 );

	this->ProcessEvent ( pFnOnDeleteInventoryItemDone, &OnDeleteInventoryItemDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.DeleteInventoryItem
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   serialNumber                   ( CPF_Parm )

int UPBItemShopClient::eventDeleteInventoryItem ( struct FGuid serialNumber )
{
	static UFunction* pFnDeleteInventoryItem = NULL;

	if ( ! pFnDeleteInventoryItem )
		pFnDeleteInventoryItem = (UFunction*) UObject::GObjObjects()->Data[ 35379 ];

	UPBItemShopClient_eventDeleteInventoryItem_Parms DeleteInventoryItem_Parms;
	memcpy ( &DeleteInventoryItem_Parms.serialNumber, &serialNumber, 0x10 );

	pFnDeleteInventoryItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteInventoryItem, &DeleteInventoryItem_Parms, NULL );

	pFnDeleteInventoryItem->FunctionFlags |= 0x400;

	return DeleteInventoryItem_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetInventoryItemDetailsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetInventoryItemDetailsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetInventoryItemDetailsDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetInventoryItemDetailsDone )
		pFnRemoveDelegate_OnGetInventoryItemDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35375 ];

	UPBItemShopClient_execRemoveDelegate_OnGetInventoryItemDetailsDone_Parms RemoveDelegate_OnGetInventoryItemDetailsDone_Parms;
	memcpy ( &RemoveDelegate_OnGetInventoryItemDetailsDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetInventoryItemDetailsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetInventoryItemDetailsDone, &RemoveDelegate_OnGetInventoryItemDetailsDone_Parms, NULL );

	return RemoveDelegate_OnGetInventoryItemDetailsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetInventoryItemDetailsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetInventoryItemDetailsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetInventoryItemDetailsDone = NULL;

	if ( ! pFnAddDelegate_OnGetInventoryItemDetailsDone )
		pFnAddDelegate_OnGetInventoryItemDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35371 ];

	UPBItemShopClient_execAddDelegate_OnGetInventoryItemDetailsDone_Parms AddDelegate_OnGetInventoryItemDetailsDone_Parms;
	memcpy ( &AddDelegate_OnGetInventoryItemDetailsDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetInventoryItemDetailsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetInventoryItemDetailsDone, &AddDelegate_OnGetInventoryItemDetailsDone_Parms, NULL );

	return AddDelegate_OnGetInventoryItemDetailsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetInventoryItemDetailsDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   itemId                         ( CPF_Parm )
// struct FString                 itemDescription                ( CPF_Parm | CPF_NeedCtorLink )
// int                            XpBoost                        ( CPF_Parm )
// int                            creditBoost                    ( CPF_Parm )
// int                            groupXpBoost                   ( CPF_Parm )
// int                            groupIgcBoost                  ( CPF_Parm )
// struct FGuid                   serialNumber                   ( CPF_Parm )
// struct FPBDate                 purchaseDate                   ( CPF_Parm )
// int                            condition                      ( CPF_Parm )
// int                            maxCondition                   ( CPF_Parm )
// int                            idealCondition                 ( CPF_Parm )
// int                            timeInUse                      ( CPF_Parm )
// int                            repairCostsCoins               ( CPF_Parm )
// int                            repairCostsCredits             ( CPF_Parm )

void UPBItemShopClient::OnGetInventoryItemDetailsDone ( int requestId, int ErrorCode, struct FGuid itemId, struct FString itemDescription, int XpBoost, int creditBoost, int groupXpBoost, int groupIgcBoost, struct FGuid serialNumber, struct FPBDate purchaseDate, int condition, int maxCondition, int idealCondition, int timeInUse, int repairCostsCoins, int repairCostsCredits )
{
	static UFunction* pFnOnGetInventoryItemDetailsDone = NULL;

	if ( ! pFnOnGetInventoryItemDetailsDone )
		pFnOnGetInventoryItemDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35354 ];

	UPBItemShopClient_execOnGetInventoryItemDetailsDone_Parms OnGetInventoryItemDetailsDone_Parms;
	OnGetInventoryItemDetailsDone_Parms.requestId = requestId;
	OnGetInventoryItemDetailsDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetInventoryItemDetailsDone_Parms.itemId, &itemId, 0x10 );
	memcpy ( &OnGetInventoryItemDetailsDone_Parms.itemDescription, &itemDescription, 0xC );
	OnGetInventoryItemDetailsDone_Parms.XpBoost = XpBoost;
	OnGetInventoryItemDetailsDone_Parms.creditBoost = creditBoost;
	OnGetInventoryItemDetailsDone_Parms.groupXpBoost = groupXpBoost;
	OnGetInventoryItemDetailsDone_Parms.groupIgcBoost = groupIgcBoost;
	memcpy ( &OnGetInventoryItemDetailsDone_Parms.serialNumber, &serialNumber, 0x10 );
	memcpy ( &OnGetInventoryItemDetailsDone_Parms.purchaseDate, &purchaseDate, 0x14 );
	OnGetInventoryItemDetailsDone_Parms.condition = condition;
	OnGetInventoryItemDetailsDone_Parms.maxCondition = maxCondition;
	OnGetInventoryItemDetailsDone_Parms.idealCondition = idealCondition;
	OnGetInventoryItemDetailsDone_Parms.timeInUse = timeInUse;
	OnGetInventoryItemDetailsDone_Parms.repairCostsCoins = repairCostsCoins;
	OnGetInventoryItemDetailsDone_Parms.repairCostsCredits = repairCostsCredits;

	this->ProcessEvent ( pFnOnGetInventoryItemDetailsDone, &OnGetInventoryItemDetailsDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetInventoryItemDetails
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   serialNumber                   ( CPF_Parm )

int UPBItemShopClient::eventGetInventoryItemDetails ( struct FGuid serialNumber )
{
	static UFunction* pFnGetInventoryItemDetails = NULL;

	if ( ! pFnGetInventoryItemDetails )
		pFnGetInventoryItemDetails = (UFunction*) UObject::GObjObjects()->Data[ 35351 ];

	UPBItemShopClient_eventGetInventoryItemDetails_Parms GetInventoryItemDetails_Parms;
	memcpy ( &GetInventoryItemDetails_Parms.serialNumber, &serialNumber, 0x10 );

	pFnGetInventoryItemDetails->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInventoryItemDetails, &GetInventoryItemDetails_Parms, NULL );

	pFnGetInventoryItemDetails->FunctionFlags |= 0x400;

	return GetInventoryItemDetails_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetLatestInventoryEntriesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetLatestInventoryEntriesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetLatestInventoryEntriesDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetLatestInventoryEntriesDone )
		pFnRemoveDelegate_OnGetLatestInventoryEntriesDone = (UFunction*) UObject::GObjObjects()->Data[ 35347 ];

	UPBItemShopClient_execRemoveDelegate_OnGetLatestInventoryEntriesDone_Parms RemoveDelegate_OnGetLatestInventoryEntriesDone_Parms;
	memcpy ( &RemoveDelegate_OnGetLatestInventoryEntriesDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetLatestInventoryEntriesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetLatestInventoryEntriesDone, &RemoveDelegate_OnGetLatestInventoryEntriesDone_Parms, NULL );

	return RemoveDelegate_OnGetLatestInventoryEntriesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetLatestInventoryEntriesDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetLatestInventoryEntriesDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetLatestInventoryEntriesDone = NULL;

	if ( ! pFnAddDelegate_OnGetLatestInventoryEntriesDone )
		pFnAddDelegate_OnGetLatestInventoryEntriesDone = (UFunction*) UObject::GObjObjects()->Data[ 35343 ];

	UPBItemShopClient_execAddDelegate_OnGetLatestInventoryEntriesDone_Parms AddDelegate_OnGetLatestInventoryEntriesDone_Parms;
	memcpy ( &AddDelegate_OnGetLatestInventoryEntriesDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetLatestInventoryEntriesDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetLatestInventoryEntriesDone, &AddDelegate_OnGetLatestInventoryEntriesDone_Parms, NULL );

	return AddDelegate_OnGetLatestInventoryEntriesDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetLatestInventoryEntriesDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBItem >       items                          ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetLatestInventoryEntriesDone ( int requestId, int ErrorCode, TArray< struct FPBItem > items )
{
	static UFunction* pFnOnGetLatestInventoryEntriesDone = NULL;

	if ( ! pFnOnGetLatestInventoryEntriesDone )
		pFnOnGetLatestInventoryEntriesDone = (UFunction*) UObject::GObjObjects()->Data[ 35338 ];

	UPBItemShopClient_execOnGetLatestInventoryEntriesDone_Parms OnGetLatestInventoryEntriesDone_Parms;
	OnGetLatestInventoryEntriesDone_Parms.requestId = requestId;
	OnGetLatestInventoryEntriesDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetLatestInventoryEntriesDone_Parms.items, &items, 0xC );

	this->ProcessEvent ( pFnOnGetLatestInventoryEntriesDone, &OnGetLatestInventoryEntriesDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetLatestInventoryEntries
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )

int UPBItemShopClient::eventGetLatestInventoryEntries ( int Amount )
{
	static UFunction* pFnGetLatestInventoryEntries = NULL;

	if ( ! pFnGetLatestInventoryEntries )
		pFnGetLatestInventoryEntries = (UFunction*) UObject::GObjObjects()->Data[ 35335 ];

	UPBItemShopClient_eventGetLatestInventoryEntries_Parms GetLatestInventoryEntries_Parms;
	GetLatestInventoryEntries_Parms.Amount = Amount;

	pFnGetLatestInventoryEntries->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLatestInventoryEntries, &GetLatestInventoryEntries_Parms, NULL );

	pFnGetLatestInventoryEntries->FunctionFlags |= 0x400;

	return GetLatestInventoryEntries_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetInventoryDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetInventoryDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetInventoryDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetInventoryDone )
		pFnRemoveDelegate_OnGetInventoryDone = (UFunction*) UObject::GObjObjects()->Data[ 35331 ];

	UPBItemShopClient_execRemoveDelegate_OnGetInventoryDone_Parms RemoveDelegate_OnGetInventoryDone_Parms;
	memcpy ( &RemoveDelegate_OnGetInventoryDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetInventoryDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetInventoryDone, &RemoveDelegate_OnGetInventoryDone_Parms, NULL );

	return RemoveDelegate_OnGetInventoryDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetInventoryDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetInventoryDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetInventoryDone = NULL;

	if ( ! pFnAddDelegate_OnGetInventoryDone )
		pFnAddDelegate_OnGetInventoryDone = (UFunction*) UObject::GObjObjects()->Data[ 35327 ];

	UPBItemShopClient_execAddDelegate_OnGetInventoryDone_Parms AddDelegate_OnGetInventoryDone_Parms;
	memcpy ( &AddDelegate_OnGetInventoryDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetInventoryDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetInventoryDone, &AddDelegate_OnGetInventoryDone_Parms, NULL );

	return AddDelegate_OnGetInventoryDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetInventoryDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBItem >       items                          ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetInventoryDone ( int requestId, int ErrorCode, TArray< struct FPBItem > items )
{
	static UFunction* pFnOnGetInventoryDone = NULL;

	if ( ! pFnOnGetInventoryDone )
		pFnOnGetInventoryDone = (UFunction*) UObject::GObjObjects()->Data[ 35322 ];

	UPBItemShopClient_execOnGetInventoryDone_Parms OnGetInventoryDone_Parms;
	OnGetInventoryDone_Parms.requestId = requestId;
	OnGetInventoryDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetInventoryDone_Parms.items, &items, 0xC );

	this->ProcessEvent ( pFnOnGetInventoryDone, &OnGetInventoryDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetInventory
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Category                       ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventGetInventory ( struct FString Category )
{
	static UFunction* pFnGetInventory = NULL;

	if ( ! pFnGetInventory )
		pFnGetInventory = (UFunction*) UObject::GObjObjects()->Data[ 35319 ];

	UPBItemShopClient_eventGetInventory_Parms GetInventory_Parms;
	memcpy ( &GetInventory_Parms.Category, &Category, 0xC );

	pFnGetInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInventory, &GetInventory_Parms, NULL );

	pFnGetInventory->FunctionFlags |= 0x400;

	return GetInventory_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetAmountDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetAmountDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetAmountDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetAmountDone )
		pFnRemoveDelegate_OnGetAmountDone = (UFunction*) UObject::GObjObjects()->Data[ 35315 ];

	UPBItemShopClient_execRemoveDelegate_OnGetAmountDone_Parms RemoveDelegate_OnGetAmountDone_Parms;
	memcpy ( &RemoveDelegate_OnGetAmountDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetAmountDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetAmountDone, &RemoveDelegate_OnGetAmountDone_Parms, NULL );

	return RemoveDelegate_OnGetAmountDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetAmountDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetAmountDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetAmountDone = NULL;

	if ( ! pFnAddDelegate_OnGetAmountDone )
		pFnAddDelegate_OnGetAmountDone = (UFunction*) UObject::GObjObjects()->Data[ 35311 ];

	UPBItemShopClient_execAddDelegate_OnGetAmountDone_Parms AddDelegate_OnGetAmountDone_Parms;
	memcpy ( &AddDelegate_OnGetAmountDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetAmountDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetAmountDone, &AddDelegate_OnGetAmountDone_Parms, NULL );

	return AddDelegate_OnGetAmountDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetAmountDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// int                            Amount                         ( CPF_Parm )

void UPBItemShopClient::OnGetAmountDone ( int requestId, int ErrorCode, int Amount )
{
	static UFunction* pFnOnGetAmountDone = NULL;

	if ( ! pFnOnGetAmountDone )
		pFnOnGetAmountDone = (UFunction*) UObject::GObjObjects()->Data[ 35307 ];

	UPBItemShopClient_execOnGetAmountDone_Parms OnGetAmountDone_Parms;
	OnGetAmountDone_Parms.requestId = requestId;
	OnGetAmountDone_Parms.ErrorCode = ErrorCode;
	OnGetAmountDone_Parms.Amount = Amount;

	this->ProcessEvent ( pFnOnGetAmountDone, &OnGetAmountDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetAmount
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 currency                       ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventGetAmount ( struct FString currency )
{
	static UFunction* pFnGetAmount = NULL;

	if ( ! pFnGetAmount )
		pFnGetAmount = (UFunction*) UObject::GObjObjects()->Data[ 35304 ];

	UPBItemShopClient_eventGetAmount_Parms GetAmount_Parms;
	memcpy ( &GetAmount_Parms.currency, &currency, 0xC );

	pFnGetAmount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAmount, &GetAmount_Parms, NULL );

	pFnGetAmount->FunctionFlags |= 0x400;

	return GetAmount_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnBuyOfferDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnBuyOfferDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnBuyOfferDone = NULL;

	if ( ! pFnRemoveDelegate_OnBuyOfferDone )
		pFnRemoveDelegate_OnBuyOfferDone = (UFunction*) UObject::GObjObjects()->Data[ 35300 ];

	UPBItemShopClient_execRemoveDelegate_OnBuyOfferDone_Parms RemoveDelegate_OnBuyOfferDone_Parms;
	memcpy ( &RemoveDelegate_OnBuyOfferDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnBuyOfferDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnBuyOfferDone, &RemoveDelegate_OnBuyOfferDone_Parms, NULL );

	return RemoveDelegate_OnBuyOfferDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnBuyOfferDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnBuyOfferDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnBuyOfferDone = NULL;

	if ( ! pFnAddDelegate_OnBuyOfferDone )
		pFnAddDelegate_OnBuyOfferDone = (UFunction*) UObject::GObjObjects()->Data[ 35296 ];

	UPBItemShopClient_execAddDelegate_OnBuyOfferDone_Parms AddDelegate_OnBuyOfferDone_Parms;
	memcpy ( &AddDelegate_OnBuyOfferDone_Parms.func, &func, 0xC );
	AddDelegate_OnBuyOfferDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnBuyOfferDone, &AddDelegate_OnBuyOfferDone_Parms, NULL );

	return AddDelegate_OnBuyOfferDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnBuyOfferDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopClient::OnBuyOfferDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnBuyOfferDone = NULL;

	if ( ! pFnOnBuyOfferDone )
		pFnOnBuyOfferDone = (UFunction*) UObject::GObjObjects()->Data[ 35293 ];

	UPBItemShopClient_execOnBuyOfferDone_Parms OnBuyOfferDone_Parms;
	OnBuyOfferDone_Parms.requestId = requestId;
	OnBuyOfferDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnBuyOfferDone, &OnBuyOfferDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.BuyOffer
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   OfferId                        ( CPF_Parm )
// int                            quantity                       ( CPF_Parm )
// int                            paymentOption                  ( CPF_Parm )

int UPBItemShopClient::eventBuyOffer ( struct FGuid OfferId, int quantity, int paymentOption )
{
	static UFunction* pFnBuyOffer = NULL;

	if ( ! pFnBuyOffer )
		pFnBuyOffer = (UFunction*) UObject::GObjObjects()->Data[ 35288 ];

	UPBItemShopClient_eventBuyOffer_Parms BuyOffer_Parms;
	memcpy ( &BuyOffer_Parms.OfferId, &OfferId, 0x10 );
	BuyOffer_Parms.quantity = quantity;
	BuyOffer_Parms.paymentOption = paymentOption;

	pFnBuyOffer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBuyOffer, &BuyOffer_Parms, NULL );

	pFnBuyOffer->FunctionFlags |= 0x400;

	return BuyOffer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetOfferDetailsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetOfferDetailsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetOfferDetailsDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetOfferDetailsDone )
		pFnRemoveDelegate_OnGetOfferDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35284 ];

	UPBItemShopClient_execRemoveDelegate_OnGetOfferDetailsDone_Parms RemoveDelegate_OnGetOfferDetailsDone_Parms;
	memcpy ( &RemoveDelegate_OnGetOfferDetailsDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetOfferDetailsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetOfferDetailsDone, &RemoveDelegate_OnGetOfferDetailsDone_Parms, NULL );

	return RemoveDelegate_OnGetOfferDetailsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetOfferDetailsDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetOfferDetailsDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetOfferDetailsDone = NULL;

	if ( ! pFnAddDelegate_OnGetOfferDetailsDone )
		pFnAddDelegate_OnGetOfferDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35280 ];

	UPBItemShopClient_execAddDelegate_OnGetOfferDetailsDone_Parms AddDelegate_OnGetOfferDetailsDone_Parms;
	memcpy ( &AddDelegate_OnGetOfferDetailsDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetOfferDetailsDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetOfferDetailsDone, &AddDelegate_OnGetOfferDetailsDone_Parms, NULL );

	return AddDelegate_OnGetOfferDetailsDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetOfferDetailsDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   OfferId                        ( CPF_Parm )
// struct FString                 offerDescription               ( CPF_Parm | CPF_NeedCtorLink )
// struct FGuid                   itemId                         ( CPF_Parm )
// struct FString                 itemDescription                ( CPF_Parm | CPF_NeedCtorLink )
// int                            XpBoost                        ( CPF_Parm )
// int                            creditBoost                    ( CPF_Parm )
// int                            groupXpBoost                   ( CPF_Parm )
// int                            groupIgcBoost                  ( CPF_Parm )

void UPBItemShopClient::OnGetOfferDetailsDone ( int requestId, int ErrorCode, struct FGuid OfferId, struct FString offerDescription, struct FGuid itemId, struct FString itemDescription, int XpBoost, int creditBoost, int groupXpBoost, int groupIgcBoost )
{
	static UFunction* pFnOnGetOfferDetailsDone = NULL;

	if ( ! pFnOnGetOfferDetailsDone )
		pFnOnGetOfferDetailsDone = (UFunction*) UObject::GObjObjects()->Data[ 35269 ];

	UPBItemShopClient_execOnGetOfferDetailsDone_Parms OnGetOfferDetailsDone_Parms;
	OnGetOfferDetailsDone_Parms.requestId = requestId;
	OnGetOfferDetailsDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetOfferDetailsDone_Parms.OfferId, &OfferId, 0x10 );
	memcpy ( &OnGetOfferDetailsDone_Parms.offerDescription, &offerDescription, 0xC );
	memcpy ( &OnGetOfferDetailsDone_Parms.itemId, &itemId, 0x10 );
	memcpy ( &OnGetOfferDetailsDone_Parms.itemDescription, &itemDescription, 0xC );
	OnGetOfferDetailsDone_Parms.XpBoost = XpBoost;
	OnGetOfferDetailsDone_Parms.creditBoost = creditBoost;
	OnGetOfferDetailsDone_Parms.groupXpBoost = groupXpBoost;
	OnGetOfferDetailsDone_Parms.groupIgcBoost = groupIgcBoost;

	this->ProcessEvent ( pFnOnGetOfferDetailsDone, &OnGetOfferDetailsDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetOfferDetails
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   OfferId                        ( CPF_Parm )

int UPBItemShopClient::eventGetOfferDetails ( struct FGuid OfferId )
{
	static UFunction* pFnGetOfferDetails = NULL;

	if ( ! pFnGetOfferDetails )
		pFnGetOfferDetails = (UFunction*) UObject::GObjObjects()->Data[ 35266 ];

	UPBItemShopClient_eventGetOfferDetails_Parms GetOfferDetails_Parms;
	memcpy ( &GetOfferDetails_Parms.OfferId, &OfferId, 0x10 );

	pFnGetOfferDetails->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOfferDetails, &GetOfferDetails_Parms, NULL );

	pFnGetOfferDetails->FunctionFlags |= 0x400;

	return GetOfferDetails_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient._onGetItemOffersDone
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::_onGetItemOffersDone ( int requestId, int ErrorCode, TArray< struct FPBOffer >* offers )
{
	static UFunction* pFn_onGetItemOffersDone = NULL;

	if ( ! pFn_onGetItemOffersDone )
		pFn_onGetItemOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35253 ];

	UPBItemShopClient_exec_onGetItemOffersDone_Parms _onGetItemOffersDone_Parms;
	_onGetItemOffersDone_Parms.requestId = requestId;
	_onGetItemOffersDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFn_onGetItemOffersDone, &_onGetItemOffersDone_Parms, NULL );

	if ( offers )
		memcpy ( offers, &_onGetItemOffersDone_Parms.offers, 0xC );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetItemOffersDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetItemOffersDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetItemOffersDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetItemOffersDone )
		pFnRemoveDelegate_OnGetItemOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35258 ];

	UPBItemShopClient_execRemoveDelegate_OnGetItemOffersDone_Parms RemoveDelegate_OnGetItemOffersDone_Parms;
	memcpy ( &RemoveDelegate_OnGetItemOffersDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetItemOffersDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetItemOffersDone, &RemoveDelegate_OnGetItemOffersDone_Parms, NULL );

	return RemoveDelegate_OnGetItemOffersDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetItemOffersDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetItemOffersDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetItemOffersDone = NULL;

	if ( ! pFnAddDelegate_OnGetItemOffersDone )
		pFnAddDelegate_OnGetItemOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35254 ];

	UPBItemShopClient_execAddDelegate_OnGetItemOffersDone_Parms AddDelegate_OnGetItemOffersDone_Parms;
	memcpy ( &AddDelegate_OnGetItemOffersDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetItemOffersDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetItemOffersDone, &AddDelegate_OnGetItemOffersDone_Parms, NULL );

	return AddDelegate_OnGetItemOffersDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetItemOffersDone
// [0x00120002] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetItemOffersDone ( int requestId, int ErrorCode, TArray< struct FPBOffer > offers )
{
	static UFunction* pFnOnGetItemOffersDone = NULL;

	if ( ! pFnOnGetItemOffersDone )
		pFnOnGetItemOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35248 ];

	UPBItemShopClient_execOnGetItemOffersDone_Parms OnGetItemOffersDone_Parms;
	OnGetItemOffersDone_Parms.requestId = requestId;
	OnGetItemOffersDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetItemOffersDone_Parms.offers, &offers, 0xC );

	this->ProcessEvent ( pFnOnGetItemOffersDone, &OnGetItemOffersDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetItemOffers
// [0x00024C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   itemId                         ( CPF_Parm )
// int                            marketCategory                 ( CPF_OptionalParm | CPF_Parm )

int UPBItemShopClient::eventGetItemOffers ( struct FGuid itemId, int marketCategory )
{
	static UFunction* pFnGetItemOffers = NULL;

	if ( ! pFnGetItemOffers )
		pFnGetItemOffers = (UFunction*) UObject::GObjObjects()->Data[ 35244 ];

	UPBItemShopClient_eventGetItemOffers_Parms GetItemOffers_Parms;
	memcpy ( &GetItemOffers_Parms.itemId, &itemId, 0x10 );
	GetItemOffers_Parms.marketCategory = marketCategory;

	pFnGetItemOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetItemOffers, &GetItemOffers_Parms, NULL );

	pFnGetItemOffers->FunctionFlags |= 0x400;

	return GetItemOffers_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetUniqueOffersOldDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetUniqueOffersOldDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetUniqueOffersOldDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetUniqueOffersOldDone )
		pFnRemoveDelegate_OnGetUniqueOffersOldDone = (UFunction*) UObject::GObjObjects()->Data[ 35240 ];

	UPBItemShopClient_execRemoveDelegate_OnGetUniqueOffersOldDone_Parms RemoveDelegate_OnGetUniqueOffersOldDone_Parms;
	memcpy ( &RemoveDelegate_OnGetUniqueOffersOldDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetUniqueOffersOldDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetUniqueOffersOldDone, &RemoveDelegate_OnGetUniqueOffersOldDone_Parms, NULL );

	return RemoveDelegate_OnGetUniqueOffersOldDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetUniqueOffersOldDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetUniqueOffersOldDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetUniqueOffersOldDone = NULL;

	if ( ! pFnAddDelegate_OnGetUniqueOffersOldDone )
		pFnAddDelegate_OnGetUniqueOffersOldDone = (UFunction*) UObject::GObjObjects()->Data[ 35236 ];

	UPBItemShopClient_execAddDelegate_OnGetUniqueOffersOldDone_Parms AddDelegate_OnGetUniqueOffersOldDone_Parms;
	memcpy ( &AddDelegate_OnGetUniqueOffersOldDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetUniqueOffersOldDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetUniqueOffersOldDone, &AddDelegate_OnGetUniqueOffersOldDone_Parms, NULL );

	return AddDelegate_OnGetUniqueOffersOldDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetUniqueOffersOldDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBOffer >      offers                         ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetUniqueOffersOldDone ( int requestId, int ErrorCode, TArray< struct FPBOffer > offers )
{
	static UFunction* pFnOnGetUniqueOffersOldDone = NULL;

	if ( ! pFnOnGetUniqueOffersOldDone )
		pFnOnGetUniqueOffersOldDone = (UFunction*) UObject::GObjObjects()->Data[ 35231 ];

	UPBItemShopClient_execOnGetUniqueOffersOldDone_Parms OnGetUniqueOffersOldDone_Parms;
	OnGetUniqueOffersOldDone_Parms.requestId = requestId;
	OnGetUniqueOffersOldDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetUniqueOffersOldDone_Parms.offers, &offers, 0xC );

	this->ProcessEvent ( pFnOnGetUniqueOffersOldDone, &OnGetUniqueOffersOldDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetUniqueOffersOld
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Category                       ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventGetUniqueOffersOld ( struct FString Category )
{
	static UFunction* pFnGetUniqueOffersOld = NULL;

	if ( ! pFnGetUniqueOffersOld )
		pFnGetUniqueOffersOld = (UFunction*) UObject::GObjObjects()->Data[ 35228 ];

	UPBItemShopClient_eventGetUniqueOffersOld_Parms GetUniqueOffersOld_Parms;
	memcpy ( &GetUniqueOffersOld_Parms.Category, &Category, 0xC );

	pFnGetUniqueOffersOld->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUniqueOffersOld, &GetUniqueOffersOld_Parms, NULL );

	pFnGetUniqueOffersOld->FunctionFlags |= 0x400;

	return GetUniqueOffersOld_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient._onGetUniqueOffersDone
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBUniqueOffer > offers                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::_onGetUniqueOffersDone ( int requestId, int ErrorCode, TArray< struct FPBUniqueOffer >* offers )
{
	static UFunction* pFn_onGetUniqueOffersDone = NULL;

	if ( ! pFn_onGetUniqueOffersDone )
		pFn_onGetUniqueOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35215 ];

	UPBItemShopClient_exec_onGetUniqueOffersDone_Parms _onGetUniqueOffersDone_Parms;
	_onGetUniqueOffersDone_Parms.requestId = requestId;
	_onGetUniqueOffersDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFn_onGetUniqueOffersDone, &_onGetUniqueOffersDone_Parms, NULL );

	if ( offers )
		memcpy ( offers, &_onGetUniqueOffersDone_Parms.offers, 0xC );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetUniqueOffersDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetUniqueOffersDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetUniqueOffersDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetUniqueOffersDone )
		pFnRemoveDelegate_OnGetUniqueOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35220 ];

	UPBItemShopClient_execRemoveDelegate_OnGetUniqueOffersDone_Parms RemoveDelegate_OnGetUniqueOffersDone_Parms;
	memcpy ( &RemoveDelegate_OnGetUniqueOffersDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetUniqueOffersDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetUniqueOffersDone, &RemoveDelegate_OnGetUniqueOffersDone_Parms, NULL );

	return RemoveDelegate_OnGetUniqueOffersDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetUniqueOffersDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetUniqueOffersDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetUniqueOffersDone = NULL;

	if ( ! pFnAddDelegate_OnGetUniqueOffersDone )
		pFnAddDelegate_OnGetUniqueOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35216 ];

	UPBItemShopClient_execAddDelegate_OnGetUniqueOffersDone_Parms AddDelegate_OnGetUniqueOffersDone_Parms;
	memcpy ( &AddDelegate_OnGetUniqueOffersDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetUniqueOffersDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetUniqueOffersDone, &AddDelegate_OnGetUniqueOffersDone_Parms, NULL );

	return AddDelegate_OnGetUniqueOffersDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetUniqueOffersDone
// [0x00120002] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// TArray< struct FPBUniqueOffer > offers                         ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetUniqueOffersDone ( int requestId, int ErrorCode, TArray< struct FPBUniqueOffer > offers )
{
	static UFunction* pFnOnGetUniqueOffersDone = NULL;

	if ( ! pFnOnGetUniqueOffersDone )
		pFnOnGetUniqueOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35210 ];

	UPBItemShopClient_execOnGetUniqueOffersDone_Parms OnGetUniqueOffersDone_Parms;
	OnGetUniqueOffersDone_Parms.requestId = requestId;
	OnGetUniqueOffersDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetUniqueOffersDone_Parms.offers, &offers, 0xC );

	this->ProcessEvent ( pFnOnGetUniqueOffersDone, &OnGetUniqueOffersDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetUniqueOffers
// [0x00024C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       categories                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            marketCategory                 ( CPF_OptionalParm | CPF_Parm )

int UPBItemShopClient::eventGetUniqueOffers ( TArray< struct FString > categories, int marketCategory )
{
	static UFunction* pFnGetUniqueOffers = NULL;

	if ( ! pFnGetUniqueOffers )
		pFnGetUniqueOffers = (UFunction*) UObject::GObjObjects()->Data[ 35205 ];

	UPBItemShopClient_eventGetUniqueOffers_Parms GetUniqueOffers_Parms;
	memcpy ( &GetUniqueOffers_Parms.categories, &categories, 0xC );
	GetUniqueOffers_Parms.marketCategory = marketCategory;

	pFnGetUniqueOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUniqueOffers, &GetUniqueOffers_Parms, NULL );

	pFnGetUniqueOffers->FunctionFlags |= 0x400;

	return GetUniqueOffers_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient._onGetOffersDone
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// struct FTPBItemShopResult_OnGetOffersDone Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::_onGetOffersDone ( struct FTPBItemShopResult_OnGetOffersDone* Result )
{
	static UFunction* pFn_onGetOffersDone = NULL;

	if ( ! pFn_onGetOffersDone )
		pFn_onGetOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35192 ];

	UPBItemShopClient_exec_onGetOffersDone_Parms _onGetOffersDone_Parms;

	this->ProcessEvent ( pFn_onGetOffersDone, &_onGetOffersDone_Parms, NULL );

	if ( Result )
		memcpy ( Result, &_onGetOffersDone_Parms.Result, 0x14 );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetOffersDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetOffersDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetOffersDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetOffersDone )
		pFnRemoveDelegate_OnGetOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35199 ];

	UPBItemShopClient_execRemoveDelegate_OnGetOffersDone_Parms RemoveDelegate_OnGetOffersDone_Parms;
	memcpy ( &RemoveDelegate_OnGetOffersDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetOffersDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetOffersDone, &RemoveDelegate_OnGetOffersDone_Parms, NULL );

	return RemoveDelegate_OnGetOffersDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetOffersDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetOffersDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetOffersDone = NULL;

	if ( ! pFnAddDelegate_OnGetOffersDone )
		pFnAddDelegate_OnGetOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35195 ];

	UPBItemShopClient_execAddDelegate_OnGetOffersDone_Parms AddDelegate_OnGetOffersDone_Parms;
	memcpy ( &AddDelegate_OnGetOffersDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetOffersDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetOffersDone, &AddDelegate_OnGetOffersDone_Parms, NULL );

	return AddDelegate_OnGetOffersDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetOffersDone
// [0x00520002] 
// Parameters infos:
// struct FTPBItemShopResult_OnGetOffersDone Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::OnGetOffersDone ( struct FTPBItemShopResult_OnGetOffersDone* Result )
{
	static UFunction* pFnOnGetOffersDone = NULL;

	if ( ! pFnOnGetOffersDone )
		pFnOnGetOffersDone = (UFunction*) UObject::GObjObjects()->Data[ 35189 ];

	UPBItemShopClient_execOnGetOffersDone_Parms OnGetOffersDone_Parms;

	this->ProcessEvent ( pFnOnGetOffersDone, &OnGetOffersDone_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnGetOffersDone_Parms.Result, 0x14 );
};

// Function PBItemShop.PBItemShopClient.GetOffers
// [0x00024C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       categories                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            marketCategory                 ( CPF_OptionalParm | CPF_Parm )

int UPBItemShopClient::eventGetOffers ( TArray< struct FString > categories, int marketCategory )
{
	static UFunction* pFnGetOffers = NULL;

	if ( ! pFnGetOffers )
		pFnGetOffers = (UFunction*) UObject::GObjObjects()->Data[ 35184 ];

	UPBItemShopClient_eventGetOffers_Parms GetOffers_Parms;
	memcpy ( &GetOffers_Parms.categories, &categories, 0xC );
	GetOffers_Parms.marketCategory = marketCategory;

	pFnGetOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetOffers, &GetOffers_Parms, NULL );

	pFnGetOffers->FunctionFlags |= 0x400;

	return GetOffers_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetSubscriptionModeDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetSubscriptionModeDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetSubscriptionModeDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetSubscriptionModeDone )
		pFnRemoveDelegate_OnGetSubscriptionModeDone = (UFunction*) UObject::GObjObjects()->Data[ 35180 ];

	UPBItemShopClient_execRemoveDelegate_OnGetSubscriptionModeDone_Parms RemoveDelegate_OnGetSubscriptionModeDone_Parms;
	memcpy ( &RemoveDelegate_OnGetSubscriptionModeDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetSubscriptionModeDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetSubscriptionModeDone, &RemoveDelegate_OnGetSubscriptionModeDone_Parms, NULL );

	return RemoveDelegate_OnGetSubscriptionModeDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetSubscriptionModeDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetSubscriptionModeDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetSubscriptionModeDone = NULL;

	if ( ! pFnAddDelegate_OnGetSubscriptionModeDone )
		pFnAddDelegate_OnGetSubscriptionModeDone = (UFunction*) UObject::GObjObjects()->Data[ 35176 ];

	UPBItemShopClient_execAddDelegate_OnGetSubscriptionModeDone_Parms AddDelegate_OnGetSubscriptionModeDone_Parms;
	memcpy ( &AddDelegate_OnGetSubscriptionModeDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetSubscriptionModeDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetSubscriptionModeDone, &AddDelegate_OnGetSubscriptionModeDone_Parms, NULL );

	return AddDelegate_OnGetSubscriptionModeDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetSubscriptionModeDone
// [0x00520000] 
// Parameters infos:
// struct FTPBItemShopResult_OnGetSubscriptionModeDone Result                         ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPBItemShopClient::OnGetSubscriptionModeDone ( struct FTPBItemShopResult_OnGetSubscriptionModeDone* Result )
{
	static UFunction* pFnOnGetSubscriptionModeDone = NULL;

	if ( ! pFnOnGetSubscriptionModeDone )
		pFnOnGetSubscriptionModeDone = (UFunction*) UObject::GObjObjects()->Data[ 35162 ];

	UPBItemShopClient_execOnGetSubscriptionModeDone_Parms OnGetSubscriptionModeDone_Parms;

	this->ProcessEvent ( pFnOnGetSubscriptionModeDone, &OnGetSubscriptionModeDone_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnGetSubscriptionModeDone_Parms.Result, 0x40 );
};

// Function PBItemShop.PBItemShopClient.GetSubscriptionMode
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetSubscriptionMode ( )
{
	static UFunction* pFnGetSubscriptionMode = NULL;

	if ( ! pFnGetSubscriptionMode )
		pFnGetSubscriptionMode = (UFunction*) UObject::GObjObjects()->Data[ 35160 ];

	UPBItemShopClient_eventGetSubscriptionMode_Parms GetSubscriptionMode_Parms;

	pFnGetSubscriptionMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSubscriptionMode, &GetSubscriptionMode_Parms, NULL );

	pFnGetSubscriptionMode->FunctionFlags |= 0x400;

	return GetSubscriptionMode_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnGetProgressionDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnGetProgressionDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnGetProgressionDone = NULL;

	if ( ! pFnRemoveDelegate_OnGetProgressionDone )
		pFnRemoveDelegate_OnGetProgressionDone = (UFunction*) UObject::GObjObjects()->Data[ 35156 ];

	UPBItemShopClient_execRemoveDelegate_OnGetProgressionDone_Parms RemoveDelegate_OnGetProgressionDone_Parms;
	memcpy ( &RemoveDelegate_OnGetProgressionDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnGetProgressionDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnGetProgressionDone, &RemoveDelegate_OnGetProgressionDone_Parms, NULL );

	return RemoveDelegate_OnGetProgressionDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnGetProgressionDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnGetProgressionDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnGetProgressionDone = NULL;

	if ( ! pFnAddDelegate_OnGetProgressionDone )
		pFnAddDelegate_OnGetProgressionDone = (UFunction*) UObject::GObjObjects()->Data[ 35152 ];

	UPBItemShopClient_execAddDelegate_OnGetProgressionDone_Parms AddDelegate_OnGetProgressionDone_Parms;
	memcpy ( &AddDelegate_OnGetProgressionDone_Parms.func, &func, 0xC );
	AddDelegate_OnGetProgressionDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnGetProgressionDone, &AddDelegate_OnGetProgressionDone_Parms, NULL );

	return AddDelegate_OnGetProgressionDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnGetProgressionDone
// [0x00520000] 
// Parameters infos:
// struct FTPBItemShopResult_OnGetProgressionDone Result                         ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPBItemShopClient::OnGetProgressionDone ( struct FTPBItemShopResult_OnGetProgressionDone* Result )
{
	static UFunction* pFnOnGetProgressionDone = NULL;

	if ( ! pFnOnGetProgressionDone )
		pFnOnGetProgressionDone = (UFunction*) UObject::GObjObjects()->Data[ 35143 ];

	UPBItemShopClient_execOnGetProgressionDone_Parms OnGetProgressionDone_Parms;

	this->ProcessEvent ( pFnOnGetProgressionDone, &OnGetProgressionDone_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnGetProgressionDone_Parms.Result, 0x20 );
};

// Function PBItemShop.PBItemShopClient.GetProgression
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventGetProgression ( )
{
	static UFunction* pFnGetProgression = NULL;

	if ( ! pFnGetProgression )
		pFnGetProgression = (UFunction*) UObject::GObjObjects()->Data[ 35141 ];

	UPBItemShopClient_eventGetProgression_Parms GetProgression_Parms;

	pFnGetProgression->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProgression, &GetProgression_Parms, NULL );

	pFnGetProgression->FunctionFlags |= 0x400;

	return GetProgression_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnLogoutDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnLogoutDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnLogoutDone = NULL;

	if ( ! pFnRemoveDelegate_OnLogoutDone )
		pFnRemoveDelegate_OnLogoutDone = (UFunction*) UObject::GObjObjects()->Data[ 35137 ];

	UPBItemShopClient_execRemoveDelegate_OnLogoutDone_Parms RemoveDelegate_OnLogoutDone_Parms;
	memcpy ( &RemoveDelegate_OnLogoutDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnLogoutDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnLogoutDone, &RemoveDelegate_OnLogoutDone_Parms, NULL );

	return RemoveDelegate_OnLogoutDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnLogoutDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnLogoutDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnLogoutDone = NULL;

	if ( ! pFnAddDelegate_OnLogoutDone )
		pFnAddDelegate_OnLogoutDone = (UFunction*) UObject::GObjObjects()->Data[ 35133 ];

	UPBItemShopClient_execAddDelegate_OnLogoutDone_Parms AddDelegate_OnLogoutDone_Parms;
	memcpy ( &AddDelegate_OnLogoutDone_Parms.func, &func, 0xC );
	AddDelegate_OnLogoutDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnLogoutDone, &AddDelegate_OnLogoutDone_Parms, NULL );

	return AddDelegate_OnLogoutDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnLogoutDone
// [0x00520000] 
// Parameters infos:
// struct FTPBItemShopResult_OnLogoutDone Result                         ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPBItemShopClient::OnLogoutDone ( struct FTPBItemShopResult_OnLogoutDone* Result )
{
	static UFunction* pFnOnLogoutDone = NULL;

	if ( ! pFnOnLogoutDone )
		pFnOnLogoutDone = (UFunction*) UObject::GObjObjects()->Data[ 35130 ];

	UPBItemShopClient_execOnLogoutDone_Parms OnLogoutDone_Parms;

	this->ProcessEvent ( pFnOnLogoutDone, &OnLogoutDone_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnLogoutDone_Parms.Result, 0x8 );
};

// Function PBItemShop.PBItemShopClient.Logout
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventLogout ( )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 35128 ];

	UPBItemShopClient_eventLogout_Parms Logout_Parms;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnLoginDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnLoginDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnLoginDone = NULL;

	if ( ! pFnRemoveDelegate_OnLoginDone )
		pFnRemoveDelegate_OnLoginDone = (UFunction*) UObject::GObjObjects()->Data[ 35124 ];

	UPBItemShopClient_execRemoveDelegate_OnLoginDone_Parms RemoveDelegate_OnLoginDone_Parms;
	memcpy ( &RemoveDelegate_OnLoginDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnLoginDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnLoginDone, &RemoveDelegate_OnLoginDone_Parms, NULL );

	return RemoveDelegate_OnLoginDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnLoginDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnLoginDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnLoginDone = NULL;

	if ( ! pFnAddDelegate_OnLoginDone )
		pFnAddDelegate_OnLoginDone = (UFunction*) UObject::GObjObjects()->Data[ 35120 ];

	UPBItemShopClient_execAddDelegate_OnLoginDone_Parms AddDelegate_OnLoginDone_Parms;
	memcpy ( &AddDelegate_OnLoginDone_Parms.func, &func, 0xC );
	AddDelegate_OnLoginDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnLoginDone, &AddDelegate_OnLoginDone_Parms, NULL );

	return AddDelegate_OnLoginDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnLoginDone
// [0x00520000] 
// Parameters infos:
// struct FTPBItemShopResult_OnLoginDone Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::OnLoginDone ( struct FTPBItemShopResult_OnLoginDone* Result )
{
	static UFunction* pFnOnLoginDone = NULL;

	if ( ! pFnOnLoginDone )
		pFnOnLoginDone = (UFunction*) UObject::GObjObjects()->Data[ 35115 ];

	UPBItemShopClient_execOnLoginDone_Parms OnLoginDone_Parms;

	this->ProcessEvent ( pFnOnLoginDone, &OnLoginDone_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnLoginDone_Parms.Result, 0x24 );
};

// Function PBItemShop.PBItemShopClient.LoginWithKey
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 locale                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventLoginWithKey ( struct FString UserName, struct FString Password, struct FString locale, struct FString Key )
{
	static UFunction* pFnLoginWithKey = NULL;

	if ( ! pFnLoginWithKey )
		pFnLoginWithKey = (UFunction*) UObject::GObjObjects()->Data[ 35109 ];

	UPBItemShopClient_eventLoginWithKey_Parms LoginWithKey_Parms;
	memcpy ( &LoginWithKey_Parms.UserName, &UserName, 0xC );
	memcpy ( &LoginWithKey_Parms.Password, &Password, 0xC );
	memcpy ( &LoginWithKey_Parms.locale, &locale, 0xC );
	memcpy ( &LoginWithKey_Parms.Key, &Key, 0xC );

	pFnLoginWithKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoginWithKey, &LoginWithKey_Parms, NULL );

	pFnLoginWithKey->FunctionFlags |= 0x400;

	return LoginWithKey_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.LoginWithSession
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SessionId                      ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventLoginWithSession ( struct FString SessionId )
{
	static UFunction* pFnLoginWithSession = NULL;

	if ( ! pFnLoginWithSession )
		pFnLoginWithSession = (UFunction*) UObject::GObjObjects()->Data[ 35106 ];

	UPBItemShopClient_eventLoginWithSession_Parms LoginWithSession_Parms;
	memcpy ( &LoginWithSession_Parms.SessionId, &SessionId, 0xC );

	pFnLoginWithSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoginWithSession, &LoginWithSession_Parms, NULL );

	pFnLoginWithSession->FunctionFlags |= 0x400;

	return LoginWithSession_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.Login
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopClient::eventLogin ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 35102 ];

	UPBItemShopClient_eventLogin_Parms Login_Parms;
	memcpy ( &Login_Parms.UserName, &UserName, 0xC );
	memcpy ( &Login_Parms.Password, &Password, 0xC );

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnPingDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnPingDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnPingDone = NULL;

	if ( ! pFnRemoveDelegate_OnPingDone )
		pFnRemoveDelegate_OnPingDone = (UFunction*) UObject::GObjObjects()->Data[ 35098 ];

	UPBItemShopClient_execRemoveDelegate_OnPingDone_Parms RemoveDelegate_OnPingDone_Parms;
	memcpy ( &RemoveDelegate_OnPingDone_Parms.func, &func, 0xC );
	RemoveDelegate_OnPingDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnPingDone, &RemoveDelegate_OnPingDone_Parms, NULL );

	return RemoveDelegate_OnPingDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnPingDone
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnPingDone ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnPingDone = NULL;

	if ( ! pFnAddDelegate_OnPingDone )
		pFnAddDelegate_OnPingDone = (UFunction*) UObject::GObjObjects()->Data[ 35094 ];

	UPBItemShopClient_execAddDelegate_OnPingDone_Parms AddDelegate_OnPingDone_Parms;
	memcpy ( &AddDelegate_OnPingDone_Parms.func, &func, 0xC );
	AddDelegate_OnPingDone_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnPingDone, &AddDelegate_OnPingDone_Parms, NULL );

	return AddDelegate_OnPingDone_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnPingDone
// [0x00520000] 
// Parameters infos:
// struct FTPBItemShopResult_OnPingDone Result                         ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPBItemShopClient::OnPingDone ( struct FTPBItemShopResult_OnPingDone* Result )
{
	static UFunction* pFnOnPingDone = NULL;

	if ( ! pFnOnPingDone )
		pFnOnPingDone = (UFunction*) UObject::GObjObjects()->Data[ 35091 ];

	UPBItemShopClient_execOnPingDone_Parms OnPingDone_Parms;

	this->ProcessEvent ( pFnOnPingDone, &OnPingDone_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnPingDone_Parms.Result, 0x8 );
};

// Function PBItemShop.PBItemShopClient.Ping
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopClient::eventPing ( )
{
	static UFunction* pFnPing = NULL;

	if ( ! pFnPing )
		pFnPing = (UFunction*) UObject::GObjObjects()->Data[ 35089 ];

	UPBItemShopClient_eventPing_Parms Ping_Parms;

	pFnPing->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPing, &Ping_Parms, NULL );

	pFnPing->FunctionFlags |= 0x400;

	return Ping_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnSessionEnded
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnSessionEnded ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnSessionEnded = NULL;

	if ( ! pFnRemoveDelegate_OnSessionEnded )
		pFnRemoveDelegate_OnSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 35085 ];

	UPBItemShopClient_execRemoveDelegate_OnSessionEnded_Parms RemoveDelegate_OnSessionEnded_Parms;
	memcpy ( &RemoveDelegate_OnSessionEnded_Parms.func, &func, 0xC );
	RemoveDelegate_OnSessionEnded_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnSessionEnded, &RemoveDelegate_OnSessionEnded_Parms, NULL );

	return RemoveDelegate_OnSessionEnded_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnSessionEnded
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnSessionEnded ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnSessionEnded = NULL;

	if ( ! pFnAddDelegate_OnSessionEnded )
		pFnAddDelegate_OnSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 35081 ];

	UPBItemShopClient_execAddDelegate_OnSessionEnded_Parms AddDelegate_OnSessionEnded_Parms;
	memcpy ( &AddDelegate_OnSessionEnded_Parms.func, &func, 0xC );
	AddDelegate_OnSessionEnded_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnSessionEnded, &AddDelegate_OnSessionEnded_Parms, NULL );

	return AddDelegate_OnSessionEnded_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnSessionEnded
// [0x00520000] 
// Parameters infos:
// struct FTPBItemShopResult_OnSessionEnded Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::OnSessionEnded ( struct FTPBItemShopResult_OnSessionEnded* Result )
{
	static UFunction* pFnOnSessionEnded = NULL;

	if ( ! pFnOnSessionEnded )
		pFnOnSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 35075 ];

	UPBItemShopClient_execOnSessionEnded_Parms OnSessionEnded_Parms;

	this->ProcessEvent ( pFnOnSessionEnded, &OnSessionEnded_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnSessionEnded_Parms.Result, 0x1C );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnDisconnect
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnDisconnect ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnDisconnect = NULL;

	if ( ! pFnRemoveDelegate_OnDisconnect )
		pFnRemoveDelegate_OnDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 35071 ];

	UPBItemShopClient_execRemoveDelegate_OnDisconnect_Parms RemoveDelegate_OnDisconnect_Parms;
	memcpy ( &RemoveDelegate_OnDisconnect_Parms.func, &func, 0xC );
	RemoveDelegate_OnDisconnect_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnDisconnect, &RemoveDelegate_OnDisconnect_Parms, NULL );

	return RemoveDelegate_OnDisconnect_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnDisconnect
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnDisconnect ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnDisconnect = NULL;

	if ( ! pFnAddDelegate_OnDisconnect )
		pFnAddDelegate_OnDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 35067 ];

	UPBItemShopClient_execAddDelegate_OnDisconnect_Parms AddDelegate_OnDisconnect_Parms;
	memcpy ( &AddDelegate_OnDisconnect_Parms.func, &func, 0xC );
	AddDelegate_OnDisconnect_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnDisconnect, &AddDelegate_OnDisconnect_Parms, NULL );

	return AddDelegate_OnDisconnect_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnDisconnect
// [0x00520000] 
// Parameters infos:
// struct FTPBItemShopResult_OnDisconnect Result                         ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPBItemShopClient::OnDisconnect ( struct FTPBItemShopResult_OnDisconnect* Result )
{
	static UFunction* pFnOnDisconnect = NULL;

	if ( ! pFnOnDisconnect )
		pFnOnDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 35064 ];

	UPBItemShopClient_execOnDisconnect_Parms OnDisconnect_Parms;

	this->ProcessEvent ( pFnOnDisconnect, &OnDisconnect_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnDisconnect_Parms.Result, 0x8 );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate_OnQueueChanged
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate_OnQueueChanged ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnRemoveDelegate_OnQueueChanged = NULL;

	if ( ! pFnRemoveDelegate_OnQueueChanged )
		pFnRemoveDelegate_OnQueueChanged = (UFunction*) UObject::GObjObjects()->Data[ 35060 ];

	UPBItemShopClient_execRemoveDelegate_OnQueueChanged_Parms RemoveDelegate_OnQueueChanged_Parms;
	memcpy ( &RemoveDelegate_OnQueueChanged_Parms.func, &func, 0xC );
	RemoveDelegate_OnQueueChanged_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveDelegate_OnQueueChanged, &RemoveDelegate_OnQueueChanged_Parms, NULL );

	return RemoveDelegate_OnQueueChanged_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate_OnQueueChanged
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         func                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )

int UPBItemShopClient::AddDelegate_OnQueueChanged ( struct FScriptDelegate func, class UObject* Parent )
{
	static UFunction* pFnAddDelegate_OnQueueChanged = NULL;

	if ( ! pFnAddDelegate_OnQueueChanged )
		pFnAddDelegate_OnQueueChanged = (UFunction*) UObject::GObjObjects()->Data[ 35056 ];

	UPBItemShopClient_execAddDelegate_OnQueueChanged_Parms AddDelegate_OnQueueChanged_Parms;
	memcpy ( &AddDelegate_OnQueueChanged_Parms.func, &func, 0xC );
	AddDelegate_OnQueueChanged_Parms.Parent = Parent;

	this->ProcessEvent ( pFnAddDelegate_OnQueueChanged, &AddDelegate_OnQueueChanged_Parms, NULL );

	return AddDelegate_OnQueueChanged_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.OnQueueChanged
// [0x00520000] 
// Parameters infos:
// struct FTPBItemShopResult_OnQueueChanged Result                         ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPBItemShopClient::OnQueueChanged ( struct FTPBItemShopResult_OnQueueChanged* Result )
{
	static UFunction* pFnOnQueueChanged = NULL;

	if ( ! pFnOnQueueChanged )
		pFnOnQueueChanged = (UFunction*) UObject::GObjObjects()->Data[ 35052 ];

	UPBItemShopClient_execOnQueueChanged_Parms OnQueueChanged_Parms;

	this->ProcessEvent ( pFnOnQueueChanged, &OnQueueChanged_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnQueueChanged_Parms.Result, 0xC );
};

// Function PBItemShop.PBItemShopClient.RemoveAllDelegatesForParent
// [0x00020002] 
// Parameters infos:
// class UObject*                 Parent                         ( CPF_Parm )

void UPBItemShopClient::RemoveAllDelegatesForParent ( class UObject* Parent )
{
	static UFunction* pFnRemoveAllDelegatesForParent = NULL;

	if ( ! pFnRemoveAllDelegatesForParent )
		pFnRemoveAllDelegatesForParent = (UFunction*) UObject::GObjObjects()->Data[ 35050 ];

	UPBItemShopClient_execRemoveAllDelegatesForParent_Parms RemoveAllDelegatesForParent_Parms;
	RemoveAllDelegatesForParent_Parms.Parent = Parent;

	this->ProcessEvent ( pFnRemoveAllDelegatesForParent, &RemoveAllDelegatesForParent_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.RemoveDelegate
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 DelegateName                   ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )
// struct FName                   ShopDelegateType               ( CPF_Parm )

int UPBItemShopClient::RemoveDelegate ( struct FString DelegateName, class UObject* Parent, struct FName ShopDelegateType )
{
	static UFunction* pFnRemoveDelegate = NULL;

	if ( ! pFnRemoveDelegate )
		pFnRemoveDelegate = (UFunction*) UObject::GObjObjects()->Data[ 35045 ];

	UPBItemShopClient_execRemoveDelegate_Parms RemoveDelegate_Parms;
	memcpy ( &RemoveDelegate_Parms.DelegateName, &DelegateName, 0xC );
	RemoveDelegate_Parms.Parent = Parent;
	memcpy ( &RemoveDelegate_Parms.ShopDelegateType, &ShopDelegateType, 0x8 );

	pFnRemoveDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveDelegate, &RemoveDelegate_Parms, NULL );

	pFnRemoveDelegate->FunctionFlags |= 0x400;

	return RemoveDelegate_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.AddDelegate
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 DelegateName                   ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Parent                         ( CPF_Parm )
// struct FName                   ShopDelegateType               ( CPF_Parm )

int UPBItemShopClient::AddDelegate ( struct FString DelegateName, class UObject* Parent, struct FName ShopDelegateType )
{
	static UFunction* pFnAddDelegate = NULL;

	if ( ! pFnAddDelegate )
		pFnAddDelegate = (UFunction*) UObject::GObjObjects()->Data[ 35040 ];

	UPBItemShopClient_execAddDelegate_Parms AddDelegate_Parms;
	memcpy ( &AddDelegate_Parms.DelegateName, &DelegateName, 0xC );
	AddDelegate_Parms.Parent = Parent;
	memcpy ( &AddDelegate_Parms.ShopDelegateType, &ShopDelegateType, 0x8 );

	pFnAddDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddDelegate, &AddDelegate_Parms, NULL );

	pFnAddDelegate->FunctionFlags |= 0x400;

	return AddDelegate_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.SetResponseDelay
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            milliseconds                   ( CPF_Parm )

void UPBItemShopClient::SetResponseDelay ( int milliseconds )
{
	static UFunction* pFnSetResponseDelay = NULL;

	if ( ! pFnSetResponseDelay )
		pFnSetResponseDelay = (UFunction*) UObject::GObjObjects()->Data[ 35038 ];

	UPBItemShopClient_execSetResponseDelay_Parms SetResponseDelay_Parms;
	SetResponseDelay_Parms.milliseconds = milliseconds;

	pFnSetResponseDelay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetResponseDelay, &SetResponseDelay_Parms, NULL );

	pFnSetResponseDelay->FunctionFlags |= 0x400;
};

// Function PBItemShop.PBItemShopClient.SetPingInterval
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Seconds                        ( CPF_Parm )

void UPBItemShopClient::SetPingInterval ( int Seconds )
{
	static UFunction* pFnSetPingInterval = NULL;

	if ( ! pFnSetPingInterval )
		pFnSetPingInterval = (UFunction*) UObject::GObjObjects()->Data[ 35036 ];

	UPBItemShopClient_execSetPingInterval_Parms SetPingInterval_Parms;
	SetPingInterval_Parms.Seconds = Seconds;

	pFnSetPingInterval->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPingInterval, &SetPingInterval_Parms, NULL );

	pFnSetPingInterval->FunctionFlags |= 0x400;
};

// Function PBItemShop.PBItemShopClient.GetSessionString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UPBItemShopClient::GetSessionString ( )
{
	static UFunction* pFnGetSessionString = NULL;

	if ( ! pFnGetSessionString )
		pFnGetSessionString = (UFunction*) UObject::GObjObjects()->Data[ 35034 ];

	UPBItemShopClient_execGetSessionString_Parms GetSessionString_Parms;

	pFnGetSessionString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSessionString, &GetSessionString_Parms, NULL );

	pFnGetSessionString->FunctionFlags |= 0x400;

	return GetSessionString_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.GetProfileId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FGuid                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FGuid UPBItemShopClient::GetProfileId ( )
{
	static UFunction* pFnGetProfileId = NULL;

	if ( ! pFnGetProfileId )
		pFnGetProfileId = (UFunction*) UObject::GObjObjects()->Data[ 35032 ];

	UPBItemShopClient_execGetProfileId_Parms GetProfileId_Parms;

	pFnGetProfileId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProfileId, &GetProfileId_Parms, NULL );

	pFnGetProfileId->FunctionFlags |= 0x400;

	return GetProfileId_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.GetUserId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FGuid                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FGuid UPBItemShopClient::GetUserId ( )
{
	static UFunction* pFnGetUserId = NULL;

	if ( ! pFnGetUserId )
		pFnGetUserId = (UFunction*) UObject::GObjObjects()->Data[ 35030 ];

	UPBItemShopClient_execGetUserId_Parms GetUserId_Parms;

	pFnGetUserId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserId, &GetUserId_Parms, NULL );

	pFnGetUserId->FunctionFlags |= 0x400;

	return GetUserId_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.ClientVersion
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Version                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPBItemShopClient::ClientVersion ( struct FString* Version )
{
	static UFunction* pFnClientVersion = NULL;

	if ( ! pFnClientVersion )
		pFnClientVersion = (UFunction*) UObject::GObjObjects()->Data[ 35027 ];

	UPBItemShopClient_execClientVersion_Parms ClientVersion_Parms;

	pFnClientVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientVersion, &ClientVersion_Parms, NULL );

	pFnClientVersion->FunctionFlags |= 0x400;

	if ( Version )
		memcpy ( Version, &ClientVersion_Parms.Version, 0xC );

	return ClientVersion_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.ClientAPIReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPBItemShopClient::ClientAPIReady ( )
{
	static UFunction* pFnClientAPIReady = NULL;

	if ( ! pFnClientAPIReady )
		pFnClientAPIReady = (UFunction*) UObject::GObjObjects()->Data[ 35025 ];

	UPBItemShopClient_execClientAPIReady_Parms ClientAPIReady_Parms;

	pFnClientAPIReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientAPIReady, &ClientAPIReady_Parms, NULL );

	pFnClientAPIReady->FunctionFlags |= 0x400;

	return ClientAPIReady_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.ClientCancelRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            requestId                      ( CPF_Parm )

bool UPBItemShopClient::ClientCancelRequest ( int requestId )
{
	static UFunction* pFnClientCancelRequest = NULL;

	if ( ! pFnClientCancelRequest )
		pFnClientCancelRequest = (UFunction*) UObject::GObjObjects()->Data[ 35022 ];

	UPBItemShopClient_execClientCancelRequest_Parms ClientCancelRequest_Parms;
	ClientCancelRequest_Parms.requestId = requestId;

	pFnClientCancelRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientCancelRequest, &ClientCancelRequest_Parms, NULL );

	pFnClientCancelRequest->FunctionFlags |= 0x400;

	return ClientCancelRequest_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.ClientCancelAllRequests
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPBItemShopClient::ClientCancelAllRequests ( )
{
	static UFunction* pFnClientCancelAllRequests = NULL;

	if ( ! pFnClientCancelAllRequests )
		pFnClientCancelAllRequests = (UFunction*) UObject::GObjObjects()->Data[ 35020 ];

	UPBItemShopClient_execClientCancelAllRequests_Parms ClientCancelAllRequests_Parms;

	pFnClientCancelAllRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientCancelAllRequests, &ClientCancelAllRequests_Parms, NULL );

	pFnClientCancelAllRequests->FunctionFlags |= 0x400;

	return ClientCancelAllRequests_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.IsBusy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPBItemShopClient::IsBusy ( )
{
	static UFunction* pFnIsBusy = NULL;

	if ( ! pFnIsBusy )
		pFnIsBusy = (UFunction*) UObject::GObjObjects()->Data[ 35018 ];

	UPBItemShopClient_execIsBusy_Parms IsBusy_Parms;

	pFnIsBusy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsBusy, &IsBusy_Parms, NULL );

	pFnIsBusy->FunctionFlags |= 0x400;

	return IsBusy_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopClient.ClearCachedCategory
// [0x00020002] 
// Parameters infos:
// struct FString                 cached_category                ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopClient::ClearCachedCategory ( struct FString cached_category )
{
	static UFunction* pFnClearCachedCategory = NULL;

	if ( ! pFnClearCachedCategory )
		pFnClearCachedCategory = (UFunction*) UObject::GObjObjects()->Data[ 35016 ];

	UPBItemShopClient_execClearCachedCategory_Parms ClearCachedCategory_Parms;
	memcpy ( &ClearCachedCategory_Parms.cached_category, &cached_category, 0xC );

	this->ProcessEvent ( pFnClearCachedCategory, &ClearCachedCategory_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.ClearCache
// [0x00020002] 
// Parameters infos:

void UPBItemShopClient::ClearCache ( )
{
	static UFunction* pFnClearCache = NULL;

	if ( ! pFnClearCache )
		pFnClearCache = (UFunction*) UObject::GObjObjects()->Data[ 35015 ];

	UPBItemShopClient_execClearCache_Parms ClearCache_Parms;

	this->ProcessEvent ( pFnClearCache, &ClearCache_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.GetUnlockedOffers
// [0x00420002] 
// Parameters infos:
// TArray< struct FPBOffer >      unlocked_offers                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::GetUnlockedOffers ( TArray< struct FPBOffer >* unlocked_offers )
{
	static UFunction* pFnGetUnlockedOffers = NULL;

	if ( ! pFnGetUnlockedOffers )
		pFnGetUnlockedOffers = (UFunction*) UObject::GObjObjects()->Data[ 35011 ];

	UPBItemShopClient_execGetUnlockedOffers_Parms GetUnlockedOffers_Parms;

	this->ProcessEvent ( pFnGetUnlockedOffers, &GetUnlockedOffers_Parms, NULL );

	if ( unlocked_offers )
		memcpy ( unlocked_offers, &GetUnlockedOffers_Parms.unlocked_offers, 0xC );
};

// Function PBItemShop.PBItemShopClient.AddUnlockedOffers
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FPBOffer >      unlocked_offers                ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopClient::AddUnlockedOffers ( TArray< struct FPBOffer >* unlocked_offers )
{
	static UFunction* pFnAddUnlockedOffers = NULL;

	if ( ! pFnAddUnlockedOffers )
		pFnAddUnlockedOffers = (UFunction*) UObject::GObjObjects()->Data[ 35004 ];

	UPBItemShopClient_execAddUnlockedOffers_Parms AddUnlockedOffers_Parms;

	this->ProcessEvent ( pFnAddUnlockedOffers, &AddUnlockedOffers_Parms, NULL );

	if ( unlocked_offers )
		memcpy ( unlocked_offers, &AddUnlockedOffers_Parms.unlocked_offers, 0xC );
};

// Function PBItemShop.PBItemShopClient.ClearUnlockedOffers
// [0x00020002] 
// Parameters infos:

void UPBItemShopClient::ClearUnlockedOffers ( )
{
	static UFunction* pFnClearUnlockedOffers = NULL;

	if ( ! pFnClearUnlockedOffers )
		pFnClearUnlockedOffers = (UFunction*) UObject::GObjObjects()->Data[ 35003 ];

	UPBItemShopClient_execClearUnlockedOffers_Parms ClearUnlockedOffers_Parms;

	this->ProcessEvent ( pFnClearUnlockedOffers, &ClearUnlockedOffers_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.ScriptInitializeDelegate
// [0x00120002] 
// Parameters infos:

void UPBItemShopClient::ScriptInitializeDelegate ( )
{
	static UFunction* pFnScriptInitializeDelegate = NULL;

	if ( ! pFnScriptInitializeDelegate )
		pFnScriptInitializeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 35001 ];

	UPBItemShopClient_execScriptInitializeDelegate_Parms ScriptInitializeDelegate_Parms;

	this->ProcessEvent ( pFnScriptInitializeDelegate, &ScriptInitializeDelegate_Parms, NULL );
};

// Function PBItemShop.PBItemShopClient.Initialize
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UPBItemShopClient::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 35000 ];

	UPBItemShopClient_execInitialize_Parms Initialize_Parms;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function PBItemShop.PBItemShopClient.CallTick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UPBItemShopClient::CallTick ( float DeltaTime )
{
	static UFunction* pFnCallTick = NULL;

	if ( ! pFnCallTick )
		pFnCallTick = (UFunction*) UObject::GObjObjects()->Data[ 34998 ];

	UPBItemShopClient_execCallTick_Parms CallTick_Parms;
	CallTick_Parms.DeltaTime = DeltaTime;

	pFnCallTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCallTick, &CallTick_Parms, NULL );

	pFnCallTick->FunctionFlags |= 0x400;
};

// Function PBItemShop.PBItemShopClient.GetInstance
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// class UPBItemShopClient*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPBItemShopClient* UPBItemShopClient::GetInstance ( )
{
	static UFunction* pFnGetInstance = NULL;

	if ( ! pFnGetInstance )
		pFnGetInstance = (UFunction*) UObject::GObjObjects()->Data[ 34996 ];

	UPBItemShopClient_execGetInstance_Parms GetInstance_Parms;

	pFnGetInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInstance, &GetInstance_Parms, NULL );

	pFnGetInstance->FunctionFlags |= 0x400;

	return GetInstance_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnSubmitMapVoteDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            errocode                       ( CPF_Parm )

void UPBItemShopServer::OnSubmitMapVoteDone ( int requestId, int errocode )
{
	static UFunction* pFnOnSubmitMapVoteDone = NULL;

	if ( ! pFnOnSubmitMapVoteDone )
		pFnOnSubmitMapVoteDone = (UFunction*) UObject::GObjObjects()->Data[ 36567 ];

	UPBItemShopServer_execOnSubmitMapVoteDone_Parms OnSubmitMapVoteDone_Parms;
	OnSubmitMapVoteDone_Parms.requestId = requestId;
	OnSubmitMapVoteDone_Parms.errocode = errocode;

	this->ProcessEvent ( pFnOnSubmitMapVoteDone, &OnSubmitMapVoteDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.SubmitMapVote
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FPBMapVoteData          Data                           ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopServer::SubmitMapVote ( struct FPBMapVoteData Data )
{
	static UFunction* pFnSubmitMapVote = NULL;

	if ( ! pFnSubmitMapVote )
		pFnSubmitMapVote = (UFunction*) UObject::GObjObjects()->Data[ 36722 ];

	UPBItemShopServer_execSubmitMapVote_Parms SubmitMapVote_Parms;
	memcpy ( &SubmitMapVote_Parms.Data, &Data, 0x24 );

	pFnSubmitMapVote->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitMapVote, &SubmitMapVote_Parms, NULL );

	pFnSubmitMapVote->FunctionFlags |= 0x400;

	return SubmitMapVote_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnSubmitMatchStatsDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            errocode                       ( CPF_Parm )

void UPBItemShopServer::OnSubmitMatchStatsDone ( int requestId, int errocode )
{
	static UFunction* pFnOnSubmitMatchStatsDone = NULL;

	if ( ! pFnOnSubmitMatchStatsDone )
		pFnOnSubmitMatchStatsDone = (UFunction*) UObject::GObjObjects()->Data[ 36569 ];

	UPBItemShopServer_execOnSubmitMatchStatsDone_Parms OnSubmitMatchStatsDone_Parms;
	OnSubmitMatchStatsDone_Parms.requestId = requestId;
	OnSubmitMatchStatsDone_Parms.errocode = errocode;

	this->ProcessEvent ( pFnOnSubmitMatchStatsDone, &OnSubmitMatchStatsDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.SubmitMatchStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FPBMatchStatsData       Data                           ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopServer::SubmitMatchStats ( struct FPBMatchStatsData Data )
{
	static UFunction* pFnSubmitMatchStats = NULL;

	if ( ! pFnSubmitMatchStats )
		pFnSubmitMatchStats = (UFunction*) UObject::GObjObjects()->Data[ 36717 ];

	UPBItemShopServer_execSubmitMatchStats_Parms SubmitMatchStats_Parms;
	memcpy ( &SubmitMatchStats_Parms.Data, &Data, 0x5C );

	pFnSubmitMatchStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitMatchStats, &SubmitMatchStats_Parms, NULL );

	pFnSubmitMatchStats->FunctionFlags |= 0x400;

	return SubmitMatchStats_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnGetBoostersServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            errocode                       ( CPF_Parm )
// int                            subscriptionIgc                ( CPF_Parm )
// int                            subscriptionXp                 ( CPF_Parm )
// TArray< struct FPBOfferServer > offers                         ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopServer::OnGetBoostersServerDone ( int requestId, int errocode, int subscriptionIgc, int subscriptionXp, TArray< struct FPBOfferServer > offers )
{
	static UFunction* pFnOnGetBoostersServerDone = NULL;

	if ( ! pFnOnGetBoostersServerDone )
		pFnOnGetBoostersServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36571 ];

	UPBItemShopServer_execOnGetBoostersServerDone_Parms OnGetBoostersServerDone_Parms;
	OnGetBoostersServerDone_Parms.requestId = requestId;
	OnGetBoostersServerDone_Parms.errocode = errocode;
	OnGetBoostersServerDone_Parms.subscriptionIgc = subscriptionIgc;
	OnGetBoostersServerDone_Parms.subscriptionXp = subscriptionXp;
	memcpy ( &OnGetBoostersServerDone_Parms.offers, &offers, 0xC );

	this->ProcessEvent ( pFnOnGetBoostersServerDone, &OnGetBoostersServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.GetBoostersServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopServer::GetBoostersServer ( )
{
	static UFunction* pFnGetBoostersServer = NULL;

	if ( ! pFnGetBoostersServer )
		pFnGetBoostersServer = (UFunction*) UObject::GObjObjects()->Data[ 36709 ];

	UPBItemShopServer_execGetBoostersServer_Parms GetBoostersServer_Parms;

	pFnGetBoostersServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoostersServer, &GetBoostersServer_Parms, NULL );

	pFnGetBoostersServer->FunctionFlags |= 0x400;

	return GetBoostersServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnDeleteEventByBackendDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// int                            EventCode                      ( CPF_Parm )

void UPBItemShopServer::OnDeleteEventByBackendDone ( int requestId, int ErrorCode, int EventCode )
{
	static UFunction* pFnOnDeleteEventByBackendDone = NULL;

	if ( ! pFnOnDeleteEventByBackendDone )
		pFnOnDeleteEventByBackendDone = (UFunction*) UObject::GObjObjects()->Data[ 36573 ];

	UPBItemShopServer_execOnDeleteEventByBackendDone_Parms OnDeleteEventByBackendDone_Parms;
	OnDeleteEventByBackendDone_Parms.requestId = requestId;
	OnDeleteEventByBackendDone_Parms.ErrorCode = ErrorCode;
	OnDeleteEventByBackendDone_Parms.EventCode = EventCode;

	this->ProcessEvent ( pFnOnDeleteEventByBackendDone, &OnDeleteEventByBackendDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.DeleteEventByBackend
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            EventCode                      ( CPF_Parm )

int UPBItemShopServer::eventDeleteEventByBackend ( int EventCode )
{
	static UFunction* pFnDeleteEventByBackend = NULL;

	if ( ! pFnDeleteEventByBackend )
		pFnDeleteEventByBackend = (UFunction*) UObject::GObjObjects()->Data[ 36703 ];

	UPBItemShopServer_eventDeleteEventByBackend_Parms DeleteEventByBackend_Parms;
	DeleteEventByBackend_Parms.EventCode = EventCode;

	pFnDeleteEventByBackend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteEventByBackend, &DeleteEventByBackend_Parms, NULL );

	pFnDeleteEventByBackend->FunctionFlags |= 0x400;

	return DeleteEventByBackend_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnSubmitProgressionServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopServer::OnSubmitProgressionServerDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnSubmitProgressionServerDone = NULL;

	if ( ! pFnOnSubmitProgressionServerDone )
		pFnOnSubmitProgressionServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36575 ];

	UPBItemShopServer_execOnSubmitProgressionServerDone_Parms OnSubmitProgressionServerDone_Parms;
	OnSubmitProgressionServerDone_Parms.requestId = requestId;
	OnSubmitProgressionServerDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnSubmitProgressionServerDone, &OnSubmitProgressionServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.SubmitProgression
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FPBSubmitProgressionProfileData > ProfileData                    ( CPF_Parm | CPF_NeedCtorLink )

int UPBItemShopServer::SubmitProgression ( TArray< struct FPBSubmitProgressionProfileData > ProfileData )
{
	static UFunction* pFnSubmitProgression = NULL;

	if ( ! pFnSubmitProgression )
		pFnSubmitProgression = (UFunction*) UObject::GObjObjects()->Data[ 36697 ];

	UPBItemShopServer_execSubmitProgression_Parms SubmitProgression_Parms;
	memcpy ( &SubmitProgression_Parms.ProfileData, &ProfileData, 0xC );

	pFnSubmitProgression->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitProgression, &SubmitProgression_Parms, NULL );

	pFnSubmitProgression->FunctionFlags |= 0x400;

	return SubmitProgression_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnGetProgressionDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// float                          Heat2Fans                      ( CPF_Parm )
// float                          Heat2IGC                       ( CPF_Parm )
// float                          FormulaPower                   ( CPF_Parm )
// int                            FormulaA                       ( CPF_Parm )
// int                            FormulaB                       ( CPF_Parm )
// int                            FormulaC                       ( CPF_Parm )
// int                            MaxNumCreditBoost              ( CPF_Parm )
// int                            MaxNumXpBoost                  ( CPF_Parm )
// int                            MaxPercentageCreditBoost       ( CPF_Parm )
// int                            MaxPercentageXpBoost           ( CPF_Parm )

void UPBItemShopServer::OnGetProgressionDone ( int requestId, int ErrorCode, float Heat2Fans, float Heat2IGC, float FormulaPower, int FormulaA, int FormulaB, int FormulaC, int MaxNumCreditBoost, int MaxNumXpBoost, int MaxPercentageCreditBoost, int MaxPercentageXpBoost )
{
	static UFunction* pFnOnGetProgressionDone = NULL;

	if ( ! pFnOnGetProgressionDone )
		pFnOnGetProgressionDone = (UFunction*) UObject::GObjObjects()->Data[ 36577 ];

	UPBItemShopServer_execOnGetProgressionDone_Parms OnGetProgressionDone_Parms;
	OnGetProgressionDone_Parms.requestId = requestId;
	OnGetProgressionDone_Parms.ErrorCode = ErrorCode;
	OnGetProgressionDone_Parms.Heat2Fans = Heat2Fans;
	OnGetProgressionDone_Parms.Heat2IGC = Heat2IGC;
	OnGetProgressionDone_Parms.FormulaPower = FormulaPower;
	OnGetProgressionDone_Parms.FormulaA = FormulaA;
	OnGetProgressionDone_Parms.FormulaB = FormulaB;
	OnGetProgressionDone_Parms.FormulaC = FormulaC;
	OnGetProgressionDone_Parms.MaxNumCreditBoost = MaxNumCreditBoost;
	OnGetProgressionDone_Parms.MaxNumXpBoost = MaxNumXpBoost;
	OnGetProgressionDone_Parms.MaxPercentageCreditBoost = MaxPercentageCreditBoost;
	OnGetProgressionDone_Parms.MaxPercentageXpBoost = MaxPercentageXpBoost;

	this->ProcessEvent ( pFnOnGetProgressionDone, &OnGetProgressionDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.GetProgression
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopServer::GetProgression ( )
{
	static UFunction* pFnGetProgression = NULL;

	if ( ! pFnGetProgression )
		pFnGetProgression = (UFunction*) UObject::GObjObjects()->Data[ 36683 ];

	UPBItemShopServer_execGetProgression_Parms GetProgression_Parms;

	pFnGetProgression->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProgression, &GetProgression_Parms, NULL );

	pFnGetProgression->FunctionFlags |= 0x400;

	return GetProgression_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnIncrementCoolnessServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopServer::OnIncrementCoolnessServerDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnIncrementCoolnessServerDone = NULL;

	if ( ! pFnOnIncrementCoolnessServerDone )
		pFnOnIncrementCoolnessServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36579 ];

	UPBItemShopServer_execOnIncrementCoolnessServerDone_Parms OnIncrementCoolnessServerDone_Parms;
	OnIncrementCoolnessServerDone_Parms.requestId = requestId;
	OnIncrementCoolnessServerDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnIncrementCoolnessServerDone, &OnIncrementCoolnessServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.IncrementCoolnessServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// int                            incrementValue                 ( CPF_Parm )

int UPBItemShopServer::IncrementCoolnessServer ( struct FGuid ProfileId, int incrementValue )
{
	static UFunction* pFnIncrementCoolnessServer = NULL;

	if ( ! pFnIncrementCoolnessServer )
		pFnIncrementCoolnessServer = (UFunction*) UObject::GObjObjects()->Data[ 36677 ];

	UPBItemShopServer_execIncrementCoolnessServer_Parms IncrementCoolnessServer_Parms;
	memcpy ( &IncrementCoolnessServer_Parms.ProfileId, &ProfileId, 0x10 );
	IncrementCoolnessServer_Parms.incrementValue = incrementValue;

	pFnIncrementCoolnessServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIncrementCoolnessServer, &IncrementCoolnessServer_Parms, NULL );

	pFnIncrementCoolnessServer->FunctionFlags |= 0x400;

	return IncrementCoolnessServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnSendPlayerStatusServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

void UPBItemShopServer::OnSendPlayerStatusServerDone ( int requestId, int ErrorCode, struct FGuid ProfileId )
{
	static UFunction* pFnOnSendPlayerStatusServerDone = NULL;

	if ( ! pFnOnSendPlayerStatusServerDone )
		pFnOnSendPlayerStatusServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36581 ];

	UPBItemShopServer_execOnSendPlayerStatusServerDone_Parms OnSendPlayerStatusServerDone_Parms;
	OnSendPlayerStatusServerDone_Parms.requestId = requestId;
	OnSendPlayerStatusServerDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnSendPlayerStatusServerDone_Parms.ProfileId, &ProfileId, 0x10 );

	this->ProcessEvent ( pFnOnSendPlayerStatusServerDone, &OnSendPlayerStatusServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.SendPlayerStatusServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// int                            Status                         ( CPF_Parm )
// struct FGuid                   orchestratorId                 ( CPF_Parm )

int UPBItemShopServer::SendPlayerStatusServer ( struct FGuid ProfileId, int Status, struct FGuid orchestratorId )
{
	static UFunction* pFnSendPlayerStatusServer = NULL;

	if ( ! pFnSendPlayerStatusServer )
		pFnSendPlayerStatusServer = (UFunction*) UObject::GObjObjects()->Data[ 36669 ];

	UPBItemShopServer_execSendPlayerStatusServer_Parms SendPlayerStatusServer_Parms;
	memcpy ( &SendPlayerStatusServer_Parms.ProfileId, &ProfileId, 0x10 );
	SendPlayerStatusServer_Parms.Status = Status;
	memcpy ( &SendPlayerStatusServer_Parms.orchestratorId, &orchestratorId, 0x10 );

	pFnSendPlayerStatusServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendPlayerStatusServer, &SendPlayerStatusServer_Parms, NULL );

	pFnSendPlayerStatusServer->FunctionFlags |= 0x400;

	return SendPlayerStatusServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnGetSubscriptionModeServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// struct FGuid                   subscriptionId                 ( CPF_Parm )
// int                            subscriptionCreditsBoost       ( CPF_Parm )
// int                            subscriptionXpBoost            ( CPF_Parm )
// int                            slowWeaponDamage               ( CPF_Parm )
// int                            groupIgcBoost                  ( CPF_Parm )
// int                            groupXpBoost                   ( CPF_Parm )

void UPBItemShopServer::OnGetSubscriptionModeServerDone ( int requestId, int ErrorCode, struct FGuid ProfileId, struct FGuid subscriptionId, int subscriptionCreditsBoost, int subscriptionXpBoost, int slowWeaponDamage, int groupIgcBoost, int groupXpBoost )
{
	static UFunction* pFnOnGetSubscriptionModeServerDone = NULL;

	if ( ! pFnOnGetSubscriptionModeServerDone )
		pFnOnGetSubscriptionModeServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36583 ];

	UPBItemShopServer_execOnGetSubscriptionModeServerDone_Parms OnGetSubscriptionModeServerDone_Parms;
	OnGetSubscriptionModeServerDone_Parms.requestId = requestId;
	OnGetSubscriptionModeServerDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetSubscriptionModeServerDone_Parms.ProfileId, &ProfileId, 0x10 );
	memcpy ( &OnGetSubscriptionModeServerDone_Parms.subscriptionId, &subscriptionId, 0x10 );
	OnGetSubscriptionModeServerDone_Parms.subscriptionCreditsBoost = subscriptionCreditsBoost;
	OnGetSubscriptionModeServerDone_Parms.subscriptionXpBoost = subscriptionXpBoost;
	OnGetSubscriptionModeServerDone_Parms.slowWeaponDamage = slowWeaponDamage;
	OnGetSubscriptionModeServerDone_Parms.groupIgcBoost = groupIgcBoost;
	OnGetSubscriptionModeServerDone_Parms.groupXpBoost = groupXpBoost;

	this->ProcessEvent ( pFnOnGetSubscriptionModeServerDone, &OnGetSubscriptionModeServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.GetSubscriptionModeServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

int UPBItemShopServer::GetSubscriptionModeServer ( struct FGuid ProfileId )
{
	static UFunction* pFnGetSubscriptionModeServer = NULL;

	if ( ! pFnGetSubscriptionModeServer )
		pFnGetSubscriptionModeServer = (UFunction*) UObject::GObjObjects()->Data[ 36657 ];

	UPBItemShopServer_execGetSubscriptionModeServer_Parms GetSubscriptionModeServer_Parms;
	memcpy ( &GetSubscriptionModeServer_Parms.ProfileId, &ProfileId, 0x10 );

	pFnGetSubscriptionModeServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSubscriptionModeServer, &GetSubscriptionModeServer_Parms, NULL );

	pFnGetSubscriptionModeServer->FunctionFlags |= 0x400;

	return GetSubscriptionModeServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnGetPresetsServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            errocode                       ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// TArray< struct FPBItemServer > items                          ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopServer::OnGetPresetsServerDone ( int requestId, int errocode, struct FGuid ProfileId, TArray< struct FPBItemServer > items )
{
	static UFunction* pFnOnGetPresetsServerDone = NULL;

	if ( ! pFnOnGetPresetsServerDone )
		pFnOnGetPresetsServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36585 ];

	UPBItemShopServer_execOnGetPresetsServerDone_Parms OnGetPresetsServerDone_Parms;
	OnGetPresetsServerDone_Parms.requestId = requestId;
	OnGetPresetsServerDone_Parms.errocode = errocode;
	memcpy ( &OnGetPresetsServerDone_Parms.ProfileId, &ProfileId, 0x10 );
	memcpy ( &OnGetPresetsServerDone_Parms.items, &items, 0xC );

	this->ProcessEvent ( pFnOnGetPresetsServerDone, &OnGetPresetsServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.GetPresetsServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

int UPBItemShopServer::GetPresetsServer ( struct FGuid ProfileId )
{
	static UFunction* pFnGetPresetsServer = NULL;

	if ( ! pFnGetPresetsServer )
		pFnGetPresetsServer = (UFunction*) UObject::GObjObjects()->Data[ 36649 ];

	UPBItemShopServer_execGetPresetsServer_Parms GetPresetsServer_Parms;
	memcpy ( &GetPresetsServer_Parms.ProfileId, &ProfileId, 0x10 );

	pFnGetPresetsServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPresetsServer, &GetPresetsServer_Parms, NULL );

	pFnGetPresetsServer->FunctionFlags |= 0x400;

	return GetPresetsServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnUpdateProfileDetailsServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

void UPBItemShopServer::OnUpdateProfileDetailsServerDone ( int requestId, int ErrorCode, struct FGuid ProfileId )
{
	static UFunction* pFnOnUpdateProfileDetailsServerDone = NULL;

	if ( ! pFnOnUpdateProfileDetailsServerDone )
		pFnOnUpdateProfileDetailsServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36587 ];

	UPBItemShopServer_execOnUpdateProfileDetailsServerDone_Parms OnUpdateProfileDetailsServerDone_Parms;
	OnUpdateProfileDetailsServerDone_Parms.requestId = requestId;
	OnUpdateProfileDetailsServerDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnUpdateProfileDetailsServerDone_Parms.ProfileId, &ProfileId, 0x10 );

	this->ProcessEvent ( pFnOnUpdateProfileDetailsServerDone, &OnUpdateProfileDetailsServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.UpdateProfileDetailsServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// struct FString                 Field                          ( CPF_Parm | CPF_NeedCtorLink )
// int                            Value                          ( CPF_Parm )

int UPBItemShopServer::UpdateProfileDetailsServer ( struct FGuid ProfileId, struct FString Field, int Value )
{
	static UFunction* pFnUpdateProfileDetailsServer = NULL;

	if ( ! pFnUpdateProfileDetailsServer )
		pFnUpdateProfileDetailsServer = (UFunction*) UObject::GObjObjects()->Data[ 36641 ];

	UPBItemShopServer_execUpdateProfileDetailsServer_Parms UpdateProfileDetailsServer_Parms;
	memcpy ( &UpdateProfileDetailsServer_Parms.ProfileId, &ProfileId, 0x10 );
	memcpy ( &UpdateProfileDetailsServer_Parms.Field, &Field, 0xC );
	UpdateProfileDetailsServer_Parms.Value = Value;

	pFnUpdateProfileDetailsServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateProfileDetailsServer, &UpdateProfileDetailsServer_Parms, NULL );

	pFnUpdateProfileDetailsServer->FunctionFlags |= 0x400;

	return UpdateProfileDetailsServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnGetProfileDetailsServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FGuid                   ProfileId                      ( CPF_Parm )
// struct FString                 CharacterName                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SessionId                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FGuid                   characterGender                ( CPF_Parm )
// struct FGuid                   characterHead                  ( CPF_Parm )
// struct FGuid                   characterSkin                  ( CPF_Parm )
// int                            avatarPicture                  ( CPF_Parm )
// int                            Rank                           ( CPF_Parm )
// int                            xp                             ( CPF_Parm )
// float                          xpPercentage                   ( CPF_Parm )
// int                            credits                        ( CPF_Parm )
// int                            coolness                       ( CPF_Parm )
// int                            profileReputation              ( CPF_Parm )
// unsigned char                  accountLevel                   ( CPF_Parm )

void UPBItemShopServer::OnGetProfileDetailsServerDone ( int requestId, int ErrorCode, struct FGuid ProfileId, struct FString CharacterName, struct FString UserId, struct FString SessionId, struct FGuid characterGender, struct FGuid characterHead, struct FGuid characterSkin, int avatarPicture, int Rank, int xp, float xpPercentage, int credits, int coolness, int profileReputation, unsigned char accountLevel )
{
	static UFunction* pFnOnGetProfileDetailsServerDone = NULL;

	if ( ! pFnOnGetProfileDetailsServerDone )
		pFnOnGetProfileDetailsServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36589 ];

	UPBItemShopServer_execOnGetProfileDetailsServerDone_Parms OnGetProfileDetailsServerDone_Parms;
	OnGetProfileDetailsServerDone_Parms.requestId = requestId;
	OnGetProfileDetailsServerDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetProfileDetailsServerDone_Parms.ProfileId, &ProfileId, 0x10 );
	memcpy ( &OnGetProfileDetailsServerDone_Parms.CharacterName, &CharacterName, 0xC );
	memcpy ( &OnGetProfileDetailsServerDone_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnGetProfileDetailsServerDone_Parms.SessionId, &SessionId, 0xC );
	memcpy ( &OnGetProfileDetailsServerDone_Parms.characterGender, &characterGender, 0x10 );
	memcpy ( &OnGetProfileDetailsServerDone_Parms.characterHead, &characterHead, 0x10 );
	memcpy ( &OnGetProfileDetailsServerDone_Parms.characterSkin, &characterSkin, 0x10 );
	OnGetProfileDetailsServerDone_Parms.avatarPicture = avatarPicture;
	OnGetProfileDetailsServerDone_Parms.Rank = Rank;
	OnGetProfileDetailsServerDone_Parms.xp = xp;
	OnGetProfileDetailsServerDone_Parms.xpPercentage = xpPercentage;
	OnGetProfileDetailsServerDone_Parms.credits = credits;
	OnGetProfileDetailsServerDone_Parms.coolness = coolness;
	OnGetProfileDetailsServerDone_Parms.profileReputation = profileReputation;
	OnGetProfileDetailsServerDone_Parms.accountLevel = accountLevel;

	this->ProcessEvent ( pFnOnGetProfileDetailsServerDone, &OnGetProfileDetailsServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.GetProfileDetailsServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGuid                   ProfileId                      ( CPF_Parm )

int UPBItemShopServer::GetProfileDetailsServer ( struct FGuid ProfileId )
{
	static UFunction* pFnGetProfileDetailsServer = NULL;

	if ( ! pFnGetProfileDetailsServer )
		pFnGetProfileDetailsServer = (UFunction*) UObject::GObjObjects()->Data[ 36621 ];

	UPBItemShopServer_execGetProfileDetailsServer_Parms GetProfileDetailsServer_Parms;
	memcpy ( &GetProfileDetailsServer_Parms.ProfileId, &ProfileId, 0x10 );

	pFnGetProfileDetailsServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProfileDetailsServer, &GetProfileDetailsServer_Parms, NULL );

	pFnGetProfileDetailsServer->FunctionFlags |= 0x400;

	return GetProfileDetailsServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnLogoutServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopServer::OnLogoutServerDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnLogoutServerDone = NULL;

	if ( ! pFnOnLogoutServerDone )
		pFnOnLogoutServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36591 ];

	UPBItemShopServer_execOnLogoutServerDone_Parms OnLogoutServerDone_Parms;
	OnLogoutServerDone_Parms.requestId = requestId;
	OnLogoutServerDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLogoutServerDone, &OnLogoutServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.LogoutServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopServer::LogoutServer ( )
{
	static UFunction* pFnLogoutServer = NULL;

	if ( ! pFnLogoutServer )
		pFnLogoutServer = (UFunction*) UObject::GObjObjects()->Data[ 36617 ];

	UPBItemShopServer_execLogoutServer_Parms LogoutServer_Parms;

	pFnLogoutServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogoutServer, &LogoutServer_Parms, NULL );

	pFnLogoutServer->FunctionFlags |= 0x400;

	return LogoutServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnLoginServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )
// struct FString                 gameSpyToken                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 gameSpyChallenge               ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopServer::OnLoginServerDone ( int requestId, int ErrorCode, struct FString gameSpyToken, struct FString gameSpyChallenge )
{
	static UFunction* pFnOnLoginServerDone = NULL;

	if ( ! pFnOnLoginServerDone )
		pFnOnLoginServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36593 ];

	UPBItemShopServer_execOnLoginServerDone_Parms OnLoginServerDone_Parms;
	OnLoginServerDone_Parms.requestId = requestId;
	OnLoginServerDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnLoginServerDone_Parms.gameSpyToken, &gameSpyToken, 0xC );
	memcpy ( &OnLoginServerDone_Parms.gameSpyChallenge, &gameSpyChallenge, 0xC );

	this->ProcessEvent ( pFnOnLoginServerDone, &OnLoginServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.LoginServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ServerName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FGuid                   gameRequestId                  ( CPF_Parm )

int UPBItemShopServer::LoginServer ( struct FString ServerName, struct FString Password, struct FGuid gameRequestId )
{
	static UFunction* pFnLoginServer = NULL;

	if ( ! pFnLoginServer )
		pFnLoginServer = (UFunction*) UObject::GObjObjects()->Data[ 36608 ];

	UPBItemShopServer_execLoginServer_Parms LoginServer_Parms;
	memcpy ( &LoginServer_Parms.ServerName, &ServerName, 0xC );
	memcpy ( &LoginServer_Parms.Password, &Password, 0xC );
	memcpy ( &LoginServer_Parms.gameRequestId, &gameRequestId, 0x10 );

	pFnLoginServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoginServer, &LoginServer_Parms, NULL );

	pFnLoginServer->FunctionFlags |= 0x400;

	return LoginServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnPingServerDone
// [0x00120000] 
// Parameters infos:
// int                            requestId                      ( CPF_Parm )
// int                            ErrorCode                      ( CPF_Parm )

void UPBItemShopServer::OnPingServerDone ( int requestId, int ErrorCode )
{
	static UFunction* pFnOnPingServerDone = NULL;

	if ( ! pFnOnPingServerDone )
		pFnOnPingServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36595 ];

	UPBItemShopServer_execOnPingServerDone_Parms OnPingServerDone_Parms;
	OnPingServerDone_Parms.requestId = requestId;
	OnPingServerDone_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnPingServerDone, &OnPingServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.PingServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPBItemShopServer::PingServer ( )
{
	static UFunction* pFnPingServer = NULL;

	if ( ! pFnPingServer )
		pFnPingServer = (UFunction*) UObject::GObjObjects()->Data[ 36604 ];

	UPBItemShopServer_execPingServer_Parms PingServer_Parms;

	pFnPingServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPingServer, &PingServer_Parms, NULL );

	pFnPingServer->FunctionFlags |= 0x400;

	return PingServer_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.OnGetEventsByBackendServerDone
// [0x00120000] 
// Parameters infos:
// int                            ErrorCode                      ( CPF_Parm )
// TArray< int >                  eventCodes                     ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FPBCriticalEvent > criticalEvents                 ( CPF_Parm | CPF_NeedCtorLink )

void UPBItemShopServer::OnGetEventsByBackendServerDone ( int ErrorCode, TArray< int > eventCodes, TArray< struct FPBCriticalEvent > criticalEvents )
{
	static UFunction* pFnOnGetEventsByBackendServerDone = NULL;

	if ( ! pFnOnGetEventsByBackendServerDone )
		pFnOnGetEventsByBackendServerDone = (UFunction*) UObject::GObjObjects()->Data[ 36597 ];

	UPBItemShopServer_execOnGetEventsByBackendServerDone_Parms OnGetEventsByBackendServerDone_Parms;
	OnGetEventsByBackendServerDone_Parms.ErrorCode = ErrorCode;
	memcpy ( &OnGetEventsByBackendServerDone_Parms.eventCodes, &eventCodes, 0xC );
	memcpy ( &OnGetEventsByBackendServerDone_Parms.criticalEvents, &criticalEvents, 0xC );

	this->ProcessEvent ( pFnOnGetEventsByBackendServerDone, &OnGetEventsByBackendServerDone_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.OnDisconnect
// [0x00120000] 
// Parameters infos:

void UPBItemShopServer::OnDisconnect ( )
{
	static UFunction* pFnOnDisconnect = NULL;

	if ( ! pFnOnDisconnect )
		pFnOnDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 36565 ];

	UPBItemShopServer_execOnDisconnect_Parms OnDisconnect_Parms;

	this->ProcessEvent ( pFnOnDisconnect, &OnDisconnect_Parms, NULL );
};

// Function PBItemShop.PBItemShopServer.SetServerResponseDelay
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            milliseconds                   ( CPF_Parm )

void UPBItemShopServer::SetServerResponseDelay ( int milliseconds )
{
	static UFunction* pFnSetServerResponseDelay = NULL;

	if ( ! pFnSetServerResponseDelay )
		pFnSetServerResponseDelay = (UFunction*) UObject::GObjObjects()->Data[ 36563 ];

	UPBItemShopServer_execSetServerResponseDelay_Parms SetServerResponseDelay_Parms;
	SetServerResponseDelay_Parms.milliseconds = milliseconds;

	pFnSetServerResponseDelay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetServerResponseDelay, &SetServerResponseDelay_Parms, NULL );

	pFnSetServerResponseDelay->FunctionFlags |= 0x400;
};

// Function PBItemShop.PBItemShopServer.ServerAPIReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPBItemShopServer::ServerAPIReady ( )
{
	static UFunction* pFnServerAPIReady = NULL;

	if ( ! pFnServerAPIReady )
		pFnServerAPIReady = (UFunction*) UObject::GObjObjects()->Data[ 36561 ];

	UPBItemShopServer_execServerAPIReady_Parms ServerAPIReady_Parms;

	pFnServerAPIReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnServerAPIReady, &ServerAPIReady_Parms, NULL );

	pFnServerAPIReady->FunctionFlags |= 0x400;

	return ServerAPIReady_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.ServerCancelRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            requestId                      ( CPF_Parm )

bool UPBItemShopServer::ServerCancelRequest ( int requestId )
{
	static UFunction* pFnServerCancelRequest = NULL;

	if ( ! pFnServerCancelRequest )
		pFnServerCancelRequest = (UFunction*) UObject::GObjObjects()->Data[ 36558 ];

	UPBItemShopServer_execServerCancelRequest_Parms ServerCancelRequest_Parms;
	ServerCancelRequest_Parms.requestId = requestId;

	pFnServerCancelRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnServerCancelRequest, &ServerCancelRequest_Parms, NULL );

	pFnServerCancelRequest->FunctionFlags |= 0x400;

	return ServerCancelRequest_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.PBServerItemToClient
// [0x00422002] 
// Parameters infos:
// struct FPBItemServer           pServerItem                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FPBItem                 pItem                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBItemShopServer::PBServerItemToClient ( struct FPBItemServer pServerItem, struct FPBItem* pItem )
{
	static UFunction* pFnPBServerItemToClient = NULL;

	if ( ! pFnPBServerItemToClient )
		pFnPBServerItemToClient = (UFunction*) UObject::GObjObjects()->Data[ 36555 ];

	UPBItemShopServer_execPBServerItemToClient_Parms PBServerItemToClient_Parms;
	memcpy ( &PBServerItemToClient_Parms.pServerItem, &pServerItem, 0x94 );

	this->ProcessEvent ( pFnPBServerItemToClient, &PBServerItemToClient_Parms, NULL );

	if ( pItem )
		memcpy ( pItem, &PBServerItemToClient_Parms.pItem, 0xBC );
};

// Function PBItemShop.PBItemShopServer.ServerItemTypeToClientItemType
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  serverItemType                 ( CPF_Parm )

struct FString UPBItemShopServer::ServerItemTypeToClientItemType ( unsigned char serverItemType )
{
	static UFunction* pFnServerItemTypeToClientItemType = NULL;

	if ( ! pFnServerItemTypeToClientItemType )
		pFnServerItemTypeToClientItemType = (UFunction*) UObject::GObjObjects()->Data[ 36552 ];

	UPBItemShopServer_execServerItemTypeToClientItemType_Parms ServerItemTypeToClientItemType_Parms;
	ServerItemTypeToClientItemType_Parms.serverItemType = serverItemType;

	this->ProcessEvent ( pFnServerItemTypeToClientItemType, &ServerItemTypeToClientItemType_Parms, NULL );

	return ServerItemTypeToClientItemType_Parms.ReturnValue;
};

// Function PBItemShop.PBItemShopServer.GetInstance
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// class UPBItemShopServer*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPBItemShopServer* UPBItemShopServer::GetInstance ( )
{
	static UFunction* pFnGetInstance = NULL;

	if ( ! pFnGetInstance )
		pFnGetInstance = (UFunction*) UObject::GObjObjects()->Data[ 36550 ];

	UPBItemShopServer_execGetInstance_Parms GetInstance_Parms;

	pFnGetInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInstance, &GetInstance_Parms, NULL );

	pFnGetInstance->FunctionFlags |= 0x400;

	return GetInstance_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif