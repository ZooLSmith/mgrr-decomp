// src/unsorted/unit_00ED90D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED90D0..00ED90D0, 1 functions

#include "mgrr.h"

// 00ED90D0  FUN_00ed90d0  size=179  [run]
undefined4 __fastcall FUN_00ed90d0(int param_1)

{
  int iVar1;
  uint local_c;
  
  if (*(int *)(param_1 + 0x5a4) == 0) {
    if ((*(uint *)(param_1 + 0x5a0) != 0) &&
       (local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0x528)),
       *(uint *)(param_1 + 0x5a0) <= local_c)) {
      return 1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x45c) + -0xc + *(int *)(param_1 + 0x450) * 0xc;
    if (((*(float *)(param_1 + 0x590) !=
          *(float *)(*(int *)(param_1 + 0x45c) + -0xc + *(int *)(param_1 + 0x450) * 0xc)) ||
        (*(float *)(param_1 + 0x594) != *(float *)(iVar1 + 4))) ||
       (*(float *)(param_1 + 0x598) != *(float *)(iVar1 + 8))) {
      return 1;
    }
  }
  return 0;
}

