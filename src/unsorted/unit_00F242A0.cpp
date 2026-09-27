// src/unsorted/unit_00F242A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F242A0..00F242A0, 1 functions

#include "types.h"

// 00F242A0  FUN_00f242a0  size=2234  [run]
void __fastcall FUN_00f242a0(int param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  float10 fVar12;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined8 local_70;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_a4;
  piVar1 = (int *)(param_1 + 0x3a0);
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
  iVar8 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x100);
  pfVar10 = (float *)(param_1 + 0x4f0);
  if (iVar8 == 0) {
    *pfVar10 = *(float *)(param_1 + 0x4e0);
    *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x4e4);
    *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4e8);
    *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x4ec);
  }
  else {
    FUN_00effcf0(pfVar10,(float *)(param_1 + 0x4e0),iVar8,iVar8 + 0x10,
                 *(undefined4 *)(param_1 + 0x84),0);
  }
  *(float *)(param_1 + 0x1a0) = *pfVar10;
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x4f4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x4fc);
  if ((*(int *)(param_1 + 0x548) == 1) && (iVar8 = FUN_00f1b060(pfVar10,param_1 + 400), iVar8 != 0))
  goto LAB_00f24b45;
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
    FUN_00ea9f40(pfVar10);
    FUN_00ea9f80(param_1 + 400);
  }
  if (*(char *)(param_1 + 0x4d8) == '\0') {
    iVar8 = FUN_009e0f30(&local_80,pfVar10,param_1 + 400);
    if (iVar8 == 0) goto LAB_00f2467a;
LAB_00f243d8:
    pfVar2 = (float *)(param_1 + 0x4b0);
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    *pfVar2 = local_80;
    *(float *)(param_1 + 0x4b4) = local_7c;
    *(float *)(param_1 + 0x4b8) = local_78;
    *(undefined4 *)(param_1 + 0x4bc) = local_74;
    local_28 = 0.0;
    local_2c = 0.0;
    local_30 = 0.0;
    local_34 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_24 = 0x3f800000;
    local_38 = 0x3f800000;
    local_4c = 0x3f800000;
    local_60 = 0x3f800000;
    if (*(int *)(param_1 + 0x50) != 0) {
      D3DXMatrixInverse(&local_60,0,*(int *)(param_1 + 0x50) + 0x10);
      D3DXVec3TransformNormal(pfVar2,pfVar2,(int)&local_70 + 4);
      *pfVar2 = local_30 + *pfVar2;
      *(float *)(param_1 + 0x4b4) = local_2c + *(float *)(param_1 + 0x4b4);
      *(float *)(param_1 + 0x4b8) = local_28 + *(float *)(param_1 + 0x4b8);
    }
    local_a0 = *pfVar10 - local_80;
    local_9c = *(float *)(param_1 + 0x4f4) - local_7c;
    local_98 = *(float *)(param_1 + 0x4f8) - local_78;
    local_84 = local_98 * local_98 + local_9c * local_9c + local_a0 * local_a0;
    fVar12 = (float10)FUN_00fdef70();
    pfVar2 = *(float **)(param_1 + 0x458);
    *(float *)(param_1 + 0x4c8) = (float)fVar12;
    local_84 = *(float *)(param_1 + 0x4f4) - pfVar2[1];
    fVar6 = *(float *)(param_1 + 0x4f8) - pfVar2[2];
    local_70 = (double)(float)fVar12;
    local_a4 = (*pfVar10 - *pfVar2) * (*pfVar10 - *pfVar2) + local_84 * local_84 + fVar6 * fVar6;
    fVar12 = (float10)FUN_00fdef70();
    local_a4 = (float)fVar12;
    *(float *)(param_1 + 0x4d4) = (float)local_70 / local_a4;
    *pfVar2 = local_80;
    pfVar2[1] = local_7c;
    pfVar2[2] = local_78;
    iVar8 = *(int *)(param_1 + 0x50);
    if (iVar8 != 0) {
      pfVar10 = *(float **)(param_1 + 0x458);
      local_a0 = *pfVar10;
      puVar3 = *(undefined4 **)(param_1 + 0x540);
      local_9c = pfVar10[1];
      local_98 = pfVar10[2];
      local_94 = 0x3f800000;
      FUN_00efc630(&local_70,&local_a0,iVar8,iVar8 + 0x10,*(undefined4 *)(param_1 + 0x84));
      *puVar3 = (float)local_70;
      local_84 = 1.4013e-45;
      puVar3[1] = local_70._4_4_;
      puVar3[2] = local_68;
      if (1 < *(uint *)(param_1 + 0x450)) {
        iVar8 = 0xc;
        local_94 = 0x3f800000;
        do {
          iVar9 = *(int *)(param_1 + 0x540);
          local_a0 = *(float *)(iVar9 + iVar8);
          iVar4 = *(int *)(param_1 + 0x50);
          iVar5 = *(int *)(param_1 + 0x458);
          local_9c = *(float *)(iVar9 + 4 + iVar8);
          local_98 = *(float *)(iVar9 + 8 + iVar8);
          if (iVar4 == 0) {
            local_70 = (double)CONCAT44(local_9c,local_a0);
            local_64 = 0x3f800000;
            local_68 = local_98;
          }
          else {
            FUN_00effcf0(&local_70,&local_a0,iVar4,iVar4 + 0x10,*(undefined4 *)(param_1 + 0x84),0);
          }
          *(float *)(iVar5 + iVar8) = (float)local_70;
          local_84 = (float)((int)local_84 + 1);
          iVar8 = iVar8 + 0xc;
          *(float *)(iVar5 + -8 + iVar8) = local_70._4_4_;
          *(float *)(iVar5 + -4 + iVar8) = local_68;
        } while ((uint)local_84 < (uint)*(float *)(param_1 + 0x450));
      }
    }
  }
  else {
    iVar8 = FUN_00ef5970();
    if ((((iVar8 != 0) && (*(int *)(param_1 + 0x84) != 0)) &&
        (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) &&
       (iVar8 = FUN_00ea9e80(&local_80), iVar8 != 0)) goto LAB_00f243d8;
LAB_00f2467a:
    if (*(int *)(param_1 + 0x4c0) == 0) {
      *(undefined4 *)(param_1 + 0x4c0) = 1;
      *(undefined4 *)(param_1 + 0x4d4) = 0;
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x4b0);
      *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x4b4);
      *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x4b8);
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x4bc);
    }
    pfVar10 = *(float **)(param_1 + 0x458);
    FUN_00f0db60(&local_a0,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),1);
    *pfVar10 = local_a0;
    pfVar10[1] = local_9c;
    pfVar10[2] = local_98;
    iVar8 = *(int *)(param_1 + 0x50);
    if (iVar8 != 0) {
      pfVar10 = *(float **)(param_1 + 0x458);
      local_a0 = *pfVar10;
      puVar3 = *(undefined4 **)(param_1 + 0x540);
      local_9c = pfVar10[1];
      local_98 = pfVar10[2];
      local_94 = 0x3f800000;
      FUN_00efc630(&local_70,&local_a0,iVar8,iVar8 + 0x10,*(undefined4 *)(param_1 + 0x84));
      *puVar3 = (float)local_70;
      local_84 = 1.4013e-45;
      puVar3[1] = local_70._4_4_;
      puVar3[2] = local_68;
      if (1 < *(uint *)(param_1 + 0x450)) {
        iVar8 = 0xc;
        local_94 = 0x3f800000;
        do {
          iVar9 = *(int *)(param_1 + 0x540);
          local_a0 = *(float *)(iVar9 + iVar8);
          iVar4 = *(int *)(param_1 + 0x50);
          iVar5 = *(int *)(param_1 + 0x458);
          local_9c = *(float *)(iVar9 + 4 + iVar8);
          local_98 = *(float *)(iVar9 + 8 + iVar8);
          if (iVar4 == 0) {
            local_70 = (double)CONCAT44(local_9c,local_a0);
            local_64 = 0x3f800000;
            local_68 = local_98;
          }
          else {
            FUN_00effcf0(&local_70,&local_a0,iVar4,iVar4 + 0x10,*(undefined4 *)(param_1 + 0x84),0);
          }
          *(float *)(iVar5 + iVar8) = (float)local_70;
          local_84 = (float)((int)local_84 + 1);
          iVar8 = iVar8 + 0xc;
          *(float *)(iVar5 + -8 + iVar8) = local_70._4_4_;
          *(float *)(iVar5 + -4 + iVar8) = local_68;
        } while ((uint)local_84 < (uint)*(float *)(param_1 + 0x450));
      }
    }
    if ((*(float *)(param_1 + 0x47c) != 0.0) && (1 < *(uint *)(param_1 + 0x450))) {
      iVar8 = 0xc;
      uVar11 = 1;
      do {
        iVar9 = *(int *)(param_1 + 0x458) + iVar8;
        fVar6 = *(float *)(*(int *)(param_1 + 0x458) + iVar8) - *(float *)(iVar9 + -0xc);
        fVar7 = *(float *)(iVar9 + 4) - *(float *)(iVar9 + -8);
        local_70 = (double)CONCAT44(fVar7,fVar6);
        local_68 = *(float *)(iVar9 + 8) - *(float *)(iVar9 + -4);
        local_84 = local_68 * local_68 + fVar7 * fVar7 + fVar6 * fVar6;
        fVar12 = (float10)FUN_00fdef70();
        local_a4 = (float)fVar12;
        if (*(float *)(param_1 + 0x47c) < local_a4) {
          if (local_84 <= 0.0) {
            FUN_00dd5650(&DAT_0163d0ac);
            local_70 = 0.0078125;
            local_68 = 0.0;
          }
          D3DXVec3Normalize(&local_70,&local_70);
          local_a4 = *(float *)(param_1 + 0x47c);
          pfVar10 = (float *)(*(int *)(param_1 + 0x458) + iVar8);
          local_a0 = local_a4 * (float)local_70;
          local_70._4_4_ = local_70._4_4_ * local_a4;
          local_70 = (double)CONCAT44(local_70._4_4_,local_a0);
          local_68 = local_a4 * local_68;
          local_a0 = pfVar10[-3] + local_a0;
          local_9c = pfVar10[-2] + local_70._4_4_;
          local_98 = pfVar10[-1] + local_68;
          *pfVar10 = local_a0;
          pfVar10[1] = local_9c;
          pfVar10[2] = local_98;
        }
        uVar11 = uVar11 + 1;
        iVar8 = iVar8 + 0xc;
      } while (uVar11 < *(uint *)(param_1 + 0x450));
    }
    local_a0 = *(float *)(param_1 + 0x4f0) - *(float *)(param_1 + 400);
    local_9c = *(float *)(param_1 + 0x4f4) - *(float *)(param_1 + 0x194);
    local_98 = *(float *)(param_1 + 0x4f8) - *(float *)(param_1 + 0x198);
    local_a4 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
    fVar12 = (float10)FUN_00fdef70();
    *(float *)(param_1 + 0x4c8) = (float)fVar12;
  }
  pfVar2 = *(float **)(param_1 + 0x458);
  pfVar10 = pfVar2 + *(int *)(param_1 + 0x450) * 3 + -3;
  *(float *)(param_1 + 0x4a8) = *(float *)(param_1 + 0x4a0) + *(float *)(param_1 + 0x4a8);
  *(float *)(param_1 + 0x4ac) = *(float *)(param_1 + 0x4a4) + *(float *)(param_1 + 0x4ac);
  fVar6 = (*pfVar10 + *pfVar2) * 0.5;
  fVar7 = (pfVar10[1] + pfVar2[1]) * 0.5;
  local_70 = (double)CONCAT44(fVar7,fVar6);
  local_68 = (pfVar10[2] + pfVar2[2]) * 0.5;
  *(float *)(param_1 + 0x130) = fVar6;
  *(float *)(param_1 + 0x134) = fVar7;
  *(float *)(param_1 + 0x138) = local_68;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar10 = *(float **)(param_1 + 0x458);
  iVar8 = *(int *)(param_1 + 0x450);
  local_a0 = *pfVar10 - pfVar10[iVar8 * 3 + -3];
  local_9c = pfVar10[1] - pfVar10[iVar8 * 3 + -2];
  local_98 = pfVar10[2] - pfVar10[iVar8 * 3 + -1];
  local_a4 = local_98 * local_98 + local_9c * local_9c + local_a0 * local_a0;
  fVar12 = (float10)FUN_00fdef70();
  local_a4 = (float)fVar12;
  *(float *)(param_1 + 300) = local_a4;
LAB_00f24b45:
  __security_check_cookie(local_14 ^ (uint)&local_a4);
  return;
}

