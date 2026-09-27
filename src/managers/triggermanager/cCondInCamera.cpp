// src/managers/triggermanager/cCondInCamera.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7A320..00C85330, 3 functions

#include "mgrr.h"

// 00C7A320  Trigger::cCondInCamera::vf14  size=135  [class]
undefined4 __fastcall Trigger::cCondInCamera::vf14(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  iVar2 = FUN_00f98a90();
  iVar3 = FUN_00f98aa0();
  pfVar1 = (float *)(param_1 + 0x20);
  FUN_00d9fa80(pfVar1,param_1 + 0x30);
  if ((((0.0 < *(float *)(param_1 + 0x2c)) && (0.0 < *pfVar1)) && (*pfVar1 < (float)iVar2)) &&
     ((0.0 < *(float *)(param_1 + 0x24) && (*(float *)(param_1 + 0x24) < (float)iVar3)))) {
    return 1;
  }
  return 0;
}

// 00C7A3B0  Trigger::cCondInCamera::vf1C  size=16  [class]
void __thiscall Trigger::cCondInCamera::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85330  Trigger::cCondInCamera::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondInCamera::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

