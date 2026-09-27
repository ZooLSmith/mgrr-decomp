// src/unsorted/unit_008D7410.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D7410..008D7410, 1 functions

#include "mgrr.h"

// 008D7410  FUN_008d7410  size=50  [run]
void __fastcall FUN_008d7410(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    FUN_00dd4920(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

