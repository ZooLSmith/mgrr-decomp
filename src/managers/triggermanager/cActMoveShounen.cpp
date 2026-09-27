// src/managers/triggermanager/cActMoveShounen.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F220..00C92390, 3 functions

#include "mgrr.h"

// 00C7F220  Trigger::cActMoveShounen::vf18  size=5  [class]
undefined4 Trigger::cActMoveShounen::vf18(void)

{
  return 0;
}

// 00C92380  Trigger::cActMoveShounen::vf00  size=6  [class]
undefined * Trigger::cActMoveShounen::vf00(void)

{
  return &DAT_01dbe0e0;
}

// 00C92390  Trigger::cActMoveShounen::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMoveShounen::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

