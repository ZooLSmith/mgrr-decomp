// src/managers/triggermanager/cCondTrue.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79C70..00C84490, 3 functions

#include "mgrr.h"

// 00C79C70  Trigger::cCondTrue::vf14  size=6  [class]
undefined4 Trigger::cCondTrue::vf14(void)

{
  return 1;
}

// 00C79C80  Trigger::cCondTrue::vf1C  size=10  [class]
void __thiscall Trigger::cCondTrue::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C84490  Trigger::cCondTrue::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondTrue::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

