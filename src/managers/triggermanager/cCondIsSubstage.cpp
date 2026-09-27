// src/managers/triggermanager/cCondIsSubstage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7A7F0..00C856D0, 3 functions

#include "mgrr.h"

// 00C7A7F0  Trigger::cCondIsSubstage::vf14  size=3  [class]
undefined4 Trigger::cCondIsSubstage::vf14(void)

{
  return 0;
}

// 00C7A800  Trigger::cCondIsSubstage::vf1C  size=16  [class]
void __thiscall Trigger::cCondIsSubstage::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  return;
}

// 00C856D0  Trigger::cCondIsSubstage::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsSubstage::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

