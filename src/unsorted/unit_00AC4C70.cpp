// src/unsorted/unit_00AC4C70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC4C70..00AC4D60, 2 functions

#include "types.h"

// 00AC4C70  FUN_00ac4c70  size=153  [run]
undefined4 __thiscall FUN_00ac4c70(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xa7c) != 0) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        uVar1 = FUN_00de3550();
      }
      else {
        if (param_2 != 2) {
          return 0;
        }
        uVar1 = FUN_00de3550();
      }
      uVar1 = FUN_00de3560(uVar1);
      FUN_009f8930(uVar1);
      *(undefined4 *)(param_1 + 0xa80) = 0;
      return 1;
    }
    uVar1 = FUN_00de3550();
    uVar1 = FUN_00de3560(uVar1);
    FUN_009f8930(uVar1);
    *(undefined4 *)(param_1 + 0xa80) = 1;
    uVar1 = 1;
  }
  return uVar1;
}

// 00AC4D60  FUN_00ac4d60  size=39  [run]
bool __thiscall FUN_00ac4d60(int param_1,uint param_2)

{
  return (0x80000000U >> ((byte)param_2 & 0x1f) & *(uint *)(param_1 + 0xd94 + (param_2 >> 5) * 4))
         != 0;
}

