// src/unsorted/unit_00CCC160.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCC160..00CCC160, 1 functions

#include "types.h"

// 00CCC160  FUN_00ccc160  size=699  [run]
undefined4 __thiscall FUN_00ccc160(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (((*(int *)(param_1 + 0x130) + param_3 <= *(uint *)(param_1 + 0x134)) &&
      (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = 0;
    if (3 < (int)param_3) {
      iVar4 = (param_3 - 4 >> 2) + 1;
      uVar1 = iVar4 * 4;
      puVar2 = (undefined4 *)(param_2 + 0x48);
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x130) * 0x30 + *(int *)(param_1 + 4));
        *puVar3 = puVar2[-0x12];
        puVar3[1] = puVar2[-0x11];
        puVar3[2] = puVar2[-0x10];
        puVar3[3] = puVar2[-0xf];
        puVar3[4] = puVar2[-0xe];
        puVar3[5] = puVar2[-0xd];
        puVar3[6] = puVar2[-0xc];
        puVar3[7] = puVar2[-0xb];
        puVar3[8] = puVar2[-10];
        puVar3[9] = puVar2[-9];
        puVar3[10] = puVar2[-8];
        puVar3[0xb] = puVar2[-7];
        *(short *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x130) * 2) =
             (short)*(int *)(param_1 + 0x130);
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x130) * 0x30 + *(int *)(param_1 + 4));
        *puVar3 = puVar2[-6];
        puVar3[1] = puVar2[-5];
        puVar3[2] = puVar2[-4];
        puVar3[3] = puVar2[-3];
        puVar3[4] = puVar2[-2];
        puVar3[5] = puVar2[-1];
        puVar3[6] = *puVar2;
        puVar3[7] = puVar2[1];
        puVar3[8] = puVar2[2];
        puVar3[9] = puVar2[3];
        puVar3[10] = puVar2[4];
        puVar3[0xb] = puVar2[5];
        *(short *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x130) * 2) =
             (short)*(int *)(param_1 + 0x130);
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x130) * 0x30 + *(int *)(param_1 + 4));
        *puVar3 = puVar2[6];
        puVar3[1] = puVar2[7];
        puVar3[2] = puVar2[8];
        puVar3[3] = puVar2[9];
        puVar3[4] = puVar2[10];
        puVar3[5] = puVar2[0xb];
        puVar3[6] = puVar2[0xc];
        puVar3[7] = puVar2[0xd];
        puVar3[8] = puVar2[0xe];
        puVar3[9] = puVar2[0xf];
        puVar3[10] = puVar2[0x10];
        puVar3[0xb] = puVar2[0x11];
        *(short *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x130) * 2) =
             (short)*(int *)(param_1 + 0x130);
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x130) * 0x30 + *(int *)(param_1 + 4));
        *puVar3 = puVar2[0x12];
        puVar3[1] = puVar2[0x13];
        puVar3[2] = puVar2[0x14];
        puVar3[3] = puVar2[0x15];
        puVar3[4] = puVar2[0x16];
        puVar3[5] = puVar2[0x17];
        puVar3[6] = puVar2[0x18];
        puVar3[7] = puVar2[0x19];
        puVar3[8] = puVar2[0x1a];
        puVar3[9] = puVar2[0x1b];
        puVar3[10] = puVar2[0x1c];
        puVar3[0xb] = puVar2[0x1d];
        *(short *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x130) * 2) =
             (short)*(int *)(param_1 + 0x130);
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 0x30;
      } while (iVar4 != 0);
    }
    if (uVar1 < param_3) {
      iVar4 = param_3 - uVar1;
      puVar2 = (undefined4 *)(uVar1 * 0x30 + param_2 + 0x18);
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x130) * 0x30 + *(int *)(param_1 + 4));
        *puVar3 = puVar2[-6];
        puVar3[1] = puVar2[-5];
        puVar3[2] = puVar2[-4];
        puVar3[3] = puVar2[-3];
        puVar3[4] = puVar2[-2];
        puVar3[5] = puVar2[-1];
        puVar3[6] = *puVar2;
        puVar3[7] = puVar2[1];
        puVar3[8] = puVar2[2];
        puVar3[9] = puVar2[3];
        puVar3[10] = puVar2[4];
        puVar3[0xb] = puVar2[5];
        *(short *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x130) * 2) =
             (short)*(int *)(param_1 + 0x130);
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 0xc;
      } while (iVar4 != 0);
    }
    return 1;
  }
  return 0;
}

