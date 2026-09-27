// src/unsorted/unit_005FF5A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005FF5A0..005FF620, 2 functions

#include "mgrr.h"

// 005FF5A0  FUN_005ff5a0  size=51  [run]
void FUN_005ff5a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [76];
  
  thunk_FUN_00ddc1d0(local_50,param_3,param_4);
  D3DXMatrixMultiply(param_1,param_2,local_50);
  return;
}

// 005FF620  FUN_005ff620  size=11  [run]
void __fastcall FUN_005ff620(int param_1)

{
  *(undefined4 *)(param_1 + 0x870) = 0;
  return;
}

