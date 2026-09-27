// src/unsorted/unit_00DD3180.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3180..00DD3180, 1 functions

#include "types.h"

// 00DD3180  FUN_00dd3180  size=58  [run]
void __fastcall FUN_00dd3180(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x34))
              ((undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

