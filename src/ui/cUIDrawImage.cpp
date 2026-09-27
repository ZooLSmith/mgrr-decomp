// src/ui/cUIDrawImage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB39F0..00CFACB0, 7 functions

#include "mgrr.h"
#include "cUIDrawImage.h"

// 00CB39F0  cUIDrawImage::cUIDrawImage  size=81  [class]
void __fastcall cUIDrawImage::cUIDrawImage(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xffffffff;
  param_1[0x14] = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}

// 00CB3A60  cUIDrawImage::vf08  size=6  [class]
undefined4 cUIDrawImage::vf08(void)

{
  return 1;
}

// 00CB3A70  cUIDrawImage::vf00  size=31  [class]
undefined4 * __thiscall cUIDrawImage::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIDrawBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCEBF0  cUIDrawImage::vf10  size=127  [class]
void __thiscall
cUIDrawImage::vf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x24);
  iVar2 = local_4;
  if ((*(char *)(param_1 + 0x57) != '\0') &&
     (iVar1 = FUN_00cc8800(&local_4,param_3,param_4,param_5), iVar2 = local_4, iVar1 == 0)) {
    iVar2 = *(int *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x68) != iVar2) {
    *(int *)(param_1 + 0x68) = iVar2;
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar1 = FUN_00cc95b0(*(undefined4 *)(param_1 + 0x30),iVar2);
      *(int *)(param_1 + 0x6c) = iVar1;
      if ((iVar1 == -1) && (iVar2 != 0)) {
        FUN_00dd5650(&DAT_016b7bb4,iVar2);
      }
    }
  }
  return;
}

// 00CE5440  FUN_00ce5440  size=1249  [callgraph]
void __thiscall FUN_00ce5440(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined4 uVar14;
  float *pfVar15;
  uint uVar16;
  float local_38;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(int *)(param_1 + 0x6c) == -1) || (*(int *)(param_1 + 0x28) == 0)) {
    iVar13 = *(int *)(param_1 + 0x2c);
    if (iVar13 == 0) {
      param_2[8] = 32.0;
      param_2[6] = 0.0;
      param_2[9] = 32.0;
      param_2[7] = 0.0;
      param_2[0xc] = 0.0;
      param_2[10] = 1.0 / param_2[8];
      param_2[0xb] = 1.0 / param_2[9];
    }
    else {
      if (*(int *)(iVar13 + 0x10) == 0) {
        iVar13 = FUN_00fa0740(0);
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(iVar13 + 8);
        }
        local_38 = (float)iVar13;
        if (iVar13 < 0) {
          local_38 = local_38 + 4.2949673e+09;
        }
        iVar13 = FUN_00fa0740(0);
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(iVar13 + 0xc);
        }
        fVar1 = (float)iVar13;
      }
      else {
        if (*(int *)(iVar13 + 0xc) < 1) {
          uVar14 = 0xffffffff;
        }
        else if (*(int *)(iVar13 + 0x10) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined4 *)(*(int *)(iVar13 + 8) + 0x2c);
        }
        iVar13 = FUN_00fa0740(uVar14);
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(iVar13 + 8);
        }
        local_38 = (float)iVar13;
        if (iVar13 < 0) {
          local_38 = local_38 + 4.2949673e+09;
        }
        iVar13 = FUN_00fa0740(uVar14);
        if (iVar13 == 0) {
          iVar13 = 0;
          fVar1 = 0.0;
        }
        else {
          iVar13 = *(int *)(iVar13 + 0xc);
          fVar1 = (float)iVar13;
        }
      }
      if (iVar13 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_2[6] = 0.0;
      param_2[8] = local_38;
      param_2[9] = fVar1;
      param_2[7] = 0.0;
      param_2[0xc] = (float)(param_1 + 0x28);
      param_2[10] = 1.0 / param_2[8];
      param_2[0xb] = 1.0 / param_2[9];
    }
  }
  else {
    iVar13 = FUN_00ce13c0(param_2 + 6,*(int *)(param_1 + 0x6c));
    if (iVar13 == 0) {
      return;
    }
    param_2[0xc] = (float)(param_1 + 0x28);
  }
  fVar2 = 0.0;
  fVar1 = *(float *)(param_1 + 0x58);
  fVar3 = fVar2;
  if ((0.0 <= fVar1) && (fVar3 = fVar1, param_2[8] < fVar1)) {
    fVar3 = param_2[8];
  }
  fVar1 = *(float *)(param_1 + 0x5c);
  fVar4 = fVar2;
  if ((0.0 <= fVar1) && (fVar4 = fVar1, param_2[9] < fVar1)) {
    fVar4 = param_2[9];
  }
  fVar1 = *(float *)(param_1 + 0x60);
  fVar5 = fVar2;
  if ((0.0 <= fVar1) && (fVar5 = fVar1, param_2[8] < fVar1)) {
    fVar5 = param_2[8];
  }
  fVar1 = *(float *)(param_1 + 100);
  if ((0.0 <= fVar1) && (fVar2 = fVar1, param_2[9] < fVar1)) {
    fVar2 = param_2[9];
  }
  param_2[6] = fVar3 + param_2[6];
  param_2[7] = param_2[7] + fVar4;
  param_2[8] = param_2[8] - (fVar5 + fVar3);
  param_2[9] = param_2[9] - (fVar4 + fVar2);
  if ((param_2[0xc] == 0.0) || (*(char *)(param_1 + 0x54) == '\0')) {
    fVar1 = *(float *)(param_1 + 8);
    param_2[4] = *(float *)(param_1 + 4);
    param_2[5] = fVar1;
  }
  else {
    param_2[4] = param_2[8];
    param_2[5] = param_2[9];
  }
  pfVar15 = param_3;
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
    *pfVar15 = *param_4;
    param_4 = param_4 + 1;
    pfVar15 = pfVar15 + 1;
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    param_3[0xe] = 0.0;
    param_3[0xd] = 0.0;
    param_3[0xc] = 0.0;
    param_3[0xb] = 0.0;
    param_3[9] = 0.0;
    param_3[8] = 0.0;
    param_3[7] = 0.0;
    param_3[6] = 0.0;
    param_3[4] = 0.0;
    param_3[3] = 0.0;
    param_3[2] = 0.0;
    param_3[1] = 0.0;
    param_3[0xf] = 1.0;
    param_3[10] = 1.0;
    param_3[5] = 1.0;
    *param_3 = 1.0;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    fVar1 = *param_3;
    uVar16 = 0;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[4];
    fVar5 = param_3[5];
    fVar6 = param_3[6];
    do {
      fVar11 = 1.0;
      fVar7 = 0.0;
      local_20 = param_3[uVar16 * 4];
      pfVar15 = param_3 + uVar16 * 4;
      local_1c = pfVar15[1];
      local_18 = pfVar15[2];
      local_14 = pfVar15[3];
      fVar8 = SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c);
      if (fVar8 < 0.0 == (fVar8 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
        fVar8 = local_14;
        fVar9 = local_18;
        fVar10 = local_20;
        fVar12 = local_1c;
      }
      else {
        fVar8 = fVar7;
        fVar9 = fVar7;
        fVar10 = fVar11;
        fVar12 = fVar7;
        if (((uVar16 != 0) && (fVar10 = fVar7, fVar12 = fVar11, uVar16 != 1)) &&
           (fVar8 = local_14, fVar9 = local_18, fVar10 = local_20, fVar12 = local_1c, uVar16 == 2))
        {
          fVar8 = fVar7;
          fVar9 = fVar11;
          fVar10 = fVar7;
          fVar12 = fVar7;
        }
      }
      uVar16 = uVar16 + 1;
      *pfVar15 = fVar10;
      pfVar15[1] = fVar12;
      pfVar15[2] = fVar9;
      pfVar15[3] = fVar8;
    } while (uVar16 < 3);
    param_2[4] = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) * param_2[4];
    param_2[5] = param_2[5] * SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    fVar1 = param_2[4] * -0.5;
LAB_00ce58c1:
    *param_2 = fVar1;
  }
  else {
    if (*(int *)(param_1 + 0xc) == 2) {
      fVar1 = -param_2[4];
      goto LAB_00ce58c1;
    }
    *param_2 = 0.0;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar1 = param_2[5] * -0.5;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 2) {
      param_2[1] = 0.0;
      goto LAB_00ce58e6;
    }
    fVar1 = -param_2[5];
  }
  param_2[1] = fVar1;
LAB_00ce58e6:
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[0xd] = (float)(int)*(char *)(param_1 + 0x55);
  param_2[0xe] = (float)(int)*(char *)(param_1 + 0x56);
  param_2[0x10] = *(float *)(param_1 + 0x14);
  param_2[0x11] = *(float *)(param_1 + 0x18);
  param_2[0x13] = *(float *)(param_1 + 0x50);
  param_2[0xf] = *(float *)(param_1 + 0x1c);
  param_2[0x12] = *(float *)(param_1 + 0x20);
  return;
}

// 00CE5930  cUIDrawImage::vf18  size=664  [class]
void cUIDrawImage::vf18(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_100 = 0;
  local_fc = 0;
  uVar4 = *(undefined4 *)(param_3 + 0x74);
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e0 = 0.0;
  local_b0 = 0;
  local_dc = 0.0;
  local_ac = 0;
  local_d8 = 0.0;
  local_a8 = 0;
  local_d4 = 0.0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  if ((param_1 == 0) || ((*(float *)(param_3 + 0x4c) <= 0.0 && (*(float *)(param_3 + 0x5c) <= 0.0)))
     ) {
    return;
  }
  FUN_00ce5440(&local_a0,local_50,param_3);
  local_100 = local_a0;
  local_fc = local_9c;
  local_f0 = local_90;
  local_ec = local_8c;
  local_f8 = local_98;
  local_f4 = local_94;
  local_d8 = (local_80 + local_88) * local_78;
  local_d4 = (local_7c + local_84) * local_74;
  local_e0 = local_78 * local_88;
  if (local_6c != 0) {
    local_e0 = local_d8;
    local_d8 = local_78 * local_88;
  }
  local_dc = local_74 * local_84;
  if (local_68 != 0) {
    local_dc = local_d4;
    local_d4 = local_74 * local_84;
  }
  local_d0 = *(undefined4 *)(param_3 + 0x40);
  local_b0 = *(undefined4 *)(param_3 + 0x60);
  puVar7 = (undefined4 *)(param_3 + 0x40);
  local_cc = *(undefined4 *)(param_3 + 0x44);
  puVar1 = (undefined4 *)(param_3 + 0x50);
  local_c8 = *(undefined4 *)(param_3 + 0x48);
  local_a8 = param_2;
  local_c4 = *(undefined4 *)(param_3 + 0x4c);
  local_c0 = *puVar1;
  local_bc = *(undefined4 *)(param_3 + 0x54);
  local_b8 = *(undefined4 *)(param_3 + 0x58);
  local_b4 = *(undefined4 *)(param_3 + 0x5c);
  if (0.0 <= *(float *)(param_3 + 100)) {
    if (*(float *)(param_3 + 100) <= 0.0) goto LAB_00ce5b2a;
    fVar2 = *(float *)(param_3 + 100);
    puVar5 = &local_c0;
    puVar6 = puVar1;
  }
  else {
    fVar2 = *(float *)(param_3 + 100);
    puVar5 = &local_d0;
    puVar6 = puVar7;
    puVar7 = puVar1;
  }
  FUN_00ca82a0(puVar5,puVar6,puVar7,ABS(fVar2));
LAB_00ce5b2a:
  FUN_00caf060(&local_100);
  FUN_00cacde0(local_50,*(undefined4 *)(param_3 + 0x6c));
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  if (local_70 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_70 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = local_54;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar3 = *(int *)(param_3 + 0x6c);
  *(int *)(param_1 + 0x11c) = iVar3;
  *(uint *)(param_1 + 0x124) = (uint)(iVar3 == 3);
  FUN_00ccac10(local_50,param_2,local_60,*(undefined4 *)(param_3 + 0x68),local_5c);
  return;
}

// 00CFACB0  cUIDrawImage::vf14  size=633  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cUIDrawImage::vf14(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  int local_70;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if ((0.0 < *(float *)(param_3 + 0x4c)) || (0.0 < *(float *)(param_3 + 0x5c))) {
    FUN_00ce5440(local_a0,local_50,param_3);
    if (local_64 == 0) {
      if (*(int *)(param_1 + 0x20) == 1) {
        iVar2 = cUIPrimWork::cUIPrimWork_3(param_2,local_a0,param_3,0);
      }
      else {
        iVar2 = cUIPrimWork::cUIPrimWork_2(param_2,local_a0,param_3,0);
      }
    }
    else {
      iVar2 = cUIPrimWork::cUIPrimWork(param_2,local_a0,param_3,0);
    }
    FUN_00cacde0(local_50,*(undefined4 *)(param_3 + 0x6c));
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(param_3 + 0x74);
      if (local_70 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(local_70 + 0x10);
      }
      *(undefined4 *)(iVar2 + 0x68) = uVar3;
      *(undefined4 *)(iVar2 + 0x74) = local_54;
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      iVar1 = *(int *)(param_3 + 0x6c);
      *(int *)(iVar2 + 0x11c) = iVar1;
      *(uint *)(iVar2 + 0x124) = (uint)(iVar1 == 3);
      uVar3 = *(undefined4 *)(param_3 + 0x68);
      if (*(int *)(iVar2 + 100) != 0) {
        FUN_00dd5650(&DAT_016b79e8);
      }
      *(undefined4 *)(iVar2 + 0x70) = local_60;
      *(undefined4 *)(iVar2 + 0x78) = uVar3;
      *(undefined4 *)(iVar2 + 0xe0) = local_5c;
      FID_conflict__memcpy((void *)(iVar2 + 0x20),local_50,0x40);
      *(float *)(iVar2 + 0x54) = *(float *)(iVar2 + 0x54) - 1.0;
      *(uint *)(iVar2 + 0x110) = (uint)(local_58 == 2);
      *(undefined4 *)(iVar2 + 0x118) = *(undefined4 *)(param_3 + 0x80);
      *(undefined4 *)(iVar2 + 0x114) = 0;
      *(undefined4 *)(iVar2 + 0x7c) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x80) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x84) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x88) = 0x3f800000;
      uVar3 = _DAT_018d5df0;
      if ((*(int *)(param_3 + 0x78) == 2) && ((DAT_01bea070._3_1_ & 1) == 0)) {
        *(undefined4 *)(iVar2 + 0x7c) = _DAT_018d5df0;
        *(undefined4 *)(iVar2 + 0x80) = uVar3;
        *(undefined4 *)(iVar2 + 0x84) = uVar3;
        *(undefined4 *)(iVar2 + 0x88) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x114) = 1;
      }
      if (*(int *)(iVar2 + 4) != 0) {
        FUN_00f99d30();
      }
      if (*(int *)(iVar2 + 8) != 0) {
        FUN_00f99a40();
      }
      *(undefined4 *)(iVar2 + 0xe4) = 0;
      if (*(int *)(param_3 + 0x78) == 2) {
        FUN_00a30800(iVar2,0x3e,0);
        return;
      }
      if (*(int *)(param_3 + 0x78) == 1) {
        uVar3 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
        FUN_00a30800(iVar2,0x69,uVar3);
        return;
      }
      if (local_58 == 2) {
        FUN_00a30800(iVar2,0x60,0);
        return;
      }
      if (*(int *)(param_3 + 0x6c) == 3) {
        FUN_00a30800(iVar2,0x61,0);
        return;
      }
      uVar3 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
      FUN_00a30800(iVar2,0x67,uVar3);
    }
  }
  return;
}

