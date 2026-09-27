// src/effect/EspEmtBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F200E0..00F409E0, 2 functions

#include "mgrr.h"
#include "EspEmtBase.h"

// 00F200E0  EspEmtBase::EspEmtBase  size=132  [class]
undefined4 * __fastcall EspEmtBase::EspEmtBase(undefined4 *param_1)

{
  *param_1 = cEspBase::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00f59e40();
  FUN_00ec9bf0();
  FUN_00ddbbb0();
  param_1[0x101] = 0;
  *param_1 = vftable;
  param_1[0x108] = 0;
  param_1[0x102] = 0xc0000000;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x114] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  FUN_00dd7240();
  return param_1;
}

// 00F409E0  EspEmtBase::vf00  size=30  [class]
undefined4 __thiscall EspEmtBase::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_9();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

