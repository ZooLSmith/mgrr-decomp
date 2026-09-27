// src/managers/triggermanager/cActTeleportExplicit.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89150..00C916C0, 6 functions

#include "mgrr.h"

// 00C89150  Trigger::cActTeleportExplicit::vf08  size=1  [class]
void Trigger::cActTeleportExplicit::vf08(void)

{
  return;
}

// 00C89160  Trigger::cActTeleportExplicit::vf0C  size=1  [class]
void Trigger::cActTeleportExplicit::vf0C(void)

{
  return;
}

// 00C89170  Trigger::cActTeleportExplicit::vf10  size=1  [class]
void Trigger::cActTeleportExplicit::vf10(void)

{
  return;
}

// 00C89180  Trigger::cActTeleportExplicit::vf14  size=1  [class]
void Trigger::cActTeleportExplicit::vf14(void)

{
  return;
}

// 00C916B0  Trigger::cActTeleportExplicit::vf00  size=6  [class]
undefined * Trigger::cActTeleportExplicit::vf00(void)

{
  return &DAT_01dbe040;
}

// 00C916C0  Trigger::cActTeleportExplicit::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTeleportExplicit::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

