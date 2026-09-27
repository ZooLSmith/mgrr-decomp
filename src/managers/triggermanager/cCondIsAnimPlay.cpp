// src/managers/triggermanager/cCondIsAnimPlay.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7CFD0..00C866A0, 2 functions

#include "mgrr.h"

// 00C7CFD0  Trigger::cCondIsAnimPlay::vf10  size=1  [class]
void Trigger::cCondIsAnimPlay::vf10(void)

{
  return;
}

// 00C866A0  Trigger::cCondIsAnimPlay::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsAnimPlay::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

