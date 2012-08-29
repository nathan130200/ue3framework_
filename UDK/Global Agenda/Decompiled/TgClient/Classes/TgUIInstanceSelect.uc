/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIInstanceSelect.uc
 * 
 * Stats:
 *	Structs:1
 *	Properties:8
 *	Functions:12
 *
 *******************************************************************************/
class TgUIInstanceSelect extends TgUISceneDriver
	native;

struct native sInstanceStruct
{
	var UIButton m_InstanceMain;
	var UIImage m_InstanceCheck;
	var UILabel m_InstanceName;
	var UILabel m_InstancePop;
	var UIImage m_InstanceHighlight;
	var int m_InstanceID;

	structdefaultproperties
	{
		m_InstanceMain=none
		m_InstanceCheck=none
		m_InstanceName=none
		m_InstancePop=none
		m_InstanceHighlight=none
		m_InstanceID=0
	}
};

var TgUIScrollList m_InstanceScrollFrame;
var init array<init sInstanceStruct> m_InstanceList;
var int m_nMapGameId;
var int m_nSelectedItem;
var UIButton m_ChangeButton;
var UIButton m_CloseButton;
var TgDataInterface m_InstanceDataInterface;
var TgDataSet m_InstanceDataSet;

native function PostInitSceneDriver();
native function FixupTgUIScene();
native function PopulateInstanceData();
native function ResizeInstanceWidgets(int newSize);
native function SelectInstanceItem(int ItemIndex);
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnChangeButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSelectInstanceDelegate(const out InputEventParameters EventParms);
native function GetInstanceListCallback(int eType);
event SetSelectInstanceDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnSelectInstanceDelegate;
	}
}

event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;	
	@NULL(201327872)
	@NULL(-54271)
	OnCloseButtonDelegate != ;
	@NULL(-54271)
	OnChangeButtonDelegate != @NULL(34079232);
}
