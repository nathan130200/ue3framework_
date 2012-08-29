/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgLoginHUD.uc
 * 
 * Stats:
 *	Properties:11
 *	Functions:23
 *
 *******************************************************************************/
class TgLoginHUD extends TgHUD
	hidecategories(Navigation)
	native
	config(Game)
	transient;

var TgUISceneManager m_UISceneManager;
var bool m_bCreateCharacterTriggered;
var bool m_bPlayTutorial;
var bool m_bTutorialMoviePlayed;
var int m_nClassToCreate;
var name m_nmPreplayMovie;
var TgDataSet c_DataSet;
var TgDataInterface c_DataInterface;
var InterpActor m_CachedEarthModel;
var TgUILoginMenu m_LoginMenu;
var int m_nNumCharacters;

native function AddPlayerCharacterCallback(int eType);
native function TgUIMapTransition GetMapTransition();
native function GetCharMorphSettings(out CharacterInfoStruct CharInfo);
native function TgSkeletalMeshActor_CharacterBuilder GetCharacterBuilderSkelMeshActor();
native function InterpActor GetEarthModel();
native function InitializeTgUIScenes();
native function LoadLoginMenu();
native noexport function LoadCharacterSelectMenu(optional bool bError)
{
	bError = false;
}

native function SetMatineeCamToLogin(bool bSetToLogin);
simulated function PostBeginPlay()
{
	super(HUD).PostBeginPlay();
	InitializeTgUIScenes();
	InitializeDataInterface();
}

function OpenMenu()
{
	local TgLoginInfo tgli;
	local TgLoginPlayerController PC;

	PC = TgLoginPlayerController(Owner);
	tgli = TgLoginInfo(WorldInfo.Game);
	// End:0x8c Loop:False
	if(PC != none && (tgli != none))
	{
		// End:0x82 Loop:False
		if(tgli.IsLoggedIn() && (!tgli.HasSelectedCharacter()))
		{
			SetMatineeCamToLogin(false);
		}
		// End:0x8c
		else
		{
			LoadLoginMenu();
		}
	}
}

function InitializeDataInterface()
{
	c_DataSet = new class'TgDataSet';
	c_DataSet.RegisterForEvents(self, 'AddPlayerCharacterCallback');
	c_DataInterface = new class'TgDataInterface';
}

native function NativeTick(float DeltaTime);
event Tick(float DeltaTime)
{
	super(Actor).Tick(DeltaTime);
	NativeTick(DeltaTime);
}

native function TgUICreateCharA LoadCharCreateMenu();
native function TgUICustomHeadMenu LoadCustomHeadMenu();
native function TgUIClassSelectScene LoadClassSelect();
native function ConditionalSetTutorialFlag();
event CreateCharacter()
{
	local TgUICustomHeadMenu chmenu;
	local bool bInvalid;
	local CharacterInfoStruct charInfoStruct;

	m_bCreateCharacterTriggered = false;
	bInvalid = false;
	chmenu = TgUICustomHeadMenu(m_UISceneManager.GetSceneDriver('TgUICustomHeadMenu', false));
	// End:0x46 Loop:False
	if(chmenu == none)
	{
		return;
	}
	// End:0x5d Loop:False
	if(!chmenu.m_bLoaded)
	{
		return;
	}
	charInfoStruct.nGenderTypeId = chmenu.m_nCurrentGender;
	charInfoStruct.nHeadAsmId = ((charInfoStruct.nGenderTypeId == 852) ? 1593 : 1605);
	charInfoStruct.nHairAsmId = chmenu.m_nHairSelection;
	charInfoStruct.nProfileId = m_nClassToCreate;
	GetCharMorphSettings(charInfoStruct);
	ConditionalSetTutorialFlag();
	// End:0x142 Loop:False
	if(!bInvalid)
	{
		chmenu.SetCreateHeadVerifyState(5);
		c_DataInterface.AddCharacter(charInfoStruct, c_DataSet);
	}
}

event SendCharCreateErrorCode(int ErrorCode)
{
	local TgUICustomHeadMenu chmenu;

	chmenu = TgUICustomHeadMenu(m_UISceneManager.GetSceneDriver('TgUICustomHeadMenu', true));
	// End:0x36 Loop:False
	if(chmenu == none)
	{
		return;
	}
	// End:0x5a Loop:False
	if(ErrorCode == 0)
	{
		chmenu.SetCreateHeadVerifyState(7);
	}
	// End:0x70
	else
	{
		chmenu.SetCreateHeadVerifyState(6);
	}
}

event BackToLogin()
{
	local TgUICreateCharA ccmenu;
	local TgUICustomHeadMenu chmenu;
	local TgUICharacterSelectScene csmenu;
	local TgUIMapTransition mtmenu;

	ccmenu = TgUICreateCharA(m_UISceneManager.GetSceneDriver('TgUICreateCharA', false));
	chmenu = TgUICustomHeadMenu(m_UISceneManager.GetSceneDriver('TgUICustomHeadMenu', false));
	csmenu = TgUICharacterSelectScene(m_UISceneManager.GetSceneDriver('TgUICharacterSelectScene', false));
	mtmenu = TgUIMapTransition(m_UISceneManager.GetSceneDriver('TgUIMapTransition', false));
	// End:0xd4 Loop:False
	if(ccmenu != none && (ccmenu.m_bLoaded))
	{
		ccmenu.CloseTgUIScene();
	}
	// End:0x104 Loop:False
	if(chmenu != none && (chmenu.m_bLoaded))
	{
		chmenu.CloseTgUIScene();
	}
	// End:0x134 Loop:False
	if(csmenu != none && (csmenu.m_bLoaded))
	{
		csmenu.CloseTgUIScene();
	}
	// End:0x164 Loop:False
	if(mtmenu != none && (mtmenu.m_bLoaded))
	{
		mtmenu.CloseTgUIScene();
	}
	LoadLoginMenu();
}

native function BrowseToDevNotes();
exec function ShowDevNotes()
{
	BrowseToDevNotes();
}
