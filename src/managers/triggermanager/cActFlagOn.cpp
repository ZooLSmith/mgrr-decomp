// src/managers/triggermanager/cActFlagOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8A860..00C922C0, 6 functions

#include "mgrr.h"

// 00C8A860  Trigger::cActFlagOn::vf00  size=6  [class]
undefined * Trigger::cActFlagOn::vf00(void)

{
  return &DAT_01dbe53c;
}

// 00C8A870  Trigger::cActFlagOn::vf08  size=1  [class]
void Trigger::cActFlagOn::vf08(void)

{
  return;
}

// 00C8A880  Trigger::cActFlagOn::vf0C  size=1  [class]
void Trigger::cActFlagOn::vf0C(void)

{
  return;
}

// 00C8A890  Trigger::cActFlagOn::vf10  size=1  [class]
void Trigger::cActFlagOn::vf10(void)

{
  return;
}

// 00C8A8A0  Trigger::cActFlagOn::vf14  size=1  [class]
void Trigger::cActFlagOn::vf14(void)

{
  return;
}

// 00C922C0  Trigger::cActFlagOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

