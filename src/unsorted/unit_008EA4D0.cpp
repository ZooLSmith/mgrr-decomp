// src/unsorted/unit_008EA4D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008EA4D0..008EA4D0, 1 functions

#include "types.h"

// 008EA4D0  FUN_008ea4d0  size=1715  [run]
void __thiscall FUN_008ea4d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float local_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [8];
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68 [2];
  undefined1 local_60 [64];
  float local_20;
  
  if ((*(int *)(param_1 + 0xf0) != 0) && ((*(byte *)(param_1 + 0x168) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1bc);
    FUN_008e9360(*(int *)(param_1 + 0xf0) + 0x50,param_2,param_3);
    puVar7 = (undefined4 *)FUN_008e1d50();
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *(undefined4 *)(param_1 + 0x90) = *puVar7;
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    *(undefined4 *)(param_1 + 0x98) = uVar2;
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    FUN_008e4320(param_1 + 0xa0);
    if (*(int *)(param_1 + 0x1c0) != 0) {
      iVar8 = FUN_00a12210(*(undefined4 *)(param_1 + 0x1c4));
      local_d0 = *(float *)(iVar8 + 0x40);
      local_cc = *(float *)(iVar8 + 0x44);
      local_c8 = *(float *)(iVar8 + 0x48);
      iVar8 = FUN_00a12210(*(undefined4 *)(param_1 + 0x1c8));
      fVar4 = local_d0 - *(float *)(iVar8 + 0x40);
      fVar6 = local_cc - *(float *)(iVar8 + 0x44);
      fVar5 = local_c8 - *(float *)(iVar8 + 0x48);
      CharacterControl::setHeight(SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4));
    }
    FUN_008e4320(&local_b0);
    piVar9 = *(int **)(param_1 + 0x54);
    if (piVar9 != piVar9 + *(int *)(param_1 + 0x58)) {
      do {
        iVar8 = *piVar9;
        if ((*(int *)(iVar8 + 0xf0) != 0) && ((*(byte *)(iVar8 + 0x168) & 1) == 0)) {
          FUN_008e9360(&local_b0,param_2,param_3);
          puVar7 = (undefined4 *)FUN_008e1d50();
          uVar1 = puVar7[1];
          uVar2 = puVar7[2];
          uVar3 = puVar7[3];
          *(undefined4 *)(iVar8 + 0x90) = *puVar7;
          *(undefined4 *)(iVar8 + 0x94) = uVar1;
          *(undefined4 *)(iVar8 + 0x98) = uVar2;
          *(undefined4 *)(iVar8 + 0x9c) = uVar3;
          FUN_008e4320(iVar8 + 0xa0);
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != (int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4));
    }
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar8 = *(int *)(param_1 + 0xf0);
      local_d8 = 0;
      local_dc = 0;
      local_e0 = 0;
      local_e4 = 0;
      local_ec = 0;
      local_f0 = 0;
      local_f4 = 0;
      local_f8 = 0;
      local_100 = 0;
      local_104 = 0;
      local_108 = 0;
      local_10c = 0;
      local_d4 = 0x3f800000;
      local_e8 = 0x3f800000;
      local_fc = 0x3f800000;
      local_110 = 0x3f800000;
      if (*(float *)(iVar8 + 0x98) != 0.0) {
        D3DXMatrixRotationZ(local_60,*(undefined4 *)(iVar8 + 0x98));
        D3DXMatrixMultiply(&local_118,local_68,&local_118);
      }
      if (*(float *)(iVar8 + 0x94) != 0.0) {
        D3DXMatrixRotationY(local_60,*(undefined4 *)(iVar8 + 0x94));
        D3DXMatrixMultiply(&local_118,local_68,&local_118);
      }
      if (*(float *)(iVar8 + 0x90) != 0.0) {
        D3DXMatrixRotationX(local_60,*(undefined4 *)(iVar8 + 0x90));
        D3DXMatrixMultiply(&local_118,local_68,&local_118);
      }
      D3DXMatrixMultiply(&local_a0,&local_110,iVar8 + 0xb0);
    }
    else {
      iVar8 = FUN_00a12210(*(undefined4 *)(param_1 + 0x1d0));
      local_d0 = SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                      *(float *)(iVar8 + 0x10) * *(float *)(iVar8 + 0x10) +
                      *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
      local_cc = SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                      *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                      *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
      fVar4 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
                   *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
                   *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
      local_118 = *(float *)(iVar8 + 0x28) / fVar4;
      local_114 = *(float *)(iVar8 + 0x38) / fVar4;
      fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(iVar8 + 0x18) / fVar4));
      local_b4 = (float)fVar10;
      fVar11 = (float10)fpatan((float10)local_118,(float10)local_114);
      local_20 = (float)fVar11;
      fVar12 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)local_cc,
                               (float10)*(float *)(iVar8 + 0x10) / (float10)local_d0);
      fVar11 = (float10)0;
      local_68[0] = (float)fVar11;
      local_6c = (float)fVar11;
      local_70 = (float)fVar11;
      local_74 = (float)fVar11;
      local_7c = (float)fVar11;
      local_80 = (float)fVar11;
      local_84 = (float)fVar11;
      local_88 = (float)fVar11;
      local_90 = (float)fVar11;
      local_94 = (float)fVar11;
      local_98 = (float)fVar11;
      local_9c = (float)fVar11;
      local_68[1] = 1.0;
      local_78 = 0x3f800000;
      local_8c = 0x3f800000;
      local_a0 = 0x3f800000;
      if (fVar11 != fVar12) {
        D3DXMatrixRotationZ(&local_110,(float)fVar12);
        D3DXMatrixMultiply(auStack_a8,&local_118,auStack_a8);
        fVar10 = (float10)local_b4;
      }
      if ((float10)0 != fVar10) {
        D3DXMatrixRotationY(&local_110,(float)fVar10);
        D3DXMatrixMultiply(auStack_a8,&local_118,auStack_a8);
      }
      if (local_20 != 0.0) {
        D3DXMatrixRotationX(&local_110,local_20);
        D3DXMatrixMultiply(auStack_a8,&local_118,auStack_a8);
      }
    }
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_e4 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_f4 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_104 = 0;
    local_108 = 0;
    local_10c = 0;
    local_d4 = 0x3f800000;
    local_e8 = 0x3f800000;
    local_fc = 0x3f800000;
    local_110 = 0x3f800000;
    if (*(float *)(param_1 + 0xe8) != 0.0) {
      D3DXMatrixRotationZ(local_60,*(undefined4 *)(param_1 + 0xe8));
      D3DXMatrixMultiply(&local_118,local_68,&local_118);
    }
    if (*(float *)(param_1 + 0xe4) != 0.0) {
      D3DXMatrixRotationY(local_60,*(undefined4 *)(param_1 + 0xe4));
      D3DXMatrixMultiply(&local_118,local_68,&local_118);
    }
    if (*(float *)(param_1 + 0xe0) != 0.0) {
      D3DXMatrixRotationX(local_60,*(undefined4 *)(param_1 + 0xe0));
      D3DXMatrixMultiply(&local_118,local_68,&local_118);
    }
    D3DXMatrixMultiply(&local_a0,&local_110,&local_a0);
    FUN_008e43f0(&uStack_bc,auStack_ac);
    if (*(int *)(param_1 + 0x10c) != 0) {
      iVar8 = *(int *)(param_1 + 0xf0);
      *(undefined4 *)(iVar8 + 0x50) = uStack_bc;
      *(undefined4 *)(iVar8 + 0x54) = uStack_b8;
      *(float *)(iVar8 + 0x58) = local_b4;
      *(undefined4 *)(iVar8 + 0x5c) = local_b0;
      iVar8 = *(int *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(iVar8 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar8 + 0x54);
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(iVar8 + 0x58);
      *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(iVar8 + 0x5c);
      FUN_00a17aa0();
    }
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 8;
  }
  return;
}

