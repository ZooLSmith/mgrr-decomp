// lib/wwise/CAkDefaultIOHookBlocking.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DEF1F0..00DF5AC0, 11 functions

#include "types.h"

// 00DEF1F0  CAkDefaultIOHookBlocking::vf08  size=240  [class]
void __thiscall
CAkDefaultIOHookBlocking::vf08
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5,
          DWORD *param_6)

{
  int iVar1;
  DWORD DVar2;
  undefined1 auStack_214 [4];
  DWORD local_210;
  undefined1 local_20c [520];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_214;
  if ((*param_5 == '\0') && (*(char *)(param_1 + 0x628) != '\0')) {
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
    DVar2 = *(DWORD *)(param_1 + 0x624);
    param_6[4] = 0;
    param_6[3] = 0;
    param_6[6] = DVar2;
  }
  else {
    *param_5 = '\x01';
    iVar1 = FUN_00deeae0(param_2,param_4,param_3,local_20c);
    if (iVar1 == 1) {
      iVar1 = FUN_00df5100(local_20c,param_3,0,0,param_6 + 5);
      if (iVar1 == 1) {
        DVar2 = GetFileSize((HANDLE)param_6[5],&local_210);
        *param_6 = DVar2;
        param_6[1] = local_210;
        param_6[2] = 0;
        param_6[6] = *(DWORD *)(param_1 + 0x624);
        param_6[4] = 0;
        param_6[3] = 0;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_214);
  return;
}

// 00DEF2E0  CAkDefaultIOHookBlocking::vf04  size=240  [class]
void __thiscall
CAkDefaultIOHookBlocking::vf04
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5,
          DWORD *param_6)

{
  int iVar1;
  DWORD DVar2;
  undefined1 auStack_214 [4];
  DWORD local_210;
  undefined1 local_20c [520];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_214;
  if ((*param_5 == '\0') && (*(char *)(param_1 + 0x628) != '\0')) {
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
    DVar2 = *(DWORD *)(param_1 + 0x624);
    param_6[4] = 0;
    param_6[3] = 0;
    param_6[6] = DVar2;
  }
  else {
    *param_5 = '\x01';
    iVar1 = FUN_00deec50(param_2,param_4,param_3,local_20c);
    if (iVar1 == 1) {
      iVar1 = FUN_00df5100(local_20c,param_3,0,0,param_6 + 5);
      if (iVar1 == 1) {
        DVar2 = GetFileSize((HANDLE)param_6[5],&local_210);
        *param_6 = DVar2;
        param_6[1] = local_210;
        param_6[2] = 0;
        param_6[6] = *(DWORD *)(param_1 + 0x624);
        param_6[4] = 0;
        param_6[3] = 0;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_214);
  return;
}

// 00DEF3D0  CAkDefaultIOHookBlocking::vf14  size=83  [class]
int CAkDefaultIOHookBlocking::vf14(int param_1,undefined4 param_2,LPVOID param_3,DWORD *param_4)

{
  DWORD *pDVar1;
  BOOL BVar2;
  _OVERLAPPED local_14;
  
  pDVar1 = param_4;
  local_14.u.s.Offset = *param_4;
  local_14.u.s.OffsetHigh = __aullshr();
  local_14.hEvent = (HANDLE)0x0;
  BVar2 = ReadFile(*(HANDLE *)(param_1 + 0x14),param_3,pDVar1[3],(LPDWORD)&param_4,&local_14);
  return 2 - (uint)(BVar2 != 0);
}

// 00DEF430  CAkDefaultIOHookBlocking::vf18  size=83  [class]
int CAkDefaultIOHookBlocking::vf18(int param_1,undefined4 param_2,LPCVOID param_3,DWORD *param_4)

{
  DWORD *pDVar1;
  BOOL BVar2;
  _OVERLAPPED local_14;
  
  pDVar1 = param_4;
  local_14.u.s.Offset = *param_4;
  local_14.u.s.OffsetHigh = __aullshr();
  local_14.hEvent = (HANDLE)0x0;
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x14),param_3,pDVar1[3],(LPDWORD)&param_4,&local_14);
  return 2 - (uint)(BVar2 != 0);
}

// 00DEF490  CAkDefaultIOHookBlocking::vf04  size=24  [class]
int CAkDefaultIOHookBlocking::vf04(int param_1)

{
  BOOL BVar1;
  
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0x14));
  return 2 - (uint)(BVar1 != 0);
}

// 00DEF4B0  CAkDefaultIOHookBlocking::vf08  size=8  [class]
undefined4 CAkDefaultIOHookBlocking::vf08(void)

{
  return 1;
}

// 00DEF4C0  CAkDefaultIOHookBlocking::vf0C  size=3  [class]
void CAkDefaultIOHookBlocking::vf0C(void)

{
  return;
}

// 00DEF4D0  CAkDefaultIOHookBlocking::vf10  size=12  [class]
bool __fastcall CAkDefaultIOHookBlocking::vf10(int param_1)

{
  return *(char *)(param_1 + 0x624) != '\0';
}

// 00DF5A00  CAkDefaultIOHookBlocking::vf00  size=8  [class]
void CAkDefaultIOHookBlocking::vf00(void)

{
  vf00();
  return;
}

// 00DF5AB0  CAkDefaultIOHookBlocking::vf00  size=8  [class]
void CAkDefaultIOHookBlocking::vf00(void)

{
  vf00();
  return;
}

// 00DF5AC0  CAkDefaultIOHookBlocking::vf00  size=52  [class]
undefined4 * __thiscall CAkDefaultIOHookBlocking::vf00(undefined4 *param_1,byte param_2)

{
  param_1[1] = vftable;
  param_1[2] = CAkFileLocationBase::vftable;
  param_1[1] = AK::StreamMgr::IAkLowLevelIOHook::vftable;
  *param_1 = AK::StreamMgr::IAkFileLocationResolver::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

