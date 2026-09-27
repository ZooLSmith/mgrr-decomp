// src/unsorted/unit_00F18340.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F18340..00F18340, 1 functions

#include "mgrr.h"

// 00F18340  FUN_00f18340  size=2048  [run]
void __fastcall FUN_00f18340(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined2 in_FPUControlWord;
  undefined4 uVar10;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined8 local_60;
  float local_58;
  float local_54;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x4c8) != 1) {
    local_a0 = *(float *)(param_1 + 0x4a0);
    local_9c = *(float *)(param_1 + 0x4a4);
    local_98 = *(float *)(param_1 + 0x4a8);
    local_94 = *(float *)(param_1 + 0x4ac);
    local_74 = *(float *)(param_1 + 0x110);
    local_90 = local_74 * *(float *)(param_1 + 0x150);
    local_8c = local_74 * *(float *)(param_1 + 0x154);
    local_88 = local_74 * *(float *)(param_1 + 0x158);
    local_84 = local_74 * *(float *)(param_1 + 0x15c);
    fVar2 = local_90 + *(float *)(param_1 + 400);
    fVar3 = *(float *)(param_1 + 0x194) + local_8c;
    local_60 = CONCAT44(fVar3,fVar2);
    local_58 = *(float *)(param_1 + 0x198) + local_88;
    local_54 = *(float *)(param_1 + 0x19c) + local_84;
    *(float *)(param_1 + 0x4a0) = fVar2;
    *(float *)(param_1 + 0x4a4) = fVar3;
    *(float *)(param_1 + 0x4a8) = local_58;
    *(float *)(param_1 + 0x4ac) = local_54;
    FUN_009d60e0();
    iVar4 = FUN_009d60a0(local_50,&local_a0,&local_60);
    if (iVar4 == 0) {
      pfVar6 = *(float **)(param_1 + 0x458);
      FUN_00f0db60(&local_b0,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),1);
      *pfVar6 = local_b0;
      pfVar6[1] = local_ac;
      pfVar6[2] = local_a8;
      return;
    }
    puVar5 = (undefined4 *)FUN_009cf200();
    *(undefined4 *)(param_1 + 0x180) = *puVar5;
    *(undefined4 *)(param_1 + 0x184) = puVar5[1];
    *(undefined4 *)(param_1 + 0x188) = puVar5[2];
    *(undefined4 *)(param_1 + 0x18c) = puVar5[3];
    pfVar6 = (float *)FUN_009cf220();
    local_90 = *(float *)(param_1 + 0x150) * -1.0;
    local_8c = *(float *)(param_1 + 0x154) * -1.0;
    local_88 = *(float *)(param_1 + 0x158) * -1.0;
    local_84 = *(float *)(param_1 + 0x15c) * -1.0;
    local_74 = pfVar6[2] * local_88 + local_8c * pfVar6[1] + local_90 * *pfVar6;
    local_70 = local_74 * *pfVar6 * 2.0;
    local_6c = local_74 * pfVar6[1] * 2.0;
    local_68 = local_74 * pfVar6[2] * 2.0;
    local_64 = pfVar6[3] * local_74 * 2.0;
    local_b0 = local_70 - local_90;
    local_ac = local_6c - local_8c;
    local_a8 = local_68 - local_88;
    local_a4 = local_64 - local_84;
    *(float *)(param_1 + 0x150) = local_b0;
    *(float *)(param_1 + 0x154) = local_ac;
    *(float *)(param_1 + 0x158) = local_a8;
    *(float *)(param_1 + 0x15c) = local_a4;
    piVar1 = (int *)(param_1 + 0x4b0);
    *piVar1 = *piVar1 + -1;
    fVar2 = *(float *)(param_1 + 0x4b8) / 100.0;
    *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar2;
    *(float *)(param_1 + 0x154) =
         (*(float *)(param_1 + 0x4b4) / 100.0) * *(float *)(param_1 + 0x154);
    *(float *)(param_1 + 0x158) = fVar2 * *(float *)(param_1 + 0x158);
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(float *)(param_1 + 0x15c) = local_94;
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(float *)(param_1 + 0x16c) = local_94;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(float *)(param_1 + 0x14c) = local_94;
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      *(undefined4 *)(param_1 + 0x1d4) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      *(float *)(param_1 + 0x1dc) = local_94;
    }
    uVar10 = *(undefined4 *)(param_1 + 0x50);
    uVar7 = FUN_009cf200(uVar10);
    FUN_00efd1f0(param_1 + 0x180,uVar7,uVar10);
    pfVar6 = (float *)FUN_009cf220();
    pfVar8 = (float *)FUN_009cf200();
    local_b0 = *pfVar6 * 0.001;
    local_ac = pfVar6[1] * 0.001;
    local_a8 = pfVar6[2] * 0.001;
    local_a4 = pfVar6[3] * 0.001;
    *(float *)(param_1 + 0x4a0) = local_b0 + *pfVar8;
    *(float *)(param_1 + 0x4a4) = pfVar8[1] + local_ac;
    *(float *)(param_1 + 0x4a8) = pfVar8[2] + local_a8;
    *(float *)(param_1 + 0x4ac) = pfVar8[3] + local_a4;
    puVar9 = (undefined4 *)FUN_009cf200();
    puVar5 = *(undefined4 **)(param_1 + 0x458);
    *puVar5 = *puVar9;
    puVar5[1] = puVar9[1];
    puVar5[2] = puVar9[2];
    return;
  }
  if ((*(int *)(param_1 + 0x4d0) == 0) && (*(uint *)(param_1 + 0x4c4) != 0)) {
    local_74 = (float)CONCAT22(local_74._2_2_,in_FPUControlWord);
    local_60 = (ulonglong)ROUND(*(float *)(param_1 + 0x460));
    if (*(uint *)(param_1 + 0x4c4) <= (uint)local_60) {
      local_b0 = *(float *)(param_1 + 0x4a0);
      local_ac = *(float *)(param_1 + 0x4a4);
      local_a8 = *(float *)(param_1 + 0x4a8);
      local_a4 = *(float *)(param_1 + 0x4ac);
      local_60 = local_60 & 0xffffffff00000000;
      local_a0 = 0.0;
      local_98 = 0.0;
      local_94 = 0.0;
      local_90 = *(float *)(param_1 + 400) + 0.0;
      local_8c = *(float *)(param_1 + 0x194) - 50.0;
      local_88 = *(float *)(param_1 + 0x198) + 0.0;
      local_84 = *(float *)(param_1 + 0x19c) + 0.0;
      *(float *)(param_1 + 0x4a0) = local_90;
      *(float *)(param_1 + 0x4a4) = local_8c;
      *(float *)(param_1 + 0x4a8) = local_88;
      *(float *)(param_1 + 0x4ac) = local_84;
      FUN_009d60e0();
      iVar4 = FUN_009d60a0(local_50,&local_b0,&local_90);
      if (iVar4 != 0) {
        iVar4 = FUN_009cf200();
        *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(iVar4 + 4);
        *(undefined4 *)(param_1 + 0x4d0) = 1;
      }
    }
  }
  if ((*(float *)(param_1 + 0x194) < *(float *)(param_1 + 0x4cc)) &&
     (*(int *)(param_1 + 0x4d0) != 0)) {
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x4cc);
    local_90 = *(float *)(param_1 + 0x180);
    local_8c = *(float *)(param_1 + 0x184);
    local_88 = *(float *)(param_1 + 0x188);
    local_84 = *(float *)(param_1 + 0x18c);
    local_a0 = *(float *)(param_1 + 0x150) * -1.0;
    local_9c = *(float *)(param_1 + 0x154) * -1.0;
    local_98 = *(float *)(param_1 + 0x158) * -1.0;
    local_94 = *(float *)(param_1 + 0x15c) * -1.0;
    local_6c = local_98 * 0.0 + local_9c + local_a0 * 0.0;
    local_64 = local_6c * 0.0;
    local_60 = CONCAT44(local_60._4_4_,local_64);
    local_70 = local_64 * 2.0;
    local_6c = local_6c * 2.0;
    local_68 = local_64 * 2.0;
    local_64 = local_64 * 2.0;
    local_b0 = local_70 - local_a0;
    local_ac = local_6c - local_9c;
    local_a8 = local_68 - local_98;
    local_a4 = local_64 - local_94;
    *(float *)(param_1 + 0x150) = local_b0;
    *(float *)(param_1 + 0x154) = local_ac;
    *(float *)(param_1 + 0x158) = local_a8;
    *(float *)(param_1 + 0x15c) = local_a4;
    piVar1 = (int *)(param_1 + 0x4b0);
    *piVar1 = *piVar1 + -1;
    fVar2 = *(float *)(param_1 + 0x4b8) / 100.0;
    *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar2;
    *(float *)(param_1 + 0x154) =
         (*(float *)(param_1 + 0x4b4) / 100.0) * *(float *)(param_1 + 0x154);
    *(float *)(param_1 + 0x158) = fVar2 * *(float *)(param_1 + 0x158);
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(float *)(param_1 + 0x15c) = local_94;
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(float *)(param_1 + 0x16c) = local_94;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(float *)(param_1 + 0x14c) = local_94;
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      *(undefined4 *)(param_1 + 0x1d4) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      *(float *)(param_1 + 0x1dc) = local_94;
    }
    FUN_00efd1f0((float *)(param_1 + 0x180),&local_90,*(undefined4 *)(param_1 + 0x50));
    *(float *)(param_1 + 0x4a0) = local_90 + 0.0;
    *(float *)(param_1 + 0x4a4) = local_8c + 0.001;
    *(float *)(param_1 + 0x4a8) = local_88 + 0.0;
    *(float *)(param_1 + 0x4ac) = local_84 + 0.0;
    pfVar6 = *(float **)(param_1 + 0x458);
    *pfVar6 = local_90;
    pfVar6[1] = local_8c;
    pfVar6[2] = local_88;
    return;
  }
  pfVar6 = *(float **)(param_1 + 0x458);
  FUN_00f0db60(&local_a0,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),1);
  *pfVar6 = local_a0;
  pfVar6[1] = local_9c;
  pfVar6[2] = local_98;
  return;
}

