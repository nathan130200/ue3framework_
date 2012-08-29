/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgAllianceData.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:13
 *	Functions:9
 *
 *******************************************************************************/
class TgAllianceData extends Object
	native;

const TG_ALLIANCE_REQUEST_THROTTLE_TIMER = 5.0f;

struct native sAllianceMemberInfo
{
	var init string sMemberName;
	var string sLeaderName;
	var int nMemberAgencyId;
	var int nMemberCount;
	var int nTerritoryCount;

	structdefaultproperties
	{
		sMemberName=""
		sLeaderName=""
		nMemberAgencyId=-1
		nMemberCount=0
		nTerritoryCount=0
	}
};

var string m_Name;
var string m_MOTD;
var string m_Information;
var string m_Abbreviation;
var int m_nAllianceId;
var int m_nOwnerAgencyId;
var string m_OwnerAgencyName;
var int m_nNumMembers;
var bool m_bNoAlliance;
var init array<init sAllianceMemberInfo> m_MemberListInfo;
var float m_fLastDataRequestTime;
var int m_PendingUpdateFlags;
var Double m_dtCreated;

native function bool RequestAllianceInfo(int Flags);
native noexport function ClearData(optional bool bGeneralData, optional bool bMemberData)
{
	bGeneralData = true;
	bMemberData = true;	
}

native function Tick(float DeltaSeconds);
native function sAllianceMemberInfo GetMemberInfo(int nAgencyId);
native function Create(string sName);
native function Invite(string sPlayerName);
native function Remove(int nAgencyId);
native function Disband();
event sAllianceMemberInfo GetDefaultMemberInfo()
{
	local sAllianceMemberInfo sInfo;

	return sInfo;
}

defaultproperties
{
	m_bNoAlliance=true
	m_fLastDataRequestTime=-30000.00
	m_PendingUpdateFlags=1
}