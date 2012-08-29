/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PBKismet_classes.h
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

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1330 ];

		return pClassPointer;
	};

	void eventActionActivated ( );
};

UClass* UPBSeqAct_ActivateOnScript::pClassPointer = NULL;

// Class PBKismet.PBSeqAct_TriggerDestructible
// 0x0004 (0x0100 - 0x00FC)
class UPBSeqAct_TriggerDestructible : public USequenceAction
{
public:
	int                                                SwitchToState;                                    		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1331 ];

		return pClassPointer;
	};

};

UClass* UPBSeqAct_TriggerDestructible::pClassPointer = NULL;

// Class PBKismet.PBSeqAct_WakeRigidBody
// 0x0019 (0x0115 - 0x00FC)
class UPBSeqAct_WakeRigidBody : public USequenceAction
{
public:
	struct FVector                                     InitialLinearVelocity;                            		// 0x00FC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     InitialAngularVelocity;                           		// 0x0108 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MeshShiftIndex;                                   		// 0x0114 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1332 ];

		return pClassPointer;
	};

};

UClass* UPBSeqAct_WakeRigidBody::pClassPointer = NULL;

// Class PBKismet.PBSeqAct_AIFreeze
// 0x0004 (0x0100 - 0x00FC)
class UPBSeqAct_AIFreeze : public USequenceAction
{
public:
	unsigned long                                      bAllowWeaponFiring : 1;                           		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36586 ];

		return pClassPointer;
	};

};

UClass* UPBSeqAct_AIFreeze::pClassPointer = NULL;

// Class PBKismet.PBSeqAct_AIStartFireAt
// 0x0001 (0x00FD - 0x00FC)
class UPBSeqAct_AIStartFireAt : public USequenceAction
{
public:
	unsigned char                                      ForcedFireMode;                                   		// 0x00FC (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36589 ];

		return pClassPointer;
	};

};

UClass* UPBSeqAct_AIStartFireAt::pClassPointer = NULL;

// Class PBKismet.PBSeqAct_AIStopFire
// 0x0000 (0x00FC - 0x00FC)
class UPBSeqAct_AIStopFire : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36592 ];

		return pClassPointer;
	};

};

UClass* UPBSeqAct_AIStopFire::pClassPointer = NULL;

// Class PBKismet.PBSeqAct_CauseDamage
// 0x0004 (0x0118 - 0x0114)
class UPBSeqAct_CauseDamage : public USeqAct_ModifyHealth
{
public:
	float                                              MaxDamageVelocityKmH;                             		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36594 ];

		return pClassPointer;
	};

	float ComputePhysicalDamage ( class AActor* PhysInstigator, int _nBaseDamage, float fMaxDamageVelocityKmH );
	int ComputeDamage ( int nBaseDamage );
	float GetUTVelocityFromKmh ( float fKmH );
};

UClass* UPBSeqAct_CauseDamage::pClassPointer = NULL;

// Class PBKismet.PBSeqAct_ToggleHUDScene
// 0x0000 (0x00FC - 0x00FC)
class UPBSeqAct_ToggleHUDScene : public USeqAct_ToggleHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36612 ];

		return pClassPointer;
	};

};

UClass* UPBSeqAct_ToggleHUDScene::pClassPointer = NULL;

// Class PBKismet.PBSeqEvent_BlockingGateDestroyed
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_BlockingGateDestroyed : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36618 ];

		return pClassPointer;
	};

};

UClass* UPBSeqEvent_BlockingGateDestroyed::pClassPointer = NULL;

// Class PBKismet.PBSeqEvent_CloseScoreboard
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_CloseScoreboard : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36620 ];

		return pClassPointer;
	};

};

UClass* UPBSeqEvent_CloseScoreboard::pClassPointer = NULL;

// Class PBKismet.PBSeqEvent_CustomKey
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_CustomKey : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36622 ];

		return pClassPointer;
	};

};

UClass* UPBSeqEvent_CustomKey::pClassPointer = NULL;

// Class PBKismet.PBSeqEvent_NuclearBombDefused
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_NuclearBombDefused : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36624 ];

		return pClassPointer;
	};

};

UClass* UPBSeqEvent_NuclearBombDefused::pClassPointer = NULL;

// Class PBKismet.PBSeqEvent_NuclearBombExploded
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_NuclearBombExploded : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36626 ];

		return pClassPointer;
	};

};

UClass* UPBSeqEvent_NuclearBombExploded::pClassPointer = NULL;

// Class PBKismet.PBSeqEvent_OpenScoreboard
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_OpenScoreboard : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36628 ];

		return pClassPointer;
	};

};

UClass* UPBSeqEvent_OpenScoreboard::pClassPointer = NULL;

// Class PBKismet.PBSeqEvent_RoundEnd
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_RoundEnd : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36630 ];

		return pClassPointer;
	};

};

UClass* UPBSeqEvent_RoundEnd::pClassPointer = NULL;

// Class PBKismet.PBSeqEvent_RoundStart
// 0x0000 (0x0114 - 0x0114)
class UPBSeqEvent_RoundStart : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36632 ];

		return pClassPointer;
	};

};

UClass* UPBSeqEvent_RoundStart::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif