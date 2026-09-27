// src/managers/triggermanager/cActFollowPath.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EFB0..00C91F50, 7 functions

#include "mgrr.h"

// 00C7EFB0  Trigger::cActFollowPath::vf18  size=5  [class]
undefined4 Trigger::cActFollowPath::vf18(void)

{
  return 0;
}

// 00C89FB0  Trigger::cActFollowPath::vf08  size=1  [class]
void Trigger::cActFollowPath::vf08(void)

{
  return;
}

// 00C89FC0  Trigger::cActFollowPath::vf0C  size=1  [class]
void Trigger::cActFollowPath::vf0C(void)

{
  return;
}

// 00C89FD0  Trigger::cActFollowPath::vf10  size=1  [class]
void Trigger::cActFollowPath::vf10(void)

{
  return;
}

// 00C89FE0  Trigger::cActFollowPath::vf14  size=1  [class]
void Trigger::cActFollowPath::vf14(void)

{
  return;
}

// 00C91F40  Trigger::cActFollowPath::vf00  size=6  [class]
undefined * Trigger::cActFollowPath::vf00(void)

{
  return &DAT_01dbe0a8;
}

// 00C91F50  Trigger::cActFollowPath::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFollowPath::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

