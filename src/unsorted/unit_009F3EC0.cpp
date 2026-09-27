// src/unsorted/unit_009F3EC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F3EC0..009F4BA0, 3 functions

#include "mgrr.h"

// 009F3EC0  FUN_009f3ec0  size=108  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f3ec0(void)

{
  DAT_01b78864 = -1;
  DAT_01b78860 = 0;
  FUN_009f2540();
  DAT_01b78870 = &DAT_01b788c0;
  FUN_00f40ed0(1);
  if ((DAT_01bea070 & 0x8000000) == 0) {
    FUN_00f40e20();
    FUN_00f40df0();
    FUN_00f43bb0();
    EspControllerBullet::EspControllerBullet_4();
    FUN_00f40e50();
  }
  if (-1 < DAT_01b78864) {
    _DAT_01be5568 = DAT_01b78864;
  }
  return;
}

// 009F3F30  FUN_009f3f30  size=3162  [run]
void __fastcall FUN_009f3f30(int param_1)

{
  float fVar1;
  uint uVar2;
  short sVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  float *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_b0 [4];
  float local_a0 [4];
  int local_90;
  float fStack_8c;
  undefined1 local_80 [4];
  float local_7c;
  float local_60 [23];
  
  local_60[0xe] = 0.0;
  local_60[0xd] = 0.0;
  local_60[0xc] = 0.0;
  local_60[0xb] = 0.0;
  local_60[9] = 0.0;
  local_60[8] = 0.0;
  local_60[7] = 0.0;
  local_60[6] = 0.0;
  local_60[4] = 0.0;
  local_60[3] = 0.0;
  local_60[2] = 0.0;
  local_60[1] = 0.0;
  local_60[0xf] = 1.0;
  local_60[10] = 1.0;
  local_60[5] = 1.0;
  local_60[0] = 1.0;
  if (*(int *)(param_1 + 0x50) == 0) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40;
    FUN_00edfcd0(local_80);
    FUN_00f20370(param_1 + 0x450,local_80,DAT_01b78870);
    FUN_00efed20();
  }
  pfVar7 = (float *)(param_1 + 0x450);
  pfVar5 = pfVar7;
  pfVar8 = local_60;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar8 = pfVar8 + 1;
  }
  local_180 = *(float *)(param_1 + 400);
  local_17c = *(float *)(param_1 + 0x194);
  local_178 = *(float *)(param_1 + 0x198);
  local_174 = *(float *)(param_1 + 0x19c);
  local_1b0 = 0.0;
  local_1ac = -1.0;
  local_1a8 = 0.0;
  if (*(int *)(param_1 + 0x498) == 1) {
    D3DXVec3TransformNormal(&local_1b0,&local_1b0,local_60);
    fVar1 = local_1a8 * local_1a8 + local_1ac * local_1ac + local_1b0 * local_1b0;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_1b0,&local_1b0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_1b0 = 0.0;
      local_1ac = 1.0;
      local_1a8 = 0.0;
    }
  }
  else if (*(int *)(param_1 + 0x498) == 2) {
    iVar6 = FUN_00a81330();
    if ((iVar6 == 0) || (iVar6 = FUN_00a7c800(), iVar6 == 0)) {
      FUN_00dd5650(&DAT_0165baa4);
    }
    else {
      iVar6 = FUN_00a81330();
      if (iVar6 != 0) {
        FUN_00a7c800();
      }
      iVar6 = FUN_00a12210(0xffffffff);
      if (iVar6 == 0) {
        FUN_00dd5650(&DAT_0165ba88);
      }
      else {
        D3DXVec3TransformNormal(&local_1b0,&local_1b0,iVar6 + 0x10);
        fVar1 = local_1a8 * local_1a8 + local_1ac * local_1ac + local_1b0 * local_1b0;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_1b0,&local_1b0);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_1b0 = 0.0;
          local_1ac = 1.0;
          local_1a8 = 0.0;
        }
      }
    }
  }
  fVar1 = *(float *)(param_1 + 0x490);
  local_1b0 = local_1b0 * fVar1 + local_180;
  local_c0 = 2;
  local_1ac = local_1ac * fVar1 + local_17c;
  local_1a8 = local_1a8 * fVar1 + local_178;
  local_1a4 = local_1a4 * fVar1 + local_174;
  iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_4
                    (local_b0,local_a0,&local_90,0,&local_180,&local_1b0,0x15,"EffectHitSystemProxy"
                    );
  if (iVar6 == 0) goto LAB_009f4b7c;
  if ((*(uint *)(param_1 + 0x38) & 0x100000) == 0) {
    local_160 = 0;
    local_134 = *(undefined4 *)(param_1 + 0x494);
    local_15c = 0;
    local_158 = 0;
    local_154 = 0;
    local_140 = 0;
    local_150 = 0.0;
    local_13c = 0xffff;
    local_14c = 0.0;
    local_128 = 0;
    local_148 = 0.0;
    local_144 = 0.0;
    local_11c = 0xffffffff;
    local_120 = 0;
    local_124 = 0;
    local_118 = 0;
    local_12c = 0;
    local_114 = 0;
    local_130 = 0;
    if (local_90 == 0) {
      local_138 = 0;
    }
    else {
      uVar2 = *(uint *)(local_90 + 0xc);
      if (uVar2 == 0) {
        local_138 = 0;
      }
      else {
        local_138 = *(undefined4 *)((-(uint)(uVar2 != 0) & uVar2) + 0x2c);
      }
    }
    if (local_c0 == 2) {
      puVar4 = local_b0;
    }
    else {
      FUN_00dd5650(&DAT_01659600);
      puVar4 = &DAT_01b78880;
    }
    local_160 = *puVar4;
    local_15c = puVar4[1];
    local_158 = puVar4[2];
    local_154 = puVar4[3];
    if (local_c0 == 2) {
      pfVar5 = local_a0;
    }
    else {
      FUN_00dd5650(&DAT_01659600);
      pfVar5 = (float *)&DAT_01b78880;
    }
    local_150 = *pfVar5;
    local_14c = pfVar5[1];
    local_148 = pfVar5[2];
    local_144 = pfVar5[3];
    iVar6 = FUN_008f7780(local_90);
    if (iVar6 == 0) {
      local_140 = 0;
    }
    else {
      local_140 = *(undefined4 *)(iVar6 + 0x4f0);
    }
    local_118 = *(undefined4 *)(param_1 + 0x84);
    if (*(int *)(param_1 + 0x4a4) != 0) {
      local_12c = param_1 + 0x7c;
    }
    iVar6 = FUN_008f7780(local_90);
    if (iVar6 != 0) {
      FUN_00910a40(local_90);
      sVar3 = FUN_00916480();
      iVar6 = FUN_00a12210((int)sVar3);
      if (iVar6 != 0) {
        local_13c = *(undefined2 *)(iVar6 + 0xa0);
      }
    }
    puVar4 = &local_160;
  }
  else {
    local_e4 = *(undefined4 *)(param_1 + 0x494);
    local_110 = 0;
    local_10c = 0;
    local_108 = 0;
    local_104 = 0;
    local_100 = 0;
    local_f0 = 0;
    local_fc = 0;
    local_ec = 0xffff;
    local_f8 = 0;
    local_d8 = (float *)0x0;
    local_f4 = 0;
    local_d0 = 0;
    local_cc = 0xffffffff;
    local_d4 = 0;
    local_c8 = 0;
    local_dc = 0;
    local_c4 = 0;
    local_e0 = 0;
    if (local_90 == 0) {
      local_e8 = 0;
    }
    else {
      uVar2 = *(uint *)(local_90 + 0xc);
      if (uVar2 == 0) {
        local_e8 = 0;
      }
      else {
        local_e8 = *(undefined4 *)((-(uint)(uVar2 != 0) & uVar2) + 0x2c);
      }
    }
    if (*(int *)(param_1 + 0x4a4) != 0) {
      local_dc = param_1 + 0x7c;
    }
    if (local_c0 == 2) {
      puVar4 = local_b0;
    }
    else {
      FUN_00dd5650(&DAT_01659600);
      puVar4 = &DAT_01b78880;
    }
    *(undefined4 *)(param_1 + 0x480) = *puVar4;
    *(undefined4 *)(param_1 + 0x484) = puVar4[1];
    *(undefined4 *)(param_1 + 0x488) = puVar4[2];
    local_7c = 0.0;
    local_190 = 0.0;
    local_18c = 0.0;
    if ((*(int *)(param_1 + 0x49c) == 2) || (*(int *)(param_1 + 0x49c) == 4)) {
      local_1a0 = local_1b0 - local_180;
      local_19c = local_1ac - local_17c;
      local_198 = local_1a8 - local_178;
      local_194 = local_1a4 - local_174;
      FUN_00ddf460(&local_1a0,&local_1a0);
      fVar10 = (float10)fpatan((float10)local_1a0,(float10)local_198);
      local_7c = (float)fVar10;
    }
    if (*(int *)(param_1 + 0x49c) - 3U < 2) {
      if (local_c0 == 2) {
        pfVar5 = local_a0;
      }
      else {
        FUN_00dd5650(&DAT_01659600);
        pfVar5 = (float *)&DAT_01b78880;
      }
      fVar10 = (float10)*pfVar5;
      fVar9 = (float10)pfVar5[2];
      fVar11 = (float10)fpatan((float10)pfVar5[1],SQRT(fVar10 * fVar10 + fVar9 * fVar9));
      local_190 = (float)((float10)1.5707964 - fVar11);
      fVar10 = (float10)fpatan(fVar10,fVar9);
      local_18c = (float)fVar10;
    }
    switch(*(undefined4 *)(param_1 + 0x49c)) {
    case 1:
      local_1a0 = *(float *)(param_1 + 0x480);
      local_19c = *(float *)(param_1 + 0x484);
      local_198 = *(float *)(param_1 + 0x488);
      D3DXMatrixScaling(pfVar7,SQRT(*(float *)(param_1 + 0x454) * *(float *)(param_1 + 0x454) +
                                    *pfVar7 * *pfVar7 +
                                    *(float *)(param_1 + 0x458) * *(float *)(param_1 + 0x458)),
                        SQRT(*(float *)(param_1 + 0x464) * *(float *)(param_1 + 0x464) +
                             *(float *)(param_1 + 0x460) * *(float *)(param_1 + 0x460) +
                             *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x468)),
                        SQRT(*(float *)(param_1 + 0x478) * *(float *)(param_1 + 0x478) +
                             *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x474) +
                             *(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x470)));
      *(float *)(param_1 + 0x480) = local_1a0;
      *(float *)(param_1 + 0x484) = local_19c;
      fVar1 = local_198;
      goto LAB_009f48ea;
    case 2:
      local_1a0 = *(float *)(param_1 + 0x480);
      local_19c = *(float *)(param_1 + 0x484);
      local_198 = *(float *)(param_1 + 0x488);
      D3DXMatrixScaling(pfVar7,SQRT(*(float *)(param_1 + 0x454) * *(float *)(param_1 + 0x454) +
                                    *pfVar7 * *pfVar7 +
                                    *(float *)(param_1 + 0x458) * *(float *)(param_1 + 0x458)),
                        SQRT(*(float *)(param_1 + 0x464) * *(float *)(param_1 + 0x464) +
                             *(float *)(param_1 + 0x460) * *(float *)(param_1 + 0x460) +
                             *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x468)),
                        SQRT(*(float *)(param_1 + 0x478) * *(float *)(param_1 + 0x478) +
                             *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x474) +
                             *(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x470)));
      local_1a0 = 0.0;
      local_198 = 0.0;
      local_194 = 0.0;
      local_19c = fStack_8c;
      thunk_FUN_00ddc1d0(&local_170,&local_1a0,5);
      D3DXMatrixMultiply(pfVar7,pfVar7,&local_170);
      *(float *)(param_1 + 0x480) = local_1a0 + *(float *)(param_1 + 0x480);
      *(float *)(param_1 + 0x484) = local_19c + *(float *)(param_1 + 0x484);
      fVar1 = local_198;
      break;
    case 3:
      local_190 = *(float *)(param_1 + 0x480);
      local_18c = *(float *)(param_1 + 0x484);
      local_188 = *(float *)(param_1 + 0x488);
      D3DXMatrixScaling(pfVar7,SQRT(*(float *)(param_1 + 0x454) * *(float *)(param_1 + 0x454) +
                                    *pfVar7 * *pfVar7 +
                                    *(float *)(param_1 + 0x458) * *(float *)(param_1 + 0x458)),
                        SQRT(*(float *)(param_1 + 0x464) * *(float *)(param_1 + 0x464) +
                             *(float *)(param_1 + 0x460) * *(float *)(param_1 + 0x460) +
                             *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x468)),
                        SQRT(*(float *)(param_1 + 0x478) * *(float *)(param_1 + 0x478) +
                             *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x474) +
                             *(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x470)));
      local_180 = 0.0;
      local_178 = 0.0;
      local_174 = 0.0;
      local_17c = 1.0;
      pfVar5 = (float *)FUN_009cf220();
      local_1b0 = *pfVar5;
      local_1ac = pfVar5[1];
      local_1a8 = pfVar5[2];
      local_1a4 = pfVar5[3];
      fVar1 = local_1a8 * local_1a8 + local_1b0 * local_1b0 + local_1ac * local_1ac;
      if (fVar1 != 0.0) {
        if (fVar1 <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_60[0xc] = 0.0;
          local_60[0xd] = 1.0;
          local_60[0xe] = 0.0;
        }
        else {
          FUN_00ddf460(local_60 + 0xc,&local_1b0);
        }
      }
      FUN_00de2bc0(&local_170,&local_180,&local_1b0,&local_180,0x3f800000,0x40c90fdb);
      D3DXMatrixMultiply(pfVar7,pfVar7,&local_170);
      *(float *)(param_1 + 0x480) = local_190 + *(float *)(param_1 + 0x480);
      *(float *)(param_1 + 0x484) = local_18c + *(float *)(param_1 + 0x484);
      fVar1 = local_188;
      break;
    case 4:
      local_170 = *(float *)(param_1 + 0x480);
      local_16c = *(float *)(param_1 + 0x484);
      local_168 = *(float *)(param_1 + 0x488);
      D3DXMatrixScaling(pfVar7,SQRT(*(float *)(param_1 + 0x454) * *(float *)(param_1 + 0x454) +
                                    *pfVar7 * *pfVar7 +
                                    *(float *)(param_1 + 0x458) * *(float *)(param_1 + 0x458)),
                        SQRT(*(float *)(param_1 + 0x464) * *(float *)(param_1 + 0x464) +
                             *(float *)(param_1 + 0x460) * *(float *)(param_1 + 0x460) +
                             *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x468)),
                        SQRT(*(float *)(param_1 + 0x478) * *(float *)(param_1 + 0x478) +
                             *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x474) +
                             *(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x470)));
      local_1b0 = local_1a0;
      local_1a8 = 0.0;
      local_1a4 = 0.0;
      local_1ac = local_19c + fStack_8c;
      thunk_FUN_00ddc1d0(&local_170,&local_1b0,5);
      D3DXMatrixMultiply(pfVar7,pfVar7,&local_170);
      *(float *)(param_1 + 0x480) = local_170 + *(float *)(param_1 + 0x480);
      *(float *)(param_1 + 0x484) = local_16c + *(float *)(param_1 + 0x484);
      fVar1 = local_168;
      break;
    default:
      goto switchD_009f448c_default;
    }
    fVar1 = fVar1 + *(float *)(param_1 + 0x488);
LAB_009f48ea:
    *(float *)(param_1 + 0x488) = fVar1;
switchD_009f448c_default:
    local_d8 = pfVar7;
    iVar6 = FUN_008f7780(local_90);
    if (iVar6 == 0) {
      local_f0 = 0;
    }
    else {
      local_f0 = *(undefined4 *)(iVar6 + 0x4f0);
    }
    local_c8 = *(undefined4 *)(param_1 + 0x84);
    iVar6 = FUN_008f7780(local_90);
    if (iVar6 != 0) {
      FUN_00910a40(local_90);
      sVar3 = FUN_00916480();
      iVar6 = FUN_00a12210((int)sVar3);
      if (iVar6 != 0) {
        local_ec = *(undefined2 *)(iVar6 + 0xa0);
      }
    }
    if (*(int *)(param_1 + 0x4a4) != 0) {
      local_dc = param_1 + 0x7c;
    }
    puVar4 = &local_110;
  }
  FUN_009f26b0(puVar4);
LAB_009f4b7c:
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  return;
}

// 009F4BA0  FUN_009f4ba0  size=1859  [run]
void __fastcall FUN_009f4ba0(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [2];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  float *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  *(float *)(param_1 + 400) = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 400);
  *(float *)(param_1 + 0x194) = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x194);
  *(float *)(param_1 + 0x198) = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x198);
  *(float *)(param_1 + 0x19c) = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x19c);
  FUN_00edfc20(param_1 + 0x3a0);
  FUN_00efbd40(param_1 + 0x3a0);
  if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
  }
  if (((*(uint *)(param_1 + 0x38) & 0x100000) == 0) && ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
    local_90 = *(float *)(param_1 + 400);
    local_44 = *(undefined4 *)(param_1 + 0x494);
    pfVar1 = (float *)(param_1 + 0x450);
    local_8c = *(float *)(param_1 + 0x194);
    local_88 = *(float *)(param_1 + 0x198);
    local_4c = 0xffff;
    local_50 = 0;
    local_38 = (float *)0x0;
    local_70 = 0;
    local_34 = 0;
    local_6c = 0;
    local_28 = 0;
    local_68 = 0;
    local_3c = 0;
    local_64 = 0;
    local_24 = 0;
    local_60 = 0;
    local_40 = 0;
    local_5c = 0;
    local_58 = 0;
    local_48 = 0;
    local_54 = 0;
    local_2c = 0x700000;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined4 *)(param_1 + 0x47c) = 0;
    *(undefined4 *)(param_1 + 0x474) = 0;
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(undefined4 *)(param_1 + 0x46c) = 0;
    *(undefined4 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x460) = 0;
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x458) = 0;
    *(undefined4 *)(param_1 + 0x454) = 0;
    *(undefined4 *)(param_1 + 0x48c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x478) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x464) = 0x3f800000;
    *pfVar1 = 1.0;
    if (*(float *)(param_1 + 0x1b8) != 0.0) {
      D3DXMatrixRotationZ(&local_d0,*(undefined4 *)(param_1 + 0x1b8));
      D3DXMatrixMultiply(pfVar1,afStack_d8,pfVar1);
    }
    if (*(float *)(param_1 + 0x1b4) != 0.0) {
      D3DXMatrixRotationY(&local_d0,*(undefined4 *)(param_1 + 0x1b4));
      D3DXMatrixMultiply(pfVar1,afStack_d8,pfVar1);
    }
    if (*(float *)(param_1 + 0x1b0) != 0.0) {
      D3DXMatrixRotationX(&local_d0,*(undefined4 *)(param_1 + 0x1b0));
      D3DXMatrixMultiply(pfVar1,afStack_d8,pfVar1);
    }
    *(float *)(param_1 + 0x480) = local_90;
    *(float *)(param_1 + 0x484) = local_8c;
    *(float *)(param_1 + 0x488) = local_88;
    local_28 = *(undefined4 *)(param_1 + 0x84);
    if (*(int *)(param_1 + 0x4a4) != 0) {
      local_3c = param_1 + 0x7c;
    }
    local_38 = pfVar1;
    if (*(int *)(param_1 + 0x4a8) == 2) {
      iVar2 = FUN_00a7c990(&DAT_01ee11f4);
      if (iVar2 == 0) {
        local_24 = FUN_00a81330();
      }
      else {
        local_24 = 0;
      }
    }
    goto LAB_009f52c5;
  }
  FUN_00f207a0(&local_d0);
  FUN_00efed20();
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar3 == (uint *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar3;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar5 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  local_1c = -*(float *)(uVar4 + 0x18);
  local_20 = -*(float *)(uVar4 + 0x14);
  local_18 = 0;
  D3DXVec3TransformNormal(&local_80,&local_20,&local_d0);
  fStack_a0 = local_80 + fStack_a0;
  fStack_9c = fStack_9c + fStack_7c;
  fStack_98 = fStack_98 + fStack_78;
  local_90 = 0.0;
  local_8c = 0.0;
  local_88 = 0.0;
  uStack_84 = 0;
  switch(*(undefined4 *)(param_1 + 0x49c)) {
  case 1:
    fStack_e0 = fStack_a0;
    fStack_dc = fStack_9c;
    afStack_d8[0] = fStack_98;
    D3DXMatrixScaling(&local_d0,
                      SQRT(fStack_c8 * fStack_c8 + local_d0 * local_d0 + fStack_cc * fStack_cc),
                      SQRT(fStack_b8 * fStack_b8 + fStack_c0 * fStack_c0 + fStack_bc * fStack_bc),
                      SQRT(fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac));
    fStack_a0 = fStack_e0;
    fStack_9c = fStack_dc;
    fStack_98 = afStack_d8[0];
    break;
  case 2:
    fStack_e0 = fStack_a0;
    fStack_dc = fStack_9c;
    afStack_d8[0] = fStack_98;
    D3DXMatrixScaling(&local_d0,
                      SQRT(fStack_c8 * fStack_c8 + local_d0 * local_d0 + fStack_cc * fStack_cc),
                      SQRT(fStack_b8 * fStack_b8 + fStack_c0 * fStack_c0 + fStack_bc * fStack_bc),
                      SQRT(fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac));
    local_8c = 0.0;
    local_90 = 0.0;
    local_88 = 0.0;
    uStack_84 = 0;
    goto LAB_009f5023;
  case 3:
    fStack_e0 = fStack_a0;
    fStack_dc = fStack_9c;
    afStack_d8[0] = fStack_98;
    D3DXMatrixScaling(&local_d0,
                      SQRT(fStack_c8 * fStack_c8 + local_d0 * local_d0 + fStack_cc * fStack_cc),
                      SQRT(fStack_b8 * fStack_b8 + fStack_c0 * fStack_c0 + fStack_bc * fStack_bc),
                      SQRT(fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac));
    thunk_FUN_00ddc1d0(&local_80,&fStack_a0,5);
    D3DXMatrixMultiply(&fStack_e0,&fStack_e0,&local_80);
    fStack_a0 = fStack_e0 + fStack_a0;
    fStack_9c = fStack_9c + fStack_dc;
    fStack_98 = fStack_98 + afStack_d8[0];
    break;
  case 4:
    fStack_e0 = fStack_a0;
    fStack_dc = fStack_9c;
    afStack_d8[0] = fStack_98;
    D3DXMatrixScaling(&local_d0,
                      SQRT(fStack_c8 * fStack_c8 + local_d0 * local_d0 + fStack_cc * fStack_cc),
                      SQRT(fStack_b8 * fStack_b8 + fStack_c0 * fStack_c0 + fStack_bc * fStack_bc),
                      SQRT(fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac));
    local_90 = fStack_a0;
    local_88 = fStack_98;
    uStack_84 = uStack_94;
    local_8c = fStack_9c;
LAB_009f5023:
    thunk_FUN_00ddc1d0(&local_80,&local_90,5);
    D3DXMatrixMultiply(&fStack_e0,&fStack_e0,&local_80);
    fStack_a0 = fStack_e0 + fStack_a0;
    fStack_9c = fStack_9c + fStack_dc;
    fStack_98 = fStack_98 + afStack_d8[0];
  }
  local_44 = *(undefined4 *)(param_1 + 0x494);
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_4c = 0xffff;
  local_28 = *(undefined4 *)(param_1 + 0x84);
  local_60 = 0;
  local_5c = 0;
  local_38 = &local_d0;
  local_58 = 0;
  local_50 = 0;
  local_54 = 0;
  local_34 = 0;
  local_30 = 0;
  local_3c = 0;
  local_24 = 0;
  local_40 = 0;
  local_48 = 0;
  local_2c = 0x700000;
  if (*(int *)(param_1 + 0x4a8) == 2) {
    iVar2 = FUN_00a7c990(&DAT_01ee11f4);
    if (iVar2 == 0) {
      local_24 = FUN_00a81330();
    }
    else {
      local_24 = 0;
    }
  }
  if (*(int *)(param_1 + 0x4a4) != 0) {
    local_3c = param_1 + 0x7c;
  }
LAB_009f52c5:
  FUN_009f26b0(&local_70);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  return;
}

