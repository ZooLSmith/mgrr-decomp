// src/managers/triggermanager/cCondBarrierEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79BE0..00C84E10, 4 functions

#include "mgrr.h"

// 00C79BE0  Trigger::cCondBarrierEnd::vf0C  size=3  [class]
undefined4 Trigger::cCondBarrierEnd::vf0C(void)

{
  return 0;
}

// 00C79BF0  Trigger::cCondBarrierEnd::vf14  size=3  [class]
undefined4 Trigger::cCondBarrierEnd::vf14(void)

{
  return 0;
}

// 00C79C00  Trigger::cCondBarrierEnd::vf1C  size=16  [class]
void __thiscall Trigger::cCondBarrierEnd::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C84E10  Trigger::cCondBarrierEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondBarrierEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

