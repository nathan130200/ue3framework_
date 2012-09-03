/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPN_classes.h
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

// Class FoxGameContent_WPN.FoxCameraLensEffect_Corrosive
// 0x0003 (0x021C - 0x0219)
class AFoxCameraLensEffect_Corrosive : public AFoxCameraLensEffect_Fading
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103228 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_Corrosive::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxCameraLensEffect_ElectrifiedContent
// 0x0003 (0x0204 - 0x0201)
class AFoxCameraLensEffect_ElectrifiedContent : public AFoxCameraLensEffect_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103236 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_ElectrifiedContent::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxCameraLensEffect_FallDamage
// 0x0003 (0x0204 - 0x0201)
class AFoxCameraLensEffect_FallDamage : public AFoxCameraLensEffect_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103240 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_FallDamage::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxCameraLensEffect_HardSuitHRVPing
// 0x0000 (0x0204 - 0x0204)
class AFoxCameraLensEffect_HardSuitHRVPing : public AFoxCameraLensEffect_HardSuitHRVPingBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103244 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_HardSuitHRVPing::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxCameraLensEffect_TightAimContent
// 0x0000 (0x0204 - 0x0204)
class AFoxCameraLensEffect_TightAimContent : public AFoxCameraLensEffect_TightAim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103248 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_TightAimContent::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_BASniper
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_BASniper : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103253 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_BASniper::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeapon_BASniper
// 0x0000 (0x0C24 - 0x0C24)
class AFoxWeapon_BASniper : public AFoxWeapon_SingleActionBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103255 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_BASniper::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullet_Assault
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_Assault : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103258 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_Assault::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeapon_AssaultRifle
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_AssaultRifle : public AFoxWeapon_AutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103260 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_AssaultRifle::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullet_BKT
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_BKT : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103263 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_BKT::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeapon_BKT
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_BKT : public AFoxWeapon_AutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103265 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_BKT::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullet_Electro
// 0x0010 (0x00F0 - 0x00E0)
class UFoxDamageType_Bullet_Electro : public UFoxDamageType_Bullet
{
public:
	float                                              TurretDamageMultipler;                            		// 0x00E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StunnedPawnMultipler;                             		// 0x00E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FlashedPawnMultipler;                             		// 0x00E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DigiedPawnMultipler;                              		// 0x00EC (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103268 ];

		return pClassPointer;
	};

	void ApplyEffect ( class AFoxPawn* VictimPawn, class AController* ControllerInstigator, int* DamageAmount );
};

UClass* UFoxDamageType_Bullet_Electro::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullet_Explosive
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_Explosive : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103280 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_Explosive::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullet_Incendiary
// 0x0000 (0x011C - 0x011C)
class UFoxDamageType_Bullet_Incendiary : public UFoxDamageType_Corrosive_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103284 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_Incendiary::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Splash_Burn
// 0x0000 (0x00EC - 0x00EC)
class UFoxDamageType_Splash_Burn : public UFoxDamageType_Splash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103286 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Splash_Burn::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullet_SMG
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_SMG : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103289 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_SMG::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeapon_SMG
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_SMG : public AFoxWeapon_AutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103291 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_SMG::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullet_Sniper
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullet_Sniper : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103294 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullet_Sniper::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeapon_SniperRifle
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_SniperRifle : public AFoxWeapon_SemiAutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103296 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_SniperRifle::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullet_Toxic
// 0x0004 (0x0120 - 0x011C)
class UFoxDamageType_Bullet_Toxic : public UFoxDamageType_Corrosive_Bullet
{
public:
	float                                              BonusMultipler;                                   		// 0x011C (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103299 ];

		return pClassPointer;
	};

	void ApplyEffect ( class AFoxPawn* VictimPawn, class AController* ControllerInstigator, int* DamageAmount );
};

UClass* UFoxDamageType_Bullet_Toxic::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Splash_Toxic
// 0x0000 (0x00EC - 0x00EC)
class UFoxDamageType_Splash_Toxic : public UFoxDamageType_Splash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103307 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Splash_Toxic::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Bullpup
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Bullpup : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103313 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Bullpup::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeapon_Bullpup
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_Bullpup : public AFoxWeapon_AutomaticRifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103315 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Bullpup::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxDamageType_Splash_Explosive
// 0x0000 (0x00EC - 0x00EC)
class UFoxDamageType_Splash_Explosive : public UFoxDamageType_Splash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103321 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Splash_Explosive::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxLensFlare_ExplosionContent
// 0x0000 (0x01F8 - 0x01F8)
class AFoxLensFlare_ExplosionContent : public AFoxLensFlare_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103328 ];

		return pClassPointer;
	};

};

UClass* AFoxLensFlare_ExplosionContent::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAttachment_AssaultRifle
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_AssaultRifle : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103337 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_AssaultRifle::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponTracer_AssaultRifle
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_AssaultRifle : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103341 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_AssaultRifle::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAttachment_SniperRifle
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_SniperRifle : public AFoxWeaponAttachment_SemiAutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103354 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_SniperRifle::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAttachment_BASniper
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_BASniper : public AFoxWeaponAttachment_SniperRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103353 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_BASniper::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponTracer_BoltAction
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_BoltAction : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103361 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_BoltAction::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAttachment_BKT
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_BKT : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103375 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_BKT::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponTracer_BKT
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_BKT : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103379 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_BKT::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAttachment_Bullpup
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Bullpup : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103391 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_Bullpup::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponTracer_Bullpup
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_Bullpup : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103397 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_Bullpup::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAttachment_SMG
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_SMG : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103408 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_SMG::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponTracer_SMG
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_SMG : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103412 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_SMG::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponTracer_SniperRifle
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_SniperRifle : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103429 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_SniperRifle::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAmmo_Bullet_Default
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Bullet_Default : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103434 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Bullet_Default::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAmmo_Bullet_Electro
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Bullet_Electro : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103436 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Bullet_Electro::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAmmo_Bullet_Explosive
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Bullet_Explosive : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103438 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Bullet_Explosive::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAmmo_Bullet_Incendiary
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Bullet_Incendiary : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103440 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Bullet_Incendiary::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponAmmo_Bullet_Toxic
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Bullet_Toxic : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103442 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Bullet_Toxic::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponBarrel
// 0x0000 (0x01A4 - 0x01A4)
//class UFoxWeaponBarrel : public UFoxWeaponBarrel_Base
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
//			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103506 ];
//
//		return pClassPointer;
//	};
//
//};
//
//UClass* UFoxWeaponBarrel::pClassPointer = NULL;
//
//// Class FoxGameContent_WPN.FoxWeaponBarrel_None
//// 0x0000 (0x01A4 - 0x01A4)
//class UFoxWeaponBarrel_None : public UFoxWeaponBarrel_Base
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
//			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103591 ];
//
//		return pClassPointer;
//	};
//
//};

//UClass* UFoxWeaponBarrel_None::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponGrip
// 0x0000 (0x0164 - 0x0164)
class UFoxWeaponGrip : public UFoxWeaponGrip_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103595 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponGrip::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponHanger_ContentBase
// 0x0000 (0x0158 - 0x0158)
class UFoxWeaponHanger_ContentBase : public UFoxWeaponHanger_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103605 ];

		return pClassPointer;
	};

};

//UClass* UFoxWeaponHanger_ContentBase::pClassPointer = NULL;
//
//// Class FoxGameContent_WPN.FoxWeaponMuzzle
//// 0x0000 (0x0164 - 0x0164)
//class UFoxWeaponMuzzle : public UFoxWeaponMuzzle_Base
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
//			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103608 ];
//
//		return pClassPointer;
//	};
//
//};
//
//UClass* UFoxWeaponMuzzle::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponScope
// 0x0000 (0x0278 - 0x0278)
class UFoxWeaponScope : public UFoxWeaponScope_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103688 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponScope::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponScope_Default
// 0x0000 (0x0278 - 0x0278)
class UFoxWeaponScope_Default : public UFoxWeaponScope_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103778 ];

		return pClassPointer;
	};

	void UpdateSpawnEffectMaterials ( struct FName ParamName, float Value, int stage );
	void SetSpawnEffectStage ( int stage, struct FLinearColor SpawnInColor );
};

UClass* UFoxWeaponScope_Default::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponStock
// 0x0000 (0x015C - 0x015C)
class UFoxWeaponStock : public UFoxWeaponStock_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103790 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponStock::pClassPointer = NULL;

//// Class FoxGameContent_WPN.FoxWeaponStock_Bullpup
//// 0x0000 (0x015C - 0x015C)
//class UFoxWeaponStock_Bullpup : public UFoxWeaponStock_Base
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
//			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103842 ];
//
//		return pClassPointer;
//	};
//
//};
//
//UClass* UFoxWeaponStock_Bullpup::pClassPointer = NULL;

// Class FoxGameContent_WPN.FoxWeaponStock_None
// 0x0000 (0x015C - 0x015C)
class UFoxWeaponStock_None : public UFoxWeaponStock_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 103854 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponStock_None::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif