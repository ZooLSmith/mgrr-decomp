// src/phase/app/pf15.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D477B0..00D707A0, 4 functions

#include "types.h"

// 00D477B0  cPf15::vf08  size=1  [class]
void cPf15::vf08(void)

{
  return;
}

// 00D477C0  cPf15::vf0C  size=26  [class]
void cPf15::vf0C(void)

{
  FUN_00a4ac40(0x118,"P118_BEACH",0x1000);
  return;
}

// 00D477E0  cPf15::vf10  size=1  [class]
void cPf15::vf10(void)

{
  return;
}

// 00D707A0  cPf15::vf00  size=54  [class]
undefined4 * __thiscall cPf15::vf00(undefined4 *param_1,byte param_2)

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

