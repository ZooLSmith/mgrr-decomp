// src/managers/triggermanager/cActScene.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8ACD0..00C92460, 6 functions

#include "mgrr.h"

// 00C8ACD0  Trigger::cActScene::vf08  size=1  [class]
void Trigger::cActScene::vf08(void)

{
  return;
}

// 00C8ACE0  Trigger::cActScene::vf0C  size=1  [class]
void Trigger::cActScene::vf0C(void)

{
  return;
}

// 00C8ACF0  Trigger::cActScene::vf10  size=1  [class]
void Trigger::cActScene::vf10(void)

{
  return;
}

// 00C8AD00  Trigger::cActScene::vf14  size=1  [class]
void Trigger::cActScene::vf14(void)

{
  return;
}

// 00C92450  Trigger::cActScene::vf00  size=6  [class]
undefined * Trigger::cActScene::vf00(void)

{
  return &DAT_01dbe0ec;
}

// 00C92460  Trigger::cActScene::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActScene::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

