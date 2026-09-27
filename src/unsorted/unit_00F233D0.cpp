// src/unsorted/unit_00F233D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F233D0..00F233D0, 1 functions

#include "mgrr.h"

// 00F233D0  FUN_00f233d0  size=1188  [run]
void __fastcall FUN_00f233d0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float10 fVar8;
  undefined1 auStack_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_44;
  iVar2 = FUN_00fdbc60();
  iVar3 = FUN_00fdbc60();
  if ((iVar2 != iVar3) && (iVar2 = *(int *)(param_1 + 0x450) + -1, iVar2 != 0)) {
    iVar3 = iVar2 * 0xc;
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x458) + iVar3);
      *puVar4 = *(undefined4 *)(*(int *)(param_1 + 0x458) + -0xc + iVar3);
      iVar3 = iVar3 + -0xc;
      iVar2 = iVar2 + -1;
      puVar4[1] = puVar4[-2];
      puVar4[2] = puVar4[-1];
    } while (iVar2 != 0);
  }
  pfVar5 = *(float **)(param_1 + 0x3b0);
  if (pfVar5 != (float *)0x0) {
    local_30 = *pfVar5;
    uVar7 = *(uint *)(param_1 + 0x450);
    iVar2 = uVar7 - 1;
    local_2c = pfVar5[1];
    local_28 = pfVar5[2];
    if (-1 < iVar2) {
      if (3 < (int)uVar7) {
        uVar7 = uVar7 >> 2;
        iVar3 = iVar2 * 0xc;
        iVar2 = iVar2 + uVar7 * -4;
        do {
          pfVar5 = (float *)(*(int *)(param_1 + 0x458) + iVar3);
          *pfVar5 = *(float *)(*(int *)(param_1 + 0x458) + iVar3) + local_30;
          pfVar5[1] = local_2c + pfVar5[1];
          pfVar5[2] = pfVar5[2] + local_28;
          pfVar5 = (float *)(iVar3 + -0xc + *(int *)(param_1 + 0x458));
          *pfVar5 = *(float *)(iVar3 + -0xc + *(int *)(param_1 + 0x458)) + local_30;
          pfVar5[1] = local_2c + pfVar5[1];
          pfVar5[2] = pfVar5[2] + local_28;
          pfVar5 = (float *)(iVar3 + -0x18 + *(int *)(param_1 + 0x458));
          *pfVar5 = *(float *)(iVar3 + -0x18 + *(int *)(param_1 + 0x458)) + local_30;
          pfVar5[1] = local_2c + pfVar5[1];
          pfVar5[2] = pfVar5[2] + local_28;
          pfVar5 = (float *)(*(int *)(param_1 + 0x458) + iVar3 + -0x24);
          uVar7 = uVar7 - 1;
          *pfVar5 = *(float *)(*(int *)(param_1 + 0x458) + iVar3 + -0x24) + local_30;
          pfVar5[1] = local_2c + pfVar5[1];
          pfVar5[2] = pfVar5[2] + local_28;
          iVar3 = iVar3 + -0x30;
        } while (uVar7 != 0);
      }
      if (-1 < iVar2) {
        iVar3 = iVar2 * 0xc;
        do {
          pfVar5 = (float *)(*(int *)(param_1 + 0x458) + iVar3);
          pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar3);
          iVar3 = iVar3 + -0xc;
          iVar2 = iVar2 + -1;
          *pfVar6 = *pfVar5 + local_30;
          pfVar6[1] = local_2c + pfVar6[1];
          pfVar6[2] = pfVar6[2] + local_28;
        } while (-1 < iVar2);
      }
    }
  }
  if (*(float *)(param_1 + 0x4c0) != 0.0) {
    if (*(float *)(param_1 + 0x4bc) <= 0.0) {
      fVar1 = *(float *)(param_1 + 0x110);
      if (fVar1 == 1.0) {
        local_38 = *(float *)(param_1 + 0x4c0);
      }
      else {
        local_38 = *(float *)(param_1 + 0x4c0);
        if (local_38 < 2.0) {
          local_38 = local_38 / ((fVar1 - local_38 * fVar1) + local_38);
        }
        else {
          fVar8 = (float10)FUN_00fdc1f0();
          local_38 = (float)fVar8;
        }
      }
      *(float *)(param_1 + 0x150) = local_38 * *(float *)(param_1 + 0x150);
      *(float *)(param_1 + 0x154) = *(float *)(param_1 + 0x154) * local_38;
      *(float *)(param_1 + 0x158) = local_38 * *(float *)(param_1 + 0x158);
      local_38 = *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158) +
                 *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150) +
                 *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154);
      fVar8 = (float10)FUN_00fdef70();
      local_38 = (float)fVar8;
      if (local_38 < 0.01) {
        *(undefined4 *)(param_1 + 0x150) = 0;
        *(undefined4 *)(param_1 + 0x154) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined4 *)(param_1 + 0x160) = 0;
        *(undefined4 *)(param_1 + 0x164) = 0;
        *(undefined4 *)(param_1 + 0x168) = 0;
        *(undefined4 *)(param_1 + 0x16c) = local_24;
        *(undefined4 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined4 *)(param_1 + 0x14c) = local_24;
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        *(undefined4 *)(param_1 + 0x1d4) = 0;
        *(undefined4 *)(param_1 + 0x1d8) = 0;
        *(undefined4 *)(param_1 + 0x1dc) = local_24;
      }
    }
    else {
      *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4bc) - *(float *)(param_1 + 0x110);
    }
  }
  FUN_00f18340();
  if ((*(float *)(param_1 + 0x47c) != 0.0) && (uVar7 = 1, 1 < *(uint *)(param_1 + 0x450))) {
    iVar2 = 0xc;
    do {
      iVar3 = iVar2 + *(int *)(param_1 + 0x458);
      local_20 = *(float *)(iVar2 + *(int *)(param_1 + 0x458)) - *(float *)(iVar3 + -0xc);
      local_1c = *(float *)(iVar3 + 4) - *(float *)(iVar3 + -8);
      local_18 = *(float *)(iVar3 + 8) - *(float *)(iVar3 + -4);
      local_38 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      fVar8 = (float10)FUN_00fdef70();
      local_34 = (float)fVar8;
      if (*(float *)(param_1 + 0x47c) < local_34) {
        if (local_38 <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_20 = 0.0;
          local_1c = 1.0;
          local_18 = 0.0;
        }
        D3DXVec3Normalize(&local_20,&local_20);
        local_34 = *(float *)(param_1 + 0x47c);
        pfVar5 = (float *)(iVar2 + *(int *)(param_1 + 0x458));
        local_20 = local_34 * local_20;
        local_1c = local_1c * local_34;
        local_18 = local_34 * local_18;
        local_30 = local_20 + pfVar5[-3];
        local_2c = pfVar5[-2] + local_1c;
        local_28 = pfVar5[-1] + local_18;
        *pfVar5 = local_30;
        pfVar5[1] = local_2c;
        pfVar5[2] = local_28;
      }
      uVar7 = uVar7 + 1;
      iVar2 = iVar2 + 0xc;
    } while (uVar7 < *(uint *)(param_1 + 0x450));
  }
  __security_check_cookie(local_14 ^ (uint)auStack_44);
  return;
}

