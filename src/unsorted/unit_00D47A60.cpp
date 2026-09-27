// src/unsorted/unit_00D47A60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47A60..00D47AA0, 2 functions

#include "mgrr.h"

// 00D47A60  FUN_00d47a60  size=52  [run]
void __fastcall FUN_00d47a60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x120) == 0) {
    if (*(int *)(param_1 + 0x11c) != 0) {
      iVar1 = FUN_0041dbb0();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x120) = 1;
        return;
      }
    }
  }
  else {
    *(short *)(param_1 + 0x124) = *(short *)(param_1 + 0x124) + 1;
  }
  return;
}

// 00D47AA0  FUN_00d47aa0  size=24  [run]
void __fastcall FUN_00d47aa0(int param_1)

{
  FUN_00c81e40(0xe);
  *(short *)(param_1 + 0x124) = *(short *)(param_1 + 0x124) + 1;
  return;
}

