// src/unsorted/unit_00F1C960.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F1C960..00F1C960, 1 functions

#include "types.h"

// 00F1C960  FUN_00f1c960  size=1286  [run]
void __thiscall FUN_00f1c960(int param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float10 fVar8;
  float local_34;
  float local_30;
  
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
  piVar1 = (int *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  iVar3 = *(int *)(param_1 + 0x50);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  *(undefined4 *)(param_1 + 300) = 0x43fa0000;
  *(float *)(param_1 + 0x468) =
       *(float *)(param_1 + 0x46c) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x468);
  fVar2 = *(float *)(param_1 + 0x100);
  *(float *)(param_1 + 0x488) = fVar2;
  *(undefined4 *)(param_1 + 0x48c) = 0x3f800000;
  if (*(float *)(param_1 + 0x474) != 0.0) {
    if (*(float *)(param_1 + 0x39c) == -1.0) {
      iVar4 = *(int *)(*param_2 + 8);
      fVar8 = (float10)FUN_00fdef70();
      *(float *)(param_1 + 0x39c) = (float)fVar8 - *(float *)(iVar4 + 8);
    }
    local_34 = *(float *)(param_1 + 0x474);
    fVar8 = (float10)FUN_00fe0ac0();
    local_34 = local_34 / (fVar2 / ((float)fVar8 * *(float *)(param_1 + 0x39c) + 2.0));
    if (0.4 < local_34) {
      if (1.0 < local_34) {
        local_34 = 1.0;
      }
    }
    else {
      local_34 = 0.4;
    }
    *(float *)(param_1 + 0x488) = fVar2 * local_34;
  }
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xa4);
  if (*(float *)(param_1 + 0x4a4) != 0.0) {
    if (0.0 < *(float *)(param_1 + 0x4a0)) {
      *(float *)(param_1 + 0x4a0) = *(float *)(param_1 + 0x4a0) - *(float *)(param_1 + 0x110);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x110);
      if (fVar2 == 1.0) {
        local_30 = *(float *)(param_1 + 0x4a4);
      }
      else {
        local_30 = *(float *)(param_1 + 0x4a4);
        if (local_30 < 2.0) {
          local_30 = local_30 / ((fVar2 - local_30 * fVar2) + local_30);
        }
        else {
          fVar8 = (float10)FUN_00fdc1f0();
          local_30 = (float)fVar8;
        }
      }
      local_30 = local_30 * *(float *)(param_1 + 0x490);
      *(float *)(param_1 + 0x490) = local_30;
      if (local_30 < 0.01) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      }
    }
  }
  *(float *)(param_1 + 0x450) =
       *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x450);
  *(float *)(param_1 + 0x454) =
       *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x454);
  *(float *)(param_1 + 0x458) =
       *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x458);
  if ((*(int *)(param_1 + 0x50) == 0) && (iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  }
  *(undefined4 *)(param_1 + 0x484) = 0x3f800000;
  if ((*(float *)(param_1 + 0x47c) != 0.0) &&
     (pfVar7 = (float *)FUN_00e9fe70(), fVar2 = *(float *)(param_1 + 400) - *pfVar7,
     fVar5 = *(float *)(param_1 + 0x194) - pfVar7[1],
     fVar6 = *(float *)(param_1 + 0x198) - pfVar7[2],
     *(float *)(param_1 + 0x478) * *(float *)(param_1 + 0x478) <
     fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2)) {
    fVar8 = (float10)FUN_00fdef70();
    fVar2 = ((float)fVar8 - *(float *)(param_1 + 0x478)) / *(float *)(param_1 + 0x47c);
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    fVar2 = (1.0 - fVar2) * (1.0 - fVar2);
    if (fVar2 <= *(float *)(param_1 + 0x480)) {
      *(float *)(param_1 + 0x484) = *(float *)(param_1 + 0x480);
    }
    else {
      *(float *)(param_1 + 0x484) = fVar2;
    }
  }
  *(float *)(param_1 + 0x498) =
       (*(float *)(param_1 + 0x490) / *(float *)(param_1 + 0x494)) * *(float *)(param_1 + 0x49c);
  return;
}

