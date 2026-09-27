// src/effect/EspPrimitiveWorkMultiBillboard.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F58BF0..00F598D0, 3 functions

#include "mgrr.h"

// 00F58BF0  EspPrimitiveWorkMultiBillboard<1024>::EspPrimitiveWorkMultiBillboard<1024>  size=72  [class]
undefined4 * __fastcall
EspPrimitiveWorkMultiBillboard<1024>::EspPrimitiveWorkMultiBillboard<1024>(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiBillboardBase::vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x31] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00F58C80  EspPrimitiveWorkMultiBillboard<1024>::vf00  size=80  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiBillboard<1024>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = EspPrimitiveWorkMultiBillboardBase::vftable;
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

// 00F598D0  EspPrimitiveWorkMultiBillboard<1024>::vf04  size=29  [class]
void EspPrimitiveWorkMultiBillboard<1024>::vf04(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack0000000c;
  
  uStack0000000c = param_2;
  FUN_00f57130();
  return;
}

