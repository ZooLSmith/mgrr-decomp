// src/managers/triggermanager/cActMvObjectType.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8C600..00C934C0, 6 functions

#include "mgrr.h"

// 00C8C600  Trigger::cActMvObjectType::vf08  size=1  [class]
void Trigger::cActMvObjectType::vf08(void)

{
  return;
}

// 00C8C610  Trigger::cActMvObjectType::vf0C  size=1  [class]
void Trigger::cActMvObjectType::vf0C(void)

{
  return;
}

// 00C8C620  Trigger::cActMvObjectType::vf10  size=1  [class]
void Trigger::cActMvObjectType::vf10(void)

{
  return;
}

// 00C8C630  Trigger::cActMvObjectType::vf14  size=1  [class]
void Trigger::cActMvObjectType::vf14(void)

{
  return;
}

// 00C934B0  Trigger::cActMvObjectType::vf00  size=6  [class]
undefined * Trigger::cActMvObjectType::vf00(void)

{
  return &DAT_01dbe1ac;
}

// 00C934C0  Trigger::cActMvObjectType::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMvObjectType::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

