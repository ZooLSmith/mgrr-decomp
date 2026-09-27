// src/misc/esp00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F12A90..00F406D0, 2 functions

#include "mgrr.h"
#include "esp00.h"

// 00F12A90  esp00::esp00  size=18  [class]
undefined4 * __fastcall esp00::esp00(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00F406D0  esp00::vf00  size=72  [class]
undefined4 * __thiscall esp00::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

