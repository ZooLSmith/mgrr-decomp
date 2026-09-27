// src/unsorted/unit_0093A4D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093A4D0..0093A4D0, 1 functions

#include "types.h"

// 0093A4D0  FUN_0093a4d0  size=111  [run]
void __thiscall FUN_0093a4d0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  uVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 4) + 0xc) != 0) {
    do {
      if (*piVar2 == param_2) {
        *(uint *)(param_1 + 0x28) = uVar1;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(int **)(param_1 + 0xc) = piVar2;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined1 *)(param_1 + 0x46) = 0;
        *(undefined1 *)(param_1 + 0x42) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
        return;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (uVar1 < *(uint *)(*(int *)(param_1 + 4) + 0xc));
  }
  FUN_00dd5650(&DAT_0164ef84,param_2);
  FUN_0093a230();
  return;
}

