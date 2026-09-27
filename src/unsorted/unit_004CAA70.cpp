// src/unsorted/unit_004CAA70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004CAA70..004CAA70, 1 functions

#include "mgrr.h"

// 004CAA70  FUN_004caa70  size=437  [run]
void __fastcall FUN_004caa70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x674) == 0) {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    *(undefined4 *)(param_1 + 0xcf8) = 1;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
    fVar1 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0x24);
    fVar6 = *(float *)(param_1 + 0x28);
    fVar9 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
                 *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                 *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
    fVar7 = *(float *)(param_1 + 0x28);
    fVar8 = *(float *)(param_1 + 0x38);
    fVar11 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar9));
    fVar12 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
    *(float *)(param_1 + 0x90) = (float)fVar12;
    *(float *)(param_1 + 0x94) = (float)fVar11;
    fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)*(float *)(param_1 + 0x10) /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    *(float *)(param_1 + 0x98) = (float)fVar11;
    FUN_00912060(param_1 + 0x50);
    FUN_00912140(param_1 + 0x90);
    FUN_00916540(1);
    FUN_009234e0(0x3fc00000);
    FUN_0091a930(5);
    local_20 = *(float *)(param_1 + 0x20) * -2.0;
    local_1c = *(float *)(param_1 + 0x24) * -2.0;
    local_18 = *(float *)(param_1 + 0x28) * -2.0;
    local_14 = *(float *)(param_1 + 0x2c) * -2.0;
    iVar10 = FUN_00a8e520();
    if (iVar10 == 0) {
      *(undefined4 *)(param_1 + 0x618) = 2;
      local_1c = -1.0;
    }
    FUN_0091a7e0(&local_20);
  }
  return;
}

