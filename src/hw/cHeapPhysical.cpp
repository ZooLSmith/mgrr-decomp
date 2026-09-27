// src/hw/cHeapPhysical.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD48F0..00DD51A0, 3 functions

#include "types.h"

// 00DD48F0  Hw::cHeapPhysical::cHeapPhysical  size=47  [class]
void __fastcall Hw::cHeapPhysical::cHeapPhysical(undefined4 *param_1)

{
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  *param_1 = vftable;
  return;
}

// 00DD4B60  Hw::cHeapPhysical::vf08  size=109  [class]
void __fastcall Hw::cHeapPhysical::vf08(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) {
    if (*(int *)(iVar1 + 0x34) == param_1) {
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      FUN_00dd2a30(param_1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + -4) + 0x3c))(iVar1,0);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_00dd7270();
  return;
}

// 00DD51A0  Hw::cHeapPhysical::vf00  size=38  [class]
int __thiscall Hw::cHeapPhysical::vf00(int param_1,byte param_2)

{
  cHeap::cHeap_4();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    (**(code **)(**(int **)(param_1 + -4) + 0x3c))(param_1,0);
  }
  return param_1;
}

