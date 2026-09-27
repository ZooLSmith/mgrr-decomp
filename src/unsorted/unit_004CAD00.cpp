// src/unsorted/unit_004CAD00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004CAD00..004CAD00, 1 functions

#include "mgrr.h"

// 004CAD00  FUN_004cad00  size=848  [run]
void __fastcall FUN_004cad00(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  int iVar11;
  float fVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  int local_34;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_1[0x19d] == 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
    puVar13 = (undefined4 *)FUN_009f8b60();
    iVar14 = CollisionSphere::CollisionSphere(2,*puVar13,0);
    if (iVar14 != 0) {
      FUN_00d771d0(1);
      *(undefined4 *)(iVar14 + 0x380) = 0;
      FUN_00d77c50(param_1[0x13c],0x12);
      *(undefined4 *)(iVar14 + 0x510) = 0x3f000000;
      uVar15 = FUN_00a8d2a0();
      FUN_00a93a00(iVar14,uVar15);
      FUN_00d7b0f0();
      FUN_00d798d0();
    }
  }
  FUN_00a077e0(4);
  *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = param_1[0x12];
  param_1[0x17] = param_1[0x13];
  fVar2 = (float)param_1[4];
  fVar3 = (float)param_1[5];
  fVar4 = (float)param_1[6];
  fVar5 = (float)param_1[8];
  fVar6 = (float)param_1[9];
  fVar7 = (float)param_1[10];
  fVar12 = SQRT((float)param_1[0xe] * (float)param_1[0xe] +
                (float)param_1[0xd] * (float)param_1[0xd] +
                (float)param_1[0xc] * (float)param_1[0xc]);
  fVar8 = (float)param_1[10];
  fVar9 = (float)param_1[0xe];
  fVar17 = (float10)FUN_00ddbaa0(-((float)param_1[6] / fVar12));
  fVar18 = (float10)fpatan((float10)(fVar8 / fVar12),(float10)(fVar9 / fVar12));
  param_1[0x24] = (int)(float)fVar18;
  param_1[0x25] = (int)(float)fVar17;
  fVar17 = (float10)fpatan((float10)(float)param_1[5] /
                           (float10)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7),
                           (float10)(float)param_1[4] /
                           (float10)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4));
  param_1[0x26] = (int)(float)fVar17;
  FUN_00912060(param_1 + 0x14);
  FUN_00912140(param_1 + 0x24);
  FUN_00916540(1);
  FUN_009234e0(0x3fc00000);
  FUN_0091a930(5);
  local_20 = (float)param_1[4];
  local_1c = (float)param_1[5];
  local_18 = (float)param_1[6];
  local_14 = (float)param_1[7];
  iVar14 = FUN_00a8e520();
  if (iVar14 == 0) {
    local_1c = -1.0;
  }
  if ((param_1[300] == 0x20113) || (param_1[300] == 0x20114)) {
    local_20 = local_20 * -1.0;
    local_1c = local_1c * -1.0;
    local_18 = local_18 * -1.0;
    local_14 = local_14 * -1.0;
  }
  FUN_0091a7e0(&local_20);
  iVar14 = FUN_00a8e520();
  if (iVar14 == 0) {
    FUN_00915ea0(0);
    param_1[0x186] = 2;
  }
  else if (param_1[0x223] != 0) {
    FUN_00915e60(0x3f000000);
    FUN_00915ea0(0x3e800000);
  }
  FUN_00a7c950();
  param_1[0x221] = 0;
  pcVar10 = *(code **)(*param_1 + 0x1c);
  param_1[0x220] = 0;
  param_1[0x21f] = 1;
  (*pcVar10)();
  iVar14 = 0;
  local_34 = 0;
  if (0 < (short)param_1[0xc9]) {
    do {
      iVar11 = param_1[200];
      iVar16 = *(int *)(*(int *)(iVar11 + 0x60 + iVar14) + 0x40);
      if ((iVar16 != 0) && (iVar16 = FUN_00fdbbd0(iVar16,&DAT_0163eeb8), iVar16 != 0)) {
        puVar1 = (uint *)(iVar11 + 0x38 + iVar14);
        *puVar1 = *puVar1 | 1;
      }
      local_34 = local_34 + 1;
      iVar14 = iVar14 + 0x70;
    } while (local_34 < (short)param_1[0xc9]);
  }
  param_1[0xd9] = param_1[0xd9] & 0xfffffffdU | 0x10000;
  (**(code **)(*param_1 + 0xf8))(0);
  return;
}

