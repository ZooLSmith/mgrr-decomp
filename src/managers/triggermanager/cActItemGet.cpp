// src/managers/triggermanager/cActItemGet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8D500..00C93B20, 6 functions

#include "mgrr.h"

// 00C8D500  Trigger::cActItemGet::vf08  size=1  [class]
void Trigger::cActItemGet::vf08(void)

{
  return;
}

// 00C8D510  Trigger::cActItemGet::vf0C  size=1  [class]
void Trigger::cActItemGet::vf0C(void)

{
  return;
}

// 00C8D520  Trigger::cActItemGet::vf10  size=1  [class]
void Trigger::cActItemGet::vf10(void)

{
  return;
}

// 00C8D530  Trigger::cActItemGet::vf14  size=1  [class]
void Trigger::cActItemGet::vf14(void)

{
  return;
}

// 00C93B10  Trigger::cActItemGet::vf00  size=6  [class]
undefined * Trigger::cActItemGet::vf00(void)

{
  return &DAT_01dbe1f0;
}

// 00C93B20  Trigger::cActItemGet::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActItemGet::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

