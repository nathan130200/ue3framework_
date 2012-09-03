/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPW_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct OnlineSubsystemPW.OnlineSubsystemPW.InviteInfo
// 0x000C
struct FInviteInfo
{
	struct FUniqueNetId                                InviterId;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TimeSinceInvite;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemPW.OnlineSubsystemPW.StatOperation
// 0x000D
struct FStatOperation
{
	struct FString                                     StatName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      OverrideType;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemPW.OnlineSubsystemPW.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AchievementName;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                ViewId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ProgressCount;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxProgress;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoUnlock : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemPW.OnlineSubsystemPW.RegionInfo
// 0x0080
struct FRegionInfo
{
	struct FString                                     RegionName;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RegionID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     AuthDNS;                                          		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AuthPort;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     ItemDNS;                                          		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ItemPort;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     SuperDNS;                                         		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                SuperPort;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     SocialDNS;                                        		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                SocialPort;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     VoipDNS;                                          		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ExtVoipDNS;                                       		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                VoipPort;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FString                                     LogDNS;                                           		// 0x006C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                LogPort;                                          		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                PingPort;                                         		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemPW.OnlineSubsystemPW.RegionIDAddrMap
// 0x0010
struct FRegionIDAddrMap
{
	int                                                RegionID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     AddrString;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif