// src/unsorted/unit_00FA4E00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA4E00..00FA4E00, 1 functions

#include "types.h"

// 00FA4E00  FUN_00fa4e00  size=46  [run]
void __fastcall FUN_00fa4e00(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    *param_1 = 0;
  }
  return;
}

