// src/phase/app/pfff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D46A90..00D70B90, 4 functions

#include "mgrr.h"
#include "cPfff.h"

// 00D46A90  cPfff::vf08  size=1  [class]
void cPfff::vf08(void)

{
  return;
}

// 00D46AA0  cPfff::vf0C  size=1  [class]
void cPfff::vf0C(void)

{
  return;
}

// 00D46AB0  cPfff::vf10  size=1  [class]
void cPfff::vf10(void)

{
  return;
}

// 00D70B90  cPfff::vf00  size=54  [class]
undefined4 * __thiscall cPfff::vf00(undefined4 *param_1,byte param_2)

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

