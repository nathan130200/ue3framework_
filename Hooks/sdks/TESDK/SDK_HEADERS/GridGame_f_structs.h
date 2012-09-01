/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GridGame_f_structs.h
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

// Function GridGame.PgAltConfig.LoadAltConfig
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UPgAltConfig_execLoadAltConfig_Parms
{
	struct FString                                     configName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     altName;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgDamageParamInterface.OnDamageCaused
// [0x00020400] ( FUNC_Native )
struct UPgDamageParamInterface_execOnDamageCaused_Parms
{
	int                                                damageCaused;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damageVictim;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDamageParamInterface.GetCauseDamageParam
// [0x00020400] ( FUNC_Native )
struct UPgDamageParamInterface_execGetCauseDamageParam_Parms
{
	class UPgDamageParam*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEventTrackerInterface.ClearTrackedEvents
// [0x00020400] ( FUNC_Native )
struct UPgEventTrackerInterface_execClearTrackedEvents_Parms
{
};

// Function GridGame.PgEventTrackerInterface.GetTrackedEventInfo
// [0x00420400] ( FUNC_Native )
struct UPgEventTrackerInterface_execGetTrackedEventInfo_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FTrackedEventInfo                           Info;                                             		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEventTrackerInterface.CheckForTrackedEvent
// [0x00020400] ( FUNC_Native )
struct UPgEventTrackerInterface_execCheckForTrackedEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEventTrackerInterface.TrackEventByName
// [0x00024400] ( FUNC_Native )
struct UPgEventTrackerInterface_execTrackEventByName_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgGridProfileSettings.HasCompletedAchievement
// [0x00020802] ( FUNC_Event )
struct UPgGridProfileSettings_eventHasCompletedAchievement_Parms
{
	unsigned char                                      AchievementId;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ProfileId;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CompletionMaskValue;                              		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bResult : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgGridProfileSettings.MarkAchievementAsCompleted
// [0x00024802] ( FUNC_Event )
struct UPgGridProfileSettings_eventMarkAchievementAsCompleted_Parms
{
	unsigned char                                      AchievementId;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         GPC;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSaveProfile : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ProfileId;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurrentCompletedAchievementMask;                  		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bResult : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgGridProfileSettings.GetProfileSettingValueIdByName
// [0x00420002] 
struct UPgGridProfileSettings_execGetProfileSettingValueIdByName_Parms
{
	struct FName                                       SettingName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                OutValue;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             SettingId;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgGridProfileSettings.GetProfileSettingValueStringByName
// [0x00420002] 
struct UPgGridProfileSettings_execGetProfileSettingValueStringByName_Parms
{
	struct FName                                       SettingName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     OutValue;                                         		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             SettingId;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgGridProfileSettings.GetProfileSettingValueFloatByName
// [0x00420002] 
struct UPgGridProfileSettings_execGetProfileSettingValueFloatByName_Parms
{
	struct FName                                       SettingName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              OutValue;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             SettingId;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgGridProfileSettings.GetProfileSettingValueIntByName
// [0x00420002] 
struct UPgGridProfileSettings_execGetProfileSettingValueIntByName_Parms
{
	struct FName                                       SettingName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                OutValue;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             SettingId;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgHud.ShowGammaCalibration
// [0x00024802] ( FUNC_Event )
struct APgHud_eventShowGammaCalibration_Parms
{
	unsigned long                                      show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                X;                                                		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Y;                                                		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Width;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Height;                                           		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgHud.PostRender
// [0x00020802] ( FUNC_Event )
struct APgHud_eventPostRender_Parms
{
	// float                                           FontWidth;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           FontHeight;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           YPos;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgMaterialInstanceInterface.GetMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct UPgMaterialInstanceInterface_execGetMaterialInstanceList_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgMaterialInstanceInterface.InitMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct UPgMaterialInstanceInterface_execInitMaterialInstanceList_Parms
{
};

// Function GridGame.PgPlugInInterface.PlugIns
// [0x00424405] ( FUNC_Final | FUNC_Native )
struct UPgPlugInInterface_execPlugIns_Parms
{
	class UPgActorPlugIn*                              PlugIn;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      BaseClass;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlugInInterface.TriggerInputPlugIns
// [0x00020400] ( FUNC_Native )
struct UPgPlugInInterface_execTriggerInputPlugIns_Parms
{
	unsigned long                                      pressed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       Button;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlugInInterface.SyncClientPlugIns
// [0x00020500] ( FUNC_Native )
struct UPgPlugInInterface_execSyncClientPlugIns_Parms
{
};

// Function GridGame.PgPlugInInterface.SyncServerPlugIns
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct UPgPlugInInterface_eventSyncServerPlugIns_Parms
{
	int                                                plugInRep;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlugInInterface.GetConditionalPlugInField
// [0x00020400] ( FUNC_Native )
struct UPgPlugInInterface_execGetConditionalPlugInField_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlugInInterface.SetConditionalPlugInField
// [0x00020400] ( FUNC_Native )
struct UPgPlugInInterface_execSetConditionalPlugInField_Parms
{
	int                                                plugInRep;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSimpleMenuMovie.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UPgSimpleMenuMovie_eventStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTargetableInterface.CanTarget
// [0x00020400] ( FUNC_Native )
struct UPgTargetableInterface_execCanTarget_Parms
{
	class APawn*                                       thePawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTargetableInterface.GetMaxTargetableDist
// [0x00020400] ( FUNC_Native )
struct UPgTargetableInterface_execGetMaxTargetableDist_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTargetableInterface.GetMinTargetableDist
// [0x00020400] ( FUNC_Native )
struct UPgTargetableInterface_execGetMinTargetableDist_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgActorPlugIn.Detach
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugIn_execDetach_Parms
{
};

// Function GridGame.PgActorPlugIn.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugIn_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugIn.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugIn_execActivate_Parms
{
};

// Function GridGame.PgActorPlugIn.OnDeactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugIn_execOnDeactivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgActorPlugIn.OnActivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugIn_execOnActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgActorPlugInActorFactory.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInActorFactory_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInActorFactory.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInActorFactory_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInAkSetState.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInAkSetState_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInAkSetSwitch.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInAkSetSwitch_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInComponent.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInComponent_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInComponent.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInComponent_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInConditional.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInConditional_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInConditional.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInConditional_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInConditional.Detach
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInConditional_execDetach_Parms
{
};

// Function GridGame.PgActorPlugInEmitter.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInEmitter_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInEmitter.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInEmitter_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInBeamTrailEmitter.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInBeamTrailEmitter_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInBeamTrailEmitter.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInBeamTrailEmitter_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInFireSideEffect.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInFireSideEffect_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInFireSideEffect.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInFireSideEffect_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInLightWall.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInLightWall_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInMaterialParam.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInMaterialParam_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInModifyCameraScore.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInModifyCameraScore_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInModifyCameraScore.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInModifyCameraScore_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInModifyProperty.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInModifyProperty_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInModifyProperty.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInModifyProperty_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInPhysMatEffect.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInPhysMatEffect_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInResetFreeCamera.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInResetFreeCamera_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInSeqAction.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInSeqAction_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInSetCameraStyle.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInSetCameraStyle_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInSetMaterial.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInSetMaterial_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInSetPhysics.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInSetPhysics_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInSetSkeletalMesh.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInSetSkeletalMesh_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInSound.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInSound_execDeactivate_Parms
{
};

// Function GridGame.PgActorPlugInSound.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInSound_execActivate_Parms
{
};

// Function GridGame.PgActorPlugInTakeDamage.Activate
// [0x00020400] ( FUNC_Native )
struct UPgActorPlugInTakeDamage_execActivate_Parms
{
};

// Function GridGame.PgPawnPlugInSpecialMove.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgPawnPlugInSpecialMove_execDeactivate_Parms
{
};

// Function GridGame.PgPawnPlugInSpecialMove.Activate
// [0x00020400] ( FUNC_Native )
struct UPgPawnPlugInSpecialMove_execActivate_Parms
{
};

// Function GridGame.PgPawnPlugInVehicle.Activate
// [0x00020400] ( FUNC_Native )
struct UPgPawnPlugInVehicle_execActivate_Parms
{
};

// Function GridGame.PgPlayerPlugInLockOn.SetLockTarget
// [0x00020400] ( FUNC_Native )
struct UPgPlayerPlugInLockOn_execSetLockTarget_Parms
{
	unsigned long                                      lockTarget : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerPlugInLockOn.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgPlayerPlugInLockOn_execDeactivate_Parms
{
};

// Function GridGame.PgPlayerPlugInLockOn.Activate
// [0x00020400] ( FUNC_Native )
struct UPgPlayerPlugInLockOn_execActivate_Parms
{
};

// Function GridGame.PgPlayerPlugInLockOn.SetTargetScan
// [0x00024400] ( FUNC_Native )
struct UPgPlayerPlugInLockOn_execSetTargetScan_Parms
{
	unsigned char                                      targetScan;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              targetScanAngle;                                  		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerPlugInLockOn.SwitchTarget
// [0x00020400] ( FUNC_Native )
struct UPgPlayerPlugInLockOn_execSwitchTarget_Parms
{
};

// Function GridGame.PgPlayerPlugInLockOn.GetTargets
// [0x00420400] ( FUNC_Native )
struct UPgPlayerPlugInLockOn_execGetTargets_Parms
{
	TArray< class AActor* >                            Targets;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerPlugInLockOn.GetTarget
// [0x00024400] ( FUNC_Native )
struct UPgPlayerPlugInLockOn_execGetTarget_Parms
{
	class UClass*                                      TargetClass;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerPlugInLockOn.DisplayDebug
// [0x00020400] ( FUNC_Native )
struct UPgPlayerPlugInLockOn_execDisplayDebug_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerPlugInTargetSelector.SetLockTarget
// [0x00020400] ( FUNC_Native )
struct UPgPlayerPlugInTargetSelector_execSetLockTarget_Parms
{
	unsigned long                                      lockTarget : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlugInList.Detach
// [0x00020400] ( FUNC_Native )
struct UPgPlugInList_execDetach_Parms
{
};

// Function GridGame.PgPlugInList.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgPlugInList_execDeactivate_Parms
{
};

// Function GridGame.PgPlugInList.Activate
// [0x00020400] ( FUNC_Native )
struct UPgPlugInList_execActivate_Parms
{
};

// Function GridGame.PgDynamicSMActor.Bump
// [0x00020802] ( FUNC_Event )
struct APgDynamicSMActor_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDynamicSMActor.Touch
// [0x00020802] ( FUNC_Event )
struct APgDynamicSMActor_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDynamicSMActor.TouchDamage
// [0x00020400] ( FUNC_Native )
struct APgDynamicSMActor_execTouchDamage_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDynamicSMActor.Detach
// [0x00020800] ( FUNC_Event )
struct APgDynamicSMActor_eventDetach_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDynamicSMActor.Attach
// [0x00020800] ( FUNC_Event )
struct APgDynamicSMActor_eventAttach_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDynamicSMActor.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct APgDynamicSMActor_eventPostBeginPlay_Parms
{
};

// Function GridGame.PgDynamicSMActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct APgDynamicSMActor_eventPreBeginPlay_Parms
{
};

// Function GridGame.PgDynamicSMActor.OnDamageCaused
// [0x00020400] ( FUNC_Native )
struct APgDynamicSMActor_execOnDamageCaused_Parms
{
	int                                                damageCaused;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damageVictim;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDynamicSMActor.GetCauseDamageParam
// [0x00020400] ( FUNC_Native )
struct APgDynamicSMActor_execGetCauseDamageParam_Parms
{
	class UPgDamageParam*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPathNode.IsUsableAnchorFor
// [0x00020400] ( FUNC_Native )
struct APgPathNode_execIsUsableAnchorFor_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRallyPoint.GenericToggle
// [0x00020102] 
struct APgRallyPoint_execGenericToggle_Parms
{
};

// Function GridGame.PgRallyPoint.OnToggle
// [0x00020102] 
struct APgRallyPoint_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgRallyPoint.UpdatePawnCounts
// [0x00020400] ( FUNC_Native )
struct APgRallyPoint_execUpdatePawnCounts_Parms
{
};

// Function GridGame.PgRallyPoint.GetAllRallyPointActors
// [0x00420400] ( FUNC_Native )
struct APgRallyPoint_execGetAllRallyPointActors_Parms
{
	TArray< class AActor* >                            rallyPointActors;                                 		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgRallyPoint.IsValidRallyPoint
// [0x00020400] ( FUNC_Native )
struct APgRallyPoint_execIsValidRallyPoint_Parms
{
	class APgAIController*                             Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPedestrianSpawnPoint.OnToggle
// [0x00020102] 
struct APgPedestrianSpawnPoint_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.Restart
// [0x00020002] 
struct APgAIController_execRestart_Parms
{
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgAIController.CanFireWeapon
// [0x00020002] 
struct APgAIController_execCanFireWeapon_Parms
{
	class AWeapon*                                     Weap;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.PawnDied
// [0x00020002] 
struct APgAIController_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.Tick
// [0x00020802] ( FUNC_Event )
struct APgAIController_eventTick_Parms
{
	float                                              Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.DisplayDebug
// [0x00420102] 
struct APgAIController_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgAIController.ReceiveProjectileWarning
// [0x00820002] 
struct APgAIController_execReceiveProjectileWarning_Parms
{
	class AProjectile*                                 Proj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ViewLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgAIController.ReceiveWarning
// [0x00820002] 
struct APgAIController_execReceiveWarning_Parms
{
	class APawn*                                       shooter;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              projSpeed;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireDir;                                          		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ViewLocation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgAIController.ReceiveFireWarning
// [0x00820002] 
struct APgAIController_execReceiveFireWarning_Parms
{
	class AActor*                                      shooter;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWeapon*                                     FiredWeapon;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireDir;                                          		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ViewLocation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgAIController.GetAdjustedAimFor
// [0x00820002] 
struct APgAIController_execGetAdjustedAimFor_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     projStart;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 adjustedAim;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// class APgAIController*                          pgAI;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// class APawn*                                    focusPawn;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// class UClass*                                   projectileClass;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgAIController.NotifyLandedFromHighFall
// [0x00020800] ( FUNC_Event )
struct APgAIController_eventNotifyLandedFromHighFall_Parms
{
};

// Function GridGame.PgAIController.NotifyRagdollKnockdown
// [0x00020800] ( FUNC_Event )
struct APgAIController_eventNotifyRagdollKnockdown_Parms
{
};

// Function GridGame.PgAIController.NotifyKilled
// [0x00020002] 
struct APgAIController_execNotifyKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Killed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.NotifyTakeHit
// [0x00020000] 
struct APgAIController_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.NotifyWeaponFiredShot
// [0x00020000] 
struct APgAIController_execNotifyWeaponFiredShot_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.NotifyWeaponFinishedReloading
// [0x00020000] 
struct APgAIController_execNotifyWeaponFinishedReloading_Parms
{
};

// Function GridGame.PgAIController.NotifyWeaponFinishedFiring
// [0x00020000] 
struct APgAIController_execNotifyWeaponFinishedFiring_Parms
{
	class AWeapon*                                     W;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireMode;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.NotifyWeaponFired
// [0x00020000] 
struct APgAIController_execNotifyWeaponFired_Parms
{
	class AWeapon*                                     W;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireMode;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.Possess
// [0x00020802] ( FUNC_Event )
struct APgAIController_eventPossess_Parms
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgAIController.PlayerAimingAt
// [0x00020800] ( FUNC_Event )
struct APgAIController_eventPlayerAimingAt_Parms
{
	class APawn*                                       aimer;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.FriendlyDied
// [0x00020800] ( FUNC_Event )
struct APgAIController_eventFriendlyDied_Parms
{
	class APawn*                                       friendly;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.PlayerNotVisible
// [0x00020800] ( FUNC_Event )
struct APgAIController_eventPlayerNotVisible_Parms
{
	class APawn*                                       Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.HearNoise
// [0x00024800] ( FUNC_Event )
struct APgAIController_eventHearNoise_Parms
{
	float                                              Loudness;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NoiseMaker;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NoiseType;                                        		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgAIController.EnemyNotVisible
// [0x00020802] ( FUNC_Event )
struct APgAIController_eventEnemyNotVisible_Parms
{
};

// Function GridGame.PgAIController.SeeMonster
// [0x00020802] ( FUNC_Event )
struct APgAIController_eventSeeMonster_Parms
{
	class APawn*                                       seenMonster;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.SeePlayer
// [0x00020802] ( FUNC_Event )
struct APgAIController_eventSeePlayer_Parms
{
	class APawn*                                       seenPlayer;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.NotifyLanded
// [0x00020802] ( FUNC_Event )
struct APgAIController_eventNotifyLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.NotifyBump
// [0x00020802] ( FUNC_Event )
struct APgAIController_eventNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    OtherPawn;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           noiseLevel;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  pgp;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgAIController.NotifyHitWall
// [0x00020800] ( FUNC_Event )
struct APgAIController_eventNotifyHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.OnCheckCondition
// [0x00020500] ( FUNC_Native )
struct APgAIController_execOnCheckCondition_Parms
{
	class UPgSeqAct_CheckCondition*                    inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.Release
// [0x00020400] ( FUNC_Native )
struct APgAIController_execRelease_Parms
{
	class APgObjective*                                Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.Claim
// [0x00020400] ( FUNC_Native )
struct APgAIController_execClaim_Parms
{
	class APgObjective*                                Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.VehicleCourseCorrect
// [0x00020400] ( FUNC_Native )
struct APgAIController_execVehicleCourseCorrect_Parms
{
};

// Function GridGame.PgAIController.LeaveVehicle
// [0x00020400] ( FUNC_Native )
struct APgAIController_execLeaveVehicle_Parms
{
};

// Function GridGame.PgAIController.EnterVehicle
// [0x00020400] ( FUNC_Native )
struct APgAIController_execEnterVehicle_Parms
{
};

// Function GridGame.PgAIController.ShouldLeaveVehicle
// [0x00020400] ( FUNC_Native )
struct APgAIController_execShouldLeaveVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.ShouldEnterVehicle
// [0x00020400] ( FUNC_Native )
struct APgAIController_execShouldEnterVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.CanLeaveVehicle
// [0x00020400] ( FUNC_Native )
struct APgAIController_execCanLeaveVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.CanEnterVehicle
// [0x00020400] ( FUNC_Native )
struct APgAIController_execCanEnterVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.IsDriving
// [0x00020400] ( FUNC_Native )
struct APgAIController_execIsDriving_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.LeaveGame
// [0x00020400] ( FUNC_Native )
struct APgAIController_execLeaveGame_Parms
{
};

// Function GridGame.PgAIController.CanLeaveGame
// [0x00020400] ( FUNC_Native )
struct APgAIController_execCanLeaveGame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.IsLeavingGame
// [0x00020400] ( FUNC_Native )
struct APgAIController_execIsLeavingGame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.SetIsLeavingGame
// [0x00020400] ( FUNC_Native )
struct APgAIController_execSetIsLeavingGame_Parms
{
	unsigned long                                      Leaving : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgAIController.GetTarget
// [0x00020500] ( FUNC_Native )
struct APgAIController_execGetTarget_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.GetIncomingProjectile
// [0x00020400] ( FUNC_Native )
struct APgAIController_execGetIncomingProjectile_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.IsPedestrian
// [0x00020400] ( FUNC_Native )
struct APgAIController_execIsPedestrian_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.GetTeamSpawnOrder
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgAIController_execGetTeamSpawnOrder_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.GetTeamSpawnCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgAIController_execGetTeamSpawnCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.GetTeamIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgAIController_execGetTeamIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.IsFriendly
// [0x00020400] ( FUNC_Native )
struct APgAIController_execIsFriendly_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.ReadyToFire
// [0x00020400] ( FUNC_Native )
struct APgAIController_execReadyToFire_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.SetEnemy
// [0x00020400] ( FUNC_Native )
struct APgAIController_execSetEnemy_Parms
{
	class APawn*                                       newEnemy;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIController.LineOfSightToEnemy
// [0x00020400] ( FUNC_Native )
struct APgAIController_execLineOfSightToEnemy_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.GetInvestigateMarker
// [0x00020400] ( FUNC_Native )
struct APgAIController_execGetInvestigateMarker_Parms
{
	class APgTargetMarker*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.GetTargetMarkerFor
// [0x00020400] ( FUNC_Native )
struct APgAIController_execGetTargetMarkerFor_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgTargetMarker*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.EndPlannerAnimation
// [0x00020400] ( FUNC_Native )
struct APgAIController_execEndPlannerAnimation_Parms
{
};

// Function GridGame.PgAIController.UnPauseAIController
// [0x00020400] ( FUNC_Native )
struct APgAIController_execUnPauseAIController_Parms
{
};

// Function GridGame.PgAIController.PauseAIController
// [0x00020400] ( FUNC_Native )
struct APgAIController_execPauseAIController_Parms
{
};

// Function GridGame.PgAIController.GetAIState
// [0x00020400] ( FUNC_Native )
struct APgAIController_execGetAIState_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIController.PostEvent
// [0x00024400] ( FUNC_Native )
struct APgAIController_execPostEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       listName;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgAIAwareness.GetTargetMarkerFor
// [0x00020400] ( FUNC_Native )
struct UPgAIAwareness_execGetTargetMarkerFor_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgTargetMarker*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIAwareness.SpawnTargetMarker
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgAIAwareness_execSpawnTargetMarker_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgTargetMarker*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIAwareness.GetRawAwarenessOfTarget
// [0x00020400] ( FUNC_Native )
struct UPgAIAwareness_execGetRawAwarenessOfTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIAwareness.GetAwarenessOfTarget
// [0x00020400] ( FUNC_Native )
struct UPgAIAwareness_execGetAwarenessOfTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIAwareness.TargetNotVisible
// [0x00020400] ( FUNC_Native )
struct UPgAIAwareness_execTargetNotVisible_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIAwareness.HearTarget
// [0x00020400] ( FUNC_Native )
struct UPgAIAwareness_execHearTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      awareness;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0005 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIAwareness.SeeTarget
// [0x00020400] ( FUNC_Native )
struct UPgAIAwareness_execSeeTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      awareness;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0005 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIAwareness.DisplayDebug
// [0x00420500] ( FUNC_Native )
struct UPgAIAwareness_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgAISenses.DisplayDebug
// [0x00420500] ( FUNC_Native )
struct UPgAISenses_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgAIPlanner.IsPaused
// [0x00020400] ( FUNC_Native )
struct UPgAIPlanner_execIsPaused_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAIPlanner.SetPauseTime
// [0x00020400] ( FUNC_Native )
struct UPgAIPlanner_execSetPauseTime_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAIPlanner.UnPause
// [0x00020400] ( FUNC_Native )
struct UPgAIPlanner_execUnPause_Parms
{
};

// Function GridGame.PgAIPlanner.Pause
// [0x00020400] ( FUNC_Native )
struct UPgAIPlanner_execPause_Parms
{
};

// Function GridGame.PgAIPlanner.ContinuePlan
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgAIPlanner_execContinuePlan_Parms
{
};

// Function GridGame.PgAnimBehavior.DebugCompareBehaviorStates
// [0x00422400] ( FUNC_Native )
struct UPgAnimBehavior_execDebugCompareBehaviorStates_Parms
{
	struct FDebugAnimBehaviorState                     One;                                              		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FDebugAnimBehaviorState                     Two;                                              		// 0x000C (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAnimBehavior.DebugGetState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgAnimBehavior_execDebugGetState_Parms
{
	struct FDebugAnimBehaviorState                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.IsInKnockdown
// [0x00020102] 
struct APgPawn_execIsInKnockdown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.StartRecoveryTimers
// [0x00020902] ( FUNC_Event )
struct APgPawn_eventStartRecoveryTimers_Parms
{
	// float                                           timeToStartRecover;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           timeToStartStanding;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.ServerKnockdown
// [0x002240C2] 
struct APgPawn_execServerKnockdown_Parms
{
	struct FVector                                     RBLinearVelocity;                                 		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     RBAngularVelocity;                                		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     RadialOrigin;                                     		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              RadialRadius;                                     		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              RadialStrength;                                   		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     PointImpulse;                                     		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     PointImpulsePosition;                             		// 0x0038 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       PointImpulseBoneName;                             		// 0x0044 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           strengthScale;                                    		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.OnRadialKnockdownPawn
// [0x00020002] 
struct APgPawn_execOnRadialKnockdownPawn_Parms
{
	class UPgSeqAct_RadialKnockdownPawn*               Widget;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.KnockdownStartRecoveryTimer
// [0x00020900] ( FUNC_Event )
struct APgPawn_eventKnockdownStartRecoveryTimer_Parms
{
};

// Function GridGame.PgPawn.KnockdownRecoverToStanding
// [0x00080501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execKnockdownRecoverToStanding_Parms
{
};

// Function GridGame.PgPawn.KnockdownDriveToRecoveryPosition
// [0x00080501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execKnockdownDriveToRecoveryPosition_Parms
{
};

// Function GridGame.PgPawn.IsInvisible
// [0x00020400] ( FUNC_Native )
struct APgPawn_execIsInvisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.UnTouchAllVolumes
// [0x00020400] ( FUNC_Native )
struct APgPawn_execUnTouchAllVolumes_Parms
{
};

// Function GridGame.PgPawn.SetVehicling
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execSetVehicling_Parms
{
	unsigned long                                      vehicling : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.SetBlocking
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execSetBlocking_Parms
{
	unsigned long                                      blocking : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPawn.SetSprinting
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execSetSprinting_Parms
{
	unsigned long                                      sprinting : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPawn.OnTeleport
// [0x00020102] 
struct APgPawn_execOnTeleport_Parms
{
	class USeqAct_Teleport*                            Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class UObject* >                        objVars;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AActor*                                   destActor;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.StaticOnTeleport
// [0x00022002] 
struct APgPawn_execStaticOnTeleport_Parms
{
	class AController*                                 PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.AdjustDamage
// [0x00424002] 
struct APgPawn_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FName                                    causerName;                                       		// 0x0040 (0x0008) [0x0000000000000000]              
	// struct FName                                    instigatorName;                                   		// 0x0048 (0x0008) [0x0000000000000000]              
	// int                                             PlayerID;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.DetermineLastDamageCauser
// [0x00020002] 
struct APgPawn_execDetermineLastDamageCauser_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.UpdateStun
// [0x00020102] 
struct APgPawn_execUpdateStun_Parms
{
};

// Function GridGame.PgPawn.PerformStunRevived
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPerformStunRevived_Parms
{
};

// Function GridGame.PgPawn.PerformStunReviver
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPerformStunReviver_Parms
{
};

// Function GridGame.PgPawn.PerformStun
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPerformStun_Parms
{
};

// Function GridGame.PgPawn.StunAllowed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execStunAllowed_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.IsMagDiscToSmartObj
// [0x00020500] ( FUNC_Native )
struct APgPawn_execIsMagDiscToSmartObj_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.PerformMagDisc
// [0x00020500] ( FUNC_Native )
struct APgPawn_execPerformMagDisc_Parms
{
};

// Function GridGame.PgPawn.ServerPerformMagDiscAntic
// [0x002200C2] 
struct APgPawn_execServerPerformMagDiscAntic_Parms
{
};

// Function GridGame.PgPawn.PerformMagDiscAntic
// [0x00020102] 
struct APgPawn_execPerformMagDiscAntic_Parms
{
};

// Function GridGame.PgPawn.GetBestPowerLevel
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execGetBestPowerLevel_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.FXHandleEnergyParticleEffect
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execFXHandleEnergyParticleEffect_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GridGame.PgPawn.ServerSetEnergy
// [0x00220CC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct APgPawn_eventServerSetEnergy_Parms
{
	int                                                energy;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.SetEnergyMax
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execSetEnergyMax_Parms
{
	int                                                energyMax;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.EnergyFlow
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execEnergyFlow_Parms
{
	int                                                inEnergy;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      overCharge : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.HealthFlow
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execHealthFlow_Parms
{
	int                                                inHealth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      overCharge : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.EnergyDampenDamage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execEnergyDampenDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.MeleeAttack
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execMeleeAttack_Parms
{
	struct FVector                                     Center;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDamageParam*                              damageParam;                                      		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.ServerPerformDodge
// [0x002200C2] 
struct APgPawn_execServerPerformDodge_Parms
{
};

// Function GridGame.PgPawn.PerformDodge
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPerformDodge_Parms
{
};

// Function GridGame.PgPawn.UpdateWeaponReplication
// [0x00080102] 
struct APgPawn_execUpdateWeaponReplication_Parms
{
	// class APgWeapon*                                weaponArchetype;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APgWeapon*                                NewWeapon;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    currentWeaponPathName;                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GridGame.PgPawn.GetBaseAimRotation
// [0x00820922] ( FUNC_Event )
struct APgPawn_eventGetBaseAimRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Rot;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   Target;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             SeatIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// class AUTVehicle*                               Vehicle;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// class AUTWeaponPawn*                            weaponPawn;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.GetAdjustedAimFor
// [0x00020102] 
struct APgPawn_execGetAdjustedAimFor_Parms
{
	class AWeapon*                                     W;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartFireLoc;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.OnAssignControllerArch
// [0x00020002] 
struct APgPawn_execOnAssignControllerArch_Parms
{
	class UPgSeqAct_AssignControllerArch*              inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AController*                              OldController;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.OnRemoveInventoryArch
// [0x00020102] 
struct APgPawn_execOnRemoveInventoryArch_Parms
{
	class UPgSeqAct_RemoveInventoryArch*               inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nameIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AInventory*                               pawnInventory;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.OnGiveInventoryArch
// [0x00020102] 
struct APgPawn_execOnGiveInventoryArch_Parms
{
	class UPgSeqAct_GiveInventoryArch*                 inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AInventory*                               pawnInventory;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.OnGiveInventory
// [0x00020100] 
struct APgPawn_execOnGiveInventory_Parms
{
	class USeqAct_GiveInventory*                       inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.RemoveRepInventory
// [0x00020400] ( FUNC_Native )
struct APgPawn_execRemoveRepInventory_Parms
{
	class APgInventory*                                Inv;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.AddRepInventory
// [0x00020400] ( FUNC_Native )
struct APgPawn_execAddRepInventory_Parms
{
	class APgInventory*                                Inv;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.ClearPassivePowers
// [0x00020400] ( FUNC_Native )
struct APgPawn_execClearPassivePowers_Parms
{
};

// Function GridGame.PgPawn.RestorePassivePower
// [0x00020400] ( FUNC_Native )
struct APgPawn_execRestorePassivePower_Parms
{
	class APgInventoryPassivePower*                    Power;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.TossInventory
// [0x00824002] 
struct APgPawn_execTossInventory_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ForceVelocity;                                    		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  POVLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TossVel;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 POVRot;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgPawn.RestoreInventory
// [0x00020802] ( FUNC_Event )
struct APgPawn_eventRestoreInventory_Parms
{
	struct FString                                     invString;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      Activate : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              invLifeSpan;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               Archetype;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AInventory*                               invItem;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.SetupInventory
// [0x00020400] ( FUNC_Native )
struct APgPawn_execSetupInventory_Parms
{
};

// Function GridGame.PgPawn.AddDefaultInventory
// [0x00020002] 
struct APgPawn_execAddDefaultInventory_Parms
{
	// int                                             invIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AInventory*                               pawnInventory;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.CloneCoopInventory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execCloneCoopInventory_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.IsFiring
// [0x00020400] ( FUNC_Native )
struct APgPawn_execIsFiring_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.InventoryChanged
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execInventoryChanged_Parms
{
};

// Function GridGame.PgPawn.ServerSetPowerDamageScaling
// [0x00220CC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct APgPawn_eventServerSetPowerDamageScaling_Parms
{
	float                                              DamageScale;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.PowerDamageScalingTick
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPowerDamageScalingTick_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.PlayDying
// [0x00820102] 
struct APgPawn_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 FaceRotation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgPawn.TakeDamage
// [0x00024802] ( FUNC_Event )
struct APgPawn_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UPgDamageParamInterface*                  damageInterface;                                  		// 0x0044 (0x0008) [0x0000000000000000]              
	// class UPgDamageParam*                           damageParam;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	// class UPgDamageParam*                           damageParamModeOverride;                          		// 0x0050 (0x0004) [0x0000000000000000]              
	// class APgPlayerController*                      instigatedPlayerController;                       		// 0x0054 (0x0004) [0x0000000000000000]              
	// class APgPlayerController*                      victimPlayerController;                           		// 0x0058 (0x0004) [0x0000000000000000]              
	// class APgGameInfo*                              GameInfo;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	// class APgAIController*                          aic;                                              		// 0x0060 (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsFriendly : 1;                                   		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgPawn.NotifyTakeHit
// [0x00020002] 
struct APgPawn_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.AddVelocity
// [0x00024002] 
struct APgPawn_execAddVelocity_Parms
{
	struct FVector                                     NewVelocity;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPawn.GetDamageCauserDamageScaling
// [0x00020400] ( FUNC_Native )
struct APgPawn_execGetDamageCauserDamageScaling_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.GetCumlativeDamage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execGetCumlativeDamage_Parms
{
	float                                              timePassed;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       damageCauserArchetypeName;                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.TrackDamage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execTrackDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       damageCauserArchetypeName;                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       damageInstigatorArchetypeName;                    		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                damageInstigatorPlayerIndex;                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.GetDamageScaling
// [0x00020002] 
struct APgPawn_execGetDamageScaling_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           theDamageScaling;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.GetDefaultCameraMode
// [0x00020102] 
struct APgPawn_execGetDefaultCameraMode_Parms
{
	class APlayerController*                           RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.SetCameraArchetype
// [0x010201C2] 
struct APgPawn_execSetCameraArchetype_Parms
{
	class APgPlayerCamera*                             newArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.GetCameraArchetype
// [0x00020102] 
struct APgPawn_execGetCameraArchetype_Parms
{
	class APgPlayerCamera*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.DrawEnergyActorDebug3D
// [0x00C20102] 
struct APgPawn_execDrawEnergyActorDebug3D_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class APgEnergyActor*                           energyActor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  theCanvas;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        LocalPlayer;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  cameraLoc;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 cameraRot;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           Width;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FString                                  debugString;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgPawn.DisplayDebug
// [0x00C20102] 
struct APgPawn_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class AInventory*                               Inv;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  debugString;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APgSmartObject*                           tempSmartObj;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// class AActor*                                   walkHitActor;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  walkHitLocation;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	// unsigned long                                   walkCanStepUpOn : 1;                              		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgPawn.FindWalkBlockingActor
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execFindWalkBlockingActor_Parms
{
	class AActor*                                      blockActor;                                       		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPawn.DebugDrawCombo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execDebugDrawCombo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.DebugDrawAnimation
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execDebugDrawAnimation_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPawn.DebugDrawOnlinePlayerName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execDebugDrawOnlinePlayerName_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.PgPostPossession
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPgPostPossession_Parms
{
	class AController*                                 inController;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.Falling
// [0x00020802] ( FUNC_Event )
struct APgPawn_eventFalling_Parms
{
};

// Function GridGame.PgPawn.EncroachedBy
// [0x00020800] ( FUNC_Event )
struct APgPawn_eventEncroachedBy_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.FirePgOnDeathEvents
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execFirePgOnDeathEvents_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledController;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.UnPossessed
// [0x00020002] 
struct APgPawn_execUnPossessed_Parms
{
};

// Function GridGame.PgPawn.Died
// [0x00020002] 
struct APgPawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.PossessedBy
// [0x00020002] 
struct APgPawn_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPawn.IsPlayingDriverLeave
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execIsPlayingDriverLeave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.IsPlayingDriverEnter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execIsPlayingDriverEnter_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.StopDriving
// [0x00020902] ( FUNC_Event )
struct APgPawn_eventStopDriving_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgVehicle*                               PgVehicle;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.AdjustHealthOnStopDriving
// [0x00020002] 
struct APgPawn_execAdjustHealthOnStopDriving_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           currentHealthMax;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           vehicleHealthPct;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.StartDriving
// [0x00020902] ( FUNC_Event )
struct APgPawn_eventStartDriving_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgVehicle*                               PgVehicle;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.AdjustHealthOnStartDriving
// [0x00020002] 
struct APgPawn_execAdjustHealthOnStartDriving_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             healthUpgrade;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           vehicleHealth;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           currentHealthPct;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.SetSimulateGravity
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execSetSimulateGravity_Parms
{
	unsigned long                                      Simulated : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPawn.BaseHiddenVehicle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execBaseHiddenVehicle_Parms
{
};

// Function GridGame.PgPawn.UnHideVehicle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execUnHideVehicle_Parms
{
};

// Function GridGame.PgPawn.HideVehicle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execHideVehicle_Parms
{
	class APgVehicle*                                  V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.FindHiddenVehicle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execFindHiddenVehicle_Parms
{
	class APgVehicle*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.GetOnVehicle
// [0x00020102] 
struct APgPawn_execGetOnVehicle_Parms
{
	class APgVehicle*                                  newVehicleType;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      playDriverEnter : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class APgVehicle*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APgVehicle*                               Vehicle;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.JumpOffPawn
// [0x00020102] 
struct APgPawn_execJumpOffPawn_Parms
{
};

// Function GridGame.PgPawn.DoJump
// [0x00020102] 
struct APgPawn_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.SetWalking
// [0x00020802] ( FUNC_Event )
struct APgPawn_eventSetWalking_Parms
{
	unsigned long                                      bNewIsWalking : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPawn.FaceRotation
// [0x00020102] 
struct APgPawn_execFaceRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        Player;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APgPlayerCamera*                          playerCam;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   isDebugCamera : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   pawnRelativeControls : 1;                         		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgPawn._Suicide
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPawn_event_Suicide_Parms
{
};

// Function GridGame.PgPawn.SpawnDefaultController
// [0x00020002] 
struct APgPawn_execSpawnDefaultController_Parms
{
	// class APgAIController*                          pgAI;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.OnSetMesh
// [0x00020802] ( FUNC_Event )
struct APgPawn_eventOnSetMesh_Parms
{
	class USeqAct_SetMesh*                             Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.SetTargetedSmartObject
// [0x00020400] ( FUNC_Native )
struct APgPawn_execSetTargetedSmartObject_Parms
{
	class APgSmartObject*                              targetedSmartObject;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.GetTargetedSmartObject
// [0x00020400] ( FUNC_Native )
struct APgPawn_execGetTargetedSmartObject_Parms
{
	class APgSmartObject*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.SetTarget
// [0x00020400] ( FUNC_Native )
struct APgPawn_execSetTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.GetTarget
// [0x00020400] ( FUNC_Native )
struct APgPawn_execGetTarget_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.LastHitWasKnockdown
// [0x00080102] 
struct APgPawn_execLastHitWasKnockdown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.PerformHitReaction
// [0x00880102] 
struct APgPawn_execPerformHitReaction_Parms
{
	// struct FRotator                                 FaceRotation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgPawn.GetDamageReactionSpecialMove
// [0x00080102] 
struct APgPawn_execGetDamageReactionSpecialMove_Parms
{
	unsigned long                                      findKnockDown : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UPgSpecialMoveAsset*                         ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.GetDamageReactionDamageParamOverride
// [0x00080002] 
struct APgPawn_execGetDamageReactionDamageParamOverride_Parms
{
	class AActor*                                      DamageCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDamageParam*                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             reactionIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   moveMode;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function GridGame.PgPawn.GetDamageReactionDamageScaling
// [0x00080002] 
struct APgPawn_execGetDamageReactionDamageScaling_Parms
{
	class AActor*                                      DamageCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             reactionIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   moveMode;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function GridGame.PgPawn.ReplicatedPlayHitEffects
// [0x00080102] 
struct APgPawn_execReplicatedPlayHitEffects_Parms
{
};

// Function GridGame.PgPawn.PopulateHitReactionRepInfo
// [0x00C80002] 
struct APgPawn_execPopulateHitReactionRepInfo_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0020 (0x001C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     hitFromLoc;                                       		// 0x003C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   isAIControlled : 1;                               		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  faceDir;                                          		// 0x004C (0x000C) [0x0000000000000000]              
	// class UPgDamageParamInterface*                  damageInterface;                                  		// 0x0058 (0x0008) [0x0000000000000000]              
};

// Function GridGame.PgPawn.GetDamageReactionIndex
// [0x00080102] 
struct APgPawn_execGetDamageReactionIndex_Parms
{
	class AActor*                                      DamageCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             reactionIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FName                                    damageCauserName;                                 		// 0x000C (0x0008) [0x0000000000000000]              
	// class UPgDamageParamInterface*                  damageInterface;                                  		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GridGame.PgPawn.GetMovementMode
// [0x00080002] 
struct APgPawn_execGetMovementMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn._TurnOff
// [0x00020802] ( FUNC_Event )
struct APgPawn_event_TurnOff_Parms
{
};

// Function GridGame.PgPawn.TurnOff
// [0x00020500] ( FUNC_Native )
struct APgPawn_execTurnOff_Parms
{
};

// Function GridGame.PgPawn.PlayHit
// [0x00820002] 
struct APgPawn_execPlayHit_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000080]              ( CPF_Parm )
	// class APgAIController*                          aic;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsFriendly : 1;                                   		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  hitFrom;                                          		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgPawn.IsPlayingHitReaction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execIsPlayingHitReaction_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.OnClothSim
// [0x00020002] 
struct APgPawn_execOnClothSim_Parms
{
	class UPgSeqAct_ClothSim*                          Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   freezeCloth : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgPawn.SetMovementPhysics
// [0x00020002] 
struct APgPawn_execSetMovementPhysics_Parms
{
};

// Function GridGame.PgPawn.HitWall
// [0x00020902] ( FUNC_Event )
struct APgPawn_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GridGame.PgPawn.PlayHitWall
// [0x00020500] ( FUNC_Native )
struct APgPawn_execPlayHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.PlayLanded
// [0x00020500] ( FUNC_Native )
struct APgPawn_execPlayLanded_Parms
{
	float                                              ImpactVel;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.BaseChange
// [0x00020822] ( FUNC_Event )
struct APgPawn_eventBaseChange_Parms
{
	// class ADESLightPawn*                            Extra;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADynamicSMActor*                          Dyn;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.Landed
// [0x00020902] ( FUNC_Event )
struct APgPawn_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPlayerController*                      playerCont;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.PgLockDesiredRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPgLockDesiredRotation_Parms
{
	unsigned long                                      bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPawn.PgSetDesiredRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPgSetDesiredRotation_Parms
{
	struct FRotator                                    TargetDesiredRotation;                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.ComboStopProgression
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboStopProgression_Parms
{
};

// Function GridGame.PgPawn.ComboSetTime
// [0x00020003] ( FUNC_Final )
struct APgPawn_execComboSetTime_Parms
{
	float                                              NewTime;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.DebugComboCompareStates
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execDebugComboCompareStates_Parms
{
	struct FPgComboState                               One;                                              		// 0x0000 (0x00A0) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FPgComboState                               Two;                                              		// 0x00A0 (0x00A0) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0140 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.ComboEnd
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboEnd_Parms
{
};

// Function GridGame.PgPawn.IsInCombo
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execIsInCombo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.ComboSyncAnimAndBehaviorsToState
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboSyncAnimAndBehaviorsToState_Parms
{
	struct FPgComboState                               comboState;                                       		// 0x0000 (0x00A0) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPawn.ComboSetPendingState
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboSetPendingState_Parms
{
	struct FPgComboFrameState                          comboPendingState;                                		// 0x0000 (0x0030) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPawn.ComboGetPendingState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboGetPendingState_Parms
{
	struct FPgComboFrameState                          ReturnValue;                                      		// 0x0000 (0x0030) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.ComboGetState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboGetState_Parms
{
	struct FPgComboState                               ReturnValue;                                      		// 0x0000 (0x00A0) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.ComboReplicateWithParams
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboReplicateWithParams_Parms
{
	class UPgSpecialMoveAsset*                         specialMoveAsset;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPgSpecialMoveParams                        Params;                                           		// 0x0004 (0x0018) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.ComboReplicate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboReplicate_Parms
{
	class UPgSpecialMoveAsset*                         specialMoveAsset;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.ComboSimulateWithParams
// [0x00420501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboSimulateWithParams_Parms
{
	class UPgSpecialMoveAsset*                         SpecialMove;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPgSpecialMoveParams                        Params;                                           		// 0x0004 (0x0018) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.ComboSimulate
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execComboSimulate_Parms
{
	class UPgSpecialMoveAsset*                         SpecialMove;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.PgTickNetworkTime
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPgTickNetworkTime_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.GetSpecialMove
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execGetSpecialMove_Parms
{
	class UPgSpecialMoveAsset*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.OnPerformSpecialMove
// [0x00820002] 
struct APgPawn_execOnPerformSpecialMove_Parms
{
	class UPgSeqAct_PerformSpecialMove*                specialMoveSeqAct;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FPgSpecialMoveParams                     Params;                                           		// 0x0004 (0x0018) [0x0000000000000000]              
};

// Function GridGame.PgPawn.RagdollDisable
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execRagdollDisable_Parms
{
};

// Function GridGame.PgPawn.SetGroundAudioSwitch
// [0x00020002] 
struct APgPawn_execSetGroundAudioSwitch_Parms
{
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0000 (0x001C) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    AudioSurface;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	// class UPhysicalMaterial*                        PhysMat;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.PlayFootSound
// [0x00880002] 
struct APgPawn_execPlayFootSound_Parms
{
	unsigned char                                      WhichImpact;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  PawnLoc;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           CurrHeight;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsLocal : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   TraceActor;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  out_HitLocation;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceDest;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x004C (0x001C) [0x0000000000000000]              
	// class APgPlayerController*                      PC;                                               		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.PlayFootStepSound
// [0x00020802] ( FUNC_Event )
struct APgPawn_eventPlayFootStepSound_Parms
{
	int                                                FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.PlayFootJumpSound
// [0x00020802] ( FUNC_Event )
struct APgPawn_eventPlayFootJumpSound_Parms
{
	int                                                FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.PlayFootShuffleSound
// [0x00020802] ( FUNC_Event )
struct APgPawn_eventPlayFootShuffleSound_Parms
{
	int                                                FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.PlayParticleEffect
// [0x00820902] ( FUNC_Event )
struct APgPawn_eventPlayParticleEffect_Parms
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                   		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class APgPlayerReplicationInfo*                 PgPRI;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FName                                    AttachPointName;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  colorVec;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FLinearColor                             playerColor;                                      		// 0x0024 (0x0010) [0x0000000000000000]              
	// unsigned long                                   bIsSocket : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct APgPawn_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GridGame.PgPawn.RootMotionExtracted
// [0x00420D00] ( FUNC_Event | FUNC_Native )
struct APgPawn_eventRootMotionExtracted_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FBoneAtom                                   ExtractedRootMotionDelta;                         		// 0x0010 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPawn.OnAnimEnd
// [0x00020D00] ( FUNC_Event | FUNC_Native )
struct APgPawn_eventOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.AnimGetLocomotionTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execAnimGetLocomotionTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.AnimSetLocomotionTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execAnimSetLocomotionTime_Parms
{
	float                                              inTime;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.AnimPlayActionTree
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execAnimPlayActionTree_Parms
{
	class UPgAnimTreeInstance*                         AnimTreeInstance;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.AnimIsLineup
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execAnimIsLineup_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.AnimApplyRootMotion
// [0x00420501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execAnimApplyRootMotion_Parms
{
	struct FBoneAtom                                   rootMotionAtom;                                   		// 0x0000 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.AnimInit
// [0x00040501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execAnimInit_Parms
{
};

// Function GridGame.PgPawn.StartMeshLightwallCollisionTimer
// [0x00020500] ( FUNC_Native )
struct APgPawn_execStartMeshLightwallCollisionTimer_Parms
{
};

// Function GridGame.PgPawn.SetMeshLightwallCollision
// [0x00020500] ( FUNC_Native )
struct APgPawn_execSetMeshLightwallCollision_Parms
{
	unsigned long                                      collideWithLightwalls : 1;                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPawn.DeInitPlayerTeamCollisionChannels
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execDeInitPlayerTeamCollisionChannels_Parms
{
};

// Function GridGame.PgPawn.InitPlayerTeamCollisionChannels
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execInitPlayerTeamCollisionChannels_Parms
{
};

// Function GridGame.PgPawn.OnDamageCaused
// [0x00020400] ( FUNC_Native )
struct APgPawn_execOnDamageCaused_Parms
{
	int                                                damageCaused;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damageVictim;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.GetCauseDamageParam
// [0x00020400] ( FUNC_Native )
struct APgPawn_execGetCauseDamageParam_Parms
{
	class UPgDamageParam*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.GetMaterialInstanceList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execGetMaterialInstanceList_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPawn.InitMaterialInstanceList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execInitMaterialInstanceList_Parms
{
};

// Function GridGame.PgPawn.SetSpecialMoveManualLineup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execSetSpecialMoveManualLineup_Parms
{
	struct FVector                                     lineupDist;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    rotDelta;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     initialLoc;                                       		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.UpdateSpecialMoveManualLineup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execUpdateSpecialMoveManualLineup_Parms
{
	struct FPgSpecialMoveManualLineupParams            State;                                            		// 0x0000 (0x0024) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.GetSpecialMoveState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execGetSpecialMoveState_Parms
{
	struct FPgSpecialMoveState                         ReturnValue;                                      		// 0x0000 (0x0020) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.UpdateSpecialMoveState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execUpdateSpecialMoveState_Parms
{
	struct FPgSpecialMoveState                         State;                                            		// 0x0000 (0x0020) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.GetTeamName
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execGetTeamName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.PostEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct APgPawn_execPostEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       listName;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPawn.SetSmartObjectUsage
// [0x00020500] ( FUNC_Native )
struct APgPawn_execSetSmartObjectUsage_Parms
{
	class APgSmartObject*                              smartObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.OnUseSmartObject
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APgPawn_execOnUseSmartObject_Parms
{
	class UPgSeqAct_UseSmartObject*                    inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPawn.SpecialMoveTo
// [0x00020400] ( FUNC_Native )
struct APgPawn_execSpecialMoveTo_Parms
{
	class ANavigationPoint*                            Start;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            End;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Next;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPawn.Destroyed
// [0x00020902] ( FUNC_Event )
struct APgPawn_eventDestroyed_Parms
{
	// class APgGameInfo*                              GameInfo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APgPlayerReplicationInfo*                 PgPRI;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct APgPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAnimNodeBlendByDriving.StopDriving
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPgAnimNodeBlendByDriving_execStopDriving_Parms
{
};

// Function GridGame.PgAnimNodeBlendByDriving.StartDriving
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPgAnimNodeBlendByDriving_execStartDriving_Parms
{
};

// Function GridGame.PgAnimNodeBlendByPhysics.SetTimeToWaitBeforeBlend
// [0x00020500] ( FUNC_Native )
struct UPgAnimNodeBlendByPhysics_execSetTimeToWaitBeforeBlend_Parms
{
	float                                              waitTime;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAnimNodeLoop.PlayAnim
// [0x00024400] ( FUNC_Native )
struct UPgAnimNodeLoop_execPlayAnim_Parms
{
	unsigned long                                      bLoop : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              Rate;                                             		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgAnimNodeSequenceList.SetActiveChild
// [0x00020400] ( FUNC_Native )
struct UPgAnimNodeSequenceList_execSetActiveChild_Parms
{
	int                                                ChildIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAnimNodeSequenceStack.OnInit
// [0x00020802] ( FUNC_Event )
struct UPgAnimNodeSequenceStack_eventOnInit_Parms
{
};

// Function GridGame.PgAnimNodeSequenceStack.PlayAnimationSet
// [0x00020400] ( FUNC_Native )
struct UPgAnimNodeSequenceStack_execPlayAnimationSet_Parms
{
	TArray< struct FName >                             Sequences;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              SeqRate;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bLoopLast : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgAnimNodeSequenceStack.PlayAnimation
// [0x00020400] ( FUNC_Native )
struct UPgAnimNodeSequenceStack_execPlayAnimation_Parms
{
	struct FName                                       Sequence;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              SeqRate;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSeqLoop : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgAnimNodeSubtree.StopAnim
// [0x00020400] ( FUNC_Native )
struct UPgAnimNodeSubtree_execStopAnim_Parms
{
};

// Function GridGame.PgAnimNodeSubtree.PlayAnim
// [0x00024400] ( FUNC_Native )
struct UPgAnimNodeSubtree_execPlayAnim_Parms
{
	unsigned long                                      bLoop : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              Rate;                                             		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgAnimNodeSubtree.SetAnimTreeInstance
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgAnimNodeSubtree_execSetAnimTreeInstance_Parms
{
	class UPgAnimTreeInstance*                         animSubtree;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAnimNodeSubtree.GenerateAnimTreeFromTemplate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgAnimNodeSubtree_execGenerateAnimTreeFromTemplate_Parms
{
	class UAnimTree*                                   animSubtree;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAnimTreeInstance.GenerateInstanceFromTemplate
// [0x00022400] ( FUNC_Native )
struct UPgAnimTreeInstance_execGenerateInstanceFromTemplate_Parms
{
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgAnimTreeInstance*                         ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAutoTestManager.EnableMemUpdate
// [0x00020400] ( FUNC_Native )
struct APgAutoTestManager_execEnableMemUpdate_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgAutoTestManager.StopCurrentFMV
// [0x00020400] ( FUNC_Native )
struct APgAutoTestManager_execStopCurrentFMV_Parms
{
};

// Function GridGame.PgAutoTestManager.AddSentinelLabel
// [0x00020400] ( FUNC_Native )
struct APgAutoTestManager_execAddSentinelLabel_Parms
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector                                     InLocation;                                       		// 0x000C (0x000C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FRotator                                    InRotation;                                       		// 0x0018 (0x000C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function GridGame.PgAutoTestManager.OnAutotestComplete
// [0x00020802] ( FUNC_Event )
struct APgAutoTestManager_eventOnAutotestComplete_Parms
{
};

// Function GridGame.PgAutoTestManager.DoTravelTheWorld
// [0x00020002] 
struct APgAutoTestManager_execDoTravelTheWorld_Parms
{
};

// Function GridGame.PgAutoTestManager.GatherStats
// [0x00020002] 
struct APgAutoTestManager_execGatherStats_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgAutoTestManager.CheckForSentinelRun
// [0x00020002] 
struct APgAutoTestManager_execCheckForSentinelRun_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAutoTestManager.InitializeOptions
// [0x00020002] 
struct APgAutoTestManager_execInitializeOptions_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APgGameInfo*                              pgGame;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCriticallyDampedSpring_Float.ToString
// [0x00020002] 
struct UPgCriticallyDampedSpring_Float_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCriticallyDampedSpring_Float.SpringParametersToString
// [0x00022002] 
struct UPgCriticallyDampedSpring_Float_execSpringParametersToString_Parms
{
	struct FSpringParameters                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCriticallyDampedSpring_Float.IsFullyCompressed
// [0x00024400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Float_execIsFullyCompressed_Parms
{
	float                                              kThreshold;                                       		// 0x0000 (0x0004) [0x0000000000000092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Float.GetGoal
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Float_execGetGoal_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Float.GetVelocity
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Float_execGetVelocity_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Float.GetPosition
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Float_execGetPosition_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Float.GetParameters
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Float_execGetParameters_Parms
{
	struct FSpringParameters                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Orbit.ToString
// [0x00020002] 
struct UPgCriticallyDampedSpring_Orbit_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCriticallyDampedSpring_Orbit.SpringParametersToString
// [0x00022002] 
struct UPgCriticallyDampedSpring_Orbit_execSpringParametersToString_Parms
{
	struct FOrbitSpringParameters                      P;                                                		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCriticallyDampedSpring_Orbit.GetParameters
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Orbit_execGetParameters_Parms
{
	struct FOrbitSpringParameters                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Orbit.GetGoal
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Orbit_execGetGoal_Parms
{
	struct FOrbitComponents                            ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Orbit.GetPosition
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Orbit_execGetPosition_Parms
{
	struct FOrbitComponents                            ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Orbit.IsFullyCompressed
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Orbit_execIsFullyCompressed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Rotator.ToString
// [0x00020002] 
struct UPgCriticallyDampedSpring_Rotator_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCriticallyDampedSpring_Rotator.SpringParametersToString
// [0x00022002] 
struct UPgCriticallyDampedSpring_Rotator_execSpringParametersToString_Parms
{
	struct FRotationSpringParameters                   P;                                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCriticallyDampedSpring_Rotator.IsFullyCompressed
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Rotator_execIsFullyCompressed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Rotator.GetGoal
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Rotator_execGetGoal_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Rotator.GetVelocity
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Rotator_execGetVelocity_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Rotator.GetPosition
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Rotator_execGetPosition_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Rotator.GetParameters
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Rotator_execGetParameters_Parms
{
	struct FRotationSpringParameters                   ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Vector.ToString
// [0x00020002] 
struct UPgCriticallyDampedSpring_Vector_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCriticallyDampedSpring_Vector.GetParameters
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Vector_execGetParameters_Parms
{
	struct FVectorSpringParameters                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCriticallyDampedSpring_Vector.IsFullyCompressed
// [0x00020400] ( FUNC_Native )
struct UPgCriticallyDampedSpring_Vector_execIsFullyCompressed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPhysicsSimulationObject_CriticallyDampedFloatSpring.ToString
// [0x00020002] 
struct UPgPhysicsSimulationObject_CriticallyDampedFloatSpring_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPhysicsSimulationObject_CriticallyDampedOrbitSpring.ToString
// [0x00020002] 
struct UPgPhysicsSimulationObject_CriticallyDampedOrbitSpring_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPhysicsSimulationObject_CriticallyDampedRotatorSpring.ToString
// [0x00020002] 
struct UPgPhysicsSimulationObject_CriticallyDampedRotatorSpring_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPhysicsSimulationObject_CriticallyDampedVectorSpring.ToString
// [0x00020002] 
struct UPgPhysicsSimulationObject_CriticallyDampedVectorSpring_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCamera.GetRootCamera
// [0x00020400] ( FUNC_Native )
struct UPgCamera_execGetRootCamera_Parms
{
	class UPgCamera*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCamera.GetViewTargetParameters
// [0x00020400] ( FUNC_Native )
struct UPgCamera_execGetViewTargetParameters_Parms
{
	struct FTViewTarget                                ReturnValue;                                      		// 0x0000 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCamera.GetFullCameraStyle
// [0x00020400] ( FUNC_Native )
struct UPgCamera_execGetFullCameraStyle_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCamera.DisplayDebug
// [0x00020000] 
struct UPgCamera_execDisplayDebug_Parms
{
	class APgPlayerCamera*                             PlayerCamera;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCamera.DrawDebugInfo
// [0x00020400] ( FUNC_Native )
struct UPgCamera_execDrawDebugInfo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCamera.GetName
// [0x00020000] 
struct UPgCamera_execGetName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCamera_PgMatinee.DisplayDebug
// [0x00020102] 
struct UPgCamera_PgMatinee_execDisplayDebug_Parms
{
	class APgPlayerCamera*                             PlayerCamera;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCamera_PgMatinee.GetName
// [0x00020002] 
struct UPgCamera_PgMatinee_execGetName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCamera_PgMatinee.GetViewTargetParameters
// [0x00020400] ( FUNC_Native )
struct UPgCamera_PgMatinee_execGetViewTargetParameters_Parms
{
	struct FTViewTarget                                ReturnValue;                                      		// 0x0000 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCamera_PgMatinee.DrawDebugInfo
// [0x00020400] ( FUNC_Native )
struct UPgCamera_PgMatinee_execDrawDebugInfo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCamera_PgMatinee.GetRootCamera
// [0x00020400] ( FUNC_Native )
struct UPgCamera_PgMatinee_execGetRootCamera_Parms
{
	class UPgCamera*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCamera_PgMatinee.GetFullCameraStyle
// [0x00020400] ( FUNC_Native )
struct UPgCamera_PgMatinee_execGetFullCameraStyle_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraAndBlenderBase.GetFullCameraStyle
// [0x00020400] ( FUNC_Native )
struct UPgCameraAndBlenderBase_execGetFullCameraStyle_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraAndBlenderBase.GetRootCamera
// [0x00020400] ( FUNC_Native )
struct UPgCameraAndBlenderBase_execGetRootCamera_Parms
{
	class UPgCamera*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraAndBlenderBase.DrawDebugInfo
// [0x00020400] ( FUNC_Native )
struct UPgCameraAndBlenderBase_execDrawDebugInfo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraAndBlenderBase.GetName
// [0x00020002] 
struct UPgCameraAndBlenderBase_execGetName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraAndBlenderBase.GetViewTargetParameters
// [0x00020400] ( FUNC_Native )
struct UPgCameraAndBlenderBase_execGetViewTargetParameters_Parms
{
	struct FTViewTarget                                ReturnValue;                                      		// 0x0000 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraAndBlenderBase.DisplayDebug
// [0x00020000] 
struct UPgCameraAndBlenderBase_execDisplayDebug_Parms
{
	class APgPlayerCamera*                             PlayerCamera;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraBase.GetName
// [0x00020002] 
struct UPgCameraBase_execGetName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraBase.DisplayDebug
// [0x00020102] 
struct UPgCameraBase_execDisplayDebug_Parms
{
	class APgPlayerCamera*                             PlayerCamera;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraBase.DisplayDebugDetails
// [0x00020102] 
struct UPgCameraBase_execDisplayDebugDetails_Parms
{
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UPgCameraBase*                            RootCamera;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UPgCameraBase*                            SubCamera;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCameraBase.GetScore
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgCameraBase_execGetScore_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraBase.GetRootCamera
// [0x00020400] ( FUNC_Native )
struct UPgCameraBase_execGetRootCamera_Parms
{
	class UPgCamera*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraBase.GetFullCameraStyle
// [0x00020400] ( FUNC_Native )
struct UPgCameraBase_execGetFullCameraStyle_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraBase.DrawDebugInfo
// [0x00020400] ( FUNC_Native )
struct UPgCameraBase_execDrawDebugInfo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCamera_PgOrbitCam.DrawDebugInfo
// [0x00020400] ( FUNC_Native )
struct UPgCamera_PgOrbitCam_execDrawDebugInfo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraBlender.DisplayDebug
// [0x00020102] 
struct UPgCameraBlender_execDisplayDebug_Parms
{
	class APgPlayerCamera*                             PlayerCamera;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraBlender.DrawDebugInfo
// [0x00020400] ( FUNC_Native )
struct UPgCameraBlender_execDrawDebugInfo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraBlender.DisplayDebug_DrawText
// [0x00420102] 
struct UPgCameraBlender_execDisplayDebug_DrawText_Parms
{
	struct FString                                     T;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UCanvas*                                     C;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraBlender.GetRootCamera
// [0x00020400] ( FUNC_Native )
struct UPgCameraBlender_execGetRootCamera_Parms
{
	class UPgCamera*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraBlender.GetTotalBlendTime
// [0x00020400] ( FUNC_Native )
struct UPgCameraBlender_execGetTotalBlendTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraBlender.GetFullCameraStyle
// [0x00020400] ( FUNC_Native )
struct UPgCameraBlender_execGetFullCameraStyle_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraBlenderOrbit.DrawDebugInfo
// [0x00020400] ( FUNC_Native )
struct UPgCameraBlenderOrbit_execDrawDebugInfo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraList.DisplayDebug
// [0x00020102] 
struct UPgCameraList_execDisplayDebug_Parms
{
	class APgPlayerCamera*                             PlayerCamera;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  suffix;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgCameraList.DrawDebugInfo
// [0x00020102] 
struct UPgCameraList_execDrawDebugInfo_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UPgCameraBase*                            SubCamera;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgEddoCameraList.DisplayDebug
// [0x00020102] 
struct UPgEddoCameraList_execDisplayDebug_Parms
{
	class APgPlayerCamera*                             PlayerCamera;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UPgCameraBase*                            Camera;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCameraModifier.PgGetCameraViewPoint
// [0x00420802] ( FUNC_Event )
struct UPgCameraModifier_eventPgGetCameraViewPoint_Parms
{
	struct FVector                                     OutCamLoc;                                        		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    OutCamRot;                                        		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraModifier.IsAttached
// [0x00426002] 
struct UPgCameraModifier_execIsAttached_Parms
{
	class ACamera*                                     Cam;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      CamClass;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgCameraModifier*                           Modifier;                                         		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCameraModifier.EnableModifier
// [0x00020002] 
struct UPgCameraModifier_execEnableModifier_Parms
{
};

// Function GridGame.PgCameraModifier._AddCameraModifier
// [0x00020802] ( FUNC_Event )
struct UPgCameraModifier_event_AddCameraModifier_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraModifier.Init
// [0x00020002] 
struct UPgCameraModifier_execInit_Parms
{
};

// Function GridGame.PgCameraModifier.RemoveModifier
// [0x00020802] ( FUNC_Event )
struct UPgCameraModifier_eventRemoveModifier_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraModifier.ComputeDamper
// [0x00020400] ( FUNC_Native )
struct UPgCameraModifier_execComputeDamper_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraModifier.IsDone
// [0x00020400] ( FUNC_Native )
struct UPgCameraModifier_execIsDone_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraModifier.UpdateTime
// [0x00020400] ( FUNC_Native )
struct UPgCameraModifier_execUpdateTime_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraModifier.ModifyCamera
// [0x00420400] ( FUNC_Native )
struct UPgCameraModifier_execModifyCamera_Parms
{
	class ACamera*                                     Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTPOV                                       OutPOV;                                           		// 0x0008 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraModifier.ComputeShakeValue
// [0x00020400] ( FUNC_Native )
struct UPgCameraModifier_execComputeShakeValue_Parms
{
	float                                              Amp;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Freq;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraModifier.PercentageComplete
// [0x00020400] ( FUNC_Native )
struct UPgCameraModifier_execPercentageComplete_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraModifier.ComputeNewFOV
// [0x00420400] ( FUNC_Native )
struct UPgCameraModifier_execComputeNewFOV_Parms
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraModifier.ComputeNewTranslation
// [0x00420400] ( FUNC_Native )
struct UPgCameraModifier_execComputeNewTranslation_Parms
{
	struct FVector                                     TranslationDelta;                                 		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraModifier.ComputeNewRotation
// [0x00420400] ( FUNC_Native )
struct UPgCameraModifier_execComputeNewRotation_Parms
{
	struct FRotator                                    RotationDelta;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraModifier.DampenShake
// [0x00420400] ( FUNC_Native )
struct UPgCameraModifier_execDampenShake_Parms
{
	struct FRotator                                    Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Translation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraModifier_Generic.ComputeDamper
// [0x00020400] ( FUNC_Native )
struct UPgCameraModifier_Generic_execComputeDamper_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraModifier_Generic.ComputeNewFOV
// [0x00420400] ( FUNC_Native )
struct UPgCameraModifier_Generic_execComputeNewFOV_Parms
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraModifier_Generic.ComputeNewTranslation
// [0x00420400] ( FUNC_Native )
struct UPgCameraModifier_Generic_execComputeNewTranslation_Parms
{
	struct FVector                                     TranslationDelta;                                 		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraModifier_Generic.ComputeNewRotation
// [0x00420400] ( FUNC_Native )
struct UPgCameraModifier_Generic_execComputeNewRotation_Parms
{
	struct FRotator                                    RotationDelta;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCameraModifier_Generic.Reset
// [0x00020400] ( FUNC_Native )
struct UPgCameraModifier_Generic_execReset_Parms
{
};

// Function GridGame.PgCameraModifier_Generic.Init
// [0x00020002] 
struct UPgCameraModifier_Generic_execInit_Parms
{
};

// Function GridGame.PgPlayerCamera.SetScoreModifier
// [0x00020400] ( FUNC_Native )
struct APgPlayerCamera_execSetScoreModifier_Parms
{
	class UObject*                                     pOwner;                                           		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FName                                       kCameraStyle;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              kAmount;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.RemoveScoreModifier
// [0x00020400] ( FUNC_Native )
struct APgPlayerCamera_execRemoveScoreModifier_Parms
{
	class UObject*                                     pOwner;                                           		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FName                                       kCameraStyle;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.DisplayDebug
// [0x00420102] 
struct APgPlayerCamera_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UPgDisplayDebugHelper*                    helper;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerCamera.FriendlyRotator
// [0x00022002] 
struct APgPlayerCamera_execFriendlyRotator_Parms
{
	struct FRotator                                    Rot;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerCamera.AngleToDegrees
// [0x00022002] 
struct APgPlayerCamera_execAngleToDegrees_Parms
{
	int                                                Angle;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerCamera.DisplayCameraDebug
// [0x00420102] 
struct APgPlayerCamera_execDisplayCameraDebug_Parms
{
	class UPgCamera*                                   CurrentCamera;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgDisplayDebugHelper*                       helper;                                           		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UPgCameraBase*                            CameraBase;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerCamera.DisplayDebug_DrawText
// [0x00422102] 
struct APgPlayerCamera_execDisplayDebug_DrawText_Parms
{
	struct FString                                     T;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UCanvas*                                     C;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPlayerCamera.GetActiveRootCamera
// [0x00020400] ( FUNC_Native )
struct APgPlayerCamera_execGetActiveRootCamera_Parms
{
	class UPgCamera*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerCamera.GetActiveCameraList
// [0x00020902] ( FUNC_Event )
struct APgPlayerCamera_eventGetActiveCameraList_Parms
{
	class UPgCameraList*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerCamera.PostBeginPlay
// [0x00020102] 
struct APgPlayerCamera_execPostBeginPlay_Parms
{
};

// Function GridGame.PgPlayerCamera.UpdateViewTarget
// [0x00420400] ( FUNC_Native )
struct APgPlayerCamera_execUpdateViewTarget_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera._UpdateViewTarget
// [0x00420802] ( FUNC_Event )
struct APgPlayerCamera_event_UpdateViewTarget_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.UpdateCamera
// [0x00020D00] ( FUNC_Event | FUNC_Native )
struct APgPlayerCamera_eventUpdateCamera_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.InitializeFor
// [0x00020002] 
struct APgPlayerCamera_execInitializeFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.ShouldDisplayDebug
// [0x00020802] ( FUNC_Event )
struct APgPlayerCamera_eventShouldDisplayDebug_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerCamera.OnTeleportNative
// [0x00020400] ( FUNC_Native )
struct APgPlayerCamera_execOnTeleportNative_Parms
{
};

// Function GridGame.PgPlayerCamera.SetViewTarget
// [0x00024400] ( FUNC_Native )
struct APgPlayerCamera_execSetViewTarget_Parms
{
	class AActor*                                      NewViewTarget;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FViewTargetTransitionParams                 TransitionParams;                                 		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerCamera.ClearScoreModifiers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerCamera_execClearScoreModifiers_Parms
{
	class UPgCameraList*                               CamList;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.InitializeForNative
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerCamera_execInitializeForNative_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.UnRegisterCameraLocationChangeObserver
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerCamera_execUnRegisterCameraLocationChangeObserver_Parms
{
	class UPgPlayerCameraLocationChangeObserver*       O;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.RegisterCameraLocationChangeObserver
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerCamera_execRegisterCameraLocationChangeObserver_Parms
{
	class UPgPlayerCameraLocationChangeObserver*       O;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerCamera.GetCameraByStyle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerCamera_execGetCameraByStyle_Parms
{
	struct FName                                       Style;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgCameraBase*                               ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerCamera.AreControlsCameraRelative
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerCamera_execAreControlsCameraRelative_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerCamera.GetPreviousCameraStyle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerCamera_execGetPreviousCameraStyle_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerCamera.GetNextCameraStyle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerCamera_execGetNextCameraStyle_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgDamageParam.DoesDoTouchingDamage
// [0x00020400] ( FUNC_Native )
struct UPgDamageParam_execDoesDoTouchingDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgDamageParam.ApplyTouchingDamage
// [0x00020400] ( FUNC_Native )
struct UPgDamageParam_execApplyTouchingDamage_Parms
{
	class AController*                                 DamageCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCausingActor;                               		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDamageParam.ScaleDamage
// [0x00020002] 
struct UPgDamageParam_execScaleDamage_Parms
{
	class AActor*                                      DamageCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFoundArchetype : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UPgDamageParamInterface*                  damageInterface;                                  		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GridGame.PgDamageParam.PlayCauseDamageEffects
// [0x00020002] 
struct UPgDamageParam_execPlayCauseDamageEffects_Parms
{
	class AActor*                                      Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Normal;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UPhysicalMaterial*                           PhysMat;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDamageParam.ApplyDamageBehaviour
// [0x00020400] ( FUNC_Native )
struct UPgDamageParam_execApplyDamageBehaviour_Parms
{
	int                                                damageCaused;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damageVictim;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDecalManager._SpawnDecal
// [0x00024802] ( FUNC_Event )
struct APgDecalManager_event_SpawnDecal_Parms
{
	class UMaterialInstance*                           DecalMaterial;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DecalLocation;                                    		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    DecalOrientation;                                 		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Thickness;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNoClip : 1;                                      		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              DecalRotation;                                    		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0030 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	unsigned long                                      bProjectOnTerrain : 1;                            		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bProjectOnSkeletalMeshes : 1;                     		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       HitBone;                                          		// 0x003C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                HitNodeIndex;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                HitLevelIndex;                                    		// 0x0048 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              InDecalLifeSpan;                                  		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x0050 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GridGame.PgDynamicEmitter.SetColorParameter
// [0x00020500] ( FUNC_Native )
struct APgDynamicEmitter_execSetColorParameter_Parms
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      Param;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDynamicEmitter.SetVectorParameter
// [0x00020500] ( FUNC_Native )
struct APgDynamicEmitter_execSetVectorParameter_Parms
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Param;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDynamicEmitter.SetFloatParameter
// [0x00020500] ( FUNC_Native )
struct APgDynamicEmitter_execSetFloatParameter_Parms
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Param;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgEmitterPool._SpawnEmitterMeshAttachment
// [0x00024802] ( FUNC_Event )
struct APgEmitterPool_event_SpawnEmitterMeshAttachment_Parms
{
	class UParticleSystem*                             EmitterTemplate;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       AttachPointName;                                  		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAttachToSocket : 1;                              		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     RelativeLoc;                                      		// 0x0014 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    RelativeRot;                                      		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UParticleSystemComponent*                    ReturnValue;                                      		// 0x002C (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GridGame.PgEmitterPool.SpawnEmitter
// [0x00024400] ( FUNC_Native )
struct APgEmitterPool_execSpawnEmitter_Parms
{
	class UParticleSystem*                             EmitterTemplate;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      AttachToActor;                                    		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UParticleSystemComponent*                    ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function GridGame.PgEmitterPool.PlacePooledLightWall
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct APgEmitterPool_execPlacePooledLightWall_Parms
{
	class APgDynamicSMActor*                           wallArchetype;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              customLifeSpan;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 lightWallOwner;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                teamCollisionChannel;                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APgDynamicSMActor*                           ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEmitterPool.AddLightWallMarker
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct APgEmitterPool_execAddLightWallMarker_Parms
{
	class APgDynamicSMActor*                           wallArchetype;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              customLifeSpan;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      lightWallOwner;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                teamCollisionChannel;                             		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgEmitterPool.ReturnDynamicEmitterToPool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgEmitterPool_execReturnDynamicEmitterToPool_Parms
{
	class APgDynamicEmitter*                           Emitter;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              customLifeSpan;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgEmitterPool.DeactivatePooledDynamicEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgEmitterPool_execDeactivatePooledDynamicEmitter_Parms
{
	int                                                EmitterIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgEmitterPool.GetPooledDynamicEmitter
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct APgEmitterPool_execGetPooledDynamicEmitter_Parms
{
	class UParticleSystem*                             EmitterTemplate;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APgDynamicEmitter*                           ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEmitterPool.ResetPools
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgEmitterPool_execResetPools_Parms
{
};

// Function GridGame.PgPhysMatEffect.GetPhysMatEffectInfo
// [0x00020002] 
struct UPgPhysMatEffect_execGetPhysMatEffectInfo_Parms
{
	class UPhysicalMaterial*                           hitMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPhysMatEffectInfo                          ReturnValue;                                      		// 0x0004 (0x005C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UPgPhysMatProperty*                       physProperty;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             impactIndex;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPhysMatEffect.PlayImpactEffects
// [0x00020500] ( FUNC_Native )
struct UPgPhysMatEffect_execPlayImpactEffects_Parms
{
	class AActor*                                      Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Normal;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UPhysicalMaterial*                           PhysMat;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSkeletalMeshActor.TakeRadiusDamage
// [0x00024102] 
struct APgSkeletalMeshActor_execTakeRadiusDamage_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageFalloffExponent;                            		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgSkeletalMeshActor.OnClothSim
// [0x00020002] 
struct APgSkeletalMeshActor_execOnClothSim_Parms
{
	class UPgSeqAct_ClothSim*                          Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   freezeCloth : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgSkeletalMeshActor.GetMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct APgSkeletalMeshActor_execGetMaterialInstanceList_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgSkeletalMeshActor.InitMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct APgSkeletalMeshActor_execInitMaterialInstanceList_Parms
{
};

// Function GridGame.PgCheatManagerBase.DebugIncStat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execDebugIncStat_Parms
{
	struct FString                                     StatName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Delta;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.DebugSetStat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execDebugSetStat_Parms
{
	struct FString                                     StatName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.DoApplyXP
// [0x00020400] ( FUNC_Native )
struct UPgCheatManagerBase_execDoApplyXP_Parms
{
	int                                                XPPoints;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.DebugEndLogging
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execDebugEndLogging_Parms
{
	// class APgGameInfo*                              pgGame;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.DebugStartLogging
// [0x00024202] ( FUNC_Exec )
struct UPgCheatManagerBase_execDebugStartLogging_Parms
{
	struct FString                                     remoteIP;                                         		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                Port;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class APgGameInfo*                              pgGame;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.DebugAwardTenKills
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execDebugAwardTenKills_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.DebugAwardSkillPoints
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execDebugAwardSkillPoints_Parms
{
	int                                                SkillPoints;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPlayerReplicationInfo*                 PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.DebugAwardXP
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execDebugAwardXP_Parms
{
	int                                                XPPoints;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.DebugPurchaseEveything
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execDebugPurchaseEveything_Parms
{
	struct FString                                     Types;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                PlayerLevel;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.DebugPurchase
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execDebugPurchase_Parms
{
	struct FString                                     Item;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.DebugJumpToLevel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execDebugJumpToLevel_Parms
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.PlayFmvs
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execPlayFmvs_Parms
{
	unsigned long                                      Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UPgSeqAct_PlayFmv*                        fmv;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USequence*                                gameSequence;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                allSequ;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.HealViewedActor
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execHealViewedActor_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.DamageViewedActor
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execDamageViewedActor_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.MPForceVehicles
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execMPForceVehicles_Parms
{
	unsigned long                                      SetVehicling : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APgPlayerController*                      pgpc;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.DrawDebugLightWalls
// [0x00020400] ( FUNC_Native )
struct UPgCheatManagerBase_execDrawDebugLightWalls_Parms
{
};

// Function GridGame.PgCheatManagerBase.DumpEmitterPool
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execDumpEmitterPool_Parms
{
};

// Function GridGame.PgCheatManagerBase.DebugMobility
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execDebugMobility_Parms
{
	unsigned long                                      toggle : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.DebugSmartObjects
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execDebugSmartObjects_Parms
{
	unsigned long                                      toggle : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.ClearDebugLines
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execClearDebugLines_Parms
{
};

// Function GridGame.PgCheatManagerBase.DrawDebugKismet
// [0x00420102] 
struct UPgCheatManagerBase_execDrawDebugKismet_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                objectList;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FName                                    VariableName;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	// class APgAIController*                          aic;                                              		// 0x0028 (0x0004) [0x0000000000000000]              
	// class APawn*                                    objectPawn;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  debugString;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.DrawObjectivesDebug3D
// [0x00C20102] 
struct UPgCheatManagerBase_execDrawObjectivesDebug3D_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class APgObjective*                             Objective;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        LocalPlayer;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  cameraLoc;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 cameraRot;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           Width;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FString                                  debugString;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.DrawRallyPointDebug3D
// [0x00C20002] 
struct UPgCheatManagerBase_execDrawRallyPointDebug3D_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class APgRallyPoint*                            rallyPoint;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  theCanvas;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        LocalPlayer;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class APgAIController*                          AIController;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  cameraLoc;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 cameraRot;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           Width;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           cylHeight;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FString                                  debugString;                                      		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Start;                                            		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FVector                                  End;                                              		// 0x0068 (0x000C) [0x0000000000000000]              
	// TArray< class AActor* >                         rallyPointActors;                                 		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.DrawSpawnDebug3D
// [0x00C20002] 
struct UPgCheatManagerBase_execDrawSpawnDebug3D_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class APgPedestrianSpawnPoint*                  SpawnPoint;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  theCanvas;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        LocalPlayer;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class APgAIController*                          AIController;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  cameraLoc;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 cameraRot;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           Width;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FString                                  debugString;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
	// class APgGameInfo*                              GameInfo;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
	// class APgPedestrianSpawnManager*                spawnMgr;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	// struct FVector                                  startMaxCylinder;                                 		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  endMaxCylinder;                                   		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  startMinCylinder;                                 		// 0x0078 (0x000C) [0x0000000000000000]              
	// struct FVector                                  endMinCylinder;                                   		// 0x0084 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.DisplayDebug
// [0x00420102] 
struct UPgCheatManagerBase_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class APgPlayerReplicationInfo*                 PC;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        P;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.DrawDebugActorInfo3D
// [0x00820002] 
struct UPgCheatManagerBase_execDrawDebugActorInfo3D_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   debugActor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class APlayerController*                        LocalPlayer;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  cameraLoc;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 cameraRot;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FString                                  debugString;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           Width;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FString                                  PropertyValue;                                    		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.DisplayDebug3D
// [0x00020100] 
struct UPgCheatManagerBase_execDisplayDebug3D_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCheatManagerBase.ShowDebug3d
// [0x00024202] ( FUNC_Exec )
struct UPgCheatManagerBase_execShowDebug3d_Parms
{
	struct FName                                       debugClass;                                       		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       PropertyName;                                     		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             infoIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  DebugMessage;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFound : 1;                                       		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgCheatManagerBase.KillAllPawns
// [0x00020002] 
struct UPgCheatManagerBase_execKillAllPawns_Parms
{
	class UClass*                                      aClass;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APgGameInfo*                              GameInfo;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APgPedestrianSpawnManager*                spawnMgr;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.ToggleForceFeedback
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execToggleForceFeedback_Parms
{
};

// Function GridGame.PgCheatManagerBase.SetDestination
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execSetDestination_Parms
{
	struct FName                                       destActor;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   A;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   B;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         C;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.Summon
// [0x00820202] ( FUNC_Exec )
struct UPgCheatManagerBase_execSummon_Parms
{
	struct FString                                     archetypeName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FVector                                  SpawnLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Archetype;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// class APawn*                                    spawnPawn;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.GetActorPropertyValue
// [0x00420400] ( FUNC_Native )
struct UPgCheatManagerBase_execGetActorPropertyValue_Parms
{
	class AActor*                                      propActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       PropertyName;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     PropertyValue;                                    		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.ToggleRootCameraDebug
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execToggleRootCameraDebug_Parms
{
	struct FString                                     rootCameraListName;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APlayerController*                        PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class APgPlayerController*                      PPC;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APgPlayerCamera*                          Cam;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.ToggleCameraDebug
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execToggleCameraDebug_Parms
{
	struct FString                                     fullCameraStyle;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APlayerController*                        PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class UPgCameraBase*                            Camera;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FName                                    styleAsName;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.ToggleCameraListDebug
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execToggleCameraListDebug_Parms
{
	struct FString                                     fullCameraStyle;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APlayerController*                        PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class UPgCameraBase*                            Camera;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FName                                    styleAsName;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// class APgPlayerCamera*                          PgPlayerCamera;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.ToggleCameraAndDescendants
// [0x00020002] 
struct UPgCheatManagerBase_execToggleCameraAndDescendants_Parms
{
	class UPgCameraBase*                               Camera;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APgPlayerCamera*                          PgPlayerCamera;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.ToggleCameraList
// [0x00020002] 
struct UPgCheatManagerBase_execToggleCameraList_Parms
{
	class UPgCameraList*                               CameraList;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UPgCameraBase*                            Camera;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.GetPgPlayerCamera
// [0x00020002] 
struct UPgCheatManagerBase_execGetPgPlayerCamera_Parms
{
	class APlayerController*                           PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerCamera*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCheatManagerBase.AIFreezeMovement
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execAIFreezeMovement_Parms
{
	unsigned long                                      frozen : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APgAIController*                          aic;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.AIForceWeaponsHold
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerBase_execAIForceWeaponsHold_Parms
{
	unsigned long                                      forceHold : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APgAIController*                          aic;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManagerBase.SetTickGroupComponent
// [0x00024202] ( FUNC_Exec )
struct UPgCheatManagerBase_execSetTickGroupComponent_Parms
{
	unsigned char                                      NewTickGroup;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       componentName;                                    		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AActor*                                   debugActor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class UActorComponent*                          debugComponent;                                   		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FString                                  DebugMessage;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.SetTickGroupActor
// [0x00024202] ( FUNC_Exec )
struct UPgCheatManagerBase_execSetTickGroupActor_Parms
{
	unsigned char                                      NewTickGroup;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ClassName;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       componentName;                                    		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AActor*                                   debugActor;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UActorComponent*                          debugComponent;                                   		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FString                                  DebugMessage;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManagerBase.ToggleGripDESShadows
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execToggleGripDESShadows_Parms
{
};

// Function GridGame.PgCheatManagerBase.ToggleGripDES
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execToggleGripDES_Parms
{
};

// Function GridGame.PgCheatManagerBase.OnScreenWarnings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManagerBase_execOnScreenWarnings_Parms
{
};

// Function GridGame.PgCheatManagerBase.ToggleSloMo
// [0x00024202] ( FUNC_Exec )
struct UPgCheatManagerBase_execToggleSloMo_Parms
{
	float                                              GameSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerController.AltTankControls
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execAltTankControls_Parms
{
};

// Function GridGame.PgPlayerController.ToggleTankControls
// [0x00020002] 
struct APgPlayerController_execToggleTankControls_Parms
{
	// class APgVehicle*                               PgVehicle;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APgVehicle*                               pgVehicleArch;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UPgPlayerInput*                           pgPlayerIN;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ServerToggleTankControls
// [0x002200C2] 
struct APgPlayerController_execServerToggleTankControls_Parms
{
};

// Function GridGame.PgPlayerController.ListConsoleEvents
// [0x00020200] ( FUNC_Exec )
struct APgPlayerController_execListConsoleEvents_Parms
{
};

// Function GridGame.PgPlayerController._GetStateName
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_GetStateName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.IsOnScreen
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execIsOnScreen_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventInitInputSystem_Parms
{
};

// Function GridGame.PgPlayerController.NotifyAttemptToSwitchPower
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execNotifyAttemptToSwitchPower_Parms
{
	struct FName                                       Power;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.NotifyAddInventoryPower
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventNotifyAddInventoryPower_Parms
{
	struct FName                                       itemTypeName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController._NotifyNotEnoughSpaceInInvite
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_NotifyNotEnoughSpaceInInvite_Parms
{
};

// Function GridGame.PgPlayerController.NotifyNotEnoughSpaceInInvite
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execNotifyNotEnoughSpaceInInvite_Parms
{
};

// Function GridGame.PgPlayerController._NotifyNotAllPlayersCanJoinInvite
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_NotifyNotAllPlayersCanJoinInvite_Parms
{
};

// Function GridGame.PgPlayerController.NotifyNotAllPlayersCanJoinInvite
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execNotifyNotAllPlayersCanJoinInvite_Parms
{
};

// Function GridGame.PgPlayerController._NotifyInviteFailed
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_NotifyInviteFailed_Parms
{
};

// Function GridGame.PgPlayerController.NotifyInviteFailed
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execNotifyInviteFailed_Parms
{
};

// Function GridGame.PgPlayerController._GetPlayerNickname
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_GetPlayerNickname_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController._ClearInviteDelegates
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_ClearInviteDelegates_Parms
{
};

// Function GridGame.PgPlayerController.AddDestroyOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventAddDestroyOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.ClearDestroyOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventClearDestroyOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.OnDestroyOnlineGameComplete
// [0x00120000] 
struct APgPlayerController_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.OnDestroyLBGameComplete
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execOnDestroyLBGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController._OnGameInviteAccepted
// [0x00420802] ( FUNC_Event )
struct APgPlayerController_event_OnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPlayerController.OnGameInviteAccepted
// [0x00420400] ( FUNC_Native )
struct APgPlayerController_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPlayerController._OnDestroyForInviteComplete
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_OnDestroyForInviteComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.OnDestroyForInviteComplete
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execOnDestroyForInviteComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.OnInviteJoinComplete
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execOnInviteJoinComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.HitStreakUpdateTimer
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execHitStreakUpdateTimer_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.HitStreakTakeDamage
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execHitStreakTakeDamage_Parms
{
};

// Function GridGame.PgPlayerController.HitStreakCauseDamage
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execHitStreakCauseDamage_Parms
{
};

// Function GridGame.PgPlayerController.SetPlayerInput
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execSetPlayerInput_Parms
{
	class UClass*                                      newInputClass;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.DebugDrawOnlinePlayerNames
// [0x00020902] ( FUNC_Event )
struct APgPlayerController_eventDebugDrawOnlinePlayerNames_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  PgPawn;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APgVehicle*                               PgVehicle;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.DisplayDebug
// [0x00420102] 
struct APgPlayerController_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class UPgCheatManager*                          cheatMgr;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  T;                                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.DisplayDebugSideEffects
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execDisplayDebugSideEffects_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FontHeight;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              YPos;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPlayerController.GetAdjustedAimFor
// [0x00820002] 
struct APgPlayerController_execGetAdjustedAimFor_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartFireLoc;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 adjustedAim;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// class APgAIController*                          pgAI;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UClass*                                   projectileClass;                                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ShowSystemMsgOnControllerChanged
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execShowSystemMsgOnControllerChanged_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.CanUnpauseCheckUIState
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execCanUnpauseCheckUIState_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.OnControllerChanged
// [0x00020002] 
struct APgPlayerController_execOnControllerChanged_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ULocalPlayer*                             LP;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController._OnExternalUIChanged
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_OnExternalUIChanged_Parms
{
	unsigned long                                      bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController._GetTriggerUseList
// [0x00420802] ( FUNC_Event )
struct APgPlayerController_event_GetTriggerUseList_Parms
{
	TArray< class ATrigger* >                          triggerUseList;                                   		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.RemoveScoreModifier
// [0x010209C2] ( FUNC_Event )
struct APgPlayerController_eventRemoveScoreModifier_Parms
{
	class UObject*                                     pOwner;                                           		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FName                                       kCameraStyle;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class APgPlayerCamera*                          PgPlayerCamera;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.SetScoreModifier
// [0x010209C2] ( FUNC_Event )
struct APgPlayerController_eventSetScoreModifier_Parms
{
	class UObject*                                     pOwner;                                           		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FName                                       kCameraStyle;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              kAmount;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPlayerCamera*                          PgPlayerCamera;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ResetCameraMode
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventResetCameraMode_Parms
{
	// class UPgCameraSpecifierInterface*              cameraInterface;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APgPlayerCamera*                          NewCamera;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APgPlayerCamera*                          PgPlayerCamera;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ClientResetCameraMode
// [0x010209C2] ( FUNC_Event )
struct APgPlayerController_eventClientResetCameraMode_Parms
{
};

// Function GridGame.PgPlayerController.SpawnPlayerCamera
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventSpawnPlayerCamera_Parms
{
};

// Function GridGame.PgPlayerController.SetCameraMode
// [0x00020002] 
struct APgPlayerController_execSetCameraMode_Parms
{
	struct FName                                       NewCamMode;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.PreviousCamera
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execPreviousCamera_Parms
{
	// class APgPlayerCamera*                          PgPlayerCamera;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.NextCamera
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execNextCamera_Parms
{
	// class APgPlayerCamera*                          PgPlayerCamera;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.StunRevive
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventStunRevive_Parms
{
	class APgPawn*                                     reviveMe;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.HasPawnToPawnInteractions
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execHasPawnToPawnInteractions_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.UpdateInteractions
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execUpdateInteractions_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetShowSubtitles
// [0x00020700] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execSetShowSubtitles_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ToggleHudVisibility
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execToggleHudVisibility_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ResetPlayerMovementInput
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventResetPlayerMovementInput_Parms
{
};

// Function GridGame.PgPlayerController._ClientSetCinematicMode
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_ClientSetCinematicMode_Parms
{
	unsigned long                                      bInCinematicMode : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAffectsMovement : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAffectsTurning : 1;                              		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAffectsHUD : 1;                                  		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              fNearClipPlane;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.EnableSideEffects
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execEnableSideEffects_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientSetCinematicMode
// [0x010201C2] 
struct APgPlayerController_execClientSetCinematicMode_Parms
{
	unsigned long                                      bInCinematicMode : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAffectsMovement : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAffectsTurning : 1;                              		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAffectsHUD : 1;                                  		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              fNearClipPlane;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  pgp;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ClientShowLoadingScreen
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientShowLoadingScreen_Parms
{
	unsigned long                                      show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientClearStack
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientClearStack_Parms
{
	int                                                eStackID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientOpenMovie
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientOpenMovie_Parms
{
	struct FString                                     MovieInstance;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eStackID;                                         		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientHideHudBar
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientHideHudBar_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientShowHudBar
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientShowHudBar_Parms
{
	float                                              XPos;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YPos;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                curValue;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxValue;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Id;                                               		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientHideHudText
// [0x01024DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientHideHudText_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      locationText : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientShowHudText
// [0x01024DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientShowHudText_Parms
{
	struct FString                                     szText;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ePos;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              XPos;                                             		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YPos;                                             		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Id;                                               		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      locationText : 1;                                 		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              fDuration;                                        		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientEventBoxMessage
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientEventBoxMessage_Parms
{
	unsigned char                                      eType;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                idPlayer1;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                idPlayer2;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     szName;                                           		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.HUDIsOpen
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventHUDIsOpen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.ClientOpenHud
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientOpenHud_Parms
{
	unsigned long                                      bOpen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientShowHud
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientShowHud_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientPostAkEvent
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientPostAkEvent_Parms
{
	class UAkEvent*                                    Evt;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.AdminSetSkill
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminSetSkill_Parms
{
	int                                                Skill;                                            		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
};

// Function GridGame.PgPlayerController.AdminSetNumBots
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminSetNumBots_Parms
{
	int                                                NumBots;                                          		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
};

// Function GridGame.PgPlayerController.AdminForceRespawnAt
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminForceRespawnAt_Parms
{
	struct FString                                     PlayerStartName;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.AdminScore
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminScore_Parms
{
	struct FString                                     Event;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Num;                                              		// 0x000C (0x0004) [0x0000000000000890]              ( CPF_OptionalParm | CPF_Parm | CPF_CoerceParm )
};

// Function GridGame.PgPlayerController.AdminReset
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminReset_Parms
{
};

// Function GridGame.PgPlayerController.AdminEnd
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminEnd_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.AdminEndRound
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminEndRound_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.AdminKillAll
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminKillAll_Parms
{
	int                                                Num;                                              		// 0x0000 (0x0004) [0x0000000000000890]              ( CPF_OptionalParm | CPF_Parm | CPF_CoerceParm )
};

// Function GridGame.PgPlayerController.AdminKill
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminKill_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.ServerSetIsReady
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerSetIsReady_Parms
{
	unsigned long                                      Ready : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerAdminSetSkill
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminSetSkill_Parms
{
	int                                                Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerAdminSetNumBots
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminSetNumBots_Parms
{
	int                                                NumBots;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerSuicide
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerSuicide_Parms
{
};

// Function GridGame.PgPlayerController.ServerAdminForceRespawnAt
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminForceRespawnAt_Parms
{
	struct FString                                     PlayerStartName;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.ServerAdminScore
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminScore_Parms
{
	struct FString                                     Event;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Num;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerAdminReset
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminReset_Parms
{
};

// Function GridGame.PgPlayerController.ServerAdminEndGame
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminEndGame_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.ServerAdminEndRound
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminEndRound_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.ServerAdminKillAll
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminKillAll_Parms
{
	int                                                Num;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerAdminKill
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminKill_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.AdminMessage
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execAdminMessage_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.SendClientAdjustment
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventSendClientAdjustment_Parms
{
};

// Function GridGame.PgPlayerController.AckGoodMove
// [0x00020002] 
struct APgPlayerController_execAckGoodMove_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.PgServerComboMove
// [0x00A20042] 
struct APgPlayerController_execPgServerComboMove_Parms
{
	struct FPgSavedMoveComboParams                     comboMoveParams;                                  		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	// struct FPgComboState                            comboState;                                       		// 0x002C (0x00A0) [0x0000000000000000]              
	// struct FPgComboFrameState                       comboPendingState;                                		// 0x00CC (0x0030) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00FC (0x0004) [0x0000000000000000]              
	// float                                           frameDelta;                                       		// 0x0100 (0x0004) [0x0000000000000000]              
	// unsigned long                                   comboIsInSync : 1;                                		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   aboutToExecuteMove : 1;                           		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgPlayerController.AttemptMoveFixup
// [0x00820002] 
struct APgPlayerController_execAttemptMoveFixup_Parms
{
	struct FPgSavedMoveRepParams                       moveRepStruct;                                    		// 0x0000 (0x00CC) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x00CC (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           maxMoveFixup;                                     		// 0x00D0 (0x0004) [0x0000000000000000]              
	// struct FVector                                  fixupDelta;                                       		// 0x00D4 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgServerMove
// [0x00220042] 
struct APgPlayerController_execPgServerMove_Parms
{
	struct FPgSavedMoveRepParams                       moveRepStruct;                                    		// 0x0000 (0x00CC) [0x0000000000000080]              ( CPF_Parm )
	// float                                           comboTime;                                        		// 0x00CC (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgAddNewServerMove
// [0x00820003] ( FUNC_Final )
struct APgPlayerController_execPgAddNewServerMove_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RootMotionDelta;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FServerSavedMove                         newServerMove;                                    		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgUpdateServerMovesToTimestamp
// [0x00820003] ( FUNC_Final )
struct APgPlayerController_execPgUpdateServerMovesToTimestamp_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  rootMotionAcknowledged;                           		// 0x0004 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgServerSendRootMotion
// [0x00220042] 
struct APgPlayerController_execPgServerSendRootMotion_Parms
{
	float                                              OldTimeStamp;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              newTimeStamp;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RootMotionDelta;                                  		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.PgServerComboQueueMove
// [0x002200C2] 
struct APgPlayerController_execPgServerComboQueueMove_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgSpecialMoveAsset*                         comboMove;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPgSpecialMoveParams                        comboParams;                                      		// 0x0008 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsNewCombo : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.PgSendServerMove
// [0x00820003] ( FUNC_Final )
struct APgPlayerController_execPgSendServerMove_Parms
{
	class USavedMove*                                  NewMove;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIgnoreCorrections : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UPgSavedMove*                             pgMove;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FPgSavedMoveRepParams                    moveRepStruct;                                    		// 0x000C (0x00CC) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgCallServerMove
// [0x00820003] ( FUNC_Final )
struct APgPlayerController_execPgCallServerMove_Parms
{
	// class UPgSavedMove*                             pgMove;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  rootMotionAccumulation;                           		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgClientShortCorrection
// [0x00820003] ( FUNC_Final )
struct APgPlayerController_execPgClientShortCorrection_Parms
{
	float                                              AckTimeStamp;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgSavedMove*                                CurrentMove;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     LocationAtTimeStamp;                              		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  deltaMove;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// class UPgSavedMove*                             LastMove;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ClientComboBadQueue
// [0x010201C2] 
struct APgPlayerController_execClientComboBadQueue_Parms
{
	// class UPgSavedMove*                             CurrentMove;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.SendComboBadQueue
// [0x00020003] ( FUNC_Final )
struct APgPlayerController_execSendComboBadQueue_Parms
{
};

// Function GridGame.PgPlayerController.LongClientAdjustPosition
// [0x01820142] 
struct APgPlayerController_execLongClientAdjustPosition_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NewState;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      newPhysics;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocX;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocY;                                          		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocZ;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelX;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelY;                                          		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelZ;                                          		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NewBase;                                          		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewFloorX;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewFloorY;                                        		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewFloorZ;                                        		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FPgSpecialMoveState                      specialMoveState;                                 		// 0x0038 (0x0020) [0x0000000000000000]              
	// class UPgSavedMove*                             CurrentMove;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	// struct FVector                                  deltaMovement;                                    		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewLocation;                                      		// 0x0068 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewVelocity;                                      		// 0x0074 (0x000C) [0x0000000000000000]              
	// unsigned char                                   oldRMM;                                           		// 0x0080 (0x0001) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgDrawNetCorrection
// [0x00820003] ( FUNC_Final )
struct APgPlayerController_execPgDrawNetCorrection_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NewState;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      newPhysics;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocX;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocY;                                          		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocZ;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelX;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelY;                                          		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelZ;                                          		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UPgSavedMove*                             CurrentMove;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVector                                  correctLocation;                                  		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  expectLocation;                                   		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  diffLocation;                                     		// 0x0044 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ShortClientAdjustPosition
// [0x01020142] 
struct APgPlayerController_execShortClientAdjustPosition_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NewState;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      newPhysics;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocX;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocY;                                          		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocZ;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NewBase;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.VeryShortClientAdjustPosition
// [0x01020142] 
struct APgPlayerController_execVeryShortClientAdjustPosition_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocX;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocY;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocZ;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NewBase;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientAdjustPosition
// [0x01020142] 
struct APgPlayerController_execClientAdjustPosition_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NewState;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      newPhysics;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocX;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocY;                                          		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewLocZ;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelX;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelY;                                          		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVelZ;                                          		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NewBase;                                          		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ReplicateMove
// [0x00020002] 
struct APgPlayerController_execReplicateMove_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newAccel;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DoubleClickMove;                                  		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    DeltaRot;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class USavedMove*                               NewMove;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USavedMove*                               AlmostLastMove;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	// class USavedMove*                               LastMove;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UPgSavedMove*                             pgPendingMove;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	// class UPgSavedMove*                             pgNewMove;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           NetMoveDelta;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ClientUpdatePosition
// [0x00820002] 
struct APgPlayerController_execClientUpdatePosition_Parms
{
	// class UPgSavedMove*                             CurrentMove;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FBoneAtom                                realRootMotion;                                   		// 0x0010 (0x0020) [0x0000000000000000]              
	// struct FPgComboState                            oldComboState;                                    		// 0x0030 (0x00A0) [0x0000000000000000]              
	// struct FPgComboFrameState                       oldComboPendingState;                             		// 0x00D0 (0x0030) [0x0000000000000000]              
	// int                                             realbRun;                                         		// 0x0100 (0x0004) [0x0000000000000000]              
	// int                                             realbDuck;                                        		// 0x0104 (0x0004) [0x0000000000000000]              
	// float                                           oldLocomotionTime;                                		// 0x0108 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRealJump : 1;                                    		// 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bRealPreciseDestination : 1;                      		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bRealForceMaxAccel : 1;                           		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bRealIsBlocking : 1;                              		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bRealIsSprinting : 1;                             		// 0x011C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgPlayerController.FindSavedMoveByTimeStamp
// [0x00020003] ( FUNC_Final )
struct APgPlayerController_execFindSavedMoveByTimeStamp_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgSavedMove*                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UPgSavedMove*                             CurrentMove;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgMod_ShouldSendNetCorrection
// [0x00020002] 
struct APgPlayerController_execPgMod_ShouldSendNetCorrection_Parms
{
	struct FVector                                     LocDiff;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.PgMod_IsCorrectionWithinTolerance
// [0x00820002] 
struct APgPlayerController_execPgMod_IsCorrectionWithinTolerance_Parms
{
	class AActor*                                      MoveActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USavedMove*                                  CurrentMove;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewVelocity;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NewState;                                         		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  TestLocation;                                     		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  testVelocity;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.NotifyLanded
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventNotifyLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.PgNetCompressVector
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execPgNetCompressVector_Parms
{
	struct FVector                                     vec;                                              		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPlayerController.ClientSaveUserData
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientSaveUserData_Parms
{
};

// Function GridGame.PgPlayerController.ClientFlushOnlineStats
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientFlushOnlineStats_Parms
{
};

// Function GridGame.PgPlayerController.ClientWriteLeaderboardStats
// [0x010205C0] ( FUNC_Native )
struct APgPlayerController_execClientWriteLeaderboardStats_Parms
{
	class UClass*                                      OnlineStatsWriteClass;                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.RespawnTimerCleanup
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execRespawnTimerCleanup_Parms
{
};

// Function GridGame.PgPlayerController.OnRespawnDelayTimeout
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execOnRespawnDelayTimeout_Parms
{
};

// Function GridGame.PgPlayerController.OnBeginPlayerWaiting
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execOnBeginPlayerWaiting_Parms
{
};

// Function GridGame.PgPlayerController._ClientGotoState
// [0x00044803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_ClientGotoState_Parms
{
	struct FName                                       NewState;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NewLabel;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerController._PreClientTravel
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_PreClientTravel_Parms
{
	struct FString                                     PendingURL;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      TravelType;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSeamlessTravel : 1;                            		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.PreClientTravel
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventPreClientTravel_Parms
{
	struct FString                                     PendingURL;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      TravelType;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSeamlessTravel : 1;                            		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.OnPlayerReceived
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execOnPlayerReceived_Parms
{
};

// Function GridGame.PgPlayerController.ReceivedPlayer
// [0x00020902] ( FUNC_Event )
struct APgPlayerController_eventReceivedPlayer_Parms
{
};

// Function GridGame.PgPlayerController.ServerDrawNetCorrections
// [0x002200C2] 
struct APgPlayerController_execServerDrawNetCorrections_Parms
{
	unsigned long                                      bDrawThem : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.DrawNetCorrections
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execDrawNetCorrections_Parms
{
};

// Function GridGame.PgPlayerController.RegisterCustomPlayerDataStores
// [0x00080102] 
struct APgPlayerController_execRegisterCustomPlayerDataStores_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ClientUnlockAchievement
// [0x010205C0] ( FUNC_Native )
struct APgPlayerController_execClientUnlockAchievement_Parms
{
	unsigned char                                      Achievement;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.UpdatePlayerTickStats
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execUpdatePlayerTickStats_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientSetStatInt
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientSetStatInt_Parms
{
	int                                                StatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatValue;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientUpdatePlayerKillsStats
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientUpdatePlayerKillsStats_Parms
{
};

// Function GridGame.PgPlayerController.ClientUpdatePlayerKilledStats
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientUpdatePlayerKilledStats_Parms
{
};

// Function GridGame.PgPlayerController.ClientIncStatInt
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientIncStatInt_Parms
{
	int                                                StatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientStartOnlineGame
// [0x010201C2] 
struct APgPlayerController_execClientStartOnlineGame_Parms
{
	// class UOnlineGameSettings*                      gs;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PgPlayerController_OnStartOnlineGameComplete
// [0x00020002] 
struct APgPlayerController_execPgPlayerController_OnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.Respawn
// [0x00080802] ( FUNC_Event )
struct APgPlayerController_eventRespawn_Parms
{
};

// Function GridGame.PgPlayerController._GameplayUnmutePlayer
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_GameplayUnmutePlayer_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController._GameplayMutePlayer
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_GameplayMutePlayer_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.StopTeamOnlySpeak
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execStopTeamOnlySpeak_Parms
{
};

// Function GridGame.PgPlayerController.StartTeamOnlySpeak
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execStartTeamOnlySpeak_Parms
{
};

// Function GridGame.PgPlayerController.StartRespawnDelayTimer
// [0x00024400] ( FUNC_Native )
struct APgPlayerController_execStartRespawnDelayTimer_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerController.AddRespawnTime
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execAddRespawnTime_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.OnStartDelayTimeOut
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execOnStartDelayTimeOut_Parms
{
};

// Function GridGame.PgPlayerController.DelayedStart
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execDelayedStart_Parms
{
};

// Function GridGame.PgPlayerController._CanRestartPlayer
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_CanRestartPlayer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.CanRestartPlayer
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execCanRestartPlayer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController._SetOnlineStatus
// [0x00420802] ( FUNC_Event )
struct APgPlayerController_event_SetOnlineStatus_Parms
{
	int                                                StatusId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           LocalizedStringSettings;                          		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 Properties;                                       		// 0x0010 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class ULocalPlayer*                             LP;                                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController._ClientSetOnlineStatus
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_ClientSetOnlineStatus_Parms
{
};

// Function GridGame.PgPlayerController.ClientSetOnlineStatus
// [0x010205C0] ( FUNC_Native )
struct APgPlayerController_execClientSetOnlineStatus_Parms
{
};

// Function GridGame.PgPlayerController.FailChangeTeam
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventFailChangeTeam_Parms
{
};

// Function GridGame.PgPlayerController._ServerChangeTeam
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_ServerChangeTeam_Parms
{
	int                                                N;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerChangeTeam
// [0x002204C0] ( FUNC_Native )
struct APgPlayerController_execServerChangeTeam_Parms
{
	int                                                N;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.UpdateVoicePermission
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execUpdateVoicePermission_Parms
{
};

// Function GridGame.PgPlayerController.IsMuted
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execIsMuted_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.IsRemotelyMuted
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execIsRemotelyMuted_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.IsLocallyMuted
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execIsLocallyMuted_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.UnmutePlayer
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execUnmutePlayer_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.MutePlayer
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execMutePlayer_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController._ClientWasKicked
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_ClientWasKicked_Parms
{
	unsigned long                                      bBanned : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientWasKicked
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientWasKicked_Parms
{
	unsigned long                                      bBanned : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController._ClientUnmutePlayer
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_ClientUnmutePlayer_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientUnmutePlayer
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientUnmutePlayer_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController._ClientMutePlayer
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_ClientMutePlayer_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientMutePlayer
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientMutePlayer_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.GetOnlineState
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execGetOnlineState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.SetOnlineState
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execSetOnlineState_Parms
{
	unsigned char                                      NewState;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerSetOnlineState
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerSetOnlineState_Parms
{
	unsigned char                                      NewState;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.CanCommunicate
// [0x00040501] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execCanCommunicate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController._GameHasEnded
// [0x00044803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_GameHasEnded_Parms
{
	class AActor*                                      EndGameFocus;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsWinner : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerController.GameHasEnded
// [0x00024400] ( FUNC_Native )
struct APgPlayerController_execGameHasEnded_Parms
{
	class AActor*                                      EndGameFocus;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsWinner : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerController._Reset
// [0x00080803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_Reset_Parms
{
};

// Function GridGame.PgPlayerController.Reset
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execReset_Parms
{
};

// Function GridGame.PgPlayerController.ShowPreGameTips
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventShowPreGameTips_Parms
{
	float                                              fDuration;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.energy
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execenergy_Parms
{
};

// Function GridGame.PgPlayerController.ServerEnergy
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerEnergy_Parms
{
};

// Function GridGame.PgPlayerController.GiveEnergy
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execGiveEnergy_Parms
{
};

// Function GridGame.PgPlayerController.ServerGiveEnergy
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerGiveEnergy_Parms
{
};

// Function GridGame.PgPlayerController.AdjustRotationToFaceTarget
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execAdjustRotationToFaceTarget_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ViewRotation;                                     		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgPlayerController.ServerSetTargetedSmartObject
// [0x00220C40] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerSetTargetedSmartObject_Parms
{
	class APgSmartObject*                              targetedSmartObject;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetTargetedSmartObject
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execSetTargetedSmartObject_Parms
{
	class APgSmartObject*                              targetedSmartObject;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerSetTarget
// [0x00220C40] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerSetTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetTarget
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execSetTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClearAllTargets
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execClearAllTargets_Parms
{
};

// Function GridGame.PgPlayerController.GetTarget
// [0x00024500] ( FUNC_Native )
struct APgPlayerController_execGetTarget_Parms
{
	class UClass*                                      TargetClass;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.StopJumping
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execStopJumping_Parms
{
};

// Function GridGame.PgPlayerController.KeepJumping
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execKeepJumping_Parms
{
};

// Function GridGame.PgPlayerController.StopSpamming
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execStopSpamming_Parms
{
};

// Function GridGame.PgPlayerController.KeepSpamming
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execKeepSpamming_Parms
{
};

// Function GridGame.PgPlayerController._IgnoreLookInput
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_IgnoreLookInput_Parms
{
	unsigned long                                      bNewLookInput : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController._IgnoreMoveInput
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_event_IgnoreMoveInput_Parms
{
	unsigned long                                      bNewMoveInput : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerAcknowledgePossession
// [0x002200C2] 
struct APgPlayerController_execServerAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.AcknowledgePossession
// [0x00020002] 
struct APgPlayerController_execAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.UpdateRotation
// [0x00820002] 
struct APgPlayerController_execUpdateRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 DeltaRot;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 pawnRotation;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  newAccel;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0058 (0x000C) [0x0000000000000000]              
	// unsigned long                                   isDebugCamera : 1;                                		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   pawnFacesMovementDirection : 1;                   		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgPlayerController.PlayerCanSee
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execPlayerCanSee_Parms
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.PlayerTick
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventPlayerTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.HandleWalking
// [0x00020002] 
struct APgPlayerController_execHandleWalking_Parms
{
};

// Function GridGame.PgPlayerController.ClientRestart
// [0x010201C2] 
struct APgPlayerController_execClientRestart_Parms
{
	class APawn*                                       NewPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetUseTiltForwardAndBack
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execSetUseTiltForwardAndBack_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetOnlyUseControllerTiltInput
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execSetOnlyUseControllerTiltInput_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetControllerTiltActive
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execSetControllerTiltActive_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetControllerTiltDesiredIfAvailable
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execSetControllerTiltDesiredIfAvailable_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.IsControllerTiltActive
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execIsControllerTiltActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.TriggerInputSmartObjects
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execTriggerInputSmartObjects_Parms
{
	unsigned long                                      pressed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       Button;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.TriggerInputPlugIns
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execTriggerInputPlugIns_Parms
{
	unsigned long                                      pressed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       Button;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.TriggerKismetInputEvents
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execTriggerKismetInputEvents_Parms
{
	unsigned long                                      pressed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       Button;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.CheckMoveController
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execCheckMoveController_Parms
{
};

// Function GridGame.PgPlayerController._UnPossess
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_UnPossess_Parms
{
};

// Function GridGame.PgPlayerController.UnPossess
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execUnPossess_Parms
{
};

// Function GridGame.PgPlayerController.Possess
// [0x00020802] ( FUNC_Event )
struct APgPlayerController_eventPossess_Parms
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.PostPossess
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execPostPossess_Parms
{
};

// Function GridGame.PgPlayerController.StopAllSideEffects
// [0x010205C0] ( FUNC_Native )
struct APgPlayerController_execStopAllSideEffects_Parms
{
};

// Function GridGame.PgPlayerController.StopEffect
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execStopEffect_Parms
{
	class UPgSideEffect*                               Effect;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.UpdateQueuedSideEffects
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execUpdateQueuedSideEffects_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.UnQueueSideEffects
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execUnQueueSideEffects_Parms
{
	class UPgSideEffectContainer*                      EffectContainer;                                  		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function GridGame.PgPlayerController.QueueSideEffects
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execQueueSideEffects_Parms
{
	class UPgSideEffectContainer*                      EffectContainer;                                  		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class AActor*                                      Epicenter;                                        		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function GridGame.PgPlayerController.DebugCamToFixedCamEnd
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execDebugCamToFixedCamEnd_Parms
{
};

// Function GridGame.PgPlayerController.DebugCamToFixedCamStart
// [0x00020002] 
struct APgPlayerController_execDebugCamToFixedCamStart_Parms
{
	class APgDebugCameraController*                    PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetDifficultyLevel
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execSetDifficultyLevel_Parms
{
	unsigned char                                      Level;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.GetDifficultyLevel
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execGetDifficultyLevel_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.CanPerformMagDisc
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execCanPerformMagDisc_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.GetTargetedSmartObj
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execGetTargetedSmartObj_Parms
{
	class APgSmartObject*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.UseTargetedSmartObj
// [0x00020700] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execUseTargetedSmartObj_Parms
{
};

// Function GridGame.PgPlayerController.CanUseTargetedSmartObj
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execCanUseTargetedSmartObj_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.DifficultyLevel
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execDifficultyLevel_Parms
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.RequestShowMenu
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execRequestShowMenu_Parms
{
	unsigned long                                      Open : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ShowMenu
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execShowMenu_Parms
{
};

// Function GridGame.PgPlayerController.KismetEvent
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execKismetEvent_Parms
{
	unsigned long                                      pressed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       Button;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerAdminRestartAll
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdminRestartAll_Parms
{
};

// Function GridGame.PgPlayerController.AdminRestartAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APgPlayerController_execAdminRestartAll_Parms
{
};

// Function GridGame.PgPlayerController.RestartLastCheckpoint
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execRestartLastCheckpoint_Parms
{
	unsigned long                                      full : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.PerformDodge
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execPerformDodge_Parms
{
};

// Function GridGame.PgPlayerController.SetTargetScan
// [0x00024202] ( FUNC_Exec )
struct APgPlayerController_execSetTargetScan_Parms
{
	unsigned char                                      targetScan;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              targetScanAngle;                                  		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerController.SwitchTarget
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execSwitchTarget_Parms
{
};

// Function GridGame.PgPlayerController.SetVehicleInputs
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execSetVehicleInputs_Parms
{
	float                                              Throttle;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Steering;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SetVehicling
// [0x00020200] ( FUNC_Exec )
struct APgPlayerController_execSetVehicling_Parms
{
	unsigned long                                      vehicling : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerSetVehiclingState
// [0x002200C2] 
struct APgPlayerController_execServerSetVehiclingState_Parms
{
};

// Function GridGame.PgPlayerController.IsTargetLocked
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execIsTargetLocked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.SetLockTarget
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execSetLockTarget_Parms
{
	unsigned long                                      lockTarget : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientSetupWeapon
// [0x010209C2] ( FUNC_Event )
struct APgPlayerController_eventClientSetupWeapon_Parms
{
};

// Function GridGame.PgPlayerController.switchTo
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execswitchTo_Parms
{
	struct FName                                       WeaponName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.SwitchToPower
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execSwitchToPower_Parms
{
	struct FName                                       powerName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AVehicle*                                 vehiclePawn;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  powerPawnOwner;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ForceWallJump
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execForceWallJump_Parms
{
};

// Function GridGame.PgPlayerController.OnCheckCondition
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execOnCheckCondition_Parms
{
	class UPgSeqAct_CheckCondition*                    inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController._ReplicatedEvent
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_event_ReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ReplicatedEvent
// [0x00020D00] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerAdjustSkillPoints
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerAdjustSkillPoints_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerUpdateLoadout
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerUpdateLoadout_Parms
{
	struct FString                                     loadoutString;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerController.ClientUpdateLoadout
// [0x00020400] ( FUNC_Native )
struct APgPlayerController_execClientUpdateLoadout_Parms
{
};

// Function GridGame.PgPlayerController.ClientPlayerLevelChanged
// [0x01020DC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventClientPlayerLevelChanged_Parms
{
	int                                                oldLevel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newLevel;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ServerSetVehicleIndex
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgPlayerController_eventServerSetVehicleIndex_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ChangeTeamSP
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execChangeTeamSP_Parms
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ClientForceVehicles
// [0x010201C2] 
struct APgPlayerController_execClientForceVehicles_Parms
{
	unsigned long                                      SetVehicling : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerController.ForceSetVehicling
// [0x00020102] 
struct APgPlayerController_execForceSetVehicling_Parms
{
	unsigned long                                      SetVehicling : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APgPawn*                                  pgp;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.RetroTurn
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execRetroTurn_Parms
{
	unsigned char                                      Direction;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class APgVehicle*                               DrivenVehicle;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.PlayerGTFO
// [0x00020002] 
struct APgPlayerController_execPlayerGTFO_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AVehicle*                                 Vehicle;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APgVehicle*                               PgVehicle;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.ServerGTFO
// [0x002208C2] ( FUNC_Event )
struct APgPlayerController_eventServerGTFO_Parms
{
};

// Function GridGame.PgPlayerController.GTFO
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execGTFO_Parms
{
};

// Function GridGame.PgPlayerController.SetVehicleArchetype
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execSetVehicleArchetype_Parms
{
	struct FString                                     Archetype;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APgGameInfo*                              pgGame;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.SetVehicleIndex
// [0x00020002] 
struct APgPlayerController_execSetVehicleIndex_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgGameInfo*                              pgGame;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.DoProgressionTest
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execDoProgressionTest_Parms
{
	int                                                Test;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.PrintStats
// [0x00020202] ( FUNC_Exec )
struct APgPlayerController_execPrintStats_Parms
{
};

// Function GridGame.PgPlayerController.UpdateVehicling
// [0x00020500] ( FUNC_Native )
struct APgPlayerController_execUpdateVehicling_Parms
{
};

// Function GridGame.PgPlayerController.SetCameraTargetTimer
// [0x00020002] 
struct APgPlayerController_execSetCameraTargetTimer_Parms
{
};

// Function GridGame.PgPlayerController.ClientSetCameraTargetTimer
// [0x00020002] 
struct APgPlayerController_execClientSetCameraTargetTimer_Parms
{
};

// Function GridGame.PgPlayerController.ClientCreateCameraTargetTimer
// [0x00020002] 
struct APgPlayerController_execClientCreateCameraTargetTimer_Parms
{
	class AActor*                                      CameraTarget;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delay;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FViewTargetTransitionParams                 transParam;                                       		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.CreateCameraTargetTimer
// [0x00020002] 
struct APgPlayerController_execCreateCameraTargetTimer_Parms
{
	class AActor*                                      CameraTarget;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delay;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FViewTargetTransitionParams                 transParam;                                       		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerController.OnClientSetCameraTarget
// [0x00020102] 
struct APgPlayerController_execOnClientSetCameraTarget_Parms
{
	class UPgSeqAct_ClientSetCameraTarget*             inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   RealCameraTarget;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.OnSetCameraSystem
// [0x00020102] 
struct APgPlayerController_execOnSetCameraSystem_Parms
{
	class UPgSeqAct_SetCameraSystem*                   Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UPgCameraSpecifierInterface*              cameraInterface;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// class APgPlayerCamera*                          NewCamera;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.GetPgPlayerCamera
// [0x00020003] ( FUNC_Final )
struct APgPlayerController_execGetPgPlayerCamera_Parms
{
	class APgPlayerCamera*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APgPlayerCamera*                          Cam;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.TryGetLocalPlayerCameraFromDebugCamera
// [0x00022803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_eventTryGetLocalPlayerCameraFromDebugCamera_Parms
{
	class APgDebugCameraController*                    DCC;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerCamera*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.AmInDebugFixedCam
// [0x00020002] 
struct APgPlayerController_execAmInDebugFixedCam_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerController.TryGetLocalPlayerControllerFromDebugCamera
// [0x00022803] ( FUNC_Final | FUNC_Event )
struct APgPlayerController_eventTryGetLocalPlayerControllerFromDebugCamera_Parms
{
	class APlayerController*                           PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APgDebugCameraController*                 DCC;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerController.GetLocalPlayerController
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct APgPlayerController_execGetLocalPlayerController_Parms
{
	class APgPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCheatManager.ServerOneShotKill
// [0x002200C2] 
struct UPgCheatManager_execServerOneShotKill_Parms
{
};

// Function GridGame.PgCheatManager.OneShotKill
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManager_execOneShotKill_Parms
{
};

// Function GridGame.PgCheatManager.ToggleDebugFixedCam
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManager_execToggleDebugFixedCam_Parms
{
	// class UPlayer*                                  OldPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgCheatManager.ToggleDebugCamera
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManager_execToggleDebugCamera_Parms
{
};

// Function GridGame.PgCheatManager.WarpToCheckpoint
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManager_execWarpToCheckpoint_Parms
{
	struct FString                                     checkpointName;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgCheatManager.ToggleCameraCollisionSpew
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManager_execToggleCameraCollisionSpew_Parms
{
};

// Function GridGame.PgCheatManager.ToggleSideEffects
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgCheatManager_execToggleSideEffects_Parms
{
};

// Function GridGame.PgPlayerInput.InvertMouse
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgPlayerInput_execInvertMouse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerInput.GetNamedBind
// [0x00020400] ( FUNC_Native )
struct UPgPlayerInput_execGetNamedBind_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     BindName;                                         		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerInput.GetBind
// [0x00020400] ( FUNC_Native )
struct UPgPlayerInput_execGetBind_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerInput.ApplySquareDeadZone
// [0x00420002] 
struct UPgPlayerInput_execApplySquareDeadZone_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              deadZone;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.ApplyCircularDeadZone
// [0x00C20002] 
struct UPgPlayerInput_execApplyCircularDeadZone_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              deadZone;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  joyLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  normalJoy;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           Magnitude;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           normalizedMagnitude;                              		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerInput.PreProcessInput
// [0x00020002] 
struct UPgPlayerInput_execPreProcessInput_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           joyUp;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           joyRight;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerInput.ShowGameStats
// [0x00020400] ( FUNC_Native )
struct UPgPlayerInput_execShowGameStats_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.StartSwitchTargetRight
// [0x00020102] 
struct UPgPlayerInput_execStartSwitchTargetRight_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.StartSwitchTargetLeft
// [0x00020102] 
struct UPgPlayerInput_execStartSwitchTargetLeft_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.StartSwitchTarget
// [0x00020102] 
struct UPgPlayerInput_execStartSwitchTarget_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.ToggleLockTarget
// [0x00020102] 
struct UPgPlayerInput_execToggleLockTarget_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.lockTarget
// [0x00020102] 
struct UPgPlayerInput_execlockTarget_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.bLock
// [0x00020102] 
struct UPgPlayerInput_execbLock_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.Sprint
// [0x00020102] 
struct UPgPlayerInput_execSprint_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.StartVehicle
// [0x00020102] 
struct UPgPlayerInput_execStartVehicle_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.StartUse
// [0x00020102] 
struct UPgPlayerInput_execStartUse_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.Power
// [0x00020102] 
struct UPgPlayerInput_execPower_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.Disc
// [0x00020102] 
struct UPgPlayerInput_execDisc_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.Melee
// [0x00020102] 
struct UPgPlayerInput_execMelee_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APgPawn*                                  PgPawn;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerInput.MagDisc
// [0x00020100] 
struct UPgPlayerInput_execMagDisc_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.StartJump
// [0x00020102] 
struct UPgPlayerInput_execStartJump_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInput.ButtonRelease
// [0x00020202] ( FUNC_Exec )
struct UPgPlayerInput_execButtonRelease_Parms
{
	struct FName                                       ButtonName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   skipHandler : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FScriptDelegate                          buttonHandler;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerInput.ButtonPress
// [0x00020202] ( FUNC_Exec )
struct UPgPlayerInput_execButtonPress_Parms
{
	struct FName                                       ButtonName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   skipHandler : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FScriptDelegate                          buttonHandler;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          skipButtonList;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerInput.HandleButtonInput
// [0x00120000] 
struct UPgPlayerInput_execHandleButtonInput_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInputVehicle.PlayerInput
// [0x00020802] ( FUNC_Event )
struct UPgPlayerInputVehicle_eventPlayerInput_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerInputVehicle.ExitVehicle
// [0x00020102] 
struct UPgPlayerInputVehicle_execExitVehicle_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerInputVehicle.TurnL90
// [0x00020102] 
struct UPgPlayerInputVehicle_execTurnL90_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APgVehicle*                               Vehicle;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerInputVehicle.TurnR90
// [0x00020102] 
struct UPgPlayerInputVehicle_execTurnR90_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APgVehicle*                               Vehicle;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerInputVehicle.Boost
// [0x00020102] 
struct UPgPlayerInputVehicle_execBoost_Parms
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APgVehicle*                               Vehicle;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgPlayerInputVehicle.PreProcessInput
// [0x00020002] 
struct UPgPlayerInputVehicle_execPreProcessInput_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgEnergyInterface.EnergyFlow
// [0x00020400] ( FUNC_Native )
struct UPgEnergyInterface_execEnergyFlow_Parms
{
	int                                                inEnergy;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      overCharge : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEnergyInterface.HealthFlow
// [0x00020400] ( FUNC_Native )
struct UPgEnergyInterface_execHealthFlow_Parms
{
	int                                                inHealth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      overCharge : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSpecialMoveVolume.StopsProjectile
// [0x00020102] 
struct APgSpecialMoveVolume_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPedestrianSpawnManager.BroadCastPedestrianKilledEvent
// [0x00020400] ( FUNC_Native )
struct APgPedestrianSpawnManager_execBroadCastPedestrianKilledEvent_Parms
{
	class APawn*                                       KilledPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPedestrianSpawnManager.GetSpawnDelay
// [0x00020400] ( FUNC_Native )
struct APgPedestrianSpawnManager_execGetSpawnDelay_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPedestrianSpawnManager.GetTimeLastSpawn
// [0x00020400] ( FUNC_Native )
struct APgPedestrianSpawnManager_execGetTimeLastSpawn_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPedestrianSpawnManager.GetMaxPawns
// [0x00020400] ( FUNC_Native )
struct APgPedestrianSpawnManager_execGetMaxPawns_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPedestrianSpawnManager.GetNumPawns
// [0x00020400] ( FUNC_Native )
struct APgPedestrianSpawnManager_execGetNumPawns_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPedestrianSpawnManager.SetNumPawns
// [0x00020400] ( FUNC_Native )
struct APgPedestrianSpawnManager_execSetNumPawns_Parms
{
	int                                                numPawns;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSpecialMoveAsset.GetAction
// [0x00020500] ( FUNC_Native )
struct UPgSpecialMoveAsset_execGetAction_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSpecialMoveAsset.CanExecuteOn
// [0x00020500] ( FUNC_Native )
struct UPgSpecialMoveAsset_execCanExecuteOn_Parms
{
	class APgPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameplayEventsWriter.LogEnergyActorUse
// [0x00020400] ( FUNC_Native )
struct UPgGameplayEventsWriter_execLogEnergyActorUse_Parms
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Type;                                             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Team;                                             		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Usage;                                            		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AController*                                 Player;                                           		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameplayEventsWriter.Poll
// [0x00020002] 
struct UPgGameplayEventsWriter_execPoll_Parms
{
};

// Function GridGame.PgGameplayEventsWriter.SetConnection
// [0x00020400] ( FUNC_Native )
struct UPgGameplayEventsWriter_execSetConnection_Parms
{
	struct FString                                     remoteIP;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                remotePort;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameplayEventsWriter.OpenStatsFile
// [0x00020400] ( FUNC_Native )
struct UPgGameplayEventsWriter_execOpenStatsFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameplayEventsWriter.LogAllPlayerPositionsEvent
// [0x00020400] ( FUNC_Native )
struct UPgGameplayEventsWriter_execLogAllPlayerPositionsEvent_Parms
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStat.Changed
// [0x00020400] ( FUNC_Native )
struct UPgStat_execChanged_Parms
{
};

// Function GridGame.PgStat.IsDifferent
// [0x00020400] ( FUNC_Native )
struct UPgStat_execIsDifferent_Parms
{
	float                                              NewValue;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStat.GetStatFloat
// [0x00020400] ( FUNC_Native )
struct UPgStat_execGetStatFloat_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStat.GetStatBool
// [0x00020400] ( FUNC_Native )
struct UPgStat_execGetStatBool_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStat.GetStatInt
// [0x00020400] ( FUNC_Native )
struct UPgStat_execGetStatInt_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStat.Reset
// [0x00020400] ( FUNC_Native )
struct UPgStat_execReset_Parms
{
};

// Function GridGame.PgStat.SetStatFloat
// [0x00020400] ( FUNC_Native )
struct UPgStat_execSetStatFloat_Parms
{
	unsigned char                                      statOp;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              StatValue;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStat.SetStatBool
// [0x00020400] ( FUNC_Native )
struct UPgStat_execSetStatBool_Parms
{
	unsigned char                                      statOp;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      StatValue : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgStat.SetStatInt
// [0x00020400] ( FUNC_Native )
struct UPgStat_execSetStatInt_Parms
{
	unsigned char                                      statOp;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatValue;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatHandler.Reset
// [0x00020400] ( FUNC_Native )
struct UPgStatHandler_execReset_Parms
{
};

// Function GridGame.PgStatHandler.GetSupportedMessages
// [0x00020400] ( FUNC_Native )
struct UPgStatHandler_execGetSupportedMessages_Parms
{
	TArray< struct FName >                             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgDistanceTravelledStatHandler.Reset
// [0x00020400] ( FUNC_Native )
struct UPgDistanceTravelledStatHandler_execReset_Parms
{
};

// Function GridGame.PgDistanceTravelledStatHandler.GetSupportedMessages
// [0x00020400] ( FUNC_Native )
struct UPgDistanceTravelledStatHandler_execGetSupportedMessages_Parms
{
	TArray< struct FName >                             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgDistanceTravelledStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgDistanceTravelledStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgDrivingDistanceStatHandler.Reset
// [0x00020400] ( FUNC_Native )
struct UPgDrivingDistanceStatHandler_execReset_Parms
{
};

// Function GridGame.PgDrivingDistanceStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgDrivingDistanceStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgWalkingDistanceStatHandler.Reset
// [0x00020400] ( FUNC_Native )
struct UPgWalkingDistanceStatHandler_execReset_Parms
{
};

// Function GridGame.PgWalkingDistanceStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgWalkingDistanceStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgHighestFallStatHandler.Reset
// [0x00020400] ( FUNC_Native )
struct UPgHighestFallStatHandler_execReset_Parms
{
};

// Function GridGame.PgHighestFallStatHandler.GetSupportedMessages
// [0x00020400] ( FUNC_Native )
struct UPgHighestFallStatHandler_execGetSupportedMessages_Parms
{
	TArray< struct FName >                             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgHighestFallStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgHighestFallStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgLongestKillStreakStatHandler.Reset
// [0x00020400] ( FUNC_Native )
struct UPgLongestKillStreakStatHandler_execReset_Parms
{
};

// Function GridGame.PgLongestKillStreakStatHandler.GetSupportedMessages
// [0x00020400] ( FUNC_Native )
struct UPgLongestKillStreakStatHandler_execGetSupportedMessages_Parms
{
	TArray< struct FName >                             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgLongestKillStreakStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgLongestKillStreakStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgTestStatHandler.GetSupportedMessages
// [0x00020400] ( FUNC_Native )
struct UPgTestStatHandler_execGetSupportedMessages_Parms
{
	TArray< struct FName >                             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgTestStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgTestStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgTimeAliveStatHandler.Reset
// [0x00020400] ( FUNC_Native )
struct UPgTimeAliveStatHandler_execReset_Parms
{
};

// Function GridGame.PgTimeAliveStatHandler.GetSupportedMessages
// [0x00020400] ( FUNC_Native )
struct UPgTimeAliveStatHandler_execGetSupportedMessages_Parms
{
	TArray< struct FName >                             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgTimeAliveStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgTimeAliveStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgTutorialCounterStatHandler.GetSupportedMessages
// [0x00020400] ( FUNC_Native )
struct UPgTutorialCounterStatHandler_execGetSupportedMessages_Parms
{
	TArray< struct FName >                             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgTutorialCounterStatHandler.StatMsg
// [0x00024400] ( FUNC_Native )
struct UPgTutorialCounterStatHandler_execStatMsg_Parms
{
	struct FName                                       msg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     StatData;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         Controller;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgStatMonitor.Load
// [0x00020400] ( FUNC_Native )
struct UPgStatMonitor_execLoad_Parms
{
	struct FString                                     loadString;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgStatMonitor.Save
// [0x00420400] ( FUNC_Native )
struct UPgStatMonitor_execSave_Parms
{
	struct FString                                     saveString;                                       		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgStatMonitor.Reset
// [0x00020400] ( FUNC_Native )
struct UPgStatMonitor_execReset_Parms
{
};

// Function GridGame.PgStatMonitor.Changed
// [0x00020400] ( FUNC_Native )
struct UPgStatMonitor_execChanged_Parms
{
	class UPgStat*                                     Stat;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatKismetMonitor.Changed
// [0x00020400] ( FUNC_Native )
struct UPgStatKismetMonitor_execChanged_Parms
{
	class UPgStat*                                     Stat;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatThresholdMonitor.Load
// [0x00020400] ( FUNC_Native )
struct UPgStatThresholdMonitor_execLoad_Parms
{
	struct FString                                     loadString;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgStatThresholdMonitor.Save
// [0x00420400] ( FUNC_Native )
struct UPgStatThresholdMonitor_execSave_Parms
{
	struct FString                                     saveString;                                       		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgStatThresholdMonitor.ConditionSatisfied
// [0x00020400] ( FUNC_Native )
struct UPgStatThresholdMonitor_execConditionSatisfied_Parms
{
	class UPgStatsTracker*                             tracker;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStatThresholdMonitor.NotifyHud
// [0x00020400] ( FUNC_Native )
struct UPgStatThresholdMonitor_execNotifyHud_Parms
{
};

// Function GridGame.PgStatThresholdMonitor.Triggered
// [0x00020400] ( FUNC_Native )
struct UPgStatThresholdMonitor_execTriggered_Parms
{
	class UPgStat*                                     Stat;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatThresholdMonitor.Reset
// [0x00020400] ( FUNC_Native )
struct UPgStatThresholdMonitor_execReset_Parms
{
};

// Function GridGame.PgStatThresholdMonitor.Changed
// [0x00020400] ( FUNC_Native )
struct UPgStatThresholdMonitor_execChanged_Parms
{
	class UPgStat*                                     Stat;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCollectableStatMonitor.Changed
// [0x00020400] ( FUNC_Native )
struct UPgCollectableStatMonitor_execChanged_Parms
{
	class UPgStat*                                     Stat;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatsTracker.DisplayDebug
// [0x00420002] 
struct UPgStatsTracker_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           xOffset;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           yStart;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           yMax;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgStatsTracker.StatChanged
// [0x00020400] ( FUNC_Native )
struct UPgStatsTracker_execStatChanged_Parms
{
	class UPgStat*                                     Stat;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatsTracker.PrintStats
// [0x00020400] ( FUNC_Native )
struct UPgStatsTracker_execPrintStats_Parms
{
};

// Function GridGame.PgStatsTracker.GetKillStatIndices
// [0x00420400] ( FUNC_Native )
struct UPgStatsTracker_execGetKillStatIndices_Parms
{
	struct FName                                       DamageCause;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       PawnType;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      PlayerKilled : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< int >                                      Stats;                                            		// 0x0014 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgStatsTracker.GetKillStat
// [0x00420400] ( FUNC_Native )
struct UPgStatsTracker_execGetKillStat_Parms
{
	struct FName                                       DamageCause;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       PawnType;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      PlayerKilled : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< class UPgStat* >                           Stats;                                            		// 0x0014 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgStatsTracker.GetStatByIndex
// [0x00020400] ( FUNC_Native )
struct UPgStatsTracker_execGetStatByIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStatsTracker.GetStatIndex
// [0x00020400] ( FUNC_Native )
struct UPgStatsTracker_execGetStatIndex_Parms
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStatsTracker.Reset
// [0x00020400] ( FUNC_Native )
struct UPgStatsTracker_execReset_Parms
{
};

// Function GridGame.PgStatsTracker.StatMessage
// [0x00024400] ( FUNC_Native )
struct UPgStatsTracker_execStatMessage_Parms
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       StatMsg;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Payload;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgStatsTracker.GetStat
// [0x00020400] ( FUNC_Native )
struct UPgStatsTracker_execGetStat_Parms
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPgStat*                                     ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAirVehicle.GetDefaultCameraMode
// [0x00020102] 
struct APgAirVehicle_execGetDefaultCameraMode_Parms
{
	class APlayerController*                           RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgAirVehicle.SetCameraArchetype
// [0x010201C2] 
struct APgAirVehicle_execSetCameraArchetype_Parms
{
	class APgPlayerCamera*                             newArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAirVehicle.OnTeleport
// [0x00020102] 
struct APgAirVehicle_execOnTeleport_Parms
{
	class USeqAct_Teleport*                            Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgAirVehicle.GetCameraArchetype
// [0x00020102] 
struct APgAirVehicle_execGetCameraArchetype_Parms
{
	class APgPlayerCamera*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgHoverVehicle.GetDefaultCameraMode
// [0x00020102] 
struct APgHoverVehicle_execGetDefaultCameraMode_Parms
{
	class APlayerController*                           RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.DriverGTFO
// [0x00820802] ( FUNC_Event )
struct APgVehicle_eventDriverGTFO_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              C;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 ExitRotation;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// class APgPlayerController*                      pgpc;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  pgDriver;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.GetWeaponAim
// [0x00820002] 
struct APgVehicle_execGetWeaponAim_Parms
{
	class AUTVehicleWeapon*                            VWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealAimPoint;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DesiredAimPoint;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitRotation;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x0064 (0x000C) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x0070 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0074 (0x0004) [0x0000000000000000]              
	// unsigned long                                   isLocalController : 1;                            		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   isTurretController : 1;                           		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FRotator                                 weaponRot;                                        		// 0x0080 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.GetWeaponAimDirection
// [0x00020802] ( FUNC_Event )
struct APgVehicle_eventGetWeaponAimDirection_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APgVehicleWeapon*                         seatWeapon;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.GetProjectileExtent
// [0x00820802] ( FUNC_Event )
struct APgVehicle_eventGetProjectileExtent_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APgVehicleWeapon*                         seatWeapon;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UClass*                                   projectileClass;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.ResetStrafeDamping
// [0x00020102] 
struct APgVehicle_execResetStrafeDamping_Parms
{
};

// Function GridGame.PgVehicle.OnAnimEnd
// [0x00020802] ( FUNC_Event )
struct APgVehicle_eventOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.PlayVehicleAnimation
// [0x00020500] ( FUNC_Native )
struct APgVehicle_execPlayVehicleAnimation_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.OnGiveInventoryArch
// [0x00020102] 
struct APgVehicle_execOnGiveInventoryArch_Parms
{
	class UPgSeqAct_GiveInventoryArch*                 inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  driverPawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.OnRemoveInventoryArch
// [0x00020102] 
struct APgVehicle_execOnRemoveInventoryArch_Parms
{
	class UPgSeqAct_RemoveInventoryArch*               inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  driverPawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.OnTeleport
// [0x00020102] 
struct APgVehicle_execOnTeleport_Parms
{
	class USeqAct_Teleport*                            Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.ProcessViewRotation
// [0x00420102] 
struct APgVehicle_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgVehicle.FaceRotation
// [0x00820102] 
struct APgVehicle_execFaceRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  newAccel;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Loc;                                              		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.KnockdownDriver
// [0x00820002] 
struct APgVehicle_execKnockdownDriver_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Impulse;                                          		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       bone;                                             		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  theDriver;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  zeroMomentum;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.DoJump
// [0x00020102] 
struct APgVehicle_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.ServerSeatWeaponRotation
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgVehicle_eventServerSeatWeaponRotation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    NewRotation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.VehicleWeaponFireEffects
// [0x00020102] 
struct APgVehicle_execVehicleWeaponFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgVehicleWeapon*                         pgVehicleWeap;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.VehicleWeaponStoppedFiring
// [0x00020100] 
struct APgVehicle_execVehicleWeaponStoppedFiring_Parms
{
	unsigned long                                      bViaReplication : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.WeaponStoppedFiring
// [0x00020100] 
struct APgVehicle_execWeaponStoppedFiring_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgVehicle.StopsProjectile
// [0x00020102] 
struct APgVehicle_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.InitializeSeats
// [0x00020002] 
struct APgVehicle_execInitializeSeats_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APgVehicleWeapon*                         pgVehicleWeap;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.ServerRetroTurn
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgVehicle_eventServerRetroTurn_Parms
{
	unsigned char                                      Direction;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.RetroTurn
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execRetroTurn_Parms
{
	unsigned char                                      Direction;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.ServerBoost
// [0x00220CC0] ( FUNC_Event | FUNC_Native )
struct APgVehicle_eventServerBoost_Parms
{
};

// Function GridGame.PgVehicle.IsInvisible
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execIsInvisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.Landed
// [0x00020802] ( FUNC_Event )
struct APgVehicle_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.HitWall
// [0x00020802] ( FUNC_Event )
struct APgVehicle_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GridGame.PgVehicle.GetExitRotation
// [0x00820002] 
struct APgVehicle_execGetExitRotation_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Rot;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.HandleDeadVehicleDriver
// [0x00020002] 
struct APgVehicle_execHandleDeadVehicleDriver_Parms
{
};

// Function GridGame.PgVehicle.DriverLeave
// [0x00020802] ( FUNC_Event )
struct APgVehicle_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APgVehicleVolume*                         vehicleVolume;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.DriverLeft
// [0x00020002] 
struct APgVehicle_execDriverLeft_Parms
{
};

// Function GridGame.PgVehicle.SitDriver
// [0x00020102] 
struct APgVehicle_execSitDriver_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.DriverEnter
// [0x00020002] 
struct APgVehicle_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.CanEnterVehicle
// [0x00020102] 
struct APgVehicle_execCanEnterVehicle_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APgPawn*                                  pawnDriver;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle._TryToDrive
// [0x00020802] ( FUNC_Event )
struct APgVehicle_event_TryToDrive_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.WouldVehiclePenetrateWorld
// [0x00420400] ( FUNC_Native )
struct APgVehicle_execWouldVehiclePenetrateWorld_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.SetInputs
// [0x00020102] 
struct APgVehicle_execSetInputs_Parms
{
	float                                              Forward;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Strafe;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Up;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           newStrafe;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           newForward;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.RemapAxisByPlatform
// [0x00020500] ( FUNC_Native )
struct APgVehicle_execRemapAxisByPlatform_Parms
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.AdjustDamage
// [0x00424002] 
struct APgVehicle_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class APgPawn*                                  pgDriver;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.BlowupVehicle
// [0x00020102] 
struct APgVehicle_execBlowupVehicle_Parms
{
};

// Function GridGame.PgVehicle.Died
// [0x00020002] 
struct APgVehicle_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.StopCollisions
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execStopCollisions_Parms
{
};

// Function GridGame.PgVehicle.FireDeathSideEffects
// [0x010205C0] ( FUNC_Native )
struct APgVehicle_execFireDeathSideEffects_Parms
{
};

// Function GridGame.PgVehicle.GetCollisionDamageModifier
// [0x00C20002] 
struct APgVehicle_execGetCollisionDamageModifier_Parms
{
	TArray< struct FRigidBodyContactInfo >             ContactInfos;                                     		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Angle;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.GetCollisionDamageInstigator
// [0x00020002] 
struct APgVehicle_execGetCollisionDamageInstigator_Parms
{
	class AController*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct APgVehicle_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        Collision;                                        		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Damage;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// class AUTVehicle*                               Vehicle;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// class APgDynamicSMActor*                        dynamicSM;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatorController;                             		// 0x003C (0x0004) [0x0000000000000000]              
	// class AActor*                                   otherComponentOwner;                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// class UPgDamageParamInterface*                  damageInterface;                                  		// 0x0044 (0x0008) [0x0000000000000000]              
	// float                                           collisionForce;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           kGameDamageScalar;                                		// 0x0050 (0x0004) [0x0000000000000000]              
	// unsigned long                                   AreVehiclesColliding : 1;                         		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgVehicle.Deflect
// [0x00420400] ( FUNC_Native )
struct APgVehicle_execDeflect_Parms
{
	struct FCollisionImpactData                        Collision;                                        		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgVehicle.EnergyFlow
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execEnergyFlow_Parms
{
	int                                                inEnergy;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      overCharge : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.HealthFlow
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execHealthFlow_Parms
{
	int                                                inHealth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      overCharge : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.TakeDamage
// [0x00024902] ( FUNC_Event )
struct APgVehicle_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UPgDamageParamInterface*                  damageInterface;                                  		// 0x0044 (0x0008) [0x0000000000000000]              
	// class APgGameInfo*                              GameInfo;                                         		// 0x004C (0x0004) [0x0000000000000000]              
	// class APgPlayerController*                      instigatedPlayerController;                       		// 0x0050 (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsFriendly : 1;                                   		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APgAIController*                          aic;                                              		// 0x0058 (0x0004) [0x0000000000000000]              
	// class UPgDamageParam*                           damageParam;                                      		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.FireDamageSideEffects
// [0x010205C0] ( FUNC_Native )
struct APgVehicle_execFireDamageSideEffects_Parms
{
};

// Function GridGame.PgVehicle.GetDamageCauserDamageScaling
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execGetDamageCauserDamageScaling_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.PlayerChangedTeam
// [0x00020002] 
struct APgVehicle_execPlayerChangedTeam_Parms
{
};

// Function GridGame.PgVehicle._Suicide
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgVehicle_event_Suicide_Parms
{
};

// Function GridGame.PgVehicle.Suicide
// [0x00020002] 
struct APgVehicle_execSuicide_Parms
{
};

// Function GridGame.PgVehicle.CheckReset
// [0x00020800] ( FUNC_Event )
struct APgVehicle_eventCheckReset_Parms
{
};

// Function GridGame.PgVehicle.ContinueOnFoot
// [0x00020802] ( FUNC_Event )
struct APgVehicle_eventContinueOnFoot_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.RanInto
// [0x00820802] ( FUNC_Event )
struct APgVehicle_eventRanInto_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  PgPawn;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           Speed;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  relVel;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.PancakeOther
// [0x00020000] 
struct APgVehicle_execPancakeOther_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.DisplayGraphDebug
// [0x00824102] 
struct APgVehicle_execDisplayGraphDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YL;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GraphFunc;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     GraphName;                                        		// 0x0014 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FString                                     AxisXName;                                        		// 0x0020 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FString                                     AxisYName;                                        		// 0x002C (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	float                                              AxisXMax;                                         		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              AxisYMax;                                         		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Offset;                                           		// 0x0040 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              GraphScale;                                       		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             J;                                                		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WorldLoc;                                         		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0078 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FColor                                   SaveColor;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           LastForceValue;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	// float                                           ForceValue;                                       		// 0x0098 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ForceValueLoc;                                    		// 0x009C (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.GraphFunction
// [0x00120000] 
struct APgVehicle_execGraphFunction_Parms
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.DisplayWheelsDebug
// [0x00820102] 
struct APgVehicle_execDisplayWheelsDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YL;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  WorldLoc;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndPoint;                                         		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenEndPoint;                                   		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FColor                                   SaveColor;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           LastForceValue;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           GraphScale;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           GraphOffsetX;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           GraphOffsetY;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           TextOffsetX;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	// float                                           TextOffsetY;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	// float                                           ForceValue;                                       		// 0x0080 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ForceValueLoc;                                    		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Offset;                                           		// 0x0090 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.DisplayControlsDebug
// [0x00020102] 
struct APgVehicle_execDisplayControlsDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.DisplayDebug
// [0x00C20102] 
struct APgVehicle_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  Offset;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// float                                           AxisXMax;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           AxisYMax;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.DisplayDebugLine
// [0x00020102] 
struct APgVehicle_execDisplayDebugLine_Parms
{
	struct FVector                                     vec;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                R;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                G;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                B;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           lineLengthScaleFactor;                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicle.DebugDrawOnlinePlayerName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgVehicle_execDebugDrawOnlinePlayerName_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.GetSVehicleDebug
// [0x00420102] 
struct APgVehicle_execGetSVehicleDebug_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgVehicle.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct APgVehicle_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.SetMoveControllerLevel
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execSetMoveControllerLevel_Parms
{
	unsigned long                                      Level : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgVehicle.DeInitTeamCollisionChannels
// [0x00020500] ( FUNC_Native )
struct APgVehicle_execDeInitTeamCollisionChannels_Parms
{
};

// Function GridGame.PgVehicle.InitTeamCollisionChannels
// [0x00020500] ( FUNC_Native )
struct APgVehicle_execInitTeamCollisionChannels_Parms
{
};

// Function GridGame.PgVehicle.AnyWheelSquealing
// [0x00020500] ( FUNC_Native )
struct APgVehicle_execAnyWheelSquealing_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle._ZeroMovementVariables
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgVehicle_event_ZeroMovementVariables_Parms
{
};

// Function GridGame.PgVehicle.ZeroMovementVariables
// [0x00020D00] ( FUNC_Event | FUNC_Native )
struct APgVehicle_eventZeroMovementVariables_Parms
{
};

// Function GridGame.PgVehicle.TorqueVSpeedEval
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgVehicle_execTorqueVSpeedEval_Parms
{
	float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.EngineRPMEval
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgVehicle_execEngineRPMEval_Parms
{
	float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.MaxSteerAngleEval
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgVehicle_execMaxSteerAngleEval_Parms
{
	float                                              Angle;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.ThrottleVSpeedEval
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgVehicle_execThrottleVSpeedEval_Parms
{
	float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.OnDamageCaused
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execOnDamageCaused_Parms
{
	int                                                damageCaused;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damageVictim;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.GetCauseDamageParam
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execGetCauseDamageParam_Parms
{
	class UPgDamageParam*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.GetMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execGetMaterialInstanceList_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgVehicle.InitMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execInitMaterialInstanceList_Parms
{
};

// Function GridGame.PgVehicle.TimeInitPlugins
// [0x00020102] 
struct APgVehicle_execTimeInitPlugins_Parms
{
};

// Function GridGame.PgVehicle.DeInitPlugins
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execDeInitPlugins_Parms
{
};

// Function GridGame.PgVehicle.InitPlugins
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execInitPlugins_Parms
{
};

// Function GridGame.PgVehicle.SetCameraArchetype
// [0x010201C2] 
struct APgVehicle_execSetCameraArchetype_Parms
{
	class APgPlayerCamera*                             newArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.GetCameraArchetype
// [0x00020102] 
struct APgVehicle_execGetCameraArchetype_Parms
{
	class APgPlayerCamera*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicle.PostEvent
// [0x00024400] ( FUNC_Native )
struct APgVehicle_execPostEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       listName;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgVehicle.AdjustSpeedOnDamage
// [0x00020400] ( FUNC_Native )
struct APgVehicle_execAdjustSpeedOnDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicle.UnPossessed
// [0x00020002] 
struct APgVehicle_execUnPossessed_Parms
{
};

// Function GridGame.PgVehicle.PossessedBy
// [0x00020002] 
struct APgVehicle_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgVehicleBoost.Reset
// [0x00020002] 
struct UPgVehicleBoost_execReset_Parms
{
	// class UPgVehicleBoost*                          Archetype;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicleBoost.DriverLeft
// [0x00020002] 
struct UPgVehicleBoost_execDriverLeft_Parms
{
};

// Function GridGame.PgVehicleBoost.DriverEnter
// [0x00020000] 
struct UPgVehicleBoost_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicleBoost.SetInputs
// [0x00020102] 
struct UPgVehicleBoost_execSetInputs_Parms
{
	float                                              Forward;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Strafe;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Up;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicleBoost.DeactivateRocketBoosters
// [0x00020902] ( FUNC_Event )
struct UPgVehicleBoost_eventDeactivateRocketBoosters_Parms
{
	// class ASVehicle*                                outerVehicle;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicleBoost.ActivateRocketBoosters
// [0x00020902] ( FUNC_Event )
struct UPgVehicleBoost_eventActivateRocketBoosters_Parms
{
};

// Function GridGame.PgVehicleBoostEnter.DriverEnter
// [0x00020002] 
struct UPgVehicleBoostEnter_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicleRetroTurn.TurnVehicle
// [0x00020400] ( FUNC_Native )
struct UPgVehicleRetroTurn_execTurnVehicle_Parms
{
	unsigned char                                      Direction;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicleSetInputs.DisplayDebug
// [0x00420100] 
struct UPgVehicleSetInputs_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgVehicleSetInputs.SetInputs
// [0x00020100] 
struct UPgVehicleSetInputs_execSetInputs_Parms
{
	float                                              Forward;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Strafe;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Up;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVehicleSetInputsTank.SetInputs
// [0x00820102] 
struct UPgVehicleSetInputsTank_execSetInputs_Parms
{
	float                                              Forward;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Strafe;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Up;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AGamePlayerController*                    Player;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  deflectDir;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgVehicleSetInputsTank.DisplayDebug
// [0x00420500] ( FUNC_Native )
struct UPgVehicleSetInputsTank_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgVehicleSetInputsTank.GetReverseThreshold
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgVehicleSetInputsTank_execGetReverseThreshold_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicleSetInputsTank.GetForwardBiasThreshold
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgVehicleSetInputsTank_execGetForwardBiasThreshold_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicleSetInputsTank.GetTurnInPlaceThreshold
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgVehicleSetInputsTank_execGetTurnInPlaceThreshold_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicleSetInputsTank.GetSteerDeadzone
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgVehicleSetInputsTank_execGetSteerDeadzone_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicleSetInputsTank.SteerVehicle
// [0x00020400] ( FUNC_Native )
struct UPgVehicleSetInputsTank_execSteerVehicle_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgExplosionActor.SpawnExplosionParticleSystem
// [0x00820102] 
struct APgExplosionActor_execSpawnExplosionParticleSystem_Parms
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 emitterRot;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GridGame.PgExplosionActor.Explode
// [0x00024902] ( FUNC_Event )
struct APgExplosionActor_eventExplode_Parms
{
	class UGameExplosion*                              NewExplosionTemplate;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Direction;                                        		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UPgExplosion*                             pgExplosionTemplate;                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgExplosionActor.OnDamageCaused
// [0x00020400] ( FUNC_Native )
struct APgExplosionActor_execOnDamageCaused_Parms
{
	int                                                damageCaused;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damageVictim;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgExplosionActor.GetCauseDamageParam
// [0x00020400] ( FUNC_Native )
struct APgExplosionActor_execGetCauseDamageParam_Parms
{
	class UPgDamageParam*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventory.DenyPickupQuery
// [0x00020002] 
struct APgInventory_execDenyPickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventory.ClientGivenTo
// [0x010201C2] 
struct APgInventory_execClientGivenTo_Parms
{
	class APawn*                                       NewOwner;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgInventory.GivenTo
// [0x00024002] 
struct APgInventory_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class APgPawn*                                  pawnGivenTo;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgInventory.DropFrom
// [0x00020400] ( FUNC_Native )
struct APgInventory_execDropFrom_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartVelocity;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInventory.GetLocalString
// [0x00026002] 
struct APgInventory_execGetLocalString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgInventory.DetachPlugin
// [0x00020400] ( FUNC_Native )
struct APgInventory_execDetachPlugin_Parms
{
};

// Function GridGame.PgInventory.AttachPlugin
// [0x00020400] ( FUNC_Native )
struct APgInventory_execAttachPlugin_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInventoryPower.GetEnergyMax
// [0x00020400] ( FUNC_Native )
struct APgInventoryPower_execGetEnergyMax_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryPower.BehaviorMatch
// [0x00420500] ( FUNC_Native )
struct APgInventoryPower_execBehaviorMatch_Parms
{
	class UPgPowerBehavior*                            Behavior;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UClass* >                            behaviorClass;                                    		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryPower.GetEnergyCost
// [0x00420500] ( FUNC_Native )
struct APgInventoryPower_execGetEnergyCost_Parms
{
	class APawn*                                       powerUser;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     powerDeduct;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      energyCosts;                                      		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgInventoryPower.GetTotalEnergyLevels
// [0x00020500] ( FUNC_Native )
struct APgInventoryPower_execGetTotalEnergyLevels_Parms
{
	class APawn*                                       powerUser;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     powerDeduct;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryPower.GetPowerProj
// [0x00420500] ( FUNC_Native )
struct APgInventoryPower_execGetPowerProj_Parms
{
	class APawn*                                       powerUser;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     powerDeduct;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UClass* >                            behaviorClass;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class APgProjectile*                               ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryPower.IsValidPawn
// [0x00020500] ( FUNC_Native )
struct APgInventoryPower_execIsValidPawn_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                grpIndex;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryPower.GetBestPowerLevel
// [0x00020500] ( FUNC_Native )
struct APgInventoryPower_execGetBestPowerLevel_Parms
{
	class APgPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryPower.CanUsePowerLevel
// [0x00020500] ( FUNC_Native )
struct APgInventoryPower_execCanUsePowerLevel_Parms
{
	class APgPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryPower.CanUsePower
// [0x00020500] ( FUNC_Native )
struct APgInventoryPower_execCanUsePower_Parms
{
	class APgPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryPower.UseBestPower
// [0x00420500] ( FUNC_Native )
struct APgInventoryPower_execUseBestPower_Parms
{
	class APawn*                                       powerUser;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     powerDeduct;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UClass* >                            behaviorClass;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class APgProjectile*                               ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInventoryManager.RestoreSelectedPower
// [0x00020400] ( FUNC_Native )
struct APgInventoryManager_execRestoreSelectedPower_Parms
{
	struct FString                                     powerArchetype;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgInventoryManager.DestroyInventory
// [0x00020400] ( FUNC_Native )
struct APgInventoryManager_execDestroyInventory_Parms
{
};

// Function GridGame.PgInventoryManager.DropSingleInventory
// [0x00020902] ( FUNC_Event )
struct APgInventoryManager_eventDropSingleInventory_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgInventoryPickup*                          droppedArchetype;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartVelocity;                                    		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class APgInventoryPickup*                       P;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ActivateIndices;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgInventoryManager.CleanupInventory
// [0x00020902] ( FUNC_Event )
struct APgInventoryManager_eventCleanupInventory_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInventoryManager.RemoveFromInventory
// [0x00020102] 
struct APgInventoryManager_execRemoveFromInventory_Parms
{
	class AInventory*                                  ItemToRemove;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  PawnOwner;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgInventoryManager.ChangedWeapon
// [0x00020102] 
struct APgInventoryManager_execChangedWeapon_Parms
{
};

// Function GridGame.PgInventoryManager.WeaponEquipped
// [0x00020102] 
struct APgInventoryManager_execWeaponEquipped_Parms
{
};

// Function GridGame.PgInventoryManager.PuttingWeaponDown
// [0x00020102] 
struct APgInventoryManager_execPuttingWeaponDown_Parms
{
};

// Function GridGame.PgInventoryManager.ReplicateWeapon
// [0x00020102] 
struct APgInventoryManager_execReplicateWeapon_Parms
{
	class AWeapon*                                     CurrentWeapon;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    weaponPathName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GridGame.PgInventoryManager.QuickSwitch
// [0x00020102] 
struct APgInventoryManager_execQuickSwitch_Parms
{
	struct FName                                       weaponTypeName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWeapon*                                  switchTo;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgInventoryManager.QuickSwitchPower
// [0x00020102] 
struct APgInventoryManager_execQuickSwitchPower_Parms
{
	struct FName                                       powerName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APgInventoryPower*                        switchTo;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgInventoryManager.FindInventoryByName
// [0x00020902] ( FUNC_Event )
struct APgInventoryManager_eventFindInventoryByName_Parms
{
	struct FName                                       typeName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgInventoryManager.ClientWeaponSet
// [0x00024102] 
struct APgInventoryManager_execClientWeaponSet_Parms
{
	class AWeapon*                                     NewWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOptionalSet : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgInventoryManager.ServerSetPower
// [0x002208C2] ( FUNC_Event )
struct APgInventoryManager_eventServerSetPower_Parms
{
	class APgInventoryPower*                           desiredPower;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  pgp;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APgPlayerController*                      Controller;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgInventoryManager.SetDefaultInvPower
// [0x00020802] ( FUNC_Event )
struct APgInventoryManager_eventSetDefaultInvPower_Parms
{
	// class APgPlayerController*                      Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgInventoryPickup.PickedUpBy
// [0x00020002] 
struct APgInventoryPickup_execPickedUpBy_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInventoryPickup.Respawn
// [0x00020002] 
struct APgInventoryPickup_execRespawn_Parms
{
};

// Function GridGame.PgInventoryPickup.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
struct APgInventoryPickup_eventFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< int >                                   ActivateIndices;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgInventoryPickup.Landed
// [0x00020800] ( FUNC_Event )
struct APgInventoryPickup_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInventoryPickup.GiveTo
// [0x00020002] 
struct APgInventoryPickup_execGiveTo_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< int >                                   ActivateIndices;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APgObjective*                             Obj;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgInventoryPickup.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct APgInventoryPickup_eventPreBeginPlay_Parms
{
	// class UActorComponent*                          NewComponent;                                     		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GridGame.PgInventoryPickup.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct APgInventoryPickup_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInventoryPickup.CheckBase
// [0x00020400] ( FUNC_Native )
struct APgInventoryPickup_execCheckBase_Parms
{
};

// Function GridGame.PgInventoryPickup.PostEvent
// [0x00024400] ( FUNC_Native )
struct APgInventoryPickup_execPostEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       listName;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgInventoryPickup.UpdatePlugins
// [0x00020400] ( FUNC_Native )
struct APgInventoryPickup_execUpdatePlugins_Parms
{
};

// Function GridGame.PgInventoryPickup.StartFlyingTo
// [0x00020400] ( FUNC_Native )
struct APgInventoryPickup_execStartFlyingTo_Parms
{
	class APawn*                                       flyToPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInventoryPickup.TriggerEventPickupStatusChange
// [0x00422400] ( FUNC_Native )
struct APgInventoryPickup_execTriggerEventPickupStatusChange_Parms
{
	class AActor*                                      theInstigator;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgInventoryPickup*                          thePickup;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      ActivateIndices;                                  		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UObject*                                     Archetype;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInventoryPickup.UnHidePickup
// [0x00020400] ( FUNC_Native )
struct APgInventoryPickup_execUnHidePickup_Parms
{
};

// Function GridGame.PgInventoryPickup.HidePickup
// [0x00020400] ( FUNC_Native )
struct APgInventoryPickup_execHidePickup_Parms
{
};

// Function GridGame.PgInventoryPickup.DeInitPlugins
// [0x00020400] ( FUNC_Native )
struct APgInventoryPickup_execDeInitPlugins_Parms
{
};

// Function GridGame.PgInventoryPickup.InitPlugins
// [0x00020400] ( FUNC_Native )
struct APgInventoryPickup_execInitPlugins_Parms
{
};

// Function GridGame.PgInventoryPickup.IsValidTouch
// [0x00020400] ( FUNC_Native )
struct APgInventoryPickup_execIsValidTouch_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPowerBehavior.PerformPowerBehavior
// [0x00020500] ( FUNC_Native )
struct UPgPowerBehavior_execPerformPowerBehavior_Parms
{
	class APawn*                                       performer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPowerBehaviorBoost.PerformPowerBehavior
// [0x00020500] ( FUNC_Native )
struct UPgPowerBehaviorBoost_execPerformPowerBehavior_Parms
{
	class APawn*                                       performer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPowerBehaviorDamageScaling.PerformPowerBehavior
// [0x00020500] ( FUNC_Native )
struct UPgPowerBehaviorDamageScaling_execPerformPowerBehavior_Parms
{
	class APawn*                                       performer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPowerBehaviorProjectile.PerformPowerBehavior
// [0x00020500] ( FUNC_Native )
struct UPgPowerBehaviorProjectile_execPerformPowerBehavior_Parms
{
	class APawn*                                       performer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgProjectile.Landed
// [0x00820902] ( FUNC_Event )
struct APgProjectile_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  dirToInstigator;                                  		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgProjectile.HitWall
// [0x00020902] ( FUNC_Event )
struct APgProjectile_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GridGame.PgProjectile.UnTouch
// [0x00020800] ( FUNC_Event )
struct APgProjectile_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgProjectile.ProcessTouch
// [0x00820102] 
struct APgProjectile_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// class APawn*                                    hitPawn;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  otherPgPawn;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgProjectile.ProcessStick
// [0x00020102] 
struct APgProjectile_execProcessStick_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               traceInfo;                                        		// 0x0010 (0x001C) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    P;                                                		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgProjectile.GetImpactTraceHitInfo
// [0x00C20102] 
struct APgProjectile_execGetImpactTraceHitInfo_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      otherHitActor;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0010 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      outHitActor;                                      		// 0x002C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  HitLoc;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  velNorm;                                          		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgProjectile.Tick
// [0x00020902] ( FUNC_Event )
struct APgProjectile_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgProjectile.TriggerExplosion
// [0x00020102] 
struct APgProjectile_execTriggerExplosion_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPhysicalMaterial*                           hitMaterial;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgExplosionActor*                        explosionActor;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgProjectile.DeferredDestroy
// [0x00080902] ( FUNC_Event )
struct APgProjectile_eventDeferredDestroy_Parms
{
	float                                              DelaySec;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UMeshComponent*                           ComponentIt;                                      		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// int                                             AttachIdx;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   A;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgProjectile.CanUpdateExplosionTimer
// [0x00020102] 
struct APgProjectile_execCanUpdateExplosionTimer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgProjectile.Init
// [0x00020002] 
struct APgProjectile_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  PgPawn;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   isMagDiscAntic : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridGame.PgProjectile.ReorientToSurface
// [0x00020400] ( FUNC_Native )
struct APgProjectile_execReorientToSurface_Parms
{
};

// Function GridGame.PgProjectile.HasImpactBehavior
// [0x00020902] ( FUNC_Event )
struct APgProjectile_eventHasImpactBehavior_Parms
{
	unsigned char                                      impactBehavior;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgProjectile.InitFromNative
// [0x00020802] ( FUNC_Event )
struct APgProjectile_eventInitFromNative_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgProjectile.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct APgProjectile_eventPostBeginPlay_Parms
{
	// class UActorComponent*                          NewComponent;                                     		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GridGame.PgProjectile.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct APgProjectile_eventPreBeginPlay_Parms
{
	// class AVehicle*                                 instigatorVehicle;                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgProjectile.OnDamageCaused
// [0x00020400] ( FUNC_Native )
struct APgProjectile_execOnDamageCaused_Parms
{
	int                                                damageCaused;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damageVictim;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgProjectile.GetCauseDamageParam
// [0x00020400] ( FUNC_Native )
struct APgProjectile_execGetCauseDamageParam_Parms
{
	class UPgDamageParam*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgProjectile.PostEventHit
// [0x00024400] ( FUNC_Native )
struct APgProjectile_execPostEventHit_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       listName;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgProjectile.PostEvent
// [0x00024400] ( FUNC_Native )
struct APgProjectile_execPostEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       listName;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgProjectile.GetMaterialInstanceList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgProjectile_execGetMaterialInstanceList_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgProjectile.InitMaterialInstanceList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgProjectile_execInitMaterialInstanceList_Parms
{
};

// Function GridGame.PgWeapon.GetMuzzleLoc
// [0x00820902] ( FUNC_Event )
struct APgWeapon_eventGetMuzzleLoc_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Position;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 unusedRotation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgWeapon.GetSocketOrBoneLocationRotation
// [0x00420102] 
struct APgWeapon_execGetSocketOrBoneLocationRotation_Parms
{
	struct FName                                       boneOrSocketName;                                 		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FVector                                     BoneLocation;                                     		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    BoneRotation;                                     		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgWeapon.TimeWeaponEquipping
// [0x00020102] 
struct APgWeapon_execTimeWeaponEquipping_Parms
{
	// class APgPawn*                                  ownerPawn;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgWeapon.TimeWeaponPutDown
// [0x00020102] 
struct APgWeapon_execTimeWeaponPutDown_Parms
{
};

// Function GridGame.PgWeapon.DetachWeapon
// [0x00020102] 
struct APgWeapon_execDetachWeapon_Parms
{
	// class USkeletalMeshComponent*                   ownerMesh;                                        		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function GridGame.PgWeapon.AttachWeaponTo
// [0x00024500] ( FUNC_Native )
struct APgWeapon_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgWeapon.DropFrom
// [0x00020000] 
struct APgWeapon_execDropFrom_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartVelocity;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgWeapon.ClientGivenTo
// [0x010201C2] 
struct APgWeapon_execClientGivenTo_Parms
{
	class APawn*                                       NewOwner;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgWeapon.GivenTo
// [0x00024002] 
struct APgWeapon_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgWeapon.GetMaterialInstanceList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgWeapon_execGetMaterialInstanceList_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgWeapon.InitMaterialInstanceList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgWeapon_execInitMaterialInstanceList_Parms
{
};

// Function GridGame.PgWeaponCombo.ComboMoveEnd
// [0x00020902] ( FUNC_Event )
struct APgWeaponCombo_eventComboMoveEnd_Parms
{
};

// Function GridGame.PgWeaponCombo.ComboMoveStarted
// [0x00020902] ( FUNC_Event )
struct APgWeaponCombo_eventComboMoveStarted_Parms
{
};

// Function GridGame.PgWeaponCombo.HolderDied
// [0x00020000] 
struct APgWeaponCombo_execHolderDied_Parms
{
};

// Function GridGame.PgWeaponCombo.ServerStopFire
// [0x002200C2] 
struct APgWeaponCombo_execServerStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgWeaponCombo.ServerStartFire
// [0x002200C2] 
struct APgWeaponCombo_execServerStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgWeaponCombo.StopFire
// [0x00020102] 
struct APgWeaponCombo_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgWeaponCombo.StartFire
// [0x00020102] 
struct APgWeaponCombo_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgWeaponCombo.CustomFire
// [0x00020102] 
struct APgWeaponCombo_execCustomFire_Parms
{
};

// Function GridGame.PgWeaponCombo.StopFireEffects
// [0x00020100] 
struct APgWeaponCombo_execStopFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgWeaponCombo.PlayFireEffects
// [0x00024100] 
struct APgWeaponCombo_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgWeaponCombo.HasAmmo
// [0x00024102] 
struct APgWeaponCombo_execHasAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgWeaponCombo.GetFireModeSpecialMove
// [0x00020102] 
struct APgWeaponCombo_execGetFireModeSpecialMove_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UPgSpecialMoveAsset*                         ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UPgSpecialMoveAsset*                      fireMove;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgWeaponCombo.PostBeginPlay
// [0x00020102] 
struct APgWeaponCombo_execPostBeginPlay_Parms
{
};

// Function GridGame.PgWeaponFireType.CustomFire
// [0x00020100] 
struct UPgWeaponFireType_execCustomFire_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgWeapFireTypeMelee.CustomFire
// [0x00820102] 
struct UPgWeapFireTypeMelee_execCustomFire_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  damageLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function GridGame.PgWeapFireTypeProjectile.SpawnProjectile
// [0x00020102] 
struct UPgWeapFireTypeProjectile_execSpawnProjectile_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RealStartLocation;                                		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AProjectile*                                 ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              Proj;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgWeapFireTypeProjectile.CustomFire
// [0x00820102] 
struct UPgWeapFireTypeProjectile_execCustomFire_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  StartTrace;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ForceLoc;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StartRotation;                                    		// 0x0034 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// class AUTVehicleWeapon*                         vehicleWeapon;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgWeapFireTypeProjectile.GetProjectileToFire
// [0x00020102] 
struct UPgWeapFireTypeProjectile_execGetProjectileToFire_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AProjectile*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              Proj;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgWeapFireTypeProjectile.ComputeProjectileSpawnLocationRotation
// [0x00420500] ( FUNC_Native )
struct UPgWeapFireTypeProjectile_execComputeProjectileSpawnLocationRotation_Parms
{
	class APawn*                                       Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AProjectile*                                 projArchetype;                                    		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgWeapFireTypePower.SpawnProjectile
// [0x00020102] 
struct UPgWeapFireTypePower_execSpawnProjectile_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RealStartLocation;                                		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AProjectile*                                 ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              Proj;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// class APawn*                                    userPawn;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  deducterPawn;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgWeapFireTypePower.GetProjectileToFire
// [0x00020102] 
struct UPgWeapFireTypePower_execGetProjectileToFire_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AProjectile*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    userPawn;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  deducterPawn;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class AProjectile*                              Proj;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgWeapFireTypeVehicleDriver.CustomFire
// [0x00020102] 
struct UPgWeapFireTypeVehicleDriver_execCustomFire_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnline.DisplayDebug
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPgOnline_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FontHeight;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              YPos;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgOnline.GetLeaderboard
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execGetLeaderboard_Parms
{
	class UPgOnlineLeaderboard*                        ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.GetLoginManager
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execGetLoginManager_Parms
{
	class UPgOnlineLoginManager*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.GetGameManager
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execGetGameManager_Parms
{
	class UPgOnlineGameManager*                        ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.GetSessionManager
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execGetSessionManager_Parms
{
	class UPgOnlineSessionManager*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.GetPlayerList
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execGetPlayerList_Parms
{
	class UPgOnlinePlayerList*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.IsStandAlone
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execIsStandAlone_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.IsClient
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execIsClient_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.IsHost
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execIsHost_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.IsMultiplayer
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execIsMultiplayer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnline.GetInstance
// [0x00022400] ( FUNC_Native )
struct UPgOnline_execGetInstance_Parms
{
	class UPgOnline*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.DisplayDebug
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FontHeight;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              YPos;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgOnlineGameManager._GetPlayerNickname
// [0x00020802] ( FUNC_Event )
struct UPgOnlineGameManager_event_GetPlayerNickname_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameManager.lobbyStartCountdown
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineGameManager_execlobbyStartCountdown_Parms
{
};

// Function GridGame.PgOnlineGameManager.lobbyLeaveSession
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineGameManager_execlobbyLeaveSession_Parms
{
	unsigned long                                      shouldSave : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.lobbyStartReady
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineGameManager_execlobbyStartReady_Parms
{
};

// Function GridGame.PgOnlineGameManager.DebugGoto
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineGameManager_execDebugGoto_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameManager.DebugReset
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineGameManager_execDebugReset_Parms
{
};

// Function GridGame.PgOnlineGameManager.GetCurrentGameTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetCurrentGameTime_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.GetGameTimeLimit
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetGameTimeLimit_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.SetGameTimeLimit
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetGameTimeLimit_Parms
{
	int                                                TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.IsInPreGameLobby
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execIsInPreGameLobby_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.GetCompletionMapIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetCompletionMapIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.SetCompletionMap
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetCompletionMap_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameManager.GetCurrentMapIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetCurrentMapIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.GetNextMapIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetNextMapIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.GetNextMap
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetNextMap_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameManager.SetNextMap
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetNextMap_Parms
{
	int                                                mapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.GotoMap
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGotoMap_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameManager.IsSeamless
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execIsSeamless_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.SetSeamless
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetSeamless_Parms
{
	unsigned long                                      Seamless : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.ShowQosWarning
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execShowQosWarning_Parms
{
};

// Function GridGame.PgOnlineGameManager.EnableQosWarning
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execEnableQosWarning_Parms
{
	unsigned long                                      Enabled : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.GetRecommendedNumPlayers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetRecommendedNumPlayers_Parms
{
	unsigned char                                      GameModeIndex;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.GetMaxNumPlayersForNextGame
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetMaxNumPlayersForNextGame_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.SetMaxPlayers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetMaxPlayers_Parms
{
	int                                                Max;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.IsPublic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execIsPublic_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.SetPublic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetPublic_Parms
{
	unsigned long                                      Public : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.UpdateGRI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execUpdateGRI_Parms
{
};

// Function GridGame.PgOnlineGameManager.GetOptionValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetOptionValue_Parms
{
	struct FName                                       OptionName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.SetOptionAt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetOptionAt_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       OptionName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.SetOption
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetOption_Parms
{
	struct FName                                       OptionName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.GetStaticRuleSet
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetStaticRuleSet_Parms
{
	unsigned char                                      GameModeIndex;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UPgRuleSet*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.GetRuleSetFilename
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetRuleSetFilename_Parms
{
	unsigned char                                      GameModeIndex;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameManager.GetRuleSet
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetRuleSet_Parms
{
	class UPgRuleSet*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.InitRuleSet
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execInitRuleSet_Parms
{
	unsigned char                                      GameModeIndex;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.GetNextGameMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetNextGameMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.GetCurrentGameMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetCurrentGameMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameManager.SetNextGameMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execSetNextGameMode_Parms
{
	unsigned char                                      GameModeIndex;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.GetGameSettingsURL
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGetGameSettingsURL_Parms
{
	unsigned char                                      GameModeIndex;                                    		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameManager.RestartLevel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execRestartLevel_Parms
{
};

// Function GridGame.PgOnlineGameManager.GameCompleted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execGameCompleted_Parms
{
};

// Function GridGame.PgOnlineGameManager.LaunchGame
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execLaunchGame_Parms
{
	unsigned long                                      bForceHardLoad : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIgnoreChapterPoints : 1;                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgOnlineGameManager.InitGRI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineGameManager_execInitGRI_Parms
{
};

// Function GridGame.PgOnlineLeaderboard.DebugLog
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execDebugLog_Parms
{
	class UOnlineStatsRead*                            Read;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.AddDestroyOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventAddDestroyOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.ClearDestroyOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventClearDestroyOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UPgOnlineLeaderboard_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.AddStartOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventAddStartOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.ClearStartOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventClearStartOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.OnStartOnlineGameComplete
// [0x00120000] 
struct UPgOnlineLeaderboard_execOnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.AddCreateOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventAddCreateOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.ClearCreateOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventClearCreateOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.OnCreateOnlineGameComplete
// [0x00120000] 
struct UPgOnlineLeaderboard_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.ClearReadFriendsCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventClearReadFriendsCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.AddReadFriendsCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventAddReadFriendsCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.ClearReadOnlineStatsCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventClearReadOnlineStatsCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.AddReadOnlineStatsCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventAddReadOnlineStatsCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.DoLeaderboardFriendRead
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLeaderboard_eventDoLeaderboardFriendRead_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LocalUserIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLeaderboard.OnReadFriendsComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.OnUpdateLocalLbStatsComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execOnUpdateLocalLbStatsComplete_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.OnReadLeaderboardComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execOnReadLeaderboardComplete_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.OnReadFriendLeaderboardComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execOnReadFriendLeaderboardComplete_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.UpdateLocalLbRating
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execUpdateLocalLbRating_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.GetReaderId
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execGetReaderId_Parms
{
	struct FString                                     ReaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLeaderboard.GetWriterClass
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execGetWriterClass_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLeaderboard.GetReaderClass
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execGetReaderClass_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLeaderboard.FlushLeaderboardStats
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineLeaderboard_execFlushLeaderboardStats_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.EndLeaderBoardSession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execEndLeaderBoardSession_Parms
{
};

// Function GridGame.PgOnlineLeaderboard.StartLeaderBoardSession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execStartLeaderBoardSession_Parms
{
};

// Function GridGame.PgOnlineLeaderboard.OnDestroyLBGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execOnDestroyLBGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.OnStartLBGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execOnStartLBGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.OnCreateLBGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execOnCreateLBGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.UpdateLBviaLocalData
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineLeaderboard_execUpdateLBviaLocalData_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.ClearLocalStats
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineLeaderboard_execClearLocalStats_Parms
{
};

// Function GridGame.PgOnlineLeaderboard.LbReadNearMe
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineLeaderboard_execLbReadNearMe_Parms
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Num;                                              		// 0x000C (0x0004) [0x0000000000000890]              ( CPF_OptionalParm | CPF_Parm | CPF_CoerceParm )
};

// Function GridGame.PgOnlineLeaderboard.LbReadRange
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineLeaderboard_execLbReadRange_Parms
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Start;                                            		// 0x000C (0x0004) [0x0000000000000890]              ( CPF_OptionalParm | CPF_Parm | CPF_CoerceParm )
	int                                                Num;                                              		// 0x0010 (0x0004) [0x0000000000000890]              ( CPF_OptionalParm | CPF_Parm | CPF_CoerceParm )
};

// Function GridGame.PgOnlineLeaderboard.LbReadFriends
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineLeaderboard_execLbReadFriends_Parms
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.LbRead
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineLeaderboard_execLbRead_Parms
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.UpdateXPLeaderboard
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execUpdateXPLeaderboard_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLeaderboard.UpdateLocalPlayerStats
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execUpdateLocalPlayerStats_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FLeaderboardStatData                        ReturnValue;                                      		// 0x0008 (0x0028) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLeaderboard.UpdateLocalLeaderboardStats
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execUpdateLocalLeaderboardStats_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.FixupLeaderboardStats
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execFixupLeaderboardStats_Parms
{
};

// Function GridGame.PgOnlineLeaderboard.UpdateAllLocalLeaderboardStats
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execUpdateAllLocalLeaderboardStats_Parms
{
};

// Function GridGame.PgOnlineLeaderboard.FinishRead
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execFinishRead_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.GetLeaderBoardReadData
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execGetLeaderBoardReadData_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLeaderboard.ReadNearPlayer
// [0x00024400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execReadNearPlayer_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Num;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LocalUserIndex;                                   		// 0x0008 (0x0004) [0x0000000000000890]              ( CPF_OptionalParm | CPF_Parm | CPF_CoerceParm )
};

// Function GridGame.PgOnlineLeaderboard.ReadRange
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execReadRange_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Start;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Num;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboard.ReadFriends
// [0x00024400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execReadFriends_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LocalUserIndex;                                   		// 0x0004 (0x0004) [0x0000000000000890]              ( CPF_OptionalParm | CPF_Parm | CPF_CoerceParm )
};

// Function GridGame.PgOnlineLeaderboard.ReadPlayersEx
// [0x00420400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execReadPlayersEx_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      playerIds;                                        		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLeaderboard.ReadPlayers
// [0x00024400] ( FUNC_Native )
struct UPgOnlineLeaderboard_execReadPlayers_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      onlyLocalPlayer : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgOnlinePlayerList.DisplayDebug
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPgOnlinePlayerList_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FontHeight;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              YPos;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgOnlinePlayerList.DebugListPlayers
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlinePlayerList_execDebugListPlayers_Parms
{
};

// Function GridGame.PgOnlinePlayerList.NotifyPlayerUpdated
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execNotifyPlayerUpdated_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlinePlayerList.SetOnPlayerUpdatedDelegate
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execSetOnPlayerUpdatedDelegate_Parms
{
	struct FScriptDelegate                             UpdatedDelegate;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlinePlayerList.OnPlayerUpdated
// [0x00120000] 
struct UPgOnlinePlayerList_execOnPlayerUpdated_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlinePlayerList.IsEveryoneReady
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execIsEveryoneReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetAvgPlayerSkill
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetAvgPlayerSkill_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.SetClientsToState
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execSetClientsToState_Parms
{
	unsigned char                                      eState;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlinePlayerList.KickPlayer
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execKickPlayer_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.IsLocalPlayer
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execIsLocalPlayer_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.HasPlayer
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execHasPlayer_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetHost
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetHost_Parms
{
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetLocalPlayer
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetLocalPlayer_Parms
{
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetExPlayerByID
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetExPlayerByID_Parms
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetPlayerByID
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetPlayerByID_Parms
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetPlayer
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetPlayer_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetAIPlayers
// [0x00420400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetAIPlayers_Parms
{
	TArray< class APgPlayerReplicationInfo* >          Bots;                                             		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlinePlayerList.GetHumanPlayers
// [0x00420400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetHumanPlayers_Parms
{
	TArray< class APgPlayerReplicationInfo* >          Humans;                                           		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlinePlayerList.GetPlayerAt
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetPlayerAt_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetNumAIPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetNumAIPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetNumHumanPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetNumHumanPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlinePlayerList.GetNumPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlinePlayerList_execGetNumPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.AddEndOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddEndOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearEndOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearEndOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnEndOnlineGameComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddStartOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddStartOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearStartOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearStartOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnStartOnlineGameComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddGameInviteAcceptedDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddGameInviteAcceptedDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearGameInviteAcceptedDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearGameInviteAcceptedDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnGameInviteAccepted
// [0x00120000] 
struct UPgOnlineSessionManager_execOnGameInviteAccepted_Parms
{
	class UOnlineGameSettings*                         Settings;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddJoinOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddJoinOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearJoinOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearJoinOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnJoinOnlineGameComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnJoinOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnCancelFindOnlineGamesComplete_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddFindOnlineGamesCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddFindOnlineGamesCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearFindOnlineGamesCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearFindOnlineGamesCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnFindOnlineGamesComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddDestroyOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddDestroyOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearDestroyOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearDestroyOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddUpdateOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddUpdateOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearUpdateOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearUpdateOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnUpdateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddCreateOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddCreateOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearCreateOnlineGameCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearCreateOnlineGameCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnCreateOnlineGameComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.ClearReadFriendsCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearReadFriendsCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.AddReadFriendsCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddReadFriendsCompleteDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.DoFriendRead
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventDoFriendRead_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LocalUserIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.ClearServiceQosDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearServiceQosDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ServiceQosDelegate;                               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.AddServiceQosDelegate
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddServiceQosDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ServiceQosDelegate;                               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.OnServiceQosCheckComplete
// [0x00120000] 
struct UPgOnlineSessionManager_execOnServiceQosCheckComplete_Parms
{
};

// Function GridGame.PgOnlineSessionManager._GetPlayerNickname
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_event_GetPlayerNickname_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.EndQuickmatch
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execEndQuickmatch_Parms
{
};

// Function GridGame.PgOnlineSessionManager.AutoHostCompleted
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execAutoHostCompleted_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AutoJoinCompleted
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execAutoJoinCompleted_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.GetAutoJoinSessionIndex
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execGetAutoJoinSessionIndex_Parms
{
	class UPgOnlineGameSearch*                         Search;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.GetNumValidSearchResults
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execGetNumValidSearchResults_Parms
{
	class UPgOnlineGameSearch*                         Search;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.IsValidSearchResult
// [0x00440401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execIsValidSearchResult_Parms
{
	struct FOnlineGameSearchResult                     SearchResult;                                     		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.GetNextMatchSkillRatings
// [0x00440401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execGetNextMatchSkillRatings_Parms
{
	int                                                MinSkill;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                MaxSkill;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgOnlineSessionManager.ShouldRetrySkillMatching
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execShouldRetrySkillMatching_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.ResetSkillMatchingAttempts
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgOnlineSessionManager_execResetSkillMatchingAttempts_Parms
{
};

// Function GridGame.PgOnlineSessionManager.OnDestroyLeaderBoardGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execOnDestroyLeaderBoardGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.OnEndLeaderBoardGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execOnEndLeaderBoardGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.OnCreateLBGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execOnCreateLBGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.EndLeaderBoardSession
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execEndLeaderBoardSession_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.StartLeaderBoardSession
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execStartLeaderBoardSession_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.Debug_OnStartLeaderBoardGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execDebug_OnStartLeaderBoardGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.Debug_OnCreateLeaderBoardGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execDebug_OnCreateLeaderBoardGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.DebugUpdateLeaderBoard
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugUpdateLeaderBoard_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.DebugCreateLeaderBoardSession
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugCreateLeaderBoardSession_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.ToggleNATFilter
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execToggleNATFilter_Parms
{
};

// Function GridGame.PgOnlineSessionManager.StopAutoMatch
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execStopAutoMatch_Parms
{
};

// Function GridGame.PgOnlineSessionManager.StartAutoMatch
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execStartAutoMatch_Parms
{
	struct FString                                     Mode;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Map;                                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      autoQuit : 1;                                     		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                matchTime;                                        		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.MP_JoinGame
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execMP_JoinGame_Parms
{
	int                                                nSession;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.MP_StartGame
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execMP_StartGame_Parms
{
	struct FString                                     Mode;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Map;                                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ClearAutoLoginDelegates
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventClearAutoLoginDelegates_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AddAutoLoginDelegates
// [0x00020802] ( FUNC_Event )
struct UPgOnlineSessionManager_eventAddAutoLoginDelegates_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.AutoSignInDelegate
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execAutoSignInDelegate_Parms
{
	unsigned char                                      netStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.ShowFriendGames
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execShowFriendGames_Parms
{
};

// Function GridGame.PgOnlineSessionManager.DebugCreateParty
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugCreateParty_Parms
{
};

// Function GridGame.PgOnlineSessionManager.StartQuickMatch
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execStartQuickMatch_Parms
{
};

// Function GridGame.PgOnlineSessionManager.StartStoryMode
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execStartStoryMode_Parms
{
};

// Function GridGame.PgOnlineSessionManager.StartMPMode
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execStartMPMode_Parms
{
};

// Function GridGame.PgOnlineSessionManager.DebugLeaveAllSessions
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugLeaveAllSessions_Parms
{
};

// Function GridGame.PgOnlineSessionManager.DebugStartMap
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugStartMap_Parms
{
	struct FString                                     Mode;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Map;                                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ignoreChapterPoints : 1;                          		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.DebugAccessGameGrid
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugAccessGameGrid_Parms
{
	int                                                modeIndex;                                        		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
	int                                                mapIndex;                                         		// 0x0004 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
	struct FString                                     CompletionMap;                                    		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.DebugDestroy
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugDestroy_Parms
{
};

// Function GridGame.PgOnlineSessionManager.DebugLeave
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugLeave_Parms
{
};

// Function GridGame.PgOnlineSessionManager.DebugJoin
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugJoin_Parms
{
	struct FString                                     Address;                                          		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.DebugCreate
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execDebugCreate_Parms
{
	struct FString                                     Map;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.ShowInvites
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineSessionManager_execShowInvites_Parms
{
};

// Function GridGame.PgOnlineSessionManager.LeaveMP
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execLeaveMP_Parms
{
};

// Function GridGame.PgOnlineSessionManager.IsBannedBy
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execIsBannedBy_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.AddBannedBy
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execAddBannedBy_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.BannedBySession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execBannedBySession_Parms
{
};

// Function GridGame.PgOnlineSessionManager.IsBanned
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execIsBanned_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.AddBannedId
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execAddBannedId_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.Reset
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execReset_Parms
{
};

// Function GridGame.PgOnlineSessionManager.CancelQuickmatch
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execCancelQuickmatch_Parms
{
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnDestroyOnlineGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnEndOnlineGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.LeaveGameSession
// [0x00024400] ( FUNC_Native )
struct UPgOnlineSessionManager_execLeaveGameSession_Parms
{
	unsigned long                                      shouldSave : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnJoinOnlineGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnJoinOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.JoinSession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execJoinSession_Parms
{
	int                                                serverSearchResultsIndex;                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnCancelFindOnlineGamesComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnCancelFindOnlineGamesComplete_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.CancelFindSession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execCancelFindSession_Parms
{
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnReadFriendsComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnFindFriendGamesComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnFindFriendGamesComplete_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.FindFriendSessions
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execFindFriendSessions_Parms
{
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnFindOnlineGamesComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnFindOnlineGamesComplete_Parms
{
	unsigned long                                      successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.RetryFindSession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execRetryFindSession_Parms
{
};

// Function GridGame.PgOnlineSessionManager.FindSession
// [0x00024400] ( FUNC_Native )
struct UPgOnlineSessionManager_execFindSession_Parms
{
	unsigned char                                      gameMode;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                minPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxPlayers;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DLCFlags;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      AutoJoin : 1;                                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.UpdateClientSession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execUpdateClientSession_Parms
{
};

// Function GridGame.PgOnlineSessionManager.UpdateSession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execUpdateSession_Parms
{
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnCreateOnlineGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.CreateSession
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execCreateSession_Parms
{
	unsigned char                                      gameMode;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Map;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isRanked : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      IsPublic : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                numPlayerSlots;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineSessionManager.PgOnlineSessionManager_OnQosCheckComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execPgOnlineSessionManager_OnQosCheckComplete_Parms
{
};

// Function GridGame.PgOnlineSessionManager.StartSeamlessMP
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execStartSeamlessMP_Parms
{
	unsigned char                                      modeIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                mapIndex;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CompletionMap;                                    		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineSessionManager.CreateSeamlessGame
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execCreateSeamlessGame_Parms
{
};

// Function GridGame.PgOnlineSessionManager.CreateLobby
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execCreateLobby_Parms
{
};

// Function GridGame.PgOnlineSessionManager.CanPlayOnlineSeamless
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execCanPlayOnlineSeamless_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.IsAutoHosting
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execIsAutoHosting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.IsAutoJoining
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execIsAutoJoining_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.IsQuickmatch
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execIsQuickmatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.IsStrictNAT
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execIsStrictNAT_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineSessionManager.GetNewPlayerState
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSessionManager_execGetNewPlayerState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSearch.GetDLCFlags
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execGetDLCFlags_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSearch.SetDLCFlags
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execSetDLCFlags_Parms
{
	int                                                DLCFlags;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSearch.GetMaxSkillRating
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execGetMaxSkillRating_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSearch.SetMaxSkillRating
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execSetMaxSkillRating_Parms
{
	int                                                maxRating;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSearch.GetMinSkillRating
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execGetMinSkillRating_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSearch.SetMinSkillRating
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execSetMinSkillRating_Parms
{
	int                                                minRating;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSearch.GetMaxNumPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execGetMaxNumPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSearch.SetMaxNumPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execSetMaxNumPlayers_Parms
{
	int                                                N;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSearch.GetMinNumPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execGetMinNumPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSearch.SetMinNumPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execSetMinNumPlayers_Parms
{
	int                                                N;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSearch.GetGameMode
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execGetGameMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSearch.SetGameMode
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSearch_execSetGameMode_Parms
{
	unsigned char                                      gameMode;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetOnlineGameState
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetOnlineGameState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetOnlineGameState
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetOnlineGameState_Parms
{
	unsigned char                                      S;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetAvgPlayerRating
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetAvgPlayerRating_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetAvgPlayerRating
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetAvgPlayerRating_Parms
{
	int                                                avgRating;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetTimeCurrent
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetTimeCurrent_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetTimeCurrent
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetTimeCurrent_Parms
{
	int                                                Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetTimeLimit
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetTimeLimit_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetTimeLimit
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetTimeLimit_Parms
{
	int                                                Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetDLCFlags
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetDLCFlags_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetDLCFlags
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetDLCFlags_Parms
{
	int                                                DLCFlags;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetMap
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetMap_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetMap
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetMap_Parms
{
	int                                                Map;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetGameMode
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetGameMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetGameMode
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetGameMode_Parms
{
	unsigned char                                      gameMode;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetNumPlayerSlots
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetNumPlayerSlots_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetNumPlayerSlots
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetNumPlayerSlots_Parms
{
	int                                                N;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetNumPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetNumPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetNumPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetNumPlayers_Parms
{
	int                                                N;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetIsPublic
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetIsPublic_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetIsPublic
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetIsPublic_Parms
{
	unsigned long                                      B : 1;                                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetIsRanked
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetIsRanked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineGameSettings.SetIsRanked
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetIsRanked_Parms
{
	unsigned long                                      B : 1;                                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineGameSettings.GetHostName
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execGetHostName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameSettings.SetHostName
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execSetHostName_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineGameSettings.Copy
// [0x00020400] ( FUNC_Native )
struct UPgOnlineGameSettings_execCopy_Parms
{
	class UPgOnlineGameSettings*                       GameSettings;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.GoOnline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgOnlineLoginManager_execGoOnline_Parms
{
};

// Function GridGame.PgOnlineLoginManager.SetLocalPlayerControllerId
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UPgOnlineLoginManager_eventSetLocalPlayerControllerId_Parms
{
	int                                                NewControllerId;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPlayerController*                      LocalPC;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             Player;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgOnlineLoginManager._ShowContentMarketplaceUI
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLoginManager_event_ShowContentMarketplaceUI_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                OfferId;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLoginManager.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
struct UPgOnlineLoginManager_execShowContentMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                OfferId;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLoginManager.GetMainControllerId
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execGetMainControllerId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLoginManager.SetMainControllerId
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execSetMainControllerId_Parms
{
	int                                                loginControllerId;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.HanldeLoginStatusChange
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execHanldeLoginStatusChange_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.LoginAttempt
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execLoginAttempt_Parms
{
	unsigned char                                      loginControllerId;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      minReqLoginStatus;                                		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager._GetPlayerNickname
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLoginManager_event_GetPlayerNickname_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLoginManager.GetPlayerNickname
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgOnlineLoginManager.GetLoginStatus
// [0x00024400] ( FUNC_Native )
struct UPgOnlineLoginManager_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      useCache : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLoginManager.GetLocalPlayerAt
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execGetLocalPlayerAt_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLoginManager.GetNumLocalPlayers
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execGetNumLocalPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLoginManager.OnLoginAttemptComplete
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginAttemptComplete_Parms
{
	unsigned char                                      loginAttemptResult;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ControllerId;                                     		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.Cleanup
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execCleanup_Parms
{
};

// Function GridGame.PgOnlineLoginManager.Init
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execInit_Parms
{
};

// Function GridGame.PgOnlineLoginManager.ClearPlayerInterfaceLoginDelegates
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLoginManager_eventClearPlayerInterfaceLoginDelegates_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.AddPlayerInterfaceLoginDelegates
// [0x00020802] ( FUNC_Event )
struct UPgOnlineLoginManager_eventAddPlayerInterfaceLoginDelegates_Parms
{
	class UOnlineSubsystem*                            oss;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.ProfileLoaded
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execProfileLoaded_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.NeedProfileReload
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execNeedProfileReload_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineLoginManager.NotifyStorageDeviceChanged
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execNotifyStorageDeviceChanged_Parms
{
};

// Function GridGame.PgOnlineLoginManager.OnPartyChange
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnPartyChange_Parms
{
};

// Function GridGame.PgOnlineLoginManager.OnLoginCancelled
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginCancelled_Parms
{
};

// Function GridGame.PgOnlineLoginManager.OnLoginStatusChangeP6
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginStatusChangeP6_Parms
{
	unsigned char                                      netStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnLoginStatusChangeP5
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginStatusChangeP5_Parms
{
	unsigned char                                      netStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnLoginStatusChangeP4
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginStatusChangeP4_Parms
{
	unsigned char                                      netStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnLoginStatusChangeP3
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginStatusChangeP3_Parms
{
	unsigned char                                      netStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnLoginStatusChangeP2
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginStatusChangeP2_Parms
{
	unsigned char                                      netStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnLoginStatusChangeP1
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginStatusChangeP1_Parms
{
	unsigned char                                      netStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnLoginStatusChangeP0
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginStatusChangeP0_Parms
{
	unsigned char                                      netStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnLoginChange
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnConnectionStatusChange
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnLinkStatusChanged
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnLinkStatusChanged_Parms
{
	unsigned long                                      bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLoginManager.OnExternalUIChanged
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLoginManager_execOnExternalUIChanged_Parms
{
	unsigned long                                      bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboardWrite.SetQWordStat
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_execSetQWordStat_Parms
{
	int                                                StatId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FQWord                                      Value;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboardWrite.UpdateFromLocalData
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_execUpdateFromLocalData_Parms
{
};

// Function GridGame.PgOnlineLeaderboardWrite.UpdateFromPRI
// [0x00020800] ( FUNC_Event )
struct UPgOnlineLeaderboardWrite_eventUpdateFromPRI_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboardWrite_ELO.UpdateFromLocalData
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_ELO_execUpdateFromLocalData_Parms
{
};

// Function GridGame.PgOnlineLeaderboardWrite_ELO.UpdateFromPRI
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_ELO_execUpdateFromPRI_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboardWrite_EXP.UpdateFromLocalData
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_EXP_execUpdateFromLocalData_Parms
{
};

// Function GridGame.PgOnlineLeaderboardWrite_EXP.UpdateFromPRI
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_EXP_execUpdateFromPRI_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboardWrite_GameModeBR.UpdateFromLocalData
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_GameModeBR_execUpdateFromLocalData_Parms
{
};

// Function GridGame.PgOnlineLeaderboardWrite_GameModeBR.UpdateFromPRI
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_GameModeBR_execUpdateFromPRI_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboardWrite_GameModeDM.UpdateFromLocalData
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_GameModeDM_execUpdateFromLocalData_Parms
{
};

// Function GridGame.PgOnlineLeaderboardWrite_GameModeDM.UpdateFromPRI
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_GameModeDM_execUpdateFromPRI_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboardWrite_GameModePM.UpdateFromLocalData
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_GameModePM_execUpdateFromLocalData_Parms
{
};

// Function GridGame.PgOnlineLeaderboardWrite_GameModePM.UpdateFromPRI
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_GameModePM_execUpdateFromPRI_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineLeaderboardWrite_GameModeTDM.UpdateFromLocalData
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_GameModeTDM_execUpdateFromLocalData_Parms
{
};

// Function GridGame.PgOnlineLeaderboardWrite_GameModeTDM.UpdateFromPRI
// [0x00020400] ( FUNC_Native )
struct UPgOnlineLeaderboardWrite_GameModeTDM_execUpdateFromPRI_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgOnlineEnumerations.GetModeUIProfile
// [0x00422400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetModeUIProfile_Parms
{
	unsigned char                                      modeIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ProfileName;                                      		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetModeRuleset
// [0x00422400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetModeRuleset_Parms
{
	unsigned char                                      modeIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       rulesetName;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetModeTitle
// [0x00422400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetModeTitle_Parms
{
	unsigned char                                      modeIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     modeTitle;                                        		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetModeName
// [0x00422400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetModeName_Parms
{
	unsigned char                                      modeIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       modeName;                                         		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetModeIndex
// [0x00022400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetModeIndex_Parms
{
	struct FName                                       modeName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetNumModes
// [0x00022400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetNumModes_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetMapForMode
// [0x00022400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetMapForMode_Parms
{
	int                                                mapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      modeIndex;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.IsModeSupportedByMap
// [0x00022400] ( FUNC_Native )
struct UPgOnlineEnumerations_execIsModeSupportedByMap_Parms
{
	int                                                mapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      modeIndex;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetMapName
// [0x00422400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetMapName_Parms
{
	int                                                mapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       MapName;                                          		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetMapTitle
// [0x00422400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetMapTitle_Parms
{
	int                                                mapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     mapTitle;                                         		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetMapFilename
// [0x00422400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetMapFilename_Parms
{
	int                                                mapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.MapFilenametoIndex
// [0x00022400] ( FUNC_Native )
struct UPgOnlineEnumerations_execMapFilenametoIndex_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetNumMaps
// [0x00022400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetNumMaps_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetUIProfileIndexByName
// [0x00422400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetUIProfileIndexByName_Parms
{
	struct FString                                     ProfileName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ProfileIndex;                                     		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOnlineEnumerations.GetNumUIProfiles
// [0x00022400] ( FUNC_Native )
struct UPgOnlineEnumerations_execGetNumUIProfiles_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.SetGameSpeedNative
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execSetGameSpeedNative_Parms
{
	float                                              T;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.SpawnPlayerController
// [0x00020002] 
struct APgGameInfo_execSpawnPlayerController_Parms
{
	struct FVector                                     SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.SetDebugPlayerStart
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execSetDebugPlayerStart_Parms
{
	class APlayerStart*                                Start;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.LogSettings
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execLogSettings_Parms
{
};

// Function GridGame.PgGameInfo._ChangeName
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_ChangeName_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     S;                                                		// 0x0004 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	unsigned long                                      bNameChange : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgGameInfo._CheckForSentinelRun
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_CheckForSentinelRun_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.RemovePlayerFromCollisionTeams
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execRemovePlayerFromCollisionTeams_Parms
{
	class APgPlayerReplicationInfo*                    PlayerRepInfo;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.AddPlayerToCollisionTeams
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execAddPlayerToCollisionTeams_Parms
{
	class APgPlayerReplicationInfo*                    PlayerRepInfo;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.UpdateResetRelatedStats
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execUpdateResetRelatedStats_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.UpdateDeathRelatedStats
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execUpdateDeathRelatedStats_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.AwardXPForKill
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execAwardXPForKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo._HandleSeamlessTravelPlayer
// [0x00440803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_HandleSeamlessTravelPlayer_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgGameInfo.HandleSeamlessTravelPlayer
// [0x00420C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventHandleSeamlessTravelPlayer_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgGameInfo.AllowCheats
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execAllowCheats_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.GetObjective
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execGetObjective_Parms
{
	struct FName                                       ObjName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TeamIndex;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class APgObjective*                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.IsObjectiveInList
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execIsObjectiveInList_Parms
{
	class APgObjective*                                Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.RemoveObjective
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execRemoveObjective_Parms
{
	class APgObjective*                                Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.AddObjective
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execAddObjective_Parms
{
	class APgObjective*                                Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.GetPreferredEnemyTeam
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execGetPreferredEnemyTeam_Parms
{
	unsigned char                                      TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.ChangeTeam
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execChangeTeam_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewTeam;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      CreateNewTeam : 1;                                		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.PickTeam
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execPickTeam_Parms
{
	unsigned char                                      Current;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 C;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.CreateTeams
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execCreateTeams_Parms
{
};

// Function GridGame.PgGameInfo._GetNumPlayers
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_GetNumPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.AtCapacity
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execAtCapacity_Parms
{
	unsigned long                                      bSpectator : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.GetFirstAliveAndWellPlayer
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execGetFirstAliveAndWellPlayer_Parms
{
	class APawn*                                       excludingPawn;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.NumAliveAndWellPlayers
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execNumAliveAndWellPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo._Killed
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_Killed_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.Killed
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo._ReduceDamage
// [0x00440803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_ReduceDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class APawn*                                       injured;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.ReduceDamage
// [0x00420400] ( FUNC_Native )
struct APgGameInfo_execReduceDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class APawn*                                       injured;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.ScaleDamage
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execScaleDamage_Parms
{
	class APgPlayerController*                         damageTaker;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerController*                         InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo._KickBan
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_KickBan_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.KickBan
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execKickBan_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo._Kick
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_Kick_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.ScoreKill
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Victim;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.ScoreObjective
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execScoreObjective_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.CheckScore
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.UnregisterTeamBase
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execUnregisterTeamBase_Parms
{
	class APgTeamBase*                                 TeamBase;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.RegisterTeamBase
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execRegisterTeamBase_Parms
{
	class APgTeamBase*                                 TeamBase;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.GetGameMgr
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execGetGameMgr_Parms
{
	class UClass*                                      requestMgr;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AInfo*                                       ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.GetDefaultPlayerArchetype
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execGetDefaultPlayerArchetype_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo._GetDefaultPlayerClass
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_GetDefaultPlayerClass_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.GetDefaultPlayerClass
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execGetDefaultPlayerClass_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.LoadArchetypePackages
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APgGameInfo_execLoadArchetypePackages_Parms
{
};

// Function GridGame.PgGameInfo.SpawnDefaultVehicleFor
// [0x00020C01] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct APgGameInfo_eventSpawnDefaultVehicleFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgVehicle*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo._SpawnDefaultPawnFor
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_SpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.SpawnDefaultPawnFor
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.DisableReferencingScrubbers
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execDisableReferencingScrubbers_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.ResetLastPlayerStarts
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execResetLastPlayerStarts_Parms
{
};

// Function GridGame.PgGameInfo.AddLastPlayerStart
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execAddLastPlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            Start;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.FindLastPlayerStart
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execFindLastPlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo._RatePlayerStart
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_RatePlayerStart_Parms
{
	class APlayerStart*                                Start;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.RatePlayerStart
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execRatePlayerStart_Parms
{
	class APlayerStart*                                Start;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo._FindPlayerStart
// [0x00044803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_FindPlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InTeam;                                           		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     IncomingName;                                     		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.FindPlayerStart
// [0x00024400] ( FUNC_Native )
struct APgGameInfo_execFindPlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InTeam;                                           		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     IncomingName;                                     		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.ShowLoadingScreen
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventShowLoadingScreen_Parms
{
	unsigned long                                      show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgGameInfo.ClearScreenStack
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventClearScreenStack_Parms
{
	int                                                eStack;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.ActivateGFxScreen
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventActivateGFxScreen_Parms
{
	struct FString                                     szInstanceName;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eStack;                                           		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     szHostInstance;                                   		// 0x0014 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.SendEventBoxMessage
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventSendEventBoxMessage_Parms
{
	unsigned char                                      eType;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                idPlayer1;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                idPlayer2;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     szName;                                           		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.OpenPgHud
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventOpenPgHud_Parms
{
	unsigned long                                      bOpen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgGameInfo.ShowPgHud
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventShowPgHud_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgGameInfo._NotifyArbitratedMatchEnd
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_NotifyArbitratedMatchEnd_Parms
{
};

// Function GridGame.PgGameInfo._EndOnlineGame
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_EndOnlineGame_Parms
{
};

// Function GridGame.PgGameInfo._WriteOnlinePlayerScores
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_WriteOnlinePlayerScores_Parms
{
};

// Function GridGame.PgGameInfo._WriteOnlineStats
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_WriteOnlineStats_Parms
{
};

// Function GridGame.PgGameInfo.UpdatePlayerHitStreak
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execUpdatePlayerHitStreak_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.UpdatePostMatchPlayerStats
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventUpdatePostMatchPlayerStats_Parms
{
};

// Function GridGame.PgGameInfo.SaveUserData
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventSaveUserData_Parms
{
};

// Function GridGame.PgGameInfo.FlushOnlineStats
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventFlushOnlineStats_Parms
{
};

// Function GridGame.PgGameInfo.PerformEndGameHandling
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execPerformEndGameHandling_Parms
{
};

// Function GridGame.PgGameInfo.ClearCheckpointURL
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execClearCheckpointURL_Parms
{
};

// Function GridGame.PgGameInfo.BeginLobbyCountdown
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execBeginLobbyCountdown_Parms
{
};

// Function GridGame.PgGameInfo.StartHumans
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execStartHumans_Parms
{
};

// Function GridGame.PgGameInfo.EnableSaveLoad
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execEnableSaveLoad_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgGameInfo.StreamLevelWait
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execStreamLevelWait_Parms
{
};

// Function GridGame.PgGameInfo.LoadPlayerData
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execLoadPlayerData_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.UsesCheckpoints
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execUsesCheckpoints_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.FindCoopPlayerStart
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execFindCoopPlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo._RestartPlayer
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_RestartPlayer_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.RestartPlayer
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execRestartPlayer_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo._ResetLevel
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_ResetLevel_Parms
{
};

// Function GridGame.PgGameInfo.ResetLevel
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execResetLevel_Parms
{
};

// Function GridGame.PgGameInfo._GameEnding
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_GameEnding_Parms
{
};

// Function GridGame.PgGameInfo.GameEnding
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventGameEnding_Parms
{
};

// Function GridGame.PgGameInfo._EndGame
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_EndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.EndGame
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo._StartMatch
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_StartMatch_Parms
{
};

// Function GridGame.PgGameInfo.StartMatch
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execStartMatch_Parms
{
};

// Function GridGame.PgGameInfo.PreExit
// [0x00020802] ( FUNC_Event )
struct APgGameInfo_eventPreExit_Parms
{
};

// Function GridGame.PgGameInfo.EndLogging
// [0x00020002] 
struct APgGameInfo_execEndLogging_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.StartLogging
// [0x00024002] 
struct APgGameInfo_execStartLogging_Parms
{
	struct FString                                     remoteIP;                                         		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                Port;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgGameInfo.PostBeginPlay
// [0x00020002] 
struct APgGameInfo_execPostBeginPlay_Parms
{
};

// Function GridGame.PgGameInfo.ForceGameplayEventsLogging
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execForceGameplayEventsLogging_Parms
{
	unsigned long                                      Force : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgGameInfo.ShouldLogGameplayEvents
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execShouldLogGameplayEvents_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.GetDefaultOnlinePlayerState
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execGetDefaultOnlinePlayerState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.PostCommitMapChange
// [0x00020802] ( FUNC_Event )
struct APgGameInfo_eventPostCommitMapChange_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgGameInfo.PostLogout
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execPostLogout_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo._Logout
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_Logout_Parms
{
	class AController*                                 Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.Logout
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventLogout_Parms
{
	class AController*                                 Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo._PostLogin
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_PostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo.PostLogin
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameInfo._Login
// [0x00440803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_Login_Parms
{
	struct FString                                     Portal;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                UniqueId;                                         		// 0x0018 (0x002C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0044 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class APlayerController*                           ReturnValue;                                      		// 0x0050 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.Login
// [0x00420C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventLogin_Parms
{
	struct FString                                     Portal;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                UniqueId;                                         		// 0x0018 (0x002C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0044 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class APlayerController*                           ReturnValue;                                      		// 0x0050 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo._PreLogin
// [0x00440803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_PreLogin_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Address;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x0018 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.PreLogin
// [0x00420C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventPreLogin_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Address;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x0018 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo._InitGameReplicationInfo
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_InitGameReplicationInfo_Parms
{
};

// Function GridGame.PgGameInfo.InitGameReplicationInfo
// [0x00020400] ( FUNC_Native )
struct APgGameInfo_execInitGameReplicationInfo_Parms
{
};

// Function GridGame.PgGameInfo._InitGame
// [0x00440803] ( FUNC_Final | FUNC_Event )
struct APgGameInfo_event_InitGame_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.InitGame
// [0x00420C00] ( FUNC_Event | FUNC_Native )
struct APgGameInfo_eventInitGame_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameInfo.SetGameType
// [0x00022802] ( FUNC_Event )
struct APgGameInfo_eventSetGameType_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Portal;                                           		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameInfo.GetGameInfo
// [0x00022400] ( FUNC_Native )
struct APgGameInfo_execGetGameInfo_Parms
{
	class APgGameInfo*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPLobbyGameInfo.AllowPausing
// [0x00024002] 
struct APgMPLobbyGameInfo_execAllowPausing_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.LogSettings
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execLogSettings_Parms
{
};

// Function GridGame.PgMPGameInfo.OnEndGameDelayTimeOut
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execOnEndGameDelayTimeOut_Parms
{
};

// Function GridGame.PgMPGameInfo.OnStartGameDelayTimeOut
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execOnStartGameDelayTimeOut_Parms
{
};

// Function GridGame.PgMPGameInfo._Timer
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgMPGameInfo_event_Timer_Parms
{
};

// Function GridGame.PgMPGameInfo.Timer
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgMPGameInfo_eventTimer_Parms
{
};

// Function GridGame.PgMPGameInfo.AllowPausing
// [0x00024400] ( FUNC_Native )
struct APgMPGameInfo_execAllowPausing_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.SwitchSides
// [0x00080400] ( FUNC_Native )
struct APgMPGameInfo_execSwitchSides_Parms
{
};

// Function GridGame.PgMPGameInfo.ResetStats
// [0x00080400] ( FUNC_Native )
struct APgMPGameInfo_execResetStats_Parms
{
	unsigned char                                      Reason;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.InitNextRound
// [0x00080400] ( FUNC_Native )
struct APgMPGameInfo_execInitNextRound_Parms
{
};

// Function GridGame.PgMPGameInfo.InitRounds
// [0x00080400] ( FUNC_Native )
struct APgMPGameInfo_execInitRounds_Parms
{
};

// Function GridGame.PgMPGameInfo.CanStartMatch
// [0x00080400] ( FUNC_Native )
struct APgMPGameInfo_execCanStartMatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.GetRandomBotName
// [0x00024400] ( FUNC_Native )
struct APgMPGameInfo_execGetRandomBotName_Parms
{
	unsigned long                                      Reset : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgMPGameInfo.RemoveBot
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execRemoveBot_Parms
{
};

// Function GridGame.PgMPGameInfo.RemoveBots
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execRemoveBots_Parms
{
	int                                                Num;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.NumExcessBots
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execNumExcessBots_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.TooManyBots
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execTooManyBots_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.SpawnBot
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execSpawnBot_Parms
{
	class AActor*                                      BotArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.AddBots
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execAddBots_Parms
{
	int                                                Num;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.FillBots
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execFillBots_Parms
{
};

// Function GridGame.PgMPGameInfo.UpdateBotCount
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execUpdateBotCount_Parms
{
};

// Function GridGame.PgMPGameInfo.UpdateTeamSpeakers
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execUpdateTeamSpeakers_Parms
{
};

// Function GridGame.PgMPGameInfo.GetPreferredEnemyTeam
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execGetPreferredEnemyTeam_Parms
{
	unsigned char                                      TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.InitDefendingTeam
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execInitDefendingTeam_Parms
{
};

// Function GridGame.PgMPGameInfo.PickTeam
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execPickTeam_Parms
{
	unsigned char                                      Current;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 C;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.FreeColorIndexFrom
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execFreeColorIndexFrom_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.AssignColorIndexTo
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execAssignColorIndexTo_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.UpdateEndGameStats
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execUpdateEndGameStats_Parms
{
};

// Function GridGame.PgMPGameInfo.AwardXPForEndGame
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execAwardXPForEndGame_Parms
{
};

// Function GridGame.PgMPGameInfo.OnFireDelayedKismetEvent
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execOnFireDelayedKismetEvent_Parms
{
};

// Function GridGame.PgMPGameInfo.FireKismetEvent
// [0x00024400] ( FUNC_Native )
struct APgMPGameInfo_execFireKismetEvent_Parms
{
	unsigned char                                      eEvent;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delay;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgMPGameInfo.PickWinner
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execPickWinner_Parms
{
};

// Function GridGame.PgMPGameInfo.Killed
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.ScoreTimeup
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execScoreTimeup_Parms
{
};

// Function GridGame.PgMPGameInfo.ScoreDeath
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execScoreDeath_Parms
{
	class AController*                                 Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.ScoreKill
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Victim;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.ScoreObjective
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execScoreObjective_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.Score
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execScore_Parms
{
	struct FName                                       Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Scorer;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.CheckTimeup
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execCheckTimeup_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.CheckLivesRemaining
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execCheckLivesRemaining_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.CheckScore
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.PlayerCanRestartGame
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execPlayerCanRestartGame_Parms
{
	class APlayerController*                           Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo.EndGame
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgMPGameInfo.EndRound
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execEndRound_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgMPGameInfo.ResetLevel
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execResetLevel_Parms
{
};

// Function GridGame.PgMPGameInfo.DelayedStartMatch
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execDelayedStartMatch_Parms
{
};

// Function GridGame.PgMPGameInfo.StartMatch
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execStartMatch_Parms
{
};

// Function GridGame.PgMPGameInfo.HandleSeamlessTravelPlayer
// [0x00420C00] ( FUNC_Event | FUNC_Native )
struct APgMPGameInfo_eventHandleSeamlessTravelPlayer_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgMPGameInfo.GetDefaultPlayerArchetype
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execGetDefaultPlayerArchetype_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPGameInfo._PostSeamlessTravel
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgMPGameInfo_event_PostSeamlessTravel_Parms
{
};

// Function GridGame.PgMPGameInfo.PostSeamlessTravel
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgMPGameInfo_eventPostSeamlessTravel_Parms
{
};

// Function GridGame.PgMPGameInfo.PostLogout
// [0x00020400] ( FUNC_Native )
struct APgMPGameInfo_execPostLogout_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.Logout
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgMPGameInfo_eventLogout_Parms
{
	class AController*                                 Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.PostLogin
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgMPGameInfo_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPGameInfo.InitGame
// [0x00420C00] ( FUNC_Event | FUNC_Native )
struct APgMPGameInfo_eventInitGame_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgGameReplicationInfo.OnTalkingStateChanged
// [0x00020400] ( FUNC_Native )
struct APgGameReplicationInfo_execOnTalkingStateChanged_Parms
{
	class APgPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameReplicationInfo.InitVoiceTokens
// [0x00020400] ( FUNC_Native )
struct APgGameReplicationInfo_execInitVoiceTokens_Parms
{
};

// Function GridGame.PgGameReplicationInfo.IsLastRound
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execIsLastRound_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.IsRoundBasedGame
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execIsRoundBasedGame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetDefendingTeam
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetDefendingTeam_Parms
{
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetRandomTeam
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetRandomTeam_Parms
{
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetLeastHumanTeam
// [0x00024500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetLeastHumanTeam_Parms
{
	unsigned long                                      AllowTies : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetMostHumanTeam
// [0x00024500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetMostHumanTeam_Parms
{
	unsigned long                                      AllowTies : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetSmallestTeam
// [0x00024500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetSmallestTeam_Parms
{
	unsigned long                                      AllowTies : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetBiggestTeam
// [0x00024500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetBiggestTeam_Parms
{
	unsigned long                                      AllowTies : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetTeamByName
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetTeamByName_Parms
{
	struct FName                                       TeamName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetTeam
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetTeam_Parms
{
	unsigned char                                      TeamID;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.OnSameTeam
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execOnSameTeam_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      B;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.IsTeamGame
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execIsTeamGame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetNumTeams
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execGetNumTeams_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GetWinningPlayer
// [0x00020400] ( FUNC_Native )
struct APgGameReplicationInfo_execGetWinningPlayer_Parms
{
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo.GameInProgress
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execGameInProgress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo._EndGame
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgGameReplicationInfo_event_EndGame_Parms
{
};

// Function GridGame.PgGameReplicationInfo.EndGame
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execEndGame_Parms
{
};

// Function GridGame.PgGameReplicationInfo._SortPRIArray
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgGameReplicationInfo_event_SortPRIArray_Parms
{
};

// Function GridGame.PgGameReplicationInfo.SortPRIArray
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execSortPRIArray_Parms
{
};

// Function GridGame.PgGameReplicationInfo._RemovePRI
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgGameReplicationInfo_event_RemovePRI_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameReplicationInfo.RemovePRI
// [0x00020500] ( FUNC_Native )
struct APgGameReplicationInfo_execRemovePRI_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameReplicationInfo.Timer
// [0x00020902] ( FUNC_Event )
struct APgGameReplicationInfo_eventTimer_Parms
{
};

// Function GridGame.PgGameReplicationInfo._SetTeam
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameReplicationInfo_event_SetTeam_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATeamInfo*                                   TI;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameReplicationInfo._Reset
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgGameReplicationInfo_event_Reset_Parms
{
};

// Function GridGame.PgGameReplicationInfo.Reset
// [0x00020400] ( FUNC_Native )
struct APgGameReplicationInfo_execReset_Parms
{
};

// Function GridGame.PgGameReplicationInfo.GetGRI
// [0x00022400] ( FUNC_Native )
struct APgGameReplicationInfo_execGetGRI_Parms
{
	class APgGameReplicationInfo*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameReplicationInfo._ReplicatedEvent
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgGameReplicationInfo_event_ReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGameReplicationInfo.ReplicatedEvent
// [0x00020D00] ( FUNC_Event | FUNC_Native )
struct APgGameReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.OnStateChanged
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execOnStateChanged_Parms
{
	unsigned char                                      NewState;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      OldState;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo._IsInvalidName
// [0x00020902] ( FUNC_Event )
struct APgPlayerReplicationInfo_event_IsInvalidName_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerReplicationInfo.UpdateHitStreak
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execUpdateHitStreak_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo.AwardSkillPoints
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execAwardSkillPoints_Parms
{
	int                                                nPoints;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.AwardXP
// [0x00024400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execAwardXP_Parms
{
	int                                                nPoints;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nBonus;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo._Reset
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerReplicationInfo_event_Reset_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo.Reset
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execReset_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo.ResetStats
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execResetStats_Parms
{
	unsigned char                                      Reason;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.GetStatValue
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execGetStatValue_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerReplicationInfo.WriteStatValue
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execWriteStatValue_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Op;                                               		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.HasStat
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execHasStat_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerReplicationInfo.InitStats
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execInitStats_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo.ClearPlayerSpeakingDelegate
// [0x00020902] ( FUNC_Event )
struct APgPlayerReplicationInfo_eventClearPlayerSpeakingDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerReplicationInfo.AddPlayerSpeakingDelegate
// [0x00020902] ( FUNC_Event )
struct APgPlayerReplicationInfo_eventAddPlayerSpeakingDelegate_Parms
{
	class UOnlineSubsystem*                            os;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dgt;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerReplicationInfo.OnPlayerSpeaking
// [0x00120000] 
struct APgPlayerReplicationInfo_execOnPlayerSpeaking_Parms
{
	struct FUniqueNetId                                Id;                                               		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTalking : 1;                                   		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.PgPlayerReplicationInfo_OnPlayerSpeaking
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execPgPlayerReplicationInfo_OnPlayerSpeaking_Parms
{
	struct FUniqueNetId                                Id;                                               		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTalking : 1;                                   		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.UnregisterPlayerTalker
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execUnregisterPlayerTalker_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo.RegisterPlayerTalker
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execRegisterPlayerTalker_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo.IsMuted
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execIsMuted_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerReplicationInfo.IsSpeaking
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execIsSpeaking_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerReplicationInfo.GetPlayerColorName
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execGetPlayerColorName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerReplicationInfo.GetPlayerColor
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execGetPlayerColor_Parms
{
	struct FLinearColor                                ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerReplicationInfo.GetPlayerName
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execGetPlayerName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgPlayerReplicationInfo._UnregisterPlayerFromSession
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgPlayerReplicationInfo_event_UnregisterPlayerFromSession_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo.UnregisterPlayerFromSession
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execUnregisterPlayerFromSession_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo._RegisterPlayerWithSession
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgPlayerReplicationInfo_event_RegisterPlayerWithSession_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo.RegisterPlayerWithSession
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execRegisterPlayerWithSession_Parms
{
};

// Function GridGame.PgPlayerReplicationInfo._SetUniqueId
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgPlayerReplicationInfo_event_SetUniqueId_Parms
{
	struct FUniqueNetId                                PlayerUniqueId;                                   		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.SetUniqueId
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execSetUniqueId_Parms
{
	struct FUniqueNetId                                PlayerUniqueId;                                   		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo._OverrideWith
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerReplicationInfo_event_OverrideWith_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.OverrideWith
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execOverrideWith_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo._CopyProperties
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgPlayerReplicationInfo_event_CopyProperties_Parms
{
	class APlayerReplicationInfo*                      Dest;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.CopyProperties
// [0x00020400] ( FUNC_Native )
struct APgPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo*                      Dest;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo._ClientInitialize
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgPlayerReplicationInfo_event_ClientInitialize_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.ClientInitialize
// [0x00020500] ( FUNC_Native )
struct APgPlayerReplicationInfo_execClientInitialize_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo._ReplicatedEvent
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgPlayerReplicationInfo_event_ReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerReplicationInfo.ReplicatedEvent
// [0x00020D00] ( FUNC_Event | FUNC_Native )
struct APgPlayerReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPlayerStart.IsUsableAnchorFor
// [0x00020400] ( FUNC_Native )
struct APgPlayerStart_execIsUsableAnchorFor_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPlayerStart.TriggerEvent
// [0x00020400] ( FUNC_Native )
struct APgPlayerStart_execTriggerEvent_Parms
{
};

// Function GridGame.PgPlayerStart.IsActiveCheckpoint
// [0x00020400] ( FUNC_Native )
struct APgPlayerStart_execIsActiveCheckpoint_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRule.Compare
// [0x00080400] ( FUNC_Native )
struct UPgRule_execCompare_Parms
{
	unsigned char                                      Comparison;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value1;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value2;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRule.InOrder
// [0x00080400] ( FUNC_Native )
struct UPgRule_execInOrder_Parms
{
	unsigned char                                      Order;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value1;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value2;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRule.GetCmdLineString
// [0x00020400] ( FUNC_Native )
struct UPgRule_execGetCmdLineString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgRule.GetValue
// [0x00020400] ( FUNC_Native )
struct UPgRule_execGetValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEndRule.Check
// [0x00020400] ( FUNC_Native )
struct UPgEndRule_execCheck_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGoalReachedEndRule.Check
// [0x00020400] ( FUNC_Native )
struct UPgGoalReachedEndRule_execCheck_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGoalReachedEndRule.GetValue
// [0x00020400] ( FUNC_Native )
struct UPgGoalReachedEndRule_execGetValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOneRemainingEndRule.Check
// [0x00020400] ( FUNC_Native )
struct UPgOneRemainingEndRule_execCheck_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgOneRemainingEndRule.GetValue
// [0x00020400] ( FUNC_Native )
struct UPgOneRemainingEndRule_execGetValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTimeLimitEndRule.Check
// [0x00020400] ( FUNC_Native )
struct UPgTimeLimitEndRule_execCheck_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTimeLimitEndRule.GetCmdLineString
// [0x00020400] ( FUNC_Native )
struct UPgTimeLimitEndRule_execGetCmdLineString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgTimeLimitEndRule.GetValue
// [0x00020400] ( FUNC_Native )
struct UPgTimeLimitEndRule_execGetValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGameRule.Apply
// [0x00020400] ( FUNC_Native )
struct UPgGameRule_execApply_Parms
{
};

// Function GridGame.PgGameRule.CheckCondition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgGameRule_execCheckCondition_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgScoreRule.UpdateTeam
// [0x00080400] ( FUNC_Native )
struct UPgScoreRule_execUpdateTeam_Parms
{
	class APgTeamInfo*                                 Team;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgScoreRule.UpdatePlayer
// [0x00080400] ( FUNC_Native )
struct UPgScoreRule_execUpdatePlayer_Parms
{
	class APgPlayerReplicationInfo*                    Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgScoreRule.Apply
// [0x00020400] ( FUNC_Native )
struct UPgScoreRule_execApply_Parms
{
	class AActor*                                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgScoreRule.GetValue
// [0x00020400] ( FUNC_Native )
struct UPgScoreRule_execGetValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgScoreRule.Matches
// [0x00020400] ( FUNC_Native )
struct UPgScoreRule_execMatches_Parms
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCustomScoreRule.GetValue
// [0x00020400] ( FUNC_Native )
struct UPgCustomScoreRule_execGetValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCustomScoreRule.Matches
// [0x00020400] ( FUNC_Native )
struct UPgCustomScoreRule_execMatches_Parms
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPresetScoreRule.GetValue
// [0x00020400] ( FUNC_Native )
struct UPgPresetScoreRule_execGetValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPresetScoreRule.Matches
// [0x00020400] ( FUNC_Native )
struct UPgPresetScoreRule_execMatches_Parms
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgWinRule.InOrderTeams
// [0x00020400] ( FUNC_Native )
struct UPgWinRule_execInOrderTeams_Parms
{
	class APgTeamInfo*                                 Player1;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgTeamInfo*                                 Player2;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgWinRule.InOrderPlayers
// [0x00020400] ( FUNC_Native )
struct UPgWinRule_execInOrderPlayers_Parms
{
	class APgPlayerReplicationInfo*                    Player1;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    Player2;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgWinRule.GetTeamsSorted
// [0x00424400] ( FUNC_Native )
struct UPgWinRule_execGetTeamsSorted_Parms
{
	TArray< class ATeamInfo* >                         Teams;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      Ascending : 1;                                    		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgWinRule.GetPlayersSorted
// [0x00424400] ( FUNC_Native )
struct UPgWinRule_execGetPlayersSorted_Parms
{
	TArray< class APlayerReplicationInfo* >            Players;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      Ascending : 1;                                    		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgBestStatWinRule.InOrderTeams
// [0x00020400] ( FUNC_Native )
struct UPgBestStatWinRule_execInOrderTeams_Parms
{
	class APgTeamInfo*                                 Player1;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgTeamInfo*                                 Player2;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgBestStatWinRule.InOrderPlayers
// [0x00020400] ( FUNC_Native )
struct UPgBestStatWinRule_execInOrderPlayers_Parms
{
	class APgPlayerReplicationInfo*                    Player1;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    Player2;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStatThresholdWinRule.InOrderTeams
// [0x00020400] ( FUNC_Native )
struct UPgStatThresholdWinRule_execInOrderTeams_Parms
{
	class APgTeamInfo*                                 Player1;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgTeamInfo*                                 Player2;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStatThresholdWinRule.InOrderPlayers
// [0x00020400] ( FUNC_Native )
struct UPgStatThresholdWinRule_execInOrderPlayers_Parms
{
	class APgPlayerReplicationInfo*                    Player1;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    Player2;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.GetAllStats
// [0x00420400] ( FUNC_Native )
struct UPgRuleSet_execGetAllStats_Parms
{
	TArray< struct FName >                             Stats;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgRuleSet.LogSettings
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execLogSettings_Parms
{
};

// Function GridGame.PgRuleSet.GetBotPawnArchetype
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execGetBotPawnArchetype_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.GetBotAIArchetype
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execGetBotAIArchetype_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.GetOption
// [0x00420400] ( FUNC_Native )
struct UPgRuleSet_execGetOption_Parms
{
	struct FName                                       OptionName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUserConfigOption                           Option;                                           		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.GetTeamsRanked
// [0x00420400] ( FUNC_Native )
struct UPgRuleSet_execGetTeamsRanked_Parms
{
	TArray< class APgTeamInfo* >                       Teams;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      Descending : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgRuleSet.GetPlayersRanked
// [0x00424400] ( FUNC_Native )
struct UPgRuleSet_execGetPlayersRanked_Parms
{
	TArray< class APgPlayerReplicationInfo* >          Players;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      Descending : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      TeamIndex;                                        		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgRuleSet.GetLosingTeam
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execGetLosingTeam_Parms
{
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.GetLosingPlayer
// [0x00024400] ( FUNC_Native )
struct UPgRuleSet_execGetLosingPlayer_Parms
{
	unsigned char                                      TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.GetWinningTeam
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execGetWinningTeam_Parms
{
	class APgTeamInfo*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.GetWinningPlayer
// [0x00024400] ( FUNC_Native )
struct UPgRuleSet_execGetWinningPlayer_Parms
{
	unsigned char                                      TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.GetWinner
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execGetWinner_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.CheckEndRound
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execCheckEndRound_Parms
{
	struct FName                                       Reason;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgRuleSet.Score
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execScore_Parms
{
	struct FName                                       Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Scorer;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgRuleSet.GetCmdLineString
// [0x00020400] ( FUNC_Native )
struct UPgRuleSet_execGetCmdLineString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgRuleSet.GetRuleSet
// [0x00022400] ( FUNC_Native )
struct UPgRuleSet_execGetRuleSet_Parms
{
	class UPgRuleSet*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStatInfo.ResetStats
// [0x00020400] ( FUNC_Native )
struct APgStatInfo_execResetStats_Parms
{
	unsigned char                                      Reason;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatInfo.GetStatValue
// [0x00020400] ( FUNC_Native )
struct APgStatInfo_execGetStatValue_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStatInfo.WriteStatValue
// [0x00020400] ( FUNC_Native )
struct APgStatInfo_execWriteStatValue_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Op;                                               		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatInfo.GetStatData
// [0x00420400] ( FUNC_Native )
struct APgStatInfo_execGetStatData_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FGameStatData                               Data;                                             		// 0x0008 (0x0014) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgStatInfo.HasStat
// [0x00020400] ( FUNC_Native )
struct APgStatInfo_execHasStat_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStatInfo._ReplicatedEvent
// [0x00040903] ( FUNC_Final | FUNC_Event )
struct APgStatInfo_event_ReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStatInfo.ReplicatedEvent
// [0x00020D00] ( FUNC_Event | FUNC_Native )
struct APgStatInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgTeamBase.OnToggle
// [0x00020400] ( FUNC_Native )
struct APgTeamBase_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgTeamInfo.ResetStats
// [0x00020400] ( FUNC_Native )
struct APgTeamInfo_execResetStats_Parms
{
	unsigned char                                      Reason;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgTeamInfo.GetStatValue
// [0x00020400] ( FUNC_Native )
struct APgTeamInfo_execGetStatValue_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTeamInfo.WriteStatValue
// [0x00020400] ( FUNC_Native )
struct APgTeamInfo_execWriteStatValue_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Op;                                               		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgTeamInfo.HasStat
// [0x00020400] ( FUNC_Native )
struct APgTeamInfo_execHasStat_Parms
{
	struct FName                                       Stat;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTeamInfo.InitStats
// [0x00020400] ( FUNC_Native )
struct APgTeamInfo_execInitStats_Parms
{
};

// Function GridGame.PgTeamInfo.GetTeamColorName
// [0x00024400] ( FUNC_Native )
struct APgTeamInfo_execGetTeamColorName_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTeamInfo.GetTeamColor
// [0x00424400] ( FUNC_Native )
struct APgTeamInfo_execGetTeamColor_Parms
{
	struct FLinearColor                                Colour;                                           		// 0x0000 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgTeamInfo.GetPlayers
// [0x00420400] ( FUNC_Native )
struct APgTeamInfo_execGetPlayers_Parms
{
	TArray< class APlayerReplicationInfo* >            Players;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgTeamInfo.GetNumBots
// [0x00020400] ( FUNC_Native )
struct APgTeamInfo_execGetNumBots_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTeamInfo.GetNumHumans
// [0x00020400] ( FUNC_Native )
struct APgTeamInfo_execGetNumHumans_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTeamInfo.GetNumPlayers
// [0x00020400] ( FUNC_Native )
struct APgTeamInfo_execGetNumPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTeamInfo.Reset
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct APgTeamInfo_eventReset_Parms
{
};

// Function GridGame.PgTeamInfo._RemoveFromTeam
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgTeamInfo_event_RemoveFromTeam_Parms
{
	class AController*                                 Member;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgTeamInfo._AddToTeam
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct APgTeamInfo_event_AddToTeam_Parms
{
	class AController*                                 NewMember;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgBlockingVolume.StopsProjectile
// [0x00020102] 
struct APgBlockingVolume_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEnergyActor.OnToggle
// [0x00020102] 
struct APgEnergyActor_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgEnergyActor.OnEnergyActor
// [0x00020002] 
struct APgEnergyActor_execOnEnergyActor_Parms
{
	class UPgSeqAct_EnergyActor*                       Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USeqVar_Object*                           ObjVar;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  thePawn;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APgTeamInfo*                              TeamInfo;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgEnergyActor.GetMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execGetMaterialInstanceList_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgEnergyActor.InitMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execInitMaterialInstanceList_Parms
{
};

// Function GridGame.PgEnergyActor.EnergyActorUse
// [0x00020802] ( FUNC_Event )
struct APgEnergyActor_eventEnergyActorUse_Parms
{
	struct FString                                     Type;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Team;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Usage;                                            		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AController*                                 Controller;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgEnergyActor.LogEnergyActorUse
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execLogEnergyActorUse_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Team;                                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsPositiveFlow : 1;                               		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AController*                                 Controller;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgEnergyActor.TriggerEvent
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execTriggerEvent_Parms
{
	class AActor*                                      InInstigator;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ActivateIndex;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgEnergyActor.Initialize
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execInitialize_Parms
{
};

// Function GridGame.PgEnergyActor.PostTeamChange
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execPostTeamChange_Parms
{
	unsigned long                                      playAudio : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgEnergyActor.PostStateChange
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execPostStateChange_Parms
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      playAudio : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgEnergyActor.IsPositiveFlow
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execIsPositiveFlow_Parms
{
	class APgPawn*                                     thePawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEnergyActor.CanUseEnergyActor
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execCanUseEnergyActor_Parms
{
	class APawn*                                       thePawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgEnergyActor.SetCooldown
// [0x00020400] ( FUNC_Native )
struct APgEnergyActor_execSetCooldown_Parms
{
	float                                              cooldown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInterpActor.OnInterpActor
// [0x00020002] 
struct APgInterpActor_execOnInterpActor_Parms
{
	class UPgSeqAct_InterpActor*                       Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInterpActor.Bump
// [0x00020802] ( FUNC_Event )
struct APgInterpActor_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInterpActor.Touch
// [0x00020802] ( FUNC_Event )
struct APgInterpActor_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInterpActor.TakeDamage
// [0x00024802] ( FUNC_Event )
struct APgInterpActor_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UPgDamageParamInterface*                  damageInterface;                                  		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function GridGame.PgInterpActor.OnDamageCaused
// [0x00020400] ( FUNC_Native )
struct APgInterpActor_execOnDamageCaused_Parms
{
	int                                                damageCaused;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damageVictim;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInterpActor.GetCauseDamageParam
// [0x00020400] ( FUNC_Native )
struct APgInterpActor_execGetCauseDamageParam_Parms
{
	class UPgDamageParam*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInterpActor.SetScalarParam
// [0x00020400] ( FUNC_Native )
struct APgInterpActor_execSetScalarParam_Parms
{
	float                                              currentBlend;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              baseBlend;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              desiredBlend;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ParamName;                                        		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInterpActor.GetScalarParameterBlendValue
// [0x00020400] ( FUNC_Native )
struct APgInterpActor_execGetScalarParameterBlendValue_Parms
{
	struct FName                                       Param;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgInterpActor.TickMaterialParamBlend
// [0x00020400] ( FUNC_Native )
struct APgInterpActor_execTickMaterialParamBlend_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgInterpActor.GetMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct APgInterpActor_execGetMaterialInstanceList_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgInterpActor.InitMaterialInstanceList
// [0x00020400] ( FUNC_Native )
struct APgInterpActor_execInitMaterialInstanceList_Parms
{
};

// Function GridGame.PgObjective.Tick
// [0x00020802] ( FUNC_Event )
struct APgObjective_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgObjective.OnObjectiveControl
// [0x00020102] 
struct APgObjective_execOnObjectiveControl_Parms
{
	class UPgSeqAct_ObjectiveControl*                  Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPlayerController*                      PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgObjective.Release
// [0x00020400] ( FUNC_Native )
struct APgObjective_execRelease_Parms
{
	class AAIController*                               C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgObjective.Claim
// [0x00020400] ( FUNC_Native )
struct APgObjective_execClaim_Parms
{
	class AAIController*                               C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgObjective.GetTeamNum
// [0x00020500] ( FUNC_Native )
struct APgObjective_execGetTeamNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgObjective.GetObjectiveText
// [0x00020400] ( FUNC_Native )
struct APgObjective_execGetObjectiveText_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgObjective.CanShowObjectiveText
// [0x00020400] ( FUNC_Native )
struct APgObjective_execCanShowObjectiveText_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgObjective.CanShowMapLocation
// [0x00020400] ( FUNC_Native )
struct APgObjective_execCanShowMapLocation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgObjective.IsComplete
// [0x00020400] ( FUNC_Native )
struct APgObjective_execIsComplete_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgObjective.Complete
// [0x00020400] ( FUNC_Native )
struct APgObjective_execComplete_Parms
{
	class AActor*                                      Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgObjective.IsActive
// [0x00020400] ( FUNC_Native )
struct APgObjective_execIsActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgObjective.Activate
// [0x00020400] ( FUNC_Native )
struct APgObjective_execActivate_Parms
{
};

// Function GridGame.PgCapturePoint.KismetFireCaptured
// [0x00020500] ( FUNC_Native )
struct APgCapturePoint_execKismetFireCaptured_Parms
{
	TArray< class AActor* >                            Captors;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgCapturePoint.OnCapturePointControl
// [0x00020500] ( FUNC_Native )
struct APgCapturePoint_execOnCapturePointControl_Parms
{
	class UPgSeqAct_CapturePointControl*               Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCapturePoint.AwardCapture
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execAwardCapture_Parms
{
	TArray< class AActor* >                            Captors;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgCapturePoint.SetCaptors
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execSetCaptors_Parms
{
	TArray< class AActor* >                            Captors;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgCapturePoint.IsCaptor
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execIsCaptor_Parms
{
	class APgPlayerReplicationInfo*                    Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCapturePoint.GetCaptorAt
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execGetCaptorAt_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCapturePoint.GetNumCaptors
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execGetNumCaptors_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCapturePoint.IsEnergized
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execIsEnergized_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCapturePoint.SetNeutral
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execSetNeutral_Parms
{
};

// Function GridGame.PgCapturePoint.ClearProgress
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execClearProgress_Parms
{
};

// Function GridGame.PgCapturePoint.Deplete
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execDeplete_Parms
{
	float                                              DepleteRate;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCapturePoint.Capture
// [0x00020400] ( FUNC_Native )
struct APgCapturePoint_execCapture_Parms
{
	TArray< class AActor* >                            Captors;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              CaptureRate;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgPowerLine.KismetFireConnected
// [0x00020400] ( FUNC_Native )
struct APgPowerLine_execKismetFireConnected_Parms
{
	unsigned long                                      Connected : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgPowerLine.Contains
// [0x00020400] ( FUNC_Native )
struct APgPowerLine_execContains_Parms
{
	class APgCapturePoint*                             Point;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgPowerLine.IsConnected
// [0x00020400] ( FUNC_Native )
struct APgPowerLine_execIsConnected_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.GetOtherPlayerIsHost
// [0x00440401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execGetOtherPlayerIsHost_Parms
{
	class APgPawn*                                     currentPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                IsHost;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.GetIsHost
// [0x00440401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execGetIsHost_Parms
{
	class APgPawn*                                     PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                IsHost;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.LastSavedMapMatch
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execLastSavedMapMatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.HasValidPlayerData
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execHasValidPlayerData_Parms
{
	class AController*                                 Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.MapMatch
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execMapMatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.CheckSerialization
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execCheckSerialization_Parms
{
};

// Function GridGame.PgSaveLoadManager.DiskLoad
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execDiskLoad_Parms
{
};

// Function GridGame.PgSaveLoadManager.ApplyPlayerData
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execApplyPlayerData_Parms
{
	class APgPawn*                                     PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsHost : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.DeleteActiveSaveSlot
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execDeleteActiveSaveSlot_Parms
{
};

// Function GridGame.PgSaveLoadManager.AllocateActiveSaveSlot
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execAllocateActiveSaveSlot_Parms
{
};

// Function GridGame.PgSaveLoadManager.ResetStreamingVolumeStates
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execResetStreamingVolumeStates_Parms
{
};

// Function GridGame.PgSaveLoadManager.SetupPlayerStarts
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execSetupPlayerStarts_Parms
{
};

// Function GridGame.PgSaveLoadManager.RestoreLevelState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execRestoreLevelState_Parms
{
};

// Function GridGame.PgSaveLoadManager.SetFireEventsOnLoad
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execSetFireEventsOnLoad_Parms
{
	unsigned long                                      FireLoadEvents : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.FireLoadedEvents
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execFireLoadedEvents_Parms
{
};

// Function GridGame.PgSaveLoadManager.LoadFromMemory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execLoadFromMemory_Parms
{
};

// Function GridGame.PgSaveLoadManager.CopyDataFromPlayerController
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execCopyDataFromPlayerController_Parms
{
	class APgPlayerController*                         PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.CopyDataToPlayerController
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execCopyDataToPlayerController_Parms
{
	class APgPlayerController*                         PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.SetupForNewPlaythrough
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execSetupForNewPlaythrough_Parms
{
};

// Function GridGame.PgSaveLoadManager.TranslateChapterNumToMapName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execTranslateChapterNumToMapName_Parms
{
	int                                                iChapterNum;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgSaveLoadManager.TranslateMapNameToChapterNum
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execTranslateMapNameToChapterNum_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.CommitStatToSaveDataByIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execCommitStatToSaveDataByIndex_Parms
{
	class APgPlayerController*                         PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.CommitStatToSaveData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execCommitStatToSaveData_Parms
{
	class APgPlayerController*                         PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       StatName;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.PopulateHardBufferFromMemCard
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execPopulateHardBufferFromMemCard_Parms
{
};

// Function GridGame.PgSaveLoadManager.HasValidHardBuffer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execHasValidHardBuffer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.InitializeHardBuffer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execInitializeHardBuffer_Parms
{
};

// Function GridGame.PgSaveLoadManager.CopySaveDataToHardBuffer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execCopySaveDataToHardBuffer_Parms
{
};

// Function GridGame.PgSaveLoadManager.CopyHardBufferToSaveData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execCopyHardBufferToSaveData_Parms
{
};

// Function GridGame.PgSaveLoadManager.ResetToDefaults
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execResetToDefaults_Parms
{
};

// Function GridGame.PgSaveLoadManager.RestoreToLastHardSave
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execRestoreToLastHardSave_Parms
{
};

// Function GridGame.PgSaveLoadManager.EnableTrophies
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execEnableTrophies_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.EnableSaveLoad
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execEnableSaveLoad_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.DiskSave
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execDiskSave_Parms
{
};

// Function GridGame.PgSaveLoadManager.SavePlayerData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execSavePlayerData_Parms
{
};

// Function GridGame.PgSaveLoadManager.SaveToMemoryUserDataGlobalOnly
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execSaveToMemoryUserDataGlobalOnly_Parms
{
};

// Function GridGame.PgSaveLoadManager.SaveToMemory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execSaveToMemory_Parms
{
	class APgPlayerStart*                              Checkpoint;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.RestartAllToLastCheckpoint
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execRestartAllToLastCheckpoint_Parms
{
};

// Function GridGame.PgSaveLoadManager.SetMapName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execSetMapName_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgSaveLoadManager.GetMapName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execGetMapName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgSaveLoadManager.GetCheckpointName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execGetCheckpointName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgSaveLoadManager.HasValidCheckpointData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execHasValidCheckpointData_Parms
{
	int                                                iSlotNum;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.LoadPlayerData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execLoadPlayerData_Parms
{
	class APgPawn*                                     PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.GetSpawnLocation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execGetSpawnLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSaveLoadManager.SetActiveSlot
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPgSaveLoadManager_execSetActiveSlot_Parms
{
	int                                                iSlotNum;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSaveLoadManager.GetInstance
// [0x00022400] ( FUNC_Native )
struct UPgSaveLoadManager_execGetInstance_Parms
{
	class UPgSaveLoadManager*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgScalarMaterialParamBlendInterface.SetScalarParam
// [0x00020500] ( FUNC_Native )
struct UPgScalarMaterialParamBlendInterface_execSetScalarParam_Parms
{
	float                                              currentBlend;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              baseBlend;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              desiredBlend;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ParamName;                                        		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgScalarMaterialParamBlendInterface.GetScalarParameterBlendValue
// [0x00020500] ( FUNC_Native )
struct UPgScalarMaterialParamBlendInterface_execGetScalarParameterBlendValue_Parms
{
	struct FName                                       Param;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgScalarMaterialParamBlendInterface.TickMaterialParamBlend
// [0x00020500] ( FUNC_Native )
struct UPgScalarMaterialParamBlendInterface_execTickMaterialParamBlend_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSeqAct_DriveVehicle.Activated
// [0x00020802] ( FUNC_Event )
struct UPgSeqAct_DriveVehicle_eventActivated_Parms
{
	// class APawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APgPawn*                                  PgPawn;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class UObject* >                        vars;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APgVehicle*                               Vehicle;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        Player;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSeqAct_DriveVehicle.Spawned
// [0x00020400] ( FUNC_Native )
struct UPgSeqAct_DriveVehicle_execSpawned_Parms
{
	class UObject*                                     newSpawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSeqEvent_ChapterPoint.Deactivated
// [0x00020802] ( FUNC_Event )
struct UPgSeqEvent_ChapterPoint_eventDeactivated_Parms
{
};

// Function GridGame.PgSeqEvent_ChapterPoint.Activated
// [0x00020802] ( FUNC_Event )
struct UPgSeqEvent_ChapterPoint_eventActivated_Parms
{
};

// Function GridGame.PgSeqVar_HumanPlayer.GetObjectValue
// [0x00020002] 
struct UPgSeqVar_HumanPlayer_execGetObjectValue_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              theController;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSeqVar_HumanPlayer.UpdatePlayersList
// [0x00020400] ( FUNC_Native )
struct UPgSeqVar_HumanPlayer_execUpdatePlayersList_Parms
{
};

// Function GridGame.PgSeqVar_Team.GetObjectValue
// [0x00020400] ( FUNC_Native )
struct UPgSeqVar_Team_execGetObjectValue_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTargetActor.TakeDamage
// [0x00024802] ( FUNC_Event )
struct APgTargetActor_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgTargetActor.CanTarget
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execCanTarget_Parms
{
	class APawn*                                       targeter;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTargetActor.GetMaxTargetableDist
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execGetMaxTargetableDist_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTargetActor.GetMinTargetableDist
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execGetMinTargetableDist_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTargetActor.TriggerEvent
// [0x00024400] ( FUNC_Native )
struct APgTargetActor_execTriggerEvent_Parms
{
	int                                                ActivateIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      changeCauser;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgTargetActor.PlayAudioTrans
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execPlayAudioTrans_Parms
{
	struct FName                                       fromState;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       toState;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgTargetActor.ReloadState
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execReloadState_Parms
{
	struct FName                                       State;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgTargetActor.SetTargetActorState
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execSetTargetActorState_Parms
{
	struct FName                                       State;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      shouldPlayAudioTrans : 1;                         		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      changeCauser;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      shouldFireEvent : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgTargetActor.ApplyState
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execApplyState_Parms
{
	class AActor*                                      changeCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      shouldFireEvent : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgTargetActor.HandleStateChange
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execHandleStateChange_Parms
{
	class AActor*                                      changeCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      shouldFireEvent : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgTargetActor.HandleTakeDamage
// [0x00020400] ( FUNC_Native )
struct APgTargetActor_execHandleTakeDamage_Parms
{
	class AActor*                                      DamageCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgVolume._PlayerControllerSpawned
// [0x00020800] ( FUNC_Event )
struct APgVolume_event_PlayerControllerSpawned_Parms
{
	class AController*                                 NewController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSceneCaptureEnablerVolume.UnTouch
// [0x00020802] ( FUNC_Event )
struct APgSceneCaptureEnablerVolume_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSceneCaptureEnablerVolume.Touch
// [0x00020802] ( FUNC_Event )
struct APgSceneCaptureEnablerVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSceneCaptureEnablerVolume.UpdateSceneCapture
// [0x00820102] 
struct APgSceneCaptureEnablerVolume_execUpdateSceneCapture_Parms
{
	class AController*                                 UpdateCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Enable : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FSceneCaptureTriggerInfo                 CurrentInfo;                                      		// 0x0010 (0x0014) [0x0000000000000000]              
	// unsigned char                                   EnableState;                                      		// 0x0024 (0x0001) [0x0000000000000000]              
	// float                                           Duration;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSceneCaptureEnablerVolume._PlayerControllerSpawned
// [0x00020802] ( FUNC_Event )
struct APgSceneCaptureEnablerVolume_event_PlayerControllerSpawned_Parms
{
	class AController*                                 NewController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSceneCaptureEnablerVolume.PopulateTouchingActors
// [0x00020400] ( FUNC_Native )
struct APgSceneCaptureEnablerVolume_execPopulateTouchingActors_Parms
{
};

// Function GridGame.PgCubicSpline.Evaluate
// [0x00020400] ( FUNC_Native )
struct UPgCubicSpline_execEvaluate_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgForceFeedbackComponent.StopForceFeedbackWaveform
// [0x00024902] ( FUNC_Event )
struct UPgForceFeedbackComponent_eventStopForceFeedbackWaveform_Parms
{
	class APlayerController*                           PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UForceFeedbackWaveform*                      WaveformToMatch;                                  		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgForceFeedbackComponent.SetRumbleScale
// [0x00020902] ( FUNC_Event )
struct UPgForceFeedbackComponent_eventSetRumbleScale_Parms
{
	class APlayerController*                           PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              scaleAmount;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgForceFeedbackComponent.PlayForceFeedbackWaveform
// [0x00024902] ( FUNC_Event )
struct UPgForceFeedbackComponent_eventPlayForceFeedbackWaveform_Parms
{
	class APlayerController*                           PlayerController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UForceFeedbackWaveform*                      WaveForm;                                         		// 0x0004 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              scaleAmount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgSmartObject.TriggerUsedEvent
// [0x00024802] ( FUNC_Event )
struct APgSmartObject_eventTriggerUsedEvent_Parms
{
	class AActor*                                      User;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      unused : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridGame.PgSmartObject.OnToggle
// [0x00020102] 
struct APgSmartObject_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSmartObject.CanTarget
// [0x00020400] ( FUNC_Native )
struct APgSmartObject_execCanTarget_Parms
{
	class APawn*                                       targeter;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSmartObject.GetMaxTargetableDist
// [0x00020400] ( FUNC_Native )
struct APgSmartObject_execGetMaxTargetableDist_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSmartObject.GetMinTargetableDist
// [0x00020400] ( FUNC_Native )
struct APgSmartObject_execGetMinTargetableDist_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSmartObject.TryAndUseSmartObject
// [0x00024400] ( FUNC_Native )
struct APgSmartObject_execTryAndUseSmartObject_Parms
{
	class AActor*                                      User;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      pressed : 1;                                      		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSmartObject.CanUseSmartObject
// [0x00424400] ( FUNC_Native )
struct APgSmartObject_execCanUseSmartObject_Parms
{
	class AActor*                                      User;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                useInfoIndex;                                     		// 0x0004 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      pressed : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSmartObject.CanPathThroughSmartObject
// [0x00020400] ( FUNC_Native )
struct APgSmartObject_execCanPathThroughSmartObject_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgFireController.IsFriendly
// [0x00020400] ( FUNC_Native )
struct UPgFireController_execIsFriendly_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgFireController.GetFireControlState
// [0x00020400] ( FUNC_Native )
struct UPgFireController_execGetFireControlState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgFireController.TargetNotVisible
// [0x00020400] ( FUNC_Native )
struct UPgFireController_execTargetNotVisible_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgFireController.SeeTarget
// [0x00020400] ( FUNC_Native )
struct UPgFireController_execSeeTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgFireController.DisplayDebug
// [0x00420500] ( FUNC_Native )
struct UPgFireController_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgFireControllerAI.IsFriendly
// [0x00020400] ( FUNC_Native )
struct UPgFireControllerAI_execIsFriendly_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgFireControllerAI.GetFireControlState
// [0x00020400] ( FUNC_Native )
struct UPgFireControllerAI_execGetFireControlState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgTargetMarker.DisplayDebug
// [0x00420500] ( FUNC_Native )
struct APgTargetMarker_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgInterface.SetCompleteGame
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgInterface_execSetCompleteGame_Parms
{
};

// Function GridGame.PgInterface.ChangeLanguage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgInterface_execChangeLanguage_Parms
{
	struct FString                                     Language;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgInterface.ShowDebugMenu
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgInterface_execShowDebugMenu_Parms
{
};

// Function GridGame.PgInterface.ScreenProject
// [0x00422400] ( FUNC_Native )
struct UPgInterface_execScreenProject_Parms
{
	struct FVector                                     InVector;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   OutVector;                                        		// 0x000C (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgInterface.GetInstance
// [0x00022400] ( FUNC_Native )
struct UPgInterface_execGetInstance_Parms
{
	class UPgInterface*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSeqAct_ArjiaCityHud.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UPgSeqAct_ArjiaCityHud_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSeqAct_HudBar.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UPgSeqAct_HudBar_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSeqAct_HudText.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UPgSeqAct_HudText_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSeqAct_PlayFmv.Deactivate
// [0x00020400] ( FUNC_Native )
struct UPgSeqAct_PlayFmv_execDeactivate_Parms
{
};

// Function GridGame.PgSeqAct_PlayFmv.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UPgSeqAct_PlayFmv_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgFracturedStaticMeshActor.TakeDamage
// [0x00024902] ( FUNC_Event )
struct APgFracturedStaticMeshActor_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             Index;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgFracturedStaticMeshActor.AreAllChunksDead
// [0x00040003] ( FUNC_Final )
struct APgFracturedStaticMeshActor_execAreAllChunksDead_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bAllBroken : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgGFxGameViewportClient.Tick
// [0x00020802] ( FUNC_Event )
struct UPgGFxGameViewportClient_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGFxGameViewportClient.ExitToFE
// [0x00020400] ( FUNC_Native )
struct UPgGFxGameViewportClient_execExitToFE_Parms
{
};

// Function GridGame.PgGFxGameViewportClient.ExitGame
// [0x00020400] ( FUNC_Native )
struct UPgGFxGameViewportClient_execExitGame_Parms
{
};

// Function GridGame.PgGFxGameViewportClient.ProcessConnectionError
// [0x00020400] ( FUNC_Native )
struct UPgGFxGameViewportClient_execProcessConnectionError_Parms
{
};

// Function GridGame.PgGFxGameViewportClient.UpdateError
// [0x00020400] ( FUNC_Native )
struct UPgGFxGameViewportClient_execUpdateError_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGFxGameViewportClient.HandleConnectionError
// [0x00020400] ( FUNC_Native )
struct UPgGFxGameViewportClient_execHandleConnectionError_Parms
{
};

// Function GridGame.PgGFxGameViewportClient.PgGFxGameViewportClient_DestroyOnlineGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgGFxGameViewportClient_execPgGFxGameViewportClient_DestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgGFxGameViewportClient.PgGFxGameViewportClient_EndOnlineGameComplete
// [0x00020400] ( FUNC_Native )
struct UPgGFxGameViewportClient_execPgGFxGameViewportClient_EndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      successful : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridGame.PgGFxGameViewportClient.NotifyConnectionError
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UPgGFxGameViewportClient_eventNotifyConnectionError_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGFxGameViewportClient._Init
// [0x00440803] ( FUNC_Final | FUNC_Event )
struct UPgGFxGameViewportClient_event_Init_Parms
{
	struct FString                                     OutError;                                         		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgGFxGameViewportClient.DrawTransitionMessage
// [0x00020000] 
struct UPgGFxGameViewportClient_execDrawTransitionMessage_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGFxGameViewportClient.DisplayProgressMessage
// [0x00020000] 
struct UPgGFxGameViewportClient_execDisplayProgressMessage_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgGFxGameViewportClient._NotifyConnectionError
// [0x00044803] ( FUNC_Final | FUNC_Event )
struct UPgGFxGameViewportClient_event_NotifyConnectionError_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgGFxGameViewportClient.Init
// [0x00420C00] ( FUNC_Event | FUNC_Native )
struct UPgGFxGameViewportClient_eventInit_Parms
{
	struct FString                                     OutError;                                         		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSeqAct_AkPlaySound.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UPgSeqAct_AkPlaySound_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgXPSystem.GetNumXPRanks
// [0x00022400] ( FUNC_Native )
struct UPgXPSystem_execGetNumXPRanks_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPLoadoutBuilder.GetControllerPawn
// [0x00020400] ( FUNC_Native )
struct UPgMPLoadoutBuilder_execGetControllerPawn_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgMPLoadoutBuilder.ApplyToPlayer
// [0x00020400] ( FUNC_Native )
struct UPgMPLoadoutBuilder_execApplyToPlayer_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPLoadoutBuilder.SafeSelectItem
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgMPLoadoutBuilder_execSafeSelectItem_Parms
{
	class UPgUnlockItem*                               Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPLoadoutBuilder.Reset
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPgMPLoadoutBuilder_eventReset_Parms
{
};

// Function GridGame.PgMPLoadoutBuilder.MakeBest
// [0x00020400] ( FUNC_Native )
struct UPgMPLoadoutBuilder_execMakeBest_Parms
{
	class UPgUnlockSystem*                             unlockSystem;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LoadoutIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPLoadoutBuilder.FillFromUnlockDatabase
// [0x00020400] ( FUNC_Native )
struct UPgMPLoadoutBuilder_execFillFromUnlockDatabase_Parms
{
	class UPgUnlockSystem*                             unlockSystem;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LoadoutIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPLoadoutBuilder.CommitToUnlockDatabase
// [0x00020400] ( FUNC_Native )
struct UPgMPLoadoutBuilder_execCommitToUnlockDatabase_Parms
{
	class UPgUnlockSystem*                             unlockSystem;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LoadoutIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgMPLoadoutBuilder.WriteLoadout
// [0x00420400] ( FUNC_Native )
struct UPgMPLoadoutBuilder_execWriteLoadout_Parms
{
	class UPgUnlockSystem*                             unlockSystem;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LoadoutIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMPPlayerLoadout                            loadout;                                          		// 0x0008 (0x0024) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgMPLoadoutBuilder.ReadLoadout
// [0x00420400] ( FUNC_Native )
struct UPgMPLoadoutBuilder_execReadLoadout_Parms
{
	class UPgUnlockSystem*                             unlockSystem;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LoadoutIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMPPlayerLoadout                            loadout;                                          		// 0x0008 (0x0024) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgMPLoadoutBuilder.SelectItem
// [0x00020400] ( FUNC_Native )
struct UPgMPLoadoutBuilder_execSelectItem_Parms
{
	class UPgUnlockItem*                               Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStoryLoadoutBuilder.Fill
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgStoryLoadoutBuilder_execFill_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgStoryLoadoutBuilder.GetControllerPawn
// [0x00020400] ( FUNC_Native )
struct UPgStoryLoadoutBuilder_execGetControllerPawn_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgStoryLoadoutBuilder.ApplyToPlayer
// [0x00020400] ( FUNC_Native )
struct UPgStoryLoadoutBuilder_execApplyToPlayer_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItem.IsVisibleInUI
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsVisibleInUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.IsDLC
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsDLC_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.IsDLCAvailable
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsDLCAvailable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.SetLoadoutArrayIndex
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execSetLoadoutArrayIndex_Parms
{
	int                                                LoadoutIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItem.GetLoadoutArrayIndex
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execGetLoadoutArrayIndex_Parms
{
	int                                                LoadoutIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.CanUseInStoryMode
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execCanUseInStoryMode_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.CanAddToMPLoadout
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execCanAddToMPLoadout_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.RemoveFromLoadout
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execRemoveFromLoadout_Parms
{
	int                                                LoadoutIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItem.AddToLoadout
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execAddToLoadout_Parms
{
	int                                                LoadoutIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItem.IsInLoadout
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsInLoadout_Parms
{
	int                                                LoadoutIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.Purchased
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execPurchased_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItem.Equip
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execEquip_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItem.Unlock
// [0x00420400] ( FUNC_Native )
struct UPgUnlockItem_execUnlock_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UPgUnlockItem* >                     ownedItems;                                       		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockItem.FindItemByName
// [0x00420400] ( FUNC_Native )
struct UPgUnlockItem_execFindItemByName_Parms
{
	struct FName                                       ItemName;                                         		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	TArray< class UPgUnlockItem* >                     Items;                                            		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UPgUnlockItem*                               ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.IsInArray
// [0x00420400] ( FUNC_Native )
struct UPgUnlockItem_execIsInArray_Parms
{
	struct FName                                       ItemName;                                         		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	TArray< class UPgUnlockItem* >                     Items;                                            		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.AreUnlockRequirementsSatisfied
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execAreUnlockRequirementsSatisfied_Parms
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UPgUnlockItem* >                     ownedItems;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.IsDisabled
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsDisabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.IsRecentlyAvailableForPurchase
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsRecentlyAvailableForPurchase_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.IsAvailableForPurchase
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsAvailableForPurchase_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.GetUnlockType
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execGetUnlockType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.IsRecentlyOwned
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsRecentlyOwned_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.IsOwned
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execIsOwned_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.GetCost
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execGetCost_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockItem.GetDisplayUnlockCondition
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execGetDisplayUnlockCondition_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockItem.GetDisplayDescription
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execGetDisplayDescription_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockItem.GetDisplayName
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItem_execGetDisplayName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockItemInventory.Equip
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItemInventory_execEquip_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItemPerk.Equip
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItemPerk_execEquip_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItemPlayerLoadout.Purchased
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItemPlayerLoadout_execPurchased_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItemPlayerLoadout.Equip
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItemPlayerLoadout_execEquip_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItemPlayerUpgrade.Equip
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItemPlayerUpgrade_execEquip_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockItemVehicle.Equip
// [0x00020400] ( FUNC_Native )
struct UPgUnlockItemVehicle_execEquip_Parms
{
	class APgPlayerController*                         Controller;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APgPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.GetController
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgUnlockSystem_execGetController_Parms
{
	class APgPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockSystem.SortItems
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgUnlockSystem_execSortItems_Parms
{
	int                                                Low;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                High;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.SetPlayerSkin
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execSetPlayerSkin_Parms
{
	class UPgUnlockItemPlayerSkin*                     skin;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.GetPlayerSkins
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetPlayerSkins_Parms
{
	TArray< class UPgUnlockItemPlayerSkin* >           skins;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.RefreshDLC
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execRefreshDLC_Parms
{
};

// Function GridGame.PgUnlockSystem.DebugPurchaseAll
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execDebugPurchaseAll_Parms
{
	struct FString                                     ItemType;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                PlayerLevel;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.DisplayDebugPlayerLoadouts
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execDisplayDebugPlayerLoadouts_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgUnlockSystem.DisplayDebugInventory
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execDisplayDebugInventory_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgUnlockSystem.DisplayDebugLoadout
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execDisplayDebugLoadout_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LoadoutIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgUnlockSystem.DisplayDebug
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgUnlockSystem.IsLoadoutEditingPossible
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execIsLoadoutEditingPossible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockSystem.GetLoadoutBuilder
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execGetLoadoutBuilder_Parms
{
	class UPgMPLoadoutBuilder*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockSystem.SetLoadout
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execSetLoadout_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMPPlayerLoadout                            loadout;                                          		// 0x0004 (0x0024) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgUnlockSystem.GetLoadout
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetLoadout_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMPPlayerLoadout                            loadout;                                          		// 0x0004 (0x0024) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgUnlockSystem.SetActiveLoadout
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execSetActiveLoadout_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.GetActiveLoadout
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execGetActiveLoadout_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockSystem.SetNumLoadouts
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execSetNumLoadouts_Parms
{
	int                                                Num;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.GetNumLoadouts
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execGetNumLoadouts_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgUnlockSystem.GetItemsFromLoadoutString
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetItemsFromLoadoutString_Parms
{
	TArray< class UPgUnlockItem* >                     Items;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     loadoutText;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.WriteLoadoutToString
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execWriteLoadoutToString_Parms
{
	struct FString                                     loadoutText;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.SetupUnlockSystem
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execSetupUnlockSystem_Parms
{
};

// Function GridGame.PgUnlockSystem.GetMPLoadoutString
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetMPLoadoutString_Parms
{
	struct FString                                     loadoutText;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.SetupPlayer
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execSetupPlayer_Parms
{
};

// Function GridGame.PgUnlockSystem.GetItemsForLevelUp
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetItemsForLevelUp_Parms
{
	int                                                oldLevel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newLevel;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UPgUnlockItem* >                     Unlocks;                                          		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< class UPgUnlockItem* >                     Upgrades;                                         		// 0x0014 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.DoTest
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPgUnlockSystem_execDoTest_Parms
{
	int                                                testIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.ResetRecent
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execResetRecent_Parms
{
};

// Function GridGame.PgUnlockSystem.ResetRecentlyAvailableForPurchase
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execResetRecentlyAvailableForPurchase_Parms
{
};

// Function GridGame.PgUnlockSystem.GetItemsRecentlyAvailableForPurchase
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetItemsRecentlyAvailableForPurchase_Parms
{
	TArray< class UPgUnlockItem* >                     Items;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.GetItemsAvailableForPurchase
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetItemsAvailableForPurchase_Parms
{
	TArray< class UPgUnlockItem* >                     Items;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.ResetRecentlyOwned
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execResetRecentlyOwned_Parms
{
};

// Function GridGame.PgUnlockSystem.GetItemsRecentlyOwned
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetItemsRecentlyOwned_Parms
{
	TArray< class UPgUnlockItem* >                     Items;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.GetOwnedItems
// [0x00420400] ( FUNC_Native )
struct UPgUnlockSystem_execGetOwnedItems_Parms
{
	TArray< class UPgUnlockItem* >                     Items;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GridGame.PgUnlockSystem.ProcessChanges
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UPgUnlockSystem_execProcessChanges_Parms
{
	unsigned char                                      changeType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.NewContentAvailable
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execNewContentAvailable_Parms
{
};

// Function GridGame.PgUnlockSystem.PlayerLevelChanged
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execPlayerLevelChanged_Parms
{
	int                                                oldLevel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newLevel;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.ItemPurchased
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execItemPurchased_Parms
{
	class UPgUnlockItem*                               Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                currentLevel;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgUnlockSystem.ResetToDefaults
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execResetToDefaults_Parms
{
};

// Function GridGame.PgUnlockSystem.Initialize
// [0x00020400] ( FUNC_Native )
struct UPgUnlockSystem_execInitialize_Parms
{
};

// Function GridGame.DESLightAttackPawn.ThrowDiscFct
// [0x00820802] ( FUNC_Event )
struct ADESLightAttackPawn_eventThrowDiscFct_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AProjectile*                              locProj;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StartRotation;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FName                                    SocketName;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function GridGame.DESLightAttackPawn.ThrowDisc
// [0x00020002] 
struct ADESLightAttackPawn_execThrowDisc_Parms
{
};

// Function GridGame.DESLightAttackPawn.SetDiscTarget
// [0x00020802] ( FUNC_Event )
struct ADESLightAttackPawn_eventSetDiscTarget_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDisplayDebugHelper.DrawText
// [0x00020102] 
struct UPgDisplayDebugHelper_execDrawText_Parms
{
	struct FString                                     T;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// TArray< struct FString >                        Lines;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GridGame.PgDisplayDebugHelper.IncrementIndentLevel
// [0x00020102] 
struct UPgDisplayDebugHelper_execIncrementIndentLevel_Parms
{
	float                                              I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDisplayDebugHelper.SetDrawColor
// [0x00020102] 
struct UPgDisplayDebugHelper_execSetDrawColor_Parms
{
	int                                                R;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                G;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                B;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDisplayDebugHelper.ShouldDisplayDebug
// [0x00020002] 
struct UPgDisplayDebugHelper_execShouldDisplayDebug_Parms
{
	struct FName                                       DebugType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgDisplayDebugHelper.GetCanvas
// [0x00020102] 
struct UPgDisplayDebugHelper_execGetCanvas_Parms
{
	class UCanvas*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgCameraSpecifierInterface.SetCameraArchetype
// [0x00020100] 
struct UPgCameraSpecifierInterface_execSetCameraArchetype_Parms
{
	class APgPlayerCamera*                             newArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgCameraSpecifierInterface.GetCameraArchetype
// [0x00020100] 
struct UPgCameraSpecifierInterface_execGetCameraArchetype_Parms
{
	class APgPlayerCamera*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgDebugCamera.UpdateViewTarget
// [0x00420002] 
struct APgDebugCamera_execUpdateViewTarget_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDebugCamera.DisplayDebug
// [0x00420102] 
struct APgDebugCamera_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgCheatManagerDebugCamera.ToggleDebugFixedCam
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerDebugCamera_execToggleDebugFixedCam_Parms
{
};

// Function GridGame.PgCheatManagerDebugCamera.ToggleDebugCamera
// [0x00020202] ( FUNC_Exec )
struct UPgCheatManagerDebugCamera_execToggleDebugCamera_Parms
{
};

// Function GridGame.PgDebugCameraController.DebugCamToFixedCamEnd
// [0x00020002] 
struct APgDebugCameraController_execDebugCamToFixedCamEnd_Parms
{
	// class APgDebugCamera*                           PgDebugCamera;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgDebugCameraController.DebugCamToFixedCamStart
// [0x00020202] ( FUNC_Exec )
struct APgDebugCameraController_execDebugCamToFixedCamStart_Parms
{
	// class APgPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APgDebugCamera*                           PgDebugCamera;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgDebugCameraController.AmInDebugFixedCam
// [0x00020002] 
struct APgDebugCameraController_execAmInDebugFixedCam_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgDebugCameraController.DisplayDebug
// [0x00420102] 
struct APgDebugCameraController_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridGame.PgDebugCameraController.OnDeactivate
// [0x00020002] 
struct APgDebugCameraController_execOnDeactivate_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDebugCameraController.OnActivate
// [0x00020002] 
struct APgDebugCameraController_execOnActivate_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDebugCameraController.CopyCommonPlayerControllerSettings
// [0x00020002] 
struct APgDebugCameraController_execCopyCommonPlayerControllerSettings_Parms
{
	class APlayerController*                           From;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           To;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgDebugCameraInput.PlayerInput
// [0x00020802] ( FUNC_Event )
struct UPgDebugCameraInput_eventPlayerInput_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSeqAct_ClientSetCameraTarget.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UPgSeqAct_ClientSetCameraTarget_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSavedMove.ToString
// [0x00020003] ( FUNC_Final )
struct UPgSavedMove_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridGame.PgSavedMove.SetFlags
// [0x00022002] 
struct UPgSavedMove_execSetFlags_Parms
{
	unsigned char                                      Flags;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSavedMove.CompressedFlags
// [0x00020002] 
struct UPgSavedMove_execCompressedFlags_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   Result;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
};

// Function GridGame.PgSavedMove.SetPawnToStartPosition
// [0x00020003] ( FUNC_Final )
struct UPgSavedMove_execSetPawnToStartPosition_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  PgPawn;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSavedMove.CombineWith
// [0x00020003] ( FUNC_Final )
struct UPgSavedMove_execCombineWith_Parms
{
	class UPgSavedMove*                                moveToCombine;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       P;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSavedMove.CanCombineWith
// [0x00020002] 
struct UPgSavedMove_execCanCombineWith_Parms
{
	class USavedMove*                                  OlderMoveToCombine;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       inPawn;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxDelta;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UPgSavedMove*                             pgMove;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSavedMove.IsImportantMove
// [0x00020002] 
struct UPgSavedMove_execIsImportantMove_Parms
{
	struct FVector                                     CompareAccel;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSavedMove.PostAdjustment
// [0x00020003] ( FUNC_Final )
struct UPgSavedMove_execPostAdjustment_Parms
{
	class APgPlayerController*                         P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSavedMove.PostUpdate
// [0x00020002] 
struct UPgSavedMove_execPostUpdate_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridGame.PgSavedMove.PreUpdate
// [0x00020003] ( FUNC_Final )
struct UPgSavedMove_execPreUpdate_Parms
{
	class APgPlayerController*                         P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  PgPawn;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSavedMove.SetMoveFor
// [0x00020002] 
struct UPgSavedMove_execSetMoveFor_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newAccel;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InDoubleClick;                                    		// 0x0014 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  PgPawn;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSavedMove.Clear
// [0x00020002] 
struct UPgSavedMove_execClear_Parms
{
};

// Function GridGame.PgSavedMove.IsComboMove
// [0x00020003] ( FUNC_Final )
struct UPgSavedMove_execIsComboMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSavedMove.GetMoveRepStruct
// [0x00820003] ( FUNC_Final )
struct UPgSavedMove_execGetMoveRepStruct_Parms
{
	struct FPgSavedMoveRepParams                       ReturnValue;                                      		// 0x0000 (0x00CC) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FPgSavedMoveRepParams                    repStruct;                                        		// 0x00CC (0x00CC) [0x0000000000000000]              
};

// Function GridGame.PgSavedMove.GetComboRepStruct
// [0x00820003] ( FUNC_Final )
struct UPgSavedMove_execGetComboRepStruct_Parms
{
	struct FPgSavedMoveComboParams                     ReturnValue;                                      		// 0x0000 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FPgSavedMoveComboParams                  comboRepStruct;                                   		// 0x002C (0x002C) [0x0000000000000000]              
};

// Function GridGame.PgSavedMove.CopyComboChainArray
// [0x00420003] ( FUNC_Final )
struct UPgSavedMove_execCopyComboChainArray_Parms
{
	class UPgSpecialMoveAsset*                         fromArray[ 0x8 ];                                 		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class UPgSpecialMoveAsset*                         toArray[ 0x8 ];                                   		// 0x0020 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgSeqAct_UIGetObjectProperty.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UPgSeqAct_UIGetObjectProperty_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgSeqAct_UIGetObjectProperty.IsValidUISequenceObject
// [0x00024802] ( FUNC_Event )
struct UPgSeqAct_UIGetObjectProperty_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicleWeapon.GetVehicleWeaponFireTriggerTag
// [0x00020102] 
struct APgVehicleWeapon_execGetVehicleWeaponFireTriggerTag_Parms
{
	int                                                BarrelIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FireMode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicleWeapon.CustomFire
// [0x00020102] 
struct APgVehicleWeapon_execCustomFire_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicleWeapon.StartFire
// [0x00020102] 
struct APgVehicleWeapon_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class APgVehicle*                               PgVehicle;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicleWeapon.PostBeginPlay
// [0x00020102] 
struct APgVehicleWeapon_execPostBeginPlay_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicleVolume.StopsProjectile
// [0x00020102] 
struct APgVehicleVolume_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridGame.PgVehicleVolume.PawnLeavingVolume
// [0x00020802] ( FUNC_Event )
struct APgVehicleVolume_eventPawnLeavingVolume_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgVehicle*                               PgVehicle;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APgVehicleVolume*                         CurrentVolume;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APgVehicleVolume*                         otherVolume;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgVehicleVolume.PawnEnteredVolume
// [0x00020802] ( FUNC_Event )
struct APgVehicleVolume_eventPawnEnteredVolume_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APgPawn*                                  PgPawn;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridGame.PgWeapFireTypeInstantHit.CustomFire
// [0x00020102] 
struct UPgWeapFireTypeInstantHit_execCustomFire_Parms
{
	class AWeapon*                                     Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif