// src/effect/EspPrimitiveWorkCircleBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4EBE0..00F591A0, 5 functions

#include "types.h"

// 00F4EBE0  EspPrimitiveWorkCircleBase::EspPrimitiveWorkCircleBase_2  size=48  [class]
undefined4 * __fastcall
EspPrimitiveWorkCircleBase::EspPrimitiveWorkCircleBase_2(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00F4EC60  EspPrimitiveWorkCircleBase::vf08  size=36  [class]
void EspPrimitiveWorkCircleBase::vf08(void)

{
  int iVar1;
  
  FUN_00fa45a0();
  iVar1 = 4;
  do {
    FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00F4EC90  EspPrimitiveWorkCircleBase::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkCircleBase::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
    uVar1 = *(uint *)(param_2 + 8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(1,param_1 + 0x2c + (uVar1 >> 2 & 3) * 0x28);
  }
  else {
    FUN_00f98f80(&PTR_vftable_018da4c0);
  }
  FUN_00f99010(0,param_1 + 4);
  FUN_00f9dfb0(6);
  return;
}

// 00F588E0  EspPrimitiveWorkCircleBase::EspPrimitiveWorkCircleBase  size=54  [class]
undefined4 * __fastcall EspPrimitiveWorkCircleBase::EspPrimitiveWorkCircleBase(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = EspPrimitiveWorkCircle<24>::vftable;
  return param_1;
}

// 00F591A0  EspPrimitiveWorkCircleBase::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkCircleBase::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 3;
  do {
    thunk_FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

