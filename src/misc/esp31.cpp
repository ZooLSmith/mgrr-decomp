// src/misc/esp31.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED05B0..00F358C0, 5 functions

#include "types.h"

// 00ED05B0  esp31::esp31  size=18  [class]
undefined4 * __fastcall esp31::esp31(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED09E0  esp31::vf00  size=30  [class]
undefined4 __thiscall esp31::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF32A0  esp31::vf14  size=85  [class]
void __fastcall esp31::vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  if ((*(int *)(param_1 + 0x4a4) != 0) && (*(int *)(param_1 + 0x4a4) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4a4),0);
    *(undefined4 *)(param_1 + 0x4a4) = 0;
  }
  return;
}

// 00F1A100  esp31::vf08  size=1501  [class]
void __fastcall esp31::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined2 in_FPUControlWord;
  float10 fVar9;
  undefined1 auStack_94 [12];
  longlong local_88;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
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
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_94;
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
  FUN_00ed8fa0(&local_30);
  local_7c = *(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x110)
  ;
  *(float *)(param_1 + 0x4c4) = local_7c;
  if (local_7c < 0.0) {
    *(undefined4 *)(param_1 + 0x4c4) = 0;
  }
  if (*(uint *)(param_1 + 0x45c) == 0) {
LAB_00f1a1d2:
    puVar3 = *(undefined4 **)(param_1 + 0x458);
    *puVar3 = *(undefined4 *)(param_1 + 400);
    iVar7 = 1;
    puVar3[1] = *(undefined4 *)(param_1 + 0x194);
    puVar3[2] = *(undefined4 *)(param_1 + 0x198);
    if (1 < *(int *)(param_1 + 0x4a0) + 1) {
      iVar8 = 0xc;
      do {
        pfVar6 = (float *)(iVar8 + *(int *)(param_1 + 0x458));
        local_54 = *(float *)(iVar8 + -0xc + *(int *)(param_1 + 0x458)) - *pfVar6;
        local_50 = pfVar6[-2] - pfVar6[1];
        local_4c = pfVar6[-1] - pfVar6[2];
        pfVar6 = (float *)(iVar8 + *(int *)(param_1 + 0x4a4));
        local_34 = *(float *)(param_1 + 0x4a8);
        local_3c = local_34 * local_54;
        local_38 = local_34 * local_50;
        local_34 = local_4c * local_34;
        local_48 = local_30 + local_3c;
        local_44 = local_2c + local_38;
        local_40 = local_28 + local_34;
        *pfVar6 = *(float *)(param_1 + 0x110) * local_48 + *pfVar6;
        pfVar6 = (float *)(iVar8 + 4 + *(int *)(param_1 + 0x4a4));
        *pfVar6 = local_44 * *(float *)(param_1 + 0x110) + *pfVar6;
        pfVar6 = (float *)(iVar8 + 8 + *(int *)(param_1 + 0x4a4));
        *pfVar6 = local_40 * *(float *)(param_1 + 0x110) + *pfVar6;
        fVar2 = *(float *)(param_1 + 0x110);
        local_20 = local_54;
        local_1c = local_50;
        local_18 = local_4c;
        if (fVar2 == 1.0) {
          local_7c = *(float *)(param_1 + 0x4b0);
        }
        else {
          local_88._0_4_ = *(float *)(param_1 + 0x4b0);
          if ((float)local_88 < 2.0) {
            local_7c = (float)local_88 / ((fVar2 - (float)local_88 * fVar2) + (float)local_88);
          }
          else {
            fVar9 = (float10)FUN_00fdc1f0();
            local_7c = (float)fVar9;
          }
        }
        pfVar6 = (float *)(*(int *)(param_1 + 0x4a4) + iVar8);
        *pfVar6 = local_7c * *pfVar6;
        pfVar6[1] = local_7c * pfVar6[1];
        pfVar6[2] = local_7c * pfVar6[2];
        iVar4 = *(int *)(param_1 + 0x4a4);
        local_64 = *(float *)(param_1 + 0x110);
        local_88 = CONCAT44(local_88._4_4_,local_64);
        local_6c = local_64 * *(float *)(iVar4 + iVar8);
        local_68 = *(float *)(iVar4 + 4 + iVar8) * local_64;
        local_64 = local_64 * *(float *)(iVar4 + 8 + iVar8);
        pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar8);
        *pfVar6 = local_6c + *pfVar6;
        pfVar6[1] = local_68 + pfVar6[1];
        pfVar6[2] = local_64 + pfVar6[2];
        if (0.0 < *(float *)(param_1 + 0x4ac)) {
          pfVar6 = (float *)(iVar8 + *(int *)(param_1 + 0x458));
          local_60 = *(float *)(iVar8 + -0xc + *(int *)(param_1 + 0x458)) - *pfVar6;
          local_5c = pfVar6[-2] - pfVar6[1];
          local_58 = pfVar6[-1] - pfVar6[2];
          local_7c = local_60 * local_60 + local_5c * local_5c + local_58 * local_58;
          local_20 = local_60;
          local_1c = local_5c;
          local_18 = local_58;
          fVar9 = (float10)FUN_00fdef70();
          local_88 = CONCAT44(local_88._4_4_,(float)fVar9);
          if (*(float *)(param_1 + 0x4ac) < (float)fVar9) {
            if (local_7c <= 0.0) {
              FUN_00dd5650(&DAT_0163d0ac);
              local_20 = 0.0;
              local_1c = 1.0;
              local_18 = 0.0;
            }
            D3DXVec3Normalize(&local_20,&local_20);
            fVar2 = -*(float *)(param_1 + 0x4ac);
            local_88 = CONCAT44(local_88._4_4_,fVar2);
            pfVar6 = (float *)(iVar8 + *(int *)(param_1 + 0x458));
            local_20 = fVar2 * local_20;
            local_1c = local_1c * fVar2;
            local_18 = fVar2 * local_18;
            local_78 = pfVar6[-3] + local_20;
            local_74 = pfVar6[-2] + local_1c;
            local_70 = pfVar6[-1] + local_18;
            *pfVar6 = local_78;
            pfVar6[1] = local_74;
            pfVar6[2] = local_70;
          }
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0xc;
      } while (iVar7 < *(int *)(param_1 + 0x4a0) + 1);
    }
    iVar7 = *(int *)(param_1 + 0x458) + *(int *)(param_1 + 0x4a0) * 0xc;
    *(undefined4 *)(iVar7 + 0xc) =
         *(undefined4 *)(*(int *)(param_1 + 0x458) + *(int *)(param_1 + 0x4a0) * 0xc);
    *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar7 + 4);
    *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar7 + 8);
    if (*(float *)(param_1 + 0x4c4) <= 0.0) {
      fVar2 = *(float *)(param_1 + 0x4c0) + *(float *)(param_1 + 0x4ac);
      local_88 = CONCAT44(local_88._4_4_,fVar2);
      *(float *)(param_1 + 0x4ac) = fVar2;
      if (fVar2 < 0.0) {
        *(undefined4 *)(param_1 + 0x4ac) = 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
        goto LAB_00f1a5e0;
      }
    }
  }
  else {
    uVar5 = (uint)local_7c >> 0x10;
    local_7c = (float)CONCAT22((short)uVar5,in_FPUControlWord);
    local_88 = (longlong)ROUND(*(float *)(param_1 + 0x460));
    if ((uint)(float)local_88 < *(uint *)(param_1 + 0x45c)) goto LAB_00f1a1d2;
  }
LAB_00f1a5e0:
  pfVar6 = *(float **)(param_1 + 0x458);
  iVar7 = *(int *)(param_1 + 0x450) * 3;
  local_6c = (*pfVar6 + pfVar6[iVar7 + -6]) * 0.5;
  local_68 = (pfVar6[1] + pfVar6[iVar7 + -5]) * 0.5;
  local_64 = (pfVar6[2] + pfVar6[iVar7 + -4]) * 0.5;
  *(float *)(param_1 + 0x130) = local_6c;
  *(float *)(param_1 + 0x134) = local_68;
  *(float *)(param_1 + 0x138) = local_64;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar6 = *(float **)(param_1 + 0x458);
  iVar7 = *(int *)(param_1 + 0x450) * 3;
  local_78 = *pfVar6 - pfVar6[iVar7 + -6];
  local_74 = pfVar6[1] - pfVar6[iVar7 + -5];
  local_70 = pfVar6[2] - pfVar6[iVar7 + -4];
  local_88._0_4_ = local_70 * local_70 + local_78 * local_78 + local_74 * local_74;
  fVar9 = (float10)FUN_00fdef70();
  local_88 = CONCAT44(local_88._4_4_,(float)fVar9);
  *(float *)(param_1 + 300) = (float)fVar9;
  FUN_00ed6110();
  __security_check_cookie(local_14 ^ (uint)auStack_94);
  return;
}

// 00F358C0  esp31::vf04  size=755  [class]
/* WARNING: Removing unreachable block (ram,0x00f35a45) */
/* WARNING: Removing unreachable block (ram,0x00f35ab0) */

undefined4 __thiscall
esp31::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_34;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar5 = cEspModel::vf04(param_2,param_3,param_4);
  if ((iVar5 == 0) || (iVar5 = FUN_00f12b50(), iVar5 == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar6 != (uint *)0x0)) {
    uVar8 = *puVar6;
    if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
      uVar7 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if (uVar8 != 0) {
      *(float *)(param_1 + 0x4c4) = (float)(int)*(short *)(uVar8 + 0xc);
      uVar8 = (uint)*(char *)(uVar8 + 0x10);
      *(uint *)(param_1 + 0x4c8) = uVar8;
      if (2 < uVar8) {
        FUN_009cca90(param_1,&DAT_016dc60c,uVar8);
        return 0;
      }
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar9 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar9 != (undefined4 *)0x0)) {
    pfVar3 = (float *)*puVar9;
    if ((float *)((int)pfVar3 + 0xfU & 0xfffffff0) != pfVar3) {
      uVar7 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if (pfVar3 != (float *)0x0) {
      *(float *)(param_1 + 0x4a8) = *pfVar3 * 0.01;
      *(float *)(param_1 + 0x4ac) = pfVar3[1] * 0.02;
      *(float *)(param_1 + 0x4b0) = 1.0 - pfVar3[2] * 0.02;
      fVar1 = pfVar3[4];
      fVar2 = pfVar3[5];
      *(float *)(param_1 + 0x4b4) = pfVar3[3] * 0.01;
      *(float *)(param_1 + 0x4b8) = fVar1 * 0.01;
      *(float *)(param_1 + 0x4bc) = fVar2 * 0.01;
      *(float *)(param_1 + 0x4c0) = pfVar3[6] * 0.002;
      uVar8 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
      *(uint *)(param_1 + 0x114) = uVar8;
      *(float *)(param_1 + 0x4ac) =
           *(float *)(param_1 + 0x4ac) +
           (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * pfVar3[7] * 0.02;
      uVar8 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
      *(uint *)(param_1 + 0x114) = uVar8;
      *(float *)(param_1 + 0x4c0) =
           pfVar3[8] * 0.002 * (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) +
           *(float *)(param_1 + 0x4c0);
    }
  }
  *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x450) + -3;
  iVar5 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
  *(int *)(param_1 + 0x4a4) = iVar5;
  if (iVar5 == 0) {
    FUN_009cca90(param_1,&DAT_016dc620);
    return 0;
  }
  FUN_00ed8fa0(&local_20);
  local_34 = 0;
  if (*(int *)(param_1 + 0x4a0) != -1 && -1 < *(int *)(param_1 + 0x4a0) + 1) {
    iVar5 = 0;
    do {
      fVar1 = (float)local_34;
      iVar4 = *(int *)(param_1 + 0x4a4);
      local_34 = local_34 + 1;
      iVar5 = iVar5 + 0xc;
      *(float *)(iVar4 + -0xc + iVar5) = fVar1 * local_20;
      *(float *)(iVar4 + -8 + iVar5) = local_1c * fVar1;
      *(float *)(iVar4 + -4 + iVar5) = fVar1 * local_18;
    } while (local_34 < *(int *)(param_1 + 0x4a0) + 1);
  }
  return 1;
}

