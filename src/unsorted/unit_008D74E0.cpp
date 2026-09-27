// src/unsorted/unit_008D74E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D74E0..008D7580, 3 functions

#include "types.h"

// 008D74E0  FUN_008d74e0  size=70  [run]
int __thiscall FUN_008d74e0(int param_1,byte param_2)

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
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008D7570  FUN_008d7570  size=6  [run]
undefined4 FUN_008d7570(void)

{
  return DAT_01b35bf4;
}

// 008D7580  FUN_008d7580  size=30  [run]
void FUN_008d7580(void)

{
  if (DAT_01b35bf4 != (int *)0x0) {
    (**(code **)(*DAT_01b35bf4 + 0xc))(1);
    DAT_01b35bf4 = (int *)0x0;
  }
  return;
}

