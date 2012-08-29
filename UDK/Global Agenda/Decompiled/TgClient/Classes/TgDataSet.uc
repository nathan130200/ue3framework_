/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgDataSet.uc
 * 
 * Stats:
 *	Enums:1
 *	Properties:4
 *	Functions:29
 *
 *******************************************************************************/
class TgDataSet extends Object
	native;

enum EEventTypes
{
	EET_Post,
	EET_Response,
	EET_MAX
};

var const int m_nCallbackObject;
var const name m_nmCallbackFunc;
var native const Pointer m_pMarshal;
var native const Pointer m_pRowSet;

native final function Clear();
native final function Reinitialize();
native final function int RecordCount();
native final function bool ColumnEmptyOrNull(string sColName);
native final function int GetCurrentRowId();
native final function string GetStrColText(string sColName);
native final function string GetStrColValue(string sColName);
native final function string GetStrColValueByRow(string sColName, int iRowId);
native final function float GetNbrColValue(string sColName);
native final function SetStrColValue(string sColName, string sValue);
native final function SetNbrColValue(string sColName, float fValue);
native final function bool MoveFirst();
native final function bool MoveNext();
native final function bool MoveLast();
native final function bool MoveTo(int nRowNumber);
native final function bool GoToRowSet(int nTokenId);
native final function AddRow();
native final function DeleteRow();
native final noexport function DeleteAll(optional bool bUpdateBound)
{
	bUpdateBound = true;
}

native final function Sort(string sColName, bool bAscending);
native final function AddCurrentRow(TgDataSet pDataSet);
native final function int GetErrorCode();
native final function string GetErrorColumn();
native final function string GetErrorText();
native function RegisterForEvents(Object pObject, name nmFuncName);
native function CallRegisteredForEvents(TgDataSet.EEventTypes eEventType);
native final function AddParam(string sName, string sValue);
native final function UpdateParam(string sName, string sValue);
native final function MakeRequest(string sFuncName);
