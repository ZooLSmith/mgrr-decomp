// src/unsorted/unit_005D20F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D20F0..005D2170, 3 functions

#include "types.h"

// 005D20F0  FUN_005d20f0  size=52  [run]
void __fastcall FUN_005d20f0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x880) = 1;
  uVar1 = FUN_004039a0(0,param_1,0);
  FUN_00a963e0(uVar1);
  return;
}

// 005D2130  FUN_005d2130  size=52  [run]
void __fastcall FUN_005d2130(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x880) = 0;
  uVar1 = FUN_004039a0(10,param_1,0);
  FUN_00a963e0(uVar1);
  return;
}

// 005D2170  FUN_005d2170  size=96  [run]
void __fastcall FUN_005d2170(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x880) == 0) {
    FUN_00a8c9b0(0,10,0,0);
    uVar1 = 0xb;
  }
  else {
    FUN_00a8c9b0(0,0,0,0);
    uVar1 = 1;
  }
  uVar1 = FUN_004039a0(uVar1,param_1,0);
  FUN_00a963e0(uVar1);
  *(undefined4 *)(param_1 + 0x874) = 0x3f800000;
  return;
}

