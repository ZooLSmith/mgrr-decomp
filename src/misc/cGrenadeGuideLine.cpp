// src/misc/cGrenadeGuideLine.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB92A0..00CD4470, 4 functions

#include "types.h"

// 00CB92A0  cGrenadeGuideLine::cGrenadeGuideLine_2  size=52  [class]
void __fastcall cGrenadeGuideLine::cGrenadeGuideLine_2(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = vftable;
  param_1[1] = 0;
  DAT_01dc0df8 = 0;
  puVar1 = &DAT_01dc4528;
  do {
    puVar1[-2] = 0;
    puVar2 = puVar1 + 4;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  } while ((int)puVar2 < 0x1dc4668);
  return;
}

// 00CB92E0  cGrenadeGuideLine::cGrenadeGuideLine  size=33  [class]
void __fastcall cGrenadeGuideLine::cGrenadeGuideLine(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CB9310  FUN_00cb9310  size=29  [callgraph]
undefined4 FUN_00cb9310(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(8,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cGrenadeGuideLine::cGrenadeGuideLine_2();
    return uVar2;
  }
  return 0;
}

// 00CD4470  cGrenadeGuideLine::vf00  size=53  [class]
undefined4 * __thiscall cGrenadeGuideLine::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

