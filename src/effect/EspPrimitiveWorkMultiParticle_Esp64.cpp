// src/effect/EspPrimitiveWorkMultiParticle_Esp64.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F3B5C0..00F4FE40, 4 functions

#include "mgrr.h"
#include "EspPrimitiveWorkMultiParticle_Esp64.h"

// 00F3B5C0  EspPrimitiveWorkMultiParticle_Esp64::vf04  size=18  [class]
undefined4 EspPrimitiveWorkMultiParticle_Esp64::vf04(void)

{
  FUN_00dd5650(&DAT_016df390);
  return 0;
}

// 00F3FAB0  EspPrimitiveWorkMultiParticle_Esp64::vf00  size=30  [class]
undefined4 __thiscall EspPrimitiveWorkMultiParticle_Esp64::vf00(undefined4 param_1,byte param_2)

{
  EspPrimitiveWorkBase::EspPrimitiveWorkBase_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F4FE20  EspPrimitiveWorkMultiParticle_Esp64::vf08  size=20  [class]
void EspPrimitiveWorkMultiParticle_Esp64::vf08(void)

{
  FUN_00fa45a0();
  FUN_00fa45a0();
  return;
}

// 00F4FE40  EspPrimitiveWorkMultiParticle_Esp64::vf0C  size=114  [class]
void __thiscall EspPrimitiveWorkMultiParticle_Esp64::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x130);
  if (uVar1 == 0) {
    FUN_00ed4580(param_2,&DAT_016e10d4,0);
    return;
  }
  if (*(uint *)(param_1 + 0x54) < uVar1) {
    FUN_00ed4580(param_2,&DAT_016e11d0,uVar1,*(uint *)(param_1 + 0x54));
    return;
  }
  FUN_00f98f80(&DAT_01eddfd4);
  FUN_00f99010(0,param_1 + 4);
  FUN_00f99010(1,param_1 + 0x2c);
  FUN_00f9df60(1,uVar1);
  return;
}

