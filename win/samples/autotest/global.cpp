#include "stdafx.h"
#include "global.h"

HOgmacam g_hcam = nullptr;
OgmacamDeviceV2 g_cam[OGMACAM_MAX];
int g_cameraCnt = 0;
int g_snapCount = 0;
int g_ROITestCount = 0;
bool g_bSnapFinish = false;
bool g_bImageSnap = false;
bool g_bROITest = false;
bool g_bROITest_SnapFinish = false;
bool g_bROITest_SnapStart = false;
bool g_bTriggerTest = false;
bool g_bEnableCheckBlack = true;
bool g_bCheckBlack = false;
bool g_bBlack = false;
bool g_bHeartbeat = false;
bool g_bReplug = false;
bool g_bSnapTest = false;
CString g_snapDir;

CString GetAppTimeDir(const TCHAR* header)
{
	CString strTime = CTime::GetCurrentTime().Format(_T("%Y%m%d%H%M%S"));
	TCHAR path[MAX_PATH + 1] = { 0 };
	GetModuleFileName(nullptr, path, MAX_PATH);
	PathRemoveFileSpec(path);
	CString str;
	str.Format(_T("%s_%s"), header, strTime);
	PathAppend(path, (LPCTSTR)str);
	str = path;
	return str;
}