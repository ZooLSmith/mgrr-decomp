// src/effect/EspPrimitiveWorkRadialCircle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F589B0..00F59CD0, 6 functions

#include "mgrr.h"

// 00F589B0  EspPrimitiveWorkRadialCircle<12>::EspPrimitiveWorkRadialCircle<12>  size=54  [class]
undefined4 * __fastcall
EspPrimitiveWorkRadialCircle<12>::EspPrimitiveWorkRadialCircle<12>(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkRadialCircleBase::vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  return param_1;
}

// 00F58A30  EspPrimitiveWorkRadialCircle<12>::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkRadialCircle<12>::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkRadialCircleBase::vftable;
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

// 00F58A80  EspPrimitiveWorkRadialCircle<24>::EspPrimitiveWorkRadialCircle<24>  size=54  [class]
undefined4 * __fastcall
EspPrimitiveWorkRadialCircle<24>::EspPrimitiveWorkRadialCircle<24>(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkRadialCircleBase::vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  return param_1;
}

// 00F58B00  EspPrimitiveWorkRadialCircle<24>::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkRadialCircle<24>::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkRadialCircleBase::vftable;
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

// 00F59C10  EspPrimitiveWorkRadialCircle<12>::vf04  size=179  [class]
/* WARNING: Removing unreachable block (ram,0x00f59c69) */
/* WARNING: Removing unreachable block (ram,0x00f59ca3) */

undefined4
EspPrimitiveWorkRadialCircle<12>::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00dd3580(0xa8,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_00f58ee0(0x38,param_3);
    if (iVar2 != 0) {
      uVar3 = FUN_00f519d0(iVar1,0,0xe,param_1);
      FUN_00dd4940(iVar1);
      return uVar3;
    }
    FUN_00dd4940(iVar1);
  }
  return 0;
}

// 00F59CD0  EspPrimitiveWorkRadialCircle<24>::vf04  size=179  [class]
/* WARNING: Removing unreachable block (ram,0x00f59d29) */
/* WARNING: Removing unreachable block (ram,0x00f59d63) */

undefined4
EspPrimitiveWorkRadialCircle<24>::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00dd3580(0x138,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_00f58ee0(0x68,param_3);
    if (iVar2 != 0) {
      uVar3 = FUN_00f519d0(iVar1,0,0x1a,param_1);
      FUN_00dd4940(iVar1);
      return uVar3;
    }
    FUN_00dd4940(iVar1);
  }
  return 0;
}

