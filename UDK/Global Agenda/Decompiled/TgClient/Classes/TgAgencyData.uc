/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgAgencyData.uc
 * 
 * Stats:
 *	Constants:4
 *	Enums:2
 *	Structs:2
 *	Properties:25
 *	Functions:29
 *
 *******************************************************************************/
class TgAgencyData extends Object
	native
	config(UI);

const AGENCYFILTER_OFFLINE = 0x1;
const AGENCYFILTER_ONLINE = 0x2;
const TG_AGENCY_REQUEST_THROTTLE_TIMER = 2.0f;
const MAX_RANK_NAME_LENGTH = 25;

enum TG_AGENCY_STATUS
{
	AGENCY_MEMBER_ONLINE,
	AGENCY_MEMBER_OFFLINE,
	AGENCY_MEMBER_MAX
};

enum TG_AGENCY_SORT
{
	AGENCY_SORT_NAME,
	AGENCY_SORT_NAME_REVERSED,
	AGENCY_SORT_RANK,
	AGENCY_SORT_RANK_REVERSED,
	AGENCY_SORT_STATUS,
	AGENCY_SORT_STATUS_REVERSED,
	AGENCY_SORT_LEVEL,
	AGENCY_SORT_LEVEL_REVERSED,
	AGENCY_SORT_MAX
};

struct native sAgencyMemberInfo
{
	var init string sMemberName;
	var int nMemberRankId;
	var int nMemberRankLevel;
	var TgAgencyData.TG_AGENCY_STATUS eMemberStatus;
	var int nMemberLocationId;
	var init string sMemberLocationString;
	var int nMemberPlayerId;
	var int nMemberLevel;
	var int nMemberProfileId;
	var init string sPublicComment;
	var init string sOfficerComment;

	structdefaultproperties
	{
		sMemberName=""
		nMemberRankId=-1
		nMemberRankLevel=-1
		eMemberStatus=AGENCY_MEMBER_OFFLINE
		nMemberLocationId=-1
		sMemberLocationString=""
		nMemberPlayerId=-1
		nMemberLevel=-1
		nMemberProfileId=-1
		sPublicComment=""
		sOfficerComment=""
	}
};

struct native sAgencyRankData
{
	var int nRankId;
	var int nRankLevel;
	var int nRankPermissions;
	var init string sRankName;

	structdefaultproperties
	{
		nRankId=-1
		nRankLevel=-1
		nRankPermissions=0
		sRankName="Bad Rank Data"
	}
};

var init array<init sAgencyMemberInfo> m_MemberListInfo;
var init array<init sAgencyMemberInfo> m_MemberListInfoSorted;
var init array<init sAgencyRankData> m_RankListData;
var TgAgencyData.TG_AGENCY_SORT m_CurrentSortType;
var globalconfig int m_CurrentFilter;
var int m_SortedFilter;
var native Pointer m_HexMapData;
var native Pointer m_InventoryData;
var string m_Name;
var string m_MOTD;
var string m_Information;
var string m_Abbreviation;
var int m_nLogoResId;
var int m_nCurrency;
var int m_nSiteId;
var float m_fTaxPercent;
var int m_nAgencyId;
var int m_nNumMembers;
var int m_nLocalPlayerId;
var bool m_bNoAgency;
var bool m_bRecruiting;
var bool m_bRecruitingNonSub;
var string m_sRecruitingText;
var float m_fLastDataRequestTime;
var int m_PendingUpdateFlags;

native function InitAgencyData();
native function array<sAgencyMemberInfo> GetSortedInfoArray();
native function bool RequestAgencyInfo(int Flags);
native function ClearData(int rosterflags);
native function sAgencyRankData GetRankData(int nRank);
native function sAgencyRankData GetLocalRankData();
native function sAgencyMemberInfo GetMemberInfo(int nPlayerId);
native function sAgencyMemberInfo GetLocalPlayerInfo();
native function bool LocalPlayerIsLeader();
native function bool LocalPlayerHasPermission(int flag);
native function int GetNumMembersOfRank(int nRankId);
native function SetFilter(int nNewFilter);
native function bool CheckFiltered(sAgencyMemberInfo Info, int nFilter);
native function UpdateRecruiting(string sText, bool bRecruiting, bool bSubOnly);
native function Promote(int nPlayerId);
native function Demote(int nPlayerId);
native function Remove(int nPlayerId);
native function Invite(string sPlayerName);
native function Create(string sAgencyName, LinearColor AgencyColor);
native function Disband();
native function TransferLeader(string sPlayerName);
native function SetMOTD(string sMOTD);
native function SetPublicComment(int nPlayerId, string sNote);
native function SetOfficerComment(int nPlayerId, string sNote);
native function SetDescription(string sDescription);
native function SetTax(float fTax);
native function Tick(float DeltaTime);
event sAgencyMemberInfo GetDefaultMemberInfo()
{
	local sAgencyMemberInfo sInfo;

	return sInfo;
}

event sAgencyRankData GetDefaultRankData()
{
	local sAgencyRankData sInfo;

	return sInfo;
}

defaultproperties
{
	m_nLocalPlayerId=-1
	m_bNoAgency=true
	m_fLastDataRequestTime=-30000.00
	m_PendingUpdateFlags=1
}