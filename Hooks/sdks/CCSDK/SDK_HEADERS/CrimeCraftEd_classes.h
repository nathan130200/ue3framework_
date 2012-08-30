/*
#############################################################################################
# CrimeCraft (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: CrimeCraftEd_classes.h
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

// Class CrimeCraftEd.BaseRemoteControlPageScript
// 0x0050 (0x008C - 0x003C)
class UBaseRemoteControlPageScript : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x50 ];                            		// 0x003C (0x0050) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4464 ];

		return pClassPointer;
	};

};

UClass* UBaseRemoteControlPageScript::pClassPointer = NULL;

// Class CrimeCraftEd.CC_MaterialInstanceConstant
// 0x0000 (0x00CC - 0x00CC)
class UCC_MaterialInstanceConstant : public UMaterialInstanceConstant
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4466 ];

		return pClassPointer;
	};

};

UClass* UCC_MaterialInstanceConstant::pClassPointer = NULL;

// Class CrimeCraftEd.CCAbilityManagerFactory
// 0x0000 (0x0070 - 0x0070)
class UCCAbilityManagerFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4468 ];

		return pClassPointer;
	};

};

UClass* UCCAbilityManagerFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCAISoundGroupFactory
// 0x0000 (0x0070 - 0x0070)
class UCCAISoundGroupFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4470 ];

		return pClassPointer;
	};

};

UClass* UCCAISoundGroupFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCBotRosterFactory
// 0x0000 (0x0070 - 0x0070)
class UCCBotRosterFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4472 ];

		return pClassPointer;
	};

};

UClass* UCCBotRosterFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCBotVisualRosterFactory
// 0x0000 (0x0070 - 0x0070)
class UCCBotVisualRosterFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4474 ];

		return pClassPointer;
	};

};

UClass* UCCBotVisualRosterFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCChrPresetsManagerFactory
// 0x0000 (0x0070 - 0x0070)
class UCCChrPresetsManagerFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4476 ];

		return pClassPointer;
	};

};

UClass* UCCChrPresetsManagerFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCClanHallVisualDescrFactory
// 0x0000 (0x0070 - 0x0070)
class UCCClanHallVisualDescrFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4478 ];

		return pClassPointer;
	};

};

UClass* UCCClanHallVisualDescrFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCCustomizableActor
// 0x0008 (0x01C8 - 0x01C0)
class ACCCustomizableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x01C0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4480 ];

		return pClassPointer;
	};

};

UClass* ACCCustomizableActor::pClassPointer = NULL;

// Class CrimeCraftEd.CCDesignDataFactory
// 0x0000 (0x0070 - 0x0070)
class UCCDesignDataFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4482 ];

		return pClassPointer;
	};

};

UClass* UCCDesignDataFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCEditorController
// 0x002C (0x05E8 - 0x05BC)
class ACCEditorController : public AGamePlayerController
{
public:
	unsigned char                                      UnknownData00[ 0x2C ];                            		// 0x05BC (0x002C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4484 ];

		return pClassPointer;
	};

};

UClass* ACCEditorController::pClassPointer = NULL;

// Class CrimeCraftEd.CCEditorGameInfo
// 0x0000 (0x0398 - 0x0398)
class ACCEditorGameInfo : public ACCGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4486 ];

		return pClassPointer;
	};

};

UClass* ACCEditorGameInfo::pClassPointer = NULL;

// Class CrimeCraftEd.CCEditorPawn
// 0x0008 (0x0710 - 0x0708)
class ACCEditorPawn : public ACCPawn
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0708 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4488 ];

		return pClassPointer;
	};

};

UClass* ACCEditorPawn::pClassPointer = NULL;

// Class CrimeCraftEd.CCGibDynamicDiffBatcherFactory
// 0x0000 (0x0070 - 0x0070)
class UCCGibDynamicDiffBatcherFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4490 ];

		return pClassPointer;
	};

};

UClass* UCCGibDynamicDiffBatcherFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCGibPresetFactory
// 0x0000 (0x0070 - 0x0070)
class UCCGibPresetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4492 ];

		return pClassPointer;
	};

};

UClass* UCCGibPresetFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCMapRenderComponentFactory
// 0x0000 (0x0070 - 0x0070)
class UCCMapRenderComponentFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4494 ];

		return pClassPointer;
	};

};

UClass* UCCMapRenderComponentFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCMeleeInfoFactory
// 0x0000 (0x0070 - 0x0070)
class UCCMeleeInfoFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4496 ];

		return pClassPointer;
	};

};

UClass* UCCMeleeInfoFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCMotionLawStoreFactory
// 0x0000 (0x0070 - 0x0070)
class UCCMotionLawStoreFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4498 ];

		return pClassPointer;
	};

};

UClass* UCCMotionLawStoreFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCPawnPropsFactory
// 0x0000 (0x0070 - 0x0070)
class UCCPawnPropsFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4500 ];

		return pClassPointer;
	};

};

UClass* UCCPawnPropsFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCResourcesDBFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UCCResourcesDBFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4502 ];

		return pClassPointer;
	};

};

UClass* UCCResourcesDBFactoryNew::pClassPointer = NULL;

// Class CrimeCraftEd.CCSkeletalMeshDynamicDiffStoreFactory
// 0x0000 (0x0070 - 0x0070)
class UCCSkeletalMeshDynamicDiffStoreFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4504 ];

		return pClassPointer;
	};

};

UClass* UCCSkeletalMeshDynamicDiffStoreFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCSkeletalMeshGibDynamicDiffFactory
// 0x0000 (0x0070 - 0x0070)
class UCCSkeletalMeshGibDynamicDiffFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4506 ];

		return pClassPointer;
	};

};

UClass* UCCSkeletalMeshGibDynamicDiffFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCStripGirlAnimationInfoFactory
// 0x0000 (0x0070 - 0x0070)
class UCCStripGirlAnimationInfoFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4508 ];

		return pClassPointer;
	};

};

UClass* UCCStripGirlAnimationInfoFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCStripGirlDanceFactory
// 0x0000 (0x0070 - 0x0070)
class UCCStripGirlDanceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4510 ];

		return pClassPointer;
	};

};

UClass* UCCStripGirlDanceFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCViewTarget
// 0x0000 (0x0708 - 0x0708)
class ACCViewTarget : public ACCPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4512 ];

		return pClassPointer;
	};

};

UClass* ACCViewTarget::pClassPointer = NULL;

// Class CrimeCraftEd.CCVipInteractionalStripGirlDanceFactory
// 0x0000 (0x0070 - 0x0070)
class UCCVipInteractionalStripGirlDanceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4514 ];

		return pClassPointer;
	};

};

UClass* UCCVipInteractionalStripGirlDanceFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCVipStripGirlDanceFactory
// 0x0000 (0x0070 - 0x0070)
class UCCVipStripGirlDanceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4516 ];

		return pClassPointer;
	};

};

UClass* UCCVipStripGirlDanceFactory::pClassPointer = NULL;

// Class CrimeCraftEd.CCVoiceSettingsFactory
// 0x0000 (0x0070 - 0x0070)
class UCCVoiceSettingsFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4518 ];

		return pClassPointer;
	};

};

UClass* UCCVoiceSettingsFactory::pClassPointer = NULL;

// Class CrimeCraftEd.FurniturePresetsFactory
// 0x0000 (0x0070 - 0x0070)
class UFurniturePresetsFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4520 ];

		return pClassPointer;
	};

};

UClass* UFurniturePresetsFactory::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCAbilityManager
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCAbilityManager : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4522 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCAbilityManager::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCAISoundGroup
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCAISoundGroup : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4524 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCAISoundGroup::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCBotRoster
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCBotRoster : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4526 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCBotRoster::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCBotVisualRoster
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCBotVisualRoster : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4528 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCBotVisualRoster::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCChrPresetsMgr
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCChrPresetsMgr : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4530 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCChrPresetsMgr::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCClanHallVisualDescr
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCClanHallVisualDescr : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4532 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCClanHallVisualDescr::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCDesignData
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCDesignData : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4534 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCDesignData::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCGibDynamicDiffBatcher
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCGibDynamicDiffBatcher : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4536 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCGibDynamicDiffBatcher::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCGibPreset
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCGibPreset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4538 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCGibPreset::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCMapRenderComponent
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCMapRenderComponent : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4540 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCMapRenderComponent::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCMeleeInfo
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCMeleeInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4542 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCMeleeInfo::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCMotionLawStore
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCMotionLawStore : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4544 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCMotionLawStore::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCPawnProps
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCPawnProps : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4546 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCPawnProps::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCResourcesDB
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCResourcesDB : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4548 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCResourcesDB::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCSkeletalMeshDynamicDiffStore
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCSkeletalMeshDynamicDiffStore : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4550 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCSkeletalMeshDynamicDiffStore::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCSkeletalMeshGibDynamicDiff
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCSkeletalMeshGibDynamicDiff : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4552 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCSkeletalMeshGibDynamicDiff::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCStripGirlAnimationInfo
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCStripGirlAnimationInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4554 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCStripGirlAnimationInfo::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCStripGirlDance
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCStripGirlDance : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4556 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCStripGirlDance::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCVipInteractionalStripGirlDance
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCVipInteractionalStripGirlDance : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4558 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCVipInteractionalStripGirlDance::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCVipStripGirlDance
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCVipStripGirlDance : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4560 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCVipStripGirlDance::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_CCVoiceSettings
// 0x0000 (0x0058 - 0x0058)
class UGBT_CCVoiceSettings : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4562 ];

		return pClassPointer;
	};

};

UClass* UGBT_CCVoiceSettings::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_FurniturePresets
// 0x0000 (0x0058 - 0x0058)
class UGBT_FurniturePresets : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4564 ];

		return pClassPointer;
	};

};

UClass* UGBT_FurniturePresets::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_Tutorial
// 0x0000 (0x0058 - 0x0058)
class UGBT_Tutorial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4566 ];

		return pClassPointer;
	};

};

UClass* UGBT_Tutorial::pClassPointer = NULL;

// Class CrimeCraftEd.GBT_TutorialSystem
// 0x0000 (0x0058 - 0x0058)
class UGBT_TutorialSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4568 ];

		return pClassPointer;
	};

};

UClass* UGBT_TutorialSystem::pClassPointer = NULL;

// Class CrimeCraftEd.IRemoteControlPage
// 0x0000 (0x003C - 0x003C)
class UIRemoteControlPage : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4570 ];

		return pClassPointer;
	};

};

UClass* UIRemoteControlPage::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_AbilityEditor
// 0x0058 (0x00E4 - 0x008C)
class URCPS_AbilityEditor : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0x58 ];                            		// 0x008C (0x0058) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4572 ];

		return pClassPointer;
	};

};

UClass* URCPS_AbilityEditor::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_Ad
// 0x0004 (0x0090 - 0x008C)
class URCPS_Ad : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4574 ];

		return pClassPointer;
	};

};

UClass* URCPS_Ad::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_AvatarEditor
// 0x000C (0x0098 - 0x008C)
class URCPS_AvatarEditor : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x008C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4576 ];

		return pClassPointer;
	};

};

UClass* URCPS_AvatarEditor::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_CameraDescriptionsEditor
// 0x0008 (0x0094 - 0x008C)
class URCPS_CameraDescriptionsEditor : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x008C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4578 ];

		return pClassPointer;
	};

};

UClass* URCPS_CameraDescriptionsEditor::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_Character
// 0x0020 (0x00AC - 0x008C)
class URCPS_Character : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x008C (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4580 ];

		return pClassPointer;
	};

};

UClass* URCPS_Character::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_PostProcessSettingsEditor
// 0x0008 (0x0094 - 0x008C)
class URCPS_PostProcessSettingsEditor : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x008C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4582 ];

		return pClassPointer;
	};

};

UClass* URCPS_PostProcessSettingsEditor::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_StuffMtl
// 0x0048 (0x00D4 - 0x008C)
class URCPS_StuffMtl : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x008C (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4584 ];

		return pClassPointer;
	};

};

UClass* URCPS_StuffMtl::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_WeaponEditor
// 0x0008 (0x0094 - 0x008C)
class URCPS_WeaponEditor : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x008C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4586 ];

		return pClassPointer;
	};

};

UClass* URCPS_WeaponEditor::pClassPointer = NULL;

// Class CrimeCraftEd.RCPS_WeaponViewEditor
// 0x00A4 (0x0130 - 0x008C)
class URCPS_WeaponViewEditor : public UBaseRemoteControlPageScript
{
public:
	unsigned char                                      UnknownData00[ 0xA4 ];                            		// 0x008C (0x00A4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4588 ];

		return pClassPointer;
	};

};

UClass* URCPS_WeaponViewEditor::pClassPointer = NULL;

// Class CrimeCraftEd.TutorialFactory
// 0x0000 (0x0070 - 0x0070)
class UTutorialFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4590 ];

		return pClassPointer;
	};

};

UClass* UTutorialFactory::pClassPointer = NULL;

// Class CrimeCraftEd.TutorialSystemFactory
// 0x0000 (0x0070 - 0x0070)
class UTutorialSystemFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4592 ];

		return pClassPointer;
	};

};

UClass* UTutorialSystemFactory::pClassPointer = NULL;

// Class CrimeCraftEd.UIContainerThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UUIContainerThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4594 ];

		return pClassPointer;
	};

};

UClass* UUIContainerThumbnailRenderer::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif