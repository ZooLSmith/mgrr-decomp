// src/ui/cUIDrawLocator.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB39A0..00CF9A80, 7 functions

#include "types.h"

// 00CB39A0  cUIDrawLocator::vf14  size=49  [class]
void __thiscall cUIDrawLocator::vf14(int param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 4))
            (param_2,*(undefined4 *)(param_3 + 0x68),*(undefined4 *)(param_3 + 0x70),
             *(undefined4 *)(param_3 + 0x78),param_3 + 0x40,param_3 + 0x50,
             *(undefined4 *)(param_3 + 0x74));
  return;
}

// 00CB39E0  cUIDrawLocator::vf18  size=14  [class]
void cUIDrawLocator::vf18(void)

{
  FUN_00dd5650(&DAT_016b7260);
  return;
}

// 00CCEB40  cUIDrawLocator::vf04  size=8  [class]
void cUIDrawLocator::vf04(void)

{
  FUN_00cc7640();
  return;
}

// 00CE52F0  cUIDrawLocator::cUIDrawLocator  size=21  [class]
undefined4 * __fastcall cUIDrawLocator::cUIDrawLocator(undefined4 *param_1)

{
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  return param_1;
}

// 00CE5310  cUIDrawLocator::vf08  size=3  [class]
undefined4 cUIDrawLocator::vf08(void)

{
  return 0;
}

// 00CE53C0  cUIDrawLocator::vf0C  size=119  [class]
void __thiscall cUIDrawLocator::vf0C(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(param_1 + 0x20);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x60) = param_2[0x10];
  *(undefined4 *)(param_1 + 100) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x68) = param_2[0x12];
  *(undefined4 *)(param_1 + 0x6c) = param_2[0x13];
  *(undefined4 *)(param_1 + 0x70) = param_2[0x14];
  *(undefined4 *)(param_1 + 0x74) = param_2[0x15];
  *(undefined4 *)(param_1 + 0x78) = param_2[0x16];
  *(undefined4 *)(param_1 + 0x7c) = param_2[0x17];
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  FUN_00ce01f0(0x3c888889);
  return;
}

// 00CF9A80  cUIDrawLocator::vf00  size=62  [class]
undefined4 * __thiscall cUIDrawLocator::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00cc7640();
  param_1[4] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = cUIDrawBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

