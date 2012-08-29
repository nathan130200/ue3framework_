/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlanBGame_structs.h
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

// ScriptStruct PlanBGame.PBAccountLevelCommand.AccountCanCommand
// 0x0014
struct FAccountCanCommand
{
	struct FName                                       CommandName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< unsigned long >                            allowed;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBAccountTypeList.PBAccountTypeContainer
// 0x0010
struct FPBAccountTypeContainer
{
	int                                                AccountTypeCode;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AccountTypeString;                                		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBAchievement.TAchievementSupportedEvent
// 0x0010
struct FTAchievementSupportedEvent
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             OnEventFunc;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBAchievementManager.TAchievementEventArray
// 0x000C
struct FTAchievementEventArray
{
	TArray< class UPBAchievement* >                    m_Array;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBAchievementManager.TAchievementEventParams
// 0x0020
struct FTAchievementEventParams
{
	class APlayerReplicationInfo*                      Killer;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      Victim;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class APawn*                                       VictimPawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     sWeaponName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPawnReloading : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nIntegerValue;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBNWeapon.TWeaponCondition
// 0x0024
struct FTWeaponCondition
{
	struct FGuid                                       WeaponSerialNumber;                               		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              fCurrentCondition;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fCurrentMaxCondition;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fLastEquipTime;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fTotalTimeEquipped;                               		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDirtyClient : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDirty : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PlanBGame.PBKWeapon.DebugHitInfo
// 0x0040
struct FDebugHitInfo
{
	unsigned long                                      bServerHit : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     vStart;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     strPlayerName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     vHitLoc;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FVector                                     vBoneLoc;                                         		// 0x0030 (0x000C) [0x0000000000000000]              
	unsigned long                                      bHeadPhysMat : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBHeatSystemArc.HeatCollectorInfo
// 0x0005
struct FHeatCollectorInfo
{
	int                                                iRequiredHeatInBuffer;                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eHeatCollectorHeatEvent;                          		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCommentatorSystem.CommentatorTrackInfo
// 0x002C
struct FCommentatorTrackInfo
{
	struct FString                                     StatlerRef;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     WaldorfRef;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      WaldorfFirst : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     Description;                                      		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              VODelay;                                          		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBHeatSystemArc.PrimaryEventInfo
// 0x0040
struct FPrimaryEventInfo
{
	unsigned long                                      bDisplayOnCrosshair : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      PrimaryHeatEvent;                                 		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                HeatFromEvent;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iHeatBufferPenalty;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAlwaysDisplayDescription : 1;                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisplayDescriptionIfItHasAnyBonusEvent : 1;      		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              fSoundActivationChancePercent;                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EventDescription;                                 		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCommentatorTrackInfo >             CommentatorVOMale;                                		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCommentatorTrackInfo >             CommentatorVOFemale;                              		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   CrowdSound;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBHeatSystemArc.BonusEventInfo
// 0x0038
struct FBonusEventInfo
{
	unsigned char                                      BonusHeatEvent;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                HeatFromBonus;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSoundActivationChancePercent;                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EventDescription;                                 		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Priority;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCommentatorTrackInfo >             CommentatorVOMale;                                		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCommentatorTrackInfo >             CommentatorVOFemale;                              		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   CrowdSound;                                       		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCommentatorSystem.VOLayer
// 0x002C
struct FVOLayer
{
	unsigned char                                      Layer;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	class UAudioComponent*                             AudioComp;                                        		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             FirstAudioDelegate;                               		// 0x0008 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             SecondAudioDelegate;                              		// 0x0014 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              LoadingTimeA;                                     		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LoadingTimeB;                                     		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bPlaying : 1;                                     		// 0x0028 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBKWeapon.GeneralCache
// 0x0074
struct FGeneralCache
{
	float                                              fAimPerc;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WeaponFireType;                                   		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eAimStatus;                                       		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAimInTime;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAimOutTime;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vNormalOffsetPos;                                 		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rNormalOffsetRot;                                 		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vAimOffsetPos;                                    		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rAimOffsetRot;                                    		// 0x0034 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vSprintPosOffset;                                 		// 0x0040 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    vSprintRotOffset;                                 		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSprintSpeedModifier;                             		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vCachedWeaponActorPosition;                       		// 0x005C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    vCachedWeaponActorRotation;                       		// 0x0068 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBKWeapon.SpreadCache
// 0x0068
struct FSpreadCache
{
	unsigned long                                      bSpreadEnabled : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      SpreadType;                                       		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPatternBulletDecaySpeed;                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPatternSpreadCrosshairDecaySpeed;                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpreadDecaySpeed;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpreadMinChangeTime;                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fCurrentTargetMinimumSpreadRadius;                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fBaseMinSpreadModifier;                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fCurrentMinSpreadModifier;                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMinSpreadModifier;                               		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTargetMinAimStill;                               		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTargetMinAimMoving;                              		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTargetMinJumping;                                		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTargetMinCrouchStill;                            		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTargetMinCrouchMoving;                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTargetMinRunning;                                		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTargetMinStanding;                               		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fBaseMaxSpreadRadius;                             		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fCurrentMaxSpreadRadius;                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpreadMaxJumpModifier;                           		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpreadMaxCrouchModifier;                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fBaseSpreadPerBullet;                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fCurrentSpreadPerBullet;                          		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpreadCenterZone;                                		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpreadHitsOnCenterZone;                          		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpreadNumberOfZones;                             		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBKWeapon.RecoilCache
// 0x0008
struct FRecoilCache
{
	float                                              fCurRecoilMaxPitch;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fCurRecoilMaxYaw;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBNWeaponObject.SWeaponCode
// 0x000A
struct FSWeaponCode
{
	unsigned char                                      iBaseWeaponCode;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      iWeaponMaterialCode;                              		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                iModsWeaponCode;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      iWeaponDecalCode;                                 		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      iWeaponGlowCode;                                  		// 0x0009 (0x0001) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBKWeapon.DebugWeaponInfo
// 0x001C
struct FDebugWeaponInfo
{
	struct FName                                       OptionName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       functionName;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBKWeaponParams.RangeDmgInfo
// 0x000C
struct FRangeDmgInfo
{
	float                                              fStartRange;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndRange;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iDmg;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_Data.PBGameItem_IconCoordsInfo
// 0x001C
struct FPBGameItem_IconCoordsInfo
{
	struct FString                                     IconTextureRef;                                   		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FTextureCoordinates                         Coordinates;                                      		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBNWeaponCustomParams.PBNWeaponMaterialInfo
// 0x0068
struct FPBNWeaponMaterialInfo
{
	struct FString                                     MaterialMenuName;                                 		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaterialMenuDescription;                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaterialMenuCategory;                             		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaterialInstanceRef;                              		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FGuid                                       GlobalIdentifier;                                 		// 0x0030 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x0040 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FPBGameItem_IconCoordsInfo                  MaterialIcon;                                     		// 0x004C (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNWeaponCustomParams.PBNWeaponDecalInfo
// 0x0060
struct FPBNWeaponDecalInfo
{
	struct FString                                     DecalMenuName;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DecalMenuDescription;                             		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DecalMenuCategory;                                		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                QuadrantIndex;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       GlobalIdentifier;                                 		// 0x0028 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x0038 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FPBGameItem_IconCoordsInfo                  MaterialIcon;                                     		// 0x0044 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNWeaponCustomParams.WeaponTextureRegion
// 0x0010
struct FWeaponTextureRegion
{
	float                                              OffsetX;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OffsetY;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeX;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeY;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBNWeaponCustomParams.PBNWeaponCustomization
// 0x00CC
struct FPBNWeaponCustomization
{
	struct FPBNWeaponMaterialInfo                      DefaultMaterialInstance;                          		// 0x0000 (0x0068) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPBNWeaponMaterialInfo >            AvailableMaterialInstances;                       		// 0x0068 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPBNWeaponDecalInfo >               AvailableDecals;                                  		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FIntPoint                                   TextureSize;                                      		// 0x0080 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FWeaponTextureRegion                        BodyTextureRgn;                                   		// 0x0088 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BodyMesh1P_Ref;                                   		// 0x0098 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     BodyMesh3P_Ref;                                   		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     CustomWeaponPreview_Offset;                       		// 0x00B0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    CustomWeaponPreview_Rotation;                     		// 0x00BC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CustomWeaponPreview_Scale;                        		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_Data.PBGameItem_IconInfo
// 0x0014
struct FPBGameItem_IconInfo
{
	struct FString                                     IconTextureRef;                                   		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                RowIndex;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColumnIndex;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_Data.PBItemTagData
// 0x0004
struct FPBItemTagData
{
	unsigned long                                      Headwear : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Scalp : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Ears : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      Eyes : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      Mouth : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      Torso1 : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      Torso2 : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      Shoulders : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      Elbow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      LowerArm : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      Hands : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      Legs : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      Thighs : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      Knees : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      LowerLegs : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      Feet : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      Forehead : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      Face_Distant : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      Chin : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      Placeholder1 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      Placeholder2 : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00100000] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_Data.PBItemBaseData
// 0x0044
struct FPBItemBaseData
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FGuid                                       GlobalIdentifier;                                 		// 0x000C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x001C (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CategoryName;                                     		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPBItemTagData                              TagData;                                          		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBNWeaponCustomParams.CustomWeaponData
// 0x000E
struct FCustomWeaponData
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MaterialID;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Mods[ 0x7 ];                                      		// 0x0005 (0x0007) [0x0000000000000000]              
	unsigned char                                      DecalID;                                          		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      GlowID;                                           		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBKWeaponParams.SpreadPatternNode
// 0x0010
struct FSpreadPatternNode
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BulletCount;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fRandomRadius;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBWeaponStatistics.TPBWeaponHitStruct
// 0x0028
struct FTPBWeaponHitStruct
{
	class APBKWeapon*                                  Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSWeaponCode                                WeaponCode;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	class AController*                                 Victim;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	class APawn*                                       VictimPawn;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVictimPawnReloading : 1;                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKill : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                nDamage;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HitZone;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                hitDistance;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBWeaponStatistics.TPBWeaponStat
// 0x0058
struct FTPBWeaponStat
{
	int                                                nHitBodyShots;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nHitHeadShots;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nHitLegsShots;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nMissedShots;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nHeadKills;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nKills;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nDamage;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nMaxDamage;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nTime;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nEquippedTime;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     sWeaponName;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nHitDistance;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nKillDistance;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FSWeaponCode                                pWeaponCode;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	struct FGuid                                       skillGuid;                                        		// 0x0048 (0x0010) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBKWeaponParams.RecoilNode
// 0x000C
struct FRecoilNode
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BulletCount;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBKWeaponParams.IdleBreak
// 0x0010
struct FIdleBreak
{
	float                                              fProbability;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPlayRate;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       IdleName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBKWeaponParams.TFireEffectsInfo
// 0x003C
struct FTFireEffectsInfo
{
	int                                                iWeaponComponentIndex;                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             FireAnim1P;                                       		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    FireAnimTimeScale1P;                              		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             CustomFireAnim3P;                                 		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   WeaponFireSnd1P;                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponFireSnd3P;                                  		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponFireAltSnd1P;                               		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponFireAltSnd3P;                               		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRecoil_UseSecondaryGunNode : 1;                  		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBKWeaponInfo.TWeaponMeshComp
// 0x0018
struct FTWeaponMeshComp
{
	class USkeletalMeshComponent*                      WeaponMeshComp;                                   		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    MuzzleFlash;                                      		// 0x0004 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    BarrelSmokeComp;                                  		// 0x0008 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UParticleSystemComponent* >          rParticleSystems;                                 		// 0x000C (0x000C) [0x0000000004482009]              ( CPF_Edit | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct PlanBGame.PBKWeapon.WRLMiniGameResult
// 0x0005
struct FWRLMiniGameResult
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Result;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBKWeapon.TWeaponInitParams
// 0x0010
struct FTWeaponInitParams
{
	class APBKWeaponParams*                            pNewParams;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FSWeaponCode                                WeaponCode;                                       		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBKWeaponParams.TWeaponParticleComponent
// 0x000C
struct FTWeaponParticleComponent
{
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBKWeaponParams.TWeaponComponents
// 0x0060
struct FTWeaponComponents
{
	struct FName                                       AttachToHandBoneName;                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HolsterSocketName;                                		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MuzzleFlashSocketName;                            		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShellEjectSocketName;                             		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vScale3D;                                         		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vTranslation;                                     		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rRotation;                                        		// 0x0038 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSkipPostprocess1P : 1;                           		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FTWeaponParticleComponent >         rParticleSystems;                                 		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                rMaterialOverrides;                               		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNWeaponParams.PBNWeaponModInfo
// 0x0084
struct FPBNWeaponModInfo
{
	struct FString                                     ModMenuName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ModMenuDescription;                               		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ModMenuCategory;                                  		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UPBNWeaponMod*                               ModParamRef;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       GlobalIdentifier;                                 		// 0x0028 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x0038 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	int                                                Price;                                            		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RealMoneyPrice;                                   		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                requiredRank;                                     		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPBGameItem_IconCoordsInfo                  ModIcon;                                          		// 0x0050 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Mesh1P_Ref;                                       		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Mesh3P_Ref;                                       		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNWeaponParams.PBNWeaponModType
// 0x00A8
struct FPBNWeaponModType
{
	unsigned char                                      ModType;                                          		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FPBNWeaponModInfo                           DefaultMod;                                       		// 0x0004 (0x0084) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPBNWeaponModInfo >                 AvailableMods;                                    		// 0x0088 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FWeaponTextureRegion                        TextureRgn;                                       		// 0x0094 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextureMergeOrder;                                		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBKWeaponParams.TFireEffectsPattern
// 0x000C
struct FTFireEffectsPattern
{
	TArray< unsigned char >                            Pattern;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBSkelControl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct PlanBGame.PBSkelControl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FRecoilParams                               RotParams;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotOffset;                                        		// 0x0030 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LocAmplitude;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FRecoilParams                               LocParams;                                        		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocOffset;                                        		// 0x0064 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBSkill.PBSkillImprovementInfo
// 0x0004
struct FPBSkillImprovementInfo
{
	unsigned long                                      bIsMasterUpgrade : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBPawn.BodyStance
// 0x000C
struct FBodyStance
{
	TArray< struct FName >                             AnimName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBPawn.PBDamagePerPlayer
// 0x0008
struct FPBDamagePerPlayer
{
	class AController*                                 Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBPawn.AttentionIndicator
// 0x000C
struct FAttentionIndicator
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DeactivationDate;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBPawn.DamageIndicator
// 0x0018
struct FDamageIndicator
{
	struct FVector                                     WorldDirection;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              DeactivationDate;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBWeaponStatistics.TDeathMessageStruct
// 0x0040
struct FTDeathMessageStruct
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class AController*                                 Victim;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      SpecialDeath;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                nCausedDamage;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FSWeaponCode                                WeaponCode;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	class APBKWeapon*                                  Weapon;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	class UClass*                                      dmgType;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	class APawn*                                       VictimPawn;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVictimPawnReloading : 1;                         		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sSkillWeaponCode;                                 		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                HitZone;                                          		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBPawn.ViewShakeInfo
// 0x0040
struct FViewShakeInfo
{
	struct FVector                                     OffsetMag;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OffsetRate;                                       		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              OffsetTime;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     RotMag;                                           		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotRateIn;                                        		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotRateOut;                                       		// 0x0034 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBMapList.GameSetupOptionValue
// 0x0018
struct FGameSetupOptionValue
{
	struct FString                                     LocalizedSetupOptionValue;                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBMapList.GameSetupOption
// 0x0020
struct FGameSetupOption
{
	unsigned char                                      GameSetupOptionType;                              		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LocalizedSetupOptionName;                         		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                iDefaultOptionValueIndex;                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGameSetupOptionValue >             rPossibleChoices;                                 		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBMapList.MapElementInfo
// 0x0030
struct FMapElementInfo
{
	struct FName                                       MapFileName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MapLocalizedName;                                 		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MapDescription;                                   		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bReleased : 1;                                    		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bMapPlayable : 1;                                 		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< unsigned char >                            MapModes;                                         		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBMapList.GameModeInfo
// 0x003C
struct FGameModeInfo
{
	unsigned char                                      GameType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     GameTypePrefix;                                   		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GameTypeLocalizedName;                            		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bEnableInLobby : 1;                               		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInDevelopmentOnly : 1;                           		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class UClass*                                      GameRulesClass;                                   		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            GameSetupOptions;                                 		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             rMapNameCycle;                                    		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBVoteList.PBVoteTargetInfo
// 0x0004
struct FPBVoteTargetInfo
{
	unsigned long                                      IncludeAdmins : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IncludeFriendly : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IncludeEnemy : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      IncludeSpectators : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      IncludeSelf : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBVoteList.PBVoteStarterRequirement
// 0x000C
struct FPBVoteStarterRequirement
{
	unsigned long                                      GoldSubscription : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      RequiredUserLevel;                                		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AllowDedicatedSpectator : 1;                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBVoteList.PBVoterRequirement
// 0x0004
struct FPBVoterRequirement
{
	unsigned long                                      FriendlyTeam : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      EnemyTeam : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBVoteList.PBVoteAvailabilityInfo
// 0x0014
struct FPBVoteAvailabilityInfo
{
	unsigned long                                      InCampaign : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      InTDM : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      InRFG : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      InGameSetup : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      InGame : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	struct FPBVoteStarterRequirement                   VoteStarterRequirement;                           		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FPBVoterRequirement                         VoterRequirements;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBVoteList.PBVoteEvent
// 0x0044
struct FPBVoteEvent
{
	unsigned char                                      VoteType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Id;                                               		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FPBVoteAvailabilityInfo                     Availability;                                     		// 0x000C (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FPBVoteTargetInfo                           TargetParameters;                                 		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Enabled : 1;                                      		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     LocalizedVoteName;                                		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LocalizedTitle;                                   		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bPassive : 1;                                     		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBAvatarData.avatarPicture
// 0x0020
struct FavatarPicture
{
	struct FGuid                                       GlobalIdentifier;                                 		// 0x0000 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x0010 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UTexture2D*                                  AvatarTexture;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBHUD.ChatMessage
// 0x0018
struct FChatMessage
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
	float                                              MessageLife;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsGlobal : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBRoundHUD.THChatMessage
// 0x0020
struct FTHChatMessage
{
	unsigned char                                      pType;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      GlobalChanel : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBRoundHUD.HUDBoosterInfo
// 0x0010
struct FHUDBoosterInfo
{
	int                                                iBoosterIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHaveBooster : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                iFans;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                iIGC;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBRoundHUD.ObjectivesHUDInfo
// 0x0008
struct FObjectivesHUDInfo
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBRoundHUD.HUDIcon
// 0x0020
struct FHUDIcon
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     vScreenPos;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              fStartTime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fOffsetHeight;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInstance*                           pMat;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBRoundHUD.MsgHudInfo
// 0x0010
struct FMsgHudInfo
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                W;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                H;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBRoundHUD.IconInfo
// 0x0010
struct FIconInfo
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                W;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                H;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBFlashBangLogic.FlashBangInfo
// 0x0020
struct FFlashBangInfo
{
	float                                              fFadeIn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fFull;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fFadeOut;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fSuperStart;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fSuperFull;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fSuperOut;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fIntensity;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fStart;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBPlayerReplicationInfo.TWeaponPresetCodesPRI
// 0x0084
struct FTWeaponPresetCodesPRI
{
	struct FSWeaponCode                                iWeaponCodes[ 0xB ];                              		// 0x0000 (0x0084) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBWeaponPickup.SDroppedWeaponData
// 0x0014
struct FSDroppedWeaponData
{
	struct FSWeaponCode                                CompleteWeaponCode;                               		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                CurrentAmmo;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TotalAmmoLeft;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_Data.PBCustomChar_MeshPartData
// 0x0011
struct FPBCustomChar_MeshPartData
{
	unsigned char                                      PartID;                                           		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      LeftSide : 1;                                     		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RightSide : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      TextureSchemesIDs[ 0x5 ];                         		// 0x0008 (0x0005) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AttachmentIDs[ 0x4 ];                             		// 0x000D (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_Data.CustomCharData
// 0x010C
struct FCustomCharData
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      GenderID;                                         		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ClanTagID;                                        		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FPBCustomChar_MeshPartData                  MeshParts[ 0xD ];                                 		// 0x0008 (0x0104) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.CustomTextureSchemeReference
// 0x0020
struct FCustomTextureSchemeReference
{
	struct FName                                       BodyPartName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SchemeName;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MaterialParamTextureName;                         		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MaterialParamTileFactorName;                      		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.MeshPart
// 0x0074(0x00B8 - 0x0044)
struct FMeshPart : FPBItemBaseData
{
	int                                                SocketCount;                                      		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DefaultColorSchemeIndex;                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SkMeshRef;                                        		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     SkMeshRightSideRef;                               		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           AlternativeSkMeshRef;                             		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      DependentMesh;                                    		// 0x0070 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SkMesh1P_Ref;                                     		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     SkMesh1P_RightSideRef;                            		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bEnforceColorSchemeCustomization : 1;             		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisableColorSchemeCustomization : 1;             		// 0x008C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class APBCustomChar_ColorSchemeList*               ItemSchemeList;                                   		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    TileFactorsOverride;                              		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned long >                            ReferenceSchemesSelection;                        		// 0x00A0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       DefaultHairColorScheme;                           		// 0x00AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceEmptyItem : 1;                              		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.TextureSchemeInfo
// 0x0018
struct FTextureSchemeInfo
{
	class UTexture*                                    SchemeTexture;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       MaterialParamTextureName;                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              TileFactor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       MaterialParamTileFactorName;                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.PBItemLocator
// 0x0024
struct FPBItemLocator
{
	unsigned char                                      ItemType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      DefaultItem : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      EmptyItem : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                GenderID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                StoreID;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SlotID;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SchemeSlotID;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                itemId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                WeaponCode;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                WeaponModType;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.PBItemInfo
// 0x0008(0x004C - 0x0044)
struct FPBItemInfo : FPBItemBaseData
{
	unsigned char                                      ItemType;                                         		// 0x0044 (0x0001) [0x0000000000000000]              
	int                                                SocketCount;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.PBGameItem_IconLayout
// 0x0020
struct FPBGameItem_IconLayout
{
	int                                                RowCount;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColumnCount;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                IconSizeX;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                IconSizeY;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                IconSpacingX;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                IconSpacingY;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FirstIconOffsetX;                                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FirstIconOffsetY;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.CharLOD_Info
// 0x0008
struct FCharLOD_Info
{
	float                                              DisplayFactor;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LODHysteresis;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.CharacterTextureRegion
// 0x0010
struct FCharacterTextureRegion
{
	float                                              OffsetX;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OffsetY;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeX;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeY;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.CustomTextureSchemeSlot
// 0x0044
struct FCustomTextureSchemeSlot
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       InternalName;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DisplayName;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ItemShopCategory_FatFoogoo;                       		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       MaterialParamTextureName;                         		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MaterialParamTileFactorName;                      		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APBCustomChar_ColorSchemeList*               SchemeList;                                       		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUsePerItemSchemes : 1;                           		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       DefaultSchemeName;                                		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.AttachmentSlot
// 0x004C
struct FAttachmentSlot
{
	struct FName                                       InternalName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DisplayName;                                      		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ItemShopCategory_FatFoogoo;                       		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DefaultAttachmentGuidStr;                         		// 0x0020 (0x000C) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	struct FGuid                                       DefaultAttachmentGuid;                            		// 0x002C (0x0010) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FName >                             SocketList;                                       		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class APBCustomChar_AttachmentList*                Attachments;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.MeshPartStore
// 0x0098
struct FMeshPartStore
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       InternalName;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DisplayName;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DefaultPartGuidStr;                               		// 0x0018 (0x000C) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	struct FGuid                                       DefaultPartGuid;                                  		// 0x0024 (0x0010) [0x0000000000000002]              ( CPF_Const )
	TArray< unsigned char >                            MeshDependsOnOtherPart;                           		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ItemShopCategory_FatFoogoo;                       		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class APBCustomChar_MeshPartList*                  MeshParts;                                        		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FCharacterTextureRegion                     TextureRgn;                                       		// 0x0050 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FCharacterTextureRegion                     TextureRgn_1P;                                    		// 0x0060 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseGenericSchemes : 1;                           		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FCustomTextureSchemeSlot >          TextureSchemeSlots;                               		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCustomTextureSchemeReference >     TextureSchemeRefs;                                		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAttachmentSlot >                   AttachmentSlots;                                  		// 0x008C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCustomChar_AttachmentList.CharAttachment
// 0x0014(0x0058 - 0x0044)
struct FCharAttachment : FPBItemBaseData
{
	struct FName                                       InternalName;                                     		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           StaticMeshList;                                   		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.GenderStore
// 0x0040
struct FGenderStore
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       InternalName;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DisplayName;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FGuid                                       GlobalIdentifier;                                 		// 0x0018 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x0028 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FMeshPartStore >                    MeshPartStores;                                   		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.PBIconInfo
// 0x0014
struct FPBIconInfo
{
	class UTexture*                                    IconTexture;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         IconCoordinates;                                  		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.PBMergeMaterialInfo
// 0x0008
struct FPBMergeMaterialInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UMaterial*                                   CustomMaterial;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_AssetStore.MergeableTextureInfo
// 0x0034
struct FMergeableTextureInfo
{
	class UMaterial*                                   MergeMaterial;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPBMergeMaterialInfo >              CustomMergeMaterials;                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsDiffuseTexture : 1;                            		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      LODGroup;                                         		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CompressionSettings;                              		// 0x001D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSRGB_Source : 1;                                 		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FIntPoint                                   TextureSize;                                      		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FIntPoint                                   TextureSize_1P;                                   		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBMinimapCamera.PBMinimapCamera_ReferencePoint
// 0x0018
struct FPBMinimapCamera_ReferencePoint
{
	struct FVector                                     WorldPos;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     ScreenPos;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBNWeaponList.PBWeaponItemInfo
// 0x0058
struct FPBWeaponItemInfo
{
	class APBNWeaponParams*                            pWeaponParams;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     WeaponParamName;                                  		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class APBNWeaponCustomParams*                      WeaponCustomParam;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       GlobalIdentifier;                                 		// 0x0014 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x0024 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FGuid                                       Repair_GlobalIdentifier;                          		// 0x0030 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Repair_GlobalIdentifierStr;                       		// 0x0040 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      UsedInStatistics : 1;                             		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                StatisticalIndex;                                 		// 0x0050 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      StatisticalIndexSetup : 1;                        		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBTaunts.PBTaunt
// 0x0038
struct FPBTaunt
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     LocalizedName;                                    		// 0x0008 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Duration;                                         		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   SoundCue;                                         		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     ItemGuidStr;                                      		// 0x001C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FGuid                                       ItemGuid;                                         		// 0x0028 (0x0010) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct PlanBGame.PBLocalMessage.TextVoiceMsg
// 0x0018
struct FTextVoiceMsg
{
	struct FString                                     TextMsg;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VoiceMsg;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBAmmunitionCrate.TInteractStruct
// 0x0008
struct APBAmmunitionCrate_FTInteractStruct
{
	class AController*                                 m_Player;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nStartTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBAnim_BlendPerBone.PBPerBoneMaskInfo
// 0x0058
struct FPBPerBoneMaskInfo
{
	TArray< struct FBranchInfo >                       BranchList;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DesiredWeight;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTimeToGo;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWeightRule >                       WeightRuleList;                                   		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bWeightBasedOnNodeRules : 1;                      		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisableForNonLocalHumanPlayers : 1;              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDisableIfCameraBoneMotionScaleIsZero : 1;        		// 0x0020 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPendingBlend : 1;                                		// 0x0020 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	TArray< float >                                    PerBoneWeights;                                   		// 0x0024 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FBoneAtom >                         MaskAtoms;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMatrix >                           MeshSpaceTM;                                      		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            TransformReqBone;                                 		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                TransformReqBoneIndex;                            		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBAnim_DirectionalMove2Idle.DTransInfo
// 0x0028
struct FDTransInfo
{
	struct FName                                       TransitionName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_Fd;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_Bd;                                      		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_Lt;                                      		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_Rt;                                      		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBAnim_MovementNode.TransInfo
// 0x0018
struct FTransInfo
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Range;                                            		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTime;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAdjustAnimPos : 1;                               		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNoTransitionAnim : 1;                            		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bForcePlayerToAim : 1;                            		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBAnim_MovementNode.MovementDef
// 0x001C
struct FMovementDef
{
	float                                              BaseSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTransInfo >                        Move2IdleTransitions;                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UAnimNodeSequence* >                 SeqNodes;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBAnim_Offset.OffsetTransform
// 0x002C
struct FOffsetTransform
{
	struct FRotator                                    Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FVector                                     Translation;                                      		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBAnim_Offset.OffsetComponent
// 0x0040
struct FOffsetComponent
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0008 (0x0008) MISSED OFFSET
	struct FOffsetTransform                            Transform;                                        		// 0x0010 (0x0030) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBAnim_TurnInPlace.RotTransitionInfo
// 0x000D
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PawnPosture;                                      		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBAnim_TurnInPlace_Player.TIP_Transition
// 0x0010
struct FTIP_Transition
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBAnimNodeRandom.PBRandomAnimInfo
// 0x0019
struct FPBRandomAnimInfo
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMin;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMax;                                     		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   PlayRateRange;                                    		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStillFrame : 1;                                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      LoopCount;                                        		// 0x0018 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBAugmentedRealityArch.TAnimInfo
// 0x000C
struct FTAnimInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTimeOverride;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBGameStatisticsLog.StatFileLogStruct
// 0x0010
struct FStatFileLogStruct
{
	class AFileLog*                                    Log;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     FileName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGameInfo.LocalizedCountryData
// 0x0018
struct FLocalizedCountryData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Code;                                             		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGameInfo.BoostersAvailable
// 0x0014
struct FBoostersAvailable
{
	int                                                subscriptionXp;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                subscriptionIgc;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FPBOfferServer >                    offers;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGameReplicationInfo.TRankFormulaValues
// 0x0010
struct FTRankFormulaValues
{
	float                                              iPower;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ValueA;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ValueB;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ValueC;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGameReplicationInfo.TConversionFormulaValues
// 0x0008
struct FTConversionFormulaValues
{
	float                                              fHeatToFans;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fHeatToIGC;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBPlayerReplicationInfo.ServiceBoostInfo
// 0x0018
struct FServiceBoostInfo
{
	struct FGuid                                       guidServiceId;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                iIGCBoost;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                iFansBoost;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCharacter.DebugBoneInfo
// 0x0014
struct FDebugBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     BoneLoc;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCharacter.TWorldShotInfo
// 0x0010
struct FTWorldShotInfo
{
	unsigned char                                      iShotCount;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     vHitLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCharacter.TPawnShotInfo
// 0x000B
struct FTPawnShotInfo
{
	unsigned char                                      iShotCount;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	class APBPawn*                                     pPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      XPos;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      YPos;                                             		// 0x0009 (0x0001) [0x0000000000000000]              
	unsigned char                                      zPos;                                             		// 0x000A (0x0001) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCharacter.TWeaponPresetCodes
// 0x0084
struct FTWeaponPresetCodes
{
	struct FSWeaponCode                                iWeaponCodes[ 0xB ];                              		// 0x0000 (0x0084) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCharacter.THealOverTime
// 0x0018
struct FTHealOverTime
{
	struct FName                                       uniqueName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                iRemainSeconds;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                iIntervalSeconds;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                iHOTDuration;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                iAmount;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_Data.TextureMergeState
// 0x0018
struct FTextureMergeState
{
	unsigned long                                      bUsingCompositeTexture : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture*                                    BaseTexture;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UPBTexture2DComposite*                       CompositeBaseTexture;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTexture*                                    AttachmentTexture;                                		// 0x000C (0x0004) [0x0000000000000000]              
	class UPBTexture2DComposite*                       CompositeAttachmentTexture;                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTexture*                                    BaseTexture_1P;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_Data.PBCustomCharMeshMergeState
// 0x0014
struct FPBCustomCharMeshMergeState
{
	class USkeletalMesh*                               SkMesh;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 StMesh;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  MeshTexture;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AsyncTaskID;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      StreamingCompleted : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBCustomChar_Data.CustomCharMergeState
// 0x01CC
struct FCustomCharMergeState
{
	unsigned long                                      bMergeInProgress : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInvalid : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                StripLODs;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MergeStartTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SpendMergingTime;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TickCounter;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                IdleTickCounter;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              MeshStreamStartTime;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              MeshStreamEndTime;                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MeshesWaitingToStreamIn;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TexStreamStartTime;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              TexStreamEndTime;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMerge1P : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMerge3P : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FCustomCharData                             CharData;                                         		// 0x0030 (0x010C) [0x0000000000000000]              
	struct FString                                     ClanString;                                       		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTextureMergeState >                MergedTextures;                                   		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTexture2D* >                        TexturesWaitingToStreamIn;                        		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SchemeTexturesWaitingToStreamIn;                  		// 0x0160 (0x0004) [0x0000000000000000]              
	TArray< class USkeletalMesh* >                     SkeletalMeshes;                                   		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UStaticMesh* >                       StaticMeshes;                                     		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurTaskIdx;                                       		// 0x017C (0x0004) [0x0000000000000000]              
	int                                                CurSubTaskIdx;                                    		// 0x0180 (0x0004) [0x0000000000000000]              
	int                                                CurSubTaskNumber;                                 		// 0x0184 (0x0004) [0x0000000000000000]              
	TArray< struct FPBCustomCharMeshMergeState >       StreamMeshes;                                     		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPBCustomCharMeshMergeState >       StreamMeshesAttachments;                          		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPBCustomCharMeshMergeState >       StreamTextureSchemes;                             		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               BaseMesh;                                         		// 0x01AC (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               AttachmentMesh;                                   		// 0x01B0 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               ResultMesh;                                       		// 0x01B4 (0x0004) [0x0000000000000000]              
	int                                                SkelMergeObjectPtr;                               		// 0x01B8 (0x0004) [0x0000000000000000]              
	int                                                AttachMergeObjectPtr;                             		// 0x01BC (0x0004) [0x0000000000000000]              
	int                                                AttachMergeDataPtr;                               		// 0x01C0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWaitingForGCToFinish : 1;                        		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOutOfMemory : 1;                                 		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRequestedRetry : 1;                              		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                RetryCount;                                       		// 0x01C8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGameReplicationInfo.CreateCharStatus
// 0x01D8
struct FCreateCharStatus
{
	struct FCustomCharMergeState                       MergeState;                                       		// 0x0000 (0x01CC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APBPlayerReplicationInfo*                    PRI;                                              		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              StartMergeTime;                                   		// 0x01D0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForceSyncMerging : 1;                            		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBNWeaponCustomParams.CustomWeaponModMergeState
// 0x002C
struct FCustomWeaponModMergeState
{
	class USkeletalMesh*                               SkMesh;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 StMesh;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AsyncTaskID;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      StreamingCompleted : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SizeX;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SizeY;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FWeaponTextureRegion                        TextureRgn;                                       		// 0x0018 (0x0010) [0x0000000000000000]              
	int                                                OriginalIdx;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBNWeaponCustomParams.CustomWeaponMergeState
// 0x00A0
struct FCustomWeaponMergeState
{
	unsigned long                                      bMergeInProgress : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInvalid : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFirstPerson : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MergeStartTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SpendMergingTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TickCounter;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                IdleTickCounter;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              MeshStreamStartTime;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              MeshStreamEndTime;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MeshesWaitingToStreamIn;                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              TexStreamStartTime;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TexStreamEndTime;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                GlowColorStreamTaskID;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MaterialStreamTaskID;                             		// 0x002C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  GlowColorTexture;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	class APBNWeaponParams*                            WeaponParam;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	class APBNWeaponCustomParams*                      WeaponCustomParam;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	class UPBNWeaponList*                              WeaponList;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FCustomWeaponData                           WeaponData;                                       		// 0x0040 (0x0010) [0x0000000000000000]              
	TArray< class UPBTexture2DComposite* >             CompositeTextures;                                		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCustomWeaponModMergeState >        ModMeshes;                                        		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurTaskIdx;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                CurSubTaskIdx;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                CurSubTaskNumber;                                 		// 0x0070 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               MergedMesh;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               BaseMesh;                                         		// 0x0078 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               StaticMesh;                                       		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                SkelMergeObjectPtr;                               		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                PartsMergeObjectPtr;                              		// 0x0084 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWaitingForGCToFinish : 1;                        		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOutOfMemory : 1;                                 		// 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnableDecalSystem : 1;                           		// 0x0088 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MaskScaleX;                                       		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              MaskScaleY;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              MaskOffsetX;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              MaskOffsetY;                                      		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutomaticUVLayout : 1;                           		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGameReplicationInfo.CreateWeaponStatus
// 0x00C4
struct FCreateWeaponStatus
{
	struct FCustomWeaponMergeState                     MergeState;                                       		// 0x0000 (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APBPlayerReplicationInfo*                    PRI;                                              		// 0x00A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFirstPerson : 1;                                 		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	class APBKWeaponParams*                            WeaponParams;                                     		// 0x00A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUpdateMeshWhenDone : 1;                          		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartMergeTime;                                   		// 0x00B0 (0x0004) [0x0000000000000000]              
	TArray< class APBWeaponPickup* >                   WeaponPickup;                                     		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bForceSyncMerging : 1;                            		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGameReplicationInfo.PropertyWindows
// 0x0008
struct FPropertyWindows
{
	class UObject*                                     pPropertyObject;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iPointerToPropertyWindow;                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBBot.EnemyPosition
// 0x001C
struct FEnemyPosition
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCameraMover.TMoverStruct
// 0x002C
struct FTMoverStruct
{
	class AActor*                                      LookAt;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     LookAtPos;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	class AActor*                                      Goal;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     GoalPos;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      bContinuousFollowing : 1;                         		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fMoveSpeed;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fRotationSpeed;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCamMod_ScreenShake.ShakeParams
// 0x0004
struct FShakeParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct PlanBGame.PBCamMod_ScreenShake.ScreenShakeStruct
// 0x0065
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                RotParam;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocAmplitude;                                     		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                LocParam;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVAmplitude;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVFrequency;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVSinOffset;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      FOVParam;                                         		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCharacterProgression.PBRankInfo
// 0x002C
struct FPBRankInfo
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LevelName;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPBGameItem_IconInfo                        Icon;                                             		// 0x0018 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCharacterProgression.DebugProgressionInfo
// 0x001C
struct FDebugProgressionInfo
{
	struct FName                                       OptionName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       functionName;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBPlayerReplicationInfo.AwardItemInfo
// 0x0014
struct FAwardItemInfo
{
	int                                                iPosition;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iValue;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sPlayerName;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBPlayerReplicationInfo.AwardInfo
// 0x0054
struct FAwardInfo
{
	unsigned long                                      bIsEndOfRound : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FAwardItemInfo                              items[ 0x4 ];                                     		// 0x0004 (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBPlayerReplicationInfo.PEInfo
// 0x000C
struct FPEInfo
{
	TArray< int >                                      iRefRound;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBPlayerReplicationInfo.ParticipationInfo
// 0x0010
struct FParticipationInfo
{
	float                                              rParticipationTime[ 0x2 ];                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fLastCount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCurrentlyCounting : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBSkillsList.PBTierInfo
// 0x0014
struct FPBTierInfo
{
	float                                              fHeatActivationRequirement;                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   UnlockSoundCue;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     strCongratulationsText;                           		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCharacterNamesPrinterScaleform.TCharPrinterInfoScaleform
// 0x0070
struct FTCharPrinterInfoScaleform
{
	int                                                iPlayerID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sCharacterName;                                   		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bVisible : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTransparent : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnemy : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNemesis : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShowProtectIcon : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FLinearColor                                cPrevColor;                                       		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                cColor;                                           		// 0x0024 (0x0010) [0x0000000000000000]              
	int                                                nPersonalKills;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   vScreenPos;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	float                                              initialScanTime;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              fNameAlpha;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              fPrevNameAlpha;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              fFadingStartTime;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              fEnemyNameStartAlpha;                             		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                iPrevHealth;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFadingOut : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowC4Icon : 1;                                  		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPrevShowC4Icon : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsInDamageTransition : 1;                        		// 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShowingAlternateDamageColour : 1;                		// 0x0058 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bWasShowingAlternateDamageColour : 1;             		// 0x0058 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              fTimeInThisDamageState;                           		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              fDamageEndTime;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      bToDisplay : 1;                                   		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                tickValue;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                iWidget;                                          		// 0x006C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCharacterNamesPrinterScaleform.TCharPrinterInfoScannedScaleform
// 0x006C
struct FTCharPrinterInfoScannedScaleform
{
	int                                                iPlayerID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sCharacterName;                                   		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bVisible : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNemesis : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector2D                                   vScreenPos;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector                                     vWorldPos;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              initialScanTime;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fNameAlpha;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fPrevNameAlpha;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fFadingStartTime;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              fEnemyNameStartAlpha;                             		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      isFading : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                iPrevHealth;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                tickValue;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                iWidget;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                cPrevColor;                                       		// 0x004C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                cColor;                                           		// 0x005C (0x0010) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCharacterNamesPrinterScaleform.TCharPrinterBasicScaleform
// 0x001C
struct FTCharPrinterBasicScaleform
{
	int                                                iPlayerID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     vWorldPos;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                tickValue;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                iCharNameIndex;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                iMinimapIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCharacterNamesPrinterScaleform.TCharPrinterMinimapInfoScaleform
// 0x0060
struct FTCharPrinterMinimapInfoScaleform
{
	unsigned long                                      bEnemy : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsNemesis : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                iPlayerID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInMinimap : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              initialScanTime;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fAlpha;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fPrevAlpha;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fFadingStartTime;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      isFading : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     vWorldPos;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   vMinimapPos;                                      		// 0x002C (0x0008) [0x0000000000000000]              
	int                                                tickValue;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                iBasicInfoIndex;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                iWidget;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	struct FLinearColor                                cPrevColor;                                       		// 0x0040 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                cColor;                                           		// 0x0050 (0x0010) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCharacterNamesPrinterScaleform.TReveal
// 0x0030
struct FTReveal
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                tickValue;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fFadingStartTime;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFadingOut : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowOnHud : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bToDelete : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              revealTime;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                iPlayerID;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     sCharacterName;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsNemesis : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBCharacterRotator.TCharacterRotator
// 0x0024
struct FTCharacterRotator
{
	class AActor*                                      Character;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FRotator                                    StartRotator;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    EndRotator;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              fVelocity;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNormalize : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBChatMessageData.PBChatMessage
// 0x0024
struct FPBChatMessage
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNick;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Channel;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCommCenter.SearchAccountProfile
// 0x0028
struct FSearchAccountProfile
{
	struct FString                                     AccountNick;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AccountName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharacterNameList;                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsFriend : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBCommCenter.TMessage
// 0x000C
struct FTMessage
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCommCenter.TBuddyMessages
// 0x001C
struct FTBuddyMessages
{
	struct FString                                     nick;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNew : 1;                                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFirstCreated : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FTMessage >                         MessageList;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCommCenter.TBuddy
// 0x0058
struct FTBuddy
{
	struct FUniqueNetId                                Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     nick;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AccountName;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ProfileName;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AvatarImage;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsSameSession : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     CurrentLocation;                                  		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      State;                                            		// 0x0040 (0x0001) [0x0000000000000000]              
	unsigned char                                      Friendship;                                       		// 0x0041 (0x0001) [0x0000000000000000]              
	struct FString                                     PresenceInfo;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastOnlineSec;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              RemoveDate;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCommentatorSystemArc.GlobalTrackStruct
// 0x002C
struct FGlobalTrackStruct
{
	unsigned char                                      GlobalEvent;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Description;                                      		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCommentatorTrackInfo >             EventTracks;                                      		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCommentatorTrackInfo >             EventTracksFemale;                                		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   CrowdSound;                                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCommentatorSystemArc.SafetyBuyTrackStruct
// 0x0028
struct FSafetyBuyTrackStruct
{
	struct FString                                     EventName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCommentatorTrackInfo >             EventTracks;                                      		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                TriggerAtSecond;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCommentatorSystemArc.GameModeTrackStruct
// 0x001C
struct FGameModeTrackStruct
{
	struct FString                                     GameModeName;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      eGameMode;                                        		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCommentatorTrackInfo >             GameModeTracks;                                   		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCommentatorSystemArc.LevelTrackStruct
// 0x0018
struct FLevelTrackStruct
{
	struct FString                                     LevelName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCommentatorTrackInfo >             LevelTracks;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCustomChar_ColorSchemeList.CustomColorScheme
// 0x0020(0x0064 - 0x0044)
struct FCustomColorScheme : FPBItemBaseData
{
	struct FName                                       InternalName;                                     		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultTileFactor;                                		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MenuIconTileFactor;                               		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SchemeTextureRef;                                 		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      SchemeColor;                                      		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_Dummy.CustomPartData2
// 0x0010
struct FCustomPartData2
{
	struct FName                                       PartName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class USkeletalMeshComponent*                      MeshComp[ 0x2 ];                                  		// 0x0008 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct PlanBGame.PBCustomChar_ItemSearchCache.PBDefaultItemInfo
// 0x0034
struct FPBDefaultItemInfo
{
	struct FGuid                                       ItemGuid;                                         		// 0x0000 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FPBItemLocator                              ItemLocator;                                      		// 0x0010 (0x0024) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct PlanBGame.PBCustomChar_ItemSearchCache.PBItemGenderCache
// 0x0048
struct FPBItemGenderCache
{
	struct FMap_Mirror                                 ItemCache;                                        		// 0x0000 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FPBDefaultItemInfo >                DefaultItems;                                     		// 0x003C (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNWeaponList.PBNWeaponMergeableTextureInfo
// 0x0010
struct FPBNWeaponMergeableTextureInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LODGroup;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CompressionSettings;                              		// 0x0009 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMaskTexture : 1;                                 		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDiffuseTexture : 1;                              		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSRGB : 1;                                        		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBNWeaponList.PBNWeaponGlowColorInfo
// 0x0058
struct FPBNWeaponGlowColorInfo
{
	struct FString                                     GlowColorMenuName;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GlowColorMenuDescription;                         		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GlowColorMenuCategory;                            		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GlowColorTextureRef;                              		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FGuid                                       GlobalIdentifier;                                 		// 0x0030 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x0040 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	int                                                Price;                                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RealMoneyPrice;                                   		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                requiredRank;                                     		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBNWeaponList.PBNWeaponGlobalCustomizationInfo
// 0x004C
struct FPBNWeaponGlobalCustomizationInfo
{
	TArray< class UMaterial* >                         CustomizableMaterials;                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterial*                                   FinalMaterial;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           DefaultTextures;                                  		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPBNWeaponMergeableTextureInfo >    MergeableTextures;                                		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPBNWeaponGlowColorInfo >           GlowColors;                                       		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ThirdPersonTextureLODBias;                        		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     HandMeshOffset1P;                                 		// 0x0038 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ReferenceResolution;                              		// 0x0044 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBServicesStorage.TPBServiceItem
// 0x0020(0x0064 - 0x0044)
struct FTPBServiceItem : FPBItemBaseData
{
	int                                                XpBoost;                                          		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CreditsBoost;                                     		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      MasterBooster : 1;                                		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FPBDate                                     ActivePeriod;                                     		// 0x0050 (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBCustomChar_MenuData.PBExtendedProfile
// 0x0114(0x0138 - 0x0024)
struct FPBExtendedProfile : FPBProfile
{
	unsigned long                                      bBanned : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCustomCharData                             CharData;                                         		// 0x0028 (0x010C) [0x0000000000000000]              
	class UPBCustomChar_MenuData*                      CharMenuData;                                     		// 0x0134 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_MenuData.TPBShopNavigationInfo
// 0x002C
struct FTPBShopNavigationInfo
{
	struct FGuid                                       UnlockedColorGuid;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       UnlockedItemGuid;                                 		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     UnlockedOfferCategory;                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCustomChar_Merge.PBCharAsyncTaskInfo
// 0x0018
struct FPBCharAsyncTaskInfo
{
	int                                                TaskID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ObjectName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Completed : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class UObject*                                     LoadedObject;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_Preview.PBWeaponAttachmentPreviewInfo
// 0x000C
struct FPBWeaponAttachmentPreviewInfo
{
	unsigned char                                      WeaponCategory;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	class USkeletalMeshComponent*                      WeaponParentComponent;                            		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      WeaponMeshComponent;                              		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct PlanBGame.PBCustomChar_Preview.CustomPartData
// 0x0010
struct FCustomPartData
{
	struct FName                                       PartName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class USkeletalMeshComponent*                      MeshComp[ 0x2 ];                                  		// 0x0008 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct PlanBGame.PBCustomChar_Preview.PBItemEquipAnimInfo
// 0x0010
struct FPBItemEquipAnimInfo
{
	unsigned char                                      ItemType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             AnimationNames;                                   		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCustomChar_Preview.AnimSetPerGender
// 0x004C
struct FAnimSetPerGender
{
	struct FName                                       GenderName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    AnimSet;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    AnimSet2;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    AnimSet_PrimaryWeapon;                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       IdleBreakSlotName;                                		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CustomAnimSlotName;                               		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponAnimSlotName;                               		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ItemRemoveAnimationName;                          		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPBItemEquipAnimInfo >              ItemEquipAnimations;                              		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             GenericItemEquipAnimationNames;                   		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBCustomChar_Preview.PBObjectCacheItem
// 0x0020
struct FPBObjectCacheItem
{
	struct FString                                     ObjectName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LoadRequestId;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      ObjectLoaded : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class UStaticMesh*                                 StMesh;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               SkMesh;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   Material;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_Preview.PBPendingSetCharData
// 0x0120
struct FPBPendingSetCharData
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCustomCharData                             Data;                                             		// 0x0004 (0x010C) [0x0000000000000000]              
	unsigned long                                      bItemEquipped : 1;                                		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ChangedPartIndex;                                 		// 0x0114 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAttachmentChanged : 1;                           		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ChangedAttachmentIndex;                           		// 0x011C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomChar_Preview.PBPendingSetWeapon
// 0x001C
struct FPBPendingSetWeapon
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                iBaseWeaponCode;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FCustomWeaponData                           WeaponData;                                       		// 0x0008 (0x0010) [0x0000000000000000]              
	unsigned long                                      bItemEquipped : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPrimaryWeapon : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PlanBGame.PBCustomChar_Preview.PBPendingSetCustomWeaponData
// 0x001C
struct FPBPendingSetCustomWeaponData
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCustomWeaponData                           WeaponData;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	class APBKWeaponParams*                            InWeaponParams;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	class APBNWeaponCustomParams*                      InWeaponCustomParams;                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomizationCache.PBCC_WeaponData
// 0x0018
struct FPBCC_WeaponData
{
	struct FCustomWeaponData                           Data;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	class APBNWeaponParams*                            Param;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               SkMesh;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomizationCache.PBCC_CharacterData
// 0x0114
struct FPBCC_CharacterData
{
	struct FCustomCharData                             Data;                                             		// 0x0000 (0x010C) [0x0000000000000000]              
	class USkeletalMesh*                               Mesh1P;                                           		// 0x010C (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               Mesh3P;                                           		// 0x0110 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBCustomizationCache.PBWCC_PlayerCache
// 0x012C
struct FPBWCC_PlayerCache
{
	int                                                Age;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocalPlayer : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FPBCC_WeaponData >                  Weapons;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPBCC_CharacterData                         Character;                                        		// 0x0018 (0x0114) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBDestructibleStaticActor.DestructibleMeshDamageInfo
// 0x0014
struct FDestructibleMeshDamageInfo
{
	float                                              fEffectiveRadius;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxRadius;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEffectiveDamage;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMomentumTransfer;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBDestructibleStaticActor.DestructibleMeshInfo
// 0x003C
struct FDestructibleMeshInfo
{
	int                                                iSwitchWhenHealth;                                		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UStaticMesh*                                 pStaticMesh;                                      		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UMaterialInterface*                          pMaterial;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             pParticleSystem;                                  		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bKillPreviousParticleSystems : 1;                 		// 0x0010 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bHideMesh : 1;                                    		// 0x0010 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bDisableCollision : 1;                            		// 0x0010 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	TArray< class USoundCue* >                         rSoundEffects;                                    		// 0x0014 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              fAutomaticSwitchDelay;                            		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bTakeNoDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bKillPreviousSounds : 1;                          		// 0x0024 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	struct FDestructibleMeshDamageInfo                 pDamageInfo;                                      		// 0x0028 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct PlanBGame.PBEmitterPool.AttachedExplosionLight
// 0x0014
struct FAttachedExplosionLight
{
	class UPointLightComponent*                        Light;                                            		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      Base;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBEMPEffect.PBEMPEffect_MaterialParm
// 0x000C
struct FPBEMPEffect_MaterialParm
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParamValue;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBEquipmentMap.TCurrentlyEquipped
// 0x0030
struct FTCurrentlyEquipped
{
	struct FGuid                                       SerialGuid;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       ItemGuid;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FGuid                                       ColorGuid;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBEquipmentMap.TNewOffer
// 0x0020
struct FTNewOffer
{
	struct FGuid                                       OfferGuid;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       ItemGuid;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBEquipmentMap.TGlobalBasketEquipment
// 0x014C
struct FTGlobalBasketEquipment
{
	struct FString                                     Category;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTCurrentlyEquipped                         CurrentlyEquipped[ 0x4 ];                         		// 0x000C (0x00C0) [0x0000000000000000]              
	struct FTNewOffer                                  NewOffer[ 0x4 ];                                  		// 0x00CC (0x0080) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBStatisticsStats.StatisticsStat
// 0x0018
struct FStatisticsStat
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Type;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Page;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBNotificationSystem.Notification
// 0x0024
struct FNotification
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Type;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNotificationSystem.dateStruct
// 0x0018
struct FdateStruct
{
	int                                                Year;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Month;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Hour;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                minute;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                second;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBNotificationSystem.sheduledNotification
// 0x002C
struct FsheduledNotification
{
	int                                                showTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x001C (0x0001) [0x0000000000000000]              
	struct FString                                     CharacterName;                                    		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNotificationSystem.BuddyNotification
// 0x0018
struct FBuddyNotification
{
	TArray< struct FString >                           BuddyNotificationList;                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AccountName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNotificationSystem.SubscriptionData
// 0x0014
struct FSubscriptionData
{
	int                                                lastSubscriptionDuration;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FGuid                                       subscriptionId;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGamePlayerStatRead.TCalculatedPlayerStatistics
// 0x0030
struct FTCalculatedPlayerStatistics
{
	int                                                nCampaignPlayed;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fCampaignPlayedPercent;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nCampaignTimePlayed;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fCampaignTimePlayedPercent;                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nTDMRoundsPlayed;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fTDMRoundsPlayedPercent;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nTDMTimePlayed;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fTDMTimePlayedPercent;                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nReinforcementRoundPlayed;                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fReinforcementRoundPlayedPercent;                 		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nReinforcementTimePlayed;                         		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fReinforcementTimePlayedPercent;                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGameRules.StructCommentator
// 0x000C
struct FStructCommentator
{
	unsigned char                                      EventName;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFemale : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGameRules_SND.RoundWinInfo
// 0x0018
struct FRoundWinInfo
{
	unsigned char                                      winReason;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                iWinningTeam;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                iAttackersScore;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                iDefendersScore;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      winInstigator;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      winVictim;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGameSettingsCommon.BannedPlayer
// 0x0010
struct FBannedPlayer
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                banTime;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGameWeaponStatRead.TCalculatedWeaponStatistics
// 0x001C
struct FTCalculatedWeaponStatistics
{
	float                                              fAccuracy;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nKills;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nFullHit;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nHeadHit;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nBodyHit;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nDamage;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nTime;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGDR_TeamBase.BaseStage
// 0x001C
struct FBaseStage
{
	unsigned char                                      HealthSwitch;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               BaseSkeletalMesh;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    BaseAnimset;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimToPlay;                                       		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLoopAnim : 1;                                    		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UParticleSystem*                             BaseParticleSystem;                               		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct PlanBGame.PBGFxMovie_Layered.TGFxLayer
// 0x001C
struct FTGFxLayer
{
	struct FString                                     MovieName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MovieFileName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  Movie;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxMovie_Layered.TGFxClasses
// 0x0010
struct FTGFxClasses
{
	struct FString                                     MovieFileName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      MovieClass;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxMoviePlayer_SNDMinigame.hitZoneInfo
// 0x0008
struct FhitZoneInfo
{
	float                                              flash_hitzonetime;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_successful : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      flash_alreadymissed : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PlanBGame.PBGlobalBasket.TConflictingItem
// 0x0038
struct FTConflictingItem
{
	struct FGuid                                       SerialGuid;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       OfferGuid;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     Category;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGlobalBasket.TSkinInfo
// 0x000C
struct FTSkinInfo
{
	TArray< struct FGuid >                             GlobalIdentifiers;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGlobalBasket.THeadInfo
// 0x003C
struct FTHeadInfo
{
	TArray< struct FGuid >                             GlobalIdentifiers;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemIndexes;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Names;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTSkinInfo >                        Skins;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nSkinStoreID;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nSchemeStoreID;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nStoreID;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterCreation.TCharacterProfileInfo
// 0x0028
struct UPBGFxObject_CharacterCreation_FTCharacterProfileInfo
{
	class UTexture*                                    AvatarImage;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Loaded : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	class UPBCustomChar_MenuData*                      Character;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class APBCustomChar_Preview*                       Actor;                                            		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterCreation.ItemPresetChange
// 0x0024
struct FItemPresetChange
{
	struct FGuid                                       itemId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       colorId;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	int                                                newPreset;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterCreation.TItems
// 0x0014
struct FTItems
{
	TArray< struct FItemPresetChange >                 items;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLoaded : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nItemsToChange;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterCreation.TCharInfo
// 0x001C
struct FTCharInfo
{
	int                                                nGender;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FGuid                                       guidGender;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                nRace;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSkin;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterSelection.TCharacterProfileInfo
// 0x0040
struct UPBGFxObject_CharacterSelection_FTCharacterProfileInfo
{
	class UTexture*                                    AvatarImage;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AvatarImageIndex;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       ProfileId;                                        		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FString                                     Desc;                                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      Loaded : 1;                                       		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	class UPBCustomChar_MenuData*                      Character;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	class APBCustomChar_Preview*                       Actor;                                            		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterSelection.TPBCharacterSelection_State
// 0x0004
struct FTPBCharacterSelection_State
{
	unsigned long                                      flash_locked : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGlobalBasket.TPBCharacterShopOffer
// 0x0188
struct FTPBCharacterShopOffer
{
	unsigned long                                      flash_empty : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     flash_text;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_itemdescription;                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_itemname;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_colorname;                                  		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       OfferGuid;                                        		// 0x0034 (0x0010) [0x0000000000000000]              
	struct FString                                     flash_offerguidstring;                            		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       ItemGuid;                                         		// 0x0050 (0x0010) [0x0000000000000000]              
	struct FString                                     flash_itemguidstring;                             		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       ColorGuid;                                        		// 0x006C (0x0010) [0x0000000000000000]              
	struct FString                                     flash_colorguidstring;                            		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       serialNumber;                                     		// 0x0088 (0x0010) [0x0000000000000000]              
	struct FString                                     flash_type;                                       		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_category;                                   		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_marketcategory;                             		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                flash_discount;                                   		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                flash_servicetype;                                		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                flash_colorgroup;                                 		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FGuid                                       requireditemguid;                                 		// 0x00C0 (0x0010) [0x0000000000000000]              
	struct FString                                     flash_requireditemname;                           		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      flash_requireditemavailable : 1;                  		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FGuid                                       requiredSubscription;                             		// 0x00E0 (0x0010) [0x0000000000000000]              
	struct FString                                     flash_requiredsubscription;                       		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      flash_requiredsubscriptionavailable : 1;          		// 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                flash_coolness;                                   		// 0x0100 (0x0004) [0x0000000000000000]              
	int                                                flash_requiredcoolness;                           		// 0x0104 (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_requiredcoolnessavailable : 1;              		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                flash_requiredrank;                               		// 0x010C (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_requiredrankavailable : 1;                  		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                flash_leasetime;                                  		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                flash_skilllevel;                                 		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                flash_preset;                                     		// 0x011C (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_isfolder : 1;                               		// 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                flash_costscoins;                                 		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                flash_originalcostscoins;                         		// 0x0128 (0x0004) [0x0000000000000000]              
	int                                                flash_costscredits;                               		// 0x012C (0x0004) [0x0000000000000000]              
	int                                                flash_originalcostscredits;                       		// 0x0130 (0x0004) [0x0000000000000000]              
	int                                                flash_maxcreditscondition;                        		// 0x0134 (0x0004) [0x0000000000000000]              
	int                                                flash_currentcondition;                           		// 0x0138 (0x0004) [0x0000000000000000]              
	struct FString                                     flash_texturepath;                                		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTextureCoordinates                         flash_coordinates;                                		// 0x0148 (0x0010) [0x0000000000000000]              
	struct FString                                     flash_colortexturepath;                           		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTextureCoordinates                         flash_colorcoordinates;                           		// 0x0164 (0x0010) [0x0000000000000000]              
	unsigned long                                      flash_shopitem : 1;                               		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      flash_equipped : 1;                               		// 0x0174 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      flash_inbasket : 1;                               		// 0x0174 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      flash_credits : 1;                                		// 0x0174 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      flash_constant : 1;                               		// 0x0174 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      flash_fakeitem : 1;                               		// 0x0174 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned char                                      basket_itemCategory;                              		// 0x0178 (0x0001) [0x0000000000000000]              
	unsigned char                                      basket_weaponType;                                		// 0x0179 (0x0001) [0x0000000000000000]              
	struct FString                                     basket_sortingString;                             		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterShop.TPBCharacterShopOfferColors
// 0x01A0
struct FTPBCharacterShopOfferColors
{
	struct FTPBCharacterShopOffer                      LastSelected;                                     		// 0x0000 (0x0188) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTPBCharacterShopOffer >            Colors;                                           		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTPBCharacterShopOffer >            LastSelectedInGroups;                             		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterShop.TPBCharacterShopOfferCache
// 0x0018
struct FTPBCharacterShopOfferCache
{
	struct FString                                     CategoryName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTPBCharacterShopOfferColors >      CategoryItems;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterShop.TPBPotentialItem
// 0x0024
struct FTPBPotentialItem
{
	struct FString                                     offerstring;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     itemguidstring;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     colorguidstring;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_CharacterShop.TPBUIItemInfo
// 0x0024
struct FTPBUIItemInfo
{
	struct FString                                     flash_itemname;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_description;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           flash_conflicts;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_CommCenter.buddyItem
// 0x0058
struct FbuddyItem
{
	struct FString                                     flash_biavatar;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_biaccountname;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_biprofilename;                              		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_bistatus;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_biiconstatus;                               		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_binick;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_iisFriend;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_biisPlaying : 1;                            		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      flash_biisSameSession : 1;                        		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      flash_bisystembusy : 1;                           		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      flash_bimodifyingthis;                            		// 0x0050 (0x0001) [0x0000000000000000]              
	int                                                flash_LastOnlineSec;                              		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_CommCenter.ChatButtonItem
// 0x0034
struct FChatButtonItem
{
	struct FString                                     flash_cniaccountname;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_cniprofilename;                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_cninick;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_cniiconstatus;                              		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      flash_cniblinking : 1;                            		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      flash_canclose : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PlanBGame.PBGFxObject_CommCenter.SearchResultItem
// 0x001D
struct FSearchResultItem
{
	struct FString                                     flash_sriname;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_srinick;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      flash_sriisbuddy : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      flash_srisystembusy : 1;                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      flash_srimodifyingthis;                           		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBShop.MainPanelCategory
// 0x002C
struct FMainPanelCategory
{
	struct FString                                     flash_internalname;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_localizedname;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      flash_important : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      flash_haschildren : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      flash_expanded : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      flash_notranslate : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                flash_marketingcategory;                          		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< struct FMainPanelCategory >                flash_children;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBShop.TSubGroup
// 0x001C
struct FTSubGroup
{
	struct FString                                     Type;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                service_type;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FTPBCharacterShopOffer >            items;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBInventory_Appearance.AppearanceCategory
// 0x0018
struct FAppearanceCategory
{
	struct FString                                     InternalName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalizedName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBInventory_Weapons.WeaponItem
// 0x00D0
struct FWeaponItem
{
	struct FPBItem                                     Item;                                             		// 0x0000 (0x00BC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RequiredSlots;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FGuid                                       ItemGuid;                                         		// 0x00C0 (0x0010) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBInventory_Weapons.UIWeaponParamsInfo
// 0x0024
struct FUIWeaponParamsInfo
{
	struct FString                                     flash_caption;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_internalname;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_value;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                flash_shift;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                flash_total;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBNWeaponList.SWeaponModTypeDesc
// 0x0030
struct FSWeaponModTypeDesc
{
	unsigned char                                      ModType;                                          		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MenuModName;                                      		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       SocketName;                                       		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ItemShopSubCategory;                              		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ItemIcon;                                         		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGlobalBasket.TPBModOffer
// 0x0004(0x018C - 0x0188)
struct FTPBModOffer : FTPBCharacterShopOffer
{
	int                                                flash_slots;                                      		// 0x0188 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGlobalBasket.TPBTauntOffer
// 0x0024(0x01AC - 0x0188)
struct FTPBTauntOffer : FTPBCharacterShopOffer
{
	struct FString                                     flash_length;                                     		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              flash_floatlength;                                		// 0x0194 (0x0004) [0x0000000000000000]              
	int                                                flash_heat;                                       		// 0x0198 (0x0004) [0x0000000000000000]              
	struct FString                                     flash_multiplier;                                 		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              flash_floatmultiplier;                            		// 0x01A8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBShop.PBWeaponParamsInfo
// 0x0024
struct UPBShop_FPBWeaponParamsInfo
{
	struct FString                                     flash_caption;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_internalname;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_value;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                flash_shift;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                flash_total;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBShop.PBSBoosterList
// 0x0018
struct FPBSBoosterList
{
	struct FString                                     booster_name;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     booster_duration;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBShop_Service.TServiceCategory
// 0x0018
struct UPBShop_Service_FTServiceCategory
{
	struct FString                                     Category;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTPBCharacterShopOffer >            items;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_ConsolidatedLobby.FameLevelData
// 0x0010
struct FFameLevelData
{
	int                                                flash_minFans;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                flash_maxFans;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_isFinalLevel : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                flash_level;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_ConsolidatedLobby.DetailedBoosterInfo
// 0x0014
struct FDetailedBoosterInfo
{
	struct FString                                     flash_boosterlabel;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_boostervalue;                               		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_havebooster : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGFxObject_ConsolidatedLobby.DropDownValue
// 0x0010
struct FDropDownValue
{
	struct FString                                     flash_Display;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_ReturnValue;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_ConsolidatedLobby.PlayerInfo
// 0x0024
struct FPlayerInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TeamID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iAvatarPicture;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              streamingProgress;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      streamingFinished : 1;                            		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      playerIsRoomMaster : 1;                           		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      updateRoomMaster : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      isPremium : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      isSuperMaster : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                tickValue;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_ConsolidatedLobby.TLobbyScoreboardInfo
// 0x003C
struct FTLobbyScoreboardInfo
{
	int                                                iAvatarID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iPlayerID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     additionalInfo;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iPosition;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fHeat;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                iKills;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                iDamage;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                iDeaths;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                iAssists;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      isPlayer : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGFxObject_ControlBar.TCharacterStatsInfo
// 0x0048
struct FTCharacterStatsInfo
{
	int                                                flash_coins;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                flash_credits;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                flash_coolness;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                flash_heatbonus;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                flash_maxbonus;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     flash_charname;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_chardescription;                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_avatar;                                     		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      flash_ispremium : 1;                              		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                flash_subscriptionduration;                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                flash_currentfans;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                flash_nextfans;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_HalfTime.THalfTimeStruct
// 0x000C
struct FTHalfTimeStruct
{
	int                                                flash_teamindex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                flash_heat;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                flash_score;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_HalfTime_SND.THalfTimeStructSND
// 0x0028
struct FTHalfTimeStructSND
{
	int                                                flash_teamindex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                flash_heat;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                flash_friendlyscore;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                flash_enemyscore;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     flash_initialattackdefendstring;                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_finalattackdefendstring;                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_HUD.TDeathMessage
// 0x004C
struct FTDeathMessage
{
	struct FString                                     KillerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VictimName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                cKillerColor;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                cVictimColor;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                iPersonalKills;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      SpecialDeath;                                     		// 0x0024 (0x0001) [0x0000000000000000]              
	struct FString                                     SWeaponCode;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      dmgType;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              fDisplayRefTime;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              fFadeRefTime;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              fFadeRefOpacity;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                iWidget;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      toDelete : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGFxObject_HUD.TChatMessage
// 0x0044
struct FTChatMessage
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ChannelColour;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                playerColour;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MessageColour;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fDisplayRefTime;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fFadeRefTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              fFadeRefOpacity;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                iWidget;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      toDelete : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGFxObject_HUD.SkillUnlockData
// 0x001C
struct FSkillUnlockData
{
	struct FString                                     skillName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     skillIcon;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              firstVisibleTime;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_HUD.WeaponPickupDisplayed
// 0x0034
struct FWeaponPickupDisplayed
{
	struct FName                                       pickupName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     pickupLabelName;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Id;                                               		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              XPos;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              YPos;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                tickValue;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              FadeOutStartTime;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              Alpha;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_HUD.AdvertAugmentedRealityDisplayed
// 0x0028
struct FAdvertAugmentedRealityDisplayed
{
	struct FName                                       advertName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Id;                                               		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              XPos;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              YPos;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                tickValue;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              FadeOutStartTime;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Alpha;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_HUD.AmmoCrateDisplayed
// 0x0034
struct FAmmoCrateDisplayed
{
	struct FName                                       crateName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     crateLabelName;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Id;                                               		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              XPos;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              YPos;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                tickValue;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              FadeOutStartTime;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              Alpha;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_HUD.TurretDisplayed
// 0x0030
struct FTurretDisplayed
{
	struct FName                                       turretName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                creatorID;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      friendly : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                tickValue;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsInDamageTransition : 1;                        		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowingAlternateDamageColour : 1;                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasShowingAlternateDamageColour : 1;             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              fTimeInThisDamageState;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fDamageEndTime;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_HUD.EnergyTrack
// 0x0010
struct FEnergyTrack
{
	float                                              fEnergy;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsSelectable : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fEnergySelection;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      isSelectableSelection : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBHeatEventManager.EventQueueItem
// 0x0028
struct FEventQueueItem
{
	struct FString                                     EventDescString;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EventIconName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPenalty : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      soundPlayed : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      fadedUp : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              fTimeDisplayed;                                   		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fLife;                                            		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fAlpha;                                           		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBGFxObject_HUD_Scoreboard.TPlayerInfo
// 0x002C
struct FTPlayerInfo
{
	int                                                iPlayerID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iPosition;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fHeat;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                iKills;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                iDamage;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                iDeaths;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                iAssists;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                iPingLevel;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                iPingValue;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                iTickValue;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      isPlayer : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsDead : 1;                                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PlanBGame.PBGFxObject_HUD_UnlockedItems.TColorStruct
// 0x001C
struct FTColorStruct
{
	struct FGuid                                       ItemGuid;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FTPBCharacterShopOffer >            Colors;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_MainMenu.TPBPreset
// 0x000C
struct FTPBPreset
{
	TArray< struct FString >                           flash_preset;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_MainMenu.TPBSkillInfo
// 0x001C
struct FTPBSkillInfo
{
	struct FString                                     flash_itemguid;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_itemname;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_level;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_MainMenu.TPBCharacterInfo
// 0x000C
struct FTPBCharacterInfo
{
	TArray< struct FTPBSkillInfo >                     flash_skills;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_Options.VideoSettingsStruct
// 0x0034
struct FVideoSettingsStruct
{
	int                                                ResX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ResY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFullscreen : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Quality;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TextureQuality;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DetailMode;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AnisotropicFiltering;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Multisamples;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ShadowmapResolution;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      DynamicDecals : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      DynamicLights : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      DynamicShadows : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      MotionBlur : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      DepthOfField : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      HighPolyCharacters : 1;                           		// 0x0024 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      EnablePostProcessing : 1;                         		// 0x0024 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      Bloom : 1;                                        		// 0x0024 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      HighQualityBloom : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      Distortion : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      FogVolumes : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      VSync : 1;                                        		// 0x0024 (0x0004) [0x0000000000000000] [0x00000800] 
	int                                                SpeedTreeQuality;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              SpeedTreeNearMultiplier;                          		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              SpeedTreeFarMultiplier;                           		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_Options.AudioSettingsStruct
// 0x002C
struct FAudioSettingsStruct
{
	int                                                nMasterVolume;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSpeechVolume;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nMusicVolume;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nEffectsVolume;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nHEATVolume;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHardwareOpenAL : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTextToSpeech : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPromotionMusic : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bVoiceChat : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                nVoiceChatVolume;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMicrophone : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nMicrophoneVolume;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPushToTalk : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nMicrophoneThreshold;                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_PlayerSettings.PBSubmenuInfo
// 0x0014
struct FPBSubmenuInfo
{
	unsigned char                                      eSceneType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      SceneClass;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SceneName;                                        		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_PlayerSettings_Faction.TFactionImageParams
// 0x0010
struct FTFactionImageParams
{
	float                                              U;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_WeaponShop.PBUIEquipModStruct
// 0x0048
struct FPBUIEquipModStruct
{
	struct FGuid                                       EquippingModItemGuid;                             		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGuid                                       EquippingModOfferGuid;                            		// 0x0010 (0x0010) [0x0000000000000000]              
	TArray< struct FTPBCharacterShopOffer >            EquippedModsArray;                                		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TotalSlots;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                RequiredSlots;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                EquippedSlots;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	TArray< int >                                      EquippedSlotsArray;                               		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Preset;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_WeaponShop.PBUILoadoutInfo
// 0x0010
struct FPBUILoadoutInfo
{
	struct FString                                     flash_name;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_index;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_WeaponShop.PBUIWeaponInfo
// 0x0010
struct FPBUIWeaponInfo
{
	struct FString                                     flash_name;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_condition;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_ServerBrowser.TPBServerDetail
// 0x0064
struct FTPBServerDetail
{
	int                                                itemIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                boost;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameType;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameTypeTxt;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Ping;                                             		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                PlayerCount;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                MaxPlayers;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                lockedServer;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                isInLobby;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     flash_texturepath;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerRegion;                                     		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_ServiceShop.TServiceCategory
// 0x0018
struct UPBGFxObject_ServiceShop_FTServiceCategory
{
	struct FString                                     Category;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTPBCharacterShopOffer >            items;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_ServiceShop.TPBServicePeriod
// 0x001C
struct FTPBServicePeriod
{
	int                                                flash_leasetime;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_inbasket : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FGuid                                       OfferGuid;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                flash_costscoins;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_ServiceShop.TPBAvatarData
// 0x0018
struct FTPBAvatarData
{
	struct FString                                     flash_texturepath;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_offerguidstring;                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_ServiceShop.TPBRaceData
// 0x000C
struct FTPBRaceData
{
	struct FString                                     flash_racename;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_ServiceShop.TPBServiceOffer
// 0x0070(0x01F8 - 0x0188)
struct FTPBServiceOffer : FTPBCharacterShopOffer
{
	TArray< struct FTPBServicePeriod >                 flash_period;                                     		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      flash_lastinputnamevalid : 1;                     		// 0x0194 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     flash_newinputname;                               		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_lastinputname;                              		// 0x01A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTPBAvatarData >                    flash_avatars;                                    		// 0x01B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_selectedavatarguidstring;                   		// 0x01BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_currentavatarguidstring;                    		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTPBRaceData >                      flash_races;                                      		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_selectedraceindex;                          		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                flash_selectedcolorindex;                         		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                flash_inbasketraceindex;                          		// 0x01E8 (0x0004) [0x0000000000000000]              
	int                                                flash_inbasketcolorindex;                         		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                flash_currentraceindex;                           		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                flash_currentcolorindex;                          		// 0x01F4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_SkillShop.TPBSkillLevel
// 0x0010
struct FTPBSkillLevel
{
	int                                                flash_requiredrank;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_locked : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      flash_inbasket : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      flash_shopitem : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                flash_costscoins;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                flash_costscredits;                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGFxObject_SkillShop.TPBSkillOffer
// 0x000C(0x0194 - 0x0188)
struct FTPBSkillOffer : FTPBCharacterShopOffer
{
	TArray< struct FTPBSkillLevel >                    flash_levels;                                     		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_SteamPurchase.TPBBundlesInfo
// 0x001C
struct FTPBBundlesInfo
{
	struct FString                                     flash_sku;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_amount_sc;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     flash_amount_realmoney;                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_WeaponShop.TPBWeaponShopOfferCache
// 0x0018
struct FTPBWeaponShopOfferCache
{
	struct FString                                     CategoryName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTPBCharacterShopOffer >            CategoryItems;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGFxObject_WeaponShop.PBWeaponParamsInfo
// 0x0024
struct UPBGFxObject_WeaponShop_FPBWeaponParamsInfo
{
	struct FString                                     flash_caption;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_internalname;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_value;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                flash_shift;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                flash_total;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBGlobalBasket.TPBUIFilter
// 0x0020
struct FTPBUIFilter
{
	struct FString                                     flash_name;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     flash_internalname;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                flash_quantity;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      flash_selected : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBGlobalBasket.TPBLocalizedFilter
// 0x0018
struct FTPBLocalizedFilter
{
	struct FString                                     filtername;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalizedName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGlobalBasket.TColorGuid
// 0x001C
struct FTColorGuid
{
	struct FGuid                                       Guid;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     GuidString;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBGlobalBasket.TSortingColorGuid
// 0x0014
struct FTSortingColorGuid
{
	struct FGuid                                       Guid;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBHeatSystemHandler.PlayerEventInfo
// 0x0028
struct FPlayerEventInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fLastKillTime;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastKillerID;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iMultiKillCount;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iReloadSuccesses;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                efficientKills;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iKillsWithoutDying;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDeathInBerserk : 1;                              		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                iDeathsWithoutKilling;                            		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iShotsHit;                                        		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBInstructionVideoList.PBInstructionVideo
// 0x0014
struct FPBInstructionVideo
{
	unsigned char                                      eType;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                TeamIndex;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTextureMovie*                               pMovieReference;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   pSoundCue;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnable : 1;                                      		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBItemComparisonGame.CustomWeaponDataEx
// 0x000D
struct FCustomWeaponDataEx
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MaterialID;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Mods[ 0x7 ];                                      		// 0x0005 (0x0007) [0x0000000000000000]              
	unsigned char                                      WeaponID;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBSkill_GattlingGun.GattlingGunData
// 0x0044
struct FGattlingGunData
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RateOfFire;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationSpeed;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MovementModifierEquiped;                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MovementModifierSpinning;                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpinUpTime;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EquipTime;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FiringEnergyLoss;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OnlySpinningEnergyLoss;                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EquipedEnergyLoss;                                		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplosionRadius;                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplosionDamage;                                  		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplosionRadiusEffective;                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                spinHealAmount;                                   		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SkillWeaponParamName;                             		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBKWeaponSettings.WeaponSettingInfo
// 0x0010
struct FWeaponSettingInfo
{
	struct FName                                       SettingName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       FuncName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBNWeapon_Merge.AsyncTaskInfo
// 0x0018
struct FAsyncTaskInfo
{
	int                                                TaskID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ObjectName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Completed : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class UObject*                                     LoadedObject;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBNWeaponList.SWeaponCategoryDesc
// 0x0010
struct FSWeaponCategoryDesc
{
	unsigned char                                      WeaponCategory;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ItemShopCategory;                                 		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBNWeaponPreset.SWeaponPresetCodes
// 0x0030
struct FSWeaponPresetCodes
{
	struct FSWeaponCode                                rWeaponCodes[ 0x4 ];                              		// 0x0000 (0x0030) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBStatisticsKeys.StatisticsKey
// 0x001C
struct FStatisticsKey
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Type;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       KeyTableType;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBStatisticsKeys.TStatisticsObject
// 0x000C
struct FTStatisticsObject
{
	TArray< struct FStatisticsKey >                    Fields;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBStatisticsKeys.TKeySet
// 0x000C
struct FTKeySet
{
	TArray< struct FTStatisticsObject >                Objects;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBOperatorServerRequestHandler.PBRequestTypePriority
// 0x0008
struct FPBRequestTypePriority
{
	unsigned char                                      ERequestType;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                iPriority;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBOperatorServerRequestHandler.PBItemShopServerRequest
// 0x0140
struct FPBItemShopServerRequest
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                RequestID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fQueuedTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fStartProcessTime;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fFinishTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FGuid                                       SerialNum;                                        		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FString                                     UserName;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       ProfileId;                                        		// 0x003C (0x0010) [0x0000000000000000]              
	struct FGuid                                       gameRequestId;                                    		// 0x004C (0x0010) [0x0000000000000000]              
	struct FString                                     UserId;                                           		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SessionId;                                        		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FieldName;                                        		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nValue;                                           		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                Status;                                           		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FGuid                                       orchestratorId;                                   		// 0x0088 (0x0010) [0x0000000000000000]              
	TArray< struct FPBSubmitProgressionProfileData >   ProfileData;                                      		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnPingServerDone;                                 		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnLoginServerDone;                                		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnGetProfileDetailsServerDone;                    		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnLogoutServerDone;                               		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnUpdateProfileDetailsServerDone;                 		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnGetPresetsServerDone;                           		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnGetSubscriptionModeServerDone;                  		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnSendPlayerStatusServerDone;                     		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnIncrementCoolnessServerDone;                    		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnGetProgressionDone;                             		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnSubmitProgressionServerDone;                    		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnDeleteEventByBackendDone;                       		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnGetBoostersServerDone;                          		// 0x0134 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBPawnSoundGroup.FootstepSoundInfo
// 0x000C
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SoundC;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBProj_Mortar.InitialPhysicState
// 0x001C
struct FInitialPhysicState
{
	float                                              LocationX;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LocationY;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LocationZ;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                pitchYaw;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              VelocityX;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              VelocityY;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              VelocityZ;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBRegionList.PBRegionsContainer
// 0x0014
struct FPBRegionsContainer
{
	int                                                regioncode;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOnlyInDevelopment : 1;                           		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     RegionString;                                     		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBServicesStorage.TPBServiceCategory
// 0x001C
struct FTPBServiceCategory
{
	unsigned char                                      m_eInterfaceCategory;                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_sItemShopCategory;                              		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTPBServiceItem >                   m_ServiceItemArray;                               		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBServicesStorage.TPBSubscriptionMode
// 0x0054
struct FTPBSubscriptionMode
{
	struct FGuid                                       GlobalIdentifier;                                 		// 0x0000 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     GlobalIdentifierStr;                              		// 0x0010 (0x000C) [0x0000000000402003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     SubscriptionName;                                 		// 0x001C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bCanSetServerPassword : 1;                        		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCanSetServerName : 1;                            		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FPBGameItem_IconCoordsInfo                  MenuIcon;                                         		// 0x002C (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      SubscriptionType;                                 		// 0x0048 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                XpBoost;                                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CreditsBoost;                                     		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSkelControl_Twist.TwistBoneData
// 0x001C
struct FTwistBoneData
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                BoneIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                BoneYawOffset;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BoneAdj;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BoneYawTolerance;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInMotion : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBGame.PBSkelControl_Twist.LeanBoneData
// 0x0014
struct FLeanBoneData
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                BonePitchLowerTolerance;                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BonePitchUpperTolerance;                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BoneIndex;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBSkelControlSingleBoneByWeapon.PBBoneAdjustments
// 0x0038
struct FPBBoneAdjustments
{
	unsigned long                                      bApplyTranslation : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAddTranslation : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FVector                                     BoneTranslation;                                  		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneTranslationSpace;                             		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TranslationSpaceBoneName;                         		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyRotation : 1;                               		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAddRotation : 1;                                 		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FRotator                                    BoneRotation;                                     		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneRotationSpace;                                		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RotationSpaceBoneName;                            		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSkelControlSingleBoneByWeapon.PBWeaponAdjustments
// 0x0078
struct FPBWeaponAdjustments
{
	struct FName                                       WeaponProfileName;                                		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FPBBoneAdjustments                          NoAimAdjustments;                                 		// 0x0008 (0x0038) [0x0000000000000001]              ( CPF_Edit )
	struct FPBBoneAdjustments                          AimAdjustments;                                   		// 0x0040 (0x0038) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSkill_Akimbo.SSkillAkimbo_WeaponInfo
// 0x0014
struct FSSkillAkimbo_WeaponInfo
{
	struct FString                                     WeaponParamName;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnergyCostPerBullet;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSkill_Berserk.BerserkImprovementInfo
// 0x001C
struct FBerserkImprovementInfo
{
	float                                              fRestoreHealthPerc;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDmgAbsorption;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMovementModifier;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fChargeMovementModifier;                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AlternativeWeaponParams;                          		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBSkill_HeadCrab.HeadCrabData
// 0x0014
struct FHeadCrabData
{
	int                                                Lifetime;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HitPoints;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ActivatedLifeTime;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MovementSpeed;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEnergyCostPerSecond;                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSkill_Heal.HealData
// 0x0010
struct FHealData
{
	int                                                InitialHeal;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HealPerSecond;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HealPerSecondDuration;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEnergyRefreshModifier;                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSkill_Mortar.MortarImprovementInfo
// 0x000C
struct FMortarImprovementInfo
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumberOfMissiles;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StrikeRadius;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSkill_PPlane.PaperPlaneImprovement
// 0x0008
struct FPaperPlaneImprovement
{
	class APBPaperPlanePawn*                           pPaperPlaneTemplate;                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEnergyUseAtThisLevel;                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSpawnPointTDM.WeightedSpawnVolume
// 0x0008
struct FWeightedSpawnVolume
{
	class APBSpawnVolumeTDM*                           spawnVolume;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBSpecialList.PBSpecialContainer
// 0x0010
struct FPBSpecialContainer
{
	int                                                SpecialCode;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SpecialString;                                    		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBStatisticsStats.TStatisticsStatsObject
// 0x000C
struct FTStatisticsStatsObject
{
	TArray< struct FStatisticsStat >                   Fields;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBStatisticsStats.TStatsSet
// 0x000C
struct FTStatsSet
{
	TArray< struct FTStatisticsStatsObject >           Objects;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBTDMSpawnPoint.TPenaltyStruct
// 0x000C
struct FTPenaltyStruct
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fPenalty_Friend;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fPenalty_Enemy;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBTexture2DComposite.PBSourceTexture2DRegion
// 0x0038
struct FPBSourceTexture2DRegion
{
	struct FString                                     RegionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OffsetX;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                OffsetY;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SizeX;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                SizeY;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RequiredMipCount;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture2D;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      DefaultTexture : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseSourceOffset : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                SourceOffsetX;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                SourceOffsetY;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                SourceSizeX;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                SourceSizeY;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBUIDataStore_OnlineBuddies.BuddyEntry
// 0x0024
struct FBuddyEntry
{
	struct FString                                     OnlineStatus;                                     		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     MessageStatus;                                    		// 0x0018 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBUIDataStore_OnlineStats.StatsArray
// 0x000C
struct FStatsArray
{
	TArray< class UOnlineStatsRead* >                  Stats;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBUIDataStore_OnlineStats.TCalculatedOverallWeaponStatistics
// 0x0034
struct FTCalculatedOverallWeaponStatistics
{
	float                                              fTotalAccuracy;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTotalDamage;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nTotalKills;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nTotalHeadKills;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nMaxWeaponKills;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nMaxWeaponDamage;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fHeadShotsPercent;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nHeadShotsQuantity;                               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fBodyShotsPercent;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nBodyShotsQuantity;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fMissedShotsPercent;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nMissedShotsQuantity;                             		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nTotalTime;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBUIDataStore_OnlineStats.TIncreasePageStruct
// 0x0008
struct FTIncreasePageStruct
{
	int                                                m_nMapIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nWeaponIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBGame.PBUIDataStore_StringList.EStringListData
// 0x0034
struct FEStringListData
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ColumnHeaderText;                                 		// 0x0008 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CurrentValue;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultValueIndex;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           Strings;                                          		// 0x0024 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UPBUIDataProvider_StringArray*               DataProvider;                                     		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PlanBTypes.MapNodeObjectiveInfo
// 0x0008
struct FMapNodeObjectiveInfo
{
	int                                                iObjectiveMapNode;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBlocked : 1;                                     		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct PlanBGame.PlanBTypes.MapNodeInfo
// 0x003C
struct FMapNodeInfo
{
	struct FString                                     NodeTitle;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     NodeDescription;                                  		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       LevelPackageName;                                 		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterial*                                   pMaterialForVotingScreen;                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FMapNodeObjectiveInfo                       pAlphaObjective;                                  		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FMapNodeObjectiveInfo                       pBetaObjective;                                   		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APBSpecialZoneInfo*                          pSpecialZone;                                     		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      pLevelCell;                                       		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PlanBGame.PBVoiceOverList.PBVoiceOverAvailabilityInfo
// 0x0004
struct FPBVoiceOverAvailabilityInfo
{
	unsigned long                                      bTDM : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRFG : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCampaign : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBVoiceOverList.PBVoiceOverSoundInfo
// 0x0048
struct FPBVoiceOverSoundInfo
{
	TArray< struct FString >                           rReceiver1PMaleSounds;                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           rReceiver1PFemaleSounds;                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           rReceiver3PMaleSounds;                            		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           rReceiver3PFemaleSounds;                          		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           rSender1PMaleSounds;                              		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           rSender1PFemaleSounds;                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBVoiceOverList.PBVoiceOverInfo
// 0x0061
struct FPBVoiceOverInfo
{
	struct FPBVoiceOverAvailabilityInfo                pAvailability;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FPBVoiceOverSoundInfo                       pSound;                                           		// 0x0008 (0x0048) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bSpatialize : 1;                                  		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlaySoundOnSender : 1;                           		// 0x005C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      eVoiceOverType;                                   		// 0x0060 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBVoiceOverList.PBRadioCommandGroup
// 0x001C
struct FPBRadioCommandGroup
{
	int                                                iIndex;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      rCommands;                                        		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBVoiceOverList.PBTakeHitSoundInfo
// 0x000C
struct FPBTakeHitSoundInfo
{
	unsigned char                                      DamageType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   pSound;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   pSound_Female;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBVoiceOverList.PBVoiceOver
// 0x0028
struct FPBVoiceOver
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSpatialize : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sSoundReference1P;                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSoundReference3P;                                		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PlanBGame.PBVoiceOverList.TSafetyBuyCommentator
// 0x0008
struct FTSafetyBuyCommentator
{
	int                                                iTriggerAtSecond;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WhichSoundCue;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBGame.PBWeaponPickup.TInteractStruct
// 0x0008
struct APBWeaponPickup_FTInteractStruct
{
	class AController*                                 m_Player;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nStartTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif