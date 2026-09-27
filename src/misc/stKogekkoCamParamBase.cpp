// src/misc/stKogekkoCamParamBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F43D0..005FA360, 4 functions

#include "types.h"

// 005F43D0  stKogekkoCamParamBase::vf04  size=1  [class]
void stKogekkoCamParamBase::vf04(void)

{
  return;
}

// 005F5640  stKogekkoCamParamBase::stKogekkoCamParamBase  size=9  [class]
void __fastcall stKogekkoCamParamBase::stKogekkoCamParamBase(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 005F5650  stKogekkoCamParamBase::stKogekkoCamParamBase_2  size=7  [class]
void __fastcall stKogekkoCamParamBase::stKogekkoCamParamBase_2(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 005FA360  stKogekkoCamParamBase::vf00  size=31  [class]
undefined4 * __thiscall stKogekkoCamParamBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

