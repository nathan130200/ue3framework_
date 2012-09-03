/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_DLC2_classes.h
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

// Class FoxGameContent_DLC2.FoxDamageType_Bullet_HeavySniper
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_HeavySniper : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101562 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_HeavySniper::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxWeapon_HeavySniper
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_HeavySniper : public AFoxWeapon_SemiAutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101564 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_HeavySniper::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxDamageType_Bullet_Magnum
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_Magnum : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101567 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_Magnum::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxDamageType_Explosion_Beacon
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Explosion_Beacon : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101571 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Explosion_Beacon::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxWeapon_Beacon
// 0x0000 (0x0D28 - 0x0D28)
class AFoxWeapon_Beacon : public AFoxWeapon_MineBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101574 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Beacon::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxProjectile_Beacon
// 0x0000 (0x0380 - 0x0380)
class AFoxProjectile_Beacon : public AFoxProjectile_BeaconBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101577 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_Beacon::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxWeaponAttachment_Beacon
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Beacon : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101589 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_Beacon::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxWeaponAttachment_HeavySniper
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_HeavySniper : public AFoxWeaponAttachment_SemiAutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101601 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_HeavySniper::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxWeaponTracer_HeavySniper
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_HeavySniper : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101605 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_HeavySniper::pClassPointer = NULL;

// Class FoxGameContent_DLC2.FoxWeaponAmmo_Bullet_Magnum
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Bullet_Magnum : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101611 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Bullet_Magnum::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif