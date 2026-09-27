// src/managers/triggermanager/cActAnimationOrigin.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EFA0..00C91EB0, 7 functions

#include "mgrr.h"

// 00C7EFA0  Trigger::cActAnimationOrigin::vf18  size=5  [class]
undefined4 Trigger::cActAnimationOrigin::vf18(void)

{
  return 0;
}

// 00C89E70  Trigger::cActAnimationOrigin::vf08  size=1  [class]
void Trigger::cActAnimationOrigin::vf08(void)

{
  return;
}

// 00C89E80  Trigger::cActAnimationOrigin::vf0C  size=1  [class]
void Trigger::cActAnimationOrigin::vf0C(void)

{
  return;
}

// 00C89E90  Trigger::cActAnimationOrigin::vf10  size=1  [class]
void Trigger::cActAnimationOrigin::vf10(void)

{
  return;
}

// 00C89EA0  Trigger::cActAnimationOrigin::vf14  size=1  [class]
void Trigger::cActAnimationOrigin::vf14(void)

{
  return;
}

// 00C91EA0  Trigger::cActAnimationOrigin::vf00  size=6  [class]
undefined * Trigger::cActAnimationOrigin::vf00(void)

{
  return &DAT_01dbe0a0;
}

// 00C91EB0  Trigger::cActAnimationOrigin::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActAnimationOrigin::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

