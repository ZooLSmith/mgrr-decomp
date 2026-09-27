// src/managers/triggermanager/cCondIsFileExist.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B150..00C85C90, 5 functions

#include "mgrr.h"

// 00C7B150  Trigger::cCondIsFileExist::cCondIsFileExist  size=51  [class]
void __fastcall Trigger::cCondIsFileExist::cCondIsFileExist(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 00C7B1A0  Trigger::cCondIsFileExist::vf10  size=1  [class]
void Trigger::cCondIsFileExist::vf10(void)

{
  return;
}

// 00C7B1B0  Trigger::cCondIsFileExist::vf14  size=3  [class]
undefined4 Trigger::cCondIsFileExist::vf14(void)

{
  return 0;
}

// 00C7B1C0  Trigger::cCondIsFileExist::vf1C  size=27  [class]
void __thiscall Trigger::cCondIsFileExist::vf1C(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(int *)(param_1 + 4) = param_2;
  puVar2 = (undefined4 *)(param_2 + 8);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

// 00C85C90  Trigger::cCondIsFileExist::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsFileExist::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

