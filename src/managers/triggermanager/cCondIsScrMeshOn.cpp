// src/managers/triggermanager/cCondIsScrMeshOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7C7B0..00C864E0, 4 functions

#include "mgrr.h"

// 00C7C7B0  Trigger::cCondIsScrMeshOn::cCondIsScrMeshOn  size=41  [class]
void __fastcall Trigger::cCondIsScrMeshOn::cCondIsScrMeshOn(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[9] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7C7F0  Trigger::cCondIsScrMeshOn::vf10  size=1  [class]
void Trigger::cCondIsScrMeshOn::vf10(void)

{
  return;
}

// 00C7C800  Trigger::cCondIsScrMeshOn::vf1C  size=46  [class]
void __thiscall Trigger::cCondIsScrMeshOn::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1c);
  return;
}

// 00C864E0  Trigger::cCondIsScrMeshOn::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsScrMeshOn::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

