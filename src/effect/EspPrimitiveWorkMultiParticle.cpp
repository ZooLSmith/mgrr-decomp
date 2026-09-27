// src/effect/EspPrimitiveWorkMultiParticle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F58BB0..00F59840, 2 functions

#include "types.h"

// 00F58BB0  EspPrimitiveWorkMultiParticle<1024>::vf00  size=53  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiParticle<1024>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = EspPrimitiveWorkMultiParticleBase::vftable;
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F59840  EspPrimitiveWorkMultiParticle<1024>::vf04  size=18  [class]
void EspPrimitiveWorkMultiParticle<1024>::vf04(undefined4 param_1)

{
  FUN_00f56de0(0x400,param_1);
  return;
}

