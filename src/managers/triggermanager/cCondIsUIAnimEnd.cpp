// src/managers/triggermanager/cCondIsUIAnimEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7BB90..00C861C0, 2 functions

#include "mgrr.h"

// 00C7BB90  Trigger::cCondIsUIAnimEnd::vf14  size=6  [class]
undefined4 Trigger::cCondIsUIAnimEnd::vf14(void)

{
  return DAT_01dc2d6c;
}

// 00C861C0  Trigger::cCondIsUIAnimEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsUIAnimEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

