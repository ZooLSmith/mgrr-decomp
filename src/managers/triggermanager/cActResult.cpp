// src/managers/triggermanager/cActResult.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EE50..00C91B80, 7 functions

#include "mgrr.h"

// 00C7EE50  Trigger::cActResult::vf18  size=5  [class]
undefined4 Trigger::cActResult::vf18(void)

{
  return 0;
}

// 00C89AB0  Trigger::cActResult::vf08  size=1  [class]
void Trigger::cActResult::vf08(void)

{
  return;
}

// 00C89AC0  Trigger::cActResult::vf0C  size=1  [class]
void Trigger::cActResult::vf0C(void)

{
  return;
}

// 00C89AD0  Trigger::cActResult::vf10  size=1  [class]
void Trigger::cActResult::vf10(void)

{
  return;
}

// 00C89AE0  Trigger::cActResult::vf14  size=1  [class]
void Trigger::cActResult::vf14(void)

{
  return;
}

// 00C91B70  Trigger::cActResult::vf00  size=6  [class]
undefined * Trigger::cActResult::vf00(void)

{
  return &DAT_01dbe088;
}

// 00C91B80  Trigger::cActResult::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActResult::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

