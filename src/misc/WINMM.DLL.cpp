// src/misc/WINMM.DLL.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DF81C0..00DF8C00, 24 functions

#include "types.h"

// 00DF81C0  WINMM.DLL::timeGetTime  size=6  [class]
DWORD timeGetTime(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00df81c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = timeGetTime();
  return DVar1;
}

// 00DF81D0  FUN_00df81d0  size=89  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00df81d0(void)

{
  uint uVar1;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  uVar1 = (local_8.s.HighPart - _DAT_01dd4f1c) - (uint)(local_8.s.LowPart < _DAT_01dd4f18);
  return (float10)(float)((-(float10)(longlong)(((ulonglong)uVar1 & 0x80000000) << 0x20) +
                          (float10)(CONCAT44(uVar1,local_8.s.LowPart - _DAT_01dd4f18) &
                                   0x7fffffffffffffff)) * (float10)_DAT_01dd4f14);
}

// 00DF8230  FUN_00df8230  size=36  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00df8230(void)

{
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  return CONCAT44((local_8.s.HighPart - _DAT_01dd4f1c) - (uint)(local_8.s.LowPart < _DAT_01dd4f18),
                  local_8.s.LowPart - _DAT_01dd4f18);
}

// 00DF8260  FUN_00df8260  size=7  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00df8260(void)

{
  return (float10)_DAT_01dd4f14;
}

// 00DF8270  FUN_00df8270  size=76  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00df8270(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (param_4 - param_2) - (uint)(param_3 < param_1);
  return (float10)(float)((-(float10)(longlong)(((ulonglong)uVar1 & 0x80000000) << 0x20) +
                          (float10)(CONCAT44(uVar1,param_3 - param_1) & 0x7fffffffffffffff)) *
                         (float10)_DAT_01dd4f14);
}

// 00DF82C0  FUN_00df82c0  size=117  [between]
void FUN_00df82c0(WORD *param_1)

{
  _SYSTEMTIME local_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_14;
  GetLocalTime(&local_14);
  *param_1 = local_14.wYear;
  param_1[1] = local_14.wMonth;
  param_1[3] = local_14.wDay;
  param_1[2] = local_14.wDayOfWeek;
  param_1[4] = local_14.wHour;
  param_1[6] = local_14.wSecond;
  param_1[5] = local_14.wMinute;
  param_1[7] = local_14.wMilliseconds;
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}

// 00DF8340  FUN_00df8340  size=13  [between]
void FUN_00df8340(void)

{
  DestroyWindow(DAT_01dd504c);
  return;
}

// 00DF8410  FUN_00df8410  size=140  [between]
void FUN_00df8410(void)

{
  BOOL BVar1;
  tagPOINT local_10;
  tagPOINT local_8;
  
  local_10.x = 0;
  local_10.y = 0;
  if ((DAT_018ce9bc != 0) && (BVar1 = ClientToScreen(DAT_01dd504c,&local_10), BVar1 == 0)) {
    return;
  }
  if ((-1 < DAT_018ce9d4) || (-1 < DAT_018ce9d8)) {
    SetCursorPos(DAT_018ce9d4 + local_10.x,DAT_018ce9d8 + local_10.y);
    DAT_018ce9d4 = -1;
    DAT_018ce9d8 = -1;
  }
  BVar1 = GetCursorPos(&local_8);
  if (BVar1 != 0) {
    DAT_018ce9cc = local_8.x - local_10.x;
    DAT_018ce9d0 = local_8.y - local_10.y;
  }
  return;
}

// 00DF84B0  FUN_00df84b0  size=6  [between]
undefined4 FUN_00df84b0(void)

{
  return DAT_01dd4f44;
}

// 00DF84C0  FUN_00df84c0  size=6  [between]
undefined4 FUN_00df84c0(void)

{
  return DAT_01dd504c;
}

// 00DF84D0  FUN_00df84d0  size=6  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df84d0(void)

{
  return _DAT_018ce9a4;
}

// 00DF84E0  FUN_00df84e0  size=6  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df84e0(void)

{
  return _DAT_018ce9a8;
}

// 00DF84F0  FUN_00df84f0  size=6  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df84f0(void)

{
  return _DAT_018ce9ac;
}

// 00DF8500  FUN_00df8500  size=6  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df8500(void)

{
  return _DAT_018ce9b0;
}

// 00DF8520  FUN_00df8520  size=6  [between]
undefined4 FUN_00df8520(void)

{
  return DAT_018ce9bc;
}

// 00DF8590  FUN_00df8590  size=6  [between]
undefined4 FUN_00df8590(void)

{
  return DAT_01dd509c;
}

// 00DF85C0  FUN_00df85c0  size=6  [between]
undefined4 FUN_00df85c0(void)

{
  return DAT_018ce9cc;
}

// 00DF85D0  FUN_00df85d0  size=6  [between]
undefined4 FUN_00df85d0(void)

{
  return DAT_018ce9d0;
}

// 00DF85E0  FUN_00df85e0  size=20  [between]
void FUN_00df85e0(undefined4 param_1,undefined4 param_2)

{
  DAT_018ce9d4 = param_1;
  DAT_018ce9d8 = param_2;
  return;
}

// 00DF8620  FUN_00df8620  size=405  [between]
void FUN_00df8620(LPCSTR param_1,LPCSTR param_2,int param_3,int param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  HINSTANCE hInstance;
  ATOM AVar1;
  HWND hWnd;
  undefined4 *local_4c;
  LPCSTR local_48;
  WNDCLASSEXA local_44;
  tagRECT local_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_4c;
  local_48 = param_2;
  local_4c = param_6;
  _memset(&local_44,0,0x30);
  local_44.cbSize = 0x30;
  local_44.style = DAT_018ce9a0;
  local_44.lpfnWndProc = DefWindowProcA_exref;
  local_44.cbClsExtra = 0;
  local_44.cbWndExtra = 0;
  local_44.hInstance = GetModuleHandleA((LPCSTR)0x0);
  local_44.hIcon = LoadIconA(local_44.hInstance,"MAINICON");
  local_44.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_44.hbrBackground = (HBRUSH)0x6;
  local_44.lpszMenuName = (LPCSTR)0x0;
  local_44.lpszClassName = param_1;
  local_44.hIconSm = LoadIconA(local_44.hInstance,"SMALLICON");
  AVar1 = RegisterClassExA(&local_44);
  hInstance = local_44.hInstance;
  if (AVar1 == 0) {
    FUN_00dd56a0(&DAT_016c5c14);
    __security_check_cookie(local_4 ^ (uint)&local_4c);
    return;
  }
  local_14.right = param_3;
  local_14.left = 0;
  local_14.top = 0;
  local_14.bottom = param_4;
  AdjustWindowRect(&local_14,DAT_018ce9b4,0);
  local_14.bottom = local_14.bottom - local_14.top;
  local_14.right = local_14.right - local_14.left;
  local_14.left = 0;
  local_14.top = 0;
  hWnd = CreateWindowExA(0,param_1,local_48,DAT_018ce9b4,-0x80000000,-0x80000000,local_14.right,
                         local_14.bottom,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  ShowWindow(hWnd,1);
  UpdateWindow(hWnd);
  SetForegroundWindow(hWnd);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = hWnd;
  }
  if (local_4c != (undefined4 *)0x0) {
    *local_4c = hInstance;
  }
  __security_check_cookie(local_4 ^ (uint)&local_4c);
  return;
}

// 00DF8A60  FUN_00df8a60  size=79  [between]
void FUN_00df8a60(void)

{
  if (DAT_01dd53e0 != (int *)0x0) {
    (**(code **)(*DAT_01dd53e0 + 8))(DAT_01dd53e0);
    DAT_01dd53e0 = (int *)0x0;
  }
  if (DAT_01dd53e4 != (HGLOBAL)0x0) {
    GlobalFree(DAT_01dd53e4);
    DAT_01dd53e4 = (HGLOBAL)0x0;
  }
  if (DAT_01dd53dc != 0) {
    OleUninitialize();
    DAT_01dd53dc = 0;
  }
  return;
}

// 00DF8B50  FUN_00df8b50  size=125  [between]
void FUN_00df8b50(void)

{
  HDC pHVar1;
  HDC pHStack_70;
  BOOL BStack_6c;
  LONG LStack_68;
  LONG LStack_64;
  LONG LStack_60;
  LONG LStack_5c;
  BOOL BStack_58;
  tagPAINTSTRUCT local_44;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_44;
  BStack_58 = 0xdf8b72;
  pHVar1 = BeginPaint(DAT_01dd53b0,&local_44);
  BStack_58 = DAT_01dd4e94;
  LStack_5c = DAT_01dd4e90;
  LStack_60 = 0;
  LStack_64 = DAT_01dd53ec;
  LStack_68 = DAT_01dd53e8;
  BStack_6c = 0;
  pHStack_70 = (HDC)0x0;
  (**(code **)(*DAT_01dd53e0 + 0x20))(DAT_01dd53e0,pHVar1);
  EndPaint(DAT_01dd53b0,(PAINTSTRUCT *)&pHStack_70);
  __security_check_cookie(local_44.rcPaint.bottom ^ (uint)&pHStack_70);
  return;
}

// 00DF8BF0  FUN_00df8bf0  size=6  [between]
undefined4 FUN_00df8bf0(void)

{
  return DAT_01dd5088;
}

// 00DF8C00  WINMM.DLL::timeGetTime  size=6  [class]
DWORD timeGetTime(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00df8c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = timeGetTime();
  return DVar1;
}

