// src/misc/esp103.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D7E40..009E21B0, 7 functions

#include "types.h"

// 009D7E40  esp103::vf04  size=490  [class]
undefined4 __thiscall
esp103::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((((iVar8 != 0) && (iVar8 = FUN_00f12b50(), iVar8 != 0)) && (*(int *)(param_1 + 0x50) != 0)) &&
     (*(short *)(param_1 + 0x400) == -1)) {
    *(undefined1 *)(param_1 + 0x4d0) = 0;
    iVar8 = FUN_009d4a80();
    if (iVar8 != 0) {
      *(int *)(param_1 + 0x548) = (int)*(char *)(iVar8 + 0x10);
      *(undefined1 *)(param_1 + 0x4d0) = *(undefined1 *)(iVar8 + 0x11);
    }
    pfVar9 = (float *)FUN_009d4ac0();
    if (pfVar9 != (float *)0x0) {
      *(undefined4 *)(param_1 + 0x47c) = 0;
      *(float *)(param_1 + 0x4a0) = *pfVar9 * 0.001;
      *(float *)(param_1 + 0x4a4) = pfVar9[1] * 0.001;
      *(float *)(param_1 + 0x4c8) = pfVar9[2];
      *(float *)(param_1 + 0x544) = pfVar9[3];
    }
    if (*(float *)(param_1 + 0x4c8) == 0.0) {
      *(undefined4 *)(param_1 + 0x4c8) = 0x3f800000;
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
      *(undefined4 *)(param_1 + 0x4cc) = 0;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100000;
      *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4e0);
      *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x4e4);
      *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4e8);
      *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x4ec);
      return 1;
    }
  }
  return 0;
}

// 009D8030  FUN_009d8030  size=1128  [callgraph]
undefined4 __thiscall FUN_009d8030(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iStack_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 auStack_5c [4];
  float local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  fVar2 = SQRT((param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) +
               (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
               (*param_2 - *param_3) * (*param_2 - *param_3));
  if (fVar2 <= 0.0) {
    return 0;
  }
  local_80 = *param_3 - *param_2;
  local_7c = param_3[1] - param_2[1];
  local_78 = param_3[2] - param_2[2];
  local_74 = param_3[3] - param_2[3];
  fVar1 = local_78 * local_78 + local_80 * local_80 + local_7c * local_7c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_80,&local_80);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_78 = 0.0;
    local_7c = 1.0;
    local_80 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x544);
  local_80 = local_80 * fVar1;
  local_7c = local_7c * fVar1;
  local_78 = local_78 * fVar1;
  local_74 = local_74 * fVar1;
  if (*(float *)(param_1 + 0x544) < fVar2) {
    local_70 = *param_2 + local_80;
    local_6c = local_7c + param_2[1];
    local_68 = local_78 + param_2[2];
    fVar2 = local_74 + param_2[3];
    *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x544);
  }
  else {
    local_70 = *param_3;
    local_6c = param_3[1];
    local_68 = param_3[2];
    fVar2 = param_3[3];
    local_58 = param_2[2] - param_3[2];
    *(float *)(param_1 + 0x4c4) =
         SQRT(local_58 * local_58 +
              (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
              (*param_2 - *param_3) * (*param_2 - *param_3));
  }
  pfVar5 = *(float **)(param_1 + 0x458);
  *pfVar5 = local_70;
  pfVar7 = (float *)(param_1 + 0x4b0);
  pfVar5[1] = local_6c;
  pfVar5[2] = local_68;
  *pfVar7 = local_70;
  *(float *)(param_1 + 0x4b4) = local_6c;
  *(float *)(param_1 + 0x4b8) = local_68;
  *(float *)(param_1 + 0x4bc) = fVar2;
  local_18 = 0.0;
  local_1c = 0.0;
  local_20 = 0.0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_14 = 0x3f800000;
  local_28 = 0x3f800000;
  local_3c = 0x3f800000;
  local_50 = 0x3f800000;
  if (*(int *)(param_1 + 0x50) != 0) {
    D3DXMatrixInverse(&local_50,0,*(int *)(param_1 + 0x50) + 0x10);
    D3DXVec3TransformNormal(pfVar7,pfVar7,auStack_5c);
    *pfVar7 = local_20 + *pfVar7;
    *(float *)(param_1 + 0x4b4) = local_1c + *(float *)(param_1 + 0x4b4);
    *(float *)(param_1 + 0x4b8) = local_18 + *(float *)(param_1 + 0x4b8);
  }
  *(undefined4 *)(param_1 + 0x4c0) = 1;
  *(float *)(param_1 + 0x180) = *pfVar7;
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x4b4);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x4bc);
  pfVar7 = *(float **)(param_1 + 0x458);
  *(float *)(param_1 + 0x4cc) =
       *(float *)(param_1 + 0x4c4) /
       SQRT((param_2[2] - pfVar7[2]) * (param_2[2] - pfVar7[2]) +
            (param_2[1] - pfVar7[1]) * (param_2[1] - pfVar7[1]) +
            (*param_2 - *pfVar7) * (*param_2 - *pfVar7));
  *pfVar7 = local_70;
  pfVar7[1] = local_6c;
  pfVar7[2] = local_68;
  if (*(int *)(param_1 + 0x50) != 0) {
    pfVar7 = *(float **)(param_1 + 0x540);
    *pfVar7 = local_70;
    local_84 = 1;
    pfVar7[1] = local_6c;
    pfVar7[2] = local_68;
    if (1 < *(uint *)(param_1 + 0x450)) {
      iStack_88 = 0xc;
      do {
        iVar6 = *(int *)(param_1 + 0x50);
        pfVar7 = (float *)(*(int *)(param_1 + 0x458) + iStack_88);
        D3DXVec3TransformNormal(pfVar7,*(int *)(param_1 + 0x540) + iStack_88,iVar6 + 0x10);
        iStack_88 = iStack_88 + 0xc;
        local_84 = local_84 + 1;
        *pfVar7 = *(float *)(iVar6 + 0x40) + *pfVar7;
        pfVar7[1] = *(float *)(iVar6 + 0x44) + pfVar7[1];
        pfVar7[2] = *(float *)(iVar6 + 0x48) + pfVar7[2];
      } while (local_84 < *(uint *)(param_1 + 0x450));
    }
  }
  pfVar5 = *(float **)(param_1 + 0x458);
  pfVar7 = pfVar5 + *(int *)(param_1 + 0x450) * 3 + -3;
  *(float *)(param_1 + 0x4a8) = *(float *)(param_1 + 0x4a0) + *(float *)(param_1 + 0x4a8);
  *(float *)(param_1 + 0x4ac) = *(float *)(param_1 + 0x4a4) + *(float *)(param_1 + 0x4ac);
  fVar2 = pfVar7[1];
  fVar1 = pfVar5[1];
  fVar3 = pfVar7[2];
  fVar4 = pfVar5[2];
  *(float *)(param_1 + 0x130) = (*pfVar7 + *pfVar5) * 0.5;
  *(float *)(param_1 + 0x134) = (fVar2 + fVar1) * 0.5;
  *(float *)(param_1 + 0x138) = (fVar3 + fVar4) * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar7 = *(float **)(param_1 + 0x458);
  iVar6 = *(int *)(param_1 + 0x450);
  *(float *)(param_1 + 300) =
       SQRT((*pfVar7 - pfVar7[iVar6 * 3 + -3]) * (*pfVar7 - pfVar7[iVar6 * 3 + -3]) +
            (pfVar7[1] - pfVar7[iVar6 * 3 + -2]) * (pfVar7[1] - pfVar7[iVar6 * 3 + -2]) +
            (pfVar7[2] - pfVar7[iVar6 * 3 + -1]) * (pfVar7[2] - pfVar7[iVar6 * 3 + -1]));
  return 1;
}

// 009D84D0  FUN_009d84d0  size=61  [callgraph]
undefined4 __fastcall FUN_009d84d0(int param_1)

{
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
    FUN_00ea9f40(param_1 + 0x4f0);
    FUN_00ea9f80(param_1 + 400);
    return 1;
  }
  return 0;
}

// 009DF390  esp103::esp103  size=18  [class]
undefined4 * __fastcall esp103::esp103(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DF400  esp103::vf00  size=30  [class]
undefined4 __thiscall esp103::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E1A20  esp103::vf08  size=1919  [class]
/* WARNING: Removing unreachable block (ram,0x009e2026) */

void __fastcall esp103::vf08(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined *puVar10;
  int iStack_78;
  uint uStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  esp39::vf08();
  iVar7 = *(int *)(param_1 + 0x50);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4e0);
    *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x4e4);
    *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4e8);
    *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x4ec);
  }
  else {
    D3DXVec3TransformNormal(&local_70,param_1 + 0x4e0,iVar7 + 0x10);
    local_70 = *(float *)(iVar7 + 0x40) + local_70;
    fStack_6c = *(float *)(iVar7 + 0x44) + fStack_6c;
    fVar2 = *(float *)(iVar7 + 0x48);
    *(float *)(param_1 + 0x4f0) = local_70;
    *(float *)(param_1 + 0x4f4) = fStack_6c;
    *(float *)(param_1 + 0x4f8) = fVar2 + fStack_68;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x4f4);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x4f8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x4fc);
  }
  if (*(int *)(param_1 + 0x548) == 1) {
    iVar7 = *(int *)(param_1 + 0x50);
    D3DXVec3TransformNormal(&local_70,*(undefined4 *)(param_1 + 0x540),iVar7 + 0x10);
    local_70 = *(float *)(iVar7 + 0x40) + local_70;
    fStack_6c = *(float *)(iVar7 + 0x44) + fStack_6c;
    fStack_68 = *(float *)(iVar7 + 0x48) + fStack_68;
    iVar7 = FUN_009d8030(param_1 + 0x4f0,param_1 + 400);
    if (iVar7 != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x4d0) == '\0') {
    uStack_50 = *(undefined4 *)(param_1 + 0x4f0);
    uStack_4c = *(undefined4 *)(param_1 + 0x4f4);
    uStack_48 = *(undefined4 *)(param_1 + 0x4f8);
    uStack_44 = *(undefined4 *)(param_1 + 0x4fc);
    uStack_40 = *(undefined4 *)(param_1 + 400);
    uStack_30 = 3;
    uStack_2c = 0;
    uStack_3c = *(undefined4 *)(param_1 + 0x194);
    uStack_28 = 2;
    uStack_24 = 0;
    uStack_38 = *(undefined4 *)(param_1 + 0x198);
    pcStack_20 = "esp103";
    fStack_1c = 0.0;
    uStack_34 = *(undefined4 *)(param_1 + 0x19c);
    iVar7 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_60,0,0,0,&uStack_50);
joined_r0x009e1ec3:
    if (iVar7 != 0) {
      pfVar9 = (float *)(param_1 + 0x4b0);
      *(undefined4 *)(param_1 + 0x4c0) = 0;
      *pfVar9 = fStack_60;
      *(float *)(param_1 + 0x4b4) = fStack_5c;
      *(float *)(param_1 + 0x4b8) = fStack_58;
      *(undefined4 *)(param_1 + 0x4bc) = uStack_54;
      fStack_18 = 0.0;
      fStack_1c = 0.0;
      pcStack_20 = (char *)0x0;
      uStack_24 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      uStack_14 = 0x3f800000;
      uStack_28 = 0x3f800000;
      uStack_3c = 0x3f800000;
      uStack_50 = 0x3f800000;
      if (*(int *)(param_1 + 0x50) != 0) {
        D3DXMatrixInverse(&uStack_50,0,*(int *)(param_1 + 0x50) + 0x10);
        D3DXVec3TransformNormal(pfVar9,pfVar9,&fStack_5c);
        *pfVar9 = (float)pcStack_20 + *pfVar9;
        *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fStack_1c;
        *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + fStack_18;
      }
      pfVar9 = *(float **)(param_1 + 0x458);
      fVar2 = *(float *)(param_1 + 0x4f0) - fStack_60;
      fVar4 = *(float *)(param_1 + 0x4f4) - fStack_5c;
      fVar3 = *(float *)(param_1 + 0x4f8) - fStack_58;
      fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
      *(float *)(param_1 + 0x4c4) = fVar2;
      fVar3 = *(float *)(param_1 + 0x4f0) - *pfVar9;
      fVar4 = *(float *)(param_1 + 0x4f4) - pfVar9[1];
      fVar5 = *(float *)(param_1 + 0x4f8) - pfVar9[2];
      *(float *)(param_1 + 0x4cc) = fVar2 / SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      *pfVar9 = fStack_60;
      pfVar9[1] = fStack_5c;
      pfVar9[2] = fStack_58;
      if (*(int *)(param_1 + 0x50) != 0) {
        pfVar9 = *(float **)(param_1 + 0x540);
        *pfVar9 = fStack_60;
        pfVar9[1] = fStack_5c;
        pfVar9[2] = fStack_58;
        uStack_74 = 1;
        if (1 < *(uint *)(param_1 + 0x450)) {
          iStack_78 = 0xc;
          do {
            iVar7 = *(int *)(param_1 + 0x50);
            pfVar9 = (float *)(*(int *)(param_1 + 0x458) + iStack_78);
            D3DXVec3TransformNormal(pfVar9,*(int *)(param_1 + 0x540) + iStack_78,iVar7 + 0x10);
            iStack_78 = iStack_78 + 0xc;
            uStack_74 = uStack_74 + 1;
            *pfVar9 = *(float *)(iVar7 + 0x40) + *pfVar9;
            pfVar9[1] = *(float *)(iVar7 + 0x44) + pfVar9[1];
            pfVar9[2] = *(float *)(iVar7 + 0x48) + pfVar9[2];
          } while (uStack_74 < *(uint *)(param_1 + 0x450));
        }
      }
      goto LAB_009e20f6;
    }
  }
  else {
    if (*(int *)(param_1 + 0x84) == 0) {
      puVar10 = &DAT_0165a9d0;
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4) {
        FUN_009d84d0();
        if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
          iVar7 = FUN_00ea9e80(&fStack_60);
          goto joined_r0x009e1ec3;
        }
        goto LAB_009e1d7c;
      }
      puVar10 = &DAT_0165a968;
    }
    FUN_009cca90(param_1,puVar10);
  }
LAB_009e1d7c:
  if (*(int *)(param_1 + 0x4c0) == 0) {
    *(undefined4 *)(param_1 + 0x4c0) = 1;
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x4b0);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x4b4);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x4b8);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x4bc);
  }
  pfVar9 = *(float **)(param_1 + 0x458);
  fVar2 = *(float *)(param_1 + 0x184);
  fVar3 = *(float *)(param_1 + 0x174);
  fVar4 = *(float *)(param_1 + 0x188);
  fVar5 = *(float *)(param_1 + 0x178);
  *pfVar9 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  pfVar9[1] = fVar2 + fVar3;
  pfVar9[2] = fVar4 + fVar5;
  iVar7 = *(int *)(param_1 + 0x50);
  if (iVar7 != 0) {
    pfVar9 = *(float **)(param_1 + 0x458);
    D3DXVec3TransformNormal(pfVar9,pfVar9,iVar7 + 0x10);
    *pfVar9 = *(float *)(iVar7 + 0x40) + *pfVar9;
    pfVar9[1] = *(float *)(iVar7 + 0x44) + pfVar9[1];
    pfVar9[2] = *(float *)(iVar7 + 0x48) + pfVar9[2];
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    pfVar9 = *(float **)(param_1 + 0x540);
    uStack_74 = 0;
    fVar2 = *(float *)(param_1 + 0x184);
    fVar3 = *(float *)(param_1 + 0x174);
    fVar4 = *(float *)(param_1 + 0x188);
    fVar5 = *(float *)(param_1 + 0x178);
    *pfVar9 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
    pfVar9[1] = fVar2 + fVar3;
    pfVar9[2] = fVar4 + fVar5;
    if (*(int *)(param_1 + 0x450) != 0) {
      iStack_78 = 0;
      do {
        iVar7 = *(int *)(param_1 + 0x50);
        pfVar9 = (float *)(*(int *)(param_1 + 0x458) + iStack_78);
        D3DXVec3TransformNormal(pfVar9,*(int *)(param_1 + 0x540) + iStack_78,iVar7 + 0x10);
        iStack_78 = iStack_78 + 0xc;
        uStack_74 = uStack_74 + 1;
        *pfVar9 = *(float *)(iVar7 + 0x40) + *pfVar9;
        pfVar9[1] = *(float *)(iVar7 + 0x44) + pfVar9[1];
        pfVar9[2] = *(float *)(iVar7 + 0x48) + pfVar9[2];
      } while (uStack_74 < *(uint *)(param_1 + 0x450));
    }
  }
  if ((*(float *)(param_1 + 0x47c) != 0.0) && (uVar8 = 1, 1 < *(uint *)(param_1 + 0x450))) {
    iVar7 = 0xc;
    do {
      iVar1 = iVar7 + *(int *)(param_1 + 0x458);
      local_70 = *(float *)(iVar7 + *(int *)(param_1 + 0x458)) - *(float *)(iVar1 + -0xc);
      fStack_6c = *(float *)(iVar1 + 4) - *(float *)(iVar1 + -8);
      fStack_68 = *(float *)(iVar1 + 8) - *(float *)(iVar1 + -4);
      fVar2 = fStack_68 * fStack_68 + fStack_6c * fStack_6c + local_70 * local_70;
      if (*(float *)(param_1 + 0x47c) < SQRT(fVar2)) {
        if (fVar2 <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_70 = 0.0;
          fStack_6c = 1.0;
          fStack_68 = 0.0;
        }
        D3DXVec3Normalize(&local_70,&local_70);
        fVar2 = *(float *)(param_1 + 0x47c);
        pfVar9 = (float *)(iVar7 + *(int *)(param_1 + 0x458));
        *pfVar9 = local_70 * fVar2 + pfVar9[-3];
        pfVar9[1] = pfVar9[-2] + fVar2 * fStack_6c;
        pfVar9[2] = pfVar9[-1] + fVar2 * fStack_68;
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 0xc;
    } while (uVar8 < *(uint *)(param_1 + 0x450));
  }
  fVar2 = *(float *)(param_1 + 0x4f0) - *(float *)(param_1 + 400);
  fVar4 = *(float *)(param_1 + 0x4f4) - *(float *)(param_1 + 0x194);
  fVar3 = *(float *)(param_1 + 0x4f8) - *(float *)(param_1 + 0x198);
  *(float *)(param_1 + 0x4c4) = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
LAB_009e20f6:
  pfVar6 = *(float **)(param_1 + 0x458);
  pfVar9 = pfVar6 + *(int *)(param_1 + 0x450) * 3 + -3;
  *(float *)(param_1 + 0x4a8) = *(float *)(param_1 + 0x4a0) + *(float *)(param_1 + 0x4a8);
  *(float *)(param_1 + 0x4ac) = *(float *)(param_1 + 0x4a4) + *(float *)(param_1 + 0x4ac);
  fVar2 = pfVar9[1];
  fVar3 = pfVar6[1];
  fVar4 = pfVar9[2];
  fVar5 = pfVar6[2];
  *(float *)(param_1 + 0x130) = (*pfVar9 + *pfVar6) * 0.5;
  *(float *)(param_1 + 0x134) = (fVar2 + fVar3) * 0.5;
  *(float *)(param_1 + 0x138) = (fVar4 + fVar5) * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar9 = *(float **)(param_1 + 0x458);
  iVar7 = *(int *)(param_1 + 0x450);
  *(float *)(param_1 + 300) =
       SQRT((*pfVar9 - pfVar9[iVar7 * 3 + -3]) * (*pfVar9 - pfVar9[iVar7 * 3 + -3]) +
            (pfVar9[1] - pfVar9[iVar7 * 3 + -2]) * (pfVar9[1] - pfVar9[iVar7 * 3 + -2]) +
            (pfVar9[2] - pfVar9[iVar7 * 3 + -1]) * (pfVar9[2] - pfVar9[iVar7 * 3 + -1]));
  return;
}

// 009E21B0  esp103::vf14  size=116  [class]
void __fastcall esp103::vf14(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
    FUN_00ea9fc0();
  }
  FUN_00ee0ac0();
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

