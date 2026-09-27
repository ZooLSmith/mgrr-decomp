// src/managers/triggermanager/cActFileRead.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FF90..00C93380, 7 functions

#include "mgrr.h"

// 00C7FF90  Trigger::cActFileRead::vf18  size=5  [class]
undefined4 Trigger::cActFileRead::vf18(void)

{
  return 0;
}

// 00C8C380  Trigger::cActFileRead::vf08  size=1  [class]
void Trigger::cActFileRead::vf08(void)

{
  return;
}

// 00C8C390  Trigger::cActFileRead::vf0C  size=1  [class]
void Trigger::cActFileRead::vf0C(void)

{
  return;
}

// 00C8C3A0  Trigger::cActFileRead::vf10  size=1  [class]
void Trigger::cActFileRead::vf10(void)

{
  return;
}

// 00C8C3B0  Trigger::cActFileRead::vf14  size=1  [class]
void Trigger::cActFileRead::vf14(void)

{
  return;
}

// 00C93370  Trigger::cActFileRead::vf00  size=6  [class]
undefined * Trigger::cActFileRead::vf00(void)

{
  return &DAT_01dbe198;
}

// 00C93380  Trigger::cActFileRead::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFileRead::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

