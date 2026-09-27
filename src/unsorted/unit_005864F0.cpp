// src/unsorted/unit_005864F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005864F0..005864F0, 1 functions

#include "types.h"

// 005864F0  FUN_005864f0  size=111  [run]
void __fastcall FUN_005864f0(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0xc2480000;
  local_18 = 0;
  iVar1 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x41a00000,0x42480000,0
                       ,5);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 + 0x44) = 0x3ecccccd;
  }
  return;
}

