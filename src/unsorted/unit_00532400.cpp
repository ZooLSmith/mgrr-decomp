// src/unsorted/unit_00532400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00532400..00532930, 2 functions

#include "mgrr.h"

// 00532400  FUN_00532400  size=1323  [run]
/* WARNING: Removing unreachable block (ram,0x00532654) */
/* WARNING: Removing unreachable block (ram,0x005327d7) */

void FUN_00532400(float param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float unaff_ESI;
  float unaff_EDI;
  undefined1 *puVar5;
  undefined1 *puVar6;
  float *pfVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
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
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  float local_4;
  
  pfVar7 = param_2;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0.0;
  FUN_0041c8e0(8,&DAT_01b7bd48);
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if (local_8 < local_c) {
    pfVar9 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar9 != (float *)0x0) {
      *pfVar9 = local_2c;
      pfVar9[1] = local_28;
      pfVar9[2] = local_24;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_2c;
  local_1c = local_40 - local_28;
  local_18 = local_3c - local_24;
  param_2 = (float *)(SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) *
                     0.33333334);
  if (4.0 < (float)param_2) {
    param_2 = (float *)0x40800000;
  }
  fVar11 = (param_3[1] - pfVar7[1]) * (param_3[1] - pfVar7[1]);
  bVar2 = fVar11 < 1.0 != (fVar11 == 1.0);
  if (bVar2) {
    param_2 = (float *)0x41000000;
  }
  local_50 = (local_2c + local_44) * 0.5;
  local_4c = (local_40 + local_28) * 0.5;
  local_48 = (local_3c + local_24) * 0.5;
  if (bVar2) {
    local_4c = local_28 + (float)param_2;
  }
  else {
    if (local_40 < local_28) {
      local_4c = local_28 + (float)param_2;
    }
    if ((local_28 < local_40) && (local_4c = local_40 + (float)param_2, local_40 + 5.0 < local_28))
    {
      local_4c = (float)param_2 * 0.5 + local_40;
    }
  }
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_38 = local_50 - local_20;
  local_34 = local_4c - local_1c;
  local_30 = local_48 - local_18;
  local_5c = local_38 - local_2c;
  local_58 = local_34 - local_28;
  local_54 = local_30 - local_24;
  fVar11 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar11 < 0.0 != (fVar11 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar7 = &local_5c;
  pfVar9 = pfVar7;
  D3DXVec3Normalize();
  iVar3 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = unaff_EDI * param_1 + local_34;
      pfVar1[1] = unaff_ESI * param_1 + local_30;
      pfVar1[2] = local_5c * param_1 + local_2c;
    }
    iVar3 = local_10 + 1;
    if (iVar3 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar3 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_40;
        pfVar1[1] = local_3c;
        pfVar1[2] = local_38;
      }
      iVar3 = local_10 + 2;
      if (iVar3 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar3 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_58;
          pfVar1[1] = local_54;
          pfVar1[2] = local_50;
        }
        iVar3 = local_10 + 3;
      }
    }
  }
  local_10 = iVar3;
  local_34 = local_28 + local_58;
  local_30 = local_24 + local_54;
  local_2c = local_20 + local_50;
  fVar11 = local_4c - local_34;
  local_5c = local_44 - local_2c;
  fVar8 = local_5c * local_5c + fVar11 * fVar11 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar8 < 0.0 != (fVar8 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fVar11 = 0.0;
    local_5c = 0.0;
  }
  puVar5 = &stack0xffffff9c;
  puVar6 = puVar5;
  D3DXVec3Normalize(puVar5,puVar5);
  fVar8 = (float)pfVar7 * local_4;
  fVar10 = (float)pfVar9 * local_4;
  fVar4 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar7 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_3c;
      pfVar7[1] = local_38;
      pfVar7[2] = local_34;
    }
    fVar4 = (float)((int)local_18 + 1);
    if ((int)fVar4 < (int)local_1c) {
      pfVar7 = (float *)((int)local_20 + (int)fVar4 * 0xc);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_54 - fVar8;
        pfVar7[1] = local_50 - fVar10;
        pfVar7[2] = local_4c - fVar11 * local_4;
      }
      fVar4 = (float)((int)local_18 + 2);
      if ((int)fVar4 < (int)local_1c) {
        pfVar7 = (float *)((int)local_20 + (int)fVar4 * 0xc);
        if (pfVar7 == (float *)0x0) {
          fVar4 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar7 = local_54;
          pfVar7[1] = local_50;
          pfVar7[2] = local_4c;
          fVar4 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar4;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,puVar5,puVar6,fVar8,fVar10);
  }
  return;
}

// 00532930  FUN_00532930  size=2183  [run]
/* WARNING: Removing unreachable block (ram,0x00533196) */
/* WARNING: Removing unreachable block (ram,0x005331a5) */

void __fastcall FUN_00532930(float param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_ESI;
  float10 fVar5;
  int iStack_124;
  int iStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_3c;
  float fStack_2c;
  
  local_7c = (int)param_1 + 0xfc8;
  local_b4 = param_1;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_118 = 0.0;
    local_114 = 0.0;
    local_110 = 0.0;
    local_10c = 0.0;
    local_108 = 0.0;
    FUN_0041c8e0(8,&DAT_01b7bd48);
    FUN_00a81330();
    FUN_00a7c8a0();
    FUN_00a81330();
    FUN_00a7c8a0();
    iVar3 = FUN_00a12210(0x503);
    iVar4 = FUN_00a12210(0xe10);
    local_d0 = *(float *)(iVar3 + 0x40);
    local_cc = *(float *)(iVar3 + 0x44);
    local_c8 = *(float *)(iVar3 + 0x48);
    local_c4 = *(float *)(iVar3 + 0x4c);
    local_a0 = *(float *)(iVar4 + 0x40);
    local_9c = *(float *)(iVar4 + 0x44);
    local_98 = *(float *)(iVar4 + 0x48);
    local_94 = *(undefined4 *)(iVar4 + 0x4c);
    local_f0 = SQRT((local_d0 - local_a0) * (local_d0 - local_a0) +
                    (local_cc - local_9c) * (local_cc - local_9c) +
                    (local_c8 - local_98) * (local_c8 - local_98));
    local_104 = local_f0 * 0.16666667;
    local_100 = local_f0 * -0.5;
    local_fc = 0.0;
    local_f8 = 0.0;
    local_f0 = local_f0 * 0.5;
    local_ec = 0.0;
    local_e8 = 0.0;
    D3DXVec3TransformNormal(&local_100,&local_100,iVar3 + 0x10);
    D3DXVec3TransformNormal(&local_fc,&local_fc,iVar4 + 0x10);
    fStack_3c = local_10c + fStack_dc;
    fStack_2c = local_fc + fStack_ac;
    fStack_a4 = local_104 + local_b4 + local_114 + fStack_e4;
    local_a0 = local_100 + fStack_b0 + local_110 + fStack_e0;
    local_c8 = (local_108 + fStack_b8 + local_118 + local_e8) * 0.5;
    local_c4 = fStack_a4 * 0.5;
    fStack_c0 = local_a0 * 0.5;
    local_f8 = (local_108 + fStack_b8) - (local_118 + local_e8);
    fStack_f4 = (local_104 + local_b4) - (local_114 + fStack_e4);
    local_f0 = (local_100 + fStack_b0) - (local_110 + fStack_e0);
    local_ec = fStack_2c - fStack_3c;
    fVar2 = local_f0 * local_f0 + fStack_f4 * fStack_f4 + local_f8 * local_f8;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_f8,&local_f8);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_f0 = 0.0;
      fStack_f4 = 1.0;
      local_f8 = 0.0;
    }
    local_f8 = local_f8 * fStack_11c;
    fStack_f4 = fStack_f4 * fStack_11c;
    local_f0 = local_f0 * fStack_11c;
    local_ec = local_ec * fStack_11c;
    fVar2 = *(float *)((int)local_cc + 0x44) + 0.2;
    if (local_c4 <= fVar2) {
      fStack_f4 = 0.0;
      local_c4 = fVar2;
    }
    fVar2 = local_110 * local_110 + local_114 * local_114 + local_118 * local_118;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_118,&local_118);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_110 = 0.0;
      local_114 = 1.0;
      local_118 = 0.0;
    }
    local_118 = local_118 * fStack_11c;
    local_114 = local_114 * fStack_11c;
    local_110 = local_110 * fStack_11c;
    local_10c = local_10c * fStack_11c;
    fVar2 = local_100 * local_100 + local_104 * local_104 + local_108 * local_108;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_108,&local_108);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_100 = 0.0;
      local_108 = 0.0;
      local_104 = 1.0;
    }
    local_108 = local_108 * fStack_11c;
    local_104 = local_104 * fStack_11c;
    local_100 = local_100 * fStack_11c;
    local_fc = fStack_11c * local_fc;
    if (iStack_124 < unaff_EBX) {
      pfVar1 = (float *)(unaff_ESI + iStack_124 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_e8;
        pfVar1[1] = fStack_e4;
        pfVar1[2] = fStack_e0;
      }
      iStack_124 = iStack_124 + 1;
    }
    fStack_a8 = local_c8 - local_f8;
    fStack_a4 = local_c4 - fStack_f4;
    iVar3 = iStack_124;
    if (iStack_124 < unaff_EBX) {
      pfVar1 = (float *)(unaff_ESI + iStack_124 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_118 + local_e8;
        pfVar1[1] = local_114 + fStack_e4;
        pfVar1[2] = local_110 + fStack_e0;
      }
      iVar3 = iStack_124 + 1;
      if (iVar3 < unaff_EBX) {
        pfVar1 = (float *)(unaff_ESI + iVar3 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = fStack_a8;
          pfVar1[1] = fStack_a4;
          pfVar1[2] = fStack_c0 - local_f0;
        }
        iVar3 = iStack_124 + 2;
        if (iVar3 < unaff_EBX) {
          pfVar1 = (float *)(unaff_ESI + iVar3 * 0xc);
          if (pfVar1 != (float *)0x0) {
            *pfVar1 = local_c8;
            pfVar1[1] = local_c4;
            pfVar1[2] = fStack_c0;
          }
          iVar3 = iStack_124 + 3;
        }
      }
    }
    iStack_124 = iVar3;
    if (iStack_124 < unaff_EBX) {
      pfVar1 = (float *)(unaff_ESI + iStack_124 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_f8 + local_c8;
        pfVar1[1] = local_c4 + fStack_f4;
        pfVar1[2] = local_f0 + fStack_c0;
      }
      if (iStack_124 + 1 < unaff_EBX) {
        pfVar1 = (float *)(unaff_ESI + (iStack_124 + 1) * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_108 + fStack_b8;
          pfVar1[1] = local_104 + local_b4;
          pfVar1[2] = local_100 + fStack_b0;
        }
        if ((iStack_124 + 2 < unaff_EBX) &&
           (pfVar1 = (float *)(unaff_ESI + (iStack_124 + 2) * 0xc), pfVar1 != (float *)0x0)) {
          *pfVar1 = fStack_b8;
          pfVar1[1] = local_b4;
          pfVar1[2] = fStack_b0;
        }
      }
    }
    FUN_00a5e090(&stack0xfffffed0);
    if ((unaff_ESI != 0) && (iStack_120 != 0)) {
      FUN_00dd48d0(unaff_ESI,0);
    }
    uStack_90 = 0x3f800000;
    uStack_8c = 0x3dcccccd;
    uStack_88 = 0x3d75c28f;
    uStack_84 = 0x3d4ccccd;
    uStack_80 = 0x3d23d70a;
    local_7c = 0x3cf5c28f;
    uStack_78 = 0x3ca3d70a;
    uStack_74 = 0x3ca3d70a;
    uStack_70 = 0x3ca3d70a;
    uStack_6c = 0x3c23d70a;
    uStack_68 = 0x3c23d70a;
    uStack_64 = 0x3c23d70a;
    uStack_60 = 0x3ca3d70a;
    uStack_5c = 0x3cf5c28f;
    uStack_58 = 0x3d23d70a;
    uStack_54 = 0x3d4ccccd;
    uStack_50 = 0x3d75c28f;
    uStack_4c = 0x3f800000;
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = 0;
      fStack_11c = 0.0;
      do {
        iVar4 = FUN_00a12210(iVar3);
        local_e8 = 0.0;
        fStack_e4 = 0.0;
        fStack_e0 = 0.0;
        FUN_00a581b0(&local_e8,0,fStack_11c);
        if (iVar4 != 0) {
          *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 0x84;
          local_c8 = *(float *)(iVar4 + 0x40);
          local_c4 = *(float *)(iVar4 + 0x44);
          fStack_c0 = *(float *)(iVar4 + 0x48);
          fVar5 = (float10)FUN_00fdc1f0();
          *(float *)(iVar4 + 0x40) =
               (float)(((float10)local_e8 - (float10)local_c8) * fVar5 + (float10)local_c8);
          *(float *)(iVar4 + 0x44) =
               (float)((float10)local_c4 + ((float10)fStack_e4 - (float10)local_c4) * fVar5);
          *(float *)(iVar4 + 0x48) =
               (float)(((float10)fStack_e0 - (float10)fStack_c0) * fVar5 + (float10)fStack_c0);
          fStack_11c = fStack_11c + 0.11764706;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x12);
    }
  }
  return;
}

