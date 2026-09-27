// src/unsorted/unit_009067E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009067E0..009067E0, 1 functions

#include "mgrr.h"

// 009067E0  FUN_009067e0  size=44  [run]
void __fastcall FUN_009067e0(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  if (*(char *)((int)param_1 + 0x1b) != '\0') {
    if ((short)param_1[3] < 1) {
      (**(code **)(*param_1 + 8))();
      FUN_009053f0();
      return;
    }
    *(short *)(param_1 + 3) = (short)param_1[3] + -1;
  }
  return;
}

