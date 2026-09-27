// src/managers/triggermanager/cActObjAttach.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8C060..00C93080, 6 functions

#include "mgrr.h"

// 00C8C060  Trigger::cActObjAttach::vf08  size=1  [class]
void Trigger::cActObjAttach::vf08(void)

{
  return;
}

// 00C8C070  Trigger::cActObjAttach::vf0C  size=1  [class]
void Trigger::cActObjAttach::vf0C(void)

{
  return;
}

// 00C8C080  Trigger::cActObjAttach::vf10  size=1  [class]
void Trigger::cActObjAttach::vf10(void)

{
  return;
}

// 00C8C090  Trigger::cActObjAttach::vf14  size=1  [class]
void Trigger::cActObjAttach::vf14(void)

{
  return;
}

// 00C93070  Trigger::cActObjAttach::vf00  size=6  [class]
undefined * Trigger::cActObjAttach::vf00(void)

{
  return &DAT_01dbe168;
}

// 00C93080  Trigger::cActObjAttach::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActObjAttach::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

