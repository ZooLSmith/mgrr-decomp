// src/managers/triggermanager/cActSetGameoverNormalFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80700..00C93A20, 7 functions

#include "mgrr.h"

// 00C80700  Trigger::cActSetGameoverNormalFlag::vf18  size=8  [class]
undefined4 Trigger::cActSetGameoverNormalFlag::vf18(void)

{
  return 1;
}

// 00C8D280  Trigger::cActSetGameoverNormalFlag::vf08  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf08(void)

{
  return;
}

// 00C8D290  Trigger::cActSetGameoverNormalFlag::vf0C  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf0C(void)

{
  return;
}

// 00C8D2A0  Trigger::cActSetGameoverNormalFlag::vf10  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf10(void)

{
  return;
}

// 00C8D2B0  Trigger::cActSetGameoverNormalFlag::vf14  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf14(void)

{
  return;
}

// 00C93A10  Trigger::cActSetGameoverNormalFlag::vf00  size=6  [class]
undefined * Trigger::cActSetGameoverNormalFlag::vf00(void)

{
  return &DAT_01dbe1e0;
}

// 00C93A20  Trigger::cActSetGameoverNormalFlag::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSetGameoverNormalFlag::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

