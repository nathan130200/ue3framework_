/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISceneManager.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:1
 *	Structs:1
 *	Properties:6
 *	Functions:5
 *
 *******************************************************************************/
class TgUISceneManager extends Object
	native;

const TIME_BETWEEN_SCENE_TICKS = 0.05;

enum eSceneDriverPrecacheType
{
	Precache_None,
	Precache_Driver,
	Precache_DriverAndScene,
	Precache_MAX
};

struct native sSceneDriverInfo
{
	var Class m_DriverClass;
	var init string m_SceneResource;
	var name m_SpecificName;
	var bool m_bCacheDriver;
	var TgUISceneDriver m_DriverInst;
	var int m_GCFlags;
	var native Pointer m_CachedAppPtr;

	structdefaultproperties
	{
		m_DriverClass=none
		m_SceneResource=""
		m_SpecificName=None
		m_bCacheDriver=false
		m_DriverInst=none
		m_GCFlags=0
	}
};

var TgGameViewportClient m_ViewportClient;
var TgHUD m_HUDParent;
var UIInteraction m_UIInteraction;
var LocalPlayer m_OwnerPlayer;
var bool m_SceneMouseState;
var private native const transient map<0, 0> m_SceneDriverMap;

native function TgUISceneDriver OpenSceneDriver(name DriverClass);
native function TgUISceneDriver GetSceneDriver(name DriverClass, bool InitOnDemand);
native function name GetSceneDriverNameByResource(string ResourceName);
native function bool ReleaseSceneDriverIfNotOpened(TgUISceneDriver SceneDriver);
native function TickOpenScenes();
