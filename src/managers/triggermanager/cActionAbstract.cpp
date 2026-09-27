// src/managers/triggermanager/cActionAbstract.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C77D60..00C77DE0, 9 functions

#include "mgrr.h"

// 00C77D60  Trigger::cActionAbstract::vf00  size=6  [class]
undefined * Trigger::cActionAbstract::vf00(void)

{
  return &DAT_01dbd214;
}

// 00C77D70  Trigger::cActionAbstract::vf08  size=1  [class]
void Trigger::cActionAbstract::vf08(void)

{
  return;
}

// 00C77D80  Trigger::cActionAbstract::vf0C  size=1  [class]
void Trigger::cActionAbstract::vf0C(void)

{
  return;
}

// 00C77D90  Trigger::cActionAbstract::vf10  size=1  [class]
void Trigger::cActionAbstract::vf10(void)

{
  return;
}

// 00C77DA0  Trigger::cActionAbstract::vf14  size=1  [class]
void Trigger::cActionAbstract::vf14(void)

{
  return;
}

// 00C77DB0  Trigger::cActionAbstract::vf18  size=5  [class]
undefined4 Trigger::cActionAbstract::vf18(void)

{
  return 0;
}

// 00C77DC0  Trigger::cActionAbstract::vf1C  size=3  [class]
void Trigger::cActionAbstract::vf1C(void)

{
  return;
}

// 00C77DD0  Trigger::cActionAbstract::vf20  size=4  [class]
undefined4 Trigger::cActionAbstract::vf20(void)

{
  return 0xffffffff;
}

// 00C77DE0  Trigger::cActionAbstract::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActionAbstract::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

