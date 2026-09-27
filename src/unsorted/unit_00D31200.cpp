// src/unsorted/unit_00D31200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D31200..00D31200, 1 functions

#include "types.h"

// 00D31200  FUN_00d31200  size=578  [run]
void __fastcall FUN_00d31200(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float local_c;
  float local_8;
  
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  fVar1 = 1.0;
  local_8 = 1.0;
  fVar2 = 999999.0;
  local_c = 999999.0;
  if (0 < *(short *)(param_1 + 0x1b0)) {
    iVar9 = (int)*(short *)(param_1 + 0x1b0);
    pfVar8 = (float *)(param_1 + 0x160);
    pfVar7 = (float *)(param_1 + 0x28);
    do {
      pfVar4 = (float *)(DAT_01dc1490 + 0x40);
      if (DAT_01dc1490 == 0) {
        pfVar4 = (float *)&DAT_01dc14e0;
      }
      fVar3 = SQRT((*pfVar7 - pfVar4[2]) * (*pfVar7 - pfVar4[2]) +
                   (pfVar7[-1] - pfVar4[1]) * (pfVar7[-1] - pfVar4[1]) +
                   (pfVar7[-2] - *pfVar4) * (pfVar7[-2] - *pfVar4));
      if (fVar3 < fVar2) {
        fVar1 = *pfVar8;
        fVar2 = fVar3;
      }
      pfVar7 = pfVar7 + 4;
      pfVar8 = pfVar8 + 1;
      iVar9 = iVar9 + -1;
      local_c = fVar2;
      local_8 = fVar1;
    } while (iVar9 != 0);
  }
  fVar1 = 1.0 - local_c / local_8;
  *(float *)(param_1 + 0x1b4) = fVar1;
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    if ((*(short *)(param_1 + 0x1b0) != 0) && (DAT_01dc0ec8 != 0)) {
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar5 = FUN_00d29960(0x29);
        *(undefined4 *)(param_1 + 0x10) = uVar5;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      return;
    }
    break;
  case 1:
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = 1;
    FUN_00cdeec0(1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    goto LAB_00d31346;
  case 2:
LAB_00d31346:
    if ((*(short *)(param_1 + 0x1b0) != 0) && (DAT_01dc0ec8 != 0)) {
      FUN_00cbb640(local_c,local_8);
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      return;
    }
    iVar9 = FUN_00cdf400(1);
    if (iVar9 != 0) {
      FUN_00cdeec0(0);
      if (*(short *)(param_1 + 0x1b0) == 0) {
        DAT_01dc0ec8 = 0;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      return;
    }
    break;
  case 3:
    iVar9 = *(int *)(param_1 + 0x10);
    iVar6 = FUN_00cdf400(0);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar9 + 4) = 0;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      return;
    }
    break;
  case 4:
    iVar9 = *(int *)(param_1 + 0x10);
    if (iVar9 != 0) {
      if ((*(uint *)(iVar9 + 0x24) & 1) == 0) {
        *(uint *)(iVar9 + 0x24) = *(uint *)(iVar9 + 0x24) | 1;
        *(undefined4 *)(iVar9 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      return;
    }
  }
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  return;
}

