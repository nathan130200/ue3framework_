/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SGSOrion_f_structs.h
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

// Function SGSOrion.SGS_Achievements.AchievementDone
// [0x00020002] 
struct USGS_Achievements_execAchievementDone_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Achievements.UpdateSpiceOfLife
// [0x00020002] 
struct USGS_Achievements_execUpdateSpiceOfLife_Parms
{
	int                                                MutatorBitMask;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurrentMask;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             MutatorBit;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Achievements.UpdateVehicles
// [0x00020002] 
struct USGS_Achievements_execUpdateVehicles_Parms
{
	int                                                VehicleBitMask;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurrentMask;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             VehicleBit;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Achievements.UpdatePunches
// [0x00020002] 
struct USGS_Achievements_execUpdatePunches_Parms
{
	int                                                PunchBitMask;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurrentMask;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PunchBit;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Achievements.UpdateMacGuyver
// [0x00020002] 
struct USGS_Achievements_execUpdateMacGuyver_Parms
{
	int                                                WeaponBitMask;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurrentMask;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             WeaponBit;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Achievements.ReadAchievementStatsComplete
// [0x00020002] 
struct USGS_Achievements_execReadAchievementStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.SpeakTTS
// [0x00024100] 
struct ASGS_Controller_Player_execSpeakTTS_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	class APlayerReplicationInfo*                      PRI;                                              		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.PerformedUseAction
// [0x00020102] 
struct ASGS_Controller_Player_execPerformedUseAction_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_BuyStation*                          BS;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.ServerPickupWeapon
// [0x002200C2] 
struct ASGS_Controller_Player_execServerPickupWeapon_Parms
{
	class ASGDroppedPickup*                            P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Controller_Player.SGSChangeSeat
// [0x002200C2] 
struct ASGS_Controller_Player_execSGSChangeSeat_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ServerGiveCredits
// [0x002200C2] 
struct ASGS_Controller_Player_execServerGiveCredits_Parms
{
	int                                                ParameterA;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.DoItUp
// [0x00020002] 
struct ASGS_Controller_Player_execDoItUp_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientOpenBarracksMenu
// [0x010201C2] 
struct ASGS_Controller_Player_execClientOpenBarracksMenu_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientOpenArmoryMenu
// [0x010201C2] 
struct ASGS_Controller_Player_execClientOpenArmoryMenu_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientOpenGarageMenu
// [0x010201C2] 
struct ASGS_Controller_Player_execClientOpenGarageMenu_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.Destroyed
// [0x00020902] ( FUNC_Event )
struct ASGS_Controller_Player_eventDestroyed_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.FindBuyStation
// [0x00820002] 
struct ASGS_Controller_Player_execFindBuyStation_Parms
{
	class ASGS_BuyStation*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_Armory*                              A;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASGS_Barracks*                            B;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASGS_Garage*                              G;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  PawnLoc2D;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VLoc2D;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// unsigned long                                   bPowerOff : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Controller_Player.ClientUpdatePunches
// [0x010201C2] 
struct ASGS_Controller_Player_execClientUpdatePunches_Parms
{
	int                                                WeaponBitMask;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ClientUpdateVehicles
// [0x010201C2] 
struct ASGS_Controller_Player_execClientUpdateVehicles_Parms
{
	int                                                WeaponBitMask;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ClientUpdateMacGuyver
// [0x010201C2] 
struct ASGS_Controller_Player_execClientUpdateMacGuyver_Parms
{
	int                                                WeaponBitMask;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.PickupWeapon
// [0x00820002] 
struct ASGS_Controller_Player_execPickupWeapon_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGDroppedPickup*                         W;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnLoc2D;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VLoc2D;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           NewDot;                                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.FindGenerator
// [0x00820002] 
struct ASGS_Controller_Player_execFindGenerator_Parms
{
	class ASGS_PowerGenerator*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_PowerGenerator*                      Gen;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnLoc2D;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VLoc2D;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           NewDot;                                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.FindVehicleToDrive
// [0x00820002] 
struct ASGS_Controller_Player_execFindVehicleToDrive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AVehicle*                                 V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 Best;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnLoc2D;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VLoc2D;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           NewDot;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           BestDot;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0038 (0x000C) [0x0000000000000000]              
	// float                                           newdist;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           bestDist;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             BestSeat;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.FindMechToDrive
// [0x00820002] 
struct ASGS_Controller_Player_execFindMechToDrive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_MechPawn*                            M;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASGS_MechPawn*                            Best;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnLoc2D;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VLoc2D;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           NewDot;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           BestDot;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.DoPathing
// [0x00020102] 
struct ASGS_Controller_Player_execDoPathing_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientShowPath
// [0x010201C0] 
struct ASGS_Controller_Player_execClientShowPath_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.StopRolling
// [0x00020002] 
struct ASGS_Controller_Player_execStopRolling_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ServerUseHardDevice
// [0x002200C2] 
struct ASGS_Controller_Player_execServerUseHardDevice_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.UseHardDevice
// [0x00020202] ( FUNC_Exec )
struct ASGS_Controller_Player_execUseHardDevice_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.GetPlayerViewPoint
// [0x00420902] ( FUNC_Event )
struct ASGS_Controller_Player_eventGetPlayerViewPoint_Parms
{
	struct FVector                                     POVLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    POVRotation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// float                                           DeltaTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.StopTaunt
// [0x00020102] 
struct ASGS_Controller_Player_execStopTaunt_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.Taunt
// [0x00020202] ( FUNC_Exec )
struct ASGS_Controller_Player_execTaunt_Parms
{
	int                                                TauntIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.FOV
// [0x00020202] ( FUNC_Exec )
struct ASGS_Controller_Player_execFOV_Parms
{
	float                                              F;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.FreeRoam
// [0x00020002] 
struct ASGS_Controller_Player_execFreeRoam_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.SlowDownCamera
// [0x00020002] 
struct ASGS_Controller_Player_execSlowDownCamera_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.SpeedUpCamera
// [0x00020002] 
struct ASGS_Controller_Player_execSpeedUpCamera_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.CycleCamera
// [0x00020002] 
struct ASGS_Controller_Player_execCycleCamera_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.SpecZoomOut
// [0x00020002] 
struct ASGS_Controller_Player_execSpecZoomOut_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.SpecZoomIn
// [0x00020002] 
struct ASGS_Controller_Player_execSpecZoomIn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.SlowMotion
// [0x00020002] 
struct ASGS_Controller_Player_execSlowMotion_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.ThrowGrenade
// [0x00020202] ( FUNC_Exec )
struct ASGS_Controller_Player_execThrowGrenade_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.SetHand
// [0x00020002] 
struct ASGS_Controller_Player_execSetHand_Parms
{
	unsigned char                                      NewWeaponHand;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.SetBehindView
// [0x00020002] 
struct ASGS_Controller_Player_execSetBehindView_Parms
{
	unsigned long                                      bNewBehindView : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.SGSGetNextViewablePlayer
// [0x00020002] 
struct ASGS_Controller_Player_execSGSGetNextViewablePlayer_Parms
{
	int                                                Dir;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CurrentIndex;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             NewIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.CloseAllBuyMenus
// [0x010201C2] 
struct ASGS_Controller_Player_execCloseAllBuyMenus_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowDeathOptions
// [0x00020002] 
struct ASGS_Controller_Player_execShowDeathOptions_Parms
{
	// class ASGS_Pawn_Soldier*                        P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.AddLife
// [0x00020002] 
struct ASGS_Controller_Player_execAddLife_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientShowWaveIncoming
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowWaveIncoming_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientShowWaveCompleted
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowWaveCompleted_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientShowWaveTimer
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowWaveTimer_Parms
{
	int                                                TimeLeft;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.DeathEffectTimer
// [0x00020102] 
struct ASGS_Controller_Player_execDeathEffectTimer_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ProcessDriveMech
// [0x00020002] 
struct ASGS_Controller_Player_execProcessDriveMech_Parms
{
	float                                              InForward;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InStrafe;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InUp;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InJump : 1;                                       		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ServerDriveMech
// [0x00A20042] 
struct ASGS_Controller_Player_execServerDriveMech_Parms
{
	float                                              InForward;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InStrafe;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              aUp;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InJump : 1;                                       		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                View;                                             		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 ViewRotation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.CheckJumpOrDuck
// [0x00020002] 
struct ASGS_Controller_Player_execCheckJumpOrDuck_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.PlayAnnouncement
// [0x00024002] 
struct ASGS_Controller_Player_execPlayAnnouncement_Parms
{
	class UClass*                                      InMessageClass;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.HeadshotMessage
// [0x00020002] 
struct ASGS_Controller_Player_execHeadshotMessage_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.BullseyeMessage
// [0x00020002] 
struct ASGS_Controller_Player_execBullseyeMessage_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.AcknowledgePossession
// [0x00820002] 
struct ASGS_Controller_Player_execAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 NewViewRotation;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.PlayStartupMessage
// [0x010201C2] 
struct ASGS_Controller_Player_execPlayStartupMessage_Parms
{
	unsigned char                                      StartupStage;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.NotifyHitWall
// [0x00020802] ( FUNC_Event )
struct ASGS_Controller_Player_eventNotifyHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.ProcessViewRotation
// [0x00C20002] 
struct ASGS_Controller_Player_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    DeltaRot;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DesiredPitch;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 TargetRotation;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
	// float                                           ViewPitchMin;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           ViewPitchMax;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.UpdateRotation
// [0x00820002] 
struct ASGS_Controller_Player_execUpdateRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 DeltaRot;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.SpectateOnServer
// [0x002200C2] 
struct ASGS_Controller_Player_execSpectateOnServer_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ServerSpectate
// [0x00020002] 
struct ASGS_Controller_Player_execServerSpectate_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.SetShowRespawnHud
// [0x010201C2] 
struct ASGS_Controller_Player_execSetShowRespawnHud_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ServerTeamSelected
// [0x002200C2] 
struct ASGS_Controller_Player_execServerTeamSelected_Parms
{
	int                                                iTeam;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iClass;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CharacterType;                                    		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Controller_Player.ClientSelectTeam
// [0x010201C2] 
struct ASGS_Controller_Player_execClientSelectTeam_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientShowHUD
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowHUD_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientSetChrType
// [0x010201C2] 
struct ASGS_Controller_Player_execClientSetChrType_Parms
{
	class UClass*                                      Type;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.SetCharacter
// [0x00020002] 
struct ASGS_Controller_Player_execSetCharacter_Parms
{
	struct FString                                     inCharacter;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             ChrClass;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.InitPlayerReplicationInfo
// [0x00020002] 
struct ASGS_Controller_Player_execInitPlayerReplicationInfo_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ServerRadioMessage
// [0x00220042] 
struct ASGS_Controller_Player_execServerRadioMessage_Parms
{
	unsigned char                                      T;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Offset;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.SGSSwitchWeapon
// [0x00020102] 
struct ASGS_Controller_Player_execSGSSwitchWeapon_Parms
{
	unsigned char                                      T;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.StopCharging
// [0x00020202] ( FUNC_Exec )
struct ASGS_Controller_Player_execStopCharging_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.OpenClassSelection
// [0x00020002] 
struct ASGS_Controller_Player_execOpenClassSelection_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientShowEndGame
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowEndGame_Parms
{
	unsigned long                                      bWinner : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ClientShowGameFull
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowGameFull_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientShowLeaveGame
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowLeaveGame_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ClientShowTeleportError
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowTeleportError_Parms
{
	int                                                Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ClientShowDisconnect
// [0x010201C2] 
struct ASGS_Controller_Player_execClientShowDisconnect_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Controller_Player.SuperJump
// [0x00020002] 
struct ASGS_Controller_Player_execSuperJump_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ServerDoSuperJump
// [0x002200C2] 
struct ASGS_Controller_Player_execServerDoSuperJump_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.CloseNotification
// [0x00020002] 
struct ASGS_Controller_Player_execCloseNotification_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ServerAddLife
// [0x002200C2] 
struct ASGS_Controller_Player_execServerAddLife_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ServerSetTeamIndex
// [0x002200C2] 
struct ASGS_Controller_Player_execServerSetTeamIndex_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.SwitchWeapon
// [0x00020202] ( FUNC_Exec )
struct ASGS_Controller_Player_execSwitchWeapon_Parms
{
	unsigned char                                      T;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ClientPlayTakeHit
// [0x01020142] 
struct ASGS_Controller_Player_execClientPlayTakeHit_Parms
{
	struct FVector                                     HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Damage;                                           		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ServerSubtractCredits
// [0x002200C2] 
struct ASGS_Controller_Player_execServerSubtractCredits_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.ClientPlaySound
// [0x01020942] ( FUNC_Event )
struct ASGS_Controller_Player_eventClientPlaySound_Parms
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.NotifyTakeHit
// [0x00020002] 
struct ASGS_Controller_Player_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.GiveDefaultInventory
// [0x00020102] 
struct ASGS_Controller_Player_execGiveDefaultInventory_Parms
{
	TArray< class UClass* >                            InitialItems;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class AInventory*                               Inv;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Controller_Player.SetMovie
// [0x00020002] 
struct ASGS_Controller_Player_execSetMovie_Parms
{
	class USGS_DBMainMenu*                             newMenu;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Player.JumpTimer
// [0x00020102] 
struct ASGS_Controller_Player_execJumpTimer_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowMeleeTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowMeleeTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowPowerOffTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowPowerOffTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowBuyStationTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowBuyStationTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowSupplyStationTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowSupplyStationTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowReloadTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowReloadTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowSeatChangeTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowSeatChangeTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowGenTurnOnTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowGenTurnOnTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.GetKeyBinding
// [0x010201C2] 
struct ASGS_Controller_Player_execGetKeyBinding_Parms
{
	struct FString                                     Binding;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             J;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FName                                    N;                                                		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Player.ShowCrouchTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowCrouchTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowSkillTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowSkillTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowHudAwarenessTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowHudAwarenessTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowFireModeTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowFireModeTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowRollTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowRollTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowRadioTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowRadioTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowTeamChatTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowTeamChatTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowRandomTip
// [0x00020102] 
struct ASGS_Controller_Player_execShowRandomTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASGS_Controller_Player_eventPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ShowMoveTip
// [0x010201C2] 
struct ASGS_Controller_Player_execShowMoveTip_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.IsFlashing
// [0x00020102] 
struct ASGS_Controller_Player_execIsFlashing_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Player.StopFlashing
// [0x00020102] 
struct ASGS_Controller_Player_execStopFlashing_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ServerThrowWeapon
// [0x002200C2] 
struct ASGS_Controller_Player_execServerThrowWeapon_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.ThrowWeapon
// [0x00020202] ( FUNC_Exec )
struct ASGS_Controller_Player_execThrowWeapon_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.DropMoney
// [0x00020202] ( FUNC_Exec )
struct ASGS_Controller_Player_execDropMoney_Parms
{
};

// Function SGSOrion.SGS_Controller_Player.Possess
// [0x00020902] ( FUNC_Event )
struct ASGS_Controller_Player_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.InCombat
// [0x00020102] 
struct ASGS_Vehicle_execInCombat_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle.UpdateLookSteerStatus
// [0x00020100] 
struct ASGS_Vehicle_execUpdateLookSteerStatus_Parms
{
};

// Function SGSOrion.SGS_Vehicle.UpdateHateTimer
// [0x01020142] 
struct ASGS_Vehicle_execUpdateHateTimer_Parms
{
};

// Function SGSOrion.SGS_Vehicle.TurnEMPOff
// [0x00020102] 
struct ASGS_Vehicle_execTurnEMPOff_Parms
{
};

// Function SGSOrion.SGS_Vehicle.TurnEMPOn
// [0x00020102] 
struct ASGS_Vehicle_execTurnEMPOn_Parms
{
};

// Function SGSOrion.SGS_Vehicle.SetInputs
// [0x00020102] 
struct ASGS_Vehicle_execSetInputs_Parms
{
	float                                              InForward;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InStrafe;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InUp;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.EndEMP
// [0x00020002] 
struct ASGS_Vehicle_execEndEMP_Parms
{
};

// Function SGSOrion.SGS_Vehicle.HitWithEMP
// [0x002200C2] 
struct ASGS_Vehicle_execHitWithEMP_Parms
{
};

// Function SGSOrion.SGS_Vehicle.SetBurnOut
// [0x00820102] 
struct ASGS_Vehicle_execSetBurnOut_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumElements;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             TeamNum;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FBurnOutDatum                            BOD;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	// class AUTCarriedObject*                         Flag;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.SitDriver
// [0x00020102] 
struct ASGS_Vehicle_execSitDriver_Parms
{
	class AUTPawn*                                     UTP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.PassengerEnter
// [0x00020002] 
struct ASGS_Vehicle_execPassengerEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle.PassengerLeave
// [0x00020002] 
struct ASGS_Vehicle_execPassengerLeave_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.ChangeSeat
// [0x00020002] 
struct ASGS_Vehicle_execChangeSeat_Parms
{
	class AController*                                 ControllerToMove;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RequestedSeat;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle.TryToGetIn
// [0x00020002] 
struct ASGS_Vehicle_execTryToGetIn_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       P;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.DriverLeave
// [0x00020802] ( FUNC_Event )
struct ASGS_Vehicle_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRet : 1;                                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APawn*                                    P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.SetDirtEffects
// [0x00020102] 
struct ASGS_Vehicle_execSetDirtEffects_Parms
{
	unsigned long                                      bOn : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.UpdateDirtParticles
// [0x00020102] 
struct ASGS_Vehicle_execUpdateDirtParticles_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.FixWheelParticlesPleaseEpic
// [0x00820102] 
struct ASGS_Vehicle_execFixWheelParticlesPleaseEpic_Parms
{
	// struct FVector                                  Loc;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  End;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000000]              
	// class AActor*                                   traceHit;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.StopServerHandBrake
// [0x002200C2] 
struct ASGS_Vehicle_execStopServerHandBrake_Parms
{
};

// Function SGSOrion.SGS_Vehicle.ServerHandBrake
// [0x002200C2] 
struct ASGS_Vehicle_execServerHandBrake_Parms
{
};

// Function SGSOrion.SGS_Vehicle.SpawnTracer
// [0x00820102] 
struct ASGS_Vehicle_execSpawnTracer_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.VehicleWeaponFireEffects
// [0x00820102] 
struct ASGS_Vehicle_execVehicleWeaponFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  pos;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.Register
// [0x00020102] 
struct ASGS_Vehicle_execRegister_Parms
{
	// class ASGS_Controller_Player*                   P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.PostBeginPlay
// [0x00020102] 
struct ASGS_Vehicle_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.StartSmokeEffect
// [0x00020102] 
struct ASGS_Vehicle_execStartSmokeEffect_Parms
{
};

// Function SGSOrion.SGS_Vehicle.StartFireEffect
// [0x00020102] 
struct ASGS_Vehicle_execStartFireEffect_Parms
{
};

// Function SGSOrion.SGS_Vehicle.StopEffects
// [0x00020102] 
struct ASGS_Vehicle_execStopEffects_Parms
{
};

// Function SGSOrion.SGS_Vehicle.CheckDamageSmoke
// [0x00020102] 
struct ASGS_Vehicle_execCheckDamageSmoke_Parms
{
};

// Function SGSOrion.SGS_Vehicle.TakeDamage
// [0x00024902] ( FUNC_Event )
struct ASGS_Vehicle_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct ASGS_Vehicle_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           TextXL;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           HealthX;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           HealthY;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           XScale;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           MaxOffset;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossDir;                                         		// 0x0064 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0070 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             TeamColor;                                        		// 0x0074 (0x0010) [0x0000000000000000]              
	// struct FColor                                   TextColor;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	// struct FString                                  ScreenName;                                       		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bShowUseable : 1;                                 		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AUTWeapon*                                Weap;                                             		// 0x0098 (0x0004) [0x0000000000000000]              
	// class AUTHUDBase*                               HUD;                                              		// 0x009C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.Died
// [0x00020002] 
struct ASGS_Vehicle_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Bodies;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.RanInto
// [0x00820802] ( FUNC_Event )
struct ASGS_Vehicle_eventRanInto_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Speed;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UClass*                                   CameraEffect;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           DamageRatio;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.VehicleCalcCamera
// [0x00C24102] 
struct ASGS_Vehicle_execVehicleCalcCamera_Parms
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
	// class AUTPawn*                                  P;                                                		// 0x00C8 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bObstructed : 1;                                  		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bInsideVehicle : 1;                               		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Vehicle.PancakeOther
// [0x00020002] 
struct ASGS_Vehicle_execPancakeOther_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.CanBoost
// [0x00020002] 
struct ASGS_Vehicle_execCanBoost_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle.NumSeatsOccupied
// [0x00020102] 
struct ASGS_Vehicle_execNumSeatsOccupied_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.Tick
// [0x00820802] ( FUNC_Event )
struct ASGS_Vehicle_eventTick_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bAdjustSuspension : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           DesiredSuspensionTravel;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ClampedDeltaSeconds;                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BoostDir;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.StopBoost
// [0x002200C2] 
struct ASGS_Vehicle_execStopBoost_Parms
{
};

// Function SGSOrion.SGS_Vehicle.Boost
// [0x002200C2] 
struct ASGS_Vehicle_execBoost_Parms
{
};

// Function SGSOrion.SGS_Vehicle.DeactivateRocketBoosters
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_eventDeactivateRocketBoosters_Parms
{
	// class AUTPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.ActivateRocketBoosters
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_eventActivateRocketBoosters_Parms
{
};

// Function SGSOrion.SGS_Vehicle.UnlockWheels
// [0x00020102] 
struct ASGS_Vehicle_execUnlockWheels_Parms
{
	// class USVehicleSimCar*                          SimCar;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle.LockWheels
// [0x00020102] 
struct ASGS_Vehicle_execLockWheels_Parms
{
	// class USVehicleSimCar*                          SimCar;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle.EnableFullSteering
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_eventEnableFullSteering_Parms
{
	// class USVehicleSimCar*                          SimCar;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle.PlayBoostSound
// [0x00020102] 
struct ASGS_Vehicle_execPlayBoostSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.PlaceExitingDriver
// [0x00824002] 
struct ASGS_Vehicle_execPlaceExitingDriver_Parms
{
	class APawn*                                       ExitingDriver;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  tryPlace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ZOffset;                                          		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.ServerSetSoundIndex
// [0x002200C2] 
struct ASGS_Vehicle_execServerSetSoundIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.DriverEnter
// [0x00020002] 
struct ASGS_Vehicle_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle.PlayTurretSound1
// [0x00020102] 
struct ASGS_Vehicle_execPlayTurretSound1_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.PlayTurretSound
// [0x00020102] 
struct ASGS_Vehicle_execPlayTurretSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct ASGS_Vehicle_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        Collision;                                        		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Damage;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// class AUTVehicle*                               V;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatorController;                             		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle.VehicleWeaponImpactEffects
// [0x00820102] 
struct ASGS_Vehicle_execVehicleWeaponImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  LightLoc;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0038 (0x001C) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0054 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x0084 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	// int                                             DecalMaterialsLength;                             		// 0x008C (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x0090 (0x0004) [0x0000000000000000]              
	// class APawn*                                    EffectInstigator;                                 		// 0x0094 (0x0004) [0x0000000000000000]              
	// class AUTPlayerController*                      PC;                                               		// 0x0098 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 HitDir;                                           		// 0x009C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle.EncroachingOn
// [0x00820802] ( FUNC_Event )
struct ASGS_Vehicle_eventEncroachingOn_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PushVelocity;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CheckExtent;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bSlowEncroach : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDeepEncroach : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFXHud.Show_RespawnTime
// [0x00020000] 
struct USGS_GFXHud_execShow_RespawnTime_Parms
{
	int                                                Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.UpdateObjectives
// [0x00820002] 
struct USGS_GFXHud_execUpdateObjectives_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FASColorTransform                        C;                                                		// 0x0008 (0x0020) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.AddObjective
// [0x00824002] 
struct USGS_GFXHud_execAddObjective_Parms
{
	struct FString                                     Caption;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      Owner;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     pos;                                              		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UTexture2D*                                  Tex;                                              		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FObjectiveDesc                           Objective;                                        		// 0x0028 (0x0018) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UpdateObjThubPos
// [0x00820002] 
struct USGS_GFXHud_execUpdateObjThubPos_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FObjectiveDesc                           Obj;                                              		// 0x0004 (0x0018) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Forward;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Pt;                                               		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Loc;                                              		// 0x0040 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FVector                                  MyFlagPos;                                        		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EnemyFlagPos;                                     		// 0x005C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.ToggleInGameTeamInfo
// [0x00020002] 
struct USGS_GFXHud_execToggleInGameTeamInfo_Parms
{
};

// Function SGSOrion.SGS_GFXHud.UpdateScoreBoard
// [0x00820002] 
struct USGS_GFXHud_execUpdateScoreBoard_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   iAltair;                                          		// 0x0001 (0x0001) [0x0000000000000000]              
	// unsigned char                                   iCarrier;                                         		// 0x0002 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider1;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider2;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x001C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AUTPlayerReplicationInfo*                 PRI;                                              		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.IsValidScoreboardPlayer
// [0x00020002] 
struct USGS_GFXHud_execIsValidScoreboardPlayer_Parms
{
	class AUTPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFXHud.UpdateScore
// [0x00020002] 
struct USGS_GFXHud_execUpdateScore_Parms
{
};

// Function SGSOrion.SGS_GFXHud.HideScoreBoard
// [0x00020002] 
struct USGS_GFXHud_execHideScoreBoard_Parms
{
};

// Function SGSOrion.SGS_GFXHud.ShowScoreboard
// [0x00020002] 
struct USGS_GFXHud_execShowScoreboard_Parms
{
};

// Function SGSOrion.SGS_GFXHud.GetTeamInfo
// [0x00020002] 
struct USGS_GFXHud_execGetTeamInfo_Parms
{
	unsigned long                                      MyTeam : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class ATeamInfo*                                   ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTGameReplicationInfo*                   GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.GetAltairTeam
// [0x00020002] 
struct USGS_GFXHud_execGetAltairTeam_Parms
{
	class ATeamInfo*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTGameReplicationInfo*                   GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.GetCarrierTeam
// [0x00020002] 
struct USGS_GFXHud_execGetCarrierTeam_Parms
{
	class ATeamInfo*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTGameReplicationInfo*                   GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.IsChangeTeamOrClassVisible
// [0x00020002] 
struct USGS_GFXHud_execIsChangeTeamOrClassVisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFXHud.ShowClassSelection
// [0x00020002] 
struct USGS_GFXHud_execShowClassSelection_Parms
{
};

// Function SGSOrion.SGS_GFXHud.ShowTeamSelection
// [0x00020002] 
struct USGS_GFXHud_execShowTeamSelection_Parms
{
};

// Function SGSOrion.SGS_GFXHud.ChangeClass
// [0x00020002] 
struct USGS_GFXHud_execChangeClass_Parms
{
	int                                                iTeam;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iClass;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Controller_Player*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  CharacterType;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFXHud.SetSpectatorMode
// [0x00020002] 
struct USGS_GFXHud_execSetSpectatorMode_Parms
{
};

// Function SGSOrion.SGS_GFXHud.HideToolTip
// [0x00020000] 
struct USGS_GFXHud_execHideToolTip_Parms
{
};

// Function SGSOrion.SGS_GFXHud.ShowToolTip
// [0x00020000] 
struct USGS_GFXHud_execShowToolTip_Parms
{
};

// Function SGSOrion.SGS_GFXHud.SkillBar_Hide
// [0x00020000] 
struct USGS_GFXHud_execSkillBar_Hide_Parms
{
};

// Function SGSOrion.SGS_GFXHud.SkillBar_Update
// [0x00020000] 
struct USGS_GFXHud_execSkillBar_Update_Parms
{
	int                                                Percent;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.Objetive_UpdatePos
// [0x00020000] 
struct USGS_GFXHud_execObjetive_UpdatePos_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.UpdateHealth
// [0x00820002] 
struct USGS_GFXHud_execUpdateHealth_Parms
{
	// int                                             oldBars;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             newBars;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASColorTransform                        Col;                                              		// 0x000C (0x0020) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             Health;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             maxhealth;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UpdateHitDamage
// [0x00820002] 
struct USGS_GFXHud_execUpdateHitDamage_Parms
{
	// struct FHitDamage                               Hit;                                              		// 0x0000 (0x0014) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0014 (0x002C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.Update_WeaponIcons
// [0x00020002] 
struct USGS_GFXHud_execUpdate_WeaponIcons_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFXHud.Weapon_UpdateFiringMode
// [0x00020002] 
struct USGS_GFXHud_execWeapon_UpdateFiringMode_Parms
{
	class ASGWeapon*                                   Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.StringToColor
// [0x00820002] 
struct USGS_GFXHud_execStringToColor_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASColorTransform                           ReturnValue;                                      		// 0x000C (0x0020) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FASColorTransform                        C;                                                		// 0x002C (0x0020) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.ReceiveLocalMessage
// [0x00824002] 
struct USGS_GFXHud_execReceiveLocalMessage_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              T;                                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FHudMessage                              myMsg;                                            		// 0x0010 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             N;                                                		// 0x0068 (0x0004) [0x0000000000000000]              
	// struct FString                                  nColor;                                           		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFXHud.ReceiveKillAssistMessage
// [0x00020002] 
struct USGS_GFXHud_execReceiveKillAssistMessage_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFXHud.SetCrossHairHidden
// [0x00020002] 
struct USGS_GFXHud_execSetCrossHairHidden_Parms
{
	unsigned long                                      Hidden : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.HideScope
// [0x00020002] 
struct USGS_GFXHud_execHideScope_Parms
{
};

// Function SGSOrion.SGS_GFXHud.ShowScope
// [0x00020002] 
struct USGS_GFXHud_execShowScope_Parms
{
};

// Function SGSOrion.SGS_GFXHud.UpdateVehicleWeapon
// [0x00020002] 
struct USGS_GFXHud_execUpdateVehicleWeapon_Parms
{
	// int                                             Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.Weapon_SetSelected
// [0x00020002] 
struct USGS_GFXHud_execWeapon_SetSelected_Parms
{
	class ASGWeapon*                                   Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             frame;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UnHideud
// [0x00020002] 
struct USGS_GFXHud_execUnHideud_Parms
{
};

// Function SGSOrion.SGS_GFXHud.HideHUD
// [0x00020002] 
struct USGS_GFXHud_execHideHUD_Parms
{
};

// Function SGSOrion.SGS_GFXHud.Update_AmmoCount
// [0x00020002] 
struct USGS_GFXHud_execUpdate_AmmoCount_Parms
{
};

// Function SGSOrion.SGS_GFXHud.UpdateWeapon
// [0x00020002] 
struct USGS_GFXHud_execUpdateWeapon_Parms
{
};

// Function SGSOrion.SGS_GFXHud.UpdateMouse
// [0x00020002] 
struct USGS_GFXHud_execUpdateMouse_Parms
{
	// float                                           Delta;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UpdateGrenades
// [0x00020002] 
struct USGS_GFXHud_execUpdateGrenades_Parms
{
	// TArray< class AUTWeapon* >                      aWeapons;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             numNades;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UpdateMessages
// [0x00020002] 
struct USGS_GFXHud_execUpdateMessages_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasMessages : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFXHud.UpdateEnergy
// [0x00020002] 
struct USGS_GFXHud_execUpdateEnergy_Parms
{
};

// Function SGSOrion.SGS_GFXHud.SetMiniGun
// [0x00020002] 
struct USGS_GFXHud_execSetMiniGun_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.UpdateCrossHair
// [0x00020002] 
struct USGS_GFXHud_execUpdateCrossHair_Parms
{
};

// Function SGSOrion.SGS_GFXHud.UpdateMissionObjectives
// [0x00820002] 
struct USGS_GFXHud_execUpdateMissionObjectives_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASColorTransform                        On;                                               		// 0x0004 (0x0020) [0x0000000000000000]              
	// struct FASColorTransform                        Off;                                              		// 0x0024 (0x0020) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UpdateHealAmount
// [0x00020002] 
struct USGS_GFXHud_execUpdateHealAmount_Parms
{
};

// Function SGSOrion.SGS_GFXHud.UpdateTimerBars
// [0x00020002] 
struct USGS_GFXHud_execUpdateTimerBars_Parms
{
};

// Function SGSOrion.SGS_GFXHud.TickHud
// [0x00020002] 
struct USGS_GFXHud_execTickHud_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.UpdatePlayerText
// [0x00020002] 
struct USGS_GFXHud_execUpdatePlayerText_Parms
{
};

// Function SGSOrion.SGS_GFXHud.UpdateCompass
// [0x00820002] 
struct USGS_GFXHud_execUpdateCompass_Parms
{
	// float                                           Yaw;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UpdateTimer
// [0x00020002] 
struct USGS_GFXHud_execUpdateTimer_Parms
{
};

// Function SGSOrion.SGS_GFXHud.Hud_TurnOn
// [0x00024002] 
struct USGS_GFXHud_execHud_TurnOn_Parms
{
	unsigned long                                      bTurnOn : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bFull : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.UpdateHUD
// [0x00020002] 
struct USGS_GFXHud_execUpdateHUD_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFXHud.SetMiniMapMode
// [0x00024000] 
struct USGS_GFXHud_execSetMiniMapMode_Parms
{
	unsigned long                                      bLarge : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFXHud.UpdatePlayerIcons
// [0x00820002] 
struct USGS_GFXHud_execUpdatePlayerIcons_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Pawn_Soldier*                        P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSeen : 1;                                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  spos;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	// class UTexture2D*                               Tex;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AUTPlayerReplicationInfo*                 UTPRI;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0048 (0x000C) [0x0000000000000000]              
	// float                                           XPos;                                             		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           YPos;                                             		// 0x0058 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                Res;                                              		// 0x005C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bDrawDist : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOnScreen : 1;                                    		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           resize;                                           		// 0x006C (0x0004) [0x0000000000000000]              
	// struct FName                                    FlagName;                                         		// 0x0070 (0x0008) [0x0000000000000000]              
	// struct FAwarenessInfo                           aItem;                                            		// 0x0078 (0x0024) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x009C (0x000C) [0x0000000000000000]              
	// struct FASColorTransform                        C;                                                		// 0x00A8 (0x0020) [0x0000000000000000]              
	// float                                           A;                                                		// 0x00C8 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00CC (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UnRegisterHudActor
// [0x00820002] 
struct USGS_GFXHud_execUnRegisterHudActor_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FAwarenessInfo                           ActorInfo;                                        		// 0x0004 (0x0024) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.RegisterHudActor
// [0x00820002] 
struct USGS_GFXHud_execRegisterHudActor_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Type;                                             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FAwarenessInfo                           ActorInfo;                                        		// 0x0010 (0x0024) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.UpdateFreezeCam
// [0x00820002] 
struct USGS_GFXHud_execUpdateFreezeCam_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector2D                                vpSize;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.DisplayHit
// [0x00820002] 
struct USGS_GFXHud_execDisplayHit_Parms
{
	struct FVector                                     HitDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Loc;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxisX;                                            		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxisY;                                            		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxisZ;                                            		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShotDirection;                                    		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHud.ShowTutorialTip
// [0x00020002] 
struct USGS_GFXHud_execShowTutorialTip_Parms
{
	struct FString                                     Tip;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFXHud.Init
// [0x00024002] 
struct USGS_GFXHud_execInit_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_HUD.UpdateDamage
// [0x00820002] 
struct ASGS_HUD_execUpdateDamage_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           HitAmount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             HitColor;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             DamageColor;                                      		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function SGSOrion.SGS_HUD.CreditsPostRender
// [0x00020002] 
struct ASGS_HUD_execCreditsPostRender_Parms
{
	// float                                           XL;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_HUD.PostRender
// [0x00020802] ( FUNC_Event )
struct ASGS_HUD_eventPostRender_Parms
{
};

// Function SGSOrion.SGS_HUD.SGSSetPos
// [0x00020002] 
struct ASGS_HUD_execSGSSetPos_Parms
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_HUD.TextRenderGameStatus
// [0x00020002] 
struct ASGS_HUD_execTextRenderGameStatus_Parms
{
	// float                                           XL;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_HUD.CloseAllMenus
// [0x00020002] 
struct ASGS_HUD_execCloseAllMenus_Parms
{
};

// Function SGSOrion.SGS_HUD.TextPostRender
// [0x00020002] 
struct ASGS_HUD_execTextPostRender_Parms
{
	// float                                           XL;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_HUD.GetCharacterName
// [0x00020002] 
struct ASGS_HUD_execGetCharacterName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_HUD.CompletePauseMenuClose
// [0x00020002] 
struct ASGS_HUD_execCompletePauseMenuClose_Parms
{
};

// Function SGSOrion.SGS_HUD.CompleteScoreMenuClose
// [0x00020002] 
struct ASGS_HUD_execCompleteScoreMenuClose_Parms
{
};

// Function SGSOrion.SGS_HUD.CompleteNotificationMenuClose
// [0x00020002] 
struct ASGS_HUD_execCompleteNotificationMenuClose_Parms
{
};

// Function SGSOrion.SGS_HUD.CompleteSelectionMenuClose
// [0x00020002] 
struct ASGS_HUD_execCompleteSelectionMenuClose_Parms
{
};

// Function SGSOrion.SGS_HUD.CompleteBarracksBuyMenuClose
// [0x00020002] 
struct ASGS_HUD_execCompleteBarracksBuyMenuClose_Parms
{
};

// Function SGSOrion.SGS_HUD.CompleteGarageBuyMenuClose
// [0x00020002] 
struct ASGS_HUD_execCompleteGarageBuyMenuClose_Parms
{
};

// Function SGSOrion.SGS_HUD.CompleteBuyMenuClose
// [0x00020002] 
struct ASGS_HUD_execCompleteBuyMenuClose_Parms
{
};

// Function SGSOrion.SGS_HUD.ToggleBuyMenu
// [0x00020002] 
struct ASGS_HUD_execToggleBuyMenu_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_HUD.TogglePauseMenu
// [0x00020002] 
struct ASGS_HUD_execTogglePauseMenu_Parms
{
};

// Function SGSOrion.SGS_HUD.CloseBuyMenus
// [0x00020002] 
struct ASGS_HUD_execCloseBuyMenus_Parms
{
};

// Function SGSOrion.SGS_HUD.CloseOtherMenus
// [0x00020002] 
struct ASGS_HUD_execCloseOtherMenus_Parms
{
};

// Function SGSOrion.SGS_HUD.OpenNotificationMovie
// [0x00020002] 
struct ASGS_HUD_execOpenNotificationMovie_Parms
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     OkText;                                           		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NoText;                                           		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             OnOkPressed;                                      		// 0x0030 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             OnNoPressed;                                      		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_HUD.OpenSelectionMovie
// [0x00020002] 
struct ASGS_HUD_execOpenSelectionMovie_Parms
{
};

// Function SGSOrion.SGS_HUD.OpenScores
// [0x00020002] 
struct ASGS_HUD_execOpenScores_Parms
{
};

// Function SGSOrion.SGS_HUD.cScores
// [0x00020202] ( FUNC_Exec )
struct ASGS_HUD_execcScores_Parms
{
};

// Function SGSOrion.SGS_HUD.oScores
// [0x00020202] ( FUNC_Exec )
struct ASGS_HUD_execoScores_Parms
{
};

// Function SGSOrion.SGS_HUD.RemoveMovies
// [0x00020002] 
struct ASGS_HUD_execRemoveMovies_Parms
{
};

// Function SGSOrion.SGS_HUD.ShowBuyMenu
// [0x00020002] 
struct ASGS_HUD_execShowBuyMenu_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_HUD.RadioCommandOpen2
// [0x00020202] ( FUNC_Exec )
struct ASGS_HUD_execRadioCommandOpen2_Parms
{
};

// Function SGSOrion.SGS_HUD.RadioCommandOpen
// [0x00020202] ( FUNC_Exec )
struct ASGS_HUD_execRadioCommandOpen_Parms
{
};

// Function SGSOrion.SGS_HUD.DrawHUD
// [0x00820002] 
struct ASGS_HUD_execDrawHUD_Parms
{
	// float                                           X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           W;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           H;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewPoint;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_HUD.SGSDrawToolTip
// [0x00024102] 
struct ASGS_HUD_execSGSDrawToolTip_Parms
{
	class UCanvas*                                     Cvs;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              X;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              U;                                                		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              V;                                                		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              UL;                                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VL;                                               		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ResScale;                                         		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTexture2D*                                  IconTexture;                                      		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Alpha;                                            		// 0x0034 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bGenerator : 1;                                   		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPickup : 1;                                      		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// float                                           Left;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           ScaleX;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           WholeWidth;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FString                                  MappingStr;                                       		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UFont*                                    OrgFont;                                          		// 0x0064 (0x0004) [0x0000000000000000]              
	// class UFont*                                    BindFont;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	// struct FString                                  Key;                                              		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_HUD.PostBeginPlay
// [0x00020102] 
struct ASGS_HUD_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_HUD.DrawPostGameHud
// [0x00020000] 
struct ASGS_HUD_execDrawPostGameHud_Parms
{
};

// Function SGSOrion.SGS_HUD.LocalizedMessage
// [0x00024002] 
struct ASGS_HUD_execLocalizedMessage_Parms
{
	class UClass*                                      InMessageClass;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CriticalString;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Switch;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Position;                                         		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Lifetime;                                         		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FontSize;                                         		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      DrawColor;                                        		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_HUD.NoPressed
// [0x00120000] 
struct ASGS_HUD_execNoPressed_Parms
{
};

// Function SGSOrion.SGS_HUD.OkPressed
// [0x00120000] 
struct ASGS_HUD_execOkPressed_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.StartCloakLoop
// [0x00020102] 
struct ASGS_Pawn_Soldier_execStartCloakLoop_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GetDrivenVehicleName
// [0x00020102] 
struct ASGS_Pawn_Soldier_execGetDrivenVehicleName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.HasWeaponAlready
// [0x00020102] 
struct ASGS_Pawn_Soldier_execHasWeaponAlready_Parms
{
	class UClass*                                      WeaponType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Pawn_Soldier.GivePawnWeapon
// [0x00820002] 
struct ASGS_Pawn_Soldier_execGivePawnWeapon_Parms
{
	class UClass*                                      WeaponType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector                                  TossVel;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  POVLoc;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 POVRot;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.ClientSwitchWeapon
// [0x010201C2] 
struct ASGS_Pawn_Soldier_execClientSwitchWeapon_Parms
{
	class UClass*                                      WeaponType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveWeapon
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveWeapon_Parms
{
	class UClass*                                      WeaponType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.GivePawnWeaponClipSizeUpgrade
// [0x00020002] 
struct ASGS_Pawn_Soldier_execGivePawnWeaponClipSizeUpgrade_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GivePawnWeaponDamageUpgrade
// [0x00020002] 
struct ASGS_Pawn_Soldier_execGivePawnWeaponDamageUpgrade_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GivePawnWeaponReloadSpeedUpgrade
// [0x00020002] 
struct ASGS_Pawn_Soldier_execGivePawnWeaponReloadSpeedUpgrade_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GivePawnWeaponSpeedUpgrade
// [0x00020002] 
struct ASGS_Pawn_Soldier_execGivePawnWeaponSpeedUpgrade_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveWeaponDamageUpgrade
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveWeaponDamageUpgrade_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveWeaponClipSizeUpgrade
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveWeaponClipSizeUpgrade_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveWeaponReloadSpeedUpgrade
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveWeaponReloadSpeedUpgrade_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveWeaponSpeedUpgrade
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveWeaponSpeedUpgrade_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveAbilityUpgrade
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveAbilityUpgrade_Parms
{
	int                                                Upgrade;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveRollUpgrade
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveRollUpgrade_Parms
{
	int                                                Upgrade;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveJumpUpgrade
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveJumpUpgrade_Parms
{
	int                                                Upgrade;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.GiveMeleeUpgrade
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execGiveMeleeUpgrade_Parms
{
	int                                                Upgrade;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.KilledBy
// [0x00020002] 
struct ASGS_Pawn_Soldier_execKilledBy_Parms
{
	class APawn*                                       EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.IsJetPacking
// [0x00020102] 
struct ASGS_Pawn_Soldier_execIsJetPacking_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ShouldGib
// [0x00020102] 
struct ASGS_Pawn_Soldier_execShouldGib_Parms
{
	class UClass*                                      UTDamageType;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.UpdateEyeHeight
// [0x00820802] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventUpdateEyeHeight_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           smooth;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           MaxEyeHeight;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           OldEyeHeight;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Speed2D;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldBobTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x004C (0x000C) [0x0000000000000000]              
	// int                                             M;                                                		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             N;                                                		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.GetCloakValue
// [0x00020102] 
struct ASGS_Pawn_Soldier_execGetCloakValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.BecomeViewTarget
// [0x00020902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventBecomeViewTarget_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.EndViewTarget
// [0x00020902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventEndViewTarget_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.SetMeshVisibility
// [0x00020102] 
struct ASGS_Pawn_Soldier_execSetMeshVisibility_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AUTCarriedObject*                         Flag;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.Died
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.Destroyed
// [0x00020902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventDestroyed_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.SetWeapAnimType
// [0x00020100] 
struct ASGS_Pawn_Soldier_execSetWeapAnimType_Parms
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Pawn_Soldier.SetMyKiller
// [0x010201C2] 
struct ASGS_Pawn_Soldier_execSetMyKiller_Parms
{
	class APawn*                                       Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.StopFlyingUp
// [0x00020002] 
struct ASGS_Pawn_Soldier_execStopFlyingUp_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.StopGrabbing
// [0x00020002] 
struct ASGS_Pawn_Soldier_execStopGrabbing_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ShouldStillBeGrabbing
// [0x00020102] 
struct ASGS_Pawn_Soldier_execShouldStillBeGrabbing_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.TryToGrab
// [0x00020002] 
struct ASGS_Pawn_Soldier_execTryToGrab_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.CalcThirdPersonCam
// [0x00C20102] 
struct ASGS_Pawn_Soldier_execCalcThirdPersonCam_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  CamStart;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamDirX;                                          		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamDirY;                                          		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamDirZ;                                          		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CurrentCamOffset;                                 		// 0x006C (0x000C) [0x0000000000000000]              
	// float                                           DesiredCameraZOffset;                             		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.CalcCamera
// [0x00420102] 
struct ASGS_Pawn_Soldier_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.GetGrabbedView
// [0x00C20102] 
struct ASGS_Pawn_Soldier_execGetGrabbedView_Parms
{
	struct FVector                                     out_CamLoc;                                       		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 Rot;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.StartDriving
// [0x00020902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventStartDriving_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTWeaponPawn*                            WeaponPawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AUTWeapon*                                UTWeap;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AUDKVehicleBase*                          VBase;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           TextXL;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FLinearColor                             TeamColor;                                        		// 0x003C (0x0010) [0x0000000000000000]              
	// struct FColor                                   TextColor;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FString                                  ScreenName;                                       		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AUTWeapon*                                Weap;                                             		// 0x005C (0x0004) [0x0000000000000000]              
	// class AUTPlayerReplicationInfo*                 PRI;                                              		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.InCombat
// [0x00020102] 
struct ASGS_Pawn_Soldier_execInCombat_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.UpdateHateTimer
// [0x01020142] 
struct ASGS_Pawn_Soldier_execUpdateHateTimer_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.WeaponFired
// [0x00024102] 
struct ASGS_Pawn_Soldier_execWeaponFired_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ReallyPlayDying
// [0x00020102] 
struct ASGS_Pawn_Soldier_execReallyPlayDying_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.PlayDying
// [0x00020102] 
struct ASGS_Pawn_Soldier_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStopJetpackLevel
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStopJetpackLevel_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStartJetpackLevel
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStartJetpackLevel_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DeactivateSkill
// [0x00020102] 
struct ASGS_Pawn_Soldier_execDeactivateSkill_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerDeactivateSkill
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerDeactivateSkill_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ActivateSkill
// [0x010201C2] 
struct ASGS_Pawn_Soldier_execActivateSkill_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerActivateSkill
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerActivateSkill_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.SpawnVehicle
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execSpawnVehicle_Parms
{
	class UClass*                                      V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    Veh;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APawn*                                    P1;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFoundSpot : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Pawn_Soldier.IsRolling
// [0x00020102] 
struct ASGS_Pawn_Soldier_execIsRolling_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerRoll
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerRoll_Parms
{
	unsigned char                                      rDir;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.AdjustDamage
// [0x00C20002] 
struct ASGS_Pawn_Soldier_execAdjustDamage_Parms
{
	int                                                InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    BoneName;                                         		// 0x0044 (0x0008) [0x0000000000000000]              
	// float                                           DamageScale;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           Damage;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           PreDamage;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           AbsorbedDamage;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x005C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.Save_SwitchToPreviousWeapon
// [0x00020002] 
struct ASGS_Pawn_Soldier_execSave_SwitchToPreviousWeapon_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.SkillBar_Hide
// [0x00020002] 
struct ASGS_Pawn_Soldier_execSkillBar_Hide_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DoShieldHitEffect
// [0x00820102] 
struct ASGS_Pawn_Soldier_execDoShieldHitEffect_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             Loc;                                              		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.UpdateWeaponIdles
// [0x00020102] 
struct ASGS_Pawn_Soldier_execUpdateWeaponIdles_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStopSwooping
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStopSwooping_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStartSwooping
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStartSwooping_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStopLanding
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStopLanding_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStartLanding
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStartLanding_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.UpdateDinoViewPitch
// [0x00820102] 
struct ASGS_Pawn_Soldier_execUpdateDinoViewPitch_Parms
{
	// struct FVector                                  X;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X1;                                               		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y1;                                               		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  z1;                                               		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  V;                                                		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  W;                                                		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x006C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.LockOn
// [0x00020002] 
struct ASGS_Pawn_Soldier_execLockOn_Parms
{
	// class ASGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGPawn*                                  Best;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Ratio;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           BestRatio;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerCancelLockOn
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerCancelLockOn_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerTryLockOn
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerTryLockOn_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GetLeftGrabPos
// [0x00820002] 
struct ASGS_Pawn_Soldier_execGetLeftGrabPos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  StompPos;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.GetRightGrabPos
// [0x00820002] 
struct ASGS_Pawn_Soldier_execGetRightGrabPos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  StompPos;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.GetGrabPos
// [0x00820002] 
struct ASGS_Pawn_Soldier_execGetGrabPos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  StompPos;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.DropPawn
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDropPawn_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Side;                                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 C;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.GrabPawn
// [0x00020002] 
struct ASGS_Pawn_Soldier_execGrabPawn_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Socket;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    Pt;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.TakeGrabDamage
// [0x00020002] 
struct ASGS_Pawn_Soldier_execTakeGrabDamage_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.GrabMe
// [0x00020102] 
struct ASGS_Pawn_Soldier_execGrabMe_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.AdjustDinoToes
// [0x00820102] 
struct ASGS_Pawn_Soldier_execAdjustDinoToes_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    Toes[ 0x6 ];                                      		// 0x0004 (0x0030) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vStart;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rStart;                                           		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x005C (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0070 (0x0004) [0x0000000000000000]              
	// int                                             RealAngle;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.AdjustFootPosition
// [0x00820102] 
struct ASGS_Pawn_Soldier_execAdjustFootPosition_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Offset;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Start;                                            		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartOffset;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FVector                                  SmoothOffset;                                     		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0064 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.Tick
// [0x00820902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventTick_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGPawn*                                  P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0020 (0x001C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FVector                                  Pos1;                                             		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Pos2;                                             		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  GroundPos;                                        		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  GroundNormal;                                     		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vStart;                                           		// 0x0070 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x007C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0088 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0094 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.EndWobble
// [0x00020102] 
struct ASGS_Pawn_Soldier_execEndWobble_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.PerformWobble
// [0x00020102] 
struct ASGS_Pawn_Soldier_execPerformWobble_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DoWobble
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDoWobble_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.PossessedBy
// [0x00020102] 
struct ASGS_Pawn_Soldier_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.GetPlayerReplicationInfoClass
// [0x00020102] 
struct ASGS_Pawn_Soldier_execGetPlayerReplicationInfoClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.SetMovementPhysics
// [0x00020002] 
struct ASGS_Pawn_Soldier_execSetMovementPhysics_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStopCloak
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStopCloak_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.StartFire
// [0x00020102] 
struct ASGS_Pawn_Soldier_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.IsRoaring
// [0x00020102] 
struct ASGS_Pawn_Soldier_execIsRoaring_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.IsPlayingCustomAnim
// [0x00020002] 
struct ASGS_Pawn_Soldier_execIsPlayingCustomAnim_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerLand
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerLand_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerFly
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerFly_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DinoSecondaryAttack
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDinoSecondaryAttack_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DoDinoAttack
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDoDinoAttack_Parms
{
	struct FDinoAttack                                 ATTACK;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerDinoAttack
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerDinoAttack_Parms
{
	struct FDinoAttack                                 ATTACK;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ClearDinoAltAttackTimer
// [0x00020002] 
struct ASGS_Pawn_Soldier_execClearDinoAltAttackTimer_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.StartDinoAltAttackTimer
// [0x00020002] 
struct ASGS_Pawn_Soldier_execStartDinoAltAttackTimer_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DinoPrimaryAttack
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDinoPrimaryAttack_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ClearDinoAttackTimer
// [0x00020002] 
struct ASGS_Pawn_Soldier_execClearDinoAttackTimer_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.StartDinoAttackTimer
// [0x00020002] 
struct ASGS_Pawn_Soldier_execStartDinoAttackTimer_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.IsCloaked
// [0x00020102] 
struct ASGS_Pawn_Soldier_execIsCloaked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.TakeFallingDamage
// [0x00020102] 
struct ASGS_Pawn_Soldier_execTakeFallingDamage_Parms
{
	// class AUTPlayerController*                      UTPC;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           EffectiveSpeed;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.IsHeadShot
// [0x00820002] 
struct ASGS_Pawn_Soldier_execIsHeadShot_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  pos;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.IsShotOnHead
// [0x00020002] 
struct ASGS_Pawn_Soldier_execIsShotOnHead_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RayDir;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.IsDino
// [0x00020102] 
struct ASGS_Pawn_Soldier_execIsDino_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.TextureHack
// [0x00020102] 
struct ASGS_Pawn_Soldier_execTextureHack_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.SetCharacterClassFromInfo
// [0x00020102] 
struct ASGS_Pawn_Soldier_execSetCharacterClassFromInfo_Parms
{
	class UClass*                                      Info;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   Family;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USkelControlSingleBone*                   SkelControl;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.SetSkin
// [0x00020100] 
struct ASGS_Pawn_Soldier_execSetSkin_Parms
{
	class UMaterial*                                   NewMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.PostBeginPlay
// [0x00020102] 
struct ASGS_Pawn_Soldier_execPostBeginPlay_Parms
{
	// class USkelControlSingleBone*                   SkelControl;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.DetachVaultWeapon
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDetachVaultWeapon_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DoVault
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDoVault_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.NotReadyToVault
// [0x00020002] 
struct ASGS_Pawn_Soldier_execNotReadyToVault_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ClientStopChargingGenerator
// [0x010201C2] 
struct ASGS_Pawn_Soldier_execClientStopChargingGenerator_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStopChargingGenerator
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStopChargingGenerator_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerStartChargingGenerator
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerStartChargingGenerator_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.PlayChargingSound
// [0x00020102] 
struct ASGS_Pawn_Soldier_execPlayChargingSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.HitWall
// [0x00820802] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// struct FVector                                  NewDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.Bump
// [0x00820802] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  X;                                                		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.gibbedBy
// [0x00020002] 
struct ASGS_Pawn_Soldier_execgibbedBy_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.DoSuperJump
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDoSuperJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.DoJump
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Pawn_Soldier.EndRoll
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execEndRoll_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.PlayerRoll
// [0x00820002] 
struct ASGS_Pawn_Soldier_execPlayerRoll_Parms
{
	unsigned char                                      rDir;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.PerformRoll
// [0x00020002] 
struct ASGS_Pawn_Soldier_execPerformRoll_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DetachTimer
// [0x00020002] 
struct ASGS_Pawn_Soldier_execDetachTimer_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ClearRollTimer
// [0x00020002] 
struct ASGS_Pawn_Soldier_execClearRollTimer_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.StartRollTimer
// [0x00020002] 
struct ASGS_Pawn_Soldier_execStartRollTimer_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.SetRollNodes
// [0x00020002] 
struct ASGS_Pawn_Soldier_execSetRollNodes_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ShouldCloak
// [0x00020100] 
struct ASGS_Pawn_Soldier_execShouldCloak_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.OnAnimPlay
// [0x00020802] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventOnAnimPlay_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.BaseChange
// [0x00020822] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventBaseChange_Parms
{
	// class ADynamicSMActor*                          Dyn;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.JumpOffPawn
// [0x00020000] 
struct ASGS_Pawn_Soldier_execJumpOffPawn_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.FaceRotation
// [0x00020102] 
struct ASGS_Pawn_Soldier_execFaceRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ClearCustomAnim
// [0x00020002] 
struct ASGS_Pawn_Soldier_execClearCustomAnim_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.FixAnimBug
// [0x00020002] 
struct ASGS_Pawn_Soldier_execFixAnimBug_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.Fatality_Release
// [0x00020002] 
struct ASGS_Pawn_Soldier_execFatality_Release_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.FinishMe
// [0x00020102] 
struct ASGS_Pawn_Soldier_execFinishMe_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.Fatality_Grab
// [0x00020002] 
struct ASGS_Pawn_Soldier_execFatality_Grab_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.TRexFix
// [0x00020002] 
struct ASGS_Pawn_Soldier_execTRexFix_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.Cleanup
// [0x00020002] 
struct ASGS_Pawn_Soldier_execCleanup_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.AnimDone
// [0x00020002] 
struct ASGS_Pawn_Soldier_execAnimDone_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.Release
// [0x00020002] 
struct ASGS_Pawn_Soldier_execRelease_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DropCredits
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execDropCredits_Parms
{
	// class ASGS_PickupCash*                          P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.ThrowActiveWeapon
// [0x00024002] 
struct ASGS_Pawn_Soldier_execThrowActiveWeapon_Parms
{
	unsigned long                                      bDestroyWeap : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.SmashOrThrow
// [0x00020002] 
struct ASGS_Pawn_Soldier_execSmashOrThrow_Parms
{
	// float                                           Len;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Ratio;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    AttackName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.HeadShake
// [0x00020002] 
struct ASGS_Pawn_Soldier_execHeadShake_Parms
{
	// float                                           Len;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    AttackName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.ClientIgnoreLookInput
// [0x010201C2] 
struct ASGS_Pawn_Soldier_execClientIgnoreLookInput_Parms
{
	unsigned long                                      ignore : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.ClientIgnoreMoveInput
// [0x010201C2] 
struct ASGS_Pawn_Soldier_execClientIgnoreMoveInput_Parms
{
	unsigned long                                      ignore : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.CanFinish
// [0x00820002] 
struct ASGS_Pawn_Soldier_execCanFinish_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGPawn*                                  P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.CancelLand
// [0x00020002] 
struct ASGS_Pawn_Soldier_execCancelLand_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.HideRock
// [0x00020102] 
struct ASGS_Pawn_Soldier_execHideRock_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ShowRock
// [0x00020102] 
struct ASGS_Pawn_Soldier_execShowRock_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.EndTaunt
// [0x00020102] 
struct ASGS_Pawn_Soldier_execEndTaunt_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.PlayCustomAnim
// [0x00024102] 
struct ASGS_Pawn_Soldier_execPlayCustomAnim_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bHalfSlot : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRoar : 1;                                        		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverrideAnim : 1;                                		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLegs : 1;                                        		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Len;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.PlayWeaponSlot
// [0x00020102] 
struct ASGS_Pawn_Soldier_execPlayWeaponSlot_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.OnRanOver
// [0x00020802] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventOnRanOver_Parms
{
	class ASVehicle*                                   Vehicle;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         RunOverComponent;                                 		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	int                                                WheelIndex;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicle*                               UTV;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.TossMe
// [0x00820102] 
struct ASGS_Pawn_Soldier_execTossMe_Parms
{
	// struct FVector                                  X;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Pawn_Soldier.StopShieldRestoredEffect
// [0x00020102] 
struct ASGS_Pawn_Soldier_execStopShieldRestoredEffect_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DoShieldRestoredEffect
// [0x00020102] 
struct ASGS_Pawn_Soldier_execDoShieldRestoredEffect_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.StopShieldDepletedEffect
// [0x00020102] 
struct ASGS_Pawn_Soldier_execStopShieldDepletedEffect_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DoShieldDepletedEffect
// [0x00020102] 
struct ASGS_Pawn_Soldier_execDoShieldDepletedEffect_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.StopCloakEffect
// [0x00020102] 
struct ASGS_Pawn_Soldier_execStopCloakEffect_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ServerDoTaunt
// [0x002200C2] 
struct ASGS_Pawn_Soldier_execServerDoTaunt_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.DoCloakEffect
// [0x00020102] 
struct ASGS_Pawn_Soldier_execDoCloakEffect_Parms
{
};

// Function SGSOrion.SGS_Pawn_Soldier.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Pawn_Soldier.TossInventory
// [0x00824002] 
struct ASGS_Pawn_Soldier_execTossInventory_Parms
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

// Function SGSOrion.SGS_Pawn_Soldier.GetViewRotation
// [0x00820902] ( FUNC_Event )
struct ASGS_Pawn_Soldier_eventGetViewRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Result;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_FamilyInfo_Dino.DinoWhatToDoNext
// [0x00022000] 
struct USGS_FamilyInfo_Dino_execDinoWhatToDoNext_Parms
{
	class ASGS_Controller_Dino*                        dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.ServerSetRotation
// [0x00220042] 
struct ASGS_MechPawn_execServerSetRotation_Parms
{
	struct FRotator                                    Rot;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.FaceRotation
// [0x00820102] 
struct ASGS_MechPawn_execFaceRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.GetExitRotation
// [0x00820002] 
struct ASGS_MechPawn_execGetExitRotation_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Rot;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.DriverLeft
// [0x00020002] 
struct ASGS_MechPawn_execDriverLeft_Parms
{
};

// Function SGSOrion.SGS_MechPawn.DriverLeave
// [0x00820802] ( FUNC_Event )
struct ASGS_MechPawn_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 ExitRotation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.PossessedBy
// [0x00020002] 
struct ASGS_MechPawn_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.TryExitPos
// [0x00820002] 
struct ASGS_MechPawn_execTryExitPos_Parms
{
	class APawn*                                       ExitingDriver;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ExitPos;                                          		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bMustFindGround : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Slice;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartLocation;                                    		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewActorPos;                                      		// 0x0048 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.FindAutoExit
// [0x00820002] 
struct ASGS_MechPawn_execFindAutoExit_Parms
{
	class APawn*                                       ExitingDriver;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  FacingDir;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossProduct;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           PlaceDist;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.PowerDownLoop
// [0x00020102] 
struct ASGS_MechPawn_execPowerDownLoop_Parms
{
};

// Function SGSOrion.SGS_MechPawn.PlaceExitingDriver
// [0x00824002] 
struct ASGS_MechPawn_execPlaceExitingDriver_Parms
{
	class APawn*                                       ExitingDriver;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  tryPlace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ZOffset;                                          		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ExitPositions[ 0x3 ];                             		// 0x0048 (0x0024) [0x0000000000000000]              
	// class AUTPlayerController*                      PC;                                               		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.AttachDriver
// [0x00020102] 
struct ASGS_MechPawn_execAttachDriver_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.ClearCustomAnim
// [0x00020002] 
struct ASGS_MechPawn_execClearCustomAnim_Parms
{
};

// Function SGSOrion.SGS_MechPawn.PlayCustomAnim
// [0x00024102] 
struct ASGS_MechPawn_execPlayCustomAnim_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bHalfSlot : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRoar : 1;                                        		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverrideAnim : 1;                                		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLegs : 1;                                        		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Len;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.DriverEnter
// [0x00020002] 
struct ASGS_MechPawn_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.TryToDrive
// [0x00020002] 
struct ASGS_MechPawn_execTryToDrive_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bEnteredVehicle : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_MechPawn.TryToGetIn
// [0x00020002] 
struct ASGS_MechPawn_execTryToGetIn_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechPawn.EndAnim_RobotToTank
// [0x00020100] 
struct ASGS_MechPawn_execEndAnim_RobotToTank_Parms
{
};

// Function SGSOrion.SGS_MechPawn.EndAnim_TankToRobot
// [0x00020100] 
struct ASGS_MechPawn_execEndAnim_TankToRobot_Parms
{
};

// Function SGSOrion.SGS_MechPawn.Update_MechMode
// [0x00020100] 
struct ASGS_MechPawn_execUpdate_MechMode_Parms
{
};

// Function SGSOrion.SGS_MechPawn.Server_SetRobotMode
// [0x002200C2] 
struct ASGS_MechPawn_execServer_SetRobotMode_Parms
{
};

// Function SGSOrion.SGS_MechPawn.CalcCamera
// [0x00C20102] 
struct ASGS_MechPawn_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CamStart;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotX;                                          		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotY;                                          		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotZ;                                          		// 0x0064 (0x000C) [0x0000000000000000]              
	// class AUTPlayerController*                      PC;                                               		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.SetCharacterClassFromInfo
// [0x00020102] 
struct ASGS_MechPawn_execSetCharacterClassFromInfo_Parms
{
	class UClass*                                      Info;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USkelControlFootPlacement*                SkelControl;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.IsDino
// [0x00020102] 
struct ASGS_MechPawn_execIsDino_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechPawn.BaseChange
// [0x00020822] ( FUNC_Event )
struct ASGS_MechPawn_eventBaseChange_Parms
{
	// class ADynamicSMActor*                          Dyn;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.UpdateBaseTranslation
// [0x00820102] 
struct ASGS_MechPawn_execUpdateBaseTranslation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  BaseLeftPos;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BaseRightPos;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RootPos;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  LeftFootRestPos;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RightFootRestPos;                                 		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LeftGroundPos;                                    		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LeftGroundNormal;                                 		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  RightGroundPos;                                   		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RightGroundNormal;                                		// 0x0064 (0x000C) [0x0000000000000000]              
	// float                                           LowestHeight;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           HighestHeight;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0078 (0x0004) [0x0000000000000000]              
	// float                                           LeftAdjust;                                       		// 0x007C (0x0004) [0x0000000000000000]              
	// float                                           RightAdjust;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 RootDir;                                          		// 0x0084 (0x000C) [0x0000000000000000]              
	// float                                           AdjustedOffset[ 0x2 ];                            		// 0x0090 (0x0008) [0x0000000000000000]              
	// struct FVector                                  LeftHitLocation;                                  		// 0x0098 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LeftHitNormal;                                    		// 0x00A4 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RightHitLocation;                                 		// 0x00B0 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RightHitNormal;                                   		// 0x00BC (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.DoJump
// [0x00020002] 
struct ASGS_MechPawn_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechPawn.StartSmokeEffect
// [0x00020102] 
struct ASGS_MechPawn_execStartSmokeEffect_Parms
{
};

// Function SGSOrion.SGS_MechPawn.StartFireEffect
// [0x00020102] 
struct ASGS_MechPawn_execStartFireEffect_Parms
{
};

// Function SGSOrion.SGS_MechPawn.StopEffects
// [0x00020102] 
struct ASGS_MechPawn_execStopEffects_Parms
{
};

// Function SGSOrion.SGS_MechPawn.Tick
// [0x00020102] 
struct ASGS_MechPawn_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ASGS_MechPawn_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_MechPawn.UpdateRotation
// [0x00820102] 
struct ASGS_MechPawn_execUpdateRotation_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vStart;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rDir;                                             		// 0x0024 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  LeftGunPos;                                       		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RightGunPos;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 LeftGunRot;                                       		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RightGunRot;                                      		// 0x0058 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.ServerSetView
// [0x00220042] 
struct ASGS_MechPawn_execServerSetView_Parms
{
	struct FVector                                     S;                                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    D;                                                		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.ShouldSpawnExplosionLight
// [0x00020102] 
struct ASGS_MechPawn_execShouldSpawnExplosionLight_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.HandleDeadVehicleDriver
// [0x00020002] 
struct ASGS_MechPawn_execHandleDeadVehicleDriver_Parms
{
	// class APawn*                                    OldDriver;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.Died
// [0x00020002] 
struct ASGS_MechPawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTCarriedObject*                         Flag;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.BlowupVehicle
// [0x00020102] 
struct ASGS_MechPawn_execBlowupVehicle_Parms
{
};

// Function SGSOrion.SGS_MechPawn.LeaveABloodSplatterDecal
// [0x00020100] 
struct ASGS_MechPawn_execLeaveABloodSplatterDecal_Parms
{
	struct FVector                                     HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNorm;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.BaseDied
// [0x00020002] 
struct ASGS_MechPawn_execBaseDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USeqAct_Latent*                           Action;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.SpawnTracer
// [0x00820102] 
struct ASGS_MechPawn_execSpawnTracer_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UParticleSystemComponent*                 TailComp;                                         		// 0x0024 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_MechPawn.DoFireEffects
// [0x00820102] 
struct ASGS_MechPawn_execDoFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  EffectPos;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.FlashLocationUpdated
// [0x00020102] 
struct ASGS_MechPawn_execFlashLocationUpdated_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InFlashLocation;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.SetFlashLocation
// [0x00020102] 
struct ASGS_MechPawn_execSetFlashLocation_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InFiringMode;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.ServerSetFlashLocation
// [0x002200C2] 
struct ASGS_MechPawn_execServerSetFlashLocation_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.SetFireEffects
// [0x00020002] 
struct ASGS_MechPawn_execSetFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ASGS_MechPawn_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.OnRanOver
// [0x00020802] ( FUNC_Event )
struct ASGS_MechPawn_eventOnRanOver_Parms
{
	class ASVehicle*                                   Vehicle;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         RunOverComponent;                                 		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	int                                                WheelIndex;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicle*                               UTV;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.GetEffectLocation
// [0x00820102] 
struct ASGS_MechPawn_execGetEffectLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.GetWeaponAim
// [0x00820002] 
struct ASGS_MechPawn_execGetWeaponAim_Parms
{
	class ASGS_MechWeapon*                             MWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealAimPoint;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DesiredAimPoint;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitRotation;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirA;                                             		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirB;                                             		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0070 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x007C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ControllerAim;                                    		// 0x0088 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AdjustedAim;                                      		// 0x0094 (0x000C) [0x0000000000000000]              
	// float                                           DiffAngle;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           MaxAdjust;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x00A8 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x00AC (0x0004) [0x0000000000000000]              
	// struct FQuat                                    Q;                                                		// 0x00B0 (0x0010) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.GetWeaponStartTraceLocation
// [0x00824902] ( FUNC_Event )
struct ASGS_MechPawn_eventGetWeaponStartTraceLocation_Parms
{
	class AWeapon*                                     CurrentWeapon;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  pos;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.GetPhysicalFireStartLoc
// [0x00020102] 
struct ASGS_MechPawn_execGetPhysicalFireStartLoc_Parms
{
	class AUTWeapon*                                   ForWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_MechWeapon*                          MWeap;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.GetBarrelLocationAndRotation
// [0x00424902] ( FUNC_Event )
struct ASGS_MechPawn_eventGetBarrelLocationAndRotation_Parms
{
	struct FVector                                     SocketLocation;                                   		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SocketRotation;                                   		// 0x000C (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function SGSOrion.SGS_MechPawn.PanTread
// [0x00040103] ( FUNC_Final )
struct ASGS_MechPawn_execPanTread_Parms
{
	class UMaterialInstanceConstant*                   TreadPanner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TreadPan;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Side;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.PanTreads
// [0x00040103] ( FUNC_Final )
struct ASGS_MechPawn_execPanTreads_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.SetUpTreads
// [0x00040103] ( FUNC_Final )
struct ASGS_MechPawn_execSetUpTreads_Parms
{
};

// Function SGSOrion.SGS_MechPawn.PlayImpactEffects
// [0x00820102] 
struct ASGS_MechPawn_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0034 (0x001C) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0050 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x0080 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0084 (0x0004) [0x0000000000000000]              
	// int                                             DecalMaterialsLength;                             		// 0x0088 (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x008C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.AllowImpactEffects
// [0x00020102] 
struct ASGS_MechPawn_execAllowImpactEffects_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechPawn.CheckBulletWhip
// [0x00020102] 
struct ASGS_MechPawn_execCheckBulletWhip_Parms
{
	struct FVector                                     FireDir;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPlayerController*                      PC;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.GetImpactEffect
// [0x00020102] 
struct ASGS_MechPawn_execGetImpactEffect_Parms
{
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x0004 (0x0030) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// class UUTPhysicalMaterialProperty*              PhysicalProperty;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.WeaponFired
// [0x00024102] 
struct ASGS_MechPawn_execWeaponFired_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.Register
// [0x00020102] 
struct ASGS_MechPawn_execRegister_Parms
{
	// class ASGS_Controller_Player*                   P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechPawn.PostBeginPlay
// [0x00020102] 
struct ASGS_MechPawn_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_MechPawn.CauseMuzzleFlashLight
// [0x00020102] 
struct ASGS_MechPawn_execCauseMuzzleFlashLight_Parms
{
	int                                                SIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.PostRenderFor
// [0x00020900] ( FUNC_Event )
struct ASGS_MechPawn_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.SetDirection
// [0x00020102] 
struct ASGS_MechPawn_execSetDirection_Parms
{
	float                                              Right;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Forward;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.ServerSetDirection
// [0x002200C2] 
struct ASGS_MechPawn_execServerSetDirection_Parms
{
	float                                              Right;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Forward;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.TurnEMPOff
// [0x00020102] 
struct ASGS_MechPawn_execTurnEMPOff_Parms
{
};

// Function SGSOrion.SGS_MechPawn.TurnEMPOn
// [0x00020102] 
struct ASGS_MechPawn_execTurnEMPOn_Parms
{
};

// Function SGSOrion.SGS_MechPawn.EndEMP
// [0x00020102] 
struct ASGS_MechPawn_execEndEMP_Parms
{
};

// Function SGSOrion.SGS_MechPawn.ServerStomp
// [0x002200C2] 
struct ASGS_MechPawn_execServerStomp_Parms
{
};

// Function SGSOrion.SGS_MechPawn.HitWithEMP
// [0x002200C2] 
struct ASGS_MechPawn_execHitWithEMP_Parms
{
};

// Function SGSOrion.SGS_MechPawn.PlayTurretSound1
// [0x00020102] 
struct ASGS_MechPawn_execPlayTurretSound1_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.PlayTurretSound
// [0x00020102] 
struct ASGS_MechPawn_execPlayTurretSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.ServerSetSoundIndex
// [0x002200C2] 
struct ASGS_MechPawn_execServerSetSoundIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_MechPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.FindAutoExit
// [0x00820002] 
struct ASGS_Vehicle_VTOL_execFindAutoExit_Parms
{
	class APawn*                                       ExitingDriver;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  FacingDir;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossProduct;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           PlaceDist;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_VTOL.DriverLeave
// [0x00020802] ( FUNC_Event )
struct ASGS_Vehicle_VTOL_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRet : 1;                                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Vehicle_VTOL.SpawnTracer
// [0x00820102] 
struct ASGS_Vehicle_VTOL_execSpawnTracer_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UParticleSystemComponent*                 TailComp;                                         		// 0x0024 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_VTOL.VehicleWeaponFireEffects
// [0x00820102] 
struct ASGS_Vehicle_VTOL_execVehicleWeaponFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  EffectPos;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_VTOL.GetBarrelLocationAndRotation
// [0x00424902] ( FUNC_Event )
struct ASGS_Vehicle_VTOL_eventGetBarrelLocationAndRotation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SocketLocation;                                   		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SocketRotation;                                   		// 0x0010 (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.ShouldClamp
// [0x00020102] 
struct ASGS_Vehicle_VTOL_execShouldClamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.VehicleWeaponImpactEffects
// [0x00020102] 
struct ASGS_Vehicle_VTOL_execVehicleWeaponImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 E;                                                		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_VTOL.RecommendLongRangedAttack
// [0x00020002] 
struct ASGS_Vehicle_VTOL_execRecommendLongRangedAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.SitDriver
// [0x00020102] 
struct ASGS_Vehicle_VTOL_execSitDriver_Parms
{
	class AUTPawn*                                     UTP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.PassengerEnter
// [0x00020002] 
struct ASGS_Vehicle_VTOL_execPassengerEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.PassengerLeave
// [0x00020002] 
struct ASGS_Vehicle_VTOL_execPassengerLeave_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.DriverLeft
// [0x00020002] 
struct ASGS_Vehicle_VTOL_execDriverLeft_Parms
{
};

// Function SGSOrion.SGS_Vehicle_VTOL.DriverEnter
// [0x00020002] 
struct ASGS_Vehicle_VTOL_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_VTOL.ImportantVehicle
// [0x00020002] 
struct ASGS_Vehicle_VTOL_execImportantVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.ResetTurningSpeed
// [0x00020102] 
struct ASGS_Vehicle_VTOL_execResetTurningSpeed_Parms
{
};

// Function SGSOrion.SGS_Vehicle_VTOL.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct ASGS_Vehicle_VTOL_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        RigidCollisionData;                               		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.Tick
// [0x00820902] ( FUNC_Event )
struct ASGS_Vehicle_VTOL_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTBot*                                   Bot;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           JetScale;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             JetIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_VTOL.UpdateGunAim
// [0x00820102] 
struct ASGS_Vehicle_VTOL_execUpdateGunAim_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vStart;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rDir;                                             		// 0x0024 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bAbove : 1;                                       		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  X;                                                		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0050 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_VTOL.ServerSetView
// [0x002200C2] 
struct ASGS_Vehicle_VTOL_execServerSetView_Parms
{
	struct FVector                                     S;                                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    D;                                                		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.SetDriving
// [0x00020102] 
struct ASGS_Vehicle_VTOL_execSetDriving_Parms
{
	unsigned long                                      bNewDriving : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_VTOL.GetWeaponAim
// [0x00820002] 
struct ASGS_Vehicle_VTOL_execGetWeaponAim_Parms
{
	class AUTVehicleWeapon*                            VWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealAimPoint;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DesiredAimPoint;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitRotation;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirA;                                             		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirB;                                             		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0070 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x007C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ControllerAim;                                    		// 0x0088 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AdjustedAim;                                      		// 0x0094 (0x000C) [0x0000000000000000]              
	// float                                           DiffAngle;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           MaxAdjust;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x00A8 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x00AC (0x0004) [0x0000000000000000]              
	// struct FQuat                                    Q;                                                		// 0x00B0 (0x0010) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_VTOL.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_VTOL_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_VTOL.StopEffects
// [0x00020102] 
struct ASGS_Vehicle_VTOL_execStopEffects_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_VTOL.SpawnVTOLEffects
// [0x00020102] 
struct ASGS_Vehicle_VTOL_execSpawnVTOLEffects_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_VTOL.ServerToggleLandingGear
// [0x002200C2] 
struct ASGS_Vehicle_VTOL_execServerToggleLandingGear_Parms
{
};

// Function SGSOrion.SGS_Vehicle_VTOL.PostBeginPlay
// [0x00020102] 
struct ASGS_Vehicle_VTOL_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Vehicle_VTOL.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_VTOL_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_AirVehicle.Dodge
// [0x00020002] 
struct ASGS_AirVehicle_execDodge_Parms
{
	unsigned char                                      DoubleClickMove;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_AirVehicle.RecommendLongRangedAttack
// [0x00020002] 
struct ASGS_AirVehicle_execRecommendLongRangedAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_AirVehicle.SetDriving
// [0x00020102] 
struct ASGS_AirVehicle_execSetDriving_Parms
{
	unsigned long                                      bNewDriving : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_AirVehicle.LockOnWarning
// [0x00020902] ( FUNC_Event )
struct ASGS_AirVehicle_eventLockOnWarning_Parms
{
	class AUDKProjectile*                              IncomingMissile;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Dino.GetAlerted
// [0x00020000] 
struct ASGS_Controller_Dino_execGetAlerted_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.WhatToDoNext
// [0x00020800] ( FUNC_Event )
struct ASGS_Controller_Dino_eventWhatToDoNext_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.StopLookingDown
// [0x00020002] 
struct ASGS_Controller_Dino_execStopLookingDown_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.ThrowRock
// [0x00820002] 
struct ASGS_Controller_Dino_execThrowRock_Parms
{
	// class AUTProjectile*                            SpawnedProjectile;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Target;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Z;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.HearNoise
// [0x00024800] ( FUNC_Event )
struct ASGS_Controller_Dino_eventHearNoise_Parms
{
	float                                              Loudness;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NoiseMaker;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NoiseType;                                        		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Dino.SetAttractionState
// [0x00020002] 
struct ASGS_Controller_Dino_execSetAttractionState_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.DoStomp
// [0x00020002] 
struct ASGS_Controller_Dino_execDoStomp_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.TryToAttack
// [0x00020002] 
struct ASGS_Controller_Dino_execTryToAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Dino.Cleanup
// [0x00020002] 
struct ASGS_Controller_Dino_execCleanup_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.AnimDone
// [0x00020002] 
struct ASGS_Controller_Dino_execAnimDone_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.IsOnGround
// [0x00820002] 
struct ASGS_Controller_Dino_execIsOnGround_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  H;                                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Size;                                             		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.FallOver
// [0x00020002] 
struct ASGS_Controller_Dino_execFallOver_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.JumpOver
// [0x00020002] 
struct ASGS_Controller_Dino_execJumpOver_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.DoJump
// [0x00020002] 
struct ASGS_Controller_Dino_execDoJump_Parms
{
	// float                                           Len;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.NavActorReachable
// [0x00020002] 
struct ASGS_Controller_Dino_execNavActorReachable_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Dino.CanDirectlyReachGoal
// [0x00820002] 
struct ASGS_Controller_Dino_execCanDirectlyReachGoal_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  pos;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            tinfo;                                            		// 0x0020 (0x001C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.SeePlayer
// [0x00820802] ( FUNC_Event )
struct ASGS_Controller_Dino_eventSeePlayer_Parms
{
	class APawn*                                       SeenPlayer;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FHatedActor                              HA;                                               		// 0x0004 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bFound : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             J;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.SeeMonster
// [0x00020802] ( FUNC_Event )
struct ASGS_Controller_Dino_eventSeeMonster_Parms
{
	class APawn*                                       Seen;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Dino.ShouldDinoMove
// [0x00020002] 
struct ASGS_Controller_Dino_execShouldDinoMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Dino.NotifyBump
// [0x00820802] ( FUNC_Event )
struct ASGS_Controller_Dino_eventNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  VelDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  dir1;                                             		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  dir2;                                             		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.NotifyHitWall
// [0x00020802] ( FUNC_Event )
struct ASGS_Controller_Dino_eventNotifyHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Controller_Dino.FindRandomDinoAttackPoint
// [0x00020002] 
struct ASGS_Controller_Dino_execFindRandomDinoAttackPoint_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_NavigationDinoAttackPoint*           N;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   A;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           bestscore;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.Roar
// [0x00020002] 
struct ASGS_Controller_Dino_execRoar_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.NotifyKilled
// [0x00020002] 
struct ASGS_Controller_Dino_execNotifyKilled_Parms
{
	class AController*                                 NKiller;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Controller_Dino.NotifyHateTakeHit
// [0x00820802] ( FUNC_Event )
struct ASGS_Controller_Dino_eventNotifyHateTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FHatedActor                              HA;                                               		// 0x0024 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bFound : 1;                                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Controller_Dino.RemoveFromHatedActors
// [0x00020002] 
struct ASGS_Controller_Dino_execRemoveFromHatedActors_Parms
{
	class APawn*                                       OldEnemy;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.ReadjustHate
// [0x00820002] 
struct ASGS_Controller_Dino_execReadjustHate_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FHatedActor                              Temp;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.AdjustHate
// [0x00020002] 
struct ASGS_Controller_Dino_execAdjustHate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNeedsReadjust : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Controller_Dino.SetDinoViewPitch
// [0x00820002] 
struct ASGS_Controller_Dino_execSetDinoViewPitch_Parms
{
	struct FVector                                     Dir;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  X;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  V;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  W;                                                		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.GetStompPos
// [0x00820002] 
struct ASGS_Controller_Dino_execGetStompPos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  StompPos1;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  StompPos2;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.GetVehicleFlipPos
// [0x00820002] 
struct ASGS_Controller_Dino_execGetVehicleFlipPos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vPos;                                             		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.GetRockPos
// [0x00820002] 
struct ASGS_Controller_Dino_execGetRockPos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  BitePos;                                          		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.GetBitePos
// [0x00820002] 
struct ASGS_Controller_Dino_execGetBitePos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  BitePos;                                          		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.GetAimPos
// [0x00820002] 
struct ASGS_Controller_Dino_execGetAimPos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AimPos;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.GetEyePos
// [0x00820002] 
struct ASGS_Controller_Dino_execGetEyePos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  EyePos;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.ResetRoar
// [0x00020002] 
struct ASGS_Controller_Dino_execResetRoar_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.Tick
// [0x00020102] 
struct ASGS_Controller_Dino_execTick_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             randomNum;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           randomRoar;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.TryToJump
// [0x00820002] 
struct ASGS_Controller_Dino_execTryToJump_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   HitActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.HandleHeadAim
// [0x00820002] 
struct ASGS_Controller_Dino_execHandleHeadAim_Parms
{
	// struct FVector                                  Dir;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.ClearPath
// [0x00020002] 
struct ASGS_Controller_Dino_execClearPath_Parms
{
	// class ASGS_Vehicle*                             V;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGS_MechPawn*                            M;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.RedoPathing
// [0x00020002] 
struct ASGS_Controller_Dino_execRedoPathing_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.HandleMovement
// [0x00820002] 
struct ASGS_Controller_Dino_execHandleMovement_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  newAccel;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Speed;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.GetMoveOffsetVector
// [0x00820002] 
struct ASGS_Controller_Dino_execGetMoveOffsetVector_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Dir;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Right;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.AdjustSquadPositions
// [0x00020002] 
struct ASGS_Controller_Dino_execAdjustSquadPositions_Parms
{
	// class ASGS_Pawn_Soldier*                        P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.HandleFlyingMovement
// [0x00820002] 
struct ASGS_Controller_Dino_execHandleFlyingMovement_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  newAccel;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  GroundPos;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  GroundNormal;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           HeightAccel;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x0048 (0x000C) [0x0000000000000000]              
	// float                                           Speed;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RandomNorm;                                       		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  rPos;                                             		// 0x0064 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.GetMoveTarget
// [0x00020002] 
struct ASGS_Controller_Dino_execGetMoveTarget_Parms
{
	// class AActor*                                   Gen;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.DropTheBitch
// [0x00020002] 
struct ASGS_Controller_Dino_execDropTheBitch_Parms
{
	// float                                           Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.StopSpecialMovment
// [0x00020002] 
struct ASGS_Controller_Dino_execStopSpecialMovment_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.CheckSpeedAndDirection
// [0x00820002] 
struct ASGS_Controller_Dino_execCheckSpeedAndDirection_Parms
{
	// struct FVector                                  vPath;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VDir;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vRight;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vUp;                                              		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           fDist;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           fDot;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.UpdateRotation
// [0x00820002] 
struct ASGS_Controller_Dino_execUpdateRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 NewRotation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.AddDamager
// [0x00820002] 
struct ASGS_Controller_Dino_execAddDamager_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASGS_Controller_Player*                      Damager;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FDamagers                                newDamager;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.IsEnemyInRange
// [0x00824002] 
struct ASGS_Controller_Dino_execIsEnemyInRange_Parms
{
	class APawn*                                       pEnemy;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  pos;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  norm;                                             		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_Dino.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ASGS_Controller_Dino_eventPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Controller_Dino.Possess
// [0x00020802] ( FUNC_Event )
struct ASGS_Controller_Dino_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_PlayerReplicationInfo.SGSIncrementKills
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execSGSIncrementKills_Parms
{
	unsigned long                                      bEnemyKill : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_PlayerReplicationInfo.IncrementKills
// [0x00020000] 
struct ASGS_PlayerReplicationInfo_execIncrementKills_Parms
{
	unsigned long                                      bEnemyKill : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_PlayerReplicationInfo.CarnageWeaponKill
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execCarnageWeaponKill_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_PlayerReplicationInfo.CarnageDemotion
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execCarnageDemotion_Parms
{
};

// Function SGSOrion.SGS_PlayerReplicationInfo.ShouldBroadCastWelcomeMessage
// [0x00024102] 
struct ASGS_PlayerReplicationInfo_execShouldBroadCastWelcomeMessage_Parms
{
	unsigned long                                      bExiting : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_PlayerReplicationInfo.SGSUpdateEventStatAchievements
// [0x00024002] 
struct ASGS_PlayerReplicationInfo_execSGSUpdateEventStatAchievements_Parms
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AUTPlayerController*                      PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PlayerReplicationInfo.UpdateMacGuyver
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execUpdateMacGuyver_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Controller_Player*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PlayerReplicationInfo.UpdateVehicles
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execUpdateVehicles_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Controller_Player*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PlayerReplicationInfo.UpdatePunches
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execUpdatePunches_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Controller_Player*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PlayerReplicationInfo.UpdateWaveKills
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execUpdateWaveKills_Parms
{
};

// Function SGSOrion.SGS_PlayerReplicationInfo.IncrementSGSKillStat
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execIncrementSGSKillStat_Parms
{
	struct FName                                       KillType;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_PlayerReplicationInfo.IncrementDeathStat
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execIncrementDeathStat_Parms
{
	struct FName                                       NewStatName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_PlayerReplicationInfo.IncrementKillStat
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execIncrementKillStat_Parms
{
	struct FName                                       NewStatName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_PlayerReplicationInfo.IncrementVehicleKillStat
// [0x00020002] 
struct ASGS_PlayerReplicationInfo_execIncrementVehicleKillStat_Parms
{
	struct FName                                       NewStatName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_VehicleWheel.OldDirtEffectFinished
// [0x00020102] 
struct USGS_VehicleWheel_execOldDirtEffectFinished_Parms
{
	class UParticleSystemComponent*                    PSystem;                                          		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_VehicleWheel.UpdateDirtParticle
// [0x00820102] 
struct USGS_VehicleWheel_execUpdateDirtParticle_Parms
{
	// float                                           Speed;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Vel;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_VehicleWheel.SetDirtParticle
// [0x00024902] ( FUNC_Event )
struct USGS_VehicleWheel_eventSetDirtParticle_Parms
{
	class AUDKVehicle*                                 OwnerVehicle;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             NewTemplate;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Skill.Update_Hud
// [0x00020102] 
struct USGS_Skill_execUpdate_Hud_Parms
{
};

// Function SGSOrion.SGS_Skill.Tick
// [0x00020002] 
struct USGS_Skill_execTick_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Skill.OnPlayerMove
// [0x00020000] 
struct USGS_Skill_execOnPlayerMove_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Skill.Deactivate
// [0x00020002] 
struct USGS_Skill_execDeactivate_Parms
{
};

// Function SGSOrion.SGS_Skill.Activate
// [0x00020002] 
struct USGS_Skill_execActivate_Parms
{
};

// Function SGSOrion.SGS_AnimBlendByDrivingSeat.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGS_AnimBlendByDrivingSeat_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Pawn_Soldier*                        SGSP;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    vName;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AnimBlendByGladiatorTurretAim.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGS_AnimBlendByGladiatorTurretAim_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Pawn_Soldier*                        SGSP;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Aim;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Gladiator.SpawnTracer
// [0x00820102] 
struct ASGS_Vehicle_Gladiator_execSpawnTracer_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UParticleSystemComponent*                 TailComp;                                         		// 0x0024 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_Gladiator.VehicleWeaponFireEffects
// [0x00820102] 
struct ASGS_Vehicle_Gladiator_execVehicleWeaponFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  EffectPos;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Gladiator.WeaponFired
// [0x00024102] 
struct ASGS_Vehicle_Gladiator_execWeaponFired_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Gladiator.PostRenderFor
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Gladiator_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Gladiator.SetInputs
// [0x00020102] 
struct ASGS_Vehicle_Gladiator_execSetInputs_Parms
{
	float                                              InForward;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InStrafe;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InUp;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Dif;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           View;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           WheelAng;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Gladiator.DriverLeave
// [0x00020802] ( FUNC_Event )
struct ASGS_Vehicle_Gladiator_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Gladiator.DriverLeft
// [0x00020002] 
struct ASGS_Vehicle_Gladiator_execDriverLeft_Parms
{
	// float                                           Dist;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Gladiator.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct ASGS_Vehicle_Gladiator_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        RigidCollisionData;                               		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Gladiator.SuspensionHeavyShift
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Gladiator_eventSuspensionHeavyShift_Parms
{
	float                                              Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Gladiator.DrivingStatusChanged
// [0x00020102] 
struct ASGS_Vehicle_Gladiator_execDrivingStatusChanged_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Gladiator.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Gladiator_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_Gladiator.PostBeginPlay
// [0x00820102] 
struct ASGS_Vehicle_Gladiator_execPostBeginPlay_Parms
{
	// struct FVector                                  Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AnimBlendByHasDriver.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGS_AnimBlendByHasDriver_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_MechPawn*                            M;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AnimBlendByJetPack.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGS_AnimBlendByJetPack_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Pawn_Soldier*                        SGSP;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Skill_JetPack.Tick
// [0x00020002] 
struct USGS_Skill_JetPack_execTick_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Skill_JetPack.PlayJetSound
// [0x00020002] 
struct USGS_Skill_JetPack_execPlayJetSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Skill_JetPack.OnPlayerMove
// [0x00020002] 
struct USGS_Skill_JetPack_execOnPlayerMove_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DT;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Skill_JetPack.Deactivate
// [0x00020002] 
struct USGS_Skill_JetPack_execDeactivate_Parms
{
};

// Function SGSOrion.SGS_Skill_JetPack.Activate
// [0x00020002] 
struct USGS_Skill_JetPack_execActivate_Parms
{
};

// Function SGSOrion.SGS_AnimBlendByLandingGear.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGS_AnimBlendByLandingGear_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Vehicle_VTOL*                        V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AnimBlendByRollDirection.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGS_AnimBlendByRollDirection_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Pawn_Soldier*                        SGSP;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AnimBlendByRolling.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGS_AnimBlendByRolling_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Pawn_Soldier*                        SGSP;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AnimBlendByTankMode.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGS_AnimBlendByTankMode_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_MechPawn*                            M;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_BuyStation.TakeRadiusDamage
// [0x00024100] 
struct ASGS_BuyStation_execTakeRadiusDamage_Parms
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

// Function SGSOrion.SGS_BuyStation.TurnEMPOff
// [0x00020102] 
struct ASGS_BuyStation_execTurnEMPOff_Parms
{
};

// Function SGSOrion.SGS_BuyStation.TurnEMPOn
// [0x00020102] 
struct ASGS_BuyStation_execTurnEMPOn_Parms
{
};

// Function SGSOrion.SGS_BuyStation.EndEMP
// [0x00020002] 
struct ASGS_BuyStation_execEndEMP_Parms
{
};

// Function SGSOrion.SGS_BuyStation.HitWithEMP
// [0x002200C2] 
struct ASGS_BuyStation_execHitWithEMP_Parms
{
};

// Function SGSOrion.SGS_BuyStation.ApplyImpulse
// [0x00024800] ( FUNC_Event )
struct ASGS_BuyStation_eventApplyImpulse_Parms
{
	struct FVector                                     ImpulseDir;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ImpulseMag;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_BuyStation.SetPowered
// [0x00020002] 
struct ASGS_BuyStation_execSetPowered_Parms
{
	unsigned long                                      bPowered : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_BuyStation.TurnPowerOff
// [0x00020102] 
struct ASGS_BuyStation_execTurnPowerOff_Parms
{
};

// Function SGSOrion.SGS_BuyStation.TurnPowerOn
// [0x00020102] 
struct ASGS_BuyStation_execTurnPowerOn_Parms
{
};

// Function SGSOrion.SGS_BuyStation.Register
// [0x00020102] 
struct ASGS_BuyStation_execRegister_Parms
{
	// class ASGS_Controller_Player*                   P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_BuyStation.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASGS_BuyStation_eventPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_BuyStation.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_BuyStation_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_AssistMessage.ClientReceive
// [0x00026002] 
struct USGS_AssistMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_AssistMessage.GetString
// [0x00026002] 
struct USGS_AssistMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_AutoTurret.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ASGS_AutoTurret_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_AutoTurret.Tick
// [0x00820002] 
struct ASGS_AutoTurret_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x001C (0x000C) [0x0000000000000000]              
	// class ASGS_AutoTurretController*                ATC;                                              		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AutoTurret.SetMyDesiredRotation
// [0x00020002] 
struct ASGS_AutoTurret_execSetMyDesiredRotation_Parms
{
	struct FRotator                                    Rot;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_AutoTurret.PostBeginPlay
// [0x00020102] 
struct ASGS_AutoTurret_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_AutoTurretController.CanStillAttackTarget
// [0x00820002] 
struct ASGS_AutoTurretController_execCanStillAttackTarget_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Dist;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  tdir;                                             		// 0x002C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AutoTurretController.StopMuzzleFlash
// [0x00020002] 
struct ASGS_AutoTurretController_execStopMuzzleFlash_Parms
{
};

// Function SGSOrion.SGS_AutoTurretController.FireAtTarget
// [0x00820002] 
struct ASGS_AutoTurretController_execFireAtTarget_Parms
{
	// class AUTProjectile*                            Proj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AutoTurretController.FindTarget
// [0x00020002] 
struct ASGS_AutoTurretController_execFindTarget_Parms
{
	// class ASGPawn*                                  SGP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_AutoTurretController.SetAttractionState
// [0x00020002] 
struct ASGS_AutoTurretController_execSetAttractionState_Parms
{
};

// Function SGSOrion.SGS_Bot.SeePlayer
// [0x00020802] ( FUNC_Event )
struct ASGS_Bot_eventSeePlayer_Parms
{
	class APawn*                                       SeenPlayer;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Bot.Initialize
// [0x00424002] 
struct ASGS_Bot_execInitialize_Parms
{
	float                                              InSkill;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FCharacterInfo                              BotInfo;                                          		// 0x0004 (0x0070) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TeamIndex;                                        		// 0x0074 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AUTPlayerReplicationInfo*                 PRI;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Bot.SwitchToBestWeapon
// [0x00024202] ( FUNC_Exec )
struct ASGS_Bot_execSwitchToBestWeapon_Parms
{
	unsigned long                                      bForceNewWeapon : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Bot.Possess
// [0x00020002] 
struct ASGS_Bot_execPossess_Parms
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UClass*                                   Family;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Bot.ExecuteWhatToDoNext
// [0x00080802] ( FUNC_Event )
struct ASGS_Bot_eventExecuteWhatToDoNext_Parms
{
	// float                                           StartleRadius;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           StartleHeight;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Bot.MoveToDefensePoint
// [0x00020002] 
struct ASGS_Bot_execMoveToDefensePoint_Parms
{
};

// Function SGSOrion.SGS_Bot.ShouldUseSkill
// [0x00020002] 
struct ASGS_Bot_execShouldUseSkill_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Bot.StopJetPacking
// [0x00020002] 
struct ASGS_Bot_execStopJetPacking_Parms
{
};

// Function SGSOrion.SGS_Bot.JetPack
// [0x00820002] 
struct ASGS_Bot_execJetPack_Parms
{
	// struct FVector                                  Dir;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Bot.PostBeginPlay
// [0x00020002] 
struct ASGS_Bot_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Bot.NotifyBump
// [0x00820802] ( FUNC_Event )
struct ASGS_Bot_eventNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  VelDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Bot.EnterVehicle
// [0x00020002] 
struct ASGS_Bot_execEnterVehicle_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Bot.YellAt
// [0x00020002] 
struct ASGS_Bot_execYellAt_Parms
{
	class APlayerReplicationInfo*                      Moron;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Threshold;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameCarnage.CheckScore
// [0x00020002] 
struct ASGS_GameCarnage_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameCarnage.CheckEndGame
// [0x00020002] 
struct ASGS_GameCarnage_execCheckEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              P;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLastMan : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GameCarnage.ScoreKill
// [0x00020000] 
struct ASGS_GameCarnage_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameCarnage.Killed
// [0x00020002] 
struct ASGS_GameCarnage_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bEnemyKill : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASGS_PlayerReplicationInfo*               KillerPRI;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ASGS_PlayerReplicationInfo*               KilledPRI;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameCarnage.PostLogin
// [0x00020802] ( FUNC_Event )
struct ASGS_GameCarnage_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameCarnage.RatePlayerStart
// [0x00020002] 
struct ASGS_GameCarnage_execRatePlayerStart_Parms
{
	class APlayerStart*                                P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Game.BroadcastDeathMessage
// [0x00020002] 
struct ASGS_Game_execBroadcastDeathMessage_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Game.SquadLeaderDied
// [0x00020002] 
struct ASGS_Game_execSquadLeaderDied_Parms
{
	class ASGController_Bot*                           dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASGS_Pawn_Soldier*                        P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASGController_Bot*                        NewLeader;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.RegisterSpawnPoint
// [0x00020002] 
struct ASGS_Game_execRegisterSpawnPoint_Parms
{
	class ASGS_CapturePoint*                           SP;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Game.CreateSquad
// [0x00820002] 
struct ASGS_Game_execCreateSquad_Parms
{
	class ASGController_Bot*                           dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FDSquad                                  Squad;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.AddToSquad
// [0x00020002] 
struct ASGS_Game_execAddToSquad_Parms
{
	class ASGController_Bot*                           dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.CheckScore
// [0x00020002] 
struct ASGS_Game_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Game.EndSpree
// [0x00020002] 
struct ASGS_Game_execEndSpree_Parms
{
	class AUTPlayerReplicationInfo*                    Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerReplicationInfo*                    Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.ForceRespawn
// [0x00020002] 
struct ASGS_Game_execForceRespawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Game.NotifySpree
// [0x00020000] 
struct ASGS_Game_execNotifySpree_Parms
{
	class AUTPlayerReplicationInfo*                    Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Num;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Game.NotifyKilled
// [0x00020002] 
struct ASGS_Game_execNotifyKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Points;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.Killed
// [0x00020002] 
struct ASGS_Game_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bEnemyKill : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASGS_PlayerReplicationInfo*               KillerPRI;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ASGS_PlayerReplicationInfo*               KilledPRI;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AUTVehicle*                               V;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             P;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.GetFlyingRandomDest
// [0x00020002] 
struct ASGS_Game_execGetFlyingRandomDest_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         N;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.AddLife
// [0x00020002] 
struct ASGS_Game_execAddLife_Parms
{
	class ASGS_Controller_Player*                      C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Game.InitializeBot
// [0x00420002] 
struct ASGS_Game_execInitializeBot_Parms
{
	class AUTBot*                                      NewBot;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTTeamInfo*                                 BotTeam;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FCharacterInfo                              BotInfo;                                          		// 0x0008 (0x0070) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Game.SpawnBot
// [0x00824002] 
struct ASGS_Game_execSpawnBot_Parms
{
	struct FString                                     BotName;                                          		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bUseTeamIndex : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                TeamIndex;                                        		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AUTBot*                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   NewBot;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AUTTeamInfo*                              BotTeam;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FCharacterInfo                           BotInfo;                                          		// 0x0020 (0x0070) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Game.AddBot
// [0x00024002] 
struct ASGS_Game_execAddBot_Parms
{
	struct FString                                     BotName;                                          		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bUseTeamIndex : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                TeamIndex;                                        		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AUTBot*                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   NewBot;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.GenericPlayerInitialization
// [0x00020002] 
struct ASGS_Game_execGenericPlayerInitialization_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.SetTeam
// [0x00020002] 
struct ASGS_Game_execSetTeam_Parms
{
	class AController*                                 Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTTeamInfo*                                 NewTeam;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNewTeam : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AActor*                                   A;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.ChangeTeam
// [0x00020002] 
struct ASGS_Game_execChangeTeam_Parms
{
	class AController*                                 Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Num;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNewTeam : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTTeamInfo*                              NewTeam;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AUTTeamInfo*                              PendingTeam;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.PlayEndOfMatchMessage
// [0x00020002] 
struct ASGS_Game_execPlayEndOfMatchMessage_Parms
{
	// class ASGS_Controller_Player*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.CanSpectate
// [0x00020002] 
struct ASGS_Game_execCanSpectate_Parms
{
	class APlayerController*                           Viewer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      ViewTarget;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Game.PreBeginPlay
// [0x00020102] 
struct ASGS_Game_execPreBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Game.ReduceDamage
// [0x00420002] 
struct ASGS_Game_execReduceDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class APawn*                                       injured;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Game.PostLogin
// [0x00020802] ( FUNC_Event )
struct ASGS_Game_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Game.RestartPlayer
// [0x00020002] 
struct ASGS_Game_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_Controller_Player*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.RatePlayerStart
// [0x00020002] 
struct ASGS_Game_execRatePlayerStart_Parms
{
	class APlayerStart*                                P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_CapturePoint*                        SpawnPoint;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.InitPawn
// [0x00020002] 
struct ASGS_Game_execInitPawn_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATeamInfo*                                Team;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.AddInitialBots
// [0x00020002] 
struct ASGS_Game_execAddInitialBots_Parms
{
	// int                                             AddCount;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.AddBots
// [0x00020202] ( FUNC_Exec )
struct ASGS_Game_execAddBots_Parms
{
	int                                                Num;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Game.NeedPlayers
// [0x00020002] 
struct ASGS_Game_execNeedPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Game.InitGame
// [0x00420802] ( FUNC_Event )
struct ASGS_Game_eventInitGame_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class ASGS_SceneCaptureActor*                   C;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ASGS_DinoJumpPoint*                       J;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  InOpt;                                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Game.AtCapacity
// [0x00020002] 
struct ASGS_Game_execAtCapacity_Parms
{
	unsigned long                                      bSpectator : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bForcedSpectator : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Game.DinoLive
// [0x00020202] ( FUNC_Exec )
struct ASGS_Game_execDinoLive_Parms
{
	// class ASGSpawnFactory_Bot*                      SF;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.IceAge
// [0x00020202] ( FUNC_Exec )
struct ASGS_Game_execIceAge_Parms
{
	// class ASGS_Pawn_Soldier*                        P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGSpawnFactory_Bot*                      SF;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.CreateTeam
// [0x00020002] 
struct ASGS_Game_execCreateTeam_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Game.IsADeveloperID
// [0x00020002] 
struct ASGS_Game_execIsADeveloperID_Parms
{
	class ASGS_Controller_Player*                      C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  Id;                                               		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Game.UpdateGameSettings
// [0x00020002] 
struct ASGS_Game_execUpdateGameSettings_Parms
{
	// struct FString                                  MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  GameTypeName;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UOnlineGameSettings*                      GameSettings;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Game.SetGameType
// [0x00022802] ( FUNC_Event )
struct ASGS_Game_eventSetGameType_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Portal;                                           		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  ThisMapPrefix;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             pos;                                              		// 0x0038 (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewGameType;                                      		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameCTF.CheckScore
// [0x00020002] 
struct ASGS_GameCTF_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameCTF.ScoreFlag
// [0x00820002] 
struct ASGS_GameCTF_execScoreFlag_Parms
{
	class AController*                                 Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTCTFFlag*                                  theFlag;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Dist;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           oppDist;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             GoalsScored;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           ppp;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           numtouch;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  FlagLoc;                                          		// 0x0020 (0x000C) [0x0000000000000000]              
	// class AUTPlayerReplicationInfo*                 ScorerPRI;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// class AUTPlayerController*                      PC;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameCTF.GetAutoObjectiveFor
// [0x00020002] 
struct ASGS_GameCTF_execGetAutoObjectiveFor_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameCTF.ViewObjective
// [0x00020002] 
struct ASGS_GameCTF_execViewObjective_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   A;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameCTF.GetLocationFor
// [0x00420002] 
struct ASGS_GameCTF_execGetLocationFor_Parms
{
	class APawn*                                       StatusPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      LocationObject;                                   		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                MessageIndex;                                     		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                LocationSpeechOffset;                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTPickupFactory*                         F;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AUDKGameObjective*                        Best;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AUTBot*                                   B;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameCTF.CheckEndGame
// [0x00020002] 
struct ASGS_GameCTF_execCheckEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTCTFFlag*                               BestFlag;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AController*                              P;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLastMan : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GameCTF.WantFastSpawnFor
// [0x00020002] 
struct ASGS_GameCTF_execWantFastSpawnFor_Parms
{
	class AAIController*                               B;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameCTF.NearGoal
// [0x00020002] 
struct ASGS_GameCTF_execNearGoal_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTGameObjective*                         B;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameCTF.RegisterFlag
// [0x00020002] 
struct ASGS_GameCTF_execRegisterFlag_Parms
{
	class AUTCTFFlag*                                  F;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TeamIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameCTF.SetEndGameFocus
// [0x00020002] 
struct ASGS_GameCTF_execSetEndGameFocus_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AController*                              P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameCTF.PostBeginPlay
// [0x00020002] 
struct ASGS_GameCTF_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Skill_MedicGun.Tick
// [0x00020002] 
struct USGS_Skill_MedicGun_execTick_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Skill_MedicGun.PlayHealSound
// [0x00020002] 
struct USGS_Skill_MedicGun_execPlayHealSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Skill_MedicGun.Deactivate
// [0x00020002] 
struct USGS_Skill_MedicGun_execDeactivate_Parms
{
};

// Function SGSOrion.SGS_Skill_MedicGun.Activate
// [0x00020002] 
struct USGS_Skill_MedicGun_execActivate_Parms
{
};

// Function SGSOrion.SGS_Skill_Cloack.PlayCloakSound
// [0x00020002] 
struct USGS_Skill_Cloack_execPlayCloakSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Skill_Cloack.Deactivate
// [0x00020002] 
struct USGS_Skill_Cloack_execDeactivate_Parms
{
};

// Function SGSOrion.SGS_Skill_Cloack.Activate
// [0x00020002] 
struct USGS_Skill_Cloack_execActivate_Parms
{
};

// Function SGSOrion.SGS_Skill_Cloack.Tick
// [0x00020002] 
struct USGS_Skill_Cloack_execTick_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                Mat;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMaterialInterface*                       lMat;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// class UTexture*                                 Tex;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRefresh : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_CapturePoint.Tick
// [0x00020002] 
struct ASGS_CapturePoint_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_CapturePoint.PostBeginPlay
// [0x00020002] 
struct ASGS_CapturePoint_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_CapturePoint.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct ASGS_CapturePoint_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           XL;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FString                                  HudDisplay;                                       		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GameReplicationInfo.UpdateCapturePointInfo
// [0x00020002] 
struct ASGS_GameReplicationInfo_execUpdateCapturePointInfo_Parms
{
	class ASGS_CapturePoint*                           cp;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameReplicationInfo.RegisterCapturePoint
// [0x00020002] 
struct ASGS_GameReplicationInfo_execRegisterCapturePoint_Parms
{
	class ASGS_CapturePoint*                           cp;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameReplicationInfo.UpdateFlags
// [0x00020002] 
struct ASGS_GameReplicationInfo_execUpdateFlags_Parms
{
	// class AUTCTFBase*                               CTFBase;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameReplicationInfo.GundyLog
// [0x00020002] 
struct ASGS_GameReplicationInfo_execGundyLog_Parms
{
};

// Function SGSOrion.SGS_GameReplicationInfo.Timer
// [0x00020102] 
struct ASGS_GameReplicationInfo_execTimer_Parms
{
	// unsigned char                                   TimerMessageIndex;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameReplicationInfo.SetTeam
// [0x00020102] 
struct ASGS_GameReplicationInfo_execSetTeam_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATeamInfo*                                   TI;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_CapturePointMessage.GetString
// [0x00026002] 
struct USGS_CapturePointMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_CarnageMessage.GetString
// [0x00026002] 
struct USGS_CarnageMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GameDinoSurvival.Killed
// [0x00020002] 
struct ASGS_GameDinoSurvival_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_PlayerReplicationInfo*               KillerPRI;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.CheckEndGame
// [0x00020002] 
struct ASGS_GameDinoSurvival_execCheckEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_Controller_Player*                   C;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             nPlayers;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             topScore;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bDeveloper : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GameDinoSurvival.CheckNumberOfDinosRemaining
// [0x00020002] 
struct ASGS_GameDinoSurvival_execCheckNumberOfDinosRemaining_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_Pawn_Soldier*                        P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASGS_DinoSurvival_SpawnDino*              S;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.AllPlayersDead
// [0x00020002] 
struct ASGS_GameDinoSurvival_execAllPlayersDead_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_Controller_Player*                   C;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   Living;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.CheckScore
// [0x00020002] 
struct ASGS_GameDinoSurvival_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_Controller_Player*                   C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.RatePlayerStart
// [0x00020002] 
struct ASGS_GameDinoSurvival_execRatePlayerStart_Parms
{
	class APlayerStart*                                P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_Controller_Player*                   OtherPlayer;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.ActuallyDoSpawns
// [0x00020002] 
struct ASGS_GameDinoSurvival_execActuallyDoSpawns_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nPlayers;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASGS_Controller_Player*                   C;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.DoCountDownTimer
// [0x00020002] 
struct ASGS_GameDinoSurvival_execDoCountDownTimer_Parms
{
	// class ASGS_Controller_Player*                   C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.NextWaveIncoming
// [0x00020002] 
struct ASGS_GameDinoSurvival_execNextWaveIncoming_Parms
{
	// class ASGS_Controller_Player*                   C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.RestartPlayer
// [0x00020002] 
struct ASGS_GameDinoSurvival_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.ReallySpawnDeadPlayers
// [0x00020002] 
struct ASGS_GameDinoSurvival_execReallySpawnDeadPlayers_Parms
{
	// class ASGS_Controller_Player*                   C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.SpawnDeadPlayers
// [0x00020002] 
struct ASGS_GameDinoSurvival_execSpawnDeadPlayers_Parms
{
};

// Function SGSOrion.SGS_GameDinoSurvival.SpawnNextWave
// [0x00024002] 
struct ASGS_GameDinoSurvival_execSpawnNextWave_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirst : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASGS_Controller_Player*                   C;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASGS_Controller_Dino*                     D;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ASGS_VehicleFactory*                      V;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.CanDinoSpawn
// [0x00020002] 
struct ASGS_GameDinoSurvival_execCanDinoSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameDinoSurvival.GiveAssistCredits
// [0x00020002] 
struct ASGS_GameDinoSurvival_execGiveAssistCredits_Parms
{
	class ASGS_Controller_Player*                      P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Worth;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.CanSpawnTrex
// [0x00020002] 
struct ASGS_GameDinoSurvival_execCanSpawnTrex_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameDinoSurvival.MoveToNextBase
// [0x00020002] 
struct ASGS_GameDinoSurvival_execMoveToNextBase_Parms
{
	class ASGS_PowerGenerator*                         Gen;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASGS_Controller_Player*                   C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.FirstSpawns
// [0x00020002] 
struct ASGS_GameDinoSurvival_execFirstSpawns_Parms
{
	// class ASGS_DinoSurvival_SpawnDino*              N;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGS_BuyStation*                          BS;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASGS_PowerGenerator*                      G;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             FirstBase;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.PostBeginPlay
// [0x00020002] 
struct ASGS_GameDinoSurvival_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_GameDinoSurvival.RegisterBarracks
// [0x00020000] 
struct ASGS_GameDinoSurvival_execRegisterBarracks_Parms
{
	class ASGS_Barracks*                               newBarracks;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.RegisterArmory
// [0x00020000] 
struct ASGS_GameDinoSurvival_execRegisterArmory_Parms
{
	class ASGS_Armory*                                 newArmory;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.PowerUpStations
// [0x00020002] 
struct ASGS_GameDinoSurvival_execPowerUpStations_Parms
{
	class ASGS_PowerGenerator*                         Gen;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             J;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.PowerUpGenerators
// [0x00020002] 
struct ASGS_GameDinoSurvival_execPowerUpGenerators_Parms
{
	// int                                             J;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGS_Controller_Player*                   C;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.IsPawnFacingGenerators
// [0x00020002] 
struct ASGS_GameDinoSurvival_execIsPawnFacingGenerators_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.LoseGenerator
// [0x00020002] 
struct ASGS_GameDinoSurvival_execLoseGenerator_Parms
{
	class ASGS_PowerGenerator*                         Gen;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             J;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLastGen : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASGS_Controller_Player*                   C;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.GetActiveGenerator
// [0x00020002] 
struct ASGS_GameDinoSurvival_execGetActiveGenerator_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             J;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.RecoverGenerator
// [0x00020002] 
struct ASGS_GameDinoSurvival_execRecoverGenerator_Parms
{
	class ASGS_PowerGenerator*                         Gen;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.RegisterGarage
// [0x00020000] 
struct ASGS_GameDinoSurvival_execRegisterGarage_Parms
{
	class ASGS_Garage*                                 newGarage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.RegisterGenerator
// [0x00020000] 
struct ASGS_GameDinoSurvival_execRegisterGenerator_Parms
{
	class ASGS_PowerGenerator*                         newGenerator;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.RegisterBase
// [0x00020002] 
struct ASGS_GameDinoSurvival_execRegisterBase_Parms
{
	class ASGS_DinoSurvivalBase*                       NewBase;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.RegisterSettings
// [0x00020002] 
struct ASGS_GameDinoSurvival_execRegisterSettings_Parms
{
	class ASGS_DinoSurvivalSettings*                   DS;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.GetNextBaseName
// [0x00020002] 
struct ASGS_GameDinoSurvival_execGetNextBaseName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.GetBaseName
// [0x00020002] 
struct ASGS_GameDinoSurvival_execGetBaseName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.GetBaseLocation
// [0x00020002] 
struct ASGS_GameDinoSurvival_execGetBaseLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.GetDinosRemainingString
// [0x00420002] 
struct ASGS_GameDinoSurvival_execGetDinosRemainingString_Parms
{
	int                                                nRaptor;                                          		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                nTrex;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                nRham;                                            		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoSurvival.PostLogin
// [0x00020802] ( FUNC_Event )
struct ASGS_GameDinoSurvival_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GameDinoSurvival.InitGame
// [0x00420802] ( FUNC_Event )
struct ASGS_GameDinoSurvival_eventInitGame_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_FamilyInfo_Dino_Rham.DinoWhatToDoNext
// [0x00022002] 
struct USGS_FamilyInfo_Dino_Rham_execDinoWhatToDoNext_Parms
{
	class ASGS_Controller_Dino*                        dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_PowerGenerator.TurnFireOff
// [0x00020102] 
struct ASGS_PowerGenerator_execTurnFireOff_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.TurnFireOn
// [0x00020102] 
struct ASGS_PowerGenerator_execTurnFireOn_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.TurnWaitingForInputOff
// [0x00020102] 
struct ASGS_PowerGenerator_execTurnWaitingForInputOff_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.TurnWaitingForInputOn
// [0x00020102] 
struct ASGS_PowerGenerator_execTurnWaitingForInputOn_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.SwitchOn
// [0x00020002] 
struct ASGS_PowerGenerator_execSwitchOn_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.Powerup
// [0x00020002] 
struct ASGS_PowerGenerator_execPowerup_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.TurnEMPOff
// [0x00020102] 
struct ASGS_PowerGenerator_execTurnEMPOff_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.TurnEMPOn
// [0x00020102] 
struct ASGS_PowerGenerator_execTurnEMPOn_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.EndEMP
// [0x00020002] 
struct ASGS_PowerGenerator_execEndEMP_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.HitWithEMP
// [0x002200C2] 
struct ASGS_PowerGenerator_execHitWithEMP_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.PowerDown
// [0x00020002] 
struct ASGS_PowerGenerator_execPowerDown_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ASGS_PowerGenerator_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCasuer;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_PowerGenerator.Register
// [0x00020102] 
struct ASGS_PowerGenerator_execRegister_Parms
{
	// class ASGS_Controller_Player*                   P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PowerGenerator.CanBeTurnedOn
// [0x00020102] 
struct ASGS_PowerGenerator_execCanBeTurnedOn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_PowerGenerator.RegisterGame
// [0x00020002] 
struct ASGS_PowerGenerator_execRegisterGame_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASGS_PowerGenerator_eventPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_PowerGenerator.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_PowerGenerator_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_PowerGenerator.PostRenderFor
// [0x00020902] ( FUNC_Event )
struct ASGS_PowerGenerator_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Dist;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ASGS_HUD*                                 HUD;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Controller_PathFollower.Tick
// [0x00020900] ( FUNC_Event )
struct ASGS_Controller_PathFollower_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.DumpGameSearchData
// [0x00020003] ( FUNC_Final )
struct USGS_DBMainMenu_execDumpGameSearchData_Parms
{
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             OutVal;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  LogStr;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.OnFilterButtonInput
// [0x00020002] 
struct USGS_DBMainMenu_execOnFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_DBMainMenu_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_DBMainMenu.JoinNow
// [0x00020002] 
struct USGS_DBMainMenu_execJoinNow_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.CreateNow
// [0x00020002] 
struct USGS_DBMainMenu_execCreateNow_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.WidgetInit
// [0x00020802] ( FUNC_Event )
struct USGS_DBMainMenu_eventWidgetInit_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.SortBrowser
// [0x00020802] ( FUNC_Event )
struct USGS_DBMainMenu_eventSortBrowser_Parms
{
	struct FString                                     ColumnName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineGameSearch*                        GameSearch;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  LogStr;                                           		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.UpdateFilters
// [0x00020802] ( FUNC_Event )
struct USGS_DBMainMenu_eventUpdateFilters_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.PlayMenuSound
// [0x00020802] ( FUNC_Event )
struct USGS_DBMainMenu_eventPlayMenuSound_Parms
{
	struct FString                                     SoundName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.OnGameCreated
// [0x00020002] 
struct USGS_DBMainMenu_execOnGameCreated_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineGameSettings*                      LocalGameSettings;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  TravelURL;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             OutValue;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  OutStringValue;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj2;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.SetPauseMenu
// [0x00020002] 
struct USGS_DBMainMenu_execSetPauseMenu_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.SetupGameSettings
// [0x00020002] 
struct USGS_DBMainMenu_execSetupGameSettings_Parms
{
	// int                                             ValueIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  SelectedMap;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  SelectedGameMode;                                 		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.CreateOnlineGame
// [0x00020002] 
struct USGS_DBMainMenu_execCreateOnlineGame_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.GetPlayerControllerId
// [0x00020002] 
struct USGS_DBMainMenu_execGetPlayerControllerId_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.GetCommonOptionsURL
// [0x00020002] 
struct USGS_DBMainMenu_execGetCommonOptionsURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  URL;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.FinishStartDedicated
// [0x00020002] 
struct USGS_DBMainMenu_execFinishStartDedicated_Parms
{
	// class UOnlineGameSettings*                      LocalGameSettings;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  TravelURL;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Mutators;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             OutValue;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  Password;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  GameMode;                                         		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.SaveGameCreationSettings
// [0x00020002] 
struct USGS_DBMainMenu_execSaveGameCreationSettings_Parms
{
	// class UGFxObject*                               TempObj;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.OnStartGame_Confirm
// [0x00020002] 
struct USGS_DBMainMenu_execOnStartGame_Confirm_Parms
{
	// class UOnlineGameSettings*                      LocalGameSettings;                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.NotifyGameTypeChanged
// [0x00020002] 
struct USGS_DBMainMenu_execNotifyGameTypeChanged_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.OnCancelSearchComplete
// [0x00020002] 
struct USGS_DBMainMenu_execOnCancelSearchComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned char                                   CurrentAction;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.SetRefreshing
// [0x00020002] 
struct USGS_DBMainMenu_execSetRefreshing_Parms
{
	unsigned long                                      IsRefreshing : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.CancelQuery
// [0x00024002] 
struct USGS_DBMainMenu_execCancelQuery_Parms
{
	unsigned char                                      DesiredCancelAction;                              		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.AllowJoinServer
// [0x00020002] 
struct USGS_DBMainMenu_execAllowJoinServer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_DBMainMenu.OnJoinGameComplete
// [0x00020002] 
struct USGS_DBMainMenu_execOnJoinGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccessful : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  URL;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTGameSettingsCommon*                    CurGameSettings;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.ProcessJoin
// [0x00840003] ( FUNC_Final )
struct USGS_DBMainMenu_execProcessJoin_Parms
{
	// struct FOnlineGameSearchResult                  GameToJoin;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ControllerId;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CurrentSelection;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.JoinServer
// [0x00020002] 
struct USGS_DBMainMenu_execJoinServer_Parms
{
	// int                                             CurrentSelection;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.JoinServerClikListener
// [0x00020002] 
struct USGS_DBMainMenu_execJoinServerClikListener_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.SpectateServer
// [0x00020002] 
struct USGS_DBMainMenu_execSpectateServer_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.OnServerListItemPress
// [0x00020000] 
struct USGS_DBMainMenu_execOnServerListItemPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.OnPingHeaderPress
// [0x00020000] 
struct USGS_DBMainMenu_execOnPingHeaderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.OnPlayersHeaderPress
// [0x00020000] 
struct USGS_DBMainMenu_execOnPlayersHeaderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.OnMapHeaderPress
// [0x00020000] 
struct USGS_DBMainMenu_execOnMapHeaderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.OnServerHeaderPress
// [0x00020000] 
struct USGS_DBMainMenu_execOnServerHeaderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.UpdateListDataProvider
// [0x00820002] 
struct USGS_DBMainMenu_execUpdateListDataProvider_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class UOnlineGameSearch*                        LatestGameSearch;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x0020 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Ping;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             passworded;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             vacd;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             nPlayers;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             nSlots;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// TArray< struct FOnlineGameSearchResult >        gTest;                                            		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.ClearBrowser
// [0x00020002] 
struct USGS_DBMainMenu_execClearBrowser_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.ServerFilterChangedGameType
// [0x00020002] 
struct USGS_DBMainMenu_execServerFilterChangedGameType_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.OnFilterButtonPress
// [0x00020000] 
struct USGS_DBMainMenu_execOnFilterButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.OnRefreshButtonPress
// [0x00020002] 
struct USGS_DBMainMenu_execOnRefreshButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.GetDesiredMatchType
// [0x00020002] 
struct USGS_DBMainMenu_execGetDesiredMatchType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.OnFindOnlineGamesComplete
// [0x00020002] 
struct USGS_DBMainMenu_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.DoItUp
// [0x00020002] 
struct USGS_DBMainMenu_execDoItUp_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.OnFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct USGS_DBMainMenu_execOnFindOnlineGamesCompleteDelegate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bSearchCompleted : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_DBMainMenu.SubmitServerListQuery
// [0x00020002] 
struct USGS_DBMainMenu_execSubmitServerListQuery_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.RefreshServerList
// [0x00024002] 
struct USGS_DBMainMenu_execRefreshServerList_Parms
{
	int                                                InPlayerIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxResults;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UOnlineGameSearch*                        GameSearch;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ValueIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.BuildJoinURL
// [0x00020002] 
struct USGS_DBMainMenu_execBuildJoinURL_Parms
{
	struct FString                                     ResolvedConnectionURL;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ConnectURL;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.UpdateServerCount
// [0x00020002] 
struct USGS_DBMainMenu_execUpdateServerCount_Parms
{
	// int                                             ServerCount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UOnlineGameSearch*                        CurrentSearch;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.PasswordOK
// [0x00020002] 
struct USGS_DBMainMenu_execPasswordOK_Parms
{
	struct FString                                     pass;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  Password;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.ShowPasswordPrompt
// [0x00020002] 
struct USGS_DBMainMenu_execShowPasswordPrompt_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.OnPasswordDialog_OK
// [0x00040003] ( FUNC_Final )
struct USGS_DBMainMenu_execOnPasswordDialog_OK_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  Password;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.StripInvalidPasswordCharacters
// [0x00026002] 
struct USGS_DBMainMenu_execStripInvalidPasswordCharacters_Parms
{
	struct FString                                     PasswordString;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InvalidChars;                                     		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.PromptForServerPassword
// [0x00040001] ( FUNC_Final )
struct USGS_DBMainMenu_execPromptForServerPassword_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.UpdateButtonStates
// [0x00020002] 
struct USGS_DBMainMenu_execUpdateButtonStates_Parms
{
	// unsigned long                                   bHasPendingSearches : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_DBMainMenu.ConditionalRefreshServerList
// [0x00020002] 
struct USGS_DBMainMenu_execConditionalRefreshServerList_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bHasExistingResults : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bHasOutstandingQueries : 1;                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_DBMainMenu.OnGameTypeChanged
// [0x00024002] 
struct USGS_DBMainMenu_execOnGameTypeChanged_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             ProviderIdx;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  GameTypeClassName;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UUTGameSearchCustom*                      CustomSearch;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// class UUTGameSearchCommon*                      CommonSearch;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FString                                  GameType;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.GetGameTypeSearchProviderIndex
// [0x00024002] 
struct USGS_DBMainMenu_execGetGameTypeSearchProviderIndex_Parms
{
	struct FString                                     GameClassName;                                    		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ProviderIdx;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UUTUIDataProvider_GameModeInfo*           Provider;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.UpdateFilterButton
// [0x00020001] ( FUNC_Final )
struct USGS_DBMainMenu_execUpdateFilterButton_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.Cleanup
// [0x00020002] 
struct USGS_DBMainMenu_execCleanup_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.ForceLANOption
// [0x00020003] ( FUNC_Final )
struct USGS_DBMainMenu_execForceLANOption_Parms
{
	// int                                             ValueIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    MatchTypeName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UUTGameSearchCustom*                      CustomSearch;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTUIDataProvider_GameModeInfo*           Provider;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.IsLoggedIn
// [0x00024802] ( FUNC_Event )
struct USGS_DBMainMenu_eventIsLoggedIn_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRequireOnlineLogin : 1;                          		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.ValidateServerType
// [0x00020002] 
struct USGS_DBMainMenu_execValidateServerType_Parms
{
	// int                                             PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PlayerControllerId;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.GetPlayerIndex
// [0x00020002] 
struct USGS_DBMainMenu_execGetPlayerIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.GetPlayerOwner
// [0x00024003] ( FUNC_Final )
struct USGS_DBMainMenu_execGetPlayerOwner_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.DisableSubComponents
// [0x00020000] 
struct USGS_DBMainMenu_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.OnViewActivated
// [0x00020002] 
struct USGS_DBMainMenu_execOnViewActivated_Parms
{
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.OnReadAvatarComplete
// [0x00020002] 
struct USGS_DBMainMenu_execOnReadAvatarComplete_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UTexture2D*                                  Avatar;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.GetGamma
// [0x00020002] 
struct USGS_DBMainMenu_execGetGamma_Parms
{
	// class UGFxObject*                               gMC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.SetGamma
// [0x00020002] 
struct USGS_DBMainMenu_execSetGamma_Parms
{
	// class UGFxObject*                               gMC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.SetVolumes
// [0x00020002] 
struct USGS_DBMainMenu_execSetVolumes_Parms
{
	// class UGFxObject*                               vMC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               v1;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               v2;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               v3;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.HandleVolumes
// [0x00020002] 
struct USGS_DBMainMenu_execHandleVolumes_Parms
{
	// class UGFxObject*                               vMC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               v1;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               v2;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               v3;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.SaveOptions
// [0x00020002] 
struct USGS_DBMainMenu_execSaveOptions_Parms
{
	// class UGFxObject*                               TempObj;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.CheckResolution
// [0x00020002] 
struct USGS_DBMainMenu_execCheckResolution_Parms
{
	// struct FString                                  myRes;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGFxObject*                               DataProvider;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               FSMC;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.HandleResolutions
// [0x00820002] 
struct USGS_DBMainMenu_execHandleResolutions_Parms
{
	// struct FString                                  myRes;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  subRes;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  H;                                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  W;                                                		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGFxObject*                               DataProvider;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider1;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               DP;                                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           Ratio;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FASValue                                 asval;                                            		// 0x0048 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FASValue >                       args;                                             		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector2D                                vpSize;                                           		// 0x0070 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.ResetButtons
// [0x00020002] 
struct USGS_DBMainMenu_execResetButtons_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.SetButtons
// [0x00020002] 
struct USGS_DBMainMenu_execSetButtons_Parms
{
	// class UGFxObject*                               keyObject;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               keyObject2;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.ResetKeys
// [0x00020002] 
struct USGS_DBMainMenu_execResetKeys_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.SetKeys
// [0x00020002] 
struct USGS_DBMainMenu_execSetKeys_Parms
{
	// class UGFxObject*                               keyObject;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               keyObject2;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.InitList
// [0x00020002] 
struct USGS_DBMainMenu_execInitList_Parms
{
	int                                                Size;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.ResetList
// [0x00020002] 
struct USGS_DBMainMenu_execResetList_Parms
{
	int                                                Size;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.SendControllerToAS3
// [0x00020002] 
struct USGS_DBMainMenu_execSendControllerToAS3_Parms
{
	struct FString                                     bName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.SendMouseToAS3
// [0x00020002] 
struct USGS_DBMainMenu_execSendMouseToAS3_Parms
{
	struct FString                                     bName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct USGS_DBMainMenu_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.FilterControllerInput
// [0x00020802] ( FUNC_Event )
struct USGS_DBMainMenu_eventFilterControllerInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.IsControllerInput
// [0x00020002] 
struct USGS_DBMainMenu_execIsControllerInput_Parms
{
	struct FName                                       ButtonName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DBMainMenu.ControllerConvertString
// [0x00020002] 
struct USGS_DBMainMenu_execControllerConvertString_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  NewName;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.PopulateButtonBindings
// [0x00020002] 
struct USGS_DBMainMenu_execPopulateButtonBindings_Parms
{
	// class UGFxObject*                               keyObject;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               keyObject2;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  NewName;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.ConvertString
// [0x00020002] 
struct USGS_DBMainMenu_execConvertString_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  NewName;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.PopulateKeyBindings
// [0x00020002] 
struct USGS_DBMainMenu_execPopulateKeyBindings_Parms
{
	// class UGFxObject*                               keyObject;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               keyObject2;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  NewName;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.LoadOptions
// [0x00020002] 
struct USGS_DBMainMenu_execLoadOptions_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.ReadAchievementStatsComplete
// [0x00820002] 
struct USGS_DBMainMenu_execReadAchievementStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// TArray< struct FAchievementValue >              aData;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FAchievementData >               aStat;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               List;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               dp1;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x0034 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASColorTransform                        C;                                                		// 0x0050 (0x0020) [0x0000000000000000]              
	// int                                             nCompleted;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DBMainMenu.PopulateAchievements
// [0x00020002] 
struct USGS_DBMainMenu_execPopulateAchievements_Parms
{
};

// Function SGSOrion.SGS_DBMainMenu.Init
// [0x00024002] 
struct USGS_DBMainMenu_execInit_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_DBMainMenu.ExitGame
// [0x00020002] 
struct USGS_DBMainMenu_execExitGame_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.OnJoinGameKeyButtonPress
// [0x00020002] 
struct USGS_DBMainMenu_execOnJoinGameKeyButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DBMainMenu.Start
// [0x00024002] 
struct USGS_DBMainMenu_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UDataStoreClient*                         DSClient;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoAttack.CheckMaxLives
// [0x00020002] 
struct ASGS_GameDinoAttack_execCheckMaxLives_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   Living;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNoneLeft : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GameDinoAttack.CheckScore
// [0x00020002] 
struct ASGS_GameDinoAttack_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameDinoAttack.CheckEndGame
// [0x00020002] 
struct ASGS_GameDinoAttack_execCheckEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameDinoAttack.EndGame
// [0x00020002] 
struct ASGS_GameDinoAttack_execEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ASGS_Controller_Player*                   C;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameDinoAttack.Killed
// [0x00020002] 
struct ASGS_GameDinoAttack_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_PlayerReplicationInfo*               KillerPRI;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_TREK12.InstantFire
// [0x00820102] 
struct ASGS_Weap_TREK12_execInstantFire_Parms
{
	// struct FVector                                  StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FImpactInfo                              RealImpact;                                       		// 0x0024 (0x0050) [0x0000000000000000]              
	// struct FImpactInfo                              NearImpact;                                       		// 0x0074 (0x0050) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00C4 (0x0004) [0x0000000000000000]              
	// int                                             FinalImpactIndex;                                 		// 0x00C8 (0x0004) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x00CC (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x00D8 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x00E4 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x00F0 (0x0004) [0x0000000000000000]              
	// struct FVector                                  OriginalEndTrace;                                 		// 0x00F4 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_TREK12.AddSpread
// [0x00020102] 
struct ASGS_Weap_TREK12_execAddSpread_Parms
{
	struct FRotator                                    BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.PlayFireEffects
// [0x00024102] 
struct ASGS_Weap_EnergyCarbine_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.SetMuzzleFlashParams
// [0x00020102] 
struct ASGS_Weap_EnergyCarbine_execSetMuzzleFlashParams_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           PathValues[ 0x3 ];                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// int                                             NewPath;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.SetFlashLocation
// [0x00020002] 
struct ASGS_Weap_EnergyCarbine_execSetFlashLocation_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   NewFireMode;                                      		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.CalcWeaponFire
// [0x00C24102] 
struct ASGS_Weap_EnergyCarbine_execCalcWeaponFire_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FImpactInfo >                       ImpactList;                                       		// 0x0018 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FVector                                     Extent;                                           		// 0x0024 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FImpactInfo                                 ReturnValue;                                      		// 0x0030 (0x0050) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FImpactInfo                              II;                                               		// 0x0080 (0x0050) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.GetAdjustedAim
// [0x00820102] 
struct ASGS_Weap_EnergyCarbine_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 ComboAim;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.ProjectileFire
// [0x00020102] 
struct ASGS_Weap_EnergyCarbine_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.BestMode
// [0x00020002] 
struct ASGS_Weap_EnergyCarbine_execBestMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           enemyDist;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AUTBot*                                   B;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.ClearCombo
// [0x00020002] 
struct ASGS_Weap_EnergyCarbine_execClearCombo_Parms
{
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.DoCombo
// [0x00020002] 
struct ASGS_Weap_EnergyCarbine_execDoCombo_Parms
{
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.StartFire
// [0x00020102] 
struct ASGS_Weap_EnergyCarbine_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.SuggestAttackStyle
// [0x00020002] 
struct ASGS_Weap_EnergyCarbine_execSuggestAttackStyle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.RangedAttackTime
// [0x00020002] 
struct ASGS_Weap_EnergyCarbine_execRangedAttackTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.SetComboTarget
// [0x00020002] 
struct ASGS_Weap_EnergyCarbine_execSetComboTarget_Parms
{
	class AUTProj_Shockball*                           S;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.InstantFireStartTrace
// [0x00020102] 
struct ASGS_Weap_EnergyCarbine_execInstantFireStartTrace_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Weap_EnergyCarbine.GetAIRating
// [0x00020002] 
struct ASGS_Weap_EnergyCarbine_execGetAIRating_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_RocketLauncher_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.AddAmmo
// [0x00020002] 
struct ASGS_Weap_RocketLauncher_execAddAmmo_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             NewAmmoCount;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.UpdateAmmoVisibility
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execUpdateAmmoVisibility_Parms
{
};

// Function SGSOrion.SGS_Weap_RocketLauncher.HideRocket
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execHideRocket_Parms
{
	struct FName                                       RocketName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ShouldHide : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class USkelControlSingleBone*                   SkelControl;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.HideRocketAmmo
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execHideRocketAmmo_Parms
{
};

// Function SGSOrion.SGS_Weap_RocketLauncher.PlayFiringSound
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execPlayFiringSound_Parms
{
};

// Function SGSOrion.SGS_Weap_RocketLauncher.GetProjectileClass
// [0x00020002] 
struct ASGS_Weap_RocketLauncher_execGetProjectileClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.ProjectileFire
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.FireLoad
// [0x00820002] 
struct ASGS_Weap_RocketLauncher_execFireLoad_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpreadVector;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Aim;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           theta;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  FireLocation;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0058 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	// class AUTProj_LoadedRocket*                     FiredRockets[ 0x4 ];                              		// 0x0068 (0x0010) [0x0000000000000000]              
	// unsigned long                                   bCurl : 1;                                        		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   FlockIndex;                                       		// 0x007C (0x0001) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.WeaponFireLoad
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execWeaponFireLoad_Parms
{
};

// Function SGSOrion.SGS_Weap_RocketLauncher.GetSpreadDist
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execGetSpreadDist_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.BestMode
// [0x00020002] 
struct ASGS_Weap_RocketLauncher_execBestMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.GetAIRating
// [0x00820002] 
struct ASGS_Weap_RocketLauncher_execGetAIRating_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           enemyDist;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Rating;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ZDiff;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  enemyDir;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.SuggestAttackStyle
// [0x00020002] 
struct ASGS_Weap_RocketLauncher_execSuggestAttackStyle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           enemyDist;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.DrawLFMData
// [0x00820102] 
struct ASGS_Weap_RocketLauncher_execDrawLFMData_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  S;                                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector2D                                CrosshairSize;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           PickupScale;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// class AUTHUDBase*                               H;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             DrawLoaded;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 CrosshairRotation;                                		// 0x003C (0x000C) [0x0000000000000000]              
	// float                                           TimeRemaining;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           TargetDist;                                       		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_RocketLauncher_eventCauseMuzzleFlash_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.DetachMuzzleFlash
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execDetachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.AttachMuzzleFlash
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execAttachMuzzleFlash_Parms
{
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_RocketLauncher_eventCauseMuzzleFlashLight_Parms
{
	// class UUDKExplosionLight*                       NewMuzzleFlashLight;                              		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.StopMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_RocketLauncher_eventStopMuzzleFlash_Parms
{
};

// Function SGSOrion.SGS_Weap_RocketLauncher.MuzzleFlashTimer
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_RocketLauncher_eventMuzzleFlashTimer_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Length;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.ActiveRenderOverlays
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execActiveRenderOverlays_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.Destroyed
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_RocketLauncher_eventDestroyed_Parms
{
};

// Function SGSOrion.SGS_Weap_RocketLauncher.CheckTargetLock
// [0x00820002] 
struct ASGS_Weap_RocketLauncher_execCheckTargetLock_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    LockedPawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   BestTarget;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   TA;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AUDKBot*                                  BotController;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Aim;                                              		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AimRot;                                           		// 0x0054 (0x000C) [0x0000000000000000]              
	// float                                           bestAim;                                          		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           bestDist;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_RocketLauncher.Tick
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_RocketLauncher_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.CanLockOnTo
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execCanLockOnTo_Parms
{
	class AActor*                                      TA;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.AdjustLockTarget
// [0x00020002] 
struct ASGS_Weap_RocketLauncher_execAdjustLockTarget_Parms
{
	class AActor*                                      NewLockTarget;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.FireAmmunition
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execFireAmmunition_Parms
{
};

// Function SGSOrion.SGS_Weap_RocketLauncher.GetWeaponDebug
// [0x00420102] 
struct ASGS_Weap_RocketLauncher_execGetWeaponDebug_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.GetFireInterval
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execGetFireInterval_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Weap_RocketLauncher.AdjustWeaponTimingForConsole
// [0x00020102] 
struct ASGS_Weap_RocketLauncher_execAdjustWeaponTimingForConsole_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_LaserRifle.PlayChargingSound
// [0x00020102] 
struct ASGS_Weap_LaserRifle_execPlayChargingSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_LaserRifle.BeginFire
// [0x00020102] 
struct ASGS_Weap_LaserRifle_execBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_GrenadeCAR.ProjectileFire
// [0x00020102] 
struct ASGS_Weap_GrenadeCAR_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_GrenadeCAR.PlayThirdPersonGrenadeThrow
// [0x00020102] 
struct ASGS_Weap_GrenadeCAR_execPlayThirdPersonGrenadeThrow_Parms
{
};

// Function SGSOrion.SGS_Weap_GrenadeCAR.ConsumeAmmo
// [0x00020102] 
struct ASGS_Weap_GrenadeCAR_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_GrenadeCAR.PostBeginPlay
// [0x00020102] 
struct ASGS_Weap_GrenadeCAR_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Weap_GrenadeCAR.ExplodeInHands
// [0x00020100] 
struct ASGS_Weap_GrenadeCAR_execExplodeInHands_Parms
{
};

// Function SGSOrion.SGS_Weap_GrenadeCAR.Activate
// [0x00020102] 
struct ASGS_Weap_GrenadeCAR_execActivate_Parms
{
};

// Function SGSOrion.SGS_Weap_SmokeGrenade.PlayThirdPersonGrenadeThrow
// [0x00020102] 
struct ASGS_Weap_SmokeGrenade_execPlayThirdPersonGrenadeThrow_Parms
{
};

// Function SGSOrion.SGS_Weap_SmokeGrenade.ConsumeAmmo
// [0x00020102] 
struct ASGS_Weap_SmokeGrenade_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_SmokeGrenade.ExplodeInHands
// [0x00020100] 
struct ASGS_Weap_SmokeGrenade_execExplodeInHands_Parms
{
};

// Function SGSOrion.SGS_Weap_SmokeGrenade.Activate
// [0x00020102] 
struct ASGS_Weap_SmokeGrenade_execActivate_Parms
{
};

// Function SGSOrion.SGS_Weap_EMPGrenade.PlayThirdPersonGrenadeThrow
// [0x00020102] 
struct ASGS_Weap_EMPGrenade_execPlayThirdPersonGrenadeThrow_Parms
{
};

// Function SGSOrion.SGS_Weap_EMPGrenade.ConsumeAmmo
// [0x00020102] 
struct ASGS_Weap_EMPGrenade_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_EMPGrenade.ExplodeInHands
// [0x00020100] 
struct ASGS_Weap_EMPGrenade_execExplodeInHands_Parms
{
};

// Function SGSOrion.SGS_Weap_EMPGrenade.Activate
// [0x00020102] 
struct ASGS_Weap_EMPGrenade_execActivate_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Griffin.WeaponFired
// [0x00024102] 
struct ASGS_Vehicle_Griffin_execWeaponFired_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.BlowupVehicle
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execBlowupVehicle_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Griffin.DrivingStatusChanged
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execDrivingStatusChanged_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Griffin.TakeDamage
// [0x00024902] ( FUNC_Event )
struct ASGS_Vehicle_Griffin_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.SetVehicleEffectParms
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execSetVehicleEffectParms_Parms
{
	struct FName                                       TriggerName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystemComponent*                    PSC;                                              		// 0x0008 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_Griffin.MantaDuckEffect
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Griffin_eventMantaDuckEffect_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Griffin.MantaJumpEffect
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Griffin_eventMantaJumpEffect_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Griffin.InitializeEffects
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execInitializeEffects_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Griffin.RecommendCharge
// [0x00020002] 
struct ASGS_Vehicle_Griffin_execRecommendCharge_Parms
{
	class AUTBot*                                      B;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Enemy;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.TooCloseToAttack
// [0x00020002] 
struct ASGS_Vehicle_Griffin_execTooCloseToAttack_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           OtherRadius;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           OtherHeight;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Griffin.ShouldClamp
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execShouldClamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct ASGS_Vehicle_Griffin_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        RigidCollisionData;                               		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.GetChargePower
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execGetChargePower_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Griffin_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.DriverLeave
// [0x00020802] ( FUNC_Event )
struct ASGS_Vehicle_Griffin_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.IncomingMissile
// [0x00020002] 
struct ASGS_Vehicle_Griffin_execIncomingMissile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Griffin.Dodge
// [0x00020002] 
struct ASGS_Vehicle_Griffin_execDodge_Parms
{
	unsigned char                                      DoubleClickMove;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.ChooseFireMode
// [0x00020002] 
struct ASGS_Vehicle_Griffin_execChooseFireMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Griffin.PossessedBy
// [0x00020002] 
struct ASGS_Vehicle_Griffin_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.OverrideEndFire
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execOverrideEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.OverrideBeginFire
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execOverrideBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.DriverEnter
// [0x00020002] 
struct ASGS_Vehicle_Griffin_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    BasedPawn;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Griffin.CanBeBaseForPawn
// [0x00020102] 
struct ASGS_Vehicle_Griffin_execCanBeBaseForPawn_Parms
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Griffin.Tick
// [0x00020802] ( FUNC_Event )
struct ASGS_Vehicle_Griffin_eventTick_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bRecentlyRendered : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Vehicle_Griffin.GetCameraStart
// [0x00820102] 
struct ASGS_Vehicle_Griffin_execGetCameraStart_Parms
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

// Function SGSOrion.SGS_Vehicle_Griffin.GetCameraFocus
// [0x00820102] 
struct ASGS_Vehicle_Griffin_execGetCameraFocus_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  CamStart;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_RadioMessage.AnnouncementSound
// [0x00022002] 
struct USGS_RadioMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_RadioMessage.ClientReceive
// [0x00026102] 
struct USGS_RadioMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_FamilyInfo_Dino_TRex.DinoWhatToDoNext
// [0x00022002] 
struct USGS_FamilyInfo_Dino_TRex_execDinoWhatToDoNext_Parms
{
	class ASGS_Controller_Dino*                        dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_FamilyInfo_Dino_Raptor.DinoWhatToDoNext
// [0x00022000] 
struct USGS_FamilyInfo_Dino_Raptor_execDinoWhatToDoNext_Parms
{
	class ASGS_Controller_Dino*                        dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_StartupMessage.AnnouncementSound
// [0x00022002] 
struct USGS_StartupMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_StartupMessage.GetString
// [0x00026002] 
struct USGS_StartupMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             PlayerCount;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// class AGameReplicationInfo*                     GRI;                                              		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameMessage.GetString
// [0x00026002] 
struct USGS_GameMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_WeaponKillRewardMessage.GetString
// [0x00026002] 
struct USGS_WeaponKillRewardMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GeneratorMessage.ClientReceive
// [0x00026002] 
struct USGS_GeneratorMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GeneratorMessage.GetString
// [0x00026002] 
struct USGS_GeneratorMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_PlayerInput.XBoxNextWeapon
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execXBoxNextWeapon_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.T
// [0x00020002] 
struct USGS_PlayerInput_execT_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.XBoxWeaponSelect
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execXBoxWeaponSelect_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.XBoxReload
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execXBoxReload_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.XBoxUse
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execXBoxUse_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.GetRollDirection
// [0x00020002] 
struct USGS_PlayerInput_execGetRollDirection_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.Duck
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execDuck_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.UnDuck
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execUnDuck_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.FinishMelee
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execFinishMelee_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.DoMelee
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execDoMelee_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.HideTeamInfo
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execHideTeamInfo_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.ShowTeamInfo
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execShowTeamInfo_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.RequestClassSelection
// [0x00020200] ( FUNC_Exec )
struct USGS_PlayerInput_execRequestClassSelection_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.RequestTeamSelection
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execRequestTeamSelection_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.ChangeFireMode
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execChangeFireMode_Parms
{
	// unsigned char                                   NewFireMode;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PlayerInput.StopAltFire
// [0x00024202] ( FUNC_Exec )
struct USGS_PlayerInput_execStopAltFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_PlayerInput.StartAltFire
// [0x00024202] ( FUNC_Exec )
struct USGS_PlayerInput_execStartAltFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_PlayerInput.StopFire
// [0x00024202] ( FUNC_Exec )
struct USGS_PlayerInput_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_PlayerInput.StartFire
// [0x00024202] ( FUNC_Exec )
struct USGS_PlayerInput_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_PlayerInput.ReleaseBar
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execReleaseBar_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execJump_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.XBoxReleaseBar
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execXBoxReleaseBar_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.XboxJump
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execXboxJump_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.DeactivateSkill
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execDeactivateSkill_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.SGSRemoveBind
// [0x00C20202] ( FUNC_Exec )
struct USGS_PlayerInput_execSGSRemoveBind_Parms
{
	struct FName                                       BindName;                                         		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FKeyBind                                 NewBind;                                          		// 0x0014 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             BindIndex;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PlayerInput.SGSSetButton
// [0x00C20202] ( FUNC_Exec )
struct USGS_PlayerInput_execSGSSetButton_Parms
{
	struct FName                                       BindName;                                         		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FKeyBind                                 NewBind;                                          		// 0x0014 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             BindIndex;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PlayerInput.SGSSetBind
// [0x00C20202] ( FUNC_Exec )
struct USGS_PlayerInput_execSGSSetBind_Parms
{
	struct FName                                       BindName;                                         		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FKeyBind                                 NewBind;                                          		// 0x0014 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             BindIndex;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PlayerInput.ActivateSkill
// [0x00020202] ( FUNC_Exec )
struct USGS_PlayerInput_execActivateSkill_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.WeaponReload
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execWeaponReload_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.StopRunning
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execStopRunning_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.Run
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execRun_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.XBoxStopRunning
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execXBoxStopRunning_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.XBoxRun
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execXBoxRun_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.StopPTT
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execStopPTT_Parms
{
};

// Function SGSOrion.SGS_PlayerInput.PTT
// [0x00020302] ( FUNC_Exec )
struct USGS_PlayerInput_execPTT_Parms
{
};

// Function SGSOrion.SGS_CTFBase_Blue.PostBeginPlay
// [0x00020102] 
struct ASGS_CTFBase_Blue_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_CTFFlag_Blue.Score
// [0x00020002] 
struct ASGS_CTFFlag_Blue_execScore_Parms
{
};

// Function SGSOrion.SGS_CTFFlag_Blue.Drop
// [0x00024002] 
struct ASGS_CTFFlag_Blue_execDrop_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_CTFFlag_Blue.SetHolder
// [0x00020002] 
struct ASGS_CTFFlag_Blue_execSetHolder_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_CTFFlag_Blue.LogDropped
// [0x00020002] 
struct ASGS_CTFFlag_Blue_execLogDropped_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_CTFFlag_Blue.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_CTFFlag_Blue_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_CTFMessage.AnnouncementSound
// [0x00022002] 
struct USGS_CTFMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_CTFMessage.ClientReceive
// [0x00026102] 
struct USGS_CTFMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AUTHUD*                                   HUD;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_CTFMessage.GetString
// [0x00026002] 
struct USGS_CTFMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_CTFMessage.ShouldBeRemoved
// [0x00022002] 
struct USGS_CTFMessage_execShouldBeRemoved_Parms
{
	class AUTQueuedAnnouncement*                       MyAnnouncement;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      NewAnnouncementClass;                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewMessageIndex;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_CTFBase_Red.PostBeginPlay
// [0x00020102] 
struct ASGS_CTFBase_Red_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_CTFFlag_Red.Score
// [0x00020002] 
struct ASGS_CTFFlag_Red_execScore_Parms
{
};

// Function SGSOrion.SGS_CTFFlag_Red.Drop
// [0x00024002] 
struct ASGS_CTFFlag_Red_execDrop_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_CTFFlag_Red.SetHolder
// [0x00020002] 
struct ASGS_CTFFlag_Red_execSetHolder_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_CTFFlag_Red.LogDropped
// [0x00020002] 
struct ASGS_CTFFlag_Red_execLogDropped_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_CTFFlag_Red.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_CTFFlag_Red_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_LastSecondMessage.GetString
// [0x00026002] 
struct USGS_LastSecondMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_LastSecondMessage.AnnouncementSound
// [0x00022002] 
struct USGS_LastSecondMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_TeamScoreMessage.GetString
// [0x00026002] 
struct USGS_TeamScoreMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_PasswordDialog.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_PasswordDialog_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_PasswordDialog.ClearPasswordRenderer
// [0x00040003] ( FUNC_Final )
struct USGS_GFxFrontEnd_PasswordDialog_execClearPasswordRenderer_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_PasswordDialog.GetPassword
// [0x00020002] 
struct USGS_GFxFrontEnd_PasswordDialog_execGetPassword_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_PasswordDialog.SetOKButtonListener
// [0x00020002] 
struct USGS_GFxFrontEnd_PasswordDialog_execSetOKButtonListener_Parms
{
	struct FScriptDelegate                             DelegateListener;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_PasswordDialog.SetBackButtonListener
// [0x00020002] 
struct USGS_GFxFrontEnd_PasswordDialog_execSetBackButtonListener_Parms
{
	struct FScriptDelegate                             DelegateListener;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_PasswordDialog.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_PasswordDialog_execDisableSubComponents_Parms
{
	unsigned long                                      bEnableComponents : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_PasswordDialog.OnViewClosed
// [0x00020002] 
struct USGS_GFxFrontEnd_PasswordDialog_execOnViewClosed_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_PasswordDialog.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_PasswordDialog_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_Dialog_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.Select_Back
// [0x00020002] 
struct USGS_GFxFrontEnd_Dialog_execSelect_Back_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.SetBackButton_OnPress
// [0x00020002] 
struct USGS_GFxFrontEnd_Dialog_execSetBackButton_OnPress_Parms
{
	struct FScriptDelegate                             EventListener;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.SetBackButton
// [0x00040003] ( FUNC_Final )
struct USGS_GFxFrontEnd_Dialog_execSetBackButton_Parms
{
	class UGFxObject*                                  InBackButton;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.PlayCloseAnimation
// [0x00020000] 
struct USGS_GFxFrontEnd_Dialog_execPlayCloseAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.PlayOpenAnimation
// [0x00020000] 
struct USGS_GFxFrontEnd_Dialog_execPlayOpenAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_Dialog_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.DisableSubComponents
// [0x00020000] 
struct USGS_GFxFrontEnd_Dialog_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.OnViewClosed
// [0x00020000] 
struct USGS_GFxFrontEnd_Dialog_execOnViewClosed_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Dialog.AcceptDelegate
// [0x00120000] 
struct USGS_GFxFrontEnd_Dialog_execAcceptDelegate_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_View.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_View_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd_View.OnEscapeKeyPress
// [0x00020002] 
struct USGS_GFxFrontEnd_View_execOnEscapeKeyPress_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_View.MoveBackImpl
// [0x00020002] 
struct USGS_GFxFrontEnd_View_execMoveBackImpl_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_View.Select_Back
// [0x00020002] 
struct USGS_GFxFrontEnd_View_execSelect_Back_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_View.PlayCloseAnimation
// [0x00020000] 
struct USGS_GFxFrontEnd_View_execPlayCloseAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_View.PlayOpenAnimation
// [0x00020000] 
struct USGS_GFxFrontEnd_View_execPlayOpenAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_View.DisableSubComponents
// [0x00020000] 
struct USGS_GFxFrontEnd_View_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_View.OnViewClosed
// [0x00020002] 
struct USGS_GFxFrontEnd_View_execOnViewClosed_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_View.OnViewActivated
// [0x00020000] 
struct USGS_GFxFrontEnd_View_execOnViewActivated_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_View.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_View_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_View.OnViewLoaded
// [0x00020000] 
struct USGS_GFxFrontEnd_View_execOnViewLoaded_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnFilterButtonInput
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_JoinGame_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.NotifyGameTypeChanged
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execNotifyGameTypeChanged_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnCancelSearchComplete
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnCancelSearchComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned char                                   CurrentAction;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	// class USGS_GFxFrontEnd_ErrorDialog*             Dialog;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.SetRefreshing
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execSetRefreshing_Parms
{
	unsigned long                                      IsRefreshing : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.CancelQuery
// [0x00024002] 
struct USGS_GFxFrontEnd_JoinGame_execCancelQuery_Parms
{
	unsigned char                                      DesiredCancelAction;                              		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.AllowJoinServer
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execAllowJoinServer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnJoinGameComplete
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnJoinGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccessful : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  URL;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USGS_GFxFrontEnd_ErrorDialog*             DialogMC;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    CurGameSettings;                                  		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.ProcessJoin
// [0x00840003] ( FUNC_Final )
struct USGS_GFxFrontEnd_JoinGame_execProcessJoin_Parms
{
	// struct FOnlineGameSearchResult                  GameToJoin;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ControllerId;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CurrentSelection;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.JoinServer
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execJoinServer_Parms
{
	// int                                             CurrentSelection;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.JoinServerClikListener
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execJoinServerClikListener_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.SpectateServer
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execSpectateServer_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnServerListItemPress
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnServerListItemPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UOnlineGameSearch*                        LatestGameSearch;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UOnlineGameSettings*                      SelectedGameSettings;                             		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnPingHeaderPress
// [0x00020000] 
struct USGS_GFxFrontEnd_JoinGame_execOnPingHeaderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnPlayersHeaderPress
// [0x00020000] 
struct USGS_GFxFrontEnd_JoinGame_execOnPlayersHeaderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnMapHeaderPress
// [0x00020000] 
struct USGS_GFxFrontEnd_JoinGame_execOnMapHeaderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnServerHeaderPress
// [0x00020000] 
struct USGS_GFxFrontEnd_JoinGame_execOnServerHeaderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.UpdateListDataProvider
// [0x00820002] 
struct USGS_GFxFrontEnd_JoinGame_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UOnlineGameSearch*                        LatestGameSearch;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x001C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Ping;                                             		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.ServerFilterChangedGameType
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execServerFilterChangedGameType_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnFilterButtonPress
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnFilterButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USGS_GFxFrontEnd_FilterDialog*            FilterDialog;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnRefreshButtonPress
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnRefreshButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.GetDesiredMatchType
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execGetDesiredMatchType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnFindOnlineGamesComplete
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnFindOnlineGamesCompleteDelegate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bSearchCompleted : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.SubmitServerListQuery
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execSubmitServerListQuery_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.RefreshServerList
// [0x00024002] 
struct USGS_GFxFrontEnd_JoinGame_execRefreshServerList_Parms
{
	int                                                InPlayerIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxResults;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UOnlineGameSearch*                        GameSearch;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ValueIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.BuildJoinURL
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execBuildJoinURL_Parms
{
	struct FString                                     ResolvedConnectionURL;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ConnectURL;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.UpdateServerCount
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execUpdateServerCount_Parms
{
	// int                                             ServerCount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UOnlineGameSearch*                        CurrentSearch;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnPasswordDialog_OK
// [0x00040003] ( FUNC_Final )
struct USGS_GFxFrontEnd_JoinGame_execOnPasswordDialog_OK_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  Password;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.StripInvalidPasswordCharacters
// [0x00026002] 
struct USGS_GFxFrontEnd_JoinGame_execStripInvalidPasswordCharacters_Parms
{
	struct FString                                     PasswordString;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InvalidChars;                                     		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.PromptForServerPassword
// [0x00040003] ( FUNC_Final )
struct USGS_GFxFrontEnd_JoinGame_execPromptForServerPassword_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.UpdateButtonStates
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execUpdateButtonStates_Parms
{
	// unsigned long                                   bHasPendingSearches : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.UseLANMode
// [0x00020000] 
struct USGS_GFxFrontEnd_JoinGame_execUseLANMode_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.ConditionalRefreshServerList
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execConditionalRefreshServerList_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bHasExistingResults : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bHasOutstandingQueries : 1;                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnGameTypeChanged
// [0x00024002] 
struct USGS_GFxFrontEnd_JoinGame_execOnGameTypeChanged_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             ProviderIdx;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  GameTypeClassName;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UUIDataStore_OnlineGameSettings*          SettingsDataStore;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class UUTGameSearchCustom*                      CustomSearch;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UUTGameSearchCommon*                      CommonSearch;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.GetGameTypeSearchProviderIndex
// [0x00024002] 
struct USGS_GFxFrontEnd_JoinGame_execGetGameTypeSearchProviderIndex_Parms
{
	struct FString                                     GameClassName;                                    		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ProviderIdx;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UUTUIDataProvider_GameModeInfo*           Provider;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UUIDataStore_OnlineGameSettings*          SettingsDataStore;                                		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.UpdateFilterButton
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_JoinGame_execUpdateFilterButton_Parms
{
	// int                                             DesiredMatchType;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  FilterMatchType;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  FilterGameMode;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// class UUIDataStore_OnlineGameSettings*          SettingsDataStore;                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.Cleanup
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execCleanup_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.ForceLANOption
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_JoinGame_execForceLANOption_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             ValueIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FName                                    MatchTypeName;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	// class UUTGameSearchCustom*                      CustomSearch;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTUIDataProvider_GameModeInfo*           Provider;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.ValidateServerType
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execValidateServerType_Parms
{
	// int                                             PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PlayerControllerId;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnViewClosed
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnViewClosed_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_JoinGame_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnViewActivated
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnViewActivated_Parms
{
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinGame.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinGame_execOnViewLoaded_Parms
{
	// class UDataStoreClient*                         DSClient;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Screen.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_Screen_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_Screen.UpdateHelpButtonImages
// [0x00020002] 
struct USGS_GFxFrontEnd_Screen_execUpdateHelpButtonImages_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Screen.FocusIn_BackButton
// [0x00020002] 
struct USGS_GFxFrontEnd_Screen_execFocusIn_BackButton_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_Mutators_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.SetConfigList
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execSetConfigList_Parms
{
	class UGFxObject*                                  ConfigList;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.SetList
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execSetList_Parms
{
	class UGFxObject*                                  List;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.IsCurrentMutatorConfigurable
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execIsCurrentMutatorConfigurable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.ApplyGameModeFilter
// [0x00022002] 
struct USGS_GFxFrontEnd_Mutators_execApplyGameModeFilter_Parms
{
	// int                                             MutatorIdx;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   FinalItems;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTUIDataStore_MenuItems*                 LocalMenuDataStore;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTUIDataProvider_Mutator*                Provider;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.GetNumEnabledMutators
// [0x00022002] 
struct USGS_GFxFrontEnd_Mutators_execGetNumEnabledMutators_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUTUIDataStore_MenuItems*                 LocalMenuDataStore;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.GetEnabledMutators
// [0x00022002] 
struct USGS_GFxFrontEnd_Mutators_execGetEnabledMutators_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  MutatorString;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             MutatorIdx;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UUTUIDataStore_MenuItems*                 LocalMenuDataStore;                               		// 0x001C (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTUIDataProvider_Mutator*                Provider;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.AddMutatorAndFilterList
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execAddMutatorAndFilterList_Parms
{
	int                                                NewMutator;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bFiltered : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EnabledIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             MutatorIdx;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             GroupIdx;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  StringValue;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        GroupNames;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        CompareGroupNames;                                		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< int >                                   FinalItems;                                       		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.SetMutatorEnabled
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execSetMutatorEnabled_Parms
{
	int                                                MutatorId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.UpdateConfigListDataProvider
// [0x00020000] 
struct USGS_GFxFrontEnd_Mutators_execUpdateConfigListDataProvider_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.UpdateListDataProvider
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             EnabledIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   IndexInAllMutatorsList;                           		// 0x0008 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class UUTUIDataProvider_Mutator* >      FilteredMutatorList;                              		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bMutatorEnabled : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.UpdateDescription
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execUpdateDescription_Parms
{
	// int                                             SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  MutatorClass;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Description;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.OnListChange
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execOnListChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.FindMutatorIndexByClass
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_Mutators_execFindMutatorIndexByClass_Parms
{
	struct FString                                     MutatorClass;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   MutatorIdx;                                       		// 0x000D (0x0001) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.OnListItemPress
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execOnListItemPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   SelectedIndex;                                    		// 0x0028 (0x0001) [0x0000000000000000]              
	// unsigned char                                   OfficialSelectedIndex;                            		// 0x0029 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               MutatorData;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.PlayOpenAnimation
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execPlayOpenAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_Mutators_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.SortAllMutatorsBasedOnOfficialArray
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execSortAllMutatorsBasedOnOfficialArray_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  GameModeString;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UUTUIDataProvider_Mutator* >      TempList;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTUIDataProvider_Mutator*                MutatorProvider;                                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.OnViewActivated
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execOnViewActivated_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Mutators.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_Mutators_execOnViewLoaded_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinDialog.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_JoinDialog_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinDialog.SetSpectateButtonPress
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinDialog_execSetSpectateButtonPress_Parms
{
	struct FScriptDelegate                             SpectateButtonListener;                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinDialog.SetJoinButtonPress
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinDialog_execSetJoinButtonPress_Parms
{
	struct FScriptDelegate                             JoinButtonListener;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinDialog.PopulateServerInfo
// [0x00820002] 
struct USGS_GFxFrontEnd_JoinDialog_execPopulateServerInfo_Parms
{
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   I;                                                		// 0x0004 (0x0001) [0x0000000000000000]              
	// unsigned char                                   DPArrayIndex;                                     		// 0x0005 (0x0001) [0x0000000000000000]              
	// int                                             CurrentPlayers;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             MaxPlayers;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  PlayersString;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGFxObject*                               DataProvider;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x0030 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTGameSettingsCommon*                    UTGameSettings;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             SettingId;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             PropertyId;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	// struct FString                                  SettingValue;                                     		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  SettingName;                                      		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  PropertyValue;                                    		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  PropertyName;                                     		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinDialog.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_JoinDialog_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_JoinDialog.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_JoinDialog_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_DeathMessage.SuperClientReceive
// [0x00026002] 
struct USGS_DeathMessage_execSuperClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  MessageString;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DeathMessage.GetString
// [0x00026002] 
struct USGS_DeathMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  KillerName;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  VictimName;                                       		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UClass*                                   KillDamageType;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DeathMessage.ClientReceive
// [0x00026002] 
struct USGS_DeathMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_KillerMessage.GetString
// [0x00026002] 
struct USGS_KillerMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class UClass*                                   KillDamageType;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MultiKillMessage.GetString
// [0x00026002] 
struct USGS_MultiKillMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_MultiKillMessage.AnnouncementSound
// [0x00022002] 
struct USGS_MultiKillMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MultiKillMessage.SuperClientReceive
// [0x00026102] 
struct USGS_MultiKillMessage_execSuperClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  MessageString;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_MultiKillMessage.ClientReceive
// [0x00026102] 
struct USGS_MultiKillMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_VictimMessage.GetString
// [0x00026002] 
struct USGS_VictimMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  VictimString;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UClass*                                   VictimDamageType;                                 		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DemoRecSpectator.UpdateRotation
// [0x00820002] 
struct ASGS_DemoRecSpectator_execUpdateRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 NewRotation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DemoRecSpectator.GetPlayerViewPoint
// [0x00420902] ( FUNC_Event )
struct ASGS_DemoRecSpectator_eventGetPlayerViewPoint_Parms
{
	struct FVector                                     CameraLocation;                                   		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    CameraRotation;                                   		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SGSOrion.SGS_DemoRecSpectator.Pause
// [0x00020202] ( FUNC_Exec )
struct ASGS_DemoRecSpectator_execPause_Parms
{
};

// Function SGSOrion.SGS_DemoRecSpectator.SetPause
// [0x00024002] 
struct ASGS_DemoRecSpectator_execSetPause_Parms
{
	unsigned long                                      bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FScriptDelegate                             CanUnpauseDelegate;                               		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DemoRecSpectator.ClientSetRealViewTarget
// [0x010201C2] 
struct ASGS_DemoRecSpectator_execClientSetRealViewTarget_Parms
{
	class APlayerReplicationInfo*                      NewTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DemoRecSpectator.ServerViewSelf
// [0x00224042] 
struct ASGS_DemoRecSpectator_execServerViewSelf_Parms
{
	struct FViewTargetTransitionParams                 TransitionParams;                                 		// 0x0000 (0x0010) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_DemoRecSpectator.SetViewTarget
// [0x00024002] 
struct ASGS_DemoRecSpectator_execSetViewTarget_Parms
{
	class AActor*                                      NewViewTarget;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FViewTargetTransitionParams                 TransitionParams;                                 		// 0x0004 (0x0010) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_DemoRecSpectator.DemoViewNextPlayer
// [0x00020202] ( FUNC_Exec )
struct ASGS_DemoRecSpectator_execDemoViewNextPlayer_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    pick;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFound : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_DemoRecSpectator.ViewClass
// [0x00024202] ( FUNC_Exec )
struct ASGS_DemoRecSpectator_execViewClass_Parms
{
	class UClass*                                      aClass;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bQuiet : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCheat : 1;                                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class AActor*                                   Other;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   first;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFound : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_DemoRecSpectator.Slomo
// [0x00020202] ( FUNC_Exec )
struct ASGS_DemoRecSpectator_execSlomo_Parms
{
	float                                              NewTimeDilation;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DemoRecSpectator.InitPlayerReplicationInfo
// [0x00020002] 
struct ASGS_DemoRecSpectator_execInitPlayerReplicationInfo_Parms
{
};

// Function SGSOrion.SGS_DemoRecSpectator.ReceivedPlayer
// [0x00020902] ( FUNC_Event )
struct ASGS_DemoRecSpectator_eventReceivedPlayer_Parms
{
};

// Function SGSOrion.SGS_DemoRecSpectator.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASGS_DemoRecSpectator_eventPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_DinoSurvival_SpawnDino.CanSpawn
// [0x00820002] 
struct ASGS_DinoSurvival_SpawnDino_execCanSpawn_Parms
{
	class UClass*                                      Family;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DinoSurvival_SpawnDino.ReallySpawnDino
// [0x00020002] 
struct ASGS_DinoSurvival_SpawnDino_execReallySpawnDino_Parms
{
	class UClass*                                      Family;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_Pawn_Soldier*                        DinoPawn;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASGS_Controller_Dino*                     DinoController;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DinoSurvival_SpawnDino.SpawnDino
// [0x00020002] 
struct ASGS_DinoSurvival_SpawnDino_execSpawnDino_Parms
{
	class UClass*                                      Family;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_DinoSurvivalBase.UnTouch
// [0x00020902] ( FUNC_Event )
struct ASGS_DinoSurvivalBase_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DinoSurvivalBase.Touch
// [0x00020902] ( FUNC_Event )
struct ASGS_DinoSurvivalBase_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_DinoSurvivalBase.RegisterHudActor
// [0x00020102] 
struct ASGS_DinoSurvivalBase_execRegisterHudActor_Parms
{
	// class ASGS_Controller_Player*                   P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_DinoSurvivalBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASGS_DinoSurvivalBase_eventPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_DinoSurvivalBaseChangeMessage.ClientReceive
// [0x00026002] 
struct USGS_DinoSurvivalBaseChangeMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_DinoSurvivalBaseChangeMessage.GetString
// [0x00026002] 
struct USGS_DinoSurvivalBaseChangeMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DinoSurvivalMessage.ClientReceive
// [0x00026002] 
struct USGS_DinoSurvivalMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_DinoSurvivalMessage.GetString
// [0x00026002] 
struct USGS_DinoSurvivalMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DinoSurvivalMessageHelper.ClientReceive
// [0x00026002] 
struct USGS_DinoSurvivalMessageHelper_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_DinoSurvivalMessageHelper.GetString
// [0x00026002] 
struct USGS_DinoSurvivalMessageHelper_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_DinoSurvivalSettings.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ASGS_DinoSurvivalSettings_eventPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Message_VehicleKill.GetString
// [0x00026002] 
struct USGS_Message_VehicleKill_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Message_VehicleKill.AnnouncementSound
// [0x00022002] 
struct USGS_Message_VehicleKill_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_EvacuationPoint.UnTouch
// [0x00020902] ( FUNC_Event )
struct ASGS_EvacuationPoint_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_EvacuationPoint.Touch
// [0x00020902] ( FUNC_Event )
struct ASGS_EvacuationPoint_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_EvacuationPoint.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASGS_EvacuationPoint_eventPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Weap_OSOR.ConsumeAmmo
// [0x00020102] 
struct ASGS_Weap_OSOR_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_OSOR.IncrementFlashCount
// [0x00020100] 
struct ASGS_Weap_OSOR_execIncrementFlashCount_Parms
{
};

// Function SGSOrion.SGS_Weap_OSOR.GetPhysicalFireStartLoc
// [0x00824102] 
struct ASGS_Weap_OSOR_execGetPhysicalFireStartLoc_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_OSOR.Hud_HideProgressBar
// [0x00020102] 
struct ASGS_Weap_OSOR_execHud_HideProgressBar_Parms
{
};

// Function SGSOrion.SGS_Weap_OSOR.Hud_ShowProgressBar
// [0x00020102] 
struct ASGS_Weap_OSOR_execHud_ShowProgressBar_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_OSOR.Tick
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_OSOR_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_OSOR.FireAmmunition
// [0x00020102] 
struct ASGS_Weap_OSOR_execFireAmmunition_Parms
{
};

// Function SGSOrion.SGS_Weap_OSOR.DoTeleport
// [0x00820002] 
struct ASGS_Weap_OSOR_execDoTeleport_Parms
{
	// class AActor*                                   destActor;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   tempActor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   A;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bColliding : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ColRadius;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ColHeight;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_OSOR.FindFriendWithNoShield
// [0x00820002] 
struct ASGS_Weap_OSOR_execFindFriendWithNoShield_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGS_Pawn_Soldier*                        Soldier;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Forward;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           PlayerFaceOf;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           minPlayerFaceOf;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_OSOR.FindLockDevice
// [0x00820002] 
struct ASGS_Weap_OSOR_execFindLockDevice_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGLockDevice*                            LockDevice;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Forward;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           PlayerFaceOf;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           minPlayerFaceOf;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_OSOR.Activate
// [0x00020102] 
struct ASGS_Weap_OSOR_execActivate_Parms
{
};

// Function SGSOrion.SGS_Weap_OSOR.Deactivate
// [0x002200C0] 
struct ASGS_Weap_OSOR_execDeactivate_Parms
{
};

// Function SGSOrion.SGS_Weap_OSOR.ReloadAmmo
// [0x002200C0] 
struct ASGS_Weap_OSOR_execReloadAmmo_Parms
{
};

// Function SGSOrion.SGS_Weap_OSOR.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Weap_OSOR_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_OSOR.StopAiming
// [0x00024100] 
struct ASGS_Weap_OSOR_execStopAiming_Parms
{
	unsigned long                                      bPlayAnim : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPlaySound : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Weap_OSOR.StartAiming
// [0x00024100] 
struct ASGS_Weap_OSOR_execStartAiming_Parms
{
	unsigned long                                      bPlayAnim : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPlaySound : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Weap_MedicGun.ShouldRefire
// [0x00020102] 
struct ASGS_Weap_MedicGun_execShouldRefire_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Weap_MedicGun.Think
// [0x00820102] 
struct ASGS_Weap_MedicGun_execThink_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Health;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_MedicGun.HandleFinishedFiring
// [0x00020102] 
struct ASGS_Weap_MedicGun_execHandleFinishedFiring_Parms
{
};

// Function SGSOrion.SGS_Weap_MedicGun.StopFire
// [0x00020102] 
struct ASGS_Weap_MedicGun_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_MedicGun.StartFire
// [0x00020102] 
struct ASGS_Weap_MedicGun_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_MedicGun.StopAiming
// [0x00024100] 
struct ASGS_Weap_MedicGun_execStopAiming_Parms
{
	unsigned long                                      bPlayAnim : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPlaySound : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Weap_MedicGun.StartAiming
// [0x00024100] 
struct ASGS_Weap_MedicGun_execStartAiming_Parms
{
	unsigned long                                      bPlayAnim : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPlaySound : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Weap_CV10_Silenced.UpdateHealEffects
// [0x00020102] 
struct ASGS_Weap_CV10_Silenced_execUpdateHealEffects_Parms
{
	// class UMaterialInstanceConstant*                Mat;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_CV10_Silenced.Tick
// [0x00020102] 
struct ASGS_Weap_CV10_Silenced_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_CV10_Silenced.PostBeginPlay
// [0x00020102] 
struct ASGS_Weap_CV10_Silenced_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Pawn_Dino.IsDino
// [0x00020102] 
struct ASGS_Pawn_Dino_execIsDino_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_PawnSoundGroup_TRex.PlayLandSound
// [0x00022000] 
struct USGS_PawnSoundGroup_TRex_execPlayLandSound_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_FirstBloodMessage.GetString
// [0x00026002] 
struct USGS_FirstBloodMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_FirstBloodMessage.AnnouncementSound
// [0x00022002] 
struct USGS_FirstBloodMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GameMenu.GenericPlayerInitialization
// [0x00020002] 
struct ASGS_GameMenu_execGenericPlayerInitialization_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_KillingSpreeMessage.GetString
// [0x00026002] 
struct USGS_KillingSpreeMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GameMessageDB.GetString
// [0x00026002] 
struct USGS_GameMessageDB_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_HudCarnage.TextPostRender
// [0x00020002] 
struct ASGS_HudCarnage_execTextPostRender_Parms
{
	// float                                           XL;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHudCTF.UpdateObjectives
// [0x00820002] 
struct USGS_GFXHudCTF_execUpdateObjectives_Parms
{
	// class UGFxObject*                               List;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASG_KeyPad*                               KeyPad;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  MyFlagPos;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EnemyFlagPos;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// int                                             EnemyIndex;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFXHudCTF.Init
// [0x00024002] 
struct USGS_GFXHudCTF_execInit_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_TeamScoreMessageCTF.GetString
// [0x00026002] 
struct USGS_TeamScoreMessageCTF_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_SupplyCabinet.Touch
// [0x00020802] ( FUNC_Event )
struct ASGS_SupplyCabinet_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_SupplyCabinet.Bump
// [0x00020802] ( FUNC_Event )
struct ASGS_SupplyCabinet_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_SupplyCabinet.CanSupply
// [0x00020102] 
struct ASGS_SupplyCabinet_execCanSupply_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AUTWeapon*                                Weap;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_SupplyCabinet.ClearSuppliedVar
// [0x00020002] 
struct ASGS_SupplyCabinet_execClearSuppliedVar_Parms
{
};

// Function SGSOrion.SGS_SupplyCabinet.Supply
// [0x002200C2] 
struct ASGS_SupplyCabinet_execSupply_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AUTWeapon*                                Weap;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasSupplied : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_SupplyCabinet.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_SupplyCabinet_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_HudDinoSurvival.TextRenderGameStatus
// [0x00020002] 
struct ASGS_HudDinoSurvival_execTextRenderGameStatus_Parms
{
};

// Function SGSOrion.SGS_GameViewportClient.DrawTransition
// [0x00020002] 
struct USGS_GameViewportClient_execDrawTransition_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             pos;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  MapName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Desc;                                             		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ParseStr;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UClass*                                   GameClass;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  HintMessage;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bAllowHints : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  GameClassName;                                    		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GameViewportClient.NotifyConnectionError
// [0x00024002] 
struct USGS_GameViewportClient_execNotifyConnectionError_Parms
{
	unsigned char                                      MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// class AWorldInfo*                               WI;                                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
struct USGS_GameViewportClient_eventPostRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   OldTransitionType;                                		// 0x0008 (0x0001) [0x0000000000000000]              
	// class UAudioDevice*                             AD;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GameViewportClient.SGSHandleInputAxis
// [0x00020802] ( FUNC_Event )
struct USGS_GameViewportClient_eventSGSHandleInputAxis_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delta;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GfxBuyMenu.PlayCloseAnimation
// [0x00020000] 
struct USGS_GfxBuyMenu_execPlayCloseAnimation_Parms
{
};

// Function SGSOrion.SGS_GfxBuyMenu.PlayOpenAnimation
// [0x00020002] 
struct USGS_GfxBuyMenu_execPlayOpenAnimation_Parms
{
};

// Function SGSOrion.SGS_GfxBuyMenu.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct USGS_GfxBuyMenu_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GfxBuyMenu.WidgetInit
// [0x00024802] ( FUNC_Event )
struct USGS_GfxBuyMenu_eventWidgetInit_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Index;                                            		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GfxBuyMenu.PlayMenuSound
// [0x00020802] ( FUNC_Event )
struct USGS_GfxBuyMenu_eventPlayMenuSound_Parms
{
	struct FString                                     SoundName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GfxBuyMenu.WidgetInit2
// [0x00020802] ( FUNC_Event )
struct USGS_GfxBuyMenu_eventWidgetInit2_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ParentName;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxObject*                               buyMC;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             Credits;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GfxBuyMenu.Start
// [0x00024002] 
struct USGS_GfxBuyMenu_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GfxBuyMenu_Barracks.PlayCloseAnimation
// [0x00020000] 
struct USGS_GfxBuyMenu_Barracks_execPlayCloseAnimation_Parms
{
};

// Function SGSOrion.SGS_GfxBuyMenu_Barracks.PlayOpenAnimation
// [0x00020002] 
struct USGS_GfxBuyMenu_Barracks_execPlayOpenAnimation_Parms
{
};

// Function SGSOrion.SGS_GfxBuyMenu_Barracks.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct USGS_GfxBuyMenu_Barracks_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GfxBuyMenu_Barracks.WidgetInit
// [0x00020802] ( FUNC_Event )
struct USGS_GfxBuyMenu_Barracks_eventWidgetInit_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GfxBuyMenu_Barracks.PlayMenuSound
// [0x00020802] ( FUNC_Event )
struct USGS_GfxBuyMenu_Barracks_eventPlayMenuSound_Parms
{
	struct FString                                     SoundName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GfxBuyMenu_Barracks.WidgetInit2
// [0x00020802] ( FUNC_Event )
struct USGS_GfxBuyMenu_Barracks_eventWidgetInit2_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ParentName;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxObject*                               buyMC;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GfxBuyMenu_Barracks.Start
// [0x00024002] 
struct USGS_GfxBuyMenu_Barracks_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxBuyMenu_Garage.PlayCloseAnimation
// [0x00020000] 
struct USGS_GFxBuyMenu_Garage_execPlayCloseAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxBuyMenu_Garage.PlayOpenAnimation
// [0x00020002] 
struct USGS_GFxBuyMenu_Garage_execPlayOpenAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxBuyMenu_Garage.WidgetInit
// [0x00020802] ( FUNC_Event )
struct USGS_GFxBuyMenu_Garage_eventWidgetInit_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxBuyMenu_Garage.WidgetInit2
// [0x00020802] ( FUNC_Event )
struct USGS_GFxBuyMenu_Garage_eventWidgetInit2_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ParentName;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxObject*                               buyMC;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxBuyMenu_Garage.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct USGS_GFxBuyMenu_Garage_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxBuyMenu_Garage.PlayMenuSound
// [0x00020802] ( FUNC_Event )
struct USGS_GFxBuyMenu_Garage_eventPlayMenuSound_Parms
{
	struct FString                                     SoundName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxBuyMenu_Garage.Start
// [0x00024002] 
struct USGS_GFxBuyMenu_Garage_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxClassSelection.PlayCloseAnimation
// [0x00020000] 
struct USGS_GFxClassSelection_execPlayCloseAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxClassSelection.PlayOpenAnimation
// [0x00020002] 
struct USGS_GFxClassSelection_execPlayOpenAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxClassSelection.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct USGS_GFxClassSelection_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxClassSelection.WidgetInit
// [0x00020802] ( FUNC_Event )
struct USGS_GFxClassSelection_eventWidgetInit_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxClassSelection.PlayMenuSound
// [0x00020802] ( FUNC_Event )
struct USGS_GFxClassSelection_eventPlayMenuSound_Parms
{
	struct FString                                     SoundName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxClassSelection.Start
// [0x00024002] 
struct USGS_GFxClassSelection_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.FilterButtonInput
// [0x00020002] 
struct USGS_GFxFrontEnd_execFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.DestroyDependantViews
// [0x00020001] ( FUNC_Final )
struct USGS_GFxFrontEnd_execDestroyDependantViews_Parms
{
	struct FName                                       InViewName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd.LoadDependantViews
// [0x00020001] ( FUNC_Final )
struct USGS_GFxFrontEnd_execLoadDependantViews_Parms
{
	struct FName                                       InViewName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd.CheckLinkConnectionAndError
// [0x00024002] 
struct USGS_GFxFrontEnd_execCheckLinkConnectionAndError_Parms
{
	struct FString                                     AlternateTitle;                                   		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     AlternateMessage;                                 		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USGS_GFxFrontEnd_ErrorDialog*             Dialog;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bResult : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd.PostWidgetInit
// [0x00020000] 
struct USGS_GFxFrontEnd_execPostWidgetInit_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd.ASShowCursor
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execASShowCursor_Parms
{
	unsigned long                                      bShowCursor : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd.ConfigureView
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execConfigureView_Parms
{
	class USGS_GFxFrontEnd_View*                       InView;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd.UpdateViewLayout
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execUpdateViewLayout_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd.PopViewStub
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execPopViewStub_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.PopView
// [0x00020002] 
struct USGS_GFxFrontEnd_execPopView_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.ASSetSelectionFocus
// [0x00020002] 
struct USGS_GFxFrontEnd_execASSetSelectionFocus_Parms
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd.SetSelectionFocus
// [0x00020002] 
struct USGS_GFxFrontEnd_execSetSelectionFocus_Parms
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.PushDialogView
// [0x00020002] 
struct USGS_GFxFrontEnd_execPushDialogView_Parms
{
	class USGS_GFxFrontEnd_View*                       dialogView;                                       		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.PushView
// [0x00020002] 
struct USGS_GFxFrontEnd_execPushView_Parms
{
	class USGS_GFxFrontEnd_View*                       TargetView;                                       		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.IsViewAllowed
// [0x00020002] 
struct USGS_GFxFrontEnd_execIsViewAllowed_Parms
{
	class USGS_GFxFrontEnd_View*                       TargetView;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   I;                                                		// 0x0008 (0x0001) [0x0000000000000000]              
	// struct FName                                    TargetViewName;                                   		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd.ConfigureTargetView
// [0x00020002] 
struct USGS_GFxFrontEnd_execConfigureTargetView_Parms
{
	class USGS_GFxFrontEnd_View*                       TargetView;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd.ConfigureTargetDialog
// [0x00020002] 
struct USGS_GFxFrontEnd_execConfigureTargetDialog_Parms
{
	class USGS_GFxFrontEnd_View*                       TargetDialog;                                     		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.SpawnDialog
// [0x00024002] 
struct USGS_GFxFrontEnd_execSpawnDialog_Parms
{
	struct FName                                       TargetDialogName;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USGS_GFxFrontEnd_Screen*                     ParentView;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USGS_GFxFrontEnd_Dialog*                     ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.PushViewByName
// [0x00024003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execPushViewByName_Parms
{
	struct FName                                       TargetViewName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USGS_GFxFrontEnd_Screen*                     ParentView;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd.SetEscapeDelegate
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execSetEscapeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               _global;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd.IsViewLoaded
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execIsViewLoaded_Parms
{
	struct FName                                       InViewName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   I;                                                		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd.LoadViewByName
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execLoadViewByName_Parms
{
	struct FName                                       InViewName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   I;                                                		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd.LoadView
// [0x00820003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execLoadView_Parms
{
	struct USGS_GFxFrontEnd_FViewInfo                  InViewInfo;                                       		// 0x0000 (0x0020) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x0020 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FASValue >                       args;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGFxObject*                               ViewContainer;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               ViewLoader;                                       		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd.LoadViews
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execLoadViews_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd.ConfigFrontEnd
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_execConfigFrontEnd_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd.Start
// [0x00024002] 
struct USGS_GFxFrontEnd_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd.EscapeDelegate
// [0x00120000] 
struct USGS_GFxFrontEnd_execEscapeDelegate_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_ErrorDialog.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_ErrorDialog_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_ErrorDialog.OnViewClosed
// [0x00020002] 
struct USGS_GFxFrontEnd_ErrorDialog_execOnViewClosed_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_ErrorDialog.SetButtonLabel
// [0x00020002] 
struct USGS_GFxFrontEnd_ErrorDialog_execSetButtonLabel_Parms
{
	struct FString                                     ButtonLabel;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_ErrorDialog.SetInfo
// [0x00020002] 
struct USGS_GFxFrontEnd_ErrorDialog_execSetInfo_Parms
{
	struct FString                                     Info;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_ErrorDialog.SetTitle
// [0x00020002] 
struct USGS_GFxFrontEnd_ErrorDialog_execSetTitle_Parms
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_ErrorDialog.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_ErrorDialog_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_FilterDialog_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.PushFilterListUpdate
// [0x00020002] 
struct USGS_GFxFrontEnd_FilterDialog_execPushFilterListUpdate_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.SetupListDataProvider
// [0x00820002] 
struct USGS_GFxFrontEnd_FilterDialog_execSetupListDataProvider_Parms
{
	// unsigned char                                   J;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  ControlType;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGFxObject*                               RendererDataProvider;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempData;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x0024 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.SetFilterNetworkType
// [0x00024002] 
struct USGS_GFxFrontEnd_FilterDialog_execSetFilterNetworkType_Parms
{
	unsigned long                                      bLAN : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSkipUIUpdate : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FName                                    MatchTypeName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UUTGameSearchCustom*                      CustomSearch;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.OnFilterList_OptionChanged
// [0x00020002] 
struct USGS_GFxFrontEnd_FilterDialog_execOnFilterList_OptionChanged_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Data;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned char                                   SelectedIndex;                                    		// 0x002C (0x0001) [0x0000000000000000]              
	// struct FString                                  OptionName;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  OptionValue;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  GameClassName;                                    		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_OnlineGameSettings*          SettingsDataStore;                                		// 0x0054 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.GetGameClassByFriendlyName
// [0x00020002] 
struct USGS_GFxFrontEnd_FilterDialog_execGetGameClassByFriendlyName_Parms
{
	struct FString                                     FriendlyName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.ForceLANOption
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_FilterDialog_execForceLANOption_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             ValueIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    MatchTypeName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UUTGameSearchCustom*                      CustomSearch;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UUTUIDataProvider_GameModeInfo*           Provider;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.ValidateServerType
// [0x00020002] 
struct USGS_GFxFrontEnd_FilterDialog_execValidateServerType_Parms
{
	// int                                             PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PlayerControllerId;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ValueIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FName                                    MatchTypeName;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.SetBackButtonListener
// [0x00020002] 
struct USGS_GFxFrontEnd_FilterDialog_execSetBackButtonListener_Parms
{
	struct FScriptDelegate                             DelegateListener;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_FilterDialog_execDisableSubComponents_Parms
{
	unsigned long                                      bEnableComponents : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.OnViewClosed
// [0x00020002] 
struct USGS_GFxFrontEnd_FilterDialog_execOnViewClosed_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_FilterDialog_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_FilterDialog_execOnViewLoaded_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_FilterDialog.OnSwitchedGameType
// [0x00120000] 
struct USGS_GFxFrontEnd_FilterDialog_execOnSwitchedGameType_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_InfoDialog.SetAcceptButton_OnPress
// [0x00020002] 
struct USGS_GFxFrontEnd_InfoDialog_execSetAcceptButton_OnPress_Parms
{
	struct FScriptDelegate                             EventListener;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_InfoDialog.SetBackButtonLabel
// [0x00020002] 
struct USGS_GFxFrontEnd_InfoDialog_execSetBackButtonLabel_Parms
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_InfoDialog.SetAcceptButtonLabel
// [0x00020002] 
struct USGS_GFxFrontEnd_InfoDialog_execSetAcceptButtonLabel_Parms
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_InfoDialog.SetInfo
// [0x00020002] 
struct USGS_GFxFrontEnd_InfoDialog_execSetInfo_Parms
{
	struct FString                                     Info;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_InfoDialog.SetTitle
// [0x00020002] 
struct USGS_GFxFrontEnd_InfoDialog_execSetTitle_Parms
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_InfoDialog.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_InfoDialog_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_InfoDialog.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_InfoDialog_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_InfoDialog.OnViewClosed
// [0x00020002] 
struct USGS_GFxFrontEnd_InfoDialog_execOnViewClosed_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_ServerSettings.FindControlByUTClassName
// [0x00020002] 
struct USGS_GFxFrontEnd_ServerSettings_execFindControlByUTClassName_Parms
{
	unsigned char                                      UTUIControlClass;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_ServerSettings.PopulateOptionDataProviderForIndex
// [0x00420002] 
struct USGS_GFxFrontEnd_ServerSettings_execPopulateOptionDataProviderForIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UGFxObject*                                  OutDataProvider;                                  		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     OutDefaultValue;                                  		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                OutDefaultIndex;                                  		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class UUTUIDataProvider_MenuOption*             CurrentSetting;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             SettingIndex;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_ServerSettings.UpdateListDataProvider
// [0x00020002] 
struct USGS_GFxFrontEnd_ServerSettings_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   J;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	// struct FString                                  ControlType;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  DefaultValue;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             DefaultIndex;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               RendererDataProvider;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  LocationPart;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  RelevantPart;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             StringIndex;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             StringIter;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFoundDefault : 1;                                		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UDataStoreClient*                         DSClient;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	// class UUTUIDataStore_StringList*                StringListDataStore;                              		// 0x0058 (0x0004) [0x0000000000000000]              
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_ServerSettings.SaveState
// [0x00020002] 
struct USGS_GFxFrontEnd_ServerSettings_execSaveState_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PropertyIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             StepperSelectedIndex;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  ValueToSave;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ControlType;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  SettingName;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGFxObject*                               Data;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FString                                  LocationPart;                                     		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  RelevantPart;                                     		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x004C (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    LocalGameSettings;                                		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_ServerSettings.OnOptionChanged
// [0x00020002] 
struct USGS_GFxFrontEnd_ServerSettings_execOnOptionChanged_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  OptionName;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_ServerSettings.SetSelectedOptionSet
// [0x00020002] 
struct USGS_GFxFrontEnd_ServerSettings_execSetSelectedOptionSet_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_SettingsBase_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.FindPropertyIndexByName
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execFindPropertyIndexByName_Parms
{
	struct FString                                     InPropertyName;                                   		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   I;                                                		// 0x0010 (0x0001) [0x0000000000000000]              
	// int                                             StringIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.Select_BackImpl
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execSelect_BackImpl_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.OnEscapeKeyPress
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execOnEscapeKeyPress_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.FindLocalizedSettingIndexByName
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execFindLocalizedSettingIndexByName_Parms
{
	struct FString                                     InSettingName;                                    		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   I;                                                		// 0x0010 (0x0001) [0x0000000000000000]              
	// int                                             StringIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.UpdateListDataProvider
// [0x00020000] 
struct USGS_GFxFrontEnd_SettingsBase_execUpdateListDataProvider_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.UpdateDescription
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execUpdateDescription_Parms
{
	// int                                             SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Description;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.OnOptionChanged
// [0x00020000] 
struct USGS_GFxFrontEnd_SettingsBase_execOnOptionChanged_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.OnListChange
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execOnListChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.SetList
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execSetList_Parms
{
	class UGFxObject*                                  List;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.SaveState
// [0x00820002] 
struct USGS_GFxFrontEnd_SettingsBase_execSaveState_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             SelectedIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             SettingIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  ControlType;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGFxObject*                               Data;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    LocalGameSettings;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FSettingsData                            SettingsDat;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.Select_Back
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execSelect_Back_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.LoadDataFromStore
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execLoadDataFromStore_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsRelevant : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bIsDuplicate : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  CurrentOptionSet;                                 		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTUIDataProvider_MenuOption*             CurrentOption;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// TArray< class UUDKUIResourceDataProvider* >     ProviderList;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.SetSelectedOptionSet
// [0x00020000] 
struct USGS_GFxFrontEnd_SettingsBase_execSetSelectedOptionSet_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_SettingsBase_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.OnViewActivated
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execOnViewActivated_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_SettingsBase.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_SettingsBase_execOnViewLoaded_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Settings.PopulateOptionDataProviderForIndex
// [0x00420002] 
struct USGS_GFxFrontEnd_Settings_execPopulateOptionDataProviderForIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UGFxObject*                                  OutDataProvider;                                  		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     OutDefaultValue;                                  		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                OutDefaultIndex;                                  		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             SettingIndex;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Settings.UpdateListDataProvider
// [0x00020002] 
struct USGS_GFxFrontEnd_Settings_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  DefaultValue;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             DefaultIndex;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               RendererDataProvider;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Settings.SetSelectedOptionSet
// [0x00020002] 
struct USGS_GFxFrontEnd_Settings_execSetSelectedOptionSet_Parms
{
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_GameMode_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.ASSetList
// [0x00020002] 
struct USGS_GFxFrontEnd_GameMode_execASSetList_Parms
{
	class UGFxObject*                                  List;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.SetImgScroller
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_GameMode_execSetImgScroller_Parms
{
	class UGFxClikWidget*                              InImgScroller;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.UpdateListDataProvider
// [0x00020002] 
struct USGS_GFxFrontEnd_GameMode_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  FriendlyGameModeName;                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.UpdateDescription
// [0x00020002] 
struct USGS_GFxFrontEnd_GameMode_execUpdateDescription_Parms
{
	// int                                             SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Description;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.OnListChange
// [0x00020002] 
struct USGS_GFxFrontEnd_GameMode_execOnListChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.OnListItemPress
// [0x00020002] 
struct USGS_GFxFrontEnd_GameMode_execOnListItemPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             SelectedIndex;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.OnGameModeChange
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_GameMode_execOnGameModeChange_Parms
{
	int                                                SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  LocalGameMode;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  DefaultMap;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Prefixes;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  GameSettingsClass;                                		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.OnGameModeSelected
// [0x00024003] ( FUNC_Final )
struct USGS_GFxFrontEnd_GameMode_execOnGameModeSelected_Parms
{
	struct FString                                     InGameMode;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InDefaultMap;                                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InGameSettingsClass;                              		// 0x0018 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  MapImageMarkup;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_GameMode_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_GameMode_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_GameMode.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_GameMode_execOnViewLoaded_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UDataStoreClient*                         DSClient;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class UUDKUIResourceDataProvider* >     ProviderList;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_MapSelect_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.GetMapFriendlyName
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_MapSelect_execGetMapFriendlyName_Parms
{
	struct FString                                     Map;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             StartIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             EndIndex;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// TArray< struct FString >                        LocPieces;                                        		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.GetSelectedMap
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_MapSelect_execGetSelectedMap_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// float                                           SelectedItem;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  MapName;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.SetupMapCycle
// [0x00820003] ( FUNC_Final )
struct USGS_GFxFrontEnd_MapSelect_execSetupMapCycle_Parms
{
	struct FString                                     SelectedMap;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             CycleIdx;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FName                                    GameMode;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FGameMapCycle                            MapCycle;                                         		// 0x0018 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.GetCurrentGameMode
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_MapSelect_execGetCurrentGameMode_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  GameMode;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.GetImageMarkupByMapName
// [0x00022003] ( FUNC_Final )
struct USGS_GFxFrontEnd_MapSelect_execGetImageMarkupByMapName_Parms
{
	struct FString                                     InMapName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  bResult;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UUDKUIResourceDataProvider* >     ProviderList;                                     		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UUTUIDataProvider_MapInfo* >      LocalMapList;                                     		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.SetImgScroller
// [0x00020003] ( FUNC_Final )
struct USGS_GFxFrontEnd_MapSelect_execSetImgScroller_Parms
{
	class UGFxClikWidget*                              InImgScroller;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.UpdateListDataProvider
// [0x00020002] 
struct USGS_GFxFrontEnd_MapSelect_execUpdateListDataProvider_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ListCounter;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class UUDKUIResourceDataProvider* >     ProviderList;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UUTUIDataProvider_MapInfo* >      LocalMapList;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.OnListItemPress
// [0x00020002] 
struct USGS_GFxFrontEnd_MapSelect_execOnListItemPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             SelectedIndex;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FString                                  SelectedMapName;                                  		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  SelectedMapImage;                                 		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.SetList
// [0x00020002] 
struct USGS_GFxFrontEnd_MapSelect_execSetList_Parms
{
	class UGFxObject*                                  List;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.OnMapList_ValueChanged
// [0x00024002] 
struct USGS_GFxFrontEnd_MapSelect_execOnMapList_ValueChanged_Parms
{
	struct FString                                     InMapSelected;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InMapImageSelected;                               		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_MapSelect_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_MapSelect_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_MapSelect.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_MapSelect_execOnViewLoaded_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.OnStartGame_Confirm
// [0x00020002] 
struct USGS_GFxFrontEnd_HostGame_execOnStartGame_Confirm_Parms
{
	// class UOnlineGameSettings*                      LocalGameSettings;                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.FinishStartDedicated
// [0x00020002] 
struct USGS_GFxFrontEnd_HostGame_execFinishStartDedicated_Parms
{
	// class UOnlineGameSettings*                      LocalGameSettings;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  TravelURL;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Mutators;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             OutValue;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  Password;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  GameMode;                                         		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.OnGameCreated
// [0x00020002] 
struct USGS_GFxFrontEnd_HostGame_execOnGameCreated_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineGameSettings*                      LocalGameSettings;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  TravelURL;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// class UOnlineGameInterface*                     GameInterface;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FString                                  Mutators;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             OutValue;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FString                                  OutStringValue;                                   		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.CreateOnlineGame
// [0x00020002] 
struct USGS_GFxFrontEnd_HostGame_execCreateOnlineGame_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineGameInterface*                     GameInterface;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.SetupGameSettings
// [0x00020002] 
struct USGS_GFxFrontEnd_HostGame_execSetupGameSettings_Parms
{
	// int                                             ValueIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  SelectedMap;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  SelectedGameMode;                                 		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  MutatorURLString;                                 		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.GenerateMutatorURLString
// [0x00020002] 
struct USGS_GFxFrontEnd_HostGame_execGenerateMutatorURLString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class UDataStoreClient*                         DSClient;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MutatorIdx;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  GameModeString;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  MutatorURLString;                                 		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTUIDataProvider_Mutator*                Provider;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.ValidateServerType
// [0x00020002] 
struct USGS_GFxFrontEnd_HostGame_execValidateServerType_Parms
{
	// int                                             PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ValueIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PlayerControllerId;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FName                                    MatchTypeName;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.StripInvalidPasswordCharacters
// [0x00026002] 
struct USGS_GFxFrontEnd_HostGame_execStripInvalidPasswordCharacters_Parms
{
	struct FString                                     PasswordString;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InvalidChars;                                     		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_HostGame_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_HostGame.OnViewActivated
// [0x00020002] 
struct USGS_GFxFrontEnd_HostGame_execOnViewActivated_Parms
{
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  TempString;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_LaunchGame_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.GetGameModeFriendlyString
// [0x00022002] 
struct USGS_GFxFrontEnd_LaunchGame_execGetGameModeFriendlyString_Parms
{
	struct FString                                     InGameMode;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  RetString;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.UpdateListDataProvider
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.UpdateDescription
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execUpdateDescription_Parms
{
	// int                                             SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Description;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.OnListChange
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execOnListChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.OnListItemPress
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execOnListItemPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             SelectedIndex;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FName                                    Selection;                                        		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.UpdateGameSettingsPanel
// [0x00820003] ( FUNC_Final )
struct USGS_GFxFrontEnd_LaunchGame_execUpdateGameSettingsPanel_Parms
{
	// struct FASValue                                 asval;                                            		// 0x0000 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FASValue >                       args;                                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             EnabledMutatorCount;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FString                                  SelectedMapImage;                                 		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FString                                  Map;                                              		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Mode;                                             		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  MapImage;                                         		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	// struct FString                                  TempString;                                       		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0070 (0x0004) [0x0000000000000000]              
	// int                                             StringIndex;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.OnStartGame_Confirm
// [0x00020000] 
struct USGS_GFxFrontEnd_LaunchGame_execOnStartGame_Confirm_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.PlayCloseAnimation
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execPlayCloseAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.PlayOpenAnimation
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execPlayOpenAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_LaunchGame_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.OnViewActivated
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execOnViewActivated_Parms
{
	// unsigned long                                   bFoundDefaultMap : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< class UUDKUIResourceDataProvider* >     ProviderList;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_LaunchGame.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_LaunchGame_execOnViewLoaded_Parms
{
	// class UDataStoreClient*                         DSClient;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_Multiplayer_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.SetList
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execSetList_Parms
{
	class UGFxObject*                                  InList;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.UpdateListDataProvider
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.UpdateDescription
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execUpdateDescription_Parms
{
	// int                                             SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Description;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.OnListChange
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execOnListChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.OnListItemPress
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execOnListItemPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             SelectedIndex;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FName                                    Selection;                                        		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.Select_HostGame
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execSelect_HostGame_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.Select_JoinGame
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execSelect_JoinGame_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_Multiplayer_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_Multiplayer.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_Multiplayer_execOnViewLoaded_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_InstantAction.OnStartGame_Confirm
// [0x00020002] 
struct USGS_GFxFrontEnd_InstantAction_execOnStartGame_Confirm_Parms
{
	// class USettings*                                GameSettings;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  GameExec;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Mutators;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             OutValue;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  Map;                                              		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Mode;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_InstantAction.OnViewActivated
// [0x00020002] 
struct USGS_GFxFrontEnd_InstantAction_execOnViewActivated_Parms
{
	// class UUIDataStore_Registry*                    Registry;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct USGS_GFxFrontEnd_MainMenu_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bWasHandled : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.OnEscapeKeyPress
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execOnEscapeKeyPress_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.SetList
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execSetList_Parms
{
	class UGFxObject*                                  InList;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.UpdateListDataProvider
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.UpdateDescription
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execUpdateDescription_Parms
{
	// int                                             SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Description;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.OnListChange
// [0x00040003] ( FUNC_Final )
struct USGS_GFxFrontEnd_MainMenu_execOnListChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.OnListItemPress
// [0x00040003] ( FUNC_Final )
struct USGS_GFxFrontEnd_MainMenu_execOnListItemPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             SelectedIndex;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FName                                    Selection;                                        		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.ExitDialog_SelectBack
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execExitDialog_SelectBack_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.ExitDialog_SelectOK
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execExitDialog_SelectOK_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.Select_ExitGame
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execSelect_ExitGame_Parms
{
	// class USGS_GFxFrontEnd_InfoDialog*              ExitDialogMC;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.Select_Multiplayer
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execSelect_Multiplayer_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.Select_InstantAction
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execSelect_InstantAction_Parms
{
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.DisableSubComponents
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execDisableSubComponents_Parms
{
	unsigned long                                      bDisableComponents : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.OnTopMostView
// [0x00024002] 
struct USGS_GFxFrontEnd_MainMenu_execOnTopMostView_Parms
{
	unsigned long                                      bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_GFxFrontEnd_MainMenu.OnViewLoaded
// [0x00020002] 
struct USGS_GFxFrontEnd_MainMenu_execOnViewLoaded_Parms
{
};

// Function SGSOrion.SGS_MWeap_MiniGun.ServerGotoState
// [0x002200C2] 
struct ASGS_MWeap_MiniGun_execServerGotoState_Parms
{
	struct FName                                       S;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.StopFire
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.ServerResetShots
// [0x002200C2] 
struct ASGS_MWeap_MiniGun_execServerResetShots_Parms
{
};

// Function SGSOrion.SGS_MWeap_MiniGun.HandleFinishedFiring
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execHandleFinishedFiring_Parms
{
};

// Function SGSOrion.SGS_MWeap_MiniGun.ShouldRefire
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execShouldRefire_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.LoadRocket
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execLoadRocket_Parms
{
};

// Function SGSOrion.SGS_MWeap_MiniGun.ProjectileFire
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              Proj;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MWeap_MiniGun.SetMuzzleFlashParams
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execSetMuzzleFlashParams_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_MWeap_MiniGun.UpdateGunRotation
// [0x00820002] 
struct ASGS_MWeap_MiniGun_execUpdateGunRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 Rot;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MWeap_MiniGun.HasAmmo
// [0x00024102] 
struct ASGS_MWeap_MiniGun_execHasAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ASGS_MWeap_MiniGun_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MWeap_MiniGun.AttachMuzzleFlash
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_MWeap_MiniGun.DetachMuzzleFlash
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execDetachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SGSOrion.SGS_MWeap_MiniGun.PlayFireEffects
// [0x00024102] 
struct ASGS_MWeap_MiniGun_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.PlayFiringSound
// [0x00020100] 
struct ASGS_MWeap_MiniGun_execPlayFiringSound_Parms
{
};

// Function SGSOrion.SGS_MWeap_MiniGun.UpdateHUD
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execUpdateHUD_Parms
{
};

// Function SGSOrion.SGS_MWeap_MiniGun.WeaponPlaySound
// [0x00024100] 
struct ASGS_MWeap_MiniGun_execWeaponPlaySound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NoiseLoudness;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.GetFireStartLocationAndRotation
// [0x00420102] 
struct ASGS_MWeap_MiniGun_execGetFireStartLocationAndRotation_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    StartRotation;                                    		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.Tick
// [0x00020902] ( FUNC_Event )
struct ASGS_MWeap_MiniGun_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.StartFire
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.SetCurrentFireMode
// [0x00020102] 
struct ASGS_MWeap_MiniGun_execSetCurrentFireMode_Parms
{
	unsigned char                                      FiringModeNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MWeap_MiniGun.ProcessInstantHit
// [0x00824102] 
struct ASGS_MWeap_MiniGun_execProcessInstantHit_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0050) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumHits;                                          		// 0x0054 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// unsigned long                                   bFixMomentum : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKActorFromStatic*                        NewKActor;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	// class UStaticMeshComponent*                     HitStaticMesh;                                    		// 0x0060 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// int                                             TotalDamage;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 HitDir;                                           		// 0x0068 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechWeapon.EndZoom
// [0x00020102] 
struct ASGS_MechWeapon_execEndZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.StartZoom
// [0x00020102] 
struct ASGS_MechWeapon_execStartZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.ServerSetZoom
// [0x002200C2] 
struct ASGS_MechWeapon_execServerSetZoom_Parms
{
	unsigned long                                      bNowZoomed : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.GetZoomedState
// [0x00020102] 
struct ASGS_MechWeapon_execGetZoomedState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechWeapon.WeaponPlaySound
// [0x00824102] 
struct ASGS_MechWeapon_execWeaponPlaySound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NoiseLoudness;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             Barrel;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FName                                    Pivot;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  Loc;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechWeapon.NotifyVehicleUndeployed
// [0x00020100] 
struct ASGS_MechWeapon_execNotifyVehicleUndeployed_Parms
{
};

// Function SGSOrion.SGS_MechWeapon.NotifyVehicleDeployed
// [0x00020100] 
struct ASGS_MechWeapon_execNotifyVehicleDeployed_Parms
{
};

// Function SGSOrion.SGS_MechWeapon.GetMaxFinalAimAdjustment
// [0x00020102] 
struct ASGS_MechWeapon_execGetMaxFinalAimAdjustment_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechWeapon.GetTraceOwner
// [0x00020102] 
struct ASGS_MechWeapon_execGetTraceOwner_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechWeapon.InstantFireEndTrace
// [0x00020102] 
struct ASGS_MechWeapon_execInstantFireEndTrace_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechWeapon.InstantFireStartTrace
// [0x00020102] 
struct ASGS_MechWeapon_execInstantFireStartTrace_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechWeapon.InstantFire
// [0x00820102] 
struct ASGS_MechWeapon_execInstantFire_Parms
{
	// struct FVector                                  StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FImpactInfo                              RealImpact;                                       		// 0x0024 (0x0050) [0x0000000000000000]              
	// struct FImpactInfo                              NearImpact;                                       		// 0x0074 (0x0050) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00C4 (0x0004) [0x0000000000000000]              
	// int                                             FinalImpactIndex;                                 		// 0x00C8 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechWeapon.ProjectileFire
// [0x00020102] 
struct ASGS_MechWeapon_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechWeapon.GetAdjustedAim
// [0x00020102] 
struct ASGS_MechWeapon_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechWeapon.EndFire
// [0x00020102] 
struct ASGS_MechWeapon_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.BeginFire
// [0x00020102] 
struct ASGS_MechWeapon_execBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.GetPhysicalFireStartLoc
// [0x00024102] 
struct ASGS_MechWeapon_execGetPhysicalFireStartLoc_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechWeapon.PutDownWeapon
// [0x00020102] 
struct ASGS_MechWeapon_execPutDownWeapon_Parms
{
};

// Function SGSOrion.SGS_MechWeapon.Activate
// [0x00020102] 
struct ASGS_MechWeapon_execActivate_Parms
{
};

// Function SGSOrion.SGS_MechWeapon.DetachWeapon
// [0x00020100] 
struct ASGS_MechWeapon_execDetachWeapon_Parms
{
};

// Function SGSOrion.SGS_MechWeapon.AttachWeaponTo
// [0x00024100] 
struct ASGS_MechWeapon_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.GetImpactEffect
// [0x00022102] 
struct ASGS_MechWeapon_execGetImpactEffect_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x000C (0x0030) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x003C (0x0004) [0x0000000000000000]              
	// class UUTPhysicalMaterialProperty*              PhysicalProperty;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechWeapon.GetFireInterval
// [0x00020102] 
struct ASGS_MechWeapon_execGetFireInterval_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTPawn*                                  UTP;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechWeapon.GetFireTriggerTag
// [0x00022102] 
struct ASGS_MechWeapon_execGetFireTriggerTag_Parms
{
	int                                                BarrelIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FireMode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MechWeapon.IsAimCorrect
// [0x00820902] ( FUNC_Event )
struct ASGS_MechWeapon_eventIsAimCorrect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DesiredAimPoint;                                  		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealAimPoint;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MechWeapon.GetFireStartLocationAndRotation
// [0x00420102] 
struct ASGS_MechWeapon_execGetFireStartLocationAndRotation_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    StartRotation;                                    		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SGSOrion.SGS_MechWeapon.GetDesiredAimPoint
// [0x00C24902] ( FUNC_Event )
struct ASGS_MechWeapon_eventGetDesiredAimPoint_Parms
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

// Function SGSOrion.SGS_MechWeapon.DrawWeaponCrosshair
// [0x00020102] 
struct ASGS_MechWeapon_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.GetCrosshairScaling
// [0x00020102] 
struct ASGS_MechWeapon_execGetCrosshairScaling_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.DrawKillIcon
// [0x00022102] 
struct ASGS_MechWeapon_execDrawKillIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ScreenX;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ScreenY;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HUDScaleX;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HUDScaleY;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_MechWeapon.CanHitDesiredTarget
// [0x00C20102] 
struct ASGS_MechWeapon_execCanHitDesiredTarget_Parms
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

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.ServerGotoState
// [0x002200C2] 
struct ASGS_VWeap_VTOLMiniGun_execServerGotoState_Parms
{
	struct FName                                       S;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.StopFire
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.ServerResetShots
// [0x002200C2] 
struct ASGS_VWeap_VTOLMiniGun_execServerResetShots_Parms
{
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.HandleFinishedFiring
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execHandleFinishedFiring_Parms
{
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.ShouldRefire
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execShouldRefire_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.FireAmmunition
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execFireAmmunition_Parms
{
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.StartFire
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.UpdateGunRotation
// [0x00820102] 
struct ASGS_VWeap_VTOLMiniGun_execUpdateGunRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USkelControlSingleBone*                   SkelControl;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.SetCurrentFireMode
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execSetCurrentFireMode_Parms
{
	unsigned char                                      FiringModeNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.PlayFiringSound
// [0x00020100] 
struct ASGS_VWeap_VTOLMiniGun_execPlayFiringSound_Parms
{
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.GetAmmoCount
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execGetAmmoCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.LoadRocket
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execLoadRocket_Parms
{
};

// Function SGSOrion.SGS_VWeap_VTOLMiniGun.ProjectileFire
// [0x00020102] 
struct ASGS_VWeap_VTOLMiniGun_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              Proj;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_VWeap_MiniGun.PlayFiringSound
// [0x00020100] 
struct ASGS_VWeap_MiniGun_execPlayFiringSound_Parms
{
};

// Function SGSOrion.SGS_VWeap_MiniGun.UpdateGunRotation
// [0x00820102] 
struct ASGS_VWeap_MiniGun_execUpdateGunRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USkelControlSingleBone*                   SkelControl;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_VWeap_MiniGun.HandleFinishedFiring
// [0x00020100] 
struct ASGS_VWeap_MiniGun_execHandleFinishedFiring_Parms
{
};

// Function SGSOrion.SGS_VWeap_MiniGun.UpdateHUD
// [0x00020102] 
struct ASGS_VWeap_MiniGun_execUpdateHUD_Parms
{
};

// Function SGSOrion.SGS_VWeap_MiniGun.Tick
// [0x00020902] ( FUNC_Event )
struct ASGS_VWeap_MiniGun_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_MiniGun.PlayImpactEffects
// [0x00020100] 
struct ASGS_VWeap_MiniGun_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_MiniGun.DrawWeaponCrosshair
// [0x00020100] 
struct ASGS_VWeap_MiniGun_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VehicleWeapon.AddAimKick
// [0x00820102] 
struct ASGS_VehicleWeapon_execAddAimKick_Parms
{
	struct FRotator                                    AimKick;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 ViewR;                                            		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_VehicleWeapon.StartFire
// [0x00020102] 
struct ASGS_VehicleWeapon_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxMainMenu.OnGameModeChange
// [0x00020000] 
struct USGS_GFxMainMenu_execOnGameModeChange_Parms
{
	class UGFxObject*                                  DDGameMode;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SelectedIndex;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_GFxMainMenu.ShowGameModes
// [0x00820002] 
struct USGS_GFxMainMenu_execShowGameModes_Parms
{
	class UGFxObject*                                  gfxGameModeList;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   I;                                                		// 0x0004 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x0018 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        GameModeList;                                     		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxMainMenu.ShowLevelNames
// [0x00820002] 
struct USGS_GFxMainMenu_execShowLevelNames_Parms
{
	class UGFxObject*                                  LevelList;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   I;                                                		// 0x0004 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x0018 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        MapList;                                          		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxMainMenu.OnGameCreated
// [0x00020002] 
struct USGS_GFxMainMenu_execOnGameCreated_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineGameSettings*                      LocalGameSettings;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  TravelURL;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// class UOnlineGameInterface*                     GameInterface;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxMainMenu.Create
// [0x00020002] 
struct USGS_GFxMainMenu_execCreate_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class UOnlineGameInterface*                     GameInterface;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxMainMenu.SetupGameSettings
// [0x00020002] 
struct USGS_GFxMainMenu_execSetupGameSettings_Parms
{
	// int                                             ValueIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UUTGameSettingsCommon*                    GameSettings;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxMainMenu.ValidateServerType
// [0x00020002] 
struct USGS_GFxMainMenu_execValidateServerType_Parms
{
	// struct FName                                    MatchTypeName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxMainMenu.join
// [0x00020002] 
struct USGS_GFxMainMenu_execjoin_Parms
{
	int                                                SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     IP;                                               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxMainMenu.OnRefresh
// [0x00020002] 
struct USGS_GFxMainMenu_execOnRefresh_Parms
{
};

// Function SGSOrion.SGS_GFxMainMenu.OnQuit
// [0x00020002] 
struct USGS_GFxMainMenu_execOnQuit_Parms
{
};

// Function SGSOrion.SGS_GFxMainMenu.Init
// [0x00024002] 
struct USGS_GFxMainMenu_execInit_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UDataStoreClient*                         DSClient;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxMainMenu.GetPlayerControllerId
// [0x00020002] 
struct USGS_GFxMainMenu_execGetPlayerControllerId_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxMainMenu.GetStringFromMarkup
// [0x00022002] 
struct USGS_GFxMainMenu_execGetStringFromMarkup_Parms
{
	struct FString                                     MarkupString;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  Retval;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxNotification.PlayCloseAnimation
// [0x00020000] 
struct USGS_GFxNotification_execPlayCloseAnimation_Parms
{
};

// Function SGSOrion.SGS_GFxNotification.PlayOpenAnimation
// [0x00020002] 
struct USGS_GFxNotification_execPlayOpenAnimation_Parms
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     OkText;                                           		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NoText;                                           		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             OnOkPressed;                                      		// 0x0030 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             OnNoPressed;                                      		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxNotification.PlayMenuSound
// [0x00020802] ( FUNC_Event )
struct USGS_GFxNotification_eventPlayMenuSound_Parms
{
	struct FString                                     SoundName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxNotification.WidgetInit
// [0x00020802] ( FUNC_Event )
struct USGS_GFxNotification_eventWidgetInit_Parms
{
	struct FString                                     WidgetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Widget;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxNotification.Start
// [0x00024002] 
struct USGS_GFxNotification_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_GFxNotification.NoPressed
// [0x00120000] 
struct USGS_GFxNotification_execNoPressed_Parms
{
};

// Function SGSOrion.SGS_GFxNotification.OkPressed
// [0x00120000] 
struct USGS_GFxNotification_execOkPressed_Parms
{
};

// Function SGSOrion.SGS_GFxScoreScreen.RemoveAttachedObject
// [0x00820002] 
struct USGS_GFxScoreScreen_execRemoveAttachedObject_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASValue                                 asval;                                            		// 0x0004 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FASValue >                       args;                                             		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_GFxScoreScreen.PlayCloseAnimation
// [0x00020002] 
struct USGS_GFxScoreScreen_execPlayCloseAnimation_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxScoreScreen.PlayOpenAnimation
// [0x00020002] 
struct USGS_GFxScoreScreen_execPlayOpenAnimation_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               newEntry;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_GFxScoreScreen.Start
// [0x00024002] 
struct USGS_GFxScoreScreen_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_MusicManager.ChangeSoundTrack
// [0x00020002] 
struct ASGS_MusicManager_execChangeSoundTrack_Parms
{
	unsigned char                                      NewState;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UUTMapInfo*                               UMI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MusicManager.DecideWhichTrackToPlay
// [0x00020002] 
struct ASGS_MusicManager_execDecideWhichTrackToPlay_Parms
{
	// int                                             nNearEnemies;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nDeadTeammates;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASGS_Pawn_Soldier*                        P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             DinosLeft;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MusicManager.Tick
// [0x00020002] 
struct ASGS_MusicManager_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_MusicManager.IntroFinished
// [0x00020002] 
struct ASGS_MusicManager_execIntroFinished_Parms
{
	class UAudioComponent*                             AC;                                               		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_MusicManager.StartMusic
// [0x00020002] 
struct ASGS_MusicManager_execStartMusic_Parms
{
	// class UUTMapInfo*                               UMI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_HudDinoAttack.TextPostRender
// [0x00020002] 
struct ASGS_HudDinoAttack_execTextPostRender_Parms
{
	// float                                           XL;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Inventory.DropFrom
// [0x00020002] 
struct ASGS_Inventory_execDropFrom_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartVelocity;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADroppedPickup*                           P;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_InventoryManager.GetBestWeapon
// [0x00024102] 
struct ASGS_InventoryManager_execGetBestWeapon_Parms
{
	unsigned long                                      bForceADifferentWeapon : 1;                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AWeapon*                                     ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWeapon*                                  W;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AWeapon*                                  BestWeapon;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Rating;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           BestRating;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             CurrentGroup;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_InventoryManager.RemoveFromInventory
// [0x00020102] 
struct ASGS_InventoryManager_execRemoveFromInventory_Parms
{
	class AInventory*                                  ItemToRemove;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFound : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_InventoryManager.ClientSetLastGroup
// [0x010201C2] 
struct ASGS_InventoryManager_execClientSetLastGroup_Parms
{
	int                                                G;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_LockdownMessage.GetColor
// [0x00026002] 
struct USGS_LockdownMessage_execGetColor_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FColor                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_LockdownMessage.GetString
// [0x00026002] 
struct USGS_LockdownMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_LockdownMessage.AnnouncementSound
// [0x00022002] 
struct USGS_LockdownMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_LockdownMessage.ClientReceive
// [0x00026102] 
struct USGS_LockdownMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AUTHUD*                                   HUD;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_LockdownMessage.AnnouncementLevel
// [0x00022002] 
struct USGS_LockdownMessage_execAnnouncementLevel_Parms
{
	unsigned char                                      MessageIndex;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Proj_HomingRocket.Tick
// [0x00820902] ( FUNC_Event )
struct ASGS_Proj_HomingRocket_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SeekingVector;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ForceDir;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartDir;                                         		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_PickupCash.SpawnCopyFor
// [0x00020002] 
struct ASGS_PickupCash_execSpawnCopyFor_Parms
{
	class APawn*                                       Recipient;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_PickupCash.GiveTo
// [0x00020002] 
struct ASGS_PickupCash_execGiveTo_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_PickupCash.PostBeginPlay
// [0x00020102] 
struct ASGS_PickupCash_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Sceptor.WeaponFired
// [0x00024102] 
struct ASGS_Vehicle_Sceptor_execWeaponFired_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.BlowupVehicle
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execBlowupVehicle_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Sceptor.DrivingStatusChanged
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execDrivingStatusChanged_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Sceptor.TakeDamage
// [0x00024902] ( FUNC_Event )
struct ASGS_Vehicle_Sceptor_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.SetVehicleEffectParms
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execSetVehicleEffectParms_Parms
{
	struct FName                                       TriggerName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystemComponent*                    PSC;                                              		// 0x0008 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.MantaDuckEffect
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Sceptor_eventMantaDuckEffect_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Sceptor.MantaJumpEffect
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Sceptor_eventMantaJumpEffect_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Sceptor.InitializeEffects
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execInitializeEffects_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Sceptor.RecommendCharge
// [0x00020002] 
struct ASGS_Vehicle_Sceptor_execRecommendCharge_Parms
{
	class AUTBot*                                      B;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Enemy;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.TooCloseToAttack
// [0x00020002] 
struct ASGS_Vehicle_Sceptor_execTooCloseToAttack_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           OtherRadius;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           OtherHeight;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Sceptor.ShouldClamp
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execShouldClamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct ASGS_Vehicle_Sceptor_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        RigidCollisionData;                               		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.GetChargePower
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execGetChargePower_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Sceptor_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.DriverLeave
// [0x00020802] ( FUNC_Event )
struct ASGS_Vehicle_Sceptor_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.IncomingMissile
// [0x00020002] 
struct ASGS_Vehicle_Sceptor_execIncomingMissile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Sceptor.Dodge
// [0x00020002] 
struct ASGS_Vehicle_Sceptor_execDodge_Parms
{
	unsigned char                                      DoubleClickMove;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.ChooseFireMode
// [0x00020002] 
struct ASGS_Vehicle_Sceptor_execChooseFireMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Sceptor.PossessedBy
// [0x00020002] 
struct ASGS_Vehicle_Sceptor_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.OverrideEndFire
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execOverrideEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.OverrideBeginFire
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execOverrideBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.DriverEnter
// [0x00020002] 
struct ASGS_Vehicle_Sceptor_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    BasedPawn;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Sceptor.CanBeBaseForPawn
// [0x00020102] 
struct ASGS_Vehicle_Sceptor_execCanBeBaseForPawn_Parms
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_Vehicle_Sceptor.Tick
// [0x00020802] ( FUNC_Event )
struct ASGS_Vehicle_Sceptor_eventTick_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bRecentlyRendered : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Vehicle_Parasite.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Parasite_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_Parasite.UpdateRotation
// [0x00820102] 
struct ASGS_Vehicle_Parasite_execUpdateRotation_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vStart;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rDir;                                             		// 0x0024 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Parasite.VehicleCalcCamera
// [0x00C24102] 
struct ASGS_Vehicle_Parasite_execVehicleCalcCamera_Parms
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
	// class AUTPawn*                                  P;                                                		// 0x00C8 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bObstructed : 1;                                  		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bInsideVehicle : 1;                               		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Vehicle_Parasite.GetWeaponAim
// [0x00820002] 
struct ASGS_Vehicle_Parasite_execGetWeaponAim_Parms
{
	class AUTVehicleWeapon*                            VWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealAimPoint;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DesiredAimPoint;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitRotation;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirA;                                             		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirB;                                             		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0070 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x007C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ControllerAim;                                    		// 0x0088 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AdjustedAim;                                      		// 0x0094 (0x000C) [0x0000000000000000]              
	// float                                           DiffAngle;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           MaxAdjust;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x00A8 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x00AC (0x0004) [0x0000000000000000]              
	// struct FQuat                                    Q;                                                		// 0x00B0 (0x0010) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Parasite.ServerTransformation
// [0x002200C2] 
struct ASGS_Vehicle_Parasite_execServerTransformation_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Parasite.ToggleMechMode
// [0x00020102] 
struct ASGS_Vehicle_Parasite_execToggleMechMode_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Parasite.SetInputs
// [0x00820102] 
struct ASGS_Vehicle_Parasite_execSetInputs_Parms
{
	float                                              InForward;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InStrafe;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InUp;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Parasite.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Parasite_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Parasite.PostBeginPlay
// [0x00020102] 
struct ASGS_Vehicle_Parasite_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Proj_EMPGrenade.CustomExplode
// [0x00020102] 
struct ASGS_Proj_EMPGrenade_execCustomExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_GameExplosionActor*                  eActor;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UGameExplosion*                           Template;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Proj_EMPGrenade.HurtRadius
// [0x00024102] 
struct ASGS_Proj_EMPGrenade_execHurtRadius_Parms
{
	float                                              DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      IgnoredActor;                                     		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AController*                                 InstigatedByController;                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   A;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bAch : 1;                                         		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGSOrion.SGS_Proj_EMPGrenade.SetExplosionEffectParameters
// [0x00020102] 
struct ASGS_Proj_EMPGrenade_execSetExplosionEffectParameters_Parms
{
	class UParticleSystemComponent*                    ProjExplosion;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Proj_GrenadeCAR.HurtRadius
// [0x00824102] 
struct ASGS_Proj_GrenadeCAR_execHurtRadius_Parms
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      IgnoredActor;                                     		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AController*                                 InstigatedByController;                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   Victim;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCausedDamage : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0034 (0x001C) [0x0000000000000000]              
	// class UStaticMeshComponent*                     HitComponent;                                     		// 0x0050 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AKActorFromStatic*                        NewKActor;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             Kills;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Proj_GrenadeCAR.CustomExplode
// [0x00020102] 
struct ASGS_Proj_GrenadeCAR_execCustomExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_GameExplosionActor*                  eActor;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UGameExplosion*                           Template;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Proj_GrenadeCAR.SetExplosionEffectParameters
// [0x00020102] 
struct ASGS_Proj_GrenadeCAR_execSetExplosionEffectParameters_Parms
{
	class UParticleSystemComponent*                    ProjExplosion;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Proj_SmokeGrenade.CustomExplode
// [0x00020102] 
struct ASGS_Proj_SmokeGrenade_execCustomExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ASGS_GameExplosionActor*                  eActor;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UGameExplosion*                           Template;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Proj_SmokeGrenade.SetExplosionEffectParameters
// [0x00020102] 
struct ASGS_Proj_SmokeGrenade_execSetExplosionEffectParameters_Parms
{
	class UParticleSystemComponent*                    ProjExplosion;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_TimerMessage.GetString
// [0x00026002] 
struct USGS_TimerMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Vehicle_Cobra.SetInputs
// [0x00020102] 
struct ASGS_Vehicle_Cobra_execSetInputs_Parms
{
	float                                              InForward;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InStrafe;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InUp;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Cobra.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct ASGS_Vehicle_Cobra_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        RigidCollisionData;                               		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Cobra.VehicleWeaponFireEffects
// [0x00020102] 
struct ASGS_Vehicle_Cobra_execVehicleWeaponFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             BarrelIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Cobra.TriggerVehicleEffect
// [0x00020102] 
struct ASGS_Vehicle_Cobra_execTriggerVehicleEffect_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Cobra.CreateVehicleEffect
// [0x00020102] 
struct ASGS_Vehicle_Cobra_execCreateVehicleEffect_Parms
{
	int                                                EffectIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Cobra.GetBarrelLocationAndRotation
// [0x00424902] ( FUNC_Event )
struct ASGS_Vehicle_Cobra_eventGetBarrelLocationAndRotation_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SocketLocation;                                   		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SocketRotation;                                   		// 0x0010 (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function SGSOrion.SGS_Vehicle_Cobra.PanTread
// [0x00C40103] ( FUNC_Final )
struct ASGS_Vehicle_Cobra_execPanTread_Parms
{
	class UMaterialInstanceConstant*                   TreadPanner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TreadPan;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Side;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  vAngularVelocity;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           Speed;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           LinearSpeed;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           TurningSpeed;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Cobra.PanTreads
// [0x00040103] ( FUNC_Final )
struct ASGS_Vehicle_Cobra_execPanTreads_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Cobra.SetUpTreads
// [0x00040103] ( FUNC_Final )
struct ASGS_Vehicle_Cobra_execSetUpTreads_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Cobra.Tick
// [0x00020102] 
struct ASGS_Vehicle_Cobra_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Vehicle_Cobra.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Cobra_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGSOrion.SGS_Vehicle_Cobra.EndAnim_RobotToTank
// [0x00020100] 
struct ASGS_Vehicle_Cobra_execEndAnim_RobotToTank_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Cobra.EndAnim_TankToRobot
// [0x00020100] 
struct ASGS_Vehicle_Cobra_execEndAnim_TankToRobot_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Cobra.Update_RobotMode
// [0x00020102] 
struct ASGS_Vehicle_Cobra_execUpdate_RobotMode_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Cobra.Server_SetRobotMode
// [0x002200C2] 
struct ASGS_Vehicle_Cobra_execServer_SetRobotMode_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Cobra.ToggleRobotMode
// [0x00020102] 
struct ASGS_Vehicle_Cobra_execToggleRobotMode_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Cobra.DriverLeft
// [0x00020002] 
struct ASGS_Vehicle_Cobra_execDriverLeft_Parms
{
	// float                                           Dist;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Cobra.PostBeginPlay
// [0x00020102] 
struct ASGS_Vehicle_Cobra_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Vehicle_Cobra.DisplayWheelsDebug
// [0x00820102] 
struct ASGS_Vehicle_Cobra_execDisplayWheelsDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YL;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WorldLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndPoint;                                         		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenEndPoint;                                   		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FColor                                   SaveColor;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Cobra.DisplayDebug
// [0x00420102] 
struct ASGS_Vehicle_Cobra_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SGSOrion.SGS_Vehicle_Cobra.GetSVehicleDebug
// [0x00420102] 
struct ASGS_Vehicle_Cobra_execGetSVehicleDebug_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Vehicle_Cobra.VehicleCalcCamera
// [0x00C24102] 
struct ASGS_Vehicle_Cobra_execVehicleCalcCamera_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     CamStart;                                         		// 0x0020 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bPivotOnly : 1;                                   		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  HitLoc;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           Dif;                                              		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Cobra.DriverLeave
// [0x00820802] ( FUNC_Event )
struct ASGS_Vehicle_Cobra_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  pos;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Vehicle_Cobra.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGS_Vehicle_Cobra_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_CobraRocket.SetCurrentFireMode
// [0x00020102] 
struct ASGS_VWeap_CobraRocket_execSetCurrentFireMode_Parms
{
	unsigned char                                      FiringModeNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_CobraRocket.PlayFiringSound
// [0x00020102] 
struct ASGS_VWeap_CobraRocket_execPlayFiringSound_Parms
{
};

// Function SGSOrion.SGS_VWeap_CobraRocket.GetAmmoCount
// [0x00020102] 
struct ASGS_VWeap_CobraRocket_execGetAmmoCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_VWeap_CobraRocket.StopFire
// [0x00020102] 
struct ASGS_VWeap_CobraRocket_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_CobraRocket.StartFire
// [0x00020102] 
struct ASGS_VWeap_CobraRocket_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VWeap_CobraRocket.LoadRocket
// [0x00020102] 
struct ASGS_VWeap_CobraRocket_execLoadRocket_Parms
{
};

// Function SGSOrion.SGS_VWeap_CobraRocket.ProjectileFire
// [0x00020102] 
struct ASGS_VWeap_CobraRocket_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              Proj;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGSOrion.SGS_VWeap_CobraRocket.GetAdjustedAim
// [0x00820102] 
struct ASGS_VWeap_CobraRocket_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 R;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_VWeap_CobraRocket.SpawnTracer
// [0x00820102] 
struct ASGS_VWeap_CobraRocket_execSpawnTracer_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_VehicleFactory_Cobra.VehicleDestroyed
// [0x00020002] 
struct ASGS_VehicleFactory_Cobra_execVehicleDestroyed_Parms
{
	class AUTVehicle*                                  V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VehicleFactory_Cobra.VehicleTaken
// [0x00020002] 
struct ASGS_VehicleFactory_Cobra_execVehicleTaken_Parms
{
};

// Function SGSOrion.SGS_VehicleFactory_Gladiator.VehicleDestroyed
// [0x00020002] 
struct ASGS_VehicleFactory_Gladiator_execVehicleDestroyed_Parms
{
	class AUTVehicle*                                  V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VehicleFactory_Gladiator.VehicleTaken
// [0x00020002] 
struct ASGS_VehicleFactory_Gladiator_execVehicleTaken_Parms
{
};

// Function SGSOrion.SGS_VehicleFactory_Griffin.VehicleDestroyed
// [0x00020002] 
struct ASGS_VehicleFactory_Griffin_execVehicleDestroyed_Parms
{
	class AUTVehicle*                                  V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VehicleFactory_Griffin.VehicleTaken
// [0x00020002] 
struct ASGS_VehicleFactory_Griffin_execVehicleTaken_Parms
{
};

// Function SGSOrion.SGS_VehicleFactory_Parasite.VehicleDestroyed
// [0x00020002] 
struct ASGS_VehicleFactory_Parasite_execVehicleDestroyed_Parms
{
	class AUTVehicle*                                  V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VehicleFactory_Parasite.VehicleTaken
// [0x00020002] 
struct ASGS_VehicleFactory_Parasite_execVehicleTaken_Parms
{
};

// Function SGSOrion.SGS_VehicleFactory_Sceptor.VehicleDestroyed
// [0x00020002] 
struct ASGS_VehicleFactory_Sceptor_execVehicleDestroyed_Parms
{
	class AUTVehicle*                                  V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VehicleFactory_Sceptor.VehicleTaken
// [0x00020002] 
struct ASGS_VehicleFactory_Sceptor_execVehicleTaken_Parms
{
};

// Function SGSOrion.SGS_VehicleFactory_VTOL.VehicleDestroyed
// [0x00020002] 
struct ASGS_VehicleFactory_VTOL_execVehicleDestroyed_Parms
{
	class AUTVehicle*                                  V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_VehicleFactory_VTOL.VehicleTaken
// [0x00020002] 
struct ASGS_VehicleFactory_VTOL_execVehicleTaken_Parms
{
};

// Function SGSOrion.SGS_VehicleKillMessage.AnnouncementSound
// [0x00022002] 
struct USGS_VehicleKillMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGSOrion.SGS_VehicleKillMessage.ClientReceive
// [0x00026102] 
struct USGS_VehicleKillMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  MessageString;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_VehicleKillMessage.GetString
// [0x00026002] 
struct USGS_VehicleKillMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGSOrion.SGS_Weap_CV10_Silenced3D.PostBeginPlay
// [0x00020102] 
struct ASGS_Weap_CV10_Silenced3D_execPostBeginPlay_Parms
{
};

// Function SGSOrion.SGS_Weap_Flag.CustomFire
// [0x00020102] 
struct ASGS_Weap_Flag_execCustomFire_Parms
{
};

// Function SGSOrion.SGS_Weap_Flag.DoDamage
// [0x00820002] 
struct ASGS_Weap_Flag_execDoDamage_Parms
{
	// struct FVector                                  StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGSOrion.SGS_Weap_Flag.PutDownWeapon
// [0x00020102] 
struct ASGS_Weap_Flag_execPutDownWeapon_Parms
{
};

// Function SGSOrion.SGS_Weap_Flag.UpdateAimSpread
// [0x00020100] 
struct ASGS_Weap_Flag_execUpdateAimSpread_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_Flag.ReloadAmmo
// [0x002200C0] 
struct ASGS_Weap_Flag_execReloadAmmo_Parms
{
};

// Function SGSOrion.SGS_Weap_Flag.ConsumeAmmo
// [0x00020000] 
struct ASGS_Weap_Flag_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_MedicGun_3D.PlayImpactEffects
// [0x00020100] 
struct ASGS_Weap_MedicGun_3D_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_MedicGun_3D.ThirdPersonFireEffects
// [0x00020102] 
struct ASGS_Weap_MedicGun_3D_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_MedicGun_3D.FirstPersonFireEffects
// [0x00020102] 
struct ASGS_Weap_MedicGun_3D_execFirstPersonFireEffects_Parms
{
	class AWeapon*                                     PawnWeapon;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGSOrion.SGS_Weap_MedicGun_3D.StopMuzzleFlash
// [0x00020102] 
struct ASGS_Weap_MedicGun_3D_execStopMuzzleFlash_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif