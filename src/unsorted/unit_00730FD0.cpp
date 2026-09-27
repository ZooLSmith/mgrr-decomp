// src/unsorted/unit_00730FD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00730FD0..00730FD0, 1 functions

#include "mgrr.h"

// 00730FD0  FUN_00730fd0  size=139  [run]
undefined4 __fastcall FUN_00730fd0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x17e8) == 0) ||
     (fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
     fVar1 < 1.5 != (fVar1 == 1.5))) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xea8) & 0x80000) != 0) {
    FUN_00718220(0xc0007,0,0,0);
    return 1;
  }
  if ((*(int *)(param_1 + 0x19c0) != 0) &&
     (iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10(), iVar2 != 0)) {
    FUN_00718220(0x1000c,0,0,0);
    return 1;
  }
  FUN_00718220(0x1e,0,0,0);
  return 1;
}

