/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GridVehicle_f_structs.h
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

// Function GridVehicle.ForcedDirVolume.StopsProjectile
// [0x00020102] 
struct AForcedDirVolume_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.ForcedDirVolume.UnTouch
// [0x00020902] ( FUNC_Event )
struct AForcedDirVolume_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bInAnotherVolume : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AForcedDirVolume*                         AnotherVolume;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.ForcedDirVolume.Touch
// [0x00020902] ( FUNC_Event )
struct AForcedDirVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicle*                               V;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.ForcedDirVolume.ActorEnteredVolume
// [0x00020802] ( FUNC_Event )
struct AForcedDirVolume_eventActorEnteredVolume_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.ForcedDirVolume.PostBeginPlay
// [0x00020102] 
struct AForcedDirVolume_execPostBeginPlay_Parms
{
};

// Function GridVehicle.UTSkelControl_Damage.RestorePart
// [0x00020902] ( FUNC_Event )
struct UUTSkelControl_Damage_eventRestorePart_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTSkelControl_Damage.BreakApartOnDeath
// [0x00020902] ( FUNC_Event )
struct UUTSkelControl_Damage_eventBreakApartOnDeath_Parms
{
	struct FVector                                     PartLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsVisible : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTSkelControl_Damage.BreakApart
// [0x00020902] ( FUNC_Event )
struct UUTSkelControl_Damage_eventBreakApart_Parms
{
	struct FVector                                     PartLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsVisible : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTSkelControl_TurretConstrained.WouldConstrainPitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUTSkelControl_TurretConstrained_execWouldConstrainPitch_Parms
{
	int                                                TestPitch;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTSkelControl_TurretConstrained.InitTurret
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUTSkelControl_TurretConstrained_execInitTurret_Parms
{
	struct FRotator                                    InitRot;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x000C (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GridVehicle.UTSkelControl_TurretConstrained.OnTurretStatusChange
// [0x00120000] 
struct UUTSkelControl_TurretConstrained_execOnTurretStatusChange_Parms
{
	unsigned long                                      bIsMoving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTVehicleBase.ApplyWeaponEffects
// [0x00024100] 
struct AUTVehicleBase_execApplyWeaponEffects_Parms
{
	int                                                OverlayFlags;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTVehicleBase.QuickPick
// [0x00020100] 
struct AUTVehicleBase_execQuickPick_Parms
{
	int                                                Quad;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicleBase.DisplayHud
// [0x00024000] 
struct AUTVehicleBase_execDisplayHud_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   HudPOS;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                SIndex;                                           		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTVehicleBase.GetPowerLevel
// [0x00420102] 
struct AUTVehicleBase_execGetPowerLevel_Parms
{
	float                                              PowerLevel;                                       		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleBase.HandleDeadVehicleDriver
// [0x00020002] 
struct AUTVehicleBase_execHandleDeadVehicleDriver_Parms
{
	// class APawn*                                    OldDriver;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AUTVehicle*                               VehicleBase;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleBase.DetachDriver
// [0x00020102] 
struct AUTVehicleBase_execDetachDriver_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicleBase.StopFiringWeapon
// [0x00020102] 
struct AUTVehicleBase_execStopFiringWeapon_Parms
{
};

// Function GridVehicle.UTVehicleBase.EjectDriver
// [0x00820002] 
struct AUTVehicleBase_execEjectDriver_Parms
{
	// float                                           Speed;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 ExitRotation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleBase.DriverLeft
// [0x00020002] 
struct AUTVehicleBase_execDriverLeft_Parms
{
	// class AAIController*                            C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleBase.DriverEnter
// [0x00020002] 
struct AUTVehicleBase_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AAIController*                            C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleBase.DrivingStatusChanged
// [0x00020102] 
struct AUTVehicleBase_execDrivingStatusChanged_Parms
{
};

// Function GridVehicle.UTVehicleBase.GetVehicleDrivingStatName
// [0x00020002] 
struct AUTVehicleBase_execGetVehicleDrivingStatName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FName                                    VehicleStatName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleBase.NeedToTurn
// [0x00020002] 
struct AUTVehicleBase_execNeedToTurn_Parms
{
	struct FVector                                     targ;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTVehicleWeapon*                         VWeapon;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleBase.GetDamageScaling
// [0x00020002] 
struct AUTVehicleBase_execGetDamageScaling_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleBase.BotFire
// [0x00020002] 
struct AUTVehicleBase_execBotFire_Parms
{
	unsigned long                                      bFinished : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleBase.ChooseFireMode
// [0x00020002] 
struct AUTVehicleBase_execChooseFireMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleBase.ServerChangeSeat
// [0x002200C0] 
struct AUTVehicleBase_execServerChangeSeat_Parms
{
	int                                                RequestedSeat;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicleBase.ServerAdjacentSeat
// [0x002200C0] 
struct AUTVehicleBase_execServerAdjacentSeat_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 C;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicleBase.AdjacentSeat
// [0x00020102] 
struct AUTVehicleBase_execAdjacentSeat_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 C;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicleBase.SwitchWeapon
// [0x00020102] 
struct AUTVehicleBase_execSwitchWeapon_Parms
{
	unsigned char                                      NewGroup;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.DetachTowCable
// [0x00020000] 
struct AUTVehicle_execDetachTowCable_Parms
{
};

// Function GridVehicle.UTVehicle.GetTowedVehicles
// [0x00420002] 
struct AUTVehicle_execGetTowedVehicles_Parms
{
	TArray< class AUTVehicle* >                        TowedVehicles;                                    		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class AUTVehicle*                               V;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetTowingVehicle
// [0x00020000] 
struct AUTVehicle_execGetTowingVehicle_Parms
{
	class AUTVehicle*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.OnTouchForcedDirVolume
// [0x00020002] 
struct AUTVehicle_execOnTouchForcedDirVolume_Parms
{
	class AForcedDirVolume*                            Vol;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.ApplyWeaponEffects
// [0x00024102] 
struct AUTVehicle_execApplyWeaponEffects_Parms
{
	int                                                OverlayFlags;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             OverlayIndex;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetVehicleKillStatName
// [0x00020002] 
struct AUTVehicle_execGetVehicleKillStatName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FName                                    VehicleKillStatName;                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.CanAttack
// [0x00020002] 
struct AUTVehicle_execCanAttack_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           MaxRange;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AWeapon*                                  W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetAlternateLockTarget
// [0x00020400] ( FUNC_Native )
struct AUTVehicle_execGetAlternateLockTarget_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.DetachDriver
// [0x00020102] 
struct AUTVehicle_execDetachDriver_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.SetMovementEffect
// [0x00024102] 
struct AUTVehicle_execSetMovementEffect_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSetActive : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class APawn*                                       UTP;                                              		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// unsigned long                                   bIsLocal : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridVehicle.UTVehicle.SetSeatStoragePawn
// [0x00020002] 
struct AUTVehicle_execSetSeatStoragePawn_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       PawnToSit;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Mask;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetHoverBoardAttachPoint
// [0x00820102] 
struct AUTVehicle_execGetHoverBoardAttachPoint_Parms
{
	struct FVector                                     HoverBoardLocation;                               		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FName                                    Result;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           MinDist;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  V;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetHoverBoardAttachPointInUse
// [0x00020102] 
struct AUTVehicle_execSetHoverBoardAttachPointInUse_Parms
{
	struct FName                                       PointName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInUse : 1;                                       		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFound : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridVehicle.UTVehicle.SetShieldActive
// [0x00020000] 
struct AUTVehicle_execSetShieldActive_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bActive : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.GetSVehicleDebug
// [0x00420102] 
struct AUTVehicle_execGetSVehicleDebug_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.MorphTargetDestroyed
// [0x00020900] ( FUNC_Event )
struct AUTVehicle_eventMorphTargetDestroyed_Parms
{
	int                                                MorphNodeIndex;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.ApplyRandomMorphDamage
// [0x00020102] 
struct AUTVehicle_execApplyRandomMorphDamage_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Min;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             minindex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           MinAmt;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Weight;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ApplyMorphHeal
// [0x00020902] ( FUNC_Event )
struct AUTVehicle_eventApplyMorphHeal_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Individual;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Total;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Remaining;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Weight;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ReceivedHealthChange
// [0x00020902] ( FUNC_Event )
struct AUTVehicle_eventReceivedHealthChange_Parms
{
	// int                                             Diff;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ApplyMorphDamage
// [0x00020400] ( FUNC_Native )
struct AUTVehicle_execApplyMorphDamage_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.UpdateDamageMaterial
// [0x00020500] ( FUNC_Native )
struct AUTVehicle_execUpdateDamageMaterial_Parms
{
};

// Function GridVehicle.UTVehicle.InitDamageSkel
// [0x00020500] ( FUNC_Native )
struct AUTVehicle_execInitDamageSkel_Parms
{
};

// Function GridVehicle.UTVehicle.InitializeMorphs
// [0x00020102] 
struct AUTVehicle_execInitializeMorphs_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.RBPenetrationDestroy
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventRBPenetrationDestroy_Parms
{
};

// Function GridVehicle.UTVehicle.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct AUTVehicle_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        Collision;                                        		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Damage;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// class AUTVehicle*                               V;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatorController;                             		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetCollisionDamageModifier
// [0x00C20002] 
struct AUTVehicle_execGetCollisionDamageModifier_Parms
{
	TArray< struct FRigidBodyContactInfo >             ContactInfos;                                     		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Angle;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetHealth
// [0x00020102] 
struct AUTVehicle_execGetHealth_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.OnPropertyChange
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventOnPropertyChange_Parms
{
	struct FName                                       PropName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetHumanReadableName
// [0x00020102] 
struct AUTVehicle_execGetHumanReadableName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GridVehicle.UTVehicle.SitDriver
// [0x00020102] 
struct AUTVehicle_execSitDriver_Parms
{
	class APawn*                                       UTP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.AttachDriver
// [0x00020102] 
struct AUTVehicle_execAttachDriver_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    UTP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.CheckDamageSmoke
// [0x00020102] 
struct AUTVehicle_execCheckDamageSmoke_Parms
{
};

// Function GridVehicle.UTVehicle.StopVehicleSounds
// [0x00020102] 
struct AUTVehicle_execStopVehicleSounds_Parms
{
	// int                                             SeatIdx;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.TurretExplosion
// [0x00820102] 
struct AUTVehicle_execTurretExplosion_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ShouldSpawnExplosionLight
// [0x00020102] 
struct AUTVehicle_execShouldSpawnExplosionLight_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetBurnOut
// [0x00820102] 
struct AUTVehicle_execSetBurnOut_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumElements;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             TeamNum;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FBurnOutDatum                            BOD;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.DisableCollision
// [0x00020102] 
struct AUTVehicle_execDisableCollision_Parms
{
};

// Function GridVehicle.UTVehicle.DisableDamageSmoke
// [0x00020102] 
struct AUTVehicle_execDisableDamageSmoke_Parms
{
};

// Function GridVehicle.UTVehicle.TurnOffShadows
// [0x00020102] 
struct AUTVehicle_execTurnOffShadows_Parms
{
};

// Function GridVehicle.UTVehicle.StartBurnOut
// [0x00020102] 
struct AUTVehicle_execStartBurnOut_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumBurnOutMaterials;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.AdjustCameraScale
// [0x00020100] 
struct AUTVehicle_execAdjustCameraScale_Parms
{
	unsigned long                                      bMoveCameraIn : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.VehicleCalcCamera
// [0x00C24102] 
struct AUTVehicle_execVehicleCalcCamera_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     CamStart;                                         		// 0x0020 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bPivotOnly : 1;                                   		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  CamPos;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamDir;                                           		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FirstHitLocation;                                 		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotX;                                          		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotY;                                          		// 0x0078 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotZ;                                          		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SafeLocation;                                     		// 0x0090 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x009C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x00A8 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x00B4 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	// float                                           NewCamStartZ;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bObstructed : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bInsideVehicle : 1;                               		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridVehicle.UTVehicle.LimitCameraZ
// [0x00820102] 
struct AUTVehicle_execLimitCameraZ_Parms
{
	float                                              CurrentCamZ;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              OriginalCamZ;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 CamRot;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetCameraStart
// [0x00820102] 
struct AUTVehicle_execGetCameraStart_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Len;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Obsolete;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CamStart;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           OriginalCamZ;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FTimePosition                            NewPos;                                           		// 0x002C (0x0010) [0x0000000000000000]              
	// struct FTimePosition                            PrevPos;                                          		// 0x003C (0x0010) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetCameraFocus
// [0x00820102] 
struct AUTVehicle_execGetCameraFocus_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  CamStart;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.CalcCamera
// [0x00C20102] 
struct AUTVehicle_execCalcCamera_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  out_CamStart;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.FindGoodEndView
// [0x00C20102] 
struct AUTVehicle_execFindGoodEndView_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    GoodRotation;                                     		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  cameraLoc;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 cameraRot;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// int                                             tries;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           bestDist;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           newdist;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           FOVAngle;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.VehicleAdjustFlashLocation
// [0x00024102] 
struct AUTVehicle_execVehicleAdjustFlashLocation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bClear : 1;                                       		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTVehicle.VehicleAdjustFlashCount
// [0x00024102] 
struct AUTVehicle_execVehicleAdjustFlashCount_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bClear : 1;                                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTVehicle.FindWeaponHitNormal
// [0x00420102] 
struct AUTVehicle_execFindWeaponHitNormal_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     End;                                              		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Start;                                            		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0030 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      ReturnValue;                                      		// 0x004C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.VehicleWeaponFireEffects
// [0x00020102] 
struct AUTVehicle_execVehicleWeaponFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.VehicleWeaponStoppedFiring
// [0x00020102] 
struct AUTVehicle_execVehicleWeaponStoppedFiring_Parms
{
	unsigned long                                      bViaReplication : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    StopName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.WeaponStoppedFiring
// [0x00020102] 
struct AUTVehicle_execWeaponStoppedFiring_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.VehicleWeaponFired
// [0x00020102] 
struct AUTVehicle_execVehicleWeaponFired_Parms
{
	unsigned long                                      bViaReplication : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.WeaponFired
// [0x00024102] 
struct AUTVehicle_execWeaponFired_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTVehicle.CauseMuzzleFlashLight
// [0x00020102] 
struct AUTVehicle_execCauseMuzzleFlashLight_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.OverrideEndFire
// [0x00020100] 
struct AUTVehicle_execOverrideEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.OverrideBeginFire
// [0x00020100] 
struct AUTVehicle_execOverrideBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.GetWeaponAim
// [0x00820002] 
struct AUTVehicle_execGetWeaponAim_Parms
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
};

// Function GridVehicle.UTVehicle.GetPhysicalFireStartLoc
// [0x00020102] 
struct AUTVehicle_execGetPhysicalFireStartLoc_Parms
{
	class AGameWeapon*                                 ForWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTVehicleWeapon*                         VWeap;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetEffectLocation
// [0x00820102] 
struct AUTVehicle_execGetEffectLocation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetBarrelLocationAndRotation
// [0x00424902] ( FUNC_Event )
struct AUTVehicle_eventGetBarrelLocationAndRotation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SocketLocation;                                   		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SocketRotation;                                   		// 0x0010 (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function GridVehicle.UTVehicle.ClearFlashLocation
// [0x00020002] 
struct AUTVehicle_execClearFlashLocation_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicleWeapon*                         VWeap;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetFlashLocation
// [0x00020102] 
struct AUTVehicle_execSetFlashLocation_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicleWeapon*                         VWeap;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.IncrementFlashCount
// [0x00020102] 
struct AUTVehicle_execIncrementFlashCount_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicleWeapon*                         VWeap;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ClearFlashCount
// [0x00020102] 
struct AUTVehicle_execClearFlashCount_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicleWeapon*                         VWeap;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetFiringMode
// [0x00020102] 
struct AUTVehicle_execSetFiringMode_Parms
{
	class AWeapon*                                     Weap;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringModeNum;                                    		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.PossessedBy
// [0x00020002] 
struct AUTVehicle_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.InitializeTurrets
// [0x00820102] 
struct AUTVehicle_execInitializeTurrets_Parms
{
	// int                                             Seat;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UUTSkelControl_TurretConstrained*         Turret;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PivotLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  MuzzleLoc;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.PreCacheSeatNames
// [0x00020102] 
struct AUTVehicle_execPreCacheSeatNames_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.InitializeSeats
// [0x00020002] 
struct AUTVehicle_execInitializeSeats_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ImportantVehicle
// [0x00020002] 
struct AUTVehicle_execImportantVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.IsArtillery
// [0x00020002] 
struct AUTVehicle_execIsArtillery_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.TakeDamage
// [0x00024902] ( FUNC_Event )
struct AUTVehicle_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTVehicle.NotifyTakeHit
// [0x00020002] 
struct AUTVehicle_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.PlayTakeHitEffects
// [0x00020902] ( FUNC_Event )
struct AUTVehicle_eventPlayTakeHitEffects_Parms
{
};

// Function GridVehicle.UTVehicle.PlayHit
// [0x00020002] 
struct AUTVehicle_execPlayHit_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.StopLinkedEffect
// [0x00880102] 
struct AUTVehicle_execStopLinkedEffect_Parms
{
	// class UMaterialInstanceConstant*                MIC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             Black;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.StartLinkedEffect
// [0x00880102] 
struct AUTVehicle_execStartLinkedEffect_Parms
{
	// class UMaterialInstanceConstant*                MIC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             Red;                                              		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             Blue;                                             		// 0x0014 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.DecrementLinkedToCount
// [0x00020002] 
struct AUTVehicle_execDecrementLinkedToCount_Parms
{
};

// Function GridVehicle.UTVehicle.IncrementLinkedToCount
// [0x00020002] 
struct AUTVehicle_execIncrementLinkedToCount_Parms
{
};

// Function GridVehicle.UTVehicle.HealDamage
// [0x00020002] 
struct AUTVehicle_execHealDamage_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.AllowLinkThroughOwnedActor
// [0x00020100] 
struct AUTVehicle_execAllowLinkThroughOwnedActor_Parms
{
	class AActor*                                      OwnedActor;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.TeamLink
// [0x00020002] 
struct AUTVehicle_execTeamLink_Parms
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.SetReservation
// [0x00020002] 
struct AUTVehicle_execSetReservation_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.StopsProjectile
// [0x00020102] 
struct AUTVehicle_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.SpokenFor
// [0x00020002] 
struct AUTVehicle_execSpokenFor_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.ChangedReservation
// [0x00020002] 
struct AUTVehicle_execChangedReservation_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.ReservationCostMultiplier
// [0x00020002] 
struct AUTVehicle_execReservationCostMultiplier_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.GetTeamNum
// [0x00020500] ( FUNC_Native )
struct AUTVehicle_execGetTeamNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.OpenPositionFor
// [0x00020002] 
struct AUTVehicle_execOpenPositionFor_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.Occupied
// [0x00020002] 
struct AUTVehicle_execOccupied_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.CheckReset
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventCheckReset_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.PassengerLeave
// [0x00020002] 
struct AUTVehicle_execPassengerLeave_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.DriverLeave
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridVehicle.UTVehicle.PassengerEnter
// [0x00020002] 
struct AUTVehicle_execPassengerEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.GetFirstAvailableSeat
// [0x00020002] 
struct AUTVehicle_execGetFirstAvailableSeat_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.DriverLeft
// [0x00020002] 
struct AUTVehicle_execDriverLeft_Parms
{
};

// Function GridVehicle.UTVehicle.DriverEnter
// [0x00020002] 
struct AUTVehicle_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.GetMoveTargetFor
// [0x00020002] 
struct AUTVehicle_execGetMoveTargetFor_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTVehicle*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.NumPassengers
// [0x00020102] 
struct AUTVehicle_execNumPassengers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Num;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.UpdateControllerOnPossess
// [0x00020000] 
struct AUTVehicle_execUpdateControllerOnPossess_Parms
{
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.PlayHorn
// [0x00020002] 
struct AUTVehicle_execPlayHorn_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumPositions;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AUTVehicle*                               V;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.CheckTurretPitchLimit
// [0x00020002] 
struct AUTVehicle_execCheckTurretPitchLimit_Parms
{
	int                                                NeededPitch;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.TooCloseToAttack
// [0x00020002] 
struct AUTVehicle_execTooCloseToAttack_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             NeededPitch;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bControlledWeaponPawn : 1;                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridVehicle.UTVehicle.SendLockOnMessage
// [0x00020102] 
struct AUTVehicle_execSendLockOnMessage_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ShootMissile
// [0x00020002] 
struct AUTVehicle_execShootMissile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.IncomingMissile
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventIncomingMissile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AAIController*                            C;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.Dodge
// [0x00020000] 
struct AUTVehicle_execDodge_Parms
{
	unsigned char                                      DoubleClickMove;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.TeamChanged_VehicleEffects
// [0x00020102] 
struct AUTVehicle_execTeamChanged_VehicleEffects_Parms
{
	// int                                             Len;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             TeamNum;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             VehicleEffectIndex;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          NewTemplate;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.TeamChanged
// [0x00020102] 
struct AUTVehicle_execTeamChanged_Parms
{
	// class UMaterialInterface*                       NewMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetTeamNum
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventSetTeamNum_Parms
{
	unsigned char                                      T;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.GetDisplayedHealth
// [0x00020102] 
struct AUTVehicle_execGetDisplayedHealth_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
struct AUTVehicle_execNativePostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.ShouldShowUseable
// [0x00020100] 
struct AUTVehicle_execShouldShowUseable_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Dist;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.VehicleLocked
// [0x00020002] 
struct AUTVehicle_execVehicleLocked_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.TryToDrive
// [0x00820002] 
struct AUTVehicle_execTryToDrive_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  X;                                                		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0020 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bEnteredVehicle : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridVehicle.UTVehicle.CanEnterVehicle
// [0x00020102] 
struct AUTVehicle_execCanEnterVehicle_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSeatAvailable : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bIsHuman : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerReplicationInfo*                   SeatPRI;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetSeatPRI
// [0x00020102] 
struct AUTVehicle_execGetSeatPRI_Parms
{
	int                                                SeatNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.InCustomEntryRadius
// [0x00020002] 
struct AUTVehicle_execInCustomEntryRadius_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.BlowupVehicle
// [0x00020102] 
struct AUTVehicle_execBlowupVehicle_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.Died
// [0x00020002] 
struct AUTVehicle_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AAIController*                            aic;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetCollisionDamageInstigator
// [0x00020002] 
struct AUTVehicle_execGetCollisionDamageInstigator_Parms
{
	class AController*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.TornOff
// [0x00020902] ( FUNC_Event )
struct AUTVehicle_eventTornOff_Parms
{
};

// Function GridVehicle.UTVehicle.ChangeSeat
// [0x00020002] 
struct AUTVehicle_execChangeSeat_Parms
{
	class AController*                                 ControllerToMove;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RequestedSeat;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             OldSeatIndex;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class APawn*                                    OldPawn;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APawn*                                    BumpPawn;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AController*                              BumpController;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.HasPriority
// [0x00020002] 
struct AUTVehicle_execHasPriority_Parms
{
	class AController*                                 first;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Second;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.ServerChangeSeat
// [0x002200C2] 
struct AUTVehicle_execServerChangeSeat_Parms
{
	int                                                RequestedSeat;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.ServerAdjacentSeat
// [0x002200C2] 
struct AUTVehicle_execServerAdjacentSeat_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 C;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurrentSeat;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             NewSeat;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetControllerForSeatIndex
// [0x00020002] 
struct AUTVehicle_execGetControllerForSeatIndex_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.GetSeatIndexForController
// [0x00020102] 
struct AUTVehicle_execGetSeatIndexForController_Parms
{
	class AController*                                 ControllerToMove;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.AnySeatAvailable
// [0x00020002] 
struct AUTVehicle_execAnySeatAvailable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SeatAvailable
// [0x00020002] 
struct AUTVehicle_execSeatAvailable_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.OnAnimEnd
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.DrivingStatusChanged
// [0x00020102] 
struct AUTVehicle_execDrivingStatusChanged_Parms
{
};

// Function GridVehicle.UTVehicle.HasOccupiedTurret
// [0x00020002] 
struct AUTVehicle_execHasOccupiedTurret_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetKeyVehicle
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventSetKeyVehicle_Parms
{
};

// Function GridVehicle.UTVehicle.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AUTVehicle_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  VarString;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             SeatIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.WeaponRotationChanged
// [0x00020102] 
struct AUTVehicle_execWeaponRotationChanged_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetViewRotation
// [0x00020902] ( FUNC_Event )
struct AUTVehicle_eventGetViewRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.ShouldClamp
// [0x00020102] 
struct AUTVehicle_execShouldClamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.GetClampedViewRotation
// [0x00820102] 
struct AUTVehicle_execGetClampedViewRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 ViewRotation;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ControlRotation;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 MaxDelta;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AUTVehicleWeapon*                         VWeap;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ProcessViewRotation
// [0x00420102] 
struct AUTVehicle_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             MaxDelta;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           MaxDeltaDegrees;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ServerSetConsoleTurning
// [0x002200C2] 
struct AUTVehicle_execServerSetConsoleTurning_Parms
{
	unsigned long                                      bNewConsoleTurning : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.GetSeatIndexFromPrefix
// [0x00020102] 
struct AUTVehicle_execGetSeatIndexFromPrefix_Parms
{
	struct FString                                     Prefix;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.TakeFireDamage
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventTakeFireDamage_Parms
{
	// int                                             CurrentDamage;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.EnableVehicle
// [0x00020102] 
struct AUTVehicle_execEnableVehicle_Parms
{
};

// Function GridVehicle.UTVehicle.DisableVehicle
// [0x00020102] 
struct AUTVehicle_execDisableVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             SeatIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetTexturesToBeResident
// [0x00020102] 
struct AUTVehicle_execSetTexturesToBeResident_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class UTexture* >                       Textures;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             NumElems;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             NumTextures;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               Tex2d;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UMaterialInterface*                       Material;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.Destroyed
// [0x00020102] 
struct AUTVehicle_execDestroyed_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.DriverRadiusDamage
// [0x00024002] 
struct AUTVehicle_execDriverRadiusDamage_Parms
{
	float                                              DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageFalloffExponent;                            		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.TakeWaterDamage
// [0x00020802] ( FUNC_Event )
struct AUTVehicle_eventTakeWaterDamage_Parms
{
	// int                                             ImpartedWaterDamage;                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.PancakeOther
// [0x00020002] 
struct AUTVehicle_execPancakeOther_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.RanInto
// [0x00820802] ( FUNC_Event )
struct AUTVehicle_eventRanInto_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Speed;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.FindAutoExit
// [0x00820002] 
struct AUTVehicle_execFindAutoExit_Parms
{
	class APawn*                                       ExitingDriver;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  X;                                                		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           PlaceDist;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.ExitRotation
// [0x00020002] 
struct AUTVehicle_execExitRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.EntryAnnouncement
// [0x00020102] 
struct AUTVehicle_execEntryAnnouncement_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.VehicleEvent
// [0x00020102] 
struct AUTVehicle_execVehicleEvent_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.EagleEyeTarget
// [0x00020002] 
struct AUTVehicle_execEagleEyeTarget_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.PlayVehicleAnimation
// [0x00020100] 
struct AUTVehicle_execPlayVehicleAnimation_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.PlayVehicleSound
// [0x00020102] 
struct AUTVehicle_execPlayVehicleSound_Parms
{
	struct FName                                       SoundTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.TriggerVehicleEffect
// [0x00020102] 
struct AUTVehicle_execTriggerVehicleEffect_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetVehicleEffectParms
// [0x00020102] 
struct AUTVehicle_execSetVehicleEffectParms_Parms
{
	struct FName                                       TriggerName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystemComponent*                    PSC;                                              		// 0x0008 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Pct;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.InitializeEffects
// [0x00020102] 
struct AUTVehicle_execInitializeEffects_Parms
{
};

// Function GridVehicle.UTVehicle.CreateVehicleEffect
// [0x00020102] 
struct AUTVehicle_execCreateVehicleEffect_Parms
{
	int                                                EffectIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.IsDriverSeat
// [0x00020002] 
struct AUTVehicle_execIsDriverSeat_Parms
{
	class AVehicle*                                    TestSeatPawn;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.IsGoodTowTruck
// [0x00020002] 
struct AUTVehicle_execIsGoodTowTruck_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.FastVehicle
// [0x00020002] 
struct AUTVehicle_execFastVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.JumpOutCheck
// [0x00020800] ( FUNC_Event )
struct AUTVehicle_eventJumpOutCheck_Parms
{
};

// Function GridVehicle.UTVehicle.DrawKillIcon
// [0x00822102] 
struct AUTVehicle_execDrawKillIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ScreenX;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ScreenY;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HUDScaleX;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HUDScaleY;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FColor                                   CanvasColor;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SetHUDLocation
// [0x00020500] ( FUNC_Native )
struct AUTVehicle_execSetHUDLocation_Parms
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.EjectSeat
// [0x00020002] 
struct AUTVehicle_execEjectSeat_Parms
{
	int                                                SeatIdx;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicleBase*                           VB;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.SelfDestruct
// [0x00020800] ( FUNC_Event )
struct AUTVehicle_eventSelfDestruct_Parms
{
	class AActor*                                      ImpactedActor;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.StopSpawnEffect
// [0x00020102] 
struct AUTVehicle_execStopSpawnEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.PlaySpawnEffect
// [0x00020102] 
struct AUTVehicle_execPlaySpawnEffect_Parms
{
	// class UMaterialInstanceTimeVarying*             SpawnMaterialInstance;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.GetChargePower
// [0x00020100] 
struct AUTVehicle_execGetChargePower_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
struct AUTVehicle_eventFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.SetInputs
// [0x00820102] 
struct AUTVehicle_execSetInputs_Parms
{
	float                                              InForward;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InStrafe;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InUp;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bReverseThrottle : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AGamePlayerController*                    ConsolePC;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 SteerRot;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 VehicleRot;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SteerDir;                                         		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  VehicleDir;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AngVel;                                           		// 0x0044 (0x000C) [0x0000000000000000]              
	// float                                           VehicleHeading;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           SteerHeading;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           DeltaTargetHeading;                               		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           Deflection;                                       		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.UpdateLookSteerStatus
// [0x00020102] 
struct AUTVehicle_execUpdateLookSteerStatus_Parms
{
};

// Function GridVehicle.UTVehicle.CreateDamageMaterialInstance
// [0x00020102] 
struct AUTVehicle_execCreateDamageMaterialInstance_Parms
{
};

// Function GridVehicle.UTVehicle.ReattachMesh
// [0x00020102] 
struct AUTVehicle_execReattachMesh_Parms
{
};

// Function GridVehicle.UTVehicle.UpdateShadowSettings
// [0x00020102] 
struct AUTVehicle_execUpdateShadowSettings_Parms
{
	unsigned long                                      bWantShadow : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bNewCastShadow : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bNewCastDynamicShadow : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridVehicle.UTVehicle.PostBeginPlay
// [0x00020102] 
struct AUTVehicle_execPostBeginPlay_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicle.IsSeatControllerReplicationViewer
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x03E7]
struct AUTVehicle_execIsSeatControllerReplicationViewer_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.GetBarrelIndex
// [0x00020500] ( FUNC_Native )
struct AUTVehicle_execGetBarrelIndex_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.GetSeatPivotPoint
// [0x00020500] ( FUNC_Native )
struct AUTVehicle_execGetSeatPivotPoint_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.ForceWeaponRotation
// [0x00020500] ( FUNC_Native )
struct AUTVehicle_execForceWeaponRotation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    NewRotation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicle.SeatFiringMode
// [0x00024500] ( FUNC_Native )
struct AUTVehicle_execSeatFiringMode_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewFireMode;                                      		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bReadValue : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.SeatFlashCount
// [0x00024500] ( FUNC_Native )
struct AUTVehicle_execSeatFlashCount_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewCount;                                         		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bReadValue : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.SeatFlashLocation
// [0x00024500] ( FUNC_Native )
struct AUTVehicle_execSeatFlashLocation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLoc;                                           		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bReadValue : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicle.SeatWeaponRotation
// [0x00024500] ( FUNC_Native )
struct AUTVehicle_execSeatWeaponRotation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    NewRot;                                           		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bReadValue : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTHoverVehicle.BlowupVehicle
// [0x00020102] 
struct AUTHoverVehicle_execBlowupVehicle_Parms
{
};

// Function GridVehicle.UTAirVehicle.Dodge
// [0x00020002] 
struct AUTAirVehicle_execDodge_Parms
{
	unsigned char                                      DoubleClickMove;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTAirVehicle.FastVehicle
// [0x00020002] 
struct AUTAirVehicle_execFastVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTAirVehicle.RecommendLongRangedAttack
// [0x00020002] 
struct AUTAirVehicle_execRecommendLongRangedAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTAirVehicle.SetDriving
// [0x00020102] 
struct AUTAirVehicle_execSetDriving_Parms
{
	unsigned long                                      bNewDriving : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTAirVehicle.GetGravityZ
// [0x00020400] ( FUNC_Native )
struct AUTAirVehicle_execGetGravityZ_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTWeaponPawn.ApplyWeaponEffects
// [0x00024102] 
struct AUTWeaponPawn_execApplyWeaponEffects_Parms
{
	int                                                OverlayFlags;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.TooCloseToAttack
// [0x00020002] 
struct AUTWeaponPawn_execTooCloseToAttack_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             NeededPitch;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTWeaponPawn.Died
// [0x00020002] 
struct AUTWeaponPawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        OldPC;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTWeaponPawn.DriverLeave
// [0x00020002] 
struct AUTWeaponPawn_execDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTWeaponPawn.FaceRotation
// [0x00020102] 
struct AUTWeaponPawn_execFaceRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.AttachDriver
// [0x00020102] 
struct AUTWeaponPawn_execAttachDriver_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    UTP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTWeaponPawn.SetBaseEyeheight
// [0x00020102] 
struct AUTWeaponPawn_execSetBaseEyeheight_Parms
{
};

// Function GridVehicle.UTWeaponPawn.GetCollisionRadius
// [0x00020102] 
struct AUTWeaponPawn_execGetCollisionRadius_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTWeaponPawn.DoJump
// [0x00020002] 
struct AUTWeaponPawn_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTWeaponPawn.SetMovementPhysics
// [0x00020000] 
struct AUTWeaponPawn_execSetMovementPhysics_Parms
{
};

// Function GridVehicle.UTWeaponPawn.BaseChange
// [0x00020820] ( FUNC_Event )
struct AUTWeaponPawn_eventBaseChange_Parms
{
};

// Function GridVehicle.UTWeaponPawn.JumpOffPawn
// [0x00020000] 
struct AUTWeaponPawn_execJumpOffPawn_Parms
{
};

// Function GridVehicle.UTWeaponPawn.AddVelocity
// [0x00024000] 
struct AUTWeaponPawn_execAddVelocity_Parms
{
	struct FVector                                     NewVelocity;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.DropToGround
// [0x00020000] 
struct AUTWeaponPawn_execDropToGround_Parms
{
};

// Function GridVehicle.UTWeaponPawn.PlaceExitingDriver
// [0x00024002] 
struct AUTWeaponPawn_execPlaceExitingDriver_Parms
{
	class APawn*                                       ExitingDriver;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTWeaponPawn.AdjustCameraScale
// [0x00020102] 
struct AUTWeaponPawn_execAdjustCameraScale_Parms
{
	unsigned long                                      bIn : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.ServerChangeSeat
// [0x002200C2] 
struct AUTWeaponPawn_execServerChangeSeat_Parms
{
	int                                                RequestedSeat;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.ServerAdjacentSeat
// [0x002200C2] 
struct AUTWeaponPawn_execServerAdjacentSeat_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 C;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.DriverLeft
// [0x00020002] 
struct AUTWeaponPawn_execDriverLeft_Parms
{
};

// Function GridVehicle.UTWeaponPawn.PossessedBy
// [0x00020002] 
struct AUTWeaponPawn_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.ClearFlashLocation
// [0x00020102] 
struct AUTWeaponPawn_execClearFlashLocation_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.SetFlashLocation
// [0x00020102] 
struct AUTWeaponPawn_execSetFlashLocation_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.ClearFlashCount
// [0x00020102] 
struct AUTWeaponPawn_execClearFlashCount_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.IncrementFlashCount
// [0x00020102] 
struct AUTWeaponPawn_execIncrementFlashCount_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.SetFiringMode
// [0x00020102] 
struct AUTWeaponPawn_execSetFiringMode_Parms
{
	class AWeapon*                                     Weap;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringModeNum;                                    		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.ProcessViewRotation
// [0x00420102] 
struct AUTWeaponPawn_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             MaxDelta;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           MaxDeltaDegrees;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTWeaponPawn.CalcCamera
// [0x00C20102] 
struct AUTWeaponPawn_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  out_CamStart;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTWeaponPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AUTWeaponPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTWeaponPawn.DisplayDebug
// [0x00420102] 
struct AUTWeaponPawn_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UCanvas*                                  Canvas;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTWeaponPawn.GetVehicleDrivingStatName
// [0x00020002] 
struct AUTWeaponPawn_execGetVehicleDrivingStatName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FName                                    VehicleStatName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GridVehicle.UTWeaponPawn.GetTargetLocation
// [0x00024500] ( FUNC_Native )
struct AUTWeaponPawn_execGetTargetLocation_Parms
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRequestAlternateLoc : 1;                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleWeapon.ServerSetZoom
// [0x002200C2] 
struct AUTVehicleWeapon_execServerSetZoom_Parms
{
	unsigned long                                      bNowZoomed : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GridVehicle.UTVehicleWeapon.WeaponPlaySound
// [0x00824102] 
struct AUTVehicleWeapon_execWeaponPlaySound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NoiseLoudness;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             Barrel;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FName                                    Pivot;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  Loc;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleWeapon.GetMaxFinalAimAdjustment
// [0x00020102] 
struct AUTVehicleWeapon_execGetMaxFinalAimAdjustment_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleWeapon.GetTraceOwner
// [0x00020102] 
struct AUTVehicleWeapon_execGetTraceOwner_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleWeapon.InstantFireEndTrace
// [0x00020102] 
struct AUTVehicleWeapon_execInstantFireEndTrace_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleWeapon.InstantFireStartTrace
// [0x00020102] 
struct AUTVehicleWeapon_execInstantFireStartTrace_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleWeapon.ProjectileFire
// [0x00020102] 
struct AUTVehicleWeapon_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleWeapon.EndFire
// [0x00020102] 
struct AUTVehicleWeapon_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicle*                               V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleWeapon.BeginFire
// [0x00020102] 
struct AUTVehicleWeapon_execBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicle*                               V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleWeapon.GetPhysicalFireStartLoc
// [0x00024102] 
struct AUTVehicleWeapon_execGetPhysicalFireStartLoc_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleWeapon.PutDownWeapon
// [0x00020102] 
struct AUTVehicleWeapon_execPutDownWeapon_Parms
{
};

// Function GridVehicle.UTVehicleWeapon.Activate
// [0x00020102] 
struct AUTVehicleWeapon_execActivate_Parms
{
};

// Function GridVehicle.UTVehicleWeapon.DetachWeapon
// [0x00020100] 
struct AUTVehicleWeapon_execDetachWeapon_Parms
{
};

// Function GridVehicle.UTVehicleWeapon.AttachWeaponTo
// [0x00024100] 
struct AUTVehicleWeapon_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GridVehicle.UTVehicleWeapon.GetFireInterval
// [0x00020102] 
struct AUTVehicleWeapon_execGetFireInterval_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleWeapon.GetFireTriggerTag
// [0x00022102] 
struct AUTVehicleWeapon_execGetFireTriggerTag_Parms
{
	int                                                BarrelIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FireMode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GridVehicle.UTVehicleWeapon.IsAimCorrect
// [0x00820902] ( FUNC_Event )
struct AUTVehicleWeapon_eventIsAimCorrect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DesiredAimPoint;                                  		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealAimPoint;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleWeapon.GetFireStartLocationAndRotation
// [0x00420102] 
struct AUTVehicleWeapon_execGetFireStartLocationAndRotation_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    StartRotation;                                    		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GridVehicle.UTVehicleWeapon.GetDesiredAimPoint
// [0x00C24902] ( FUNC_Event )
struct AUTVehicleWeapon_eventGetDesiredAimPoint_Parms
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  CameraLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DesiredAimPoint;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0040 (0x000C) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x004C (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function GridVehicle.UTVehicleWeapon.GetCrosshairScaling
// [0x00020102] 
struct AUTVehicleWeapon_execGetCrosshairScaling_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicleWeapon.DrawKillIcon
// [0x00022102] 
struct AUTVehicleWeapon_execDrawKillIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ScreenX;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ScreenY;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HUDScaleX;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HUDScaleY;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicleWeapon.CanHitDesiredTarget
// [0x00C20102] 
struct AUTVehicleWeapon_execCanHitDesiredTarget_Parms
{
	struct FVector                                     SocketLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SocketRotation;                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DesiredAimPoint;                                  		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TargetActor;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RealAimPoint;                                     		// 0x0028 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0038 (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         IgnoredActors;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AActor*                                   HitActor;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0058 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bResult : 1;                                      		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GridVehicle.UTVehicleWeapon.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AUTVehicleWeapon_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTVehicleWeapon.PostBeginPlay
// [0x00020102] 
struct AUTVehicleWeapon_execPostBeginPlay_Parms
{
};

// Function GridVehicle.UTVehicleWheel.OldEffectFinished
// [0x00020002] 
struct UUTVehicleWheel_execOldEffectFinished_Parms
{
	class UParticleSystemComponent*                    PSystem;                                          		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function GridVehicle.UTVehicleWheel.SetParticleEffect
// [0x00020802] ( FUNC_Event )
struct UUTVehicleWheel_eventSetParticleEffect_Parms
{
	class AUTVehicle*                                  OwnerVehicle;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             NewTemplate;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GridVehicle.UTSeqAct_EnterVehicle.Activated
// [0x00020802] ( FUNC_Event )
struct UUTSeqAct_EnterVehicle_eventActivated_Parms
{
	// class USeqVar_Object*                           ObjVar;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AUTVehicle*                               TheVehicle;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif