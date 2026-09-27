// src/unsorted/unit_00E961A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E961A0..00E96280, 2 functions

#include "mgrr.h"

// 00E961A0  FUN_00e961a0  size=53  [run]
void __fastcall FUN_00e961a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (DAT_01dda6a0 != '\0') {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E96280  FUN_00e96280  size=31  [run]
void __fastcall FUN_00e96280(int param_1)

{
  thunk_FUN_00ea9d90();
  if ((*(int *)(param_1 + 0x18) != 0) && (*(code **)(param_1 + 0x1c) != (code *)0x0)) {
    (**(code **)(param_1 + 0x1c))(*(int *)(param_1 + 0x18),param_1);
  }
  return;
}

