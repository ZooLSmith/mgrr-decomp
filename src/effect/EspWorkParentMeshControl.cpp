// src/effect/EspWorkParentMeshControl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F1C20..009F6E80, 5 functions

#include "types.h"

// 009F1C20  EspWorkParentMeshControl::vf28  size=11  [class]
void EspWorkParentMeshControl::vf28(void)

{
  FUN_009f0fc0();
  return;
}

// 009F5BF0  EspWorkParentMeshControl::vf24  size=11  [class]
void EspWorkParentMeshControl::vf24(void)

{
  Spline<float>::Spline<float>_2();
  return;
}

// 009F6AD0  EspWorkParentMeshControl::EspWorkParentMeshControl  size=152  [class]
undefined4 * __fastcall EspWorkParentMeshControl::EspWorkParentMeshControl(undefined4 *param_1)

{
  EspWorkParentMeshControlBase::EspWorkParentMeshControlBase_3();
  *param_1 = vftable;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x130] = 0;
  FUN_00a7c930();
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  *(undefined2 *)(param_1 + 0x134) = 0;
  *(undefined1 *)((int)param_1 + 0x4d2) = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  return param_1;
}

// 009F6BA0  EspWorkParentMeshControl::vf20  size=36  [class]
void __thiscall EspWorkParentMeshControl::vf20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a81330(param_2);
  FUN_009f6260(param_1,uVar1,param_2);
  return;
}

// 009F6E80  EspWorkParentMeshControl::vf00  size=55  [class]
undefined4 * __thiscall EspWorkParentMeshControl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Spline<float>::Spline<float>_2();
  *param_1 = EspWorkParentMeshControlBase::vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

