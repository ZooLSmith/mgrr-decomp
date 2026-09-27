// src/managers/triggermanager/cActDoorOpen.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89290..00C91740, 6 functions

#include "mgrr.h"

// 00C89290  Trigger::cActDoorOpen::vf08  size=1  [class]
void Trigger::cActDoorOpen::vf08(void)

{
  return;
}

// 00C892A0  Trigger::cActDoorOpen::vf0C  size=1  [class]
void Trigger::cActDoorOpen::vf0C(void)

{
  return;
}

// 00C892B0  Trigger::cActDoorOpen::vf10  size=1  [class]
void Trigger::cActDoorOpen::vf10(void)

{
  return;
}

// 00C892C0  Trigger::cActDoorOpen::vf14  size=1  [class]
void Trigger::cActDoorOpen::vf14(void)

{
  return;
}

// 00C91730  Trigger::cActDoorOpen::vf00  size=6  [class]
undefined * Trigger::cActDoorOpen::vf00(void)

{
  return &DAT_01dbe048;
}

// 00C91740  Trigger::cActDoorOpen::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorOpen::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

