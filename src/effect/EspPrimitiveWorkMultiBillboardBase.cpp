// src/effect/EspPrimitiveWorkMultiBillboardBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F50330..00F59690, 5 functions

#include "types.h"

// 00F50330  EspPrimitiveWorkMultiBillboardBase::EspPrimitiveWorkMultiBillboardBase_2  size=66  [class]
undefined4 * __fastcall
EspPrimitiveWorkMultiBillboardBase::EspPrimitiveWorkMultiBillboardBase_2(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x31] = 0;
  return param_1;
}

// 00F503C0  EspPrimitiveWorkMultiBillboardBase::vf08  size=47  [class]
void EspPrimitiveWorkMultiBillboardBase::vf08(void)

{
  FUN_00fa45a0();
  FUN_00fa45a0();
  FUN_00fa45a0();
  FUN_00fa45a0();
  FUN_00fa44a0();
  return;
}

// 00F503F0  EspPrimitiveWorkMultiBillboardBase::vf0C  size=172  [class]
void __thiscall EspPrimitiveWorkMultiBillboardBase::vf0C(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  
  uVar3 = *(uint *)(param_2 + 0x130);
  if (uVar3 == 0) {
    FUN_00ed4580(param_2,&DAT_016e124c,0);
    return;
  }
  if (*(uint *)(param_1 + 0xc4) < uVar3) {
    FUN_00ed4580(param_2,&DAT_016e126c,uVar3,*(uint *)(param_1 + 0xc4));
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x13);
  if (5 < bVar1) {
    FUN_00ed4580(param_2,&DAT_016e106c,bVar1);
    return;
  }
  bVar2 = *(byte *)(param_2 + 0x11);
  if ((bVar2 == 0x51) || ((0x55 < bVar2 && (bVar2 < 0x59)))) {
    pcVar4 = (code *)(&PTR_LAB_018d74a0)[bVar1];
  }
  else {
    pcVar4 = (code *)(&PTR_LAB_018d74b8)[bVar1];
  }
  (*pcVar4)();
  FUN_00f99090(param_1 + 0xa4);
  FUN_00f9f6d0(4,uVar3 * 2);
  return;
}

// 00F58BF0  EspPrimitiveWorkMultiBillboardBase::EspPrimitiveWorkMultiBillboardBase  size=72  [class]
undefined4 * __fastcall
EspPrimitiveWorkMultiBillboardBase::EspPrimitiveWorkMultiBillboardBase(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x31] = 0;
  *param_1 = EspPrimitiveWorkMultiBillboard<1024>::vftable;
  return param_1;
}

// 00F59690  EspPrimitiveWorkMultiBillboardBase::vf00  size=80  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiBillboardBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
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

