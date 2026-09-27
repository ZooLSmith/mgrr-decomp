// src/unsorted/unit_004BD2A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004BD2A0..004BD2A0, 1 functions

#include "mgrr.h"

// 004BD2A0  FUN_004bd2a0  size=162  [run]
void __thiscall FUN_004bd2a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  uVar1 = FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),0x10,7,&local_c0,&local_b0,param_2,
                       0x42480000,0xbf800000);
  FUN_00418130(uVar1);
  *(undefined4 *)(param_1 + 0x914) = 0x41200000;
  *(undefined4 *)(param_1 + 0x91c) = 0;
  uVar1 = FUN_00c5abe0(param_1 + 0x8d0);
  *(undefined4 *)(param_1 + 0x8c4) = uVar1;
  return;
}

