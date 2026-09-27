// src/managers/triggermanager/cActDoorLock.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8E170..00C94260, 6 functions

#include "mgrr.h"

// 00C8E170  Trigger::cActDoorLock::vf08  size=1  [class]
void Trigger::cActDoorLock::vf08(void)

{
  return;
}

// 00C8E180  Trigger::cActDoorLock::vf0C  size=1  [class]
void Trigger::cActDoorLock::vf0C(void)

{
  return;
}

// 00C8E190  Trigger::cActDoorLock::vf10  size=1  [class]
void Trigger::cActDoorLock::vf10(void)

{
  return;
}

// 00C8E1A0  Trigger::cActDoorLock::vf14  size=1  [class]
void Trigger::cActDoorLock::vf14(void)

{
  return;
}

// 00C94250  Trigger::cActDoorLock::vf00  size=6  [class]
undefined * Trigger::cActDoorLock::vf00(void)

{
  return &DAT_01dbe23c;
}

// 00C94260  Trigger::cActDoorLock::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorLock::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

