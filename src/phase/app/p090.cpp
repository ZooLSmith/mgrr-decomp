// src/phase/app/p090.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D46B20..00D6FF20, 4 functions

#include "types.h"

// 00D46B20  cP090::vf08  size=1  [class]
void cP090::vf08(void)

{
  return;
}

// 00D46B30  cP090::vf0C  size=1  [class]
void cP090::vf0C(void)

{
  return;
}

// 00D46B40  cP090::vf10  size=1  [class]
void cP090::vf10(void)

{
  return;
}

// 00D6FF20  cP090::vf00  size=54  [class]
undefined4 * __thiscall cP090::vf00(undefined4 *param_1,byte param_2)

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

