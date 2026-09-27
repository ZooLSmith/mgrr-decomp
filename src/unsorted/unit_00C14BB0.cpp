// src/unsorted/unit_00C14BB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C14BB0..00C14CD0, 3 functions

#include "types.h"

// 00C14BB0  FUN_00c14bb0  size=6  [run]
undefined4 FUN_00c14bb0(void)

{
  return DAT_01bea104;
}

// 00C14BC0  FUN_00c14bc0  size=30  [run]
void FUN_00c14bc0(void)

{
  if (DAT_01bea104 != (int *)0x0) {
    (**(code **)(*DAT_01bea104 + 0x74))(1);
    DAT_01bea104 = (int *)0x0;
  }
  return;
}

// 00C14CD0  FUN_00c14cd0  size=46  [run]
void FUN_00c14cd0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  FUN_00ca61f0(param_1,&local_c);
  return;
}

