// src/effect/EspWorkParentMeshControlWtr.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F1C30..009F6EC0, 5 functions

#include "mgrr.h"
#include "EspWorkParentMeshControlWtr.h"

// 009F1C30  EspWorkParentMeshControlWtr::vf28  size=11  [class]
void EspWorkParentMeshControlWtr::vf28(void)

{
  FUN_009f1060();
  return;
}

// 009F5C00  EspWorkParentMeshControlWtr::vf24  size=11  [class]
void EspWorkParentMeshControlWtr::vf24(void)

{
  Spline<float>::Spline<float>();
  return;
}

// 009F6BD0  EspWorkParentMeshControlWtr::EspWorkParentMeshControlWtr  size=158  [class]
undefined4 * __fastcall
EspWorkParentMeshControlWtr::EspWorkParentMeshControlWtr(undefined4 *param_1)

{
  EspWorkParentMeshControlBase::EspWorkParentMeshControlBase();
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
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x134] = 0;
  FUN_00a7c930();
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  *(undefined2 *)(param_1 + 0x138) = 0;
  *(undefined1 *)((int)param_1 + 0x4e2) = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  return param_1;
}

// 009F6CA0  EspWorkParentMeshControlWtr::vf20  size=36  [class]
void __thiscall EspWorkParentMeshControlWtr::vf20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a81330(param_2);
  FUN_009f65d0(param_1,uVar1,param_2);
  return;
}

// 009F6EC0  EspWorkParentMeshControlWtr::vf00  size=55  [class]
undefined4 * __thiscall EspWorkParentMeshControlWtr::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Spline<float>::Spline<float>();
  *param_1 = EspWorkParentMeshControlBase::vftable;
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

