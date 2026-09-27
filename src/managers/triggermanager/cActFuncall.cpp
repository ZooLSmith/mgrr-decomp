// src/managers/triggermanager/cActFuncall.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89C90..00C91D90, 6 functions

#include "mgrr.h"

// 00C89C90  Trigger::cActFuncall::vf08  size=1  [class]
void Trigger::cActFuncall::vf08(void)

{
  return;
}

// 00C89CA0  Trigger::cActFuncall::vf0C  size=1  [class]
void Trigger::cActFuncall::vf0C(void)

{
  return;
}

// 00C89CB0  Trigger::cActFuncall::vf10  size=1  [class]
void Trigger::cActFuncall::vf10(void)

{
  return;
}

// 00C89CC0  Trigger::cActFuncall::vf14  size=1  [class]
void Trigger::cActFuncall::vf14(void)

{
  return;
}

// 00C91D80  Trigger::cActFuncall::vf00  size=6  [class]
undefined * Trigger::cActFuncall::vf00(void)

{
  return &DAT_01dbe094;
}

// 00C91D90  Trigger::cActFuncall::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFuncall::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

