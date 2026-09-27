// src/unsorted/unit_00B52DB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B52DB0..00B52DB0, 1 functions

#include "types.h"

// 00B52DB0  FUN_00b52db0  size=139  [run]
undefined4 __fastcall FUN_00b52db0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x1718) == 0) ||
     (fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
     fVar1 < 1.5 != (fVar1 == 1.5))) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xdd8) & 0x80000) != 0) {
    FUN_00b39f00(0xc0007,0,0,0);
    return 1;
  }
  if ((*(int *)(param_1 + 0x18f0) != 0) &&
     (iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5(), iVar2 != 0)) {
    FUN_00b39f00(0x1000c,0,0,0);
    return 1;
  }
  FUN_00b39f00(0x1e,0,0,0);
  return 1;
}

