// src/misc/cSavingDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CAEA30..015F0480, 2 functions

#include "types.h"

// 00CAEA30  cSavingDisp::vf00  size=31  [class]
undefined4 * __thiscall cSavingDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F0480  cSavingDisp::cSavingDisp  size=11  [class]
void cSavingDisp::cSavingDisp(void)

{
  PTR_vftable_018b5750 = (undefined *)vftable;
  return;
}

