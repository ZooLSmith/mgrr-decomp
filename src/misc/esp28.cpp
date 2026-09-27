// src/misc/esp28.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DF4E0..00F352F0, 5 functions

#include "types.h"

// 009DF4E0  esp28::esp28  size=18  [class]
undefined4 * __fastcall esp28::esp28(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DF6B0  esp28::vf00  size=30  [class]
undefined4 __thiscall esp28::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F04A20  esp28::vf14  size=149  [class]
void __fastcall esp28::vf14(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
    FUN_00ea9fc0();
  }
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  if ((*(int *)(param_1 + 0x540) != 0) && (*(int *)(param_1 + 0x540) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x540),0);
    *(undefined4 *)(param_1 + 0x540) = 0;
  }
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c800();
      return;
    }
  }
  return;
}

// 00F23880  esp28::vf08  size=2588  [class]
void __fastcall esp28::vf08(int param_1)

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
  float local_94;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined8 local_70;
  float local_68;
  float local_64;
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
  if ((*(int *)(param_1 + 0x548) == 1) && (iVar8 = FUN_00f195b0(pfVar10,param_1 + 400), iVar8 != 0))
  goto LAB_00f24287;
  if (*(char *)(param_1 + 0x4d8) == '\0') {
    iVar8 = FUN_009e0f30(&local_80,pfVar10,param_1 + 400);
    if (iVar8 == 0) goto LAB_00f23d8c;
LAB_00f23996:
    if (*(float *)(param_1 + 0x54c) != 0.0) {
      local_a0 = *(float *)(param_1 + 400) - *pfVar10;
      local_9c = *(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x4f4);
      local_98 = *(float *)(param_1 + 0x198) - *(float *)(param_1 + 0x4f8);
      local_94 = *(float *)(param_1 + 0x19c) - *(float *)(param_1 + 0x4fc);
      local_84 = local_a0 * local_a0 + local_9c * local_9c + local_98 * local_98;
      if (local_84 != 0.0) {
        if (NAN(local_84) || local_84 < 0.0 == (local_84 == 0.0)) {
          FUN_00ddf460(&local_a0,&local_a0);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_a0 = 0.0;
          local_9c = 1.0;
          local_98 = 0.0;
        }
      }
      local_84 = *(float *)(param_1 + 0x54c);
      local_70 = (double)CONCAT44(local_9c * local_84,local_84 * local_a0);
      local_68 = local_98 * local_84;
      local_64 = local_84 * local_94;
      local_80 = local_80 + local_84 * local_a0;
      local_7c = local_7c + local_9c * local_84;
      local_78 = local_78 + local_68;
      local_74 = local_74 + local_64;
    }
    pfVar2 = (float *)(param_1 + 0x4b0);
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    *pfVar2 = local_80;
    *(float *)(param_1 + 0x4b4) = local_7c;
    *(float *)(param_1 + 0x4b8) = local_78;
    *(float *)(param_1 + 0x4bc) = local_74;
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
      local_94 = 1.0;
      FUN_00efc630(&local_70,&local_a0,iVar8,iVar8 + 0x10,*(undefined4 *)(param_1 + 0x84));
      *puVar3 = (float)local_70;
      local_84 = 1.4013e-45;
      puVar3[1] = local_70._4_4_;
      puVar3[2] = local_68;
      if (1 < *(uint *)(param_1 + 0x450)) {
        iVar8 = 0xc;
        local_94 = 1.0;
        do {
          iVar9 = *(int *)(param_1 + 0x540);
          local_a0 = *(float *)(iVar9 + iVar8);
          iVar4 = *(int *)(param_1 + 0x50);
          iVar5 = *(int *)(param_1 + 0x458);
          local_9c = *(float *)(iVar9 + 4 + iVar8);
          local_98 = *(float *)(iVar9 + 8 + iVar8);
          if (iVar4 == 0) {
            local_70 = (double)CONCAT44(local_9c,local_a0);
            local_64 = 1.0;
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
    iVar8 = FUN_00ef2ee0();
    if (iVar8 != 0) {
      FUN_00ef2f30();
      if (((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) &&
         (iVar8 = FUN_00ea9e80(&local_80), iVar8 != 0)) goto LAB_00f23996;
    }
LAB_00f23d8c:
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
      local_94 = 1.0;
      FUN_00efc630(&local_70,&local_a0,iVar8,iVar8 + 0x10,*(undefined4 *)(param_1 + 0x84));
      *puVar3 = (float)local_70;
      local_84 = 1.4013e-45;
      puVar3[1] = local_70._4_4_;
      puVar3[2] = local_68;
      if (1 < *(uint *)(param_1 + 0x450)) {
        iVar8 = 0xc;
        local_94 = 1.0;
        do {
          iVar9 = *(int *)(param_1 + 0x540);
          local_a0 = *(float *)(iVar9 + iVar8);
          iVar4 = *(int *)(param_1 + 0x50);
          iVar5 = *(int *)(param_1 + 0x458);
          local_9c = *(float *)(iVar9 + 4 + iVar8);
          local_98 = *(float *)(iVar9 + 8 + iVar8);
          if (iVar4 == 0) {
            local_70 = (double)CONCAT44(local_9c,local_a0);
            local_64 = 1.0;
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
    uVar11 = 1;
    if ((*(float *)(param_1 + 0x47c) != 0.0) && (1 < *(uint *)(param_1 + 0x450))) {
      iVar8 = 0xc;
      do {
        iVar9 = *(int *)(param_1 + 0x458) + iVar8;
        fVar6 = *(float *)(*(int *)(param_1 + 0x458) + iVar8) - *(float *)(iVar9 + -0xc);
        fVar7 = *(float *)(iVar9 + 4) - *(float *)(iVar9 + -8);
        local_70 = (double)CONCAT44(fVar7,fVar6);
        local_68 = *(float *)(iVar9 + 8) - *(float *)(iVar9 + -4);
        local_84 = local_68 * local_68 + fVar6 * fVar6 + fVar7 * fVar7;
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
          local_a0 = local_a0 + pfVar10[-3];
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
  local_a4 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
  fVar12 = (float10)FUN_00fdef70();
  local_a4 = (float)fVar12;
  *(float *)(param_1 + 300) = local_a4;
LAB_00f24287:
  __security_check_cookie(local_14 ^ (uint)&local_a4);
  return;
}

// 00F352F0  esp28::vf04  size=622  [class]
undefined4 __thiscall
esp28::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  
  iVar8 = cEspModel::vf04(param_2,param_3,param_4);
  if ((iVar8 != 0) && (iVar8 = FUN_00f12b50(), iVar8 != 0)) {
    if (*(int *)(param_1 + 0x50) != 0) {
      if (*(short *)(param_1 + 0x400) != -1) {
        FUN_009cca90(param_1,&DAT_016dc304);
        return 0;
      }
      *(undefined1 *)(param_1 + 0x4d8) = 0;
      iVar8 = FUN_009d4a80();
      if (iVar8 != 0) {
        *(int *)(param_1 + 0x548) = (int)*(char *)(iVar8 + 0x10);
        *(undefined1 *)(param_1 + 0x4d8) = *(undefined1 *)(iVar8 + 0x11);
      }
      pfVar9 = (float *)FUN_009d4ac0();
      if (pfVar9 != (float *)0x0) {
        *(undefined4 *)(param_1 + 0x47c) = 0;
        *(float *)(param_1 + 0x4a0) = *pfVar9 * 0.001;
        *(float *)(param_1 + 0x4a4) = pfVar9[1] * 0.001;
        *(float *)(param_1 + 0x4d0) = pfVar9[2];
        *(float *)(param_1 + 0x4cc) = pfVar9[3];
        *(float *)(param_1 + 0x544) = pfVar9[3];
        *(float *)(param_1 + 0x54c) = pfVar9[4];
      }
      if (*(float *)(param_1 + 0x4cc) == 0.0) {
        *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x1f0);
      }
      if (*(float *)(param_1 + 0x4d0) == 0.0) {
        *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x1f0);
      }
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
      *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined4 *)(param_1 + 0x4c0) = 1;
      iVar8 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
      *(int *)(param_1 + 0x540) = iVar8;
      if (iVar8 != 0) {
        fVar1 = *(float *)(param_1 + 0x170);
        uVar10 = 0;
        fVar2 = *(float *)(param_1 + 0x180);
        fVar3 = *(float *)(param_1 + 0x174);
        fVar4 = *(float *)(param_1 + 0x184);
        fVar5 = *(float *)(param_1 + 0x178);
        fVar6 = *(float *)(param_1 + 0x188);
        if (*(int *)(param_1 + 0x450) != 0) {
          iVar8 = 0;
          do {
            iVar7 = *(int *)(param_1 + 0x540);
            *(float *)(iVar7 + iVar8) = fVar1 + fVar2;
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + 0xc;
            *(float *)(iVar7 + -8 + iVar8) = fVar3 + fVar4;
            *(float *)(iVar7 + -4 + iVar8) = fVar5 + fVar6;
          } while (uVar10 < *(uint *)(param_1 + 0x450));
        }
        *(undefined4 *)(param_1 + 0x4a8) = 0;
        *(undefined4 *)(param_1 + 0x4ac) = 0;
        *(undefined4 *)(param_1 + 0x4d4) = 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100000;
        *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4e0);
        *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x4e4);
        *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4e8);
        *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x4ec);
        return 1;
      }
      FUN_009cca90(param_1,&DAT_016dc32c);
      return 0;
    }
    FUN_009cca90(param_1,&DAT_016dc2dc);
  }
  return 0;
}

