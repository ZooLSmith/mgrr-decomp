// src/unsorted/unit_00F64460.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F64460..00F644E0, 2 functions

#include "mgrr.h"

// 00F64460  FUN_00f64460  size=128  [run]
undefined4 __thiscall FUN_00f64460(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  param_2 = param_2 & 0xf;
  uVar1 = param_2 << 0xc;
  uVar2 = param_2 << 0x10;
  param_2 = param_2 << 0x14;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff000fff | uVar1 | uVar2 | param_2;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff000fff | uVar1 | uVar2 | param_2;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xff000fff | uVar1 | uVar2 | param_2;
  return 1;
}

// 00F644E0  FUN_00f644e0  size=98  [run]
undefined4 __thiscall FUN_00f644e0(int param_1,uint param_2)

{
  param_2 = param_2 & 0xf;
  *(uint *)(param_1 + 0x48) =
       *(uint *)(param_1 + 0x48) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  return 1;
}

