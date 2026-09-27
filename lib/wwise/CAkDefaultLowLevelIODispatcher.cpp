// lib/wwise/CAkDefaultLowLevelIODispatcher.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DEE9B0..00DF5A50, 5 functions

#include "types.h"

// 00DEE9B0  CAkDefaultLowLevelIODispatcher::vf08  size=84  [class]
void __thiscall
CAkDefaultLowLevelIODispatcher::vf08
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5
          ,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  *param_5 = 1;
  iVar1 = 0x42;
  uVar2 = 0;
  do {
    param_1 = param_1 + 1;
    if (iVar1 == 1) {
      return;
    }
    if (*param_1 != 0) {
      iVar1 = (**(code **)(*(int *)*param_1 + 8))(param_2,param_3,param_4,param_5,param_6);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

// 00DEEA10  CAkDefaultLowLevelIODispatcher::vf04  size=84  [class]
void __thiscall
CAkDefaultLowLevelIODispatcher::vf04
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5
          ,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  *param_5 = 1;
  iVar1 = 0x42;
  uVar2 = 0;
  do {
    param_1 = param_1 + 1;
    if (iVar1 == 1) {
      return;
    }
    if (*param_1 != 0) {
      iVar1 = (**(code **)(*(int *)*param_1 + 4))(param_2,param_3,param_4,param_5,param_6);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

// 00DEEA70  CAkDefaultLowLevelIODispatcher::vf0C  size=46  [class]
undefined4 __thiscall CAkDefaultLowLevelIODispatcher::vf0C(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = param_1;
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 == 0) {
      param_1[uVar1 + 1] = param_2;
      param_1[4] = param_1[4] + 1;
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return 2;
}

// 00DEEAA0  CAkDefaultLowLevelIODispatcher::vf10  size=15  [class]
void __fastcall CAkDefaultLowLevelIODispatcher::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00DF5A50  CAkDefaultLowLevelIODispatcher::vf00  size=31  [class]
undefined4 * __thiscall CAkDefaultLowLevelIODispatcher::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = AK::StreamMgr::IAkFileLocationResolver::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

