// src/managers/triggermanager/cActEnemyAppear.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8E5D0..00C94420, 6 functions

#include "mgrr.h"

// 00C8E5D0  Trigger::cActEnemyAppear::vf08  size=1  [class]
void Trigger::cActEnemyAppear::vf08(void)

{
  return;
}

// 00C8E5E0  Trigger::cActEnemyAppear::vf0C  size=1  [class]
void Trigger::cActEnemyAppear::vf0C(void)

{
  return;
}

// 00C8E5F0  Trigger::cActEnemyAppear::vf10  size=1  [class]
void Trigger::cActEnemyAppear::vf10(void)

{
  return;
}

// 00C8E600  Trigger::cActEnemyAppear::vf14  size=1  [class]
void Trigger::cActEnemyAppear::vf14(void)

{
  return;
}

// 00C94410  Trigger::cActEnemyAppear::vf00  size=6  [class]
undefined * Trigger::cActEnemyAppear::vf00(void)

{
  return &DAT_01dbe258;
}

// 00C94420  Trigger::cActEnemyAppear::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyAppear::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

