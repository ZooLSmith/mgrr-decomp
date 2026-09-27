// src/managers/triggermanager/cActSoftEvent.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C895B0..00C91880, 6 functions

#include "mgrr.h"

// 00C895B0  Trigger::cActSoftEvent::vf08  size=1  [class]
void Trigger::cActSoftEvent::vf08(void)

{
  return;
}

// 00C895C0  Trigger::cActSoftEvent::vf0C  size=1  [class]
void Trigger::cActSoftEvent::vf0C(void)

{
  return;
}

// 00C895D0  Trigger::cActSoftEvent::vf10  size=1  [class]
void Trigger::cActSoftEvent::vf10(void)

{
  return;
}

// 00C895E0  Trigger::cActSoftEvent::vf14  size=1  [class]
void Trigger::cActSoftEvent::vf14(void)

{
  return;
}

// 00C91870  Trigger::cActSoftEvent::vf00  size=6  [class]
undefined * Trigger::cActSoftEvent::vf00(void)

{
  return &DAT_01dbe058;
}

// 00C91880  Trigger::cActSoftEvent::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSoftEvent::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

