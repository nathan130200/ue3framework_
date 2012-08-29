/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PBKismet_f_structs.h
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

// Function PBKismet.PBSeqAct_ActivateOnScript.ActionActivated
// [0x00020800] ( FUNC_Event )
struct UPBSeqAct_ActivateOnScript_eventActionActivated_Parms
{
};

// Function PBKismet.PBSeqAct_CauseDamage.ComputePhysicalDamage
// [0x00022102] 
struct UPBSeqAct_CauseDamage_execComputePhysicalDamage_Parms
{
	class AActor*                                      PhysInstigator;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                _nBaseDamage;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMaxDamageVelocityKmH;                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDamage;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fBaseDamage;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function PBKismet.PBSeqAct_CauseDamage.ComputeDamage
// [0x00020102] 
struct UPBSeqAct_CauseDamage_execComputeDamage_Parms
{
	int                                                nBaseDamage;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nDamage;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PBKismet.PBSeqAct_CauseDamage.GetUTVelocityFromKmh
// [0x00022102] 
struct UPBSeqAct_CauseDamage_execGetUTVelocityFromKmh_Parms
{
	float                                              fKmH;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fUTVel;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif