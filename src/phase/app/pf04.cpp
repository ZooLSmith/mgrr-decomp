// src/phase/app/pf04.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47340..00D6FD00, 4 functions

#include "types.h"

// 00D47340  cPf04::vf08  size=1  [class]
void cPf04::vf08(void)

{
  return;
}

// 00D47350  cPf04::vf0C  size=23  [class]
void cPf04::vf0C(void)

{
  FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
  return;
}

// 00D47370  cPf04::vf10  size=1  [class]
void cPf04::vf10(void)

{
  return;
}

// 00D6FD00  cPf04::vf00  size=54  [class]
undefined4 * __thiscall cPf04::vf00(undefined4 *param_1,byte param_2)

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

