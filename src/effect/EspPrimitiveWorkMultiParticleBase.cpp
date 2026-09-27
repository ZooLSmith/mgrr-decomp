// src/effect/EspPrimitiveWorkMultiParticleBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F58B50..00F59650, 2 functions

#include "types.h"

// 00F58B50  EspPrimitiveWorkMultiParticleBase::EspPrimitiveWorkMultiParticleBase  size=42  [class]
undefined4 * __fastcall
EspPrimitiveWorkMultiParticleBase::EspPrimitiveWorkMultiParticleBase(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  param_1[0x15] = 0;
  *param_1 = EspPrimitiveWorkMultiParticle<1024>::vftable;
  return param_1;
}

// 00F59650  EspPrimitiveWorkMultiParticleBase::vf00  size=53  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiParticleBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

