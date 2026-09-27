// src/ui/cUIDraw9Grid.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3B60..00CFB050, 8 functions

#include "types.h"

// 00CB3B60  cUIDraw9Grid::cUIDraw9Grid  size=126  [class]
void __fastcall cUIDraw9Grid::cUIDraw9Grid(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  return;
}

// 00CB3BE0  cUIDraw9Grid::vf08  size=6  [class]
undefined4 cUIDraw9Grid::vf08(void)

{
  return 2;
}

// 00CB3BF0  cUIDraw9Grid::vf1C  size=14  [class]
bool __fastcall cUIDraw9Grid::vf1C(int param_1)

{
  return *(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x4c);
}

// 00CCEC70  cUIDraw9Grid::vf00  size=31  [class]
undefined4 * __thiscall cUIDraw9Grid::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIDrawBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCECD0  cUIDraw9Grid::vf10  size=97  [class]
void __thiscall
cUIDraw9Grid::vf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x44);
  if (*(char *)(param_1 + 0x4b) != '\0') {
    FUN_00cc8800(&local_4,param_3,param_4,param_5);
  }
  if ((*(int *)(param_1 + 0x4c) != local_4) || (*(int *)(param_1 + 0x50) == -1)) {
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(int *)(param_1 + 0x4c) = local_4;
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar1 = FUN_00cc95b0(*(undefined4 *)(param_1 + 0x34),local_4);
      *(undefined4 *)(param_1 + 0x50) = uVar1;
    }
  }
  return;
}

// 00CE5BD0  FUN_00ce5bd0  size=1759  [callgraph]
undefined4 __thiscall
FUN_00ce5bd0(int param_1,int param_2,undefined4 *param_3,float *param_4,float *param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float10 fVar15;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  uint local_a8;
  uint local_a4;
  float local_90;
  float local_8c;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0.0;
  local_6c = 0.0;
  local_60 = 0.0;
  local_5c = 0.0;
  local_30 = 0;
  local_58 = 0.0;
  local_2c = 0;
  local_54 = 0.0;
  local_28 = 0;
  local_50 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  if (*(int *)(param_2 + 0x134) - *(int *)(param_2 + 0x130) < 9) {
    return 0;
  }
  fVar1 = *(float *)(param_1 + 0xc);
  if (param_5[2] * 0.5 < fVar1) {
    fVar1 = param_5[2] * 0.5;
  }
  fVar2 = *(float *)(param_1 + 0x10);
  if (param_5[3] * 0.5 < fVar2) {
    fVar2 = param_5[3] * 0.5;
  }
  fVar6 = *param_4 * 0.5;
  fVar7 = param_4[1] * 0.5;
  if (fVar1 <= fVar6) {
    fVar6 = fVar1;
  }
  if (fVar2 <= fVar7) {
    fVar7 = fVar2;
  }
  local_e0 = *param_4 - fVar6 * 2.0;
  local_dc = param_4[1] - fVar7 * 2.0;
  if (local_e0 < 0.0 != (local_e0 == 0.0)) {
    local_e0 = 0.0;
  }
  if (!NAN(local_dc) && local_dc < 0.0 != (local_dc == 0.0)) {
    local_dc = 0.0;
  }
  fVar11 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(param_1 + 0x18);
  if (fVar6 <= fVar11) {
    fVar11 = fVar6;
  }
  if (fVar7 <= fVar12) {
    fVar12 = fVar7;
  }
  local_d8 = param_5[2] - fVar11 * 2.0;
  local_d4 = param_5[3] - fVar12 * 2.0;
  if (local_e0 <= local_d8) {
    local_d8 = local_e0;
  }
  if (local_dc <= local_d4) {
    local_d4 = local_dc;
  }
  fVar15 = (float10)FUN_00ddb510(*param_3,0);
  fVar3 = (float)fVar15;
  fVar15 = (float10)FUN_00ddb510(param_3[1],0);
  fVar4 = (float)fVar15;
  uVar5 = param_3[2];
  fVar15 = (float10)FUN_00ddb510(fVar6,0);
  fVar6 = (float)fVar15;
  fVar15 = (float10)FUN_00ddb510(fVar7,0);
  fVar7 = (float)fVar15;
  fVar15 = (float10)FUN_00ddb510(local_e0,0);
  fVar8 = (float)fVar15;
  fVar15 = (float10)FUN_00ddb510(local_dc,0);
  fVar9 = (float)fVar15;
  local_a4 = 0;
  local_a8 = 0;
  do {
    if (local_a4 == 0) {
      local_bc = param_5[1];
      local_8c = fVar4;
      if (*(char *)(param_1 + 0x4a) == '\0') {
        local_b4 = fVar12 + local_bc;
        local_cc = fVar7;
      }
      else {
        local_bc = local_bc + param_5[3];
        local_b4 = local_bc - fVar12;
        local_cc = fVar7;
      }
    }
    else if (local_a4 == 1) {
      local_8c = fVar4 + fVar7;
      local_cc = (float)fVar15;
      local_bc = param_5[1] + fVar2;
      local_b4 = local_d4 + local_bc;
      fVar10 = local_bc;
      fVar13 = local_b4;
      if (*(char *)(param_1 + 0x4a) != '\0') {
LAB_00ce5f51:
        local_bc = fVar13;
        local_b4 = fVar10;
      }
    }
    else if (local_a4 == 2) {
      local_8c = (float)((float10)fVar4 + (float10)fVar7 + fVar15);
      if (*(char *)(param_1 + 0x4a) == '\0') {
        fVar10 = param_5[1] + param_5[3];
        fVar13 = (param_5[1] + param_5[3]) - fVar12;
        local_cc = fVar7;
        goto LAB_00ce5f51;
      }
      local_b4 = param_5[1];
      local_bc = local_bc + fVar12;
      local_cc = fVar7;
    }
    if (local_a8 == 0) {
      fVar10 = *param_5;
      local_90 = fVar3;
      if (*(char *)(param_1 + 0x49) == '\0') {
        fVar13 = fVar11 + fVar10;
        local_d0 = fVar6;
      }
      else {
        fVar10 = fVar10 + param_5[2];
        fVar13 = fVar10 - fVar11;
        local_d0 = fVar6;
      }
LAB_00ce6045:
      local_b8 = fVar13;
      local_c0 = fVar10;
    }
    else if (local_a8 == 1) {
      local_90 = fVar3 + fVar6;
      local_b8 = *param_5 + fVar1;
      fVar13 = local_d8 + local_b8;
      fVar10 = local_b8;
      local_c0 = local_d8 + local_b8;
      local_d0 = fVar8;
      if (*(char *)(param_1 + 0x49) == '\0') goto LAB_00ce6045;
    }
    else if (local_a8 == 2) {
      local_90 = fVar3 + fVar6 + fVar8;
      local_b8 = *param_5;
      if (*(char *)(param_1 + 0x49) == '\0') {
        local_b8 = local_b8 + param_5[2];
        local_c0 = local_b8 - fVar11;
        local_d0 = fVar6;
      }
      else {
        local_c0 = fVar11 + local_b8;
        local_d0 = fVar6;
      }
    }
    if ((local_d0 <= 0.0) || (local_cc <= 0.0)) {
      local_18 = 0;
      local_14 = 0;
      local_d0 = 0.0;
      local_cc = 0.0;
    }
    local_c0 = param_5[4] * local_c0;
    local_30 = *(undefined4 *)(param_6 + 0x60);
    local_70 = local_d0;
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_bc = param_5[5] * local_bc;
    local_6c = local_cc;
    local_b8 = param_5[4] * local_b8;
    local_b4 = param_5[5] * local_b4;
    local_80 = local_90;
    local_7c = local_8c;
    local_50 = *(float *)(param_6 + 0x40);
    local_4c = *(float *)(param_6 + 0x44);
    local_48 = *(float *)(param_6 + 0x48);
    local_44 = *(float *)(param_6 + 0x4c);
    local_40 = *(float *)(param_6 + 0x50);
    local_3c = *(float *)(param_6 + 0x54);
    local_38 = *(float *)(param_6 + 0x58);
    local_34 = *(float *)(param_6 + 0x5c);
    if (0.0 <= *(float *)(param_6 + 100)) {
      if (0.0 < *(float *)(param_6 + 100)) {
        fVar10 = ABS(*(float *)(param_6 + 100));
        local_40 = (*(float *)(param_6 + 0x40) - *(float *)(param_6 + 0x50)) * fVar10 +
                   *(float *)(param_6 + 0x50);
        local_3c = (*(float *)(param_6 + 0x44) - *(float *)(param_6 + 0x54)) * fVar10 +
                   *(float *)(param_6 + 0x54);
        local_38 = (*(float *)(param_6 + 0x48) - *(float *)(param_6 + 0x58)) * fVar10 +
                   *(float *)(param_6 + 0x58);
        local_34 = *(float *)(param_6 + 0x5c) +
                   (*(float *)(param_6 + 0x4c) - *(float *)(param_6 + 0x5c)) * fVar10;
      }
    }
    else {
      fVar10 = ABS(*(float *)(param_6 + 100));
      local_50 = (*(float *)(param_6 + 0x50) - *(float *)(param_6 + 0x40)) * fVar10 +
                 *(float *)(param_6 + 0x40);
      local_4c = (*(float *)(param_6 + 0x54) - *(float *)(param_6 + 0x44)) * fVar10 +
                 *(float *)(param_6 + 0x44);
      local_48 = (*(float *)(param_6 + 0x58) - *(float *)(param_6 + 0x48)) * fVar10 +
                 *(float *)(param_6 + 0x48);
      local_44 = *(float *)(param_6 + 0x4c) +
                 (*(float *)(param_6 + 0x5c) - *(float *)(param_6 + 0x4c)) * fVar10;
    }
    local_78 = uVar5;
    local_60 = local_c0;
    local_5c = local_bc;
    local_58 = local_b8;
    local_54 = local_b4;
    iVar14 = FUN_00caf060(&local_80);
    if (iVar14 == 0) {
      return 0;
    }
    local_a8 = local_a8 + 1;
    if (local_a8 < 3) {
      fVar15 = (float10)fVar9;
    }
    else {
      local_a4 = local_a4 + 1;
      if (2 < local_a4) {
        return 1;
      }
      local_a8 = 0;
      fVar15 = (float10)fVar9;
    }
  } while( true );
}

// 00CE62C0  cUIDraw9Grid::vf18  size=948  [class]
void __thiscall cUIDraw9Grid::vf18(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 local_74;
  float local_70 [5];
  float local_5c;
  float local_50 [19];
  
  if (param_2 == 0) {
    return;
  }
  if (param_4[0x13] <= 0.0) {
    return;
  }
  if ((*(int *)(param_1 + 0x50) == -1) || (*(int *)(param_1 + 0x2c) == 0)) {
    local_78 = 0;
    local_74 = 0;
    local_70[0] = 32.0;
    local_70[1] = 32.0;
    local_70[2] = 0.03125;
    local_70[3] = 0.03125;
  }
  else {
    iVar5 = FUN_00ce13c0(&local_78,*(int *)(param_1 + 0x50));
    if (iVar5 == 0) {
      return;
    }
    pfVar6 = local_70;
    if (*(char *)(param_1 + 0x48) != '\0') goto LAB_00ce6329;
  }
  pfVar6 = (float *)(param_1 + 4);
LAB_00ce6329:
  local_a8 = *pfVar6;
  pfVar7 = param_4;
  pfVar8 = local_50;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  local_a4 = pfVar6[1];
  iVar5 = 0;
  local_90 = 4.2039e-45;
  local_70[4] = SQRT(local_50[2] * local_50[2] +
                     local_50[0] * local_50[0] + local_50[1] * local_50[1]);
  local_5c = SQRT(local_50[6] * local_50[6] + local_50[4] * local_50[4] + local_50[5] * local_50[5])
  ;
  pfVar6 = local_50 + 1;
  do {
    fVar3 = 1.0;
    fVar2 = 0.0;
    local_a0 = pfVar6[-1];
    local_9c = *pfVar6;
    local_98 = pfVar6[1];
    local_94 = pfVar6[2];
    fVar4 = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_a0,&local_a0);
      fVar3 = local_a0;
    }
    else {
      if (iVar5 == 0) {
        local_a0 = 1.0;
        local_9c = fVar2;
      }
      else {
        if (iVar5 != 1) {
          fVar3 = local_a0;
          if (iVar5 == 2) {
            local_a0 = 0.0;
            local_9c = 0.0;
            local_98 = 1.0;
            local_94 = 0.0;
            fVar3 = fVar2;
          }
          goto LAB_00ce64c7;
        }
        local_a0 = 0.0;
        local_9c = fVar3;
        fVar3 = fVar2;
      }
      local_98 = 0.0;
      local_94 = 0.0;
    }
LAB_00ce64c7:
    local_8c = 0.0;
    iVar5 = iVar5 + 1;
    pfVar6[-1] = fVar3;
    local_90 = (float)((int)local_90 + -1);
    *pfVar6 = local_9c;
    pfVar6[1] = local_98;
    pfVar6[2] = local_94;
    pfVar6 = pfVar6 + 4;
    if (local_90 == 0.0) {
      local_a8 = local_70[4] * local_a8 + *(float *)(param_1 + 0xc) * 2.0;
      local_a4 = local_5c * local_a4 + *(float *)(param_1 + 0x10) * 2.0;
      iVar5 = *(int *)(param_1 + 0x1c);
      local_90 = local_8c;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_90 = local_a8 * 0.5;
        }
        else if (iVar5 == 2) {
          local_90 = local_a8 + 1.0;
        }
      }
      iVar5 = *(int *)(param_1 + 0x20);
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_8c = local_a4 * 0.5;
        }
        else if (iVar5 == 2) {
          local_8c = local_a4 + 1.0;
        }
      }
      local_90 = -local_90;
      local_8c = -local_8c;
      *(undefined4 *)(param_1 + 0x54) = param_3;
      local_88 = 0;
      local_84 = 0;
      iVar5 = FUN_00ce5bd0(param_2,&local_90,&local_a8,&local_78,param_4);
      if (iVar5 == 0) {
        return;
      }
      FUN_00cacde0(local_50,param_4[0x1b]);
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(param_2 + 0x74) = uVar1;
      *(undefined4 *)(param_2 + 0x6c) = 0;
      fVar2 = param_4[0x1b];
      *(float *)(param_2 + 0x11c) = fVar2;
      *(uint *)(param_2 + 0x124) = (uint)(fVar2 == 4.2039e-45);
      FUN_00ccac10(local_50,param_3,*(undefined4 *)(param_1 + 0x24),param_4[0x1a],
                   *(undefined4 *)(param_1 + 0x28));
      *(float *)(param_2 + 0xd4) = param_4[0x1d];
      return;
    }
  } while( true );
}

// 00CFB050  cUIDraw9Grid::vf14  size=1137  [class]
void __thiscall cUIDraw9Grid::vf14(int param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70 [5];
  float local_5c;
  float local_50 [19];
  
  if (param_3[0x13] <= 0.0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  local_7c = param_1;
  puVar4 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20);
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  cUIPrimWorkBase::cUIPrimWorkBase();
  *puVar4 = cUIPrimWork::vftable;
  iVar5 = FUN_00caef00(param_2,0x24,0x36);
  if (iVar5 == 0) {
    return;
  }
  puVar4[3] = 0;
  puVar4[0x4c] = 0;
  puVar4[0x4d] = 9;
  if ((*(int *)(param_1 + 0x50) == -1) || (*(int *)(param_1 + 0x2c) == 0)) {
    local_78 = 0;
    local_74 = 0;
    local_70[0] = 32.0;
    local_70[1] = 32.0;
    local_70[2] = 0.03125;
    local_70[3] = 0.03125;
  }
  else {
    iVar5 = FUN_00ce13c0(&local_78,*(int *)(param_1 + 0x50));
    if (iVar5 == 0) {
      return;
    }
    pfVar6 = local_70;
    if (*(char *)(param_1 + 0x48) != '\0') goto LAB_00cfb10a;
  }
  pfVar6 = (float *)(param_1 + 4);
LAB_00cfb10a:
  local_a8 = *pfVar6;
  pfVar8 = param_3;
  pfVar9 = local_50;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  local_a4 = pfVar6[1];
  iVar5 = 0;
  local_90 = 4.2039e-45;
  local_70[4] = SQRT(local_50[2] * local_50[2] +
                     local_50[0] * local_50[0] + local_50[1] * local_50[1]);
  local_5c = SQRT(local_50[6] * local_50[6] + local_50[4] * local_50[4] + local_50[5] * local_50[5])
  ;
  pfVar6 = local_50 + 1;
  do {
    fVar1 = 0.0;
    local_a0 = pfVar6[-1];
    local_9c = *pfVar6;
    local_98 = pfVar6[1];
    local_94 = pfVar6[2];
    fVar2 = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_a0,&local_a0);
      fVar2 = local_a0;
    }
    else {
      if (iVar5 == 0) {
        local_a0 = 1.0;
        fVar2 = 1.0;
      }
      else {
        if (iVar5 != 1) {
          fVar2 = local_a0;
          if (iVar5 == 2) {
            local_a0 = 0.0;
            local_9c = 0.0;
            local_98 = 1.0;
            local_94 = 0.0;
            fVar2 = fVar1;
          }
          goto LAB_00cfb2af;
        }
        local_a0 = 0.0;
        fVar2 = fVar1;
        fVar1 = 1.0;
      }
      local_98 = 0.0;
      local_94 = 0.0;
      local_9c = fVar1;
    }
LAB_00cfb2af:
    iVar3 = local_7c;
    local_8c = 0.0;
    iVar5 = iVar5 + 1;
    pfVar6[-1] = fVar2;
    local_90 = (float)((int)local_90 + -1);
    *pfVar6 = local_9c;
    pfVar6[1] = local_98;
    pfVar6[2] = local_94;
    pfVar6 = pfVar6 + 4;
    if (local_90 == 0.0) {
      local_a8 = local_70[4] * local_a8;
      local_a4 = local_5c * local_a4;
      iVar5 = *(int *)(local_7c + 0x1c);
      local_90 = local_8c;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_90 = local_a8 * 0.5;
        }
        else if (iVar5 == 2) {
          local_90 = local_a8 + 1.0;
        }
      }
      iVar5 = *(int *)(local_7c + 0x20);
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_8c = local_a4 * 0.5;
        }
        else if (iVar5 == 2) {
          local_8c = local_a4 + 1.0;
        }
      }
      local_90 = -local_90;
      local_8c = -local_8c;
      local_88 = 0;
      local_84 = 0;
      iVar5 = FUN_00ce5bd0(puVar4,&local_90,&local_a8,&local_78,param_3);
      if (iVar5 != 0) {
        FUN_00cacde0(local_50,param_3[0x1b]);
        uVar7 = *(undefined4 *)(iVar3 + 0x40);
        puVar4[0x1a] = *(undefined4 *)(iVar3 + 0x3c);
        puVar4[0x1d] = uVar7;
        puVar4[0x1b] = 0;
        fVar1 = param_3[0x1b];
        puVar4[0x47] = fVar1;
        puVar4[0x49] = (uint)(fVar1 == 4.2039e-45);
        FUN_00ccabb0(local_50,*(undefined4 *)(iVar3 + 0x24),param_3[0x1a],
                     *(undefined4 *)(iVar3 + 0x28));
        puVar4[0x35] = param_3[0x1d];
        puVar4[0x46] = param_3[0x20];
        if (param_3[0x1e] == 2.8026e-45) {
          FUN_00a30800(puVar4,0x3e,0);
          return;
        }
        if (param_3[0x1e] == 1.4013e-45) {
          uVar7 = FUN_00cb3840(param_3[0x1f],param_3[0x1c]);
          FUN_00a30800(puVar4,0x69,uVar7);
          return;
        }
        if (param_3[0x1b] == 4.2039e-45) {
          FUN_00a30800(puVar4,0x61,0);
          return;
        }
        uVar7 = FUN_00cb3840(param_3[0x1f],param_3[0x1c]);
        FUN_00a30800(puVar4,0x67,uVar7);
      }
      return;
    }
  } while( true );
}

