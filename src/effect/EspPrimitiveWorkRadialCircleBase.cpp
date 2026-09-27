// src/effect/EspPrimitiveWorkRadialCircleBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4ED70..00F591F0, 5 functions

#include "mgrr.h"
#include "EspPrimitiveWorkRadialCircleBase.h"

// 00F4ED70  EspPrimitiveWorkRadialCircleBase::vf08  size=36  [class]
void EspPrimitiveWorkRadialCircleBase::vf08(void)

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

// 00F4EDA0  EspPrimitiveWorkRadialCircleBase::vf0C  size=92  [class]
void __thiscall EspPrimitiveWorkRadialCircleBase::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f99010(0,param_1 + 4);
  uVar1 = *(uint *)(param_2 + 8);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      param_1 = param_1 + 0x2c;
    }
    else {
      param_1 = param_1 + 0x7c;
    }
  }
  else if ((uVar1 & 8) == 0) {
    param_1 = param_1 + 0x54;
  }
  else {
    param_1 = param_1 + 0xa4;
  }
  FUN_00f99010(1,param_1);
  FUN_00f9dfb0(6);
  return;
}

// 00F589B0  EspPrimitiveWorkRadialCircleBase::EspPrimitiveWorkRadialCircleBase  size=54  [class]
undefined4 * __fastcall
EspPrimitiveWorkRadialCircleBase::EspPrimitiveWorkRadialCircleBase(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = EspPrimitiveWorkRadialCircle<12>::vftable;
  return param_1;
}

// 00F58A80  EspPrimitiveWorkRadialCircleBase::EspPrimitiveWorkRadialCircleBase_2  size=54  [class]
undefined4 * __fastcall
EspPrimitiveWorkRadialCircleBase::EspPrimitiveWorkRadialCircleBase_2(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = EspPrimitiveWorkRadialCircle<24>::vftable;
  return param_1;
}

// 00F591F0  EspPrimitiveWorkRadialCircleBase::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkRadialCircleBase::vf00(undefined4 *param_1,byte param_2)

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

