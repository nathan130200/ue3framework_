/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PBItemShop_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult
// 0x0008
struct FTPBItemShopResult
{
	int                                                requestId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopResult.PBDate
// 0x0014
struct FPBDate
{
	int                                                minute;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Hour;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Day;                                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Month;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Year;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PBItemShop.PBItemShopResult.PBOffer
// 0x00D8
struct FPBOffer
{
	struct FGuid                                       OfferId;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FPBDate                                     offerStart;                                       		// 0x0010 (0x0014) [0x0000000000000000]              
	struct FPBDate                                     offerEnd;                                         		// 0x0024 (0x0014) [0x0000000000000000]              
	int                                                priceModel;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                costsCoins;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                originalCostsCoins;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                costsCredits;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                originalCostsCredits;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FGuid                                       itemId;                                           		// 0x004C (0x0010) [0x0000000000000000]              
	struct FString                                     Type;                                             		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Category;                                         		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                capacityInventory;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      uniqueInventory : 1;                              		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                requiredRank;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	struct FGuid                                       requiredItem;                                     		// 0x0080 (0x0010) [0x0000000000000000]              
	struct FGuid                                       requiredSubscription;                             		// 0x0090 (0x0010) [0x0000000000000000]              
	unsigned long                                      needsRepairing : 1;                               		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                leaseTime;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FGuid                                       colorId;                                          		// 0x00A8 (0x0010) [0x0000000000000000]              
	int                                                colorGroup;                                       		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                coolnessValue;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                requiredCoolness;                                 		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                skillLevel;                                       		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                serviceType;                                      		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                marketCategory;                                   		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                creditsDiscount;                                  		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                coinsDiscount;                                    		// 0x00D4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.PBUniqueOffer
// 0x0028
struct FPBUniqueOffer
{
	struct FGuid                                       offerItemGuid;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                marketCategory;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                amountOffers;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     Category;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                minRank;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBCachedOffersMap.TPBCachedUniqueOffer
// 0x0068
struct FTPBCachedUniqueOffer
{
	struct FPBUniqueOffer                              uniqueoffer;                                      		// 0x0000 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                market_category;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FMap_Mirror                                 item_offers;                                      		// 0x002C (0x003C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct PBItemShop.PBCachedOffersMap.TPBCachedCategory
// 0x0080
struct FTPBCachedCategory
{
	struct FMap_Mirror                                 offers;                                           		// 0x0000 (0x003C) [0x0000000000001000]              ( CPF_Native )
	struct FMap_Mirror                                 unique_offers;                                    		// 0x003C (0x003C) [0x0000000000001000]              ( CPF_Native )
	int                                                market_category_unique;                           		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                market_category;                                  		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.TItemShopCallback
// 0x000C
struct FTItemShopCallback
{
	struct FName                                       CallbackName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     CallbackObject;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.TItemShopDelegate
// 0x0014
struct FTItemShopDelegate
{
	struct FName                                       DelegateCategory;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FTItemShopCallback >                Callbacks;                                        		// 0x0008 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.TCallItem
// 0x0018
struct FTCallItem
{
	struct FName                                       functionName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    Param;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                requestId;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      Called : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PBItemShop.PBItemShopClient.TPBItemShopUnlockedOffers
// 0x001C
struct FTPBItemShopUnlockedOffers
{
	struct FGuid                                       character_guid;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FPBOffer >                          offers;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.PBPromoCodeOffer
// 0x00DC
struct FPBPromoCodeOffer
{
	struct FPBOffer                                    Offer;                                            		// 0x0000 (0x00D8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Result;                                           		// 0x00D8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.PBBasketItem
// 0x003C
struct FPBBasketItem
{
	struct FGuid                                       basketId;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       OfferId;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FGuid                                       itemId;                                           		// 0x0020 (0x0010) [0x0000000000000000]              
	int                                                paymentOption;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                costCoins;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                costCredits;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.PBItem
// 0x00BC
struct FPBItem
{
	struct FGuid                                       transactionId;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       itemId;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     Type;                                             		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Category;                                         		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                capacityInventory;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                quantity;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      uniqueInventory : 1;                              		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                requiredRank;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FGuid                                       requiredItem;                                     		// 0x0048 (0x0010) [0x0000000000000000]              
	struct FGuid                                       requiredSubscription;                             		// 0x0058 (0x0010) [0x0000000000000000]              
	unsigned long                                      needsRepairing : 1;                               		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                leaseTime;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	struct FGuid                                       serialNumber;                                     		// 0x0070 (0x0010) [0x0000000000000000]              
	struct FGuid                                       colorItem;                                        		// 0x0080 (0x0010) [0x0000000000000000]              
	int                                                colorGroup;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                Preset;                                           		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                condition;                                        		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                maxCondition;                                     		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                skillLevel;                                       		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                XpBoost;                                          		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                creditBoost;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                groupXpBoost;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                groupIgcBoost;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                repairCostsCoins;                                 		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                repairCostsCredits;                               		// 0x00B8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.PBProfile
// 0x0024
struct FPBProfile
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     CharacterName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                avatarPicture;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.PBCharacterProfile
// 0x00B9
struct FPBCharacterProfile
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       characterGender;                                  		// 0x000C (0x0010) [0x0000000000000000]              
	struct FGuid                                       characterHead;                                    		// 0x001C (0x0010) [0x0000000000000000]              
	struct FGuid                                       characterSkin;                                    		// 0x002C (0x0010) [0x0000000000000000]              
	int                                                avatarPicture;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                xp;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              xpPercentage;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                credits;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                coins;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                coolness;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                lastDisplayedCoolness;                            		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                profileReputation;                                		// 0x005C (0x0004) [0x0000000000000000]              
	TArray< struct FPBItem >                           inventoryItems;                                   		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           weaponPresetNames;                                		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       subscriptionId;                                   		// 0x0078 (0x0010) [0x0000000000000000]              
	int                                                subscriptionCreditsBoost;                         		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                subscriptionXpBoost;                              		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                subscriptionSlowWeaponDamage;                     		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                subscriptionSlowStyleLoss;                        		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                subscriptionGroupXpBoost;                         		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                subscriptionGroupCreditsBoost;                    		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                subscriptionItemShopRankBonus;                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                subscriptionDuration;                             		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                subscriptionDiscount;                             		// 0x00A8 (0x0004) [0x0000000000000000]              
	TArray< struct FPBItem >                           latestInventoryEntries;                           		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      accountLevel;                                     		// 0x00B8 (0x0001) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.PBShopEvent
// 0x0048
struct FPBShopEvent
{
	int                                                EventCode;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EventPriority;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EventType;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CoinsDelta;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                CreditsDelta;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                XpDelta;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	TArray< struct FPBItem >                           ItemsAdded;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPBItem >                           ItemsRemoved;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.PBDefaultBugInfo
// 0x00E8
struct FPBDefaultBugInfo
{
	struct FString                                     Headline;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      BugType;                                          		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      ReproductionType;                                 		// 0x000D (0x0001) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Reproduction;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPBDate                                     Date;                                             		// 0x0028 (0x0014) [0x0000000000000000]              
	struct FString                                     GameName;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BuildVersion;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                LicenseeVersion;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                BuildFromChangeList;                              		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     CommandLine;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BaseDirectory;                                    		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ComputerName;                                     		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UserName;                                         		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ProfileName;                                      		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Platform;                                         		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsEngineDebug : 1;                                		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Language;                                         		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IP;                                               		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OpenMenu;                                         		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     CharacterPosition;                                		// 0x00D0 (0x000C) [0x0000000000000000]              
	struct FVector                                     CharacterDirection;                               		// 0x00DC (0x000C) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.PBReportInfo
// 0x0050
struct FPBReportInfo
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ipAddress;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     topic;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Year;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Month;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Hour;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                minute;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     GameName;                                         		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.PBSurveyAnswer
// 0x0014
struct FPBSurveyAnswer
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Answer;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsAnswered : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PBItemShop.PBItemShopClient.PBSurveyQuestion
// 0x002C
struct FPBSurveyQuestion
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      Required : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Question;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Clarification;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Choices;                                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.PBSurvey
// 0x001C
struct FPBSurvey
{
	int                                                SurveyID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SurveyName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPBSurveyQuestion >                 SurveyQuestions;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.PBNews
// 0x003C
struct FPBNews
{
	int                                                NewsID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPBDate                                     PublishedDate;                                    		// 0x0004 (0x0014) [0x0000000000000000]              
	struct FString                                     Headline;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FullText;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPBOffer >                          offers;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.PbmnAccountProfile
// 0x0024
struct FPbmnAccountProfile
{
	struct FString                                     AccountNick;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AccountName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharacterName;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.PbmnClientProfileDetail
// 0x002C
struct FPbmnClientProfileDetail
{
	struct FString                                     AccountNick;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AccountName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharacterName;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AvatarIcon;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                LastOnline;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.TPBBoosterInfo
// 0x0030
struct FTPBBoosterInfo
{
	struct FGuid                                       BoosterGUID;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     BoosterName;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                XpBoost;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                XpBoostGroup;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                creditsBoost;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                CreditsBoostGroup;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUpdated : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PBItemShop.PBItemShopClient.SOEPrice
// 0x0020
struct FSOEPrice
{
	struct FString                                     scCurrencyCode;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     scFormattedPrice;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                scPriceIn100ths;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      scZero : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PBItemShop.PBItemShopClient.SOEStationCashProduct
// 0x0098
struct FSOEStationCashProduct
{
	struct FString                                     scDesc;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     scFullSKU;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                scProductId;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     scGameCode;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     scMarketingDesc;                                  		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                scOriginalAmount;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     scOriginalCurrencyCode;                           		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                scPrePromotionAmount;                             		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FSOEPrice                                   scPrePromotionPrice;                              		// 0x0048 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSOEPrice                                   scPrice;                                          		// 0x0068 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      scPricePromo : 1;                                 		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      scPromo : 1;                                      		// 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                scStationCashAmount;                              		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned long                                      scStationCashPromo : 1;                           		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                scStationCashPromoAmount;                         		// 0x0094 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopClient.SOEStationCashProductFundWallet
// 0x0040
struct FSOEStationCashProductFundWallet
{
	struct FString                                     scPrePromotionPrice;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                scPrePromotionStationCashAmount;                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     scPrice;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      scPricePromotion : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     scPurchasePromotionalText;                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                scStationCashAmount;                              		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      scStationCashPromotion : 1;                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     scPurchaseLegalText;                              		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopClient.TPBRegionList
// 0x0010
struct FTPBRegionList
{
	TArray< int >                                      OnlineRegions;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BestRegion;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnQueueChanged
// 0x0004(0x000C - 0x0008)
struct FTPBItemShopResult_OnQueueChanged : FTPBItemShopResult
{
	int                                                nQueueSize;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnDisconnect
// 0x0000(0x0008 - 0x0008)
struct FTPBItemShopResult_OnDisconnect : FTPBItemShopResult
{
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnSessionEnded
// 0x0014(0x001C - 0x0008)
struct FTPBItemShopResult_OnSessionEnded : FTPBItemShopResult
{
	int                                                Reason;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Detail;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnPingDone
// 0x0000(0x0008 - 0x0008)
struct FTPBItemShopResult_OnPingDone : FTPBItemShopResult
{
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnLoginDone
// 0x001C(0x0024 - 0x0008)
struct FTPBItemShopResult_OnLoginDone : FTPBItemShopResult
{
	struct FGuid                                       UserId;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FString                                     StationHandle;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnLogoutDone
// 0x0000(0x0008 - 0x0008)
struct FTPBItemShopResult_OnLogoutDone : FTPBItemShopResult
{
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnGetProgressionDone
// 0x0018(0x0020 - 0x0008)
struct FTPBItemShopResult_OnGetProgressionDone : FTPBItemShopResult
{
	float                                              Heat2xp;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Heat2credit;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              RankFormulaPower;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RankFormulaA;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RankFormulaB;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RankFormulaC;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnGetSubscriptionModeDone
// 0x0038(0x0040 - 0x0008)
struct FTPBItemShopResult_OnGetSubscriptionModeDone : FTPBItemShopResult
{
	struct FGuid                                       subscriptionId;                                   		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                creditsBoost;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                XpBoost;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                groupXpBoost;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                groupIgcBoost;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                slowWeaponDamage;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                slowStyleLoss;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                itemShopRankBonus;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Duration;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                discount;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      recuring : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PBItemShop.PBItemShopResult.TPBItemShopResult_OnGetOffersDone
// 0x000C(0x0014 - 0x0008)
struct FTPBItemShopResult_OnGetOffersDone : FTPBItemShopResult
{
	TArray< struct FPBOffer >                          offers;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopServer.PBOfferServer
// 0x00D8
struct FPBOfferServer
{
	struct FGuid                                       OfferId;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FPBDate                                     offerStart;                                       		// 0x0010 (0x0014) [0x0000000000000000]              
	struct FPBDate                                     offerEnd;                                         		// 0x0024 (0x0014) [0x0000000000000000]              
	int                                                priceModel;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                costsCoins;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                costsCredits;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FGuid                                       itemId;                                           		// 0x0044 (0x0010) [0x0000000000000000]              
	struct FString                                     Type;                                             		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Category;                                         		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                capacityInventory;                                		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      uniqueInventory : 1;                              		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                requiredRank;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FGuid                                       requiredItem;                                     		// 0x0078 (0x0010) [0x0000000000000000]              
	struct FGuid                                       requiredSubscription;                             		// 0x0088 (0x0010) [0x0000000000000000]              
	int                                                XpBoost;                                          		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                creditsBoost;                                     		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                groupXpBoost;                                     		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                GroupCreditBoost;                                 		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      needsRepairing : 1;                               		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                leaseTime;                                        		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FGuid                                       colorId;                                          		// 0x00B0 (0x0010) [0x0000000000000000]              
	int                                                colorGroup;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                requiredCoolness;                                 		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                AddedCoolness;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                serviceType;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                skillLevel;                                       		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                amountOffers;                                     		// 0x00D4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopServer.PBItemServer
// 0x0094
struct FPBItemServer
{
	struct FGuid                                       transactionId;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       itemId;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0020 (0x0001) [0x0000000000000000]              
	struct FString                                     Category;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                capacityInventory;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                quantity;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      uniqueInventory : 1;                              		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                requiredRank;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	struct FGuid                                       requiredItem;                                     		// 0x0040 (0x0010) [0x0000000000000000]              
	int                                                XpBoost;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                creditBoost;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                groupXpBoost;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                groupIgcBoost;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      needsRepairing : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                condition;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                maxCondition;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FGuid                                       serialNumber;                                     		// 0x006C (0x0010) [0x0000000000000000]              
	struct FGuid                                       colorId;                                          		// 0x007C (0x0010) [0x0000000000000000]              
	int                                                Preset;                                           		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                skillLevel;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopServer.WeaponConditionData
// 0x0014
struct FWeaponConditionData
{
	struct FGuid                                       serialNumber;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                newWeaponCondition;                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopServer.PBSubmitProgressionProfileData
// 0x002C
struct FPBSubmitProgressionProfileData
{
	struct FGuid                                       ClientProfileId;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                NewIGC;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NewFans;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              NewFansPercentage;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NewRank;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< struct FWeaponConditionData >              weaponConditions;                                 		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopServer.PBCriticalEvent
// 0x0034
struct FPBCriticalEvent
{
	int                                                EventCode;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EventPriority;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EventType;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       SubjectProfileId;                                 		// 0x0024 (0x0010) [0x0000000000000000]              
};

// ScriptStruct PBItemShop.PBItemShopServer.PBWeaponStatData
// 0x0054
struct FPBWeaponStatData
{
	struct FGuid                                       Weapon;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                damageDealt;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                shotsFired;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                shotsHit;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                avgHitDistance;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                avgKillDistance;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                headHitTotal;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                bodyHitTotal;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                legsHitTotal;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                totalTimeUsed;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FGuid                                       skillGuid;                                        		// 0x0038 (0x0010) [0x0000000000000000]              
	TArray< struct FGuid >                             modsSetup;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopServer.PBMatchProfileStatData
// 0x00BC
struct FPBMatchProfileStatData
{
	struct FGuid                                       ProfileId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                assists;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                heat;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                baseHeat;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                style;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                boostXp;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                boostXpGroup;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                boostIgc;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                boostIgcGroup;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                earnedRank;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                earnedXp;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                earnedIgc;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                killsInSafeZone;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                killsFromSafeZone;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                totalSuicides;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                totalTier1Used;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FGuid                                       tier1Skill;                                       		// 0x0054 (0x0010) [0x0000000000000000]              
	int                                                totalTier2Used;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FGuid                                       tier2Skill;                                       		// 0x0068 (0x0010) [0x0000000000000000]              
	int                                                totalTier3Used;                                   		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FGuid                                       tier3Skill;                                       		// 0x007C (0x0010) [0x0000000000000000]              
	int                                                totalTier4Used;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	struct FGuid                                       tier4Skill;                                       		// 0x0090 (0x0010) [0x0000000000000000]              
	int                                                tier1SkillLevel;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                tier2SkillLevel;                                  		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                tier3SkillLevel;                                  		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                tier4SkillLevel;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	TArray< struct FPBWeaponStatData >                 weaponStatData;                                   		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopServer.PBMatchStatsData
// 0x005C
struct FPBMatchStatsData
{
	struct FGuid                                       matchguid;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Map;                                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                matchTime;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                totalPlayers;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     gameMode;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                winningTeam;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                totalIgc;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                totalHeat;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                totalStyle;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                teamAConquer1;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                teamAConquer2;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                teamBConquer1;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                teamBConquer2;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	TArray< struct FPBMatchProfileStatData >           matchProfileStatData;                             		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PBItemShop.PBItemShopServer.PBMapVoteData
// 0x0024
struct FPBMapVoteData
{
	struct FGuid                                       matchguid;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Map;                                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                totalVotes;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      succedd : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif