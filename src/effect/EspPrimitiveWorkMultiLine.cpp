// src/effect/EspPrimitiveWorkMultiLine.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F58D60..00F59960, 2 functions

#include "mgrr.h"

// 00F58D60  EspPrimitiveWorkMultiLine<1024,4>::vf00  size=80  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiLine<1024,4>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = EspPrimitiveWorkMultiLineBase::vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F59960  EspPrimitiveWorkMultiLine<1024,4>::vf04  size=25  [class]
void EspPrimitiveWorkMultiLine<1024,4>::vf04(undefined4 param_1,undefined4 param_2)

{
  FUN_00f579f0(0x400,4,param_1,param_2);
  return;
}

