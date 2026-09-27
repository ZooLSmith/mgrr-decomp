// src/unsorted/unit_0040AFC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040AFC0..0040AFC0, 1 functions

#include "mgrr.h"

// 0040AFC0  FUN_0040afc0  size=88  [run]
void __fastcall FUN_0040afc0(int param_1)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *(undefined4 *)(param_1 + 0x130);
  local_1c = *(undefined4 *)(param_1 + 0x134);
  local_18 = *(undefined4 *)(param_1 + 0x138);
  local_14 = *(undefined4 *)(param_1 + 0x13c);
  FUN_00cbc1e0(200,&local_20);
  piVar1 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar1 + 0x3c))(200);
  return;
}

