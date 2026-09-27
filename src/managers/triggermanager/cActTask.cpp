// src/managers/triggermanager/cActTask.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89D30..00C91DF0, 6 functions

#include "mgrr.h"

// 00C89D30  Trigger::cActTask::vf08  size=1  [class]
void Trigger::cActTask::vf08(void)

{
  return;
}

// 00C89D40  Trigger::cActTask::vf0C  size=1  [class]
void Trigger::cActTask::vf0C(void)

{
  return;
}

// 00C89D50  Trigger::cActTask::vf10  size=1  [class]
void Trigger::cActTask::vf10(void)

{
  return;
}

// 00C89D60  Trigger::cActTask::vf14  size=1  [class]
void Trigger::cActTask::vf14(void)

{
  return;
}

// 00C91DE0  Trigger::cActTask::vf00  size=6  [class]
undefined * Trigger::cActTask::vf00(void)

{
  return &DAT_01dbe098;
}

// 00C91DF0  Trigger::cActTask::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTask::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

