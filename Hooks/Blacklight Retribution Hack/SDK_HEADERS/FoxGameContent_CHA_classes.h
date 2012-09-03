/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_CHA_classes.h
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

// Class FoxGameContent_CHA.FoxDamageType_CrewServed
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_CrewServed : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86041 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_CrewServed::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeapon_CrewServed
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_CrewServed : public AFoxWeapon_AutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86043 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_CrewServed::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxDamageType_Crushed
// 0x0003 (0x00E0 - 0x00DD)
class UFoxDamageType_Crushed : public UFoxDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86046 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Crushed::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxDamageType_HardSuitCannon
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_HardSuitCannon : public UFoxDamageType_HighImpact
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86050 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_HardSuitCannon::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeapon_HardSuitCannon
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_HardSuitCannon : public AFoxWeapon_RailGunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86052 ];

		return pClassPointer;
	};

	void TryToGetBackToZoom ( );
	void TryToGetBackToFiringState ( );
};

UClass* AFoxWeapon_HardSuitCannon::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxDamageType_HardSuitHMG
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_HardSuitHMG : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86055 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_HardSuitHMG::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeapon_HardSuitHMG
// 0x0000 (0x0BF8 - 0x0BF8)
class AFoxWeapon_HardSuitHMG : public AFoxWeapon_HMGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86057 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_HardSuitHMG::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxDamageType_Turret
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Turret : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86060 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Turret::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeapon_Turret
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_Turret : public AFoxWeapon_AutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86062 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Turret::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxPawn_ContentBase
// 0x0000 (0x0DC4 - 0x0DC4)
class AFoxPawn_ContentBase : public AFoxPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86065 ];

		return pClassPointer;
	};

};

UClass* AFoxPawn_ContentBase::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxPawn_BL2
// 0x0000 (0x0DC4 - 0x0DC4)
class AFoxPawn_BL2 : public AFoxPawn_ContentBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86136 ];

		return pClassPointer;
	};

};

UClass* AFoxPawn_BL2::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxPawn_CrewServedWeaponContent
// 0x0000 (0x0E40 - 0x0E40)
class AFoxPawn_CrewServedWeaponContent : public AFoxPawn_CrewServedWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86165 ];

		return pClassPointer;
	};

};

UClass* AFoxPawn_CrewServedWeaponContent::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxPawn_DeployableTurretContent
// 0x0000 (0x0E3C - 0x0E3C)
class AFoxPawn_DeployableTurretContent : public AFoxPawn_DeployableTurret
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86182 ];

		return pClassPointer;
	};

};

UClass* AFoxPawn_DeployableTurretContent::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxPawn_HardSuitContent
// 0x0000 (0x0FBC - 0x0FBC)
class AFoxPawn_HardSuitContent : public AFoxPawn_HardSuit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86202 ];

		return pClassPointer;
	};

};

UClass* AFoxPawn_HardSuitContent::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxPawn_Turret
// 0x0000 (0x0DD8 - 0x0DD8)
class AFoxPawn_Turret : public AFoxGame_AITurretPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86259 ];

		return pClassPointer;
	};

};

UClass* AFoxPawn_Turret::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxPawn_Turret_Unarmored
// 0x0000 (0x0DD8 - 0x0DD8)
class AFoxPawn_Turret_Unarmored : public AFoxPawn_Turret
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86276 ];

		return pClassPointer;
	};

};

UClass* AFoxPawn_Turret_Unarmored::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeaponAttachment_CrewServed
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_CrewServed : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86294 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_CrewServed::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeaponAttachment_HardSuitCannon
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_HardSuitCannon : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86305 ];

		return pClassPointer;
	};

	class UFoxPMPInfo_Decals* GetWeaponSpecificDecalData ( class UFoxPhysicalMaterialProperty* PMP_Info, unsigned char FiringMode );
	class UAkEvent* GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
};

UClass* AFoxWeaponAttachment_HardSuitCannon::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeaponTracer_HardSuitCannon
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_HardSuitCannon : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86309 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_HardSuitCannon::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeaponAttachment_HardSuitHMG
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_HardSuitHMG : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86317 ];

		return pClassPointer;
	};

	class UFoxPMPInfo_Decals* GetWeaponSpecificDecalData ( class UFoxPhysicalMaterialProperty* PMP_Info, unsigned char FiringMode );
	class UAkEvent* GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
};

UClass* AFoxWeaponAttachment_HardSuitHMG::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeaponTracer_HardSuitHMG
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_HardSuitHMG : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86321 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_HardSuitHMG::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeaponAttachment_Turret
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Turret : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86327 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_Turret::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeaponTracer_CrewServe
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_CrewServe : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86336 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_CrewServe::pClassPointer = NULL;

// Class FoxGameContent_CHA.FoxWeaponTracer_Turret
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_Turret : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86383 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_Turret::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif