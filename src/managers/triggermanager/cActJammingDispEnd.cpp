// src/managers/triggermanager/cActJammingDispEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C804F0..00C93820, 7 functions

#include "mgrr.h"

// 00C804F0  Trigger::cActJammingDispEnd::vf18  size=18  [class]
undefined4 Trigger::cActJammingDispEnd::vf18(void)

{
  DAT_01dc0ec8 = 0;
  return 1;
}

// 00C8CD80  Trigger::cActJammingDispEnd::vf08  size=1  [class]
void Trigger::cActJammingDispEnd::vf08(void)

{
  return;
}

// 00C8CD90  Trigger::cActJammingDispEnd::vf0C  size=1  [class]
void Trigger::cActJammingDispEnd::vf0C(void)

{
  return;
}

// 00C8CDA0  Trigger::cActJammingDispEnd::vf10  size=1  [class]
void Trigger::cActJammingDispEnd::vf10(void)

{
  return;
}

// 00C8CDB0  Trigger::cActJammingDispEnd::vf14  size=1  [class]
void Trigger::cActJammingDispEnd::vf14(void)

{
  return;
}

// 00C93810  Trigger::cActJammingDispEnd::vf00  size=6  [class]
undefined * Trigger::cActJammingDispEnd::vf00(void)

{
  return &DAT_01dbe1cc;
}

// 00C93820  Trigger::cActJammingDispEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActJammingDispEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

