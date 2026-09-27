// src/effect/EspPrimitiveWorkMultiStrip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F58E10..00F59D90, 2 functions

#include "types.h"

// 00F58E10  EspPrimitiveWorkMultiStrip<64>::vf00  size=53  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiStrip<64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = EspPrimitiveWorkMultiStripBase::vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F59D90  EspPrimitiveWorkMultiStrip<64>::vf04  size=160  [class]
undefined4 __thiscall
EspPrimitiveWorkMultiStrip<64>::vf04
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00dd3580(0x4000,param_4);
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3580(0x900,param_4);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0x40;
      uVar3 = FUN_00f58090(iVar1,0x40,iVar2,0x480,param_2,param_3);
      FUN_00dd4940(iVar2);
      FUN_00dd4940(iVar1);
      return uVar3;
    }
    FUN_00dd4940(iVar1);
  }
  return 0;
}

