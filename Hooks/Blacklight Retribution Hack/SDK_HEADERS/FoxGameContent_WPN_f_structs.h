/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPN_f_structs.h
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

// Function FoxGameContent_WPN.FoxDamageType_Bullet_Electro.ApplyEffect
// [0x00426002] 
struct UFoxDamageType_Bullet_Electro_execApplyEffect_Parms
{
	class AFoxPawn*                                    VictimPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DamageAmount;                                     		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 ControllerInstigator;                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function FoxGameContent_WPN.FoxDamageType_Bullet_Toxic.ApplyEffect
// [0x00426002] 
struct UFoxDamageType_Bullet_Toxic_execApplyEffect_Parms
{
	class AFoxPawn*                                    VictimPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DamageAmount;                                     		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 ControllerInstigator;                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function FoxGameContent_WPN.FoxWeaponScope_Default.UpdateSpawnEffectMaterials
// [0x00020000] 
struct UFoxWeaponScope_Default_execUpdateSpawnEffectMaterials_Parms
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                stage;                                            		// 0x000C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function FoxGameContent_WPN.FoxWeaponScope_Default.SetSpawnEffectStage
// [0x00024000] 
struct UFoxWeaponScope_Default_execSetSpawnEffectStage_Parms
{
	int                                                stage;                                            		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FLinearColor                                SpawnInColor;                                     		// 0x0004 (0x0010) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif