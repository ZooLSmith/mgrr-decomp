// src/misc/esp04.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0450..00ED0790, 2 functions

#include "mgrr.h"
#include "esp04.h"

// 00ED0450  esp04::esp04  size=18  [class]
undefined4 * __fastcall esp04::esp04(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0790  esp04::vf00  size=30  [class]
undefined4 __thiscall esp04::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

