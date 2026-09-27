// src/managers/triggermanager/cActPlayerDie.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8B3B0..00C92A10, 6 functions

#include "mgrr.h"

// 00C8B3B0  Trigger::cActPlayerDie::vf08  size=1  [class]
void Trigger::cActPlayerDie::vf08(void)

{
  return;
}

// 00C8B3C0  Trigger::cActPlayerDie::vf0C  size=1  [class]
void Trigger::cActPlayerDie::vf0C(void)

{
  return;
}

// 00C8B3D0  Trigger::cActPlayerDie::vf10  size=1  [class]
void Trigger::cActPlayerDie::vf10(void)

{
  return;
}

// 00C8B3E0  Trigger::cActPlayerDie::vf14  size=1  [class]
void Trigger::cActPlayerDie::vf14(void)

{
  return;
}

// 00C92A00  Trigger::cActPlayerDie::vf00  size=6  [class]
undefined * Trigger::cActPlayerDie::vf00(void)

{
  return &DAT_01dbe118;
}

// 00C92A10  Trigger::cActPlayerDie::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerDie::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

