// src/effect/EspPrimitiveWorkMultiStripBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F50960..00F59730, 5 functions

#include "mgrr.h"
#include "EspPrimitiveWorkMultiStripBase.h"

// 00F50960  EspPrimitiveWorkMultiStripBase::EspPrimitiveWorkMultiStripBase_2  size=36  [class]
undefined4 * __fastcall
EspPrimitiveWorkMultiStripBase::EspPrimitiveWorkMultiStripBase_2(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x13] = 0;
  return param_1;
}

// 00F509C0  EspPrimitiveWorkMultiStripBase::vf08  size=20  [class]
void EspPrimitiveWorkMultiStripBase::vf08(void)

{
  FUN_00fa45a0();
  FUN_00fa44a0();
  return;
}

// 00F509E0  EspPrimitiveWorkMultiStripBase::vf0C  size=154  [class]
void __thiscall EspPrimitiveWorkMultiStripBase::vf0C(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x130);
  if (uVar2 == 0) {
    FUN_00ed4580(param_2,&DAT_016e12b4,0);
    return;
  }
  if (*(uint *)(param_1 + 0x4c) < uVar2) {
    FUN_00ed4580(param_2,&DAT_016e1324,uVar2,*(uint *)(param_1 + 0x4c));
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x13);
  if (1 < bVar1) {
    FUN_00ed4580(param_2,&DAT_016e139c,bVar1);
    return;
  }
  FUN_00f98f80((&PTR_DAT_018d74d8)[bVar1]);
  FUN_00f99010(0,param_1 + 4);
  FUN_00f99090(param_1 + 0x2c);
  FUN_00f9f6d0(4,uVar2 * 6);
  return;
}

// 00F58DB0  EspPrimitiveWorkMultiStripBase::EspPrimitiveWorkMultiStripBase  size=42  [class]
undefined4 * __fastcall
EspPrimitiveWorkMultiStripBase::EspPrimitiveWorkMultiStripBase(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x13] = 0;
  *param_1 = EspPrimitiveWorkMultiStrip<64>::vftable;
  return param_1;
}

// 00F59730  EspPrimitiveWorkMultiStripBase::vf00  size=53  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiStripBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

