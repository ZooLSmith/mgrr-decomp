// src/unsorted/unit_00F5E6D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5E6D0..00F5E750, 3 functions

#include "mgrr.h"

// 00F5E6D0  FUN_00f5e6d0  size=60  [run]
undefined4 __thiscall FUN_00f5e6d0(int param_1,uint param_2)

{
  param_2 = param_2 & 0xf;
  *(uint *)(param_1 + 0x48) =
       (param_2 | param_2 << 4) << 0xc | *(uint *)(param_1 + 0x48) & 0xff000fff | param_2 << 0x14;
  return 1;
}

// 00F5E710  FUN_00f5e710  size=60  [run]
undefined4 __thiscall FUN_00f5e710(int param_1,uint param_2)

{
  param_2 = param_2 & 0xf;
  *(uint *)(param_1 + 0x48) =
       (param_2 | param_2 << 4) << 0xc | *(uint *)(param_1 + 0x48) & 0xff000fff | param_2 << 0x14;
  return 1;
}

// 00F5E750  FUN_00f5e750  size=104  [run]
undefined4 __thiscall FUN_00f5e750(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 2;
  iVar2 = 2;
  if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
    uVar4 = 3;
    iVar2 = 3;
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar3 = iVar2 << 8;
  *(uint *)(param_1 + 0x48) = uVar3 | uVar1 & 0xfffff020 | uVar4 | 0x20;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x48) = uVar3 | uVar1 & 0xe1fff020 | uVar4 | 0x1000020;
    return 1;
  }
  *(uint *)(param_1 + 0x48) = uVar3 | uVar1 & 0xe4fff020 | uVar4 | 0x4000323;
  return 1;
}

