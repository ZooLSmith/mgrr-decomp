// src/managers/triggermanager/cActSE.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89BF0..00C91C00, 6 functions

#include "mgrr.h"

// 00C89BF0  Trigger::cActSE::vf08  size=1  [class]
void Trigger::cActSE::vf08(void)

{
  return;
}

// 00C89C00  Trigger::cActSE::vf0C  size=1  [class]
void Trigger::cActSE::vf0C(void)

{
  return;
}

// 00C89C10  Trigger::cActSE::vf10  size=1  [class]
void Trigger::cActSE::vf10(void)

{
  return;
}

// 00C89C20  Trigger::cActSE::vf14  size=1  [class]
void Trigger::cActSE::vf14(void)

{
  return;
}

// 00C91BF0  Trigger::cActSE::vf00  size=6  [class]
undefined * Trigger::cActSE::vf00(void)

{
  return &DAT_01dbe090;
}

// 00C91C00  Trigger::cActSE::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSE::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

