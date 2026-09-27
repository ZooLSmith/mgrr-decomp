// src/managers/triggermanager/cActVrReturn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81720..00C94AD0, 7 functions

#include "mgrr.h"

// 00C81720  Trigger::cActVrReturn::vf18  size=56  [class]
void Trigger::cActVrReturn::vf18(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00d46910();
  iVar1 = FUN_00d46900();
  puVar2 = (undefined4 *)FUN_00d46900();
  FUN_00a4ac40(*puVar2,iVar1 + 8,0xffffffff);
  return;
}

// 00C8F6B0  Trigger::cActVrReturn::vf08  size=1  [class]
void Trigger::cActVrReturn::vf08(void)

{
  return;
}

// 00C8F6C0  Trigger::cActVrReturn::vf0C  size=1  [class]
void Trigger::cActVrReturn::vf0C(void)

{
  return;
}

// 00C8F6D0  Trigger::cActVrReturn::vf10  size=1  [class]
void Trigger::cActVrReturn::vf10(void)

{
  return;
}

// 00C8F6E0  Trigger::cActVrReturn::vf14  size=1  [class]
void Trigger::cActVrReturn::vf14(void)

{
  return;
}

// 00C94AC0  Trigger::cActVrReturn::vf00  size=6  [class]
undefined * Trigger::cActVrReturn::vf00(void)

{
  return &DAT_01dbe2c0;
}

// 00C94AD0  Trigger::cActVrReturn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVrReturn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

