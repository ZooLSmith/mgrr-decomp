// src/unsorted/unit_00501B80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00501B80..00501C90, 2 functions

#include "mgrr.h"

// 00501B80  FUN_00501b80  size=43  [run]
void __fastcall FUN_00501b80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00501C90  FUN_00501c90  size=30  [run]
float10 __fastcall FUN_00501c90(int param_1)

{
  if ((*(uint *)(param_1 + 0xecc) & 0x8000) != 0) {
    return (float10)30.0 * (float10)30.0;
  }
  return (float10)50.0 * (float10)50.0;
}

