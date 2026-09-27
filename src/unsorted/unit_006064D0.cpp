// src/unsorted/unit_006064D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006064D0..00606520, 2 functions

#include "mgrr.h"

// 006064D0  FUN_006064d0  size=71  [run]
void __fastcall FUN_006064d0(int param_1)

{
  if (*(int *)(param_1 + 0x8c8) != 0) {
    FUN_00a9e290(&DAT_0163bbb8,1,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x8c8) = 0;
  }
  return;
}

// 00606520  FUN_00606520  size=25  [run]
void __fastcall FUN_00606520(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}

