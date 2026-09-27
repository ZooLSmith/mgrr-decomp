// src/unsorted/unit_00F195B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F195B0..00F195B0, 1 functions

#include "mgrr.h"

// 00F195B0  FUN_00f195b0  size=1449  [run]
void __thiscall FUN_00f195b0(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined1 auStack_64 [12];
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_64;
  local_30 = *param_2 - *param_3;
  local_2c = param_2[1] - param_3[1];
  local_28 = param_2[2] - param_3[2];
  local_54 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  fVar10 = (float10)FUN_00fdef70();
  local_54 = (float)fVar10;
  if (0.0 < local_54) {
    local_30 = *param_3 - *param_2;
    local_2c = param_3[1] - param_2[1];
    local_28 = param_3[2] - param_2[2];
    local_24 = param_3[3] - param_2[3];
    fVar2 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
    local_50 = (double)CONCAT44(local_50._4_4_,fVar2);
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    fVar2 = *(float *)(param_1 + 0x544);
    local_30 = fVar2 * local_30;
    local_2c = local_2c * fVar2;
    local_28 = local_28 * fVar2;
    local_24 = fVar2 * local_24;
    if (*(float *)(param_1 + 0x544) < local_54) {
      local_40 = *param_2 + local_30;
      local_3c = local_2c + param_2[1];
      local_50 = (double)CONCAT44(local_3c,local_40);
      local_48 = param_2[2] + local_28;
      local_44 = param_2[3] + local_24;
      fVar2 = *(float *)(param_1 + 0x544);
      local_38 = local_48;
      local_34 = local_44;
    }
    else {
      local_40 = *param_3;
      local_3c = param_3[1];
      local_38 = param_3[2];
      local_34 = param_3[3];
      local_50._4_4_ = param_2[1] - param_3[1];
      local_48 = param_2[2] - param_3[2];
      local_50._0_4_ =
           local_48 * local_48 +
           (*param_2 - *param_3) * (*param_2 - *param_3) + local_50._4_4_ * local_50._4_4_;
      fVar10 = (float10)FUN_00fdef70();
      fVar2 = (float)fVar10;
      local_50 = (double)CONCAT44(local_50._4_4_,fVar2);
    }
    pfVar4 = *(float **)(param_1 + 0x458);
    *(float *)(param_1 + 0x4c8) = fVar2;
    pfVar1 = (float *)(param_1 + 0x4b0);
    *pfVar4 = local_40;
    pfVar4[1] = local_3c;
    pfVar4[2] = local_38;
    iVar9 = *(int *)(param_1 + 0x50);
    if (iVar9 == 0) {
      *pfVar1 = local_40;
      *(float *)(param_1 + 0x4b4) = local_3c;
      *(float *)(param_1 + 0x4b8) = local_38;
      *(float *)(param_1 + 0x4bc) = local_34;
    }
    else {
      FUN_00efc630(pfVar1,&local_40,iVar9,iVar9 + 0x10,*(undefined4 *)(param_1 + 0x84));
    }
    *(undefined4 *)(param_1 + 0x4c0) = 1;
    *(float *)(param_1 + 0x180) = *pfVar1;
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x4b4);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x4b8);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x4bc);
    pfVar1 = *(float **)(param_1 + 0x458);
    local_54 = *param_2 - *pfVar1;
    local_50 = (double)*(float *)(param_1 + 0x4c8);
    local_58 = (param_2[1] - pfVar1[1]) * (param_2[1] - pfVar1[1]) + local_54 * local_54 +
               (param_2[2] - pfVar1[2]) * (param_2[2] - pfVar1[2]);
    fVar10 = (float10)FUN_00fdef70();
    local_58 = (float)fVar10;
    *(float *)(param_1 + 0x4d4) = (float)local_50 / local_58;
    *pfVar1 = local_40;
    pfVar1[1] = local_3c;
    pfVar1[2] = local_38;
    iVar9 = *(int *)(param_1 + 0x50);
    if (iVar9 != 0) {
      pfVar1 = *(float **)(param_1 + 0x458);
      local_40 = *pfVar1;
      puVar5 = *(undefined4 **)(param_1 + 0x540);
      local_3c = pfVar1[1];
      local_38 = pfVar1[2];
      local_34 = 1.0;
      FUN_00efc630(&local_50,&local_40,iVar9,iVar9 + 0x10,*(undefined4 *)(param_1 + 0x84));
      *puVar5 = (float)local_50;
      local_54 = 1.4013e-45;
      puVar5[1] = local_50._4_4_;
      puVar5[2] = local_48;
      if (1 < *(uint *)(param_1 + 0x450)) {
        iVar9 = 0xc;
        local_34 = 1.0;
        do {
          iVar6 = *(int *)(param_1 + 0x540);
          local_40 = *(float *)(iVar6 + iVar9);
          iVar7 = *(int *)(param_1 + 0x50);
          iVar8 = *(int *)(param_1 + 0x458);
          local_3c = *(float *)(iVar6 + 4 + iVar9);
          local_38 = *(float *)(iVar6 + 8 + iVar9);
          if (iVar7 == 0) {
            local_50 = (double)CONCAT44(local_3c,local_40);
            local_44 = 1.0;
            local_48 = local_38;
          }
          else {
            FUN_00effcf0(&local_50,&local_40,iVar7,iVar7 + 0x10,*(undefined4 *)(param_1 + 0x84),0);
          }
          *(float *)(iVar8 + iVar9) = (float)local_50;
          local_54 = (float)((int)local_54 + 1);
          iVar9 = iVar9 + 0xc;
          *(float *)(iVar8 + -8 + iVar9) = local_50._4_4_;
          *(float *)(iVar8 + -4 + iVar9) = local_48;
        } while ((uint)local_54 < (uint)*(float *)(param_1 + 0x450));
      }
    }
    pfVar4 = *(float **)(param_1 + 0x458);
    pfVar1 = pfVar4 + *(int *)(param_1 + 0x450) * 3 + -3;
    *(float *)(param_1 + 0x4a8) = *(float *)(param_1 + 0x4a0) + *(float *)(param_1 + 0x4a8);
    *(float *)(param_1 + 0x4ac) = *(float *)(param_1 + 0x4a4) + *(float *)(param_1 + 0x4ac);
    fVar2 = pfVar1[1];
    fVar3 = pfVar4[1];
    local_50 = (double)CONCAT44(fVar2 + fVar3,*pfVar4 + *pfVar1);
    local_48 = pfVar1[2] + pfVar4[2];
    *(float *)(param_1 + 0x130) = (*pfVar4 + *pfVar1) * 0.5;
    *(float *)(param_1 + 0x134) = (fVar2 + fVar3) * 0.5;
    *(float *)(param_1 + 0x138) = local_48 * 0.5;
    *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
    pfVar1 = *(float **)(param_1 + 0x458);
    iVar9 = *(int *)(param_1 + 0x450);
    local_40 = *pfVar1 - pfVar1[iVar9 * 3 + -3];
    local_3c = pfVar1[1] - pfVar1[iVar9 * 3 + -2];
    local_38 = pfVar1[2] - pfVar1[iVar9 * 3 + -1];
    local_58 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    fVar10 = (float10)FUN_00fdef70();
    local_58 = (float)fVar10;
    *(float *)(param_1 + 300) = local_58;
    __security_check_cookie(local_14 ^ (uint)auStack_64);
    return;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_64);
  return;
}

