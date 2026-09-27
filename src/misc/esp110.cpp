// src/misc/esp110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D8A80..009E8480, 4 functions

#include "mgrr.h"
#include "esp110.h"

// 009D8A80  esp110::preTrans  size=105  [class]
undefined4 __thiscall
esp110::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  iVar2 = esp28::preTrans(param_2,param_3,param_4);
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (uint *)0x0)) {
      uVar1 = *puVar3;
      if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (uVar1 != 0) {
        *(int *)(param_1 + 0x550) = (int)*(char *)(uVar1 + 0x12);
      }
    }
    return 1;
  }
  return 0;
}

// 009D8AF0  esp110::vf08  size=2144  [class]
/* WARNING: Removing unreachable block (ram,0x009d91d0) */

void __fastcall esp110::vf08(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  esp39::vf08();
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x100);
  pfVar9 = (float *)(param_1 + 0x4f0);
  FUN_00f0db60(pfVar9,param_1 + 0x4e0,*(undefined4 *)(param_1 + 0x50),0);
  *(float *)(param_1 + 0x1a0) = *pfVar9;
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x4f4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x4fc);
  if ((*(int *)(param_1 + 0x548) == 1) && (iVar8 = FUN_00f195b0(pfVar9,param_1 + 400), iVar8 != 0))
  {
    return;
  }
  if (*(char *)(param_1 + 0x4d8) == '\0') {
    iVar10 = 0;
    iVar8 = FUN_00a7c990(&DAT_01ee11f4);
    if ((((iVar8 == 0) && (iVar8 = FUN_00a81330(), iVar8 != 0)) &&
        (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       ((*(int *)(param_1 + 0x550) == 1 || (*(int *)(param_1 + 0x550) == 2)))) {
      iVar10 = FUN_009f8b40();
    }
    local_28 = 2;
    local_30 = iVar10 << 0x10 | 3;
    if (*(int *)(param_1 + 0x550) == 2) {
      local_28 = 10;
    }
    local_50 = *pfVar9;
    local_4c = *(undefined4 *)(param_1 + 0x4f4);
    local_48 = *(undefined4 *)(param_1 + 0x4f8);
    local_44 = *(undefined4 *)(param_1 + 0x4fc);
    local_40 = *(undefined4 *)(param_1 + 400);
    local_2c = 0;
    local_24 = 0;
    local_3c = *(undefined4 *)(param_1 + 0x194);
    local_1c = 0.0;
    local_38 = *(undefined4 *)(param_1 + 0x198);
    local_34 = *(undefined4 *)(param_1 + 0x19c);
    local_20 = "esp110";
    iVar8 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_70,0,0,0,&local_50);
joined_r0x009d8d9e:
    if (iVar8 != 0) {
      if (*(float *)(param_1 + 0x54c) != 0.0) {
        fVar3 = *(float *)(param_1 + 400) - *pfVar9;
        fVar5 = *(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x4f4);
        fVar4 = *(float *)(param_1 + 0x198) - *(float *)(param_1 + 0x4f8);
        local_74 = *(float *)(param_1 + 0x19c) - *(float *)(param_1 + 0x4fc);
        fVar2 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
        local_80 = fVar3;
        local_7c = fVar5;
        local_78 = fVar4;
        if (fVar2 != 0.0) {
          if (NAN(fVar2) || fVar2 < 0.0 == (fVar2 == 0.0)) {
            FUN_00ddf460(&local_80,&local_80);
            fVar3 = local_80;
            fVar4 = local_78;
            fVar5 = local_7c;
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fVar3 = 0.0;
            fVar5 = 1.0;
            fVar4 = 0.0;
          }
        }
        fVar2 = *(float *)(param_1 + 0x54c);
        local_70 = local_70 + fVar3 * fVar2;
        local_6c = local_6c + fVar5 * fVar2;
        local_68 = fVar4 * fVar2 + local_68;
        local_64 = local_64 + fVar2 * local_74;
      }
      pfVar1 = (float *)(param_1 + 0x4b0);
      *(undefined4 *)(param_1 + 0x4c0) = 0;
      *pfVar1 = local_70;
      *(float *)(param_1 + 0x4b4) = local_6c;
      *(float *)(param_1 + 0x4b8) = local_68;
      *(float *)(param_1 + 0x4bc) = local_64;
      local_18 = 0.0;
      local_1c = 0.0;
      local_20 = (char *)0x0;
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
      local_50 = 1.0;
      if (*(int *)(param_1 + 0x50) != 0) {
        D3DXMatrixInverse(&local_50,0,*(int *)(param_1 + 0x50) + 0x10);
        D3DXVec3TransformNormal(pfVar1,pfVar1,&local_5c);
        *pfVar1 = (float)local_20 + *pfVar1;
        *(float *)(param_1 + 0x4b4) = local_1c + *(float *)(param_1 + 0x4b4);
        *(float *)(param_1 + 0x4b8) = local_18 + *(float *)(param_1 + 0x4b8);
      }
      pfVar1 = *(float **)(param_1 + 0x458);
      fVar3 = *(float *)(param_1 + 0x4f4) - local_6c;
      fVar2 = *(float *)(param_1 + 0x4f8) - local_68;
      fVar2 = SQRT((*pfVar9 - local_70) * (*pfVar9 - local_70) + fVar3 * fVar3 + fVar2 * fVar2);
      *(float *)(param_1 + 0x4c8) = fVar2;
      fVar3 = *(float *)(param_1 + 0x4f4) - pfVar1[1];
      fVar4 = *(float *)(param_1 + 0x4f8) - pfVar1[2];
      *(float *)(param_1 + 0x4d4) =
           fVar2 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + (*pfVar9 - *pfVar1) * (*pfVar9 - *pfVar1));
      *pfVar1 = local_70;
      pfVar1[1] = local_6c;
      pfVar1[2] = local_68;
      if (*(int *)(param_1 + 0x50) != 0) {
        pfVar9 = *(float **)(param_1 + 0x458);
        local_80 = *pfVar9;
        puVar6 = *(undefined4 **)(param_1 + 0x540);
        local_7c = pfVar9[1];
        local_78 = pfVar9[2];
        local_74 = 1.0;
        FUN_00efd1f0(&local_60,&local_80,*(int *)(param_1 + 0x50));
        *puVar6 = local_60;
        local_84 = 1;
        puVar6[1] = local_5c;
        puVar6[2] = local_58;
        if (1 < *(uint *)(param_1 + 0x450)) {
          iVar8 = 0xc;
          do {
            iVar10 = *(int *)(param_1 + 0x540);
            local_80 = *(float *)(iVar10 + iVar8);
            iVar7 = *(int *)(param_1 + 0x458);
            local_7c = *(float *)(iVar10 + 4 + iVar8);
            local_78 = *(float *)(iVar10 + 8 + iVar8);
            local_74 = 1.0;
            FUN_00f0db60(&local_60,&local_80,*(undefined4 *)(param_1 + 0x50),0);
            *(undefined4 *)(iVar7 + iVar8) = local_60;
            local_84 = local_84 + 1;
            *(undefined4 *)(iVar7 + 4 + iVar8) = local_5c;
            iVar8 = iVar8 + 0xc;
            *(undefined4 *)(iVar7 + -4 + iVar8) = local_58;
          } while (local_84 < *(uint *)(param_1 + 0x450));
        }
      }
      goto LAB_009d929d;
    }
  }
  else {
    iVar8 = FUN_00ef2ee0();
    if (iVar8 != 0) {
      FUN_00ef2f30();
      iVar8 = FUN_00ef2f70(&local_70);
      goto joined_r0x009d8d9e;
    }
  }
  if (*(int *)(param_1 + 0x4c0) == 0) {
    *(undefined4 *)(param_1 + 0x4c0) = 1;
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x4b0);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x4b4);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x4b8);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x4bc);
  }
  puVar6 = *(undefined4 **)(param_1 + 0x458);
  FUN_00f0db60(&local_60,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),1);
  *puVar6 = local_60;
  puVar6[1] = local_5c;
  puVar6[2] = local_58;
  if (*(int *)(param_1 + 0x50) != 0) {
    pfVar9 = *(float **)(param_1 + 0x458);
    local_80 = *pfVar9;
    puVar6 = *(undefined4 **)(param_1 + 0x540);
    local_7c = pfVar9[1];
    local_78 = pfVar9[2];
    local_74 = 1.0;
    FUN_00efd1f0(&local_60,&local_80,*(int *)(param_1 + 0x50));
    *puVar6 = local_60;
    local_84 = 1;
    puVar6[1] = local_5c;
    puVar6[2] = local_58;
    if (1 < *(uint *)(param_1 + 0x450)) {
      iVar8 = 0xc;
      do {
        iVar10 = *(int *)(param_1 + 0x540);
        local_80 = *(float *)(iVar10 + iVar8);
        iVar7 = *(int *)(param_1 + 0x458);
        local_7c = *(float *)(iVar10 + 4 + iVar8);
        local_78 = *(float *)(iVar10 + 8 + iVar8);
        local_74 = 1.0;
        FUN_00f0db60(&local_60,&local_80,*(undefined4 *)(param_1 + 0x50),0);
        *(undefined4 *)(iVar7 + iVar8) = local_60;
        local_84 = local_84 + 1;
        *(undefined4 *)(iVar7 + 4 + iVar8) = local_5c;
        iVar8 = iVar8 + 0xc;
        *(undefined4 *)(iVar7 + -4 + iVar8) = local_58;
      } while (local_84 < *(uint *)(param_1 + 0x450));
    }
  }
  uVar11 = 1;
  if ((*(float *)(param_1 + 0x47c) != 0.0) && (1 < *(uint *)(param_1 + 0x450))) {
    iVar8 = 0xc;
    do {
      iVar10 = *(int *)(param_1 + 0x458) + iVar8;
      local_80 = *(float *)(*(int *)(param_1 + 0x458) + iVar8) - *(float *)(iVar10 + -0xc);
      local_7c = *(float *)(iVar10 + 4) - *(float *)(iVar10 + -8);
      local_78 = *(float *)(iVar10 + 8) - *(float *)(iVar10 + -4);
      fVar2 = local_78 * local_78 + local_80 * local_80 + local_7c * local_7c;
      if (*(float *)(param_1 + 0x47c) < SQRT(fVar2)) {
        if (fVar2 <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_80 = 0.0;
          local_7c = 1.0;
          local_78 = 0.0;
        }
        D3DXVec3Normalize(&local_80,&local_80);
        fVar2 = *(float *)(param_1 + 0x47c);
        pfVar9 = (float *)(*(int *)(param_1 + 0x458) + iVar8);
        *pfVar9 = pfVar9[-3] + local_80 * fVar2;
        pfVar9[1] = pfVar9[-2] + fVar2 * local_7c;
        pfVar9[2] = fVar2 * local_78 + pfVar9[-1];
      }
      uVar11 = uVar11 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar11 < *(uint *)(param_1 + 0x450));
  }
  fVar2 = *(float *)(param_1 + 0x4f0) - *(float *)(param_1 + 400);
  fVar4 = *(float *)(param_1 + 0x4f4) - *(float *)(param_1 + 0x194);
  fVar3 = *(float *)(param_1 + 0x4f8) - *(float *)(param_1 + 0x198);
  *(float *)(param_1 + 0x4c8) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
LAB_009d929d:
  pfVar1 = *(float **)(param_1 + 0x458);
  pfVar9 = pfVar1 + *(int *)(param_1 + 0x450) * 3 + -3;
  *(float *)(param_1 + 0x4a8) = *(float *)(param_1 + 0x4a0) + *(float *)(param_1 + 0x4a8);
  *(float *)(param_1 + 0x4ac) = *(float *)(param_1 + 0x4a4) + *(float *)(param_1 + 0x4ac);
  fVar2 = pfVar9[1];
  fVar3 = pfVar1[1];
  fVar4 = pfVar9[2];
  fVar5 = pfVar1[2];
  *(float *)(param_1 + 0x130) = (*pfVar9 + *pfVar1) * 0.5;
  *(float *)(param_1 + 0x134) = (fVar2 + fVar3) * 0.5;
  *(float *)(param_1 + 0x138) = (fVar4 + fVar5) * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar9 = *(float **)(param_1 + 0x458);
  iVar8 = *(int *)(param_1 + 0x450);
  *(float *)(param_1 + 300) =
       SQRT((pfVar9[2] - pfVar9[iVar8 * 3 + -1]) * (pfVar9[2] - pfVar9[iVar8 * 3 + -1]) +
            (pfVar9[1] - pfVar9[iVar8 * 3 + -2]) * (pfVar9[1] - pfVar9[iVar8 * 3 + -2]) +
            (*pfVar9 - pfVar9[iVar8 * 3 + -3]) * (*pfVar9 - pfVar9[iVar8 * 3 + -3]));
  return;
}

// 009E8450  esp110::esp110  size=18  [class]
undefined4 * __fastcall esp110::esp110(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 009E8480  esp110::vf00  size=30  [class]
undefined4 __thiscall esp110::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

