/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNC_classes.h
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

// Class FoxGameContent_WPNC.FoxDamageType_AirStrike
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_AirStrike : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108412 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_AirStrike::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_AirStrike
// 0x0000 (0x0BEC - 0x0BEC)
class AFoxWeapon_AirStrike : public AFoxWeapon_AirStrikeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108414 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_AirStrike::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxDamageType_DeployableTurret
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_DeployableTurret : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108417 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_DeployableTurret::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_DeployableTurretContent
// 0x0000 (0x0C68 - 0x0C68)
class AFoxWeapon_DeployableTurretContent : public AFoxWeapon_DeployableTurret
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108419 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_DeployableTurretContent::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxDamageType_Explosion_AVRocket
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Explosion_AVRocket : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108422 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Explosion_AVRocket::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_RocketLauncher_AV
// 0x0000 (0x0BFC - 0x0BFC)
class AFoxWeapon_RocketLauncher_AV : public AFoxWeapon_RocketLauncherBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108424 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_RocketLauncher_AV::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxDamageType_Explosion_LauncherHEGrenade
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Explosion_LauncherHEGrenade : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108427 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Explosion_LauncherHEGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_GrenadeLauncher
// 0x0000 (0x0BEC - 0x0BEC)
class AFoxWeapon_GrenadeLauncher : public AFoxWeapon_LauncherBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108429 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_GrenadeLauncher::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxDamageType_FlameThrower
// 0x0000 (0x011C - 0x011C)
class UFoxDamageType_FlameThrower : public UFoxDamageType_Corrosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108432 ];

		return pClassPointer;
	};

	void eventEffectStarted ( class AFoxPawn* VictimPawn, struct FDOTInfo* CurrentDOTInfo );
};

UClass* UFoxDamageType_FlameThrower::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_FlameThrower
// 0x0000 (0x0C28 - 0x0C28)
class AFoxWeapon_FlameThrower : public AFoxWeapon_FlameThrowerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108437 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_FlameThrower::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxDamageType_MiniGun
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_MiniGun : public UFoxDamageType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108440 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_MiniGun::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_MiniGun
// 0x0010 (0x0BF8 - 0x0BE8)
class AFoxWeapon_MiniGun : public AFoxWeapon_AutomaticRifleBase
{
public:
	float                                              WarmupFireTime;                                   		// 0x0BE8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StartWarmUpTime;                                  		// 0x0BEC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAkEvent*                                    WarmUpEvent;                                      		// 0x0BF0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWarmedUp : 1;                                    		// 0x0BF4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108442 ];

		return pClassPointer;
	};

	void TryToGetBackToZoom ( );
	void TryToGetBackToFiringState ( );
};

UClass* AFoxWeapon_MiniGun::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxDamageType_RailGun
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_RailGun : public UFoxDamageType_HighImpact
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108445 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_RailGun::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_RailGun
// 0x0000 (0x0BE8 - 0x0BE8)
class AFoxWeapon_RailGun : public AFoxWeapon_RailGunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108447 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_RailGun::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxDamageType_Rocket
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Rocket : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108450 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Rocket::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_RocketLauncher
// 0x0000 (0x0BFC - 0x0BFC)
class AFoxWeapon_RocketLauncher : public AFoxWeapon_RocketLauncherBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108452 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_RocketLauncher::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxProjectile_AirStrike
// 0x0000 (0x0308 - 0x0308)
class AFoxProjectile_AirStrike : public AFoxProjectile_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108455 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_AirStrike::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxProjectile_AirStrikeBeacon
// 0x0000 (0x0320 - 0x0320)
class AFoxProjectile_AirStrikeBeacon : public AFoxProjectile_AirStrikeBeaconBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108463 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_AirStrikeBeacon::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxProjectile_AirStrikeRocket
// 0x0000 (0x0328 - 0x0328)
class AFoxProjectile_AirStrikeRocket : public AFoxProjectile_AirStrikeRocketBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108470 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_AirStrikeRocket::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxProjectile_AVRocket
// 0x0000 (0x0348 - 0x0348)
class AFoxProjectile_AVRocket : public AFoxProjectile_RocketBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108481 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_AVRocket::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxProjectile_ExplosiveRocket
// 0x0000 (0x0348 - 0x0348)
class AFoxProjectile_ExplosiveRocket : public AFoxProjectile_RocketBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108491 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_ExplosiveRocket::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxProjectile_RocketFragment
// 0x0000 (0x0318 - 0x0318)
class AFoxProjectile_RocketFragment : public AFoxProjectile_RocketFragmentBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108496 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_RocketFragment::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxProjectile_FragmentingRocket
// 0x0000 (0x0348 - 0x0348)
class AFoxProjectile_FragmentingRocket : public AFoxProjectile_RocketBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108498 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_FragmentingRocket::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxProjectile_LauncherHEGrenade
// 0x0000 (0x030C - 0x030C)
class AFoxProjectile_LauncherHEGrenade : public AFoxProjectile_BounceGrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108505 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_LauncherHEGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_AirStrike
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_AirStrike : public AFoxWeaponAttachment_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108520 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_AirStrike::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_DeployableTurret
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_DeployableTurret : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108538 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_DeployableTurret::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_FlameThrower
// 0x0000 (0x073C - 0x073C)
class AFoxWeaponAttachment_FlameThrower : public AFoxWeaponAttachment_FlameThrowerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108553 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_FlameThrower::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_GrenadeLauncher
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_GrenadeLauncher : public AFoxWeaponAttachment_LauncherBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108566 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_GrenadeLauncher::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeapon_HardSuitTargeter
// 0x0000 (0x0CF4 - 0x0CF4)
class AFoxWeapon_HardSuitTargeter : public AFoxWeapon_HardSuitTargeterBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108574 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_HardSuitTargeter::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_HardSuitTargeter
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_HardSuitTargeter : public AFoxWeaponAttachment_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108594 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_HardSuitTargeter::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_MiniGun
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_MiniGun : public AFoxWeaponAttachment_AutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108618 ];

		return pClassPointer;
	};

	class UFoxPMPInfo_Decals* GetWeaponSpecificDecalData ( class UFoxPhysicalMaterialProperty* PMP_Info, unsigned char FiringMode );
	class UAkEvent* GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
};

UClass* AFoxWeaponAttachment_MiniGun::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponTracer_MiniGun
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_MiniGun : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108622 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_MiniGun::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_RailGun
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_RailGun : public AFoxWeaponAttachment_SemiAutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108631 ];

		return pClassPointer;
	};

	class UFoxPMPInfo_Decals* GetWeaponSpecificDecalData ( class UFoxPhysicalMaterialProperty* PMP_Info, unsigned char FiringMode );
	class UAkEvent* GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
};

UClass* AFoxWeaponAttachment_RailGun::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponTracer_RailGun
// 0x0000 (0x0250 - 0x0250)
class AFoxWeaponTracer_RailGun : public AFoxProjectile_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108635 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponTracer_RailGun::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_RocketLauncher
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_RocketLauncher : public AFoxWeaponAttachment_LauncherBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108645 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_RocketLauncher::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAttachment_RocketLauncher_AV
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_RocketLauncher_AV : public AFoxWeaponAttachment_LauncherBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108658 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_RocketLauncher_AV::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponAmmo_Projectile_AVRocket
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Projectile_AVRocket : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108663 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Projectile_AVRocket::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponScope_AVRocketLauncher
// 0x0000 (0x0278 - 0x0278)
class UFoxWeaponScope_AVRocketLauncher : public UFoxWeaponScope_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108755 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponScope_AVRocketLauncher::pClassPointer = NULL;

// Class FoxGameContent_WPNC.FoxWeaponScope_RocketLauncher
// 0x0000 (0x0278 - 0x0278)
class UFoxWeaponScope_RocketLauncher : public UFoxWeaponScope_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108760 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponScope_RocketLauncher::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif