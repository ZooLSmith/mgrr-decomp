// src/phase/app/pf00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D46B80..00D6FC40, 4 functions

#include "mgrr.h"
#include "cPf00.h"

// 00D46B80  cPf00::vf0C  size=1  [class]
void cPf00::vf0C(void)

{
  return;
}

// 00D4F6B0  cPf00::vf08  size=29  [class]
void cPf00::vf08(void)

{
  DAT_01bea070 = DAT_01bea070 | 0x38600000;
  DAT_01bea09c = DAT_01bea09c | 0x7c180000;
  FUN_00c16770(0);
  return;
}

// 00D4F6D0  cPf00::vf10  size=21  [class]
void cPf00::vf10(void)

{
  DAT_01bea070 = DAT_01bea070 & 0xc79fffff;
  DAT_01bea09c = DAT_01bea09c & 0x83e7ffff;
  return;
}

// 00D6FC40  cPf00::vf00  size=54  [class]
undefined4 * __thiscall cPf00::vf00(undefined4 *param_1,byte param_2)

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

