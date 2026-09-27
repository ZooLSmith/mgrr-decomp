// src/unsorted/unit_0057DE10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057DE10..0057DE10, 1 functions

#include "mgrr.h"

// 0057DE10  FUN_0057de10  size=102  [run]
void __thiscall FUN_0057de10(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < 4) {
    *(undefined4 *)((param_2 + 0xbf) * 0x20 + param_1) = param_3;
    *(undefined4 *)(param_1 + 0x1860) = 0;
    if (*(int *)(param_1 + 0x17e0) != 0) {
      *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1860) + 1;
    }
    if (*(int *)(param_1 + 0x1800) != 0) {
      *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1860) + 1;
    }
    if (*(int *)(param_1 + 0x1820) != 0) {
      *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1860) + 1;
    }
    if (*(int *)(param_1 + 0x1840) != 0) {
      *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1860) + 1;
    }
  }
  return;
}

