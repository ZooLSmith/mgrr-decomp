// src/effect/EspPrimitiveWorkCircle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F58890..00F59B50, 4 functions

#include "types.h"

// 00F58890  EspPrimitiveWorkCircle<12>::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkCircle<12>::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkCircleBase::vftable;
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

// 00F58960  EspPrimitiveWorkCircle<24>::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkCircle<24>::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkCircleBase::vftable;
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

// 00F59A90  EspPrimitiveWorkCircle<12>::vf04  size=179  [class]
/* WARNING: Removing unreachable block (ram,0x00f59ae9) */
/* WARNING: Removing unreachable block (ram,0x00f59b23) */

undefined4
EspPrimitiveWorkCircle<12>::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00dd3580(0xa8,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_00f58ee0(0x38,param_3);
    if (iVar2 != 0) {
      uVar3 = FUN_00f51450(iVar1,0,0xe,param_1);
      FUN_00dd4940(iVar1);
      return uVar3;
    }
    FUN_00dd4940(iVar1);
  }
  return 0;
}

// 00F59B50  EspPrimitiveWorkCircle<24>::vf04  size=179  [class]
/* WARNING: Removing unreachable block (ram,0x00f59ba9) */
/* WARNING: Removing unreachable block (ram,0x00f59be3) */

undefined4
EspPrimitiveWorkCircle<24>::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00dd3580(0x138,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_00f58ee0(0x68,param_3);
    if (iVar2 != 0) {
      uVar3 = FUN_00f51450(iVar1,0,0x1a,param_1);
      FUN_00dd4940(iVar1);
      return uVar3;
    }
    FUN_00dd4940(iVar1);
  }
  return 0;
}

