// src/unsorted/unit_00DB1FC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DB1FC0..00DB21E0, 4 functions

#include "types.h"

// 00DB1FC0  FUN_00db1fc0  size=383  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00db1fc0(int param_1,float param_2,float param_3,float param_4,float param_5,char param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float10 fVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((DAT_01dc5f64 != 0) && (param_6 < DAT_01dc5f68)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return (undefined4 *)0x0;
  }
  (**(code **)(DAT_01dc5f60 + 4))();
  _DAT_01dc5f84 = param_2 * param_5;
  if (param_3 == 0.0) {
    param_3 = 1.0;
  }
  _DAT_01dc5f7c = param_4;
  _DAT_01dc5f80 = param_5;
  _DAT_01dc5f6c = param_3 + param_3;
  _DAT_01dc5f78 = param_3;
  _DAT_01dc5f88 = _DAT_01dc5f84;
  fVar2 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
  _DAT_01dc5f70 = (float)fVar2;
  fVar1 = (float10)0;
  if (fVar1 < fVar2) {
    if (fVar1 < fVar2 != (fVar1 == fVar2)) {
      _DAT_01dc5f70 = 1.0;
    }
  }
  else {
    _DAT_01dc5f70 = -1.0;
  }
  fVar2 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
  _DAT_01dc5f74 = (float)fVar2;
  fVar1 = (float10)0;
  if (fVar1 < fVar2) {
    if (fVar1 < fVar2 != (fVar1 == fVar2)) {
      _DAT_01dc5f74 = 1.0;
    }
  }
  else {
    _DAT_01dc5f74 = -1.0;
  }
  DAT_01dc5f68 = param_6;
  if (fVar1 == (float10)param_5) {
    DAT_01dc5f64 = DAT_01dc5f64 | 8;
  }
  if ((float10)param_4 == fVar1) {
    DAT_01dc5f64 = DAT_01dc5f64 | 4;
  }
  DAT_01dc5f69 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return &DAT_01dc5f60;
}

// 00DB2140  FUN_00db2140  size=69  [run]
void FUN_00db2140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  FUN_00da39c0(&local_20,&local_30,param_4);
  return;
}

// 00DB2190  FUN_00db2190  size=76  [run]
void FUN_00db2190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  local_30 = param_4;
  local_2c = param_5;
  local_28 = param_6;
  FUN_00da39c0(&local_20,&local_30,param_7);
  return;
}

// 00DB21E0  FUN_00db21e0  size=60  [run]
void __fastcall FUN_00db21e0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  pbVar1 = (byte *)&DAT_01dc5f64;
  iVar2 = 0x10;
  do {
    if ((*pbVar1 & 1) != 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
    }
    pbVar1 = pbVar1 + 0x44;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

