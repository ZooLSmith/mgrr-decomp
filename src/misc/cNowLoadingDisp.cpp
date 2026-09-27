// src/misc/cNowLoadingDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CAE7E0..015F0470, 2 functions

#include "mgrr.h"
#include "cNowLoadingDisp.h"

// 00CAE7E0  cNowLoadingDisp::vf00  size=31  [class]
undefined4 * __thiscall cNowLoadingDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F0470  cNowLoadingDisp::cNowLoadingDisp  size=11  [class]
void cNowLoadingDisp::cNowLoadingDisp(void)

{
  PTR_vftable_018b5740 = (undefined *)vftable;
  return;
}

