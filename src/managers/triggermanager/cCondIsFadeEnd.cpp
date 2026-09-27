// src/managers/triggermanager/cCondIsFadeEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7DE40..00C86BA0, 4 functions

#include "mgrr.h"

// 00C7DE40  Trigger::cCondIsFadeEnd::vf10  size=1  [class]
void Trigger::cCondIsFadeEnd::vf10(void)

{
  return;
}

// 00C7DE50  Trigger::cCondIsFadeEnd::vf14  size=31  [class]
undefined4 __fastcall Trigger::cCondIsFadeEnd::vf14(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = DAT_01dbd914;
    return 0;
  }
  uVar1 = FUN_00eb4340(*(int *)(param_1 + 0x10));
  return uVar1;
}

// 00C7DE70  Trigger::cCondIsFadeEnd::vf1C  size=10  [class]
void __thiscall Trigger::cCondIsFadeEnd::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C86BA0  Trigger::cCondIsFadeEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsFadeEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

