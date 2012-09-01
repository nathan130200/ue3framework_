/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SRAssets_classes.h
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

// Class SRAssets.YWeapon_MPStone_Content
// 0x0000 (0x0CB4 - 0x0CB4)
class AYWeapon_MPStone_Content : public AYWeapon_MPStone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 132542 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_MPStone_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_MPOfficerSupply_Content
// 0x0000 (0x0CB8 - 0x0CB8)
class AYWeapon_MPOfficerSupply_Content : public AYWeapon_MPOfficerSupply
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 133078 ];

		return pClassPointer;
	};

	void ConsumeAmmo ( unsigned char FiringMode );
	class AYProj_Physical* SpawnGrenadeToDrop ( struct FVector StartLoc );
};

UClass* AYWeapon_MPOfficerSupply_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_MPOfficerBeacon_Content
// 0x0000 (0x0CB4 - 0x0CB4)
class AYWeapon_MPOfficerBeacon_Content : public AYWeapon_MPOfficerBeacon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 133679 ];

		return pClassPointer;
	};

	class AYProj_Physical* SpawnGrenadeToDrop ( struct FVector StartLoc );
};

UClass* AYWeapon_MPOfficerBeacon_Content::pClassPointer = NULL;

// Class SRAssets.YArsenalManagerMP_Content
// 0x0000 (0x0944 - 0x0944)
class AYArsenalManagerMP_Content : public AYArsenalManager_MP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 133779 ];

		return pClassPointer;
	};

	void SetupOfficerGrenades ( );
};

UClass* AYArsenalManagerMP_Content::pClassPointer = NULL;

// Class SRAssets.YProj_MPFragGrenade_Content
// 0x0000 (0x0678 - 0x0678)
class AYProj_MPFragGrenade_Content : public AYProj_MPFragGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134811 ];

		return pClassPointer;
	};

};

UClass* AYProj_MPFragGrenade_Content::pClassPointer = NULL;

// Class SRAssets.YProj_MPPercussionGrenade_Content
// 0x0000 (0x0678 - 0x0678)
class AYProj_MPPercussionGrenade_Content : public AYProj_MPPercussionGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134812 ];

		return pClassPointer;
	};

};

UClass* AYProj_MPPercussionGrenade_Content::pClassPointer = NULL;

// Class SRAssets.YProj_ProxyGrenade_Content
// 0x0000 (0x0698 - 0x0698)
class AYProj_ProxyGrenade_Content : public AYProj_ProxyGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134813 ];

		return pClassPointer;
	};

};

UClass* AYProj_ProxyGrenade_Content::pClassPointer = NULL;

// Class SRAssets.YProj_RemoteGrenade_Content
// 0x0000 (0x0684 - 0x0684)
class AYProj_RemoteGrenade_Content : public AYProj_RemoteGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134814 ];

		return pClassPointer;
	};

};

UClass* AYProj_RemoteGrenade_Content::pClassPointer = NULL;

// Class SRAssets.YProj_MPStunGrenade_Content
// 0x0000 (0x0678 - 0x0678)
class AYProj_MPStunGrenade_Content : public AYProj_Physical
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134815 ];

		return pClassPointer;
	};

};

UClass* AYProj_MPStunGrenade_Content::pClassPointer = NULL;

// Class SRAssets.YProj_MPStone_Content
// 0x0000 (0x0678 - 0x0678)
class AYProj_MPStone_Content : public AYProj_MPStone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134816 ];

		return pClassPointer;
	};

};

UClass* AYProj_MPStone_Content::pClassPointer = NULL;

// Class SRAssets.YProj_MPOfficerBeacon_Content
// 0x0000 (0x0690 - 0x0690)
class AYProj_MPOfficerBeacon_Content : public AYProj_MPOfficerBeacon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134817 ];

		return pClassPointer;
	};

};

UClass* AYProj_MPOfficerBeacon_Content::pClassPointer = NULL;

// Class SRAssets.YProj_MPOfficerSupply_Content
// 0x0000 (0x0694 - 0x0694)
class AYProj_MPOfficerSupply_Content : public AYProj_MPOfficerSupply
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134818 ];

		return pClassPointer;
	};

};

UClass* AYProj_MPOfficerSupply_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_TDIVector_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_TDIVector_Content : public AYWeapon_TDIVector
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134819 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_TDIVector_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_OTs14Groza_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_OTs14Groza_Content : public AYWeapon_OTs14Groza
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134820 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_OTs14Groza_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_MP7_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_MP7_Content : public AYWeapon_MP7
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134821 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_MP7_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_AKS74u_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_AKS74u_Content : public AYWeapon_AKS74u
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134822 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_AKS74u_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_Mossberg590A1_Content
// 0x0000 (0x0D18 - 0x0D18)
class AYWeapon_Mossberg590A1_Content : public AYWeapon_Mossberg590A1
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134823 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_Mossberg590A1_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_Glock18_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_Glock18_Content : public AYWeapon_Glock18
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134824 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_Glock18_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_SIGP220_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_SIGP220_Content : public AYWeapon_SIGP220
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134825 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_SIGP220_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_FNP45_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_FNP45_Content : public AYWeapon_FNP45
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134826 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_FNP45_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_M110SniperSystem_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_M110SniperSystem_Content : public AYWeapon_M110SniperSystem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134827 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_M110SniperSystem_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_MSG90_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_MSG90_Content : public AYWeapon_MSG90
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134828 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_MSG90_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_AK74_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_AK74_Content : public AYWeapon_AK74
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134829 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_AK74_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_AA12_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_AA12_Content : public AYWeapon_AA12
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134830 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_AA12_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_BarrettM99_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_BarrettM99_Content : public AYWeapon_BarrettM99
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134831 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_BarrettM99_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_MilkorMGL_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_MilkorMGL_Content : public AYWeapon_MilkorMGL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134832 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_MilkorMGL_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_SAW_Content
// 0x0000 (0x0CA8 - 0x0CA8)
class AYWeapon_SAW_Content : public AYWeapon_SAW
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134833 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_SAW_Content::pClassPointer = NULL;

// Class SRAssets.YGameInfo_Menu_Content
// 0x0000 (0x05E1 - 0x05E1)
class AYGameInfo_Menu_Content : public AYGameInfo_Menu
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134834 ];

		return pClassPointer;
	};

};

UClass* AYGameInfo_Menu_Content::pClassPointer = NULL;

// Class SRAssets.YPlayerController_Menu_Content
// 0x0000 (0x111C - 0x111C)
class AYPlayerController_Menu_Content : public AYPlayerController_Menu
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134836 ];

		return pClassPointer;
	};

};

UClass* AYPlayerController_Menu_Content::pClassPointer = NULL;

// Class SRAssets.YMPMenuAssetHolder
// 0x0014 (0x0074 - 0x0060)
class UYMPMenuAssetHolder : public UYContentAssetHolderBase
{
public:
	TArray< class UTexture2D* >                        m_imgClasses;                                     		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   m_ClassImages;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_PerkImages;                                     		// 0x0070 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134837 ];

		return pClassPointer;
	};

};

UClass* UYMPMenuAssetHolder::pClassPointer = NULL;

// Class SRAssets.YHUD_SP_Content
// 0x0000 (0x06D1 - 0x06D1)
class AYHUD_SP_Content : public AYHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134838 ];

		return pClassPointer;
	};

	void DrawGameHud ( float dt );
};

UClass* AYHUD_SP_Content::pClassPointer = NULL;

// Class SRAssets.YPerk_SpecopsNoPerk_Content
// 0x0000 (0x0051 - 0x0051)
class UYPerk_SpecopsNoPerk_Content : public UYPerk_SpecopsNoPerk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134875 ];

		return pClassPointer;
	};

};

UClass* UYPerk_SpecopsNoPerk_Content::pClassPointer = NULL;

// Class SRAssets.YPerk_KonradNoPerk_Content
// 0x0000 (0x0051 - 0x0051)
class UYPerk_KonradNoPerk_Content : public UYPerk_KonradNoPerk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134876 ];

		return pClassPointer;
	};

};

UClass* UYPerk_KonradNoPerk_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_Expl_C4_Content
// 0x0000 (0x0CB0 - 0x0CB0)
class AYWeapon_Expl_C4_Content : public AYWeapon_Expl_C4
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134877 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_Expl_C4_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_Expl_Stun_Content
// 0x0000 (0x0CA9 - 0x0CA9)
class AYWeapon_Expl_Stun_Content : public AYWeapon_Expl_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134878 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_Expl_Stun_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_Expl_Grenade_Content
// 0x0000 (0x0CA9 - 0x0CA9)
class AYWeapon_Expl_Grenade_Content : public AYWeapon_Expl_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134879 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_Expl_Grenade_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_Expl_Mine_Content
// 0x0000 (0x0CB4 - 0x0CB4)
class AYWeapon_Expl_Mine_Content : public AYWeapon_Expl_Mine
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134880 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_Expl_Mine_Content::pClassPointer = NULL;

// Class SRAssets.YWeapon_Expl_Percussion_Content
// 0x0000 (0x0CA9 - 0x0CA9)
class AYWeapon_Expl_Percussion_Content : public AYWeapon_Expl_Percussion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134881 ];

		return pClassPointer;
	};

};

UClass* AYWeapon_Expl_Percussion_Content::pClassPointer = NULL;

// Class SRAssets.YPawn_MPKonradNoPerk_Content
// 0x0000 (0x28A4 - 0x28A4)
class AYPawn_MPKonradNoPerk_Content : public AYPawn_MPKonradNoPerk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134882 ];

		return pClassPointer;
	};

};

UClass* AYPawn_MPKonradNoPerk_Content::pClassPointer = NULL;

// Class SRAssets.YPawn_MPSpecopsNoPerk_Content
// 0x0000 (0x28A4 - 0x28A4)
class AYPawn_MPSpecopsNoPerk_Content : public AYPawn_MPSpecopsNoPerk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134896 ];

		return pClassPointer;
	};

};

UClass* AYPawn_MPSpecopsNoPerk_Content::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif