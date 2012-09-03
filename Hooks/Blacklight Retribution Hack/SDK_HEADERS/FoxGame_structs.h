/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGame_structs.h
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

// ScriptStruct FoxGame.FoxTypes.StatPanelEntry
// 0x0030
struct FStatPanelEntry
{
	struct FString                                     sStatName;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatOrig;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatChange;                                      		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatTooltip;                                     		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.BodyStance
// 0x000C
struct FBodyStance
{
	TArray< struct FName >                             AnimName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.WeaponAnimSet
// 0x0034
struct FWeaponAnimSet
{
	struct FBodyStance                                 TP_Anim;                                          		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FName                                       FP_Anim;                                          		// 0x000C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       WP_Anim;                                          		// 0x0014 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       HG_Anim;                                          		// 0x001C (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              RateMultiplier;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              BlendOutTime;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              AbortBlendOutTime;                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.InjureMap
// 0x007C
struct FInjureMap
{
	unsigned char                                      DamageZone;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Direction;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FName                                       DamageType;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FWeaponAnimSet                              FallAnim;                                         		// 0x000C (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FWeaponAnimSet                              UpAnim;                                           		// 0x0040 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       IdleAnim;                                         		// 0x0074 (0x0008) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.KilledPlayer
// 0x0008
struct FKilledPlayer
{
	class AFoxPRI*                                     KilledPlayer;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHeadShot : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxTypes.KillInfo
// 0x0014
struct FKillInfo
{
	TArray< struct FKilledPlayer >                     KilledPlayers;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      DamageTypeClass;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	class UClass*                                      WeaponClass;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.MultiKill
// 0x0010
struct FMultiKill
{
	class AFoxPRI*                                     KillerPRI;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FKillInfo >                         KilledInfo;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.ListUpdateStateHandler
// 0x0010
struct FListUpdateStateHandler
{
	unsigned char                                      ListState;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     CommandGroup;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.GemInfo
// 0x0018
struct FGemInfo
{
	unsigned char                                      GemType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                GemQuality;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GemDuration;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     UniqueInstanceId;                                 		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.BaseInventoryEntry
// 0x0168
struct FBaseInventoryEntry
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sIcon;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sType;                                            		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTooltip;                                         		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsNew : 1;                                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bColorOverride : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sItemStatusColor;                                 		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     extClickInterfaceFunc;                            		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     extClickInterfaceArg;                             		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sNodeColor;                                       		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDurability;                                      		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sRequirementColor;                                		// 0x0070 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sRequirementLabel;                                		// 0x007C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sRequirementLabelColor;                           		// 0x0088 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sRequirementIconColor;                            		// 0x0094 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nRequirementIcon;                                 		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                nRequirementOpacity;                              		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FString                                     sTime;                                            		// 0x00A8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTimeLabelColor;                                  		// 0x00B4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTimeLabelBGColor;                                		// 0x00C0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTimeIconColor;                                   		// 0x00CC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasTime : 1;                                     		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sActiveLabel;                                     		// 0x00DC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sActiveLabelColor;                                		// 0x00E8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sActiveLabelBGColor;                              		// 0x00F4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sUses;                                            		// 0x0100 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sUsesColor;                                       		// 0x010C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sInUse;                                           		// 0x0118 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                UnlockID;                                         		// 0x0124 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ParentIDs;                                        		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGemInfo                                    GemInfo;                                          		// 0x0134 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGuid;                                         		// 0x014C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnlockState;                                      		// 0x0158 (0x0001) [0x0000000000000000]              
	unsigned char                                      PurchaseState;                                    		// 0x0159 (0x0001) [0x0000000000000000]              
	unsigned char                                      ActivationType;                                   		// 0x015A (0x0001) [0x0000000000000000]              
	int                                                RequiredRank;                                     		// 0x015C (0x0004) [0x0000000000000000]              
	int                                                RequiredSkill;                                    		// 0x0160 (0x0004) [0x0000000000000000]              
	int                                                RequiredProfileFlag;                              		// 0x0164 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.BaseStoreEntry
// 0x0060(0x01C8 - 0x0168)
struct FBaseStoreEntry : FBaseInventoryEntry
{
	struct FString                                     sItemGPCost;                                      		// 0x0168 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemZenCost;                                     		// 0x0174 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sUnlockLabel;                                     		// 0x0180 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sUnlockColor;                                     		// 0x018C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sOriginalCost;                                    		// 0x0198 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDiscountPercent;                                 		// 0x01A4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDiscountColor;                                   		// 0x01B0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sCurrency;                                        		// 0x01BC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.BaseLabelDisplayInfo
// 0x0024
struct FBaseLabelDisplayInfo
{
	struct FString                                     sLabelColor;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sLabelBGColor;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sIconColor;                                       		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.ActivationTypeDisplayInfo
// 0x0050
struct FActivationTypeDisplayInfo
{
	unsigned char                                      ActivationType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FBaseLabelDisplayInfo                       ActiveLabel;                                      		// 0x0004 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBaseLabelDisplayInfo                       InactiveLabel;                                    		// 0x0028 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasTimeLabel : 1;                                		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxTypes.PurchasedItemInfo
// 0x0008
struct FPurchasedItemInfo
{
	int                                                UnlockID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumPurchasedItems;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.RequirementLabelDisplayInfo
// 0x0004(0x0028 - 0x0024)
struct FRequirementLabelDisplayInfo : FBaseLabelDisplayInfo
{
	int                                                nOpacity;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.TimeLabelDisplayinfo
// 0x0004(0x0028 - 0x0024)
struct FTimeLabelDisplayinfo : FBaseLabelDisplayInfo
{
	unsigned long                                      bIcon : 1;                                        		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxTypes.PurchaseStateDisplayInfo
// 0x0064
struct FPurchaseStateDisplayInfo
{
	unsigned char                                      PurchaseState;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      InheritedState;                                   		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FString                                     sItemStatusColor;                                 		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FRequirementLabelDisplayInfo                RequirementLabel;                                 		// 0x0010 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTimeLabelDisplayinfo                       TimeLabel;                                        		// 0x0038 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasActiveLabel : 1;                              		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsActive : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct FoxGame.FoxTypes.BaseUnlockFilterEntry
// 0x0018
struct FBaseUnlockFilterEntry
{
	struct FString                                     EntryLabel;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            UnlockTypes;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.UnlockStateDisplayInfo
// 0x0010
struct FUnlockStateDisplayInfo
{
	unsigned char                                      UnlockState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      nIcon;                                            		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FString                                     sLabelBGColor;                                    		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.PricingMetaData
// 0x001C
struct FPricingMetaData
{
	unsigned char                                      CurrencyType;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Prices[ 0x6 ];                                    		// 0x0004 (0x0018) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.DateTime
// 0x0009
struct FDateTime
{
	int                                                Year;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Month;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Day;                                              		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      Hour;                                             		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      Minute;                                           		// 0x0007 (0x0001) [0x0000000000000000]              
	unsigned char                                      Second;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.StoreMetaData
// 0x0090
struct FStoreMetaData
{
	struct FString                                     ItemGuid;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ItemTags;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                QuantityLeft;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MaxOwned;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Discount;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                SortValue;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FPricingMetaData                            Pricing[ 0x2 ];                                   		// 0x002C (0x0038) [0x0000000000000000]              
	struct FDateTime                                   PreOrderDate;                                     		// 0x0064 (0x000C) [0x0000000000000000]              
	struct FDateTime                                   LiveDate;                                         		// 0x0070 (0x000C) [0x0000000000000000]              
	struct FDateTime                                   ExpirationDate;                                   		// 0x007C (0x000C) [0x0000000000000000]              
	unsigned char                                      ActivationType;                                   		// 0x0088 (0x0001) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxTypes.AcquiredSkillData
// 0x0008
struct FAcquiredSkillData
{
	int                                                SkillData0;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SkillData1;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.GemSlot
// 0x0014(0x002C - 0x0018)
struct FGemSlot : FGemInfo
{
	unsigned char                                      GemIndex;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
	struct FDateTime                                   ExpirationDate;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned long                                      bExpired : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxTypes.StorePurchasedInfo
// 0x01C4
struct FStorePurchasedInfo
{
	TArray< int >                                      PurchasedTaunts;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedHangers;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedDialogPacks;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedBodyCamos;                               		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedWeaponCamos;                             		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedUpperBodies;                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedLowerBodies;                             		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedHelmets;                                 		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedEmblemIcons;                             		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedEmblemColors;                            		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPurchasedItemInfo >                PurchasedGrenades;                                		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedTactical;                                		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedBadges;                                  		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedDepotItems;                              		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedPresets;                                 		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedPersonalXPBoosts;                        		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedTeamXPBoosts;                            		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedPersonalGPBoosts;                        		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedTeamGPBoosts;                            		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedReceivers;                               		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedBarrels;                                 		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedMuzzles;                                 		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedStocks;                                  		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedScopes;                                  		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedMagazines;                               		// 0x0120 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedGrips;                                   		// 0x012C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedAvatars;                                 		// 0x0138 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedCrosshairs;                              		// 0x0144 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedTitles;                                  		// 0x0150 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedPersonalCPBoosts;                        		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedTeamCPBoosts;                            		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumPurchasedProfileLoadoutSlots;                  		// 0x0174 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasNameChange : 1;                               		// 0x0178 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasGenderChange : 1;                             		// 0x0178 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasSkillPointReset : 1;                          		// 0x0178 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                BestPersonalXPBoostID;                            		// 0x017C (0x0004) [0x0000000000000000]              
	int                                                BestTeamXPBoostID;                                		// 0x0180 (0x0004) [0x0000000000000000]              
	int                                                BestPersonalGPBoostID;                            		// 0x0184 (0x0004) [0x0000000000000000]              
	int                                                BestTeamGPBoostID;                                		// 0x0188 (0x0004) [0x0000000000000000]              
	int                                                BestPersonalCPBoostID;                            		// 0x018C (0x0004) [0x0000000000000000]              
	int                                                BestTeamCPBoostID;                                		// 0x0190 (0x0004) [0x0000000000000000]              
	struct FAcquiredSkillData                          AcquiredSkills;                                   		// 0x0194 (0x0008) [0x0000000000000000]              
	TArray< struct FGemInfo >                          PurchasedGems;                                    		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGemSlot >                          ActiveGemSlots;                                   		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PurchasedPacks;                                   		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AFoxPRI*                                     PRIOwner;                                         		// 0x01C0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.LocalizationEntry
// 0x0024
struct FLocalizationEntry
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SectionName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KeyName;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.ProfilePurchaseInfo
// 0x0010
struct FProfilePurchaseInfo
{
	unsigned char                                      Duration;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      PurchaseType;                                     		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      PurchaseLocation;                                 		// 0x0002 (0x0001) [0x0000000000000000]              
	int                                                Quantity;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Currency;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bEquip : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxTypes.HudCrosshairInfo
// 0x0014
struct FHudCrosshairInfo
{
	float                                              XPos;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              YPos;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumTicks;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TickLength;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsRotated : 1;                                   		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxTypes.MailMetaData
// 0x0071
struct FMailMetaData
{
	struct FString                                     UniqueId;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                SenderID;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                RecipientID;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FString                                     SenderName;                                       		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Subject;                                          		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bRead : 1;                                        		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDateTime                                   SentTime;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
	TArray< struct FString >                           Items;                                            		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PreviewUnlockIDs;                                 		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                GPAmount;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                ZPAmount;                                         		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned char                                      Duration;                                         		// 0x0070 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.StoreOfferMetaData
// 0x0044
struct FStoreOfferMetaData
{
	struct FString                                     OfferGuid;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGuid;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Tag;                                              		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FDateTime                                   StartDate;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FDateTime                                   EndDate;                                          		// 0x0030 (0x000C) [0x0000000000000000]              
	float                                              Discount;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                SortValue;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.InventoryMetaData
// 0x005E
struct FInventoryMetaData
{
	int                                                UserId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     InstanceId;                                       		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     StoreGuid;                                        		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                UsesLeft;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FDateTime                                   PurchaseDate;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FDateTime                                   ExpirationDate;                                   		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FDateTime                                   ActivationDate;                                   		// 0x003C (0x000C) [0x0000000000000000]              
	unsigned char                                      PurchaseDuration;                                 		// 0x0048 (0x0001) [0x0000000000000000]              
	unsigned long                                      bActivated : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     AffectedItemId;                                   		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      PurchaseType;                                     		// 0x005C (0x0001) [0x0000000000000000]              
	unsigned char                                      UpdateType;                                       		// 0x005D (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.StoreTagMetaData
// 0x0018
struct FStoreTagMetaData
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreTagMetaData >                 Children;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.DOTInfo
// 0x0024
struct FDOTInfo
{
	class AController*                                 DOTInstigator;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DamageToGive;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DOTTimeRemaining;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Multipler;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Remainder;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	class AEmitter*                                    DOTEmitter;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	class AEmitterCameraLensEffectBase*                FPCLE;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	class AFoxWeapon*                                  WeaponCauser;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.PostGameExperienceGain
// 0x0010
struct FPostGameExperienceGain
{
	struct FString                                     ExpGainEventName;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ExpGained;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.FoxWeaponModInfo
// 0x0024
struct FFoxWeaponModInfo
{
	int                                                MovementSpeed;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Accuracy;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Recoil;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ReloadSpeed;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Ammo;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Range;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RateOfFire;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Rating;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.FoxPawnModInfo
// 0x0034
struct FFoxPawnModInfo
{
	int                                                SwitchWeaponSpeed;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MeleeRange;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HealthRecharge;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MovementSpeed;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Stamina;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                HRVDuration;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                HRVRechargeRate;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCalculated : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                HelmetDamageReduction;                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                BodyDamageReduction;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                LegsDamageReduction;                              		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              SprintMultiplier;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.GameBalanceRange
// 0x000C
struct FGameBalanceRange
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Base;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Max;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.WeaponImpactInfo
// 0x000C
struct FWeaponImpactInfo
{
	class AFoxPawn*                                    HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PawnDistanceFromTrace;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              PawnDistanceFromRay;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.EmblemPanelEntry
// 0x0048
struct FEmblemPanelEntry
{
	struct FString                                     sTopIcon;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTopColor;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sMiddleIcon;                                      		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sMiddleColor;                                     		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sBottomIcon;                                      		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sBottomColor;                                     		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.ProfileEmblemLayer
// 0x0008
struct FProfileEmblemLayer
{
	int                                                IconID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ColorID;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.ProfileEmblemInfo
// 0x0018
struct FProfileEmblemInfo
{
	struct FProfileEmblemLayer                         ToPlayer;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FProfileEmblemLayer                         MiddleLayer;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FProfileEmblemLayer                         BottomLayer;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.PlayerDisplayInfo
// 0x00F8
struct FPlayerDisplayInfo
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      AcceptStatus;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FEmblemPanelEntry                           EmblemInfo;                                       		// 0x000C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sClan;                                            		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTitle;                                           		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatus;                                          		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLevel;                                           		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsOnline : 1;                                    		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FProfileEmblemInfo                          EmblemComponents;                                 		// 0x0094 (0x0018) [0x0000000000000000]              
	unsigned char                                      OnlineStatus;                                     		// 0x00AC (0x0001) [0x0000000000000000]              
	struct FString                                     ConnectString;                                    		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastSeenDays;                                     		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                LastSeenHours;                                    		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                LastSeenMinutes;                                  		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                Experience;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                TitleInfo;                                        		// 0x00CC (0x0004) [0x0000000000000000]              
	struct FQWord                                      BadgeInfo;                                        		// 0x00D0 (0x0008) [0x0000000000000000]              
	int                                                MapContext;                                       		// 0x00D8 (0x0004) [0x0000000000000000]              
	struct FString                                     GameType;                                         		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bRankedMatch : 1;                                 		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInvitedYou : 1;                                  		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct FoxGame.FoxTypes.FriendDisplayInfo
// 0x0004(0x00FC - 0x00F8)
struct FFriendDisplayInfo : FPlayerDisplayInfo
{
	unsigned long                                      bIOwnFriendShip : 1;                              		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxTypes.ProfileDepotInfo
// 0x0005
struct FProfileDepotInfo
{
	unsigned char                                      DepotPresetID0;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      DepotPresetID1;                                   		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      DepotPresetID2;                                   		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      DepotPresetID3;                                   		// 0x0003 (0x0001) [0x0000000000000000]              
	unsigned char                                      DepotPresetID4;                                   		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.ClanMemberDisplayInfo
// 0x000D(0x0105 - 0x00F8)
struct FClanMemberDisplayInfo : FPlayerDisplayInfo
{
	struct FString                                     sClanIcon;                                        		// 0x00F8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      PositionInClan;                                   		// 0x0104 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.PartyDisplayInfo
// 0x0010(0x0108 - 0x00F8)
struct FPartyDisplayInfo : FPlayerDisplayInfo
{
	unsigned long                                      bPartyLeader : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sPartyIcon;                                       		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxTypes.ProfileTauntInfo
// 0x0020
struct FProfileTauntInfo
{
	int                                                TauntID0;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TauntID1;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TauntID2;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TauntID3;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TauntID4;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TauntID5;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TauntID6;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TauntID7;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.ProfileDialogInfo
// 0x0008
struct FProfileDialogInfo
{
	int                                                DialogAnnouncerID;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DialogPlayerID;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.GearStatsMapping
// 0x0008
struct FGearStatsMapping
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      WeaponClass;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.ProfileGearInfo
// 0x0024
struct FProfileGearInfo
{
	unsigned char                                      BodyCamoID;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      UpperBodyID;                                      		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      LowerBodyID;                                      		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      HelmetID;                                         		// 0x0003 (0x0001) [0x0000000000000000]              
	int                                                BadgeID;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Gear_R1ID;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      Gear_R2ID;                                        		// 0x0009 (0x0001) [0x0000000000000000]              
	unsigned char                                      Gear_L1ID;                                        		// 0x000A (0x0001) [0x0000000000000000]              
	unsigned char                                      Gear_L2ID;                                        		// 0x000B (0x0001) [0x0000000000000000]              
	unsigned char                                      TacticalID;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      ButtPackID;                                       		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned long                                      bFemale : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                AvatarID;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                PatchIconID;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      PatchIconColorID;                                 		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      PatchShapeID;                                     		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned char                                      PatchShapeColorID;                                		// 0x001E (0x0001) [0x0000000000000000]              
	int                                                HangerID;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.ProfileLoadoutSlot
// 0x0018
struct FProfileLoadoutSlot
{
	unsigned char                                      PrimaryPresetID;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryWeaponID;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryMuzzleID;                                  		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryBarrelID;                                  		// 0x0003 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryMagazineID;                                		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryScopeID;                                   		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryStockID;                                   		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryGripID;                                    		// 0x0007 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryAmmoID;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryWeaponCamo;                                		// 0x0009 (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryPresetID;                                		// 0x000A (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryWeaponID;                                		// 0x000B (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryMuzzleID;                                		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryMagazineID;                              		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryScopeID;                                 		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryBarrelID;                                		// 0x000F (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryStockID;                                 		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryGripID;                                  		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryAmmoID;                                  		// 0x0012 (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryWeaponCamo;                              		// 0x0013 (0x0001) [0x0000000000000000]              
	int                                                HangerID;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTypes.FoxWeaponConfigInfo
// 0x002C
struct FFoxWeaponConfigInfo
{
	unsigned char                                      WeaponPreset;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponClass;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponMuzzle;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponStock;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponBarrel;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WeaponMagazine;                                   		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponScope;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WeaponHanger;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponGrip;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponAmmo;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WeaponCamoIndex;                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxTypes.ServerDropDownHeaderData
// 0x0030
struct FServerDropDownHeaderData
{
	struct FString                                     sStatusHeader;                                    		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sServerNameHeader;                                		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sQueueHeader;                                     		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sWaitHeader;                                      		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDialogBoxBase.InputBoxVerify
// 0x0024
struct FInputBoxVerify
{
	struct FString                                     ValidVerifyTagColor;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InvalidVerifyTagColor;                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BoundObjectPath;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDialogBoxBase.InputBoxVerifyTag
// 0x0010
struct FInputBoxVerifyTag
{
	struct FString                                     TagLabel;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsValid : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxDialogBox.DialogBoxProperties
// 0x00B0
struct FDialogBoxProperties
{
	unsigned char                                      DialogType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     TitleText;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShowTimer : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCloseOnButtonPress : 1;                          		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FInventoryMetaData                          InventoryItem;                                    		// 0x0020 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInventoryMetaData >                ItemList;                                         		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonID;                                         		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnDialogButtonPressed;                            		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnStringInputDelegate;                            		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxPawn.TraceCacheData
// 0x006C
struct FTraceCacheData
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     LastHitLocation;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastHitNormal;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	class AActor*                                      LastHitActor;                                     		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTraceHitInfo                               LastTraceHitInfo;                                 		// 0x0034 (0x001C) [0x0000000000082000]              ( CPF_Transient | CPF_Component )
	float                                              LastTraceTime;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastStartTrace;                                   		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastEndTrace;                                     		// 0x0060 (0x000C) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxPawn.DamageProfile
// 0x0008
struct FDamageProfile
{
	class UCameraShake*                                TakeDamageCameraShake;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DamageAmount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxPawn.SAttachSlot
// 0x0014
struct FSAttachSlot
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      AttachClass;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AFoxWeaponAttachment*                        ThirdPersonWeapon;                                		// 0x000C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bVisible : 1;                                     		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxUnlockInfo.BaseUnlockInfo
// 0x0050
struct FBaseUnlockInfo
{
	int                                                UnlockID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ParentID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     NameID;                                           		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ImageIconRef;                                     		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NameLocSectionName;                               		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     DescLocSectionName;                               		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TagLocSectionName;                                		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TooltipLocSectionName;                            		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUnlockInfo.CamoUnlockInfo
// 0x0048(0x0098 - 0x0050)
struct FCamoUnlockInfo : FBaseUnlockInfo
{
	int                                                NumTiles;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     BaseTextureSwapRef;                               		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MetallicTextureSwapRef;                           		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUseBaseColor : 1;                                		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                BaseColor;                                        		// 0x0070 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                OverlayColor;                                     		// 0x0080 (0x0010) [0x0000000000000000]              
	float                                              MetallicInterp;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              SpecularInterp;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxPawn.DamageTaken
// 0x000C
struct FDamageTaken
{
	class AController*                                 Causer;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxPawn.DamageZoneParentSet
// 0x000C
struct FDamageZoneParentSet
{
	TArray< struct FName >                             BoneNames;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxPawn.AimAttractor
// 0x0010
struct FAimAttractor
{
	float                                              OuterRadius;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InnerRadius;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxActorFactoryAI.FoxAIOverrides
// 0x0008
struct FFoxAIOverrides
{
	unsigned long                                      bInvincible : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverrideHealth : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              OverriddenHealth;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxAISquadFormation.SquadFormationNode
// 0x0018
struct FSquadFormationNode
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSquadInfo.SquadMemberInfo
// 0x0008
struct FSquadMemberInfo
{
	class AController*                                 SqCont;                                           		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                FormationIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSquadInfo.EnemyInfo
// 0x0030
struct FEnemyInfo
{
	class AFoxPawn*                                    TargetPawn;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     KnownLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              LastTimeUpdate;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                LatestEngagedTimeIndex;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< float >                                    LastSeenTimes;                                    		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< float >                                    LastEngagedTimes;                                 		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxActorFactorySquad.SquadMemberConstructionInfo
// 0x0050
struct FSquadMemberConstructionInfo
{
	class UClass*                                      ControllerClass;                                  		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UClass*                                      PawnClass;                                        		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FFoxWeaponConfigInfo                        PawnWeapon;                                       		// 0x0008 (0x002C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     PawnWeaponPreset;                                 		// 0x0034 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UClass*                                      PawnGrenade;                                      		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      AIEntryType;                                      		// 0x0044 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FFoxAIOverrides                             Overrides;                                        		// 0x0048 (0x0008) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
};

// ScriptStruct FoxGame.FoxUnlockInfo.ScoreUnlock
// 0x0018
struct FScoreUnlock
{
	TArray< int >                                      UnlockIDs;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      GiftedItemIDs;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUnlockInfo.ProfileFlagUnlock
// 0x0004(0x001C - 0x0018)
struct FProfileFlagUnlock : FScoreUnlock
{
	int                                                ProfileFlagIndex;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUnlockInfo.ScoreRank
// 0x001C(0x0034 - 0x0018)
struct FScoreRank : FScoreUnlock
{
	struct FString                                     RankName;                                         		// 0x0018 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                RankScore;                                        		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     RankIconRef;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUnlockInfo.FoxWeaponPresetInfo
// 0x0060(0x00B0 - 0x0050)
struct FFoxWeaponPresetInfo : FBaseUnlockInfo
{
	struct FString                                     Wpn;                                              		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Muz;                                              		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Sto;                                              		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Bar;                                              		// 0x0074 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Mag;                                              		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Sco;                                              		// 0x008C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     GRI;                                              		// 0x0098 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Amm;                                              		// 0x00A4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxGame.RankedPlayerInfo
// 0x0010
struct FRankedPlayerInfo
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	class UFoxOnlineStatsWriteRankedPlayer*            RankingStats;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxGame.VoteKickEntry
// 0x0010
struct FVoteKickEntry
{
	class AFoxPC*                                      PlayerToKick;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class AFoxPC* >                            PlayersWhoWantToKick;                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxGame.ReserveInfo
// 0x0014
struct FReserveInfo
{
	struct FUniqueNetId                                ReserveInstigatorId;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                PendingJoinId;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxGame.PlayerStartVariables
// 0x005C
struct FPlayerStartVariables
{
	float                                              NearByTeammateAdjustment;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              NearByTeammateDistThreshold;                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              NearByTeammateZThreshold;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VisibleTeammateAdjustment;                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              BehindVisibleTeammateAdjustment;                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              VisibleTeammateDistThreshold;                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              NearByEnemyAdjustment;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              NearByEnemyDistThreshold;                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              VisibleEnemyAdjustment;                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              VisibleEnemyDistThreshold;                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              SameTeamAdjustment;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              EnemyTeamAdjustment;                              		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              NearObjectiveAdjustment;                          		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              NearObjectiveDistThreshold;                       		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              PrimaryStartAdjustment;                           		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              DisabledAdjustment;                               		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              RecentlySpawnedAdjustment;                        		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              RecentlySpawnedTimeThreshold;                     		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              CollidingPawnAdjustment;                          		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              CollidingPawnCollisionRadiusMultiplier;           		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              AdditionalDeathLocationExpirationTime;            		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              DeathLocationAdjustment;                          		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              DeathLocationThreshold;                           		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxGame.AIBotInfo
// 0x000C
struct FAIBotInfo
{
	struct FName                                       ProviderName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxGame.PlayerDeathLocation
// 0x0011
struct FPlayerDeathLocation
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              ExpirationTime;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxGame.ModifierDateBucket
// 0x0020
struct FModifierDateBucket
{
	float                                              Modifier;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Recurrance;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     LocDescName;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Year;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      DurationInHours;                                  		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      Day;                                              		// 0x0019 (0x0001) [0x0000000000000000]              
	unsigned char                                      Month;                                            		// 0x001A (0x0001) [0x0000000000000000]              
	unsigned char                                      DayOfWeekMask;                                    		// 0x001B (0x0001) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxPC.RevengeEntry
// 0x0008
struct FRevengeEntry
{
	int                                                NumKills;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AFoxPRI*                                     RevengePRI;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUnlockInfo.FoxDepotPresetInfo
// 0x001C(0x00CC - 0x00B0)
struct FFoxDepotPresetInfo : FFoxWeaponPresetInfo
{
	struct FString                                     ItemType;                                         		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemClass;                                        		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Cost;                                             		// 0x00C8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxDataProvider_Playlist.PlaylistPairing
// 0x0010
struct FPlaylistPairing
{
	struct FName                                       MapProvider;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       GameProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxAfterActionUI.AARBoostInfo
// 0x004C
struct FAARBoostInfo
{
	struct FString                                     sIcon;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemInfo;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sClickFunction;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sClickArg;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTooltip;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UnlockID;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxAfterActionUI.UnlockItem
// 0x003C
struct FUnlockItem
{
	struct FString                                     sIcon;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNodeColor;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDurability;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtraInfo;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxAfterActionUI.AARDataNodeInfo
// 0x0048
struct FAARDataNodeInfo
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sType;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDurability;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNodeColor;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDetail;                                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIcon;                                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxHUD.AppliedBoost
// 0x0010
struct FAppliedBoost
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BoostUnlockID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxItemPurchaseDialogBox.PurchaseDialogBoxProperties
// 0x00CC
struct FPurchaseDialogBoxProperties
{
	struct FProfilePurchaseInfo                        PurchaseInfo;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FStoreMetaData                              StoreItem;                                        		// 0x0010 (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      PurchaseDesignation;                              		// 0x00A0 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCanEquip : 1;                                    		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             OnWorkingDialogShow;                              		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnWorkingDialogHide;                              		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnPurchaseItemComplete;                           		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxAIControllerInterface.ManualLookTarget
// 0x0010
struct FManualLookTarget
{
	struct FVector                                     LookLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxAIControllerInterface.AccuracyInfo
// 0x0010
struct FAccuracyInfo
{
	float                                              BaseFiringAngle;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlindFirePenalty;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MovementPenalty;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetMovementPenalty;                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxAnimNode_Movement.MovementDef
// 0x0010
struct FMovementDef
{
	float                                              BaseSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimNodeSequence* >                 SeqNodes;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxArmoryUI.FoxGearTab
// 0x0008
struct FFoxGearTab
{
	unsigned char                                      OrderGearIndex;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ActualGearIndex;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      bValid : 1;                                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLocked : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct FoxGame.FoxArmoryUI.FoxLoadoutStrings
// 0x0024
struct FFoxLoadoutStrings
{
	struct FString                                     sIcon;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sType;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxBillboardUIObjectBase.BillboardIconInfo
// 0x000C
struct FBillboardIconInfo
{
	float                                              Distance;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Opacity;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxChatUI.ChatRoom
// 0x0034
struct FChatRoom
{
	int                                                ChannelID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ChannelName;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UIButtonPath;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UISocialButtonPath;                               		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsListenedTo : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsEnabled : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                UnreadCount;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bMustJoinOnline : 1;                              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bJoinedManually : 1;                              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct FoxGame.FoxItemCacheClan.ClanInfo
// 0x0048
struct FClanInfo
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanTag;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MOTD;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Founded;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MemberCount;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasClanPermissions : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MyRank;                                           		// 0x0038 (0x0001) [0x0000000000000000]              
	TArray< struct FClanMemberDisplayInfo >            ClanMembers;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxCustomizationNode_Base.ScrollerListEntry
// 0x0024(0x01EC - 0x01C8)
struct FScrollerListEntry : FBaseStoreEntry
{
	unsigned long                                      bEquipped : 1;                                    		// 0x01C8 (0x0004) [0x0000000000100000] [0x00000001] 
	struct FString                                     sClickLabel;                                      		// 0x01CC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemNumber;                                      		// 0x01D8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                VersionNumber;                                    		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                InsertIndex;                                      		// 0x01E8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxCustomizationNode_Avatar.AvatarInfo
// 0x0008
struct FAvatarInfo
{
	class UFoxDataProvider_Avatar*                     AvatarProvider;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxCustomizationNode_ModBase.ModInfo
// 0x000C
struct FModInfo
{
	class UClass*                                      ModClass;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ModID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RequiredRank;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxCustomizationNode_CamoBase.CamoInfo
// 0x0004
struct FCamoInfo
{
	int                                                CamoIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxCustomizationNode_Depot.DepotPresetInfo
// 0x00D0
struct FDepotPresetInfo
{
	struct FFoxDepotPresetInfo                         Preset;                                           		// 0x0000 (0x00CC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x00CC (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxCustomizationNode_GearBase.GearInfo
// 0x000C
struct FGearInfo
{
	class UUIResourceDataProvider*                     GearProvider;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GearIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RequiredSkill;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxCustomizationNode_ModProviderBase.ModProviderInfo
// 0x0010
struct FModProviderInfo
{
	class UFoxDataProvider_ModBase*                    ModProvider;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnlockState;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                ModID;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RequiredRank;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxCustomizationNode_Preset.PresetInfo
// 0x0008
struct FPresetInfo
{
	class UFoxDataProvider_Preset*                     PresetProvider;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxCustomizationNode_Receiver.ReceiverInfo
// 0x00E0
struct FReceiverInfo
{
	class UClass*                                      WeaponClass;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FFoxWeaponPresetInfo                        Preset;                                           		// 0x0004 (0x00B0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFoxWeaponConfigInfo                        PresetConfig;                                     		// 0x00B4 (0x002C) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUIBaseUnlockWidget.BaseUnlockEntry
// 0x0010(0x0178 - 0x0168)
struct FBaseUnlockEntry : FBaseInventoryEntry
{
	struct FString                                     sDetail;                                          		// 0x0168 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCanPurchase : 1;                                 		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanEquip : 1;                                    		// 0x0174 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanBuy : 1;                                      		// 0x0174 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct FoxGame.FoxDataProvider_Avatar.MaterialSwapPaths
// 0x0018
struct FMaterialSwapPaths
{
	struct FString                                     OriginalMaterialPath;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NewMaterialPath;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDataProvider_Controls.ControlBinding
// 0x0014
struct FControlBinding
{
	struct FName                                       BindingControl;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDataProvider_Tutorial.TutorialMessageInfo
// 0x0018
struct FTutorialMessageInfo
{
	struct FString                                     sMessageTitle;                                    		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sMessageBody;                                     		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDataStore_MenuItems.IgnoredPlayer
// 0x0014
struct FIgnoredPlayer
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDataStore_MenuItems.BannedPlayer
// 0x0010
struct FBannedPlayer
{
	float                                              BannedTimeStamp;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeBanned;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                BannedID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxDataStore_MenuItems.PlayedMapInfo
// 0x0010
struct FPlayedMapInfo
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastUsed;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxDataStore_Playlists.GameMapPair
// 0x0010
struct FGameMapPair
{
	class UFoxDataProvider_PlaylistGameInfo*           GameModeInfo;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDataStore_Unlockables.UnlockCacheEntry
// 0x0040
struct FUnlockCacheEntry
{
	struct FString                                     FriendlyName;                                     		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FriendlyDesc;                                     		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FriendlyTag;                                      		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FriendlyToolTip;                                  		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ImageIconRef;                                     		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ParentID;                                         		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxDestructible.DebrisPiece
// 0x0018
struct FDebrisPiece
{
	class UStaticMesh*                                 DebrisMesh;                                       		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     SpawnOffset;                                      		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Impulse;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeSpan;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxDestructible.DamageStage
// 0x0030
struct FDamageStage
{
	class UStaticMesh*                                 DamagedMesh;                                      		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UMaterialInterface*                          DamagedMaterial;                                  		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             StageTransitionTemplate;                          		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     StageTransitionOffset;                            		// 0x000C (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Impulse;                                          		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthThresholdPct;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FDebrisPiece >                      Debris;                                           		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AwardPoints;                                      		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxDestructibleSkeletalMeshActor.BreakableStepSkeletal.BreakableParticleSystemSkeletal
// 0x0014
struct FBreakableParticleSystemSkeletal
{
	class UParticleSystem*                             Emitter;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AEmitterSpawnable*                           SpawnedEmitter;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxDestructibleSkeletalMeshActor.BreakableStepSkeletal.DamageStep
// 0x000C
struct FDamageStep
{
	float                                              DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Animation;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxDestructibleSkeletalMeshActor.BreakableStepSkeletal
// 0x0034
struct FBreakableStepSkeletal
{
	float                                              DamageThreshold;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FBreakableParticleSystemSkeletal >  ParticleEmitters;                                 		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               BreakMesh;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Physics;                                          		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   BreakSound;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AccumulatedDamage;                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                CurrentDamageStep;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FDamageStep >                       DamageSteps;                                      		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AwardPoints;                                      		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxDialogBoxCreatePlayer.CreatePlayerDialogBoxProperties
// 0x0020
struct FCreatePlayerDialogBoxProperties
{
	struct FString                                     TitleText;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxPlayerNameChars;                               		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCentered : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSelectName : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelectGender : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAllowCharacterPreview : 1;                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FScriptDelegate                             OnPostCreatePlayer;                               		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDialogBoxChangeName.ChangeNameDialogBoxProperties
// 0x001C
struct FChangeNameDialogBoxProperties
{
	int                                                MaxPlayerNameChars;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             OnStringInputDelegate;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnDialogButtonPressed;                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDialogBoxInviteClan.ClanInviteDialogBoxProperties
// 0x004C
struct FClanInviteDialogBoxProperties
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanTag;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanID;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WhoInvited;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Founded;                                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Members;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MemberCount;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxDialogBoxItemsExpired.ExpiredItemEntry
// 0x0055(0x01BD - 0x0168)
struct FExpiredItemEntry : FBaseInventoryEntry
{
	unsigned long                                      bIsExpired : 1;                                   		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sRenewLabel;                                      		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRenewFunction;                                   		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRenewTooltip;                                    		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bRenewToggleState : 1;                            		// 0x0190 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTrashToggleState : 1;                            		// 0x0190 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sTrashLabel;                                      		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTrashFunction;                                   		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTrashTooltip;                                    		// 0x01AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bRenewDisable : 1;                                		// 0x01B8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTrashDisable : 1;                                		// 0x01B8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      ItemAction;                                       		// 0x01BC (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxDialogBoxMessageBase.MessageDialogBoxProperties
// 0x004C
struct FMessageDialogBoxProperties
{
	struct FString                                     TitleText;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HeaderText;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AttachedUnlockIDs;                                		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ExternalClickFunc;                                		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasMessageBoxHeader : 1;                         		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             OnReadMessageComplete;                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDialogBoxMessageEULA.ReplaceSubStringEntry
// 0x0018
struct FReplaceSubStringEntry
{
	struct FString                                     Before;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     After;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDialogBoxMessageNews.NewsItemEntry
// 0x0048
struct FNewsItemEntry
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ExternalLinkText;                                 		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ExternalLinkUrl;                                  		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGuid;                                         		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FDateTime                                   SentTime;                                         		// 0x003C (0x000C) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxDialogBoxMessageNews.NewsDialogBoxProperties
// 0x0018
struct FNewsDialogBoxProperties
{
	TArray< struct FNewsItemEntry >                    NewsItems;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnReadMessageComplete;                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxDialogBoxPassword.PasswordDialogBoxProperties
// 0x0034
struct FPasswordDialogBoxProperties
{
	struct FString                                     TitleText;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnPasswordVerifyDelegate;                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             InButtonPressed;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxCharacters;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxGameMP_BO.DeadBodyInfo
// 0x0014
struct FDeadBodyInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                Team;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxGameObject_ControlPoint.PresentTeamInfo
// 0x0018
struct FPresentTeamInfo
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CaptureAmount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              OverloadTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< class AFoxPawn* >                          Pawns;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxGameObject_HillPoint.hillZoneInfo
// 0x000C
struct FhillZoneInfo
{
	TArray< class AFoxPRI* >                           PRIs;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxGameSettingsCommon.SavedPRIInfo
// 0x0018
struct FSavedPRIInfo
{
	struct FUniqueNetId                                PRINetID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ExpGained;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NumKills;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumDeaths;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxGearHudWidget.HudGearInfo
// 0x0034
struct FHudGearInfo
{
	struct FString                                     sGearKey;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sGearIcon;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDefaultKey;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsDeployed : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsUsed : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sGearName;                                        		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxGemFusion.IncreasedFusionChance
// 0x0018
struct FIncreasedFusionChance
{
	int                                                PercentageIncrease;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Cost;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bZen : 1;                                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ItemGuid;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxGemFusion.FusionSlotInfo
// 0x00A8
struct FFusionSlotInfo
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sType;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtClickInterfaceFunc;                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtInterfaceArg;                                 		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDurability;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNodeColor;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAmountLabel;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAmount;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRemoveFunc;                                      		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRemoveFuncArg;                                   		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDetail;                                          		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDuration;                                        		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTime;                                            		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sHelpLabel;                                       		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxGemFusion.NodeFusionButtonInfo
// 0x0034
struct FNodeFusionButtonInfo
{
	struct FString                                     sSuccessText;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSuccessAmount;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sClickText;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtClickInterfaceFunc;                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxSkillTreeGemSelection.GemListItem
// 0x0094
struct FGemListItem
{
	struct FString                                     sTooltip;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDurability;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNodeColor;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sType;                                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAmount;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAmountLabel;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDetail;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDuration;                                        		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTime;                                            		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      GemType;                                          		// 0x0078 (0x0001) [0x0000000000000000]              
	int                                                GemQuality;                                       		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                GemDuration;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                NumOfType;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           GemGuids;                                         		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxGemSocketting.GemSocketInfo
// 0x004C
struct FGemSocketInfo
{
	struct FString                                     sEffectInfo;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTimeInfo;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDurability;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNodeColor;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtClickInterfaceFunc;                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtInterfaceArg;                                 		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsBroken : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxGRI.MapSkipVote
// 0x0008
struct FMapSkipVote
{
	unsigned char                                      MapSkipVoteStatus;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxHUDBO.PlayerHealthEntry
// 0x0011
struct FPlayerHealthEntry
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HealthPct;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      HudTalkState;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.HudWidget
// 0x0020
struct FHudWidget
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FOV;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              XRot;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              YRot;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Opacity;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DispTime;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.ComboExperienceDisplayTime
// 0x0008
struct FComboExperienceDisplayTime
{
	int                                                ExpAmount;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DisplayTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.HardSuitDamageIndicator
// 0x001C
struct FHardSuitDamageIndicator
{
	struct FString                                     instancename;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  ObjectReference;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   DamageLoc;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                CurrentRotation;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.LocalKillMsg
// 0x0018
struct FLocalKillMsg
{
	struct FString                                     KillMsg;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VictimName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxHudUI.KilledPlayerMsg
// 0x001C
struct FKilledPlayerMsg
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           InfoStrings;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHeadShot : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxHudUI.CombatLogNotification
// 0x0018
struct FCombatLogNotification
{
	struct FString                                     InstigatorName;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DetailText;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxHudUI.ChatNotification
// 0x0010
struct FChatNotification
{
	struct FString                                     MessageText;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DispTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.GameplayNotification
// 0x0010
struct FGameplayNotification
{
	struct FString                                     MessageText;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DispTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.PassivePointNotifyObj
// 0x0014
struct FPassivePointNotifyObj
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NotificationName;                                 		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PointsAwarded;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.HudBoost
// 0x000C
struct FHudBoost
{
	int                                                BoostID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class AFoxPRI*                                     OwningPRI;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BoostObject;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.MiniMission
// 0x001C
struct FMiniMission
{
	class UGFxObject*                                  MissionObject;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class AFoxObjectiveMarker*                         Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     instancename;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPendingTransOut : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxHudUI.HudColorTransform
// 0x0018
struct FHudColorTransform
{
	int                                                R;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                G;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RO;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                GO;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BO;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxHudUI.KillerWeaponInfo
// 0x0024
struct FKillerWeaponInfo
{
	struct FString                                     sIcon;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTags;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxHudUI.KillerHealthInfo
// 0x0024
struct FKillerHealthInfo
{
	struct FString                                     sHealthText;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCurrHealth;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMaxHealth;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxHUDUI_PL.ProgressBarStats
// 0x0018
struct FProgressBarStats
{
	float                                              MoverProgress;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MoverDirection;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              BlueBarProgress;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              OrangeBarProgress;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumControlPoints;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ControlPointIndex;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxItemCacheFriends.PlayerNameAndID
// 0x0014
struct FPlayerNameAndID
{
	struct FUniqueNetId                                Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxItemPurchaseDialogBox.DesignationTab
// 0x0008
struct FDesignationTab
{
	unsigned char                                      Designation;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  TabObject;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxItemPurchaseDialogBox.PricingToggleButton
// 0x0034
struct FPricingToggleButton
{
	struct FString                                     ExtInterfaceClickFunc;                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Currency;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	TArray< int >                                      DurationOptions;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AmountOptions;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLocked : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  ButtonObject;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxItemPurchaseDialogBox.PurchaseOptionsDropdown
// 0x0020
struct FPurchaseOptionsDropdown
{
	struct FString                                     ExtInterfaceClickFunc;                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Options;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  ButtonObject;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxItemRenewDialogBox.RenewDialogBoxProperties
// 0x0060(0x012C - 0x00CC)
struct FRenewDialogBoxProperties : FPurchaseDialogBoxProperties
{
	struct FInventoryMetaData                          InventoryItem;                                    		// 0x00CC (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxKillingSpreeMessage.KillMessage
// 0x000C
struct FKillMessage
{
	int                                                NumberOfKills;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ScoreBonus;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ExperienceBonus;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxLoadoutInfo.DefaultLoadout
// 0x0020
struct FDefaultLoadout
{
	struct FString                                     PrimaryWeaponPresetName;                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SecondaryWeaponPresetName;                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WeaponCamoIndex;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                HangerIndex;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxLoadoutInfo.LoadoutStatTrackingIdStruct
// 0x001C
struct FLoadoutStatTrackingIdStruct
{
	int                                                PrimaryWeaponConfigId;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SecondaryWeaponConfigId;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CandyWeaponConfigId;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PrimaryWeaponUseId;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SecondaryWeaponUseId;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CandyWeaponUseId;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                LoadoutIndex;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxStatTypes.LoadoutGearConfigIDSInfo
// 0x0038
struct FLoadoutGearConfigIDSInfo
{
	int                                                LoadoutIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BodyCamoID;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                UpperBodyID;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LowerBodyID;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                HelmetID;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BadgeID;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Gear_R1ID;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Gear_R2ID;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Gear_L1ID;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Gear_L2ID;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                TacticalID;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                ButtPackID;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                AvatarID;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                bFemale;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxStatTypes.WeaponConfigIDsInfo
// 0x0040
struct FWeaponConfigIDsInfo
{
	int                                                LoadoutIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SlotID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ReceiverID;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                DepotID;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                GearID;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MuzzleID;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                StockID;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                BarrelID;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MagazineID;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                ScopeID;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                HangerID;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                GripID;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                CamoID;                                           		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSkillTreeInfo.SkillItemInfo
// 0x0048
struct FSkillItemInfo
{
	int                                                PointsToUnlock;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NameID;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconRef;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SkillID;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Tier;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     FriendlyName;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FriendlyDescription;                              		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FriendlyTag;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUIServerListWidget.ServerAccessDisplayInfo
// 0x0014
struct FServerAccessDisplayInfo
{
	unsigned char                                      AccessType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     AccessLabel;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsLocked : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxUIServerListWidget.ServerDesignationDisplayInfo
// 0x0029
struct FServerDesignationDisplayInfo
{
	unsigned char                                      DesignationType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     TitleLabel;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AdminNameLabel;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DesignationLabel;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      nIcon;                                            		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUIServerListWidget.ServerListEntry
// 0x0110
struct FServerListEntry
{
	struct FString                                     sMapName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sGametype;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sAdminName;                                       		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sRestrictText;                                    		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sCurrentPlayers;                                  		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sMaxPlayers;                                      		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPing;                                            		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nBarCount;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsLocked : 1;                                    		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRestricted : 1;                                  		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnding : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                nServerType;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                ServerIndex;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                ServerID;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                MapIndex;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                GameModeIndex;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nPing;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                nCurrentPlayers;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                nMaxPlayers;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                MinLevel;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                MaxLevel;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	struct FString                                     PlaylistName;                                     		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNextLabel;                                       		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNextGametype;                                    		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNextMap;                                         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMapImageLoc;                                     		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FServerAccessDisplayInfo                    AccessInfo;                                       		// 0x00C4 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FServerDesignationDisplayInfo               DesignationInfo;                                  		// 0x00D8 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Address;                                          		// 0x0104 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxLobbyUIBase.PlayerListWidget
// 0x0018
struct FPlayerListWidget
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              FOV;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              YRot;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Opacity;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxLobbyUIBase.PlayerButtonContainerWidget
// 0x001C(0x0034 - 0x0018)
struct FPlayerButtonContainerWidget : FPlayerListWidget
{
	struct FString                                     instancename;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WidgetSpacing;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MaxListWidth;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MaxListHeight;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bVerticalAlign : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxLobbyUIBase.LoadoutData
// 0x007C
struct FLoadoutData
{
	struct FString                                     sLoadoutNum;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLoadoutKey;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPrimIcon;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSecIcon;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPrimaryName;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSecondaryName;                                   		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPrimaryTags;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSecondaryTags;                                   		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtFunction;                                     		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtFunctionArg;                                  		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsSelected : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxPlayerListWidget.PlayerListEntry
// 0x01BC
struct FPlayerListEntry
{
	int                                                nTeamColor;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FEmblemPanelEntry                           EmblemInfo;                                       		// 0x0004 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sClan;                                            		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTitle;                                           		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRatio;                                           		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sScore;                                           		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDeathScore;                                      		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sKillScore;                                       		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAssistScore;                                     		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDefendScore;                                     		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAttackScore;                                     		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCaptureScore;                                    		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sHackScore;                                       		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPing;                                            		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasReady : 1;                                    		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsTalking : 1;                                   		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sReadyText;                                       		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nBarCount;                                        		// 0x00F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsReady : 1;                                     		// 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsMute : 1;                                      		// 0x00FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsIgnored : 1;                                   		// 0x00FC (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     sIgnored;                                         		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsYou : 1;                                       		// 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nList;                                            		// 0x0110 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                UniqueId;                                         		// 0x0114 (0x0008) [0x0000000000000000]              
	int                                                RankIndex;                                        		// 0x011C (0x0004) [0x0000000000000000]              
	int                                                PingMs;                                           		// 0x0120 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                TitleUnlockID;                                    		// 0x0128 (0x0004) [0x0000000000000000]              
	struct FProfileEmblemInfo                          EmblemComponents;                                 		// 0x012C (0x0018) [0x0000000000000000]              
	unsigned long                                      bWantsTeamChange : 1;                             		// 0x0144 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                NumKills;                                         		// 0x0148 (0x0004) [0x0000000000000000]              
	int                                                NumDeaths;                                        		// 0x014C (0x0004) [0x0000000000000000]              
	int                                                NumAssists;                                       		// 0x0150 (0x0004) [0x0000000000000000]              
	int                                                NumDefends;                                       		// 0x0154 (0x0004) [0x0000000000000000]              
	int                                                NumAttacks;                                       		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                NumCaptures;                                      		// 0x015C (0x0004) [0x0000000000000000]              
	int                                                NumHacks;                                         		// 0x0160 (0x0004) [0x0000000000000000]              
	int                                                NumTagsCollected;                                 		// 0x0164 (0x0004) [0x0000000000000000]              
	struct FString                                     sDeathLabel;                                      		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sKillLabel;                                       		// 0x0174 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAssistLabel;                                     		// 0x0180 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDefendLabel;                                     		// 0x018C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAttackLabel;                                     		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCaptureLabel;                                    		// 0x01A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sHackLabel;                                       		// 0x01B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxRegionInfo.RegionListEntry
// 0x006C
struct FRegionListEntry
{
	struct FString                                     NameID;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RegionID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      InvisibleFrom;                                    		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      RegionType;                                       		// 0x001C (0x0001) [0x0000000000000000]              
	struct FString                                     sServerName;                                      		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FriendlyDescription;                              		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              PingStartTime;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              PingResponseTime;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      AnsweredPing : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sStatus;                                          		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sQueue;                                           		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sWait;                                            		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsOnline : 1;                                    		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxLoginUI.LoginFailureHandler
// 0x0010
struct FLoginFailureHandler
{
	unsigned char                                      ErrorCode;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     CommandGroup;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxMatchInfoWidget.MatchInfoData
// 0x0060
struct FMatchInfoData
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMode;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sETA;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTime;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sQueue;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPlayers;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMaxPlayers;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNeed;                                            		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxMenuUI.NewsItemInfo
// 0x0014
struct FNewsItemInfo
{
	struct FString                                     newsText;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlaysLeft;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisplayed : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxMenuUI.ButtonContainerWidget
// 0x0028
struct FButtonContainerWidget
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              FOV;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              YRot;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Opacity;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                WidgetSpacing;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MaxListWidth;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MaxListHeight;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVerticalAlign : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxUI.CrosshairColorInfo
// 0x0030
struct FCrosshairColorInfo
{
	struct FString                                     Color;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                R;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                G;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                RO;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                GO;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                BO;                                               		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxObjectPool.EmitterCacheType
// 0x0198
struct FEmitterCacheType
{
	int                                                ListIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumActiveEmitters;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	class AEmitterSpawnable*                           List[ 0x64 ];                                     		// 0x0008 (0x0190) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxObjectPool.TeamBeaconCacheType
// 0x001C
struct FTeamBeaconCacheType
{
	int                                                ListIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class AFoxTeamBeacon*                              Beacons[ 0x6 ];                                   		// 0x0004 (0x0018) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxObjectPool.DecalDatum
// 0x0018
struct FDecalDatum
{
	class UFoxDecalComponent*                          FD;                                               		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              SpawnTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     SpawnLoc;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              CanSpawnDistance;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxObjectPool.DecalPool
// 0x001C
struct FDecalPool
{
	int                                                MAX_DECALS;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MAX_DECALS_bDropDetail;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MAX_DECALS_bAggressiveLOD;                        		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FDecalDatum >                       Decals;                                           		// 0x000C (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	int                                                DecalsIdx;                                        		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct FoxGame.FoxObjectPool.TracerCacheType
// 0x0054
struct FTracerCacheType
{
	int                                                ListIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class AFoxProjectile_Tracer*                       List[ 0x14 ];                                     		// 0x0004 (0x0050) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxObjectPool.KActorCacheType
// 0x0054
struct FKActorCacheType
{
	int                                                ListIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class AKActorSpawnable*                            List[ 0x14 ];                                     		// 0x0004 (0x0050) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxPawn_HardSuit.VulnerablePoint
// 0x001C
struct FVulnerablePoint
{
	struct FName                                       AttachBoneName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             BoneNames;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UStaticMesh*                                 AttachmentMesh;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DamageModifier;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxPhysicalMaterialProperty.DamageModifier
// 0x0008
struct FDamageModifier
{
	class UClass*                                      DamageClass;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Multiplier;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FoxGame.FoxPRI.PersonalBoost
// 0x0008
struct FPersonalBoost
{
	float                                              BoostMultiplier;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BoostUnlockID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxTeamInfo.TeamBoost
// 0x000C
struct FTeamBoost
{
	float                                              BoostMultiplier;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BoostUnlockID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class AFoxPRI*                                     PRIOwner;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxPrivateMatchCreateUI.PremiumButtonInfo
// 0x0058
struct FPremiumButtonInfo
{
	struct FString                                     sTopText;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sClickHere;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCostText;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCurrencyText;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtClickFunction;                                		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtClickArg;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAdditionalText;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxPrivateMatchCreateUI.DoubleInputBoxInfo
// 0x0084
struct FDoubleInputBoxInfo
{
	struct FString                                     sFilterLabel;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bToggleState : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sTooltip;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sClickFunction;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDefaultTextA;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDefaultTextB;                                    		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sToString;                                        		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nMaxCharsA;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nMaxCharsB;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     sInputFunctionA;                                  		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sInputFunctionB;                                  		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRestrictA;                                       		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRestrictB;                                       		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxPrivateMatchCreateUI.PlaylistListData
// 0x0010
struct FPlaylistListData
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNoInteraction : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsDisabled : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct FoxGame.FoxProfileFlagInfo.ProfileFlagInfo
// 0x0034
struct FProfileFlagInfo
{
	struct FString                                     NameID;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      FlagID;                                           		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     FriendlyName;                                     		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FriendlyDescription;                              		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FriendlyTag;                                      		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxProjectile_GrenadeBase.StickToDetails
// 0x0028
struct FStickToDetails
{
	unsigned long                                      bStickToPawn : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      StickToActor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       StickToBoneName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     StickToLocation;                                  		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    StickToRotation;                                  		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxRadialMenuBase.RadialMenuItem
// 0x0018
struct FRadialMenuItem
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIcon;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxRadialMenuLoadout.LoadoutRadialMenuItem
// 0x0054(0x006C - 0x0018)
struct FLoadoutRadialMenuItem : FRadialMenuItem
{
	struct FString                                     sLoadoutNum;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLoadoutKey;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPrimIcon;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSecIcon;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLoadoutName;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPrimTags;                                        		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSecTags;                                         		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUnlockInfo.TauntUnlockInfo
// 0x0008(0x0058 - 0x0050)
struct FTauntUnlockInfo : FBaseUnlockInfo
{
	unsigned char                                      TauntEnum;                                        		// 0x0050 (0x0001) [0x0000000000000000]              
	unsigned long                                      bEmote : 1;                                       		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxReportBaseUI.ReportReason
// 0x0024
struct FReportReason
{
	struct FString                                     sLabel;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtClickInterfaceFunc;                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtClickInterfaceArg;                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxServerBrowserUI.ServerListTab
// 0x0004
struct FServerListTab
{
	class UGFxObject*                                  TabObject;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxServerBrowserUI.ServerListSortInfo
// 0x000D
struct FServerListSortInfo
{
	struct FString                                     SortLabel;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      SortType;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSettingsUIGameplay.ColorDropDownInfo
// 0x0018
struct FColorDropDownInfo
{
	struct FString                                     sLabel;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sColor;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxSettingsUIKeyBindings.KeyBindInfo
// 0x001C
struct FKeyBindInfo
{
	struct FString                                     CommandName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       PrimaryKey;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       AlternateKey;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSettingsUIVideo.VideoSettingResolution
// 0x0009
struct FVideoSettingResolution
{
	struct FVector2D                                   Resolution;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      AspectRatio;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSkillTreeTier.DeprecatedGemSocketInfo
// 0x0040
struct FDeprecatedGemSocketInfo
{
	struct FString                                     sTooltip;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDurability;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNodeColor;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsBroken : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sExtClickInterfaceFunc;                           		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExtInterfaceArg;                                 		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxSocialCategoryClan.ClanTabInfo
// 0x007C
struct FClanTabInfo
{
	struct FString                                     InfoHeader1Path;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InfoHeader2Path;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InfoMOTDPath;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InfoStatBoxPath;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InfoNewsPath;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InfoChallengeBoxPath;                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MembersListPath;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ManageHeader1Path;                                		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ManageHeader2Path;                                		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MOTDBoxPath;                                      		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClickedMemberIndex;                               		// 0x0078 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSocialUI.PlayerSearchData
// 0x000C
struct FPlayerSearchData
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxSocialUI.SearchTabInfo
// 0x0020
struct FSearchTabInfo
{
	struct FString                                     ListPath;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerSearchData >                 SearchList;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClickedIndex;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	class UFoxUIModalDialogWidget*                     ModalDialog;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSocialCategoryInventory.InventoryItemEntry
// 0x0120
struct FInventoryItemEntry
{
	struct FString                                     sIcon;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sType;                                            		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sRequirementLabel;                                		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sRequirementColor;                                		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTime;                                            		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sColor;                                           		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sUses;                                            		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsLocked : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsExpired : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sDetail;                                          		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasTime : 1;                                     		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasCart : 1;                                     		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDateTime                                   ExpirationDate;                                   		// 0x0074 (0x000C) [0x0000000000000000]              
	unsigned char                                      UnlockState;                                      		// 0x0080 (0x0001) [0x0000000000000000]              
	struct FStoreMetaData                              StoreMeta;                                        		// 0x0084 (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInventoryMetaData >                InventoryMetas;                                   		// 0x0114 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxSocialCategoryMail.MailData
// 0x00C8
struct FMailData
{
	struct FString                                     sIcon;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSubject;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sFrom;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTime;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAttachment;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCOD;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sBody;                                            		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMailMetaData                               MailItem;                                         		// 0x0054 (0x0074) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxSocialCategoryMail.MailTabInfo
// 0x0044
struct FMailTabInfo
{
	struct FString                                     MailTabPath;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InboxPath;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SendCatPath;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SendTabPath;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedMailIndex;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	TArray< struct FMailData >                         CurrentMail;                                      		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  SendMailObject;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSocialCategoryMail.PendingMailInfo
// 0x0024
struct FPendingMailInfo
{
	struct FString                                     RecipientName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Subject;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Body;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxSocialCategoryProfile.StatInfo
// 0x000C
struct FStatInfo
{
	unsigned char                                      StatType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Percision;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ColumnID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxSocialCategoryProfile.UnlockBoxInfo
// 0x0048
struct FUnlockBoxInfo
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTags;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIcon;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatName;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatNumber;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxStatsInfo.WeaponStatsStruct
// 0x001C
struct FWeaponStatsStruct
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      Kills;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      Deaths;                                           		// 0x0009 (0x0001) [0x0000000000000000]              
	int                                                RoundsFired;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RoundsHit;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      HeadShots;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                DamageDealt;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxStatsUI.StatFormatEntry
// 0x0024
struct FStatFormatEntry
{
	unsigned char                                      Stat;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     HeaderLabel;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Precision;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Units;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasTooltip : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseSlashFormat : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLessIsMore : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowSign : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct FoxGame.FoxStoreUIItemDetail.DetailStatEntry
// 0x0024
struct FDetailStatEntry
{
	struct FString                                     sStatLabel;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatNumber;                                      		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatTooltip;                                     		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUIBaseItemListWidget.BaseItemListEntry
// 0x0010(0x01D8 - 0x01C8)
struct FBaseItemListEntry : FBaseStoreEntry
{
	int                                                SortIndex;                                        		// 0x01C8 (0x0004) [0x0000000000000000]              
	struct FDateTime                                   ExpirationDate;                                   		// 0x01CC (0x000C) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUIInventoryListWidget.InventoryListEntry
// 0x001C(0x01F4 - 0x01D8)
struct FInventoryListEntry : FBaseItemListEntry
{
	struct FString                                     sItemNumber;                                      		// 0x01D8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTooltip;                                         		// 0x01E4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsSelected : 1;                                  		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPriority : 1;                                    		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct FoxGame.FoxStoreUITagListWidget.SpecialItemTag
// 0x0010
struct FSpecialItemTag
{
	struct FString                                     TagLabel;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUseSortOverride : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxStoreUITagListWidget.TagListEntry
// 0x0038
struct FTagListEntry
{
	struct FString                                     sLabel;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nHierarchyState;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nSpacing;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsSelected : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsEmpty : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sHierarchyFunction;                               		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalizationKey;                                  		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ParentIndex;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseSortOverride : 1;                             		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxTeamBalance.PCGroup
// 0x0024
struct FPCGroup
{
	TArray< class AFoxPC* >                            PCList;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SkillRating;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bOnBestFitTeam : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                GroupSize;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanTag;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUI.QueuedSocialNotification
// 0x0064
struct FQueuedSocialNotification
{
	unsigned char                                      NotificationType;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FEmblemPanelEntry                           EmblemInfo;                                       		// 0x0004 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     AdditionalInfo;                                   		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUIDialogListWidget.DialogListEntry
// 0x0020(0x0198 - 0x0178)
struct FDialogListEntry : FBaseUnlockEntry
{
	struct FString                                     sPreviewTooltip;                                  		// 0x0178 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPreviewFunction;                                 		// 0x0184 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsSelected : 1;                                  		// 0x0190 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAkEvent*                                    PreviewEvent;                                     		// 0x0194 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUnlockInfo.DialogPackGenderInfo
// 0x0010
struct FDialogPackGenderInfo
{
	struct FString                                     DialogName;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UAkEvent*                                    PreviewEvent;                                     		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct FoxGame.FoxUnlockInfo.DialogPackUnlockInfo
// 0x0020(0x0070 - 0x0050)
struct FDialogPackUnlockInfo : FBaseUnlockInfo
{
	struct FDialogPackGenderInfo                       MDialogInfo;                                      		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDialogPackGenderInfo                       FDialogInfo;                                      		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUIEmblemPanelWidget.EmblemLayerEntry
// 0x000C(0x0184 - 0x0178)
struct FEmblemLayerEntry : FBaseUnlockEntry
{
	struct FString                                     sSwatchColor;                                     		// 0x0178 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUIEmblemPanelWidget.EmblemComponentEntry
// 0x003C
struct FEmblemComponentEntry
{
	TArray< unsigned char >                            UnlockTypes;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ComponentType;                                    		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      EmblemLayer;                                      		// 0x000D (0x0001) [0x0000000000000000]              
	int                                                UnlockID;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ComponentName;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ComponentValue;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExtInterfaceClickFunc;                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUIEmoteListWidget.EmoteListEntry
// 0x003D(0x01B5 - 0x0178)
struct FEmoteListEntry : FBaseUnlockEntry
{
	struct FString                                     sLength;                                          		// 0x0178 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sRemoveTooltip;                                   		// 0x0184 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPreviewTooltip;                                  		// 0x0190 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPreviewFunction;                                 		// 0x019C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsSelected : 1;                                  		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       PreviewAnimName;                                  		// 0x01AC (0x0008) [0x0000000000000000]              
	unsigned char                                      TauntEnum;                                        		// 0x01B4 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUIEmoteListWidget.EmoteRadialEntry
// 0x001C
struct FEmoteRadialEntry
{
	struct FString                                     sIcon;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                UnlockID;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUIServerDetailsWidget.ServerDetailListEntry
// 0x0010
struct FServerDetailListEntry
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNoInteraction : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsDisabled : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsCurrent : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct FoxGame.FoxUIServerFilterWidget.GameModeToggleButton
// 0x0008
struct FGameModeToggleButton
{
	int                                                GameModeIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ButtonObject;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUIServerFilterWidget.FilterDropdown
// 0x0010
struct FFilterDropdown
{
	TArray< int >                                      Options;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  ButtonObject;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUIServerFilterWidget.LevelFilterToggleButton
// 0x000C
struct FLevelFilterToggleButton
{
	int                                                CachedLowerBound;                                 		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                CachedUpperBound;                                 		// 0x0004 (0x0004) [0x0000000000100000]              
	class UGFxObject*                                  ButtonObject;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUnlockInfo.TitleUnlockInfo
// 0x0000(0x0050 - 0x0050)
struct FTitleUnlockInfo : FBaseUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUIUnlockProgressionWidget.UnlockExclusionEntry
// 0x0010
struct FUnlockExclusionEntry
{
	unsigned char                                      UnlockState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            PurchaseStates;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUIUnlockProgressionWidget.UnlockFilterEntry
// 0x0001(0x0019 - 0x0018)
struct FUnlockFilterEntry : FBaseUnlockFilterEntry
{
	unsigned char                                      UnlockCriteria;                                   		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUIUnlockProgressionWidget.UnlockProgressionListEntry
// 0x0004(0x017C - 0x0178)
struct FUnlockProgressionListEntry : FBaseUnlockEntry
{
	int                                                UnlockTypeIndex;                                  		// 0x0178 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxUnlockInfo.ComicUnlockInfo
// 0x000C(0x005C - 0x0050)
struct FComicUnlockInfo : FBaseUnlockInfo
{
	struct FString                                     BinkVideoName;                                    		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUnlockInfo.BasePointBoostUnlockInfo
// 0x0008(0x0058 - 0x0050)
struct FBasePointBoostUnlockInfo : FBaseUnlockInfo
{
	float                                              IncreasePerc;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTeamBoost : 1;                                   		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxUnlockInfo.EmblemLayerUnlockInfo
// 0x0020(0x0070 - 0x0050)
struct FEmblemLayerUnlockInfo : FBaseUnlockInfo
{
	struct FString                                     EmblemIcon;                                       		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     EmblemColor;                                      		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ShapeID;                                          		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bColorLocked : 1;                                 		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FoxGame.FoxUnlockInfo.PackUnlockInfo
// 0x000C(0x005C - 0x0050)
struct FPackUnlockInfo : FBaseUnlockInfo
{
	struct FString                                     PreviewAssetPath;                                 		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FoxGame.FoxUnlockInfo.XPBoostUnlockInfo
// 0x0000(0x0058 - 0x0058)
struct FXPBoostUnlockInfo : FBasePointBoostUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUnlockInfo.CPBoostUnlockInfo
// 0x0000(0x0058 - 0x0058)
struct FCPBoostUnlockInfo : FBasePointBoostUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUnlockInfo.GPBoostUnlockInfo
// 0x0000(0x0058 - 0x0058)
struct FGPBoostUnlockInfo : FBasePointBoostUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUnlockInfo.GPTokenUnlockInfo
// 0x0000(0x0050 - 0x0050)
struct FGPTokenUnlockInfo : FBaseUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUnlockInfo.XPTokenUnlockInfo
// 0x0000(0x0050 - 0x0050)
struct FXPTokenUnlockInfo : FBaseUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUnlockInfo.PMTokenUnlockInfo
// 0x0000(0x0050 - 0x0050)
struct FPMTokenUnlockInfo : FBaseUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUnlockInfo.TKTokenUnlockInfo
// 0x0000(0x0050 - 0x0050)
struct FTKTokenUnlockInfo : FBaseUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUnlockInfo.KeyUnlockInfo
// 0x0000(0x0050 - 0x0050)
struct FKeyUnlockInfo : FBaseUnlockInfo
{
};

// ScriptStruct FoxGame.FoxUnlockInfo.LockboxUnlockInfo
// 0x0000(0x0050 - 0x0050)
struct FLockboxUnlockInfo : FBaseUnlockInfo
{
};

// ScriptStruct FoxGame.FoxWeapon.ImpactDetails
// 0x0074
struct FImpactDetails
{
	int                                                FragmentCount;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FragmentHSCount;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SeedIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SpreadShotCount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Spread;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FRotator                                    LookDir;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FImpactInfo                                 Impact;                                           		// 0x0024 (0x0050) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct FoxGame.FoxWeapon.WeaponStatInfo
// 0x0038
struct FWeaponStatInfo
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   Mat;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysMat;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       StatName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned char                                      StatInfo[ 0x24 ];                                 		// 0x0014 (0x0024) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxWeapon.TARecoil_Loc_Property
// 0x0020
struct FTARecoil_Loc_Property
{
	struct FVector                                     Min;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Max;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              EjectTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ReturnTime;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxWeapon.TARecoil_Rot_Property
// 0x0020
struct FTARecoil_Rot_Property
{
	struct FRotator                                    Min;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Max;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              EjectTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ReturnTime;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxWeapon.TARecoil_Current_Property
// 0x0020
struct FTARecoil_Current_Property
{
	struct FVector                                     TargetLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              CurrTime_Loc;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	struct FRotator                                    TargetRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              CurrTime_Rot;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxWeapon.StatDescriptor
// 0x0010
struct FStatDescriptor
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Points;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct FoxGame.FoxWeapon.AnimNameSwapInfo
// 0x0010
struct FAnimNameSwapInfo
{
	struct FName                                       OriginalAnimName;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       NewAnimName;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif