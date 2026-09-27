// src/managers/triggermanager/cActDoorCloseDelay.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81800..00C94C10, 7 functions

#include "mgrr.h"

// 00C81800  Trigger::cActDoorCloseDelay::vf18  size=1  [class]
undefined4 __fastcall Trigger::cActDoorCloseDelay::vf18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aaa1c);
    return 0;
  }
  uVar2 = FUN_00e03ea0(iVar1 + 8);
  uVar2 = FUN_00c317b0(uVar2,*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

// 00C8F9D0  Trigger::cActDoorCloseDelay::vf08  size=1  [class]
void Trigger::cActDoorCloseDelay::vf08(void)

{
  return;
}

// 00C8F9E0  Trigger::cActDoorCloseDelay::vf0C  size=1  [class]
void Trigger::cActDoorCloseDelay::vf0C(void)

{
  return;
}

// 00C8F9F0  Trigger::cActDoorCloseDelay::vf10  size=1  [class]
void Trigger::cActDoorCloseDelay::vf10(void)

{
  return;
}

// 00C8FA00  Trigger::cActDoorCloseDelay::vf14  size=1  [class]
void Trigger::cActDoorCloseDelay::vf14(void)

{
  return;
}

// 00C94C00  Trigger::cActDoorCloseDelay::vf00  size=6  [class]
undefined * Trigger::cActDoorCloseDelay::vf00(void)

{
  return &DAT_01dbe2d4;
}

// 00C94C10  Trigger::cActDoorCloseDelay::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorCloseDelay::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

