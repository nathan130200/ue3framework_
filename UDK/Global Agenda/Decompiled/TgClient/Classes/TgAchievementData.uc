/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgAchievementData.uc
 * 
 * Stats:
 *	Structs:1
 *	Properties:2
 *
 *******************************************************************************/
class TgAchievementData extends Object
	native;

struct native TgClientPlayerAchievementInfo
{
	var bool m_bCompleted;
	var int m_nProgress;
	var init string m_Date;

	structdefaultproperties
	{
		m_bCompleted=false
		m_nProgress=-1
		m_Date=""
	}
};

var init native map<0, 0> m_AchievementRecords;
var bool m_bDataArrived;
