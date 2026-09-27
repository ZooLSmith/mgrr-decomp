// src/unsorted/unit_005C9E50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C9E50..005C9E50, 1 functions

#include "mgrr.h"

// 005C9E50  FUN_005c9e50  size=68  [run]
void __fastcall FUN_005c9e50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

