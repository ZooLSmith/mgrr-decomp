// src/unsorted/unit_004EC5C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004EC5C0..004EC6B0, 2 functions

#include "mgrr.h"

// 004EC5C0  FUN_004ec5c0  size=231  [run]
void __fastcall FUN_004ec5c0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x36] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3f] = 0;
  param_1[0x45] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0xff;
  param_1[0x42] = 0;
  *(undefined2 *)((int)param_1 + 0xf9) = 0;
  param_1[0x43] = 0;
  *(undefined1 *)((int)param_1 + 0xfb) = 0;
  param_1[0x44] = 0;
  return;
}

// 004EC6B0  FUN_004ec6b0  size=105  [run]
undefined4 __fastcall FUN_004ec6b0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  if ((DAT_01bea060 & 0x20000) == 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      fVar1 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x40);
      fVar2 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
      fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      if ((fVar1 <= 20.0) || (100.0 <= fVar1)) {
        return 0;
      }
    }
  }
  return 1;
}

