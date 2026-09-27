// src/effect/EspPrimitiveWorkMultiLineBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F50690..00F596E0, 4 functions

#include "mgrr.h"
#include "EspPrimitiveWorkMultiLineBase.h"

// 00F50690  EspPrimitiveWorkMultiLineBase::EspPrimitiveWorkMultiLineBase  size=70  [class]
undefined4 * __fastcall
EspPrimitiveWorkMultiLineBase::EspPrimitiveWorkMultiLineBase(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return param_1;
}

// 00F50720  EspPrimitiveWorkMultiLineBase::vf08  size=47  [class]
void EspPrimitiveWorkMultiLineBase::vf08(void)

{
  FUN_00fa45a0();
  FUN_00fa45a0();
  FUN_00fa45a0();
  FUN_00fa45a0();
  FUN_00fa44a0();
  return;
}

// 00F50750  EspPrimitiveWorkMultiLineBase::vf0C  size=151  [class]
void __thiscall EspPrimitiveWorkMultiLineBase::vf0C(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x130);
  if (uVar2 == 0) {
    FUN_00ed4580(param_2,&DAT_016e10f4,0);
    return;
  }
  if (*(uint *)(param_1 + 0xc4) < uVar2) {
    FUN_00ed4580(param_2,&DAT_016e1294,uVar2,*(uint *)(param_1 + 0xc4));
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x13);
  if (1 < bVar1) {
    FUN_00ed4580(param_2,&DAT_016e110c,bVar1);
    return;
  }
  (*(code *)(&PTR_LAB_018d74d0)[bVar1])();
  FUN_00f99090(param_1 + 0xa4);
  FUN_00f9f6d0(2,(*(int *)(param_1 + 200) + -1) * uVar2);
  return;
}

// 00F596E0  EspPrimitiveWorkMultiLineBase::vf00  size=80  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiLineBase::vf00(undefined4 *param_1,byte param_2)

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

