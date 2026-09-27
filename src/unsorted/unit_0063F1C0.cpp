// src/unsorted/unit_0063F1C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0063F1C0..0063F1C0, 1 functions

#include "types.h"

// 0063F1C0  FUN_0063f1c0  size=104  [run]
undefined4 __fastcall FUN_0063f1c0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x17e8) == 0) ||
     (fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
     fVar1 < 1.5 != (fVar1 == 1.5))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x19c0) != 0) &&
     (iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3(), iVar2 != 0)) {
    FUN_00626190(0x1000c,0,0,0);
    return 1;
  }
  FUN_00626190(0x1e,0,0,0);
  return 1;
}

