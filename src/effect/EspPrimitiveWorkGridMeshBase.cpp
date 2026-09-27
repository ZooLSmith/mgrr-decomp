// src/effect/EspPrimitiveWorkGridMeshBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4F670..00F59470, 4 functions

#include "types.h"

// 00F4F670  EspPrimitiveWorkGridMeshBase::EspPrimitiveWorkGridMeshBase  size=48  [class]
undefined4 * __fastcall
EspPrimitiveWorkGridMeshBase::EspPrimitiveWorkGridMeshBase(undefined4 *param_1)

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

// 00F4F6F0  EspPrimitiveWorkGridMeshBase::vf08  size=36  [class]
void EspPrimitiveWorkGridMeshBase::vf08(void)

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

// 00F4F720  EspPrimitiveWorkGridMeshBase::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkGridMeshBase::vf0C(int param_1,int param_2)

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
  FUN_00f9dfb0(5);
  return;
}

// 00F59470  EspPrimitiveWorkGridMeshBase::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkGridMeshBase::vf00(undefined4 *param_1,byte param_2)

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

