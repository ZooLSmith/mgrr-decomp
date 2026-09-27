// src/phase/app/p092.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B1C0..00D6FF60, 4 functions

#include "mgrr.h"
#include "P092.h"

// 00D4B1C0  P092::vf0C  size=1  [class]
void P092::vf0C(void)

{
  return;
}

// 00D4B1D0  P092::vf08  size=1  [class]
void P092::vf08(void)

{
  return;
}

// 00D4B1E0  P092::vf10  size=1  [class]
void P092::vf10(void)

{
  return;
}

// 00D6FF60  P092::vf00  size=54  [class]
undefined4 * __thiscall P092::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

