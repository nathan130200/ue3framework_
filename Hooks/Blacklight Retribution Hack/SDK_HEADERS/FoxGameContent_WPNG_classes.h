/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNG_classes.h
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

// Class FoxGameContent_WPNG.FoxCameraLensEffect_EMPContent
// 0x0000 (0x0224 - 0x0224)
class AFoxCameraLensEffect_EMPContent : public AFoxCameraLensEffect_EMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113665 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_EMPContent::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxCameraLensEffect_HRVJammer
// 0x0000 (0x0204 - 0x0204)
class AFoxCameraLensEffect_HRVJammer : public AFoxCameraLensEffect_HRVJammerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113668 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_HRVJammer::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxCameraLensEffect_StunMineContent
// 0x0000 (0x020C - 0x020C)
class AFoxCameraLensEffect_StunMineContent : public AFoxCameraLensEffect_StunMine
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113673 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_StunMineContent::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxCameraLensEffect_ToxicGrenade
// 0x0003 (0x021C - 0x0219)
class AFoxCameraLensEffect_ToxicGrenade : public AFoxCameraLensEffect_Fading
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113678 ];

		return pClassPointer;
	};

};

UClass* AFoxCameraLensEffect_ToxicGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_BarricadeBash
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_BarricadeBash : public UFoxDamageType_GunMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113681 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_BarricadeBash::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_Barricade
// 0x0000 (0x0C64 - 0x0C64)
class AFoxWeapon_Barricade : public AFoxWeapon_BarricadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113683 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Barricade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_CombatKnifeMelee
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_CombatKnifeMelee : public UFoxDamageType_GunMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113686 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_CombatKnifeMelee::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_CombatKnife
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_CombatKnife : public AFoxWeapon_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113688 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_CombatKnife::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Explosion_Digi
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Explosion_Digi : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113691 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Explosion_Digi::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_SmokeGrenade
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_SmokeGrenade : public AFoxWeapon_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113693 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_SmokeGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Explosion_Electro
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Explosion_Electro : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113696 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Explosion_Electro::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_ElectroGrenade
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_ElectroGrenade : public AFoxWeapon_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113698 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_ElectroGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Explosion_Flash
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Explosion_Flash : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113701 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Explosion_Flash::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_FlashGrenade
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_FlashGrenade : public AFoxWeapon_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113703 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_FlashGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Explosion_Frag
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Explosion_Frag : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113706 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Explosion_Frag::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_FragGrenade
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_FragGrenade : public AFoxWeapon_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113708 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_FragGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Explosion_HEFrag
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_Explosion_HEFrag : public UFoxDamageType_Explosion_Frag
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113711 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Explosion_HEFrag::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_HEFragGrenade
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_HEFragGrenade : public AFoxWeapon_FragGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113713 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_HEFragGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Hammer
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Hammer : public UFoxDamageType_GunMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113716 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Hammer::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_Hammer
// 0x0000 (0x0D5C - 0x0D5C)
class AFoxWeapon_Hammer : public AFoxWeapon_SingleActionMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113718 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Hammer::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_HealGun
// 0x0000 (0x011C - 0x011C)
class UFoxDamageType_HealGun : public UFoxDamageType_HOT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113721 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_HealGun::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_HealGun
// 0x0000 (0x0C20 - 0x0C20)
class AFoxWeapon_HealGun : public AFoxWeapon_HealBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113723 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_HealGun::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Machete
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_Machete : public UFoxDamageType_GunMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113726 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Machete::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_Machete
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_Machete : public AFoxWeapon_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113728 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Machete::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Poison
// 0x0000 (0x011C - 0x011C)
class UFoxDamageType_Poison : public UFoxDamageType_Corrosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113731 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Poison::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_Splash_Poison
// 0x0000 (0x00EC - 0x00EC)
class UFoxDamageType_Splash_Poison : public UFoxDamageType_Splash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113733 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_Splash_Poison::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_ProximityMine
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_ProximityMine : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113736 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_ProximityMine::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_ProximityMine
// 0x0000 (0x0D28 - 0x0D28)
class AFoxWeapon_ProximityMine : public AFoxWeapon_MineBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113738 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_ProximityMine::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_RepairGun_Attack
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_RepairGun_Attack : public UFoxDamageType_Repair
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113741 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_RepairGun_Attack::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_RepairGun
// 0x0000 (0x0C7C - 0x0C7C)
class AFoxWeapon_RepairGun : public AFoxWeapon_RepairGunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113743 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_RepairGun::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_RepairGun_Heal
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_RepairGun_Heal : public UFoxDamageType_Repair
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113746 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_RepairGun_Heal::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_SonicKnifeMelee
// 0x0000 (0x00E0 - 0x00E0)
class UFoxDamageType_SonicKnifeMelee : public UFoxDamageType_GunMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113750 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_SonicKnifeMelee::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_SonicKnife
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_SonicKnife : public AFoxWeapon_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113752 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_SonicKnife::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_StunMine
// 0x0000 (0x00E4 - 0x00E4)
class UFoxDamageType_StunMine : public UFoxDamageType_Explosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113758 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_StunMine::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_StunMine
// 0x0000 (0x0D28 - 0x0D28)
class AFoxWeapon_StunMine : public AFoxWeapon_StunMineBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113760 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_StunMine::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDamageType_ToxicGrenade
// 0x0000 (0x011C - 0x011C)
class UFoxDamageType_ToxicGrenade : public UFoxDamageType_Corrosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113763 ];

		return pClassPointer;
	};

};

UClass* UFoxDamageType_ToxicGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_ToxicGrenade
// 0x0000 (0x0D24 - 0x0D24)
class AFoxWeapon_ToxicGrenade : public AFoxWeapon_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113765 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_ToxicGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxDeployable_Barricade
// 0x0000 (0x0214 - 0x0214)
class AFoxDeployable_Barricade : public AFoxDeployable_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113768 ];

		return pClassPointer;
	};

};

UClass* AFoxDeployable_Barricade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_AmmoPack
// 0x0000 (0x0378 - 0x0378)
class AFoxProjectile_AmmoPack : public AFoxProjectile_AmmoPackBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113772 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_AmmoPack::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_FlashGrenade
// 0x0000 (0x0310 - 0x0310)
class AFoxProjectile_FlashGrenade : public AFoxProjectile_FlashGrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113783 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_FlashGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_ElectroGrenade
// 0x0000 (0x0310 - 0x0310)
class AFoxProjectile_ElectroGrenade : public AFoxProjectile_FlashGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113791 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_ElectroGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_FragGrenade
// 0x0000 (0x0308 - 0x0308)
class AFoxProjectile_FragGrenade : public AFoxProjectile_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113798 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_FragGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_HEFragGrenade
// 0x0000 (0x0308 - 0x0308)
class AFoxProjectile_HEFragGrenade : public AFoxProjectile_FragGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113804 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_HEFragGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_HRVDecoy
// 0x0000 (0x03A8 - 0x03A8)
class AFoxProjectile_HRVDecoy : public AFoxProjectile_DecoyBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113811 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_HRVDecoy::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_HRVJammer
// 0x0000 (0x0378 - 0x0378)
class AFoxProjectile_HRVJammer : public AFoxProjectile_HRVJammerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113828 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_HRVJammer::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_ProximityMine
// 0x0000 (0x036C - 0x036C)
class AFoxProjectile_ProximityMine : public AFoxProjectile_ProximityMineBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113841 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_ProximityMine::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_SmokeGrenade
// 0x0000 (0x0310 - 0x0310)
class AFoxProjectile_SmokeGrenade : public AFoxProjectile_SmokeGrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113851 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_SmokeGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxSmokeLensFlare_GearContent
// 0x0000 (0x01DC - 0x01DC)
class AFoxSmokeLensFlare_GearContent : public AFoxSmokeLensFlare
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113857 ];

		return pClassPointer;
	};

};

UClass* AFoxSmokeLensFlare_GearContent::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_StunMine
// 0x0000 (0x0374 - 0x0374)
class AFoxProjectile_StunMine : public AFoxProjectile_StunMineBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113859 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_StunMine::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_Syringe
// 0x0000 (0x0308 - 0x0308)
class AFoxProjectile_Syringe : public AFoxProjectile_SyringeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113870 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_Syringe::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxProjectile_ToxicGrenade
// 0x0000 (0x031C - 0x031C)
class AFoxProjectile_ToxicGrenade : public AFoxProjectile_CloudBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113876 ];

		return pClassPointer;
	};

};

UClass* AFoxProjectile_ToxicGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_AmmoPack
// 0x0000 (0x0D28 - 0x0D28)
class AFoxWeapon_AmmoPack : public AFoxWeapon_AmmoPackBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113886 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_AmmoPack::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_AmmoPack
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_AmmoPack : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113892 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_AmmoPack::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_Barricade
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Barricade : public AFoxWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113906 ];

		return pClassPointer;
	};

	void ActivateEmissive ( );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void StartReloadAnim ( unsigned char FireMode );
};

UClass* AFoxWeaponAttachment_Barricade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_Cloak
// 0x0000 (0x0D2C - 0x0D2C)
class AFoxWeapon_Cloak : public AFoxWeapon_CloakBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113912 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Cloak::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_Cloak
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Cloak : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113918 ];

		return pClassPointer;
	};

	void StartFiringSound ( unsigned char FireModeNum );
};

UClass* AFoxWeaponAttachment_Cloak::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_CombatKnife
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_CombatKnife : public AFoxWeaponAttachment_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113933 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_CombatKnife::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_FlashGrenade
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_FlashGrenade : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113949 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_FlashGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_ElectroGrenade
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_ElectroGrenade : public AFoxWeaponAttachment_FlashGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113948 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_ElectroGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_FragGrenade
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_FragGrenade : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113974 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_FragGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_Hammer
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Hammer : public AFoxWeaponAttachment_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113983 ];

		return pClassPointer;
	};

	class UAkEvent* GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
};

UClass* AFoxWeaponAttachment_Hammer::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_HealGun
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_HealGun : public AFoxWeaponAttachment_SemiAutomaticBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113995 ];

		return pClassPointer;
	};

	class UAkEvent* GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	bool SkipImpactEffects ( class AActor* HitActor );
};

UClass* AFoxWeaponAttachment_HealGun::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_HEFragGrenade
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_HEFragGrenade : public AFoxWeaponAttachment_FragGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114010 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_HEFragGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_HRVDecoy
// 0x0000 (0x0D28 - 0x0D28)
class AFoxWeapon_HRVDecoy : public AFoxWeapon_MineBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114014 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_HRVDecoy::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_HRVDecoy
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_HRVDecoy : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114020 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_HRVDecoy::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_HRVJammer
// 0x0000 (0x0D28 - 0x0D28)
class AFoxWeapon_HRVJammer : public AFoxWeapon_MineBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114026 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_HRVJammer::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_HRVJammer
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_HRVJammer : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114032 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_HRVJammer::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_Machete
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Machete : public AFoxWeaponAttachment_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114041 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_Machete::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_ProximityMine
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_ProximityMine : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114050 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_ProximityMine::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_RepairGun
// 0x0068 (0x0768 - 0x0700)
class AFoxWeaponAttachment_RepairGun : public AFoxWeaponAttachment_AutomaticBase
{
public:
	struct FWeaponAnimSet                              AN_StartFire;                                     		// 0x0700 (0x0034) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FWeaponAnimSet                              AN_EndFire;                                       		// 0x0734 (0x0034) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114061 ];

		return pClassPointer;
	};

	class UAkEvent* GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode );
	bool SkipImpactEffects ( class AActor* HitActor );
};

UClass* AFoxWeaponAttachment_RepairGun::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_SmokeGrenade
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_SmokeGrenade : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114078 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_SmokeGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_SonicKnife
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_SonicKnife : public AFoxWeaponAttachment_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114087 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_SonicKnife::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_StunMine
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_StunMine : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114096 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_StunMine::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeapon_Syringe
// 0x0000 (0x0D38 - 0x0D38)
class AFoxWeapon_Syringe : public AFoxWeapon_SyringeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114100 ];

		return pClassPointer;
	};

};

UClass* AFoxWeapon_Syringe::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_Syringe
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_Syringe : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114106 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_Syringe::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAttachment_ToxicGrenade
// 0x0000 (0x0700 - 0x0700)
class AFoxWeaponAttachment_ToxicGrenade : public AFoxWeaponAttachment_GrenadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114121 ];

		return pClassPointer;
	};

};

UClass* AFoxWeaponAttachment_ToxicGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAmmo_Projectile_DigiGrenade
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Projectile_DigiGrenade : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114125 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Projectile_DigiGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAmmo_Projectile_EMPGrenade
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Projectile_EMPGrenade : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114127 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Projectile_EMPGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAmmo_Projectile_HEGrenade
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Projectile_HEGrenade : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114129 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Projectile_HEGrenade::pClassPointer = NULL;

// Class FoxGameContent_WPNG.FoxWeaponAmmo_Projectile_ToxicGrenade
// 0x0000 (0x0074 - 0x0074)
class UFoxWeaponAmmo_Projectile_ToxicGrenade : public UFoxWeaponAmmo_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114131 ];

		return pClassPointer;
	};

};

UClass* UFoxWeaponAmmo_Projectile_ToxicGrenade::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif