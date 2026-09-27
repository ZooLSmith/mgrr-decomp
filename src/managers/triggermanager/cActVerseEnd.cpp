// src/managers/triggermanager/cActVerseEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EB40..00C91840, 3 functions

#include "mgrr.h"

// 00C7EB40  Trigger::cActVerseEnd::vf18  size=5  [class]
undefined4 Trigger::cActVerseEnd::vf18(void)

{
  return 0;
}

// 00C91830  Trigger::cActVerseEnd::vf00  size=6  [class]
undefined * Trigger::cActVerseEnd::vf00(void)

{
  return &DAT_01dbe054;
}

// 00C91840  Trigger::cActVerseEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVerseEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

