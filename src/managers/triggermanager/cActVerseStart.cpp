// src/managers/triggermanager/cActVerseStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EB30..00C91800, 3 functions

#include "mgrr.h"

// 00C7EB30  Trigger::cActVerseStart::vf18  size=5  [class]
undefined4 Trigger::cActVerseStart::vf18(void)

{
  return 0;
}

// 00C917F0  Trigger::cActVerseStart::vf00  size=6  [class]
undefined * Trigger::cActVerseStart::vf00(void)

{
  return &DAT_01dbe050;
}

// 00C91800  Trigger::cActVerseStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVerseStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

