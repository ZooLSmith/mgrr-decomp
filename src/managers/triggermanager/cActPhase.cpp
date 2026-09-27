// src/managers/triggermanager/cActPhase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89650..00C918C0, 6 functions

#include "mgrr.h"

// 00C89650  Trigger::cActPhase::vf08  size=1  [class]
void Trigger::cActPhase::vf08(void)

{
  return;
}

// 00C89660  Trigger::cActPhase::vf0C  size=1  [class]
void Trigger::cActPhase::vf0C(void)

{
  return;
}

// 00C89670  Trigger::cActPhase::vf10  size=1  [class]
void Trigger::cActPhase::vf10(void)

{
  return;
}

// 00C89680  Trigger::cActPhase::vf14  size=1  [class]
void Trigger::cActPhase::vf14(void)

{
  return;
}

// 00C918B0  Trigger::cActPhase::vf00  size=6  [class]
undefined * Trigger::cActPhase::vf00(void)

{
  return &DAT_01dbe05c;
}

// 00C918C0  Trigger::cActPhase::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPhase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

