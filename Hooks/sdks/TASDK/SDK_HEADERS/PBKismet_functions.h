/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PBKismet_functions.h
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

// Function PBKismet.PBSeqAct_ActivateOnScript.ActionActivated
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UPBSeqAct_ActivateOnScript::eventActionActivated ( )
{
	static UFunction* pFnActionActivated = NULL;

	if ( ! pFnActionActivated )
		pFnActionActivated = (UFunction*) UObject::GObjObjects()->Data[ 36585 ];

	UPBSeqAct_ActivateOnScript_eventActionActivated_Parms ActionActivated_Parms;

	this->ProcessEvent ( pFnActionActivated, &ActionActivated_Parms, NULL );
};

// Function PBKismet.PBSeqAct_CauseDamage.ComputePhysicalDamage
// [0x00022102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  PhysInstigator                 ( CPF_Parm )
// int                            _nBaseDamage                   ( CPF_Parm )
// float                          fMaxDamageVelocityKmH          ( CPF_Parm )

float UPBSeqAct_CauseDamage::ComputePhysicalDamage ( class AActor* PhysInstigator, int _nBaseDamage, float fMaxDamageVelocityKmH )
{
	static UFunction* pFnComputePhysicalDamage = NULL;

	if ( ! pFnComputePhysicalDamage )
		pFnComputePhysicalDamage = (UFunction*) UObject::GObjObjects()->Data[ 36604 ];

	UPBSeqAct_CauseDamage_execComputePhysicalDamage_Parms ComputePhysicalDamage_Parms;
	ComputePhysicalDamage_Parms.PhysInstigator = PhysInstigator;
	ComputePhysicalDamage_Parms._nBaseDamage = _nBaseDamage;
	ComputePhysicalDamage_Parms.fMaxDamageVelocityKmH = fMaxDamageVelocityKmH;

	this->ProcessEvent ( pFnComputePhysicalDamage, &ComputePhysicalDamage_Parms, NULL );

	return ComputePhysicalDamage_Parms.ReturnValue;
};

// Function PBKismet.PBSeqAct_CauseDamage.ComputeDamage
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nBaseDamage                    ( CPF_Parm )

int UPBSeqAct_CauseDamage::ComputeDamage ( int nBaseDamage )
{
	static UFunction* pFnComputeDamage = NULL;

	if ( ! pFnComputeDamage )
		pFnComputeDamage = (UFunction*) UObject::GObjObjects()->Data[ 36600 ];

	UPBSeqAct_CauseDamage_execComputeDamage_Parms ComputeDamage_Parms;
	ComputeDamage_Parms.nBaseDamage = nBaseDamage;

	this->ProcessEvent ( pFnComputeDamage, &ComputeDamage_Parms, NULL );

	return ComputeDamage_Parms.ReturnValue;
};

// Function PBKismet.PBSeqAct_CauseDamage.GetUTVelocityFromKmh
// [0x00022102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fKmH                           ( CPF_Parm )

float UPBSeqAct_CauseDamage::GetUTVelocityFromKmh ( float fKmH )
{
	static UFunction* pFnGetUTVelocityFromKmh = NULL;

	if ( ! pFnGetUTVelocityFromKmh )
		pFnGetUTVelocityFromKmh = (UFunction*) UObject::GObjObjects()->Data[ 36596 ];

	UPBSeqAct_CauseDamage_execGetUTVelocityFromKmh_Parms GetUTVelocityFromKmh_Parms;
	GetUTVelocityFromKmh_Parms.fKmH = fKmH;

	this->ProcessEvent ( pFnGetUTVelocityFromKmh, &GetUTVelocityFromKmh_Parms, NULL );

	return GetUTVelocityFromKmh_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif