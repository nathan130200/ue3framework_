/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNS_classes.h
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

// Class FoxGameContent_WPNS.FoxDamageType_AutoPistol
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_AutoPistol : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119506 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_AutoPistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeapon_AutoPistol
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_AutoPistol : public AFoxWeapon_AutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119508 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_AutoPistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxDamageType_Bullet
// 0x0000 (0x00E0 - 0x00E0)
//class UFoxDamageType_Bullet : public UFoxDamageType_Bullet
//{
//public:
//
//private:
//	static UClass* pClassPointer;
//
//public:
//	static UClass* StaticClass()
//	{
//		if ( ! pClassPointer )
//			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119511 ];
//
//		return pClassPointer;
//	};
//
//};
//
//UClass* UFoxDamageType_Bullet::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeapon_45Pistol
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_45Pistol : public AFoxWeapon_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119513 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_45Pistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxDamageType_Bullet_9MM
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_9MM : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119516 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_9MM::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeapon_9mmPistol
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_9mmPistol : public AFoxWeapon_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119518 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_9mmPistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxDamageType_Bullet_Revolver
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_Revolver : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119521 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_Revolver::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeapon_Revolver
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_Revolver : public AFoxWeapon_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119523 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Revolver::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxDamageType_Bullet_Shotgun
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_Shotgun : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119526 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_Shotgun::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeapon_Shotgun
// 0x0000 (0x0BF8 - 0x0BF8)
class AFoxWeapon_Shotgun : public AFoxWeapon_ShotgunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119528 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Shotgun::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxDamageType_MachinePistol
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_MachinePistol : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119531 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_MachinePistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeapon_MachinePistol
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_MachinePistol : public AFoxWeapon_AutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119533 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_MachinePistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponAttachment_45Pistol
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_45Pistol : public AFoxWeaponAttachment_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119541 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_45Pistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponTracer_45Pistol
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_45Pistol : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119546 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_45Pistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponAttachment_9mmPistol
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_9mmPistol : public AFoxWeaponAttachment_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119558 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_9mmPistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponTracer_9mmPistol
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_9mmPistol : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119563 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_9mmPistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponAttachment_AutoPistol
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_AutoPistol : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119575 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_AutoPistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponTracer_MachinePistol
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_MachinePistol : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119581 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_MachinePistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponAttachment_MachinePistol
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_MachinePistol : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119594 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_MachinePistol::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponAttachment_Revolver
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Revolver : public AFoxWeaponAttachment_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119608 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_Revolver::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponTracer_Revolver
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_Revolver : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119612 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_Revolver::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponAttachment_Shotgun
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Shotgun : public AFoxWeaponAttachment_ShotgunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119620 ];

		return pClassPointer;
	};

	void PlayImpactEffects ( struct FVector HitLocation );
};

UClass* AFoxWeaponAttachment_Shotgun::pClassPointer = NULL;

// Class FoxGameContent_WPNS.FoxWeaponTracer_Shotgun
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_Shotgun : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119624 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_Shotgun::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif