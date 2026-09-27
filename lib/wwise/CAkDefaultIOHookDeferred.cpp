// lib/wwise/CAkDefaultIOHookDeferred.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DEF5D0..00DF5B10, 12 functions

#include "types.h"

// 00DEF5D0  CAkDefaultIOHookDeferred::vf08  size=252  [class]
void __thiscall
CAkDefaultIOHookDeferred::vf08
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,char *param_5,
          DWORD *param_6)

{
  int iVar1;
  DWORD DVar2;
  int local_218 [2];
  DWORD local_210;
  undefined1 local_20c [520];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_218;
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
      local_218[0] = FUN_00df5100(local_20c,param_3,1,1,param_6 + 5);
      if (local_218[0] == 1) {
        DVar2 = GetFileSize((HANDLE)param_6[5],&local_210);
        *param_6 = DVar2;
        param_6[1] = local_210;
        param_6[2] = 0;
        DVar2 = *(DWORD *)(param_1 + 0x624);
        param_6[3] = 0;
        param_6[6] = DVar2;
        param_6[4] = (uint)(param_3 != 0);
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_218);
  return;
}

// 00DEF6D0  CAkDefaultIOHookDeferred::vf04  size=238  [class]
void __thiscall
CAkDefaultIOHookDeferred::vf04
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
      iVar1 = FUN_00df5100(local_20c,param_3,1,1,param_6 + 5);
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

// 00DEF800  CAkDefaultIOHookDeferred::vf14  size=112  [class]
undefined4 CAkDefaultIOHookDeferred::vf14(int param_1,undefined4 param_2,DWORD *param_3)

{
  LPOVERLAPPED lpOverlapped;
  DWORD DVar1;
  BOOL BVar2;
  
  lpOverlapped = AK::MemoryMgr::GetBlock(DAT_018cde44);
  lpOverlapped->hEvent = param_3;
  (lpOverlapped->u).s.Offset = *param_3;
  DVar1 = __aullshr();
  (lpOverlapped->u).s.OffsetHigh = DVar1;
  BVar2 = ReadFileEx(*(HANDLE *)(param_1 + 0x14),(LPVOID)param_3[4],param_3[2],lpOverlapped,
                     (LPOVERLAPPED_COMPLETION_ROUTINE)&LAB_00def7c0);
  if (BVar2 != 0) {
    return 1;
  }
  AK::MemoryMgr::ReleaseBlock(DAT_018cde44,lpOverlapped);
  return 2;
}

// 00DEF870  CAkDefaultIOHookDeferred::vf18  size=112  [class]
undefined4 CAkDefaultIOHookDeferred::vf18(int param_1,undefined4 param_2,DWORD *param_3)

{
  LPOVERLAPPED lpOverlapped;
  DWORD DVar1;
  BOOL BVar2;
  
  lpOverlapped = AK::MemoryMgr::GetBlock(DAT_018cde44);
  lpOverlapped->hEvent = param_3;
  (lpOverlapped->u).s.Offset = *param_3;
  DVar1 = __aullshr();
  (lpOverlapped->u).s.OffsetHigh = DVar1;
  BVar2 = WriteFileEx(*(HANDLE *)(param_1 + 0x14),(LPCVOID)param_3[4],param_3[3],lpOverlapped,
                      (LPOVERLAPPED_COMPLETION_ROUTINE)&LAB_00def7c0);
  if (BVar2 != 0) {
    return 1;
  }
  AK::MemoryMgr::ReleaseBlock(DAT_018cde44,lpOverlapped);
  return 2;
}

// 00DEF8E0  CAkDefaultIOHookDeferred::vf1C  size=26  [class]
void CAkDefaultIOHookDeferred::vf1C(int param_1,undefined4 param_2,char *param_3)

{
  if (*param_3 != '\0') {
    CancelIo(*(HANDLE *)(param_1 + 0x14));
  }
  return;
}

// 00DEF900  CAkDefaultIOHookDeferred::vf04  size=24  [class]
int CAkDefaultIOHookDeferred::vf04(int param_1)

{
  BOOL BVar1;
  
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0x14));
  return 2 - (uint)(BVar1 != 0);
}

// 00DEF920  CAkDefaultIOHookDeferred::vf08  size=24  [class]
int CAkDefaultIOHookDeferred::vf08(int param_1)

{
  return (-(uint)(*(int *)(param_1 + 0x10) != 0) & 0xfffff801) + 0x800;
}

// 00DEF940  CAkDefaultIOHookDeferred::vf0C  size=3  [class]
void CAkDefaultIOHookDeferred::vf0C(void)

{
  return;
}

// 00DEF950  CAkDefaultIOHookDeferred::vf10  size=12  [class]
bool __fastcall CAkDefaultIOHookDeferred::vf10(int param_1)

{
  return *(char *)(param_1 + 0x624) != '\0';
}

// 00DF59F0  CAkDefaultIOHookDeferred::vf00  size=8  [class]
void CAkDefaultIOHookDeferred::vf00(void)

{
  vf00();
  return;
}

// 00DF5B00  CAkDefaultIOHookDeferred::vf00  size=8  [class]
void CAkDefaultIOHookDeferred::vf00(void)

{
  vf00();
  return;
}

// 00DF5B10  CAkDefaultIOHookDeferred::vf00  size=52  [class]
undefined4 * __thiscall CAkDefaultIOHookDeferred::vf00(undefined4 *param_1,byte param_2)

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

