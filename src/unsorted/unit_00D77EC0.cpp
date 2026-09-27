// src/unsorted/unit_00D77EC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77EC0..00D77EC0, 1 functions

#include "mgrr.h"

// 00D77EC0  FUN_00d77ec0  size=40  [run]
uint __thiscall FUN_00d77ec0(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x434) == 0) {
    return 0;
  }
  uVar1 = param_2 * 0x160 + *(int *)(*(int *)(param_1 + 0x434) + 4);
  return ~-(uint)(*(int *)(uVar1 + 0x10) != 0) & uVar1;
}

