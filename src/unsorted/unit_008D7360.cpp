// src/unsorted/unit_008D7360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D7360..008D7380, 2 functions

#include "mgrr.h"

// 008D7360  FUN_008d7360  size=25  [run]
void __fastcall FUN_008d7360(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}

// 008D7380  FUN_008d7380  size=45  [run]
int * __thiscall FUN_008d7380(int *param_1,byte param_2)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

