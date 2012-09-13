/*
#############################################################################################
# Bullet Run (Unknown) SDK
# ========================================================================================= #
# File: PBKismet_classes.h
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class PBKismet.PBSeqAct_ActivateOnScript
// 0x0000 (0x00FC - 0x00FC)
class UPBSeqAct_ActivateOnScript : public USequenceAction
{
public:
public:
};

// Class PBKismet.PBSeqAct_TriggerDestructible
// 0x0004 (0x0100 - 0x00FC)
class UPBSeqAct_TriggerDestructible : public USequenceAction
{
public:
	int                                                SwitchToState;                                    		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
};

// Class PBKismet.PBSeqAct_WakeRigidBody
// 0x0019 (0x0115 - 0x00FC)
class UPBSeqAct_WakeRigidBody : public USequenceAction
{
public:
	struct FVector                                     InitialLinearVelocity;                            		// 0x00FC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     InitialAngularVelocity;                           		// 0x0108 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MeshShiftIndex;                                   		// 0x0114 (0x0001) [0x0000000000000001]              ( CPF_Edit )
public:
};

// Class PBKismet.PBSeqAct_AIFreeze
// 0x0004 (0x0100 - 0x00FC)
class UPBSeqAct_AIFreeze : public USequenceAction
{
public:
	unsigned long                                      bAllowWeaponFiring : 1;                           		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
};

// Class PBKismet.PBSeqAct_AIStartFireAt
// 0x0001 (0x00FD - 0x00FC)
class UPBSeqAct_AIStartFireAt : public USequenceAction
{
public:
	unsigned char                                      ForcedFireMode;                                   		// 0x00FC (0x0001) [0x0000000000000001]              ( CPF_Edit )
public:
};

// Class PBKismet.PBSeqAct_AIStopFire
// 0x0000 (0x00FC - 0x00FC)
class UPBSeqAct_AIStopFire : public USequenceAction
{
public:
public:
};

// Class PBKismet.PBSeqAct_CauseDamage
// 0x0004 (0x0118 - 0x0114)
class UPBSeqAct_CauseDamage : public USeqAct_ModifyHealth
{
public:
	float                                              MaxDamageVelocityKmH;                             		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
};

// Class PBKismet.PBSeqAct_ToggleHUDScene
// 0x0000 (0x00FC - 0x00FC)
class UPBSeqAct_ToggleHUDScene : public USeqAct_ToggleHUD
{
public:
public:
};

// Class PBKismet.PBSeqEvent_BlockingGateDestroyed
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_BlockingGateDestroyed : public USequenceEvent
{
public:
public:
};

// Class PBKismet.PBSeqEvent_CloseScoreboard
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_CloseScoreboard : public USequenceEvent
{
public:
public:
};

// Class PBKismet.PBSeqEvent_CustomKey
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_CustomKey : public USequenceEvent
{
public:
public:
};

// Class PBKismet.PBSeqEvent_NuclearBombDefused
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_NuclearBombDefused : public USequenceEvent
{
public:
public:
};

// Class PBKismet.PBSeqEvent_NuclearBombExploded
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_NuclearBombExploded : public USequenceEvent
{
public:
public:
};

// Class PBKismet.PBSeqEvent_OpenScoreboard
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_OpenScoreboard : public USequenceEvent
{
public:
public:
};

// Class PBKismet.PBSeqEvent_RoundEnd
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_RoundEnd : public USequenceEvent
{
public:
public:
};

// Class PBKismet.PBSeqEvent_RoundStart
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_RoundStart : public USequenceEvent
{
public:
public:
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif