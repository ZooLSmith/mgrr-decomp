// src/ui/cUIDraw3Grid.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3DD0..00CFB8E0, 9 functions

#include "types.h"

// 00CB3DD0  cUIDraw3Grid::cUIDraw3Grid  size=129  [class]
void __fastcall cUIDraw3Grid::cUIDraw3Grid(undefined4 *param_1)

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
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}

// 00CB3E60  cUIDraw3Grid::vf08  size=6  [class]
undefined4 cUIDraw3Grid::vf08(void)

{
  return 8;
}

// 00CB3E70  cUIDraw3Grid::vf1C  size=14  [class]
bool __fastcall cUIDraw3Grid::vf1C(int param_1)

{
  return *(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x4c);
}

// 00CCF640  cUIDraw3Grid::vf00  size=31  [class]
undefined4 * __thiscall cUIDraw3Grid::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIDrawBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCF6A0  cUIDraw3Grid::vf10  size=97  [class]
void __thiscall
cUIDraw3Grid::vf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

// 00CE6D00  FUN_00ce6d00  size=1809  [callgraph]
void __thiscall FUN_00ce6d00(int param_1,float *param_2,float *param_3,float *param_4)

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
  int iVar11;
  uint uVar12;
  float fVar13;
  float *pfVar14;
  float10 fVar15;
  float10 fVar16;
  float local_6c;
  float local_60;
  float local_5c;
  float local_48;
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
  float local_14;
  
  if ((*(int *)(param_1 + 0x50) == -1) || (*(int *)(param_1 + 0x2c) == 0)) {
    param_2[6] = 0.0;
    param_2[8] = 32.0;
    param_2[9] = 32.0;
    param_2[7] = 0.0;
    param_2[0xc] = 0.0;
    param_2[10] = 1.0 / param_2[8];
    param_2[0xb] = 1.0 / param_2[9];
  }
  else {
    iVar11 = FUN_00ce13c0(param_2 + 6,*(int *)(param_1 + 0x50));
    if (iVar11 == 0) {
      return;
    }
    param_2[0xc] = (float)(param_1 + 0x2c);
  }
  if ((param_2[0xc] == 0.0) || (*(char *)(param_1 + 0x48) == '\0')) {
    fVar1 = *(float *)(param_1 + 8);
    param_2[4] = *(float *)(param_1 + 4);
    param_2[5] = fVar1;
  }
  else {
    param_2[4] = param_2[8];
    param_2[5] = param_2[9];
  }
  pfVar14 = param_3;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar14 = *param_4;
    param_4 = param_4 + 1;
    pfVar14 = pfVar14 + 1;
  }
  iVar11 = 0;
  local_6c = 4.2039e-45;
  local_20 = SQRT(param_3[1] * param_3[1] + *param_3 * *param_3 + param_3[2] * param_3[2]);
  local_1c = SQRT(param_3[6] * param_3[6] + param_3[4] * param_3[4] + param_3[5] * param_3[5]);
  pfVar14 = param_3 + 2;
  do {
    fVar2 = 1.0;
    fVar1 = 0.0;
    local_40 = pfVar14[-2];
    local_3c = pfVar14[-1];
    local_38 = *pfVar14;
    local_34 = pfVar14[1];
    fVar4 = SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c);
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
      fVar2 = local_40;
    }
    else {
      if (iVar11 == 0) {
        local_40 = 1.0;
        local_3c = fVar1;
      }
      else {
        if (iVar11 != 1) {
          fVar2 = local_40;
          if (iVar11 == 2) {
            local_40 = 0.0;
            local_3c = 0.0;
            local_38 = 1.0;
            local_34 = 0.0;
            fVar2 = fVar1;
          }
          goto LAB_00ce6f06;
        }
        local_40 = 0.0;
        local_3c = fVar2;
        fVar2 = fVar1;
      }
      local_38 = 0.0;
      local_34 = 0.0;
    }
LAB_00ce6f06:
    iVar11 = iVar11 + 1;
    pfVar14[-2] = fVar2;
    local_6c = (float)((int)local_6c + -1);
    pfVar14[-1] = local_3c;
    *pfVar14 = local_38;
    pfVar14[1] = local_34;
    pfVar14 = pfVar14 + 4;
    if (local_6c == 0.0) {
      local_60 = param_2[4] * local_20;
      param_2[4] = local_60;
      local_5c = param_2[5] * local_1c;
      param_2[5] = local_5c;
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar11 == 0) {
        *param_2 = 0.0;
      }
      else if (iVar11 == 1) {
        *param_2 = local_60 * -0.5;
      }
      else if (iVar11 == 2) {
        *param_2 = 1.0 - local_60;
      }
      iVar11 = *(int *)(param_1 + 0x20);
      if (iVar11 == 0) {
        param_2[1] = 0.0;
      }
      else if (iVar11 == 1) {
        param_2[1] = local_5c * -0.5;
      }
      else if (iVar11 == 2) {
        param_2[1] = 1.0 - local_5c;
      }
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      param_2[0xd] = (float)(int)*(char *)(param_1 + 0x49);
      param_2[0xe] = (float)(int)*(char *)(param_1 + 0x4a);
      param_2[0xf] = *(float *)(param_1 + 0x24);
      param_2[0x10] = *(float *)(param_1 + 0x28);
      param_2[0x11] = *(float *)(param_1 + 0x40);
      fVar1 = *(float *)(param_1 + 0xc);
      if (param_2[8] * 0.5 < fVar1) {
        fVar1 = param_2[8] * 0.5;
      }
      fVar2 = *(float *)(param_1 + 0x10);
      if (param_2[9] * 0.5 < fVar2) {
        fVar2 = param_2[9] * 0.5;
      }
      fVar3 = local_60 * 0.5;
      fVar4 = local_5c * 0.5;
      if (fVar1 <= fVar3) {
        fVar3 = fVar1;
      }
      if (fVar2 <= fVar4) {
        fVar4 = fVar2;
      }
      local_60 = local_60 - fVar3 * 2.0;
      local_5c = local_5c - fVar4 * 2.0;
      if (local_60 < 0.0 != (local_60 == 0.0)) {
        local_60 = 0.0;
      }
      if (local_5c < 0.0 != (local_5c == 0.0)) {
        local_5c = 0.0;
      }
      fVar8 = *(float *)(param_1 + 0x14);
      fVar9 = *(float *)(param_1 + 0x18);
      if (fVar3 <= fVar8) {
        fVar8 = fVar3;
      }
      if (fVar4 <= fVar9) {
        fVar9 = fVar4;
      }
      local_48 = param_2[8] - fVar8 * 2.0;
      fVar9 = param_2[9] - fVar9 * 2.0;
      if (local_60 <= local_48) {
        local_48 = local_60;
      }
      fVar15 = (float10)FUN_00ddb510(*param_2,0);
      local_30 = (float)fVar15;
      fVar15 = (float10)FUN_00ddb510(param_2[1],0);
      local_2c = (float)fVar15;
      local_28 = param_2[2];
      fVar15 = (float10)FUN_00ddb510(fVar3,0);
      fVar3 = (float)fVar15;
      fVar15 = (float10)FUN_00ddb510(fVar4,0);
      fVar4 = (float)fVar15;
      iVar11 = FUN_00f98aa0();
      local_30 = (fVar3 - fVar3 / ((float)iVar11 * 0.0013888889)) + local_30;
      iVar11 = FUN_00f98a90();
      local_2c = (fVar4 - fVar4 / ((float)iVar11 * 0.00078125)) + local_2c;
      iVar11 = FUN_00f98aa0();
      fVar3 = fVar3 / ((float)iVar11 * 0.0013888889);
      iVar11 = FUN_00f98a90();
      fVar15 = (float10)FUN_00ddb510(local_60,0);
      fVar5 = (float)fVar15;
      fVar15 = (float10)FUN_00ddb510(local_5c,0);
      fVar16 = (float10)(fVar4 / ((float)iVar11 * 0.00078125));
      uVar12 = 0;
      fVar4 = (float)(fVar16 + fVar15 + fVar16);
      fVar10 = local_20;
      local_6c = fVar3;
      do {
        fVar13 = param_2[7] + fVar2;
        if (*(char *)(param_1 + 0x4a) == '\0') {
          local_14 = fVar13 + fVar9;
          local_1c = fVar13;
        }
        else {
          local_1c = fVar13 + fVar9;
          local_14 = fVar13;
        }
        if (uVar12 == 0) {
          if (*(char *)(param_1 + 0x49) == '\0') {
            fVar10 = local_30 + 1.0;
            local_20 = param_2[6] + 1.0;
            local_18 = local_20 + fVar8;
            local_6c = fVar3 - 1.0;
          }
          else {
            local_20 = param_2[8] + param_2[6];
            local_18 = local_20 - fVar8;
            fVar10 = local_30;
            local_6c = fVar3;
          }
        }
        else if (uVar12 == 1) {
          fVar10 = local_30 + fVar3;
          fVar13 = fVar1 + param_2[6];
          local_20 = local_48 + fVar13;
          local_18 = fVar13;
          local_6c = fVar5;
          if (*(char *)(param_1 + 0x49) == '\0') {
            local_18 = local_20;
            local_20 = fVar13;
          }
        }
        else if (uVar12 == 2) {
          fVar10 = fVar5 + local_30 + fVar3;
          if (*(char *)(param_1 + 0x49) == '\0') {
            local_18 = param_2[8] + param_2[6];
            local_20 = (param_2[8] + param_2[6]) - fVar8;
            local_6c = fVar3;
          }
          else {
            local_18 = param_2[6];
            local_20 = fVar8 + param_2[6];
            local_6c = fVar3;
          }
        }
        if ((local_6c <= 0.0) || (fVar13 = fVar4, fVar4 <= 0.0)) {
          local_6c = 0.0;
          fVar13 = 0.0;
        }
        local_20 = local_20 * param_2[10];
        fVar6 = param_2[0xb];
        pfVar14 = param_2 + (uVar12 + 8) * 4;
        local_18 = param_2[10] * local_18;
        fVar7 = param_2[0xb];
        *pfVar14 = fVar10;
        pfVar14[1] = local_2c;
        pfVar14[2] = local_28;
        pfVar14[3] = local_14;
        param_2[uVar12 * 2 + 0x2c] = local_6c;
        param_2[uVar12 * 2 + 0x2d] = fVar13;
        pfVar14 = param_2 + (uVar12 + 5) * 4;
        *pfVar14 = local_20;
        uVar12 = uVar12 + 1;
        pfVar14[1] = fVar6 * local_1c;
        pfVar14[2] = local_18;
        pfVar14[3] = fVar7 * local_14;
      } while (uVar12 < 3);
      return;
    }
  } while( true );
}

// 00CE7420  FUN_00ce7420  size=955  [callgraph]
undefined4 FUN_00ce7420(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 *puVar9;
  float local_7c;
  float local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar8 = 0;
  local_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x130) < 3) {
    return 0;
  }
  local_78 = 0.0;
  local_7c = *(float *)(param_2 + 0xb0);
  pfVar7 = (float *)(param_2 + 0xb0);
  puVar9 = (undefined4 *)(param_2 + 0x88);
  do {
    fVar3 = 1.0;
    fVar1 = 0.0;
    local_70 = puVar9[-2];
    local_60 = *pfVar7;
    local_5c = pfVar7[1];
    local_6c = puVar9[-1];
    local_68 = *puVar9;
    local_20 = *(int *)(param_3 + 0x60);
    local_64 = puVar9[1];
    local_50 = puVar9[-0xe];
    local_4c = puVar9[-0xd];
    local_48 = puVar9[-0xc];
    local_44 = puVar9[-0xb];
    local_40 = *(float *)(param_3 + 0x40);
    local_3c = *(float *)(param_3 + 0x44);
    local_38 = *(float *)(param_3 + 0x48);
    local_34 = *(float *)(param_3 + 0x4c);
    local_30 = *(float *)(param_3 + 0x50);
    local_2c = *(float *)(param_3 + 0x54);
    local_28 = *(float *)(param_3 + 0x58);
    local_24 = *(float *)(param_3 + 0x5c);
    if (0.0 <= *(float *)(param_3 + 100)) {
      if (0.0 < *(float *)(param_3 + 100)) {
        fVar2 = ABS(*(float *)(param_3 + 100));
        local_30 = (*(float *)(param_3 + 0x40) - *(float *)(param_3 + 0x50)) * fVar2 +
                   *(float *)(param_3 + 0x50);
        local_2c = (*(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x54)) * fVar2 +
                   *(float *)(param_3 + 0x54);
        local_28 = (*(float *)(param_3 + 0x48) - *(float *)(param_3 + 0x58)) * fVar2 +
                   *(float *)(param_3 + 0x58);
        local_24 = *(float *)(param_3 + 0x5c) +
                   (*(float *)(param_3 + 0x4c) - *(float *)(param_3 + 0x5c)) * fVar2;
      }
    }
    else {
      fVar2 = ABS(*(float *)(param_3 + 100));
      local_40 = (*(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x40)) * fVar2 +
                 *(float *)(param_3 + 0x40);
      local_3c = (*(float *)(param_3 + 0x54) - *(float *)(param_3 + 0x44)) * fVar2 +
                 *(float *)(param_3 + 0x44);
      local_38 = (*(float *)(param_3 + 0x58) - *(float *)(param_3 + 0x48)) * fVar2 +
                 *(float *)(param_3 + 0x48);
      local_34 = *(float *)(param_3 + 0x4c) +
                 (*(float *)(param_3 + 0x5c) - *(float *)(param_3 + 0x4c)) * fVar2;
    }
    if (local_20 == 3) {
      fVar4 = local_78 / *(float *)(param_2 + 0x10);
      fVar2 = fVar1;
      if ((0.0 <= fVar4) && (fVar2 = fVar4, 1.0 < fVar4)) {
        fVar2 = 1.0;
      }
      fVar4 = local_7c / *(float *)(param_2 + 0x10);
      if ((fVar4 < 0.0) || (fVar1 = fVar4, fVar4 <= 1.0)) {
        fVar3 = fVar1;
      }
      fVar5 = *(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x40);
      local_40 = fVar5 * fVar2 + *(float *)(param_3 + 0x40);
      fVar4 = *(float *)(param_3 + 0x54) - *(float *)(param_3 + 0x44);
      local_3c = fVar4 * fVar2 + *(float *)(param_3 + 0x44);
      local_28 = *(float *)(param_3 + 0x58) - *(float *)(param_3 + 0x48);
      local_38 = local_28 * fVar2 + *(float *)(param_3 + 0x48);
      fVar1 = *(float *)(param_3 + 0x5c) - *(float *)(param_3 + 0x4c);
      local_34 = fVar1 * fVar2 + *(float *)(param_3 + 0x4c);
      local_30 = fVar5 * fVar3 + *(float *)(param_3 + 0x40);
      local_2c = fVar4 * fVar3 + *(float *)(param_3 + 0x44);
      local_28 = local_28 * fVar3;
LAB_00ce76c8:
      local_28 = local_28 + *(float *)(param_3 + 0x48);
      local_24 = fVar1 * fVar3 + *(float *)(param_3 + 0x4c);
      if (uVar8 != 2) {
        local_78 = local_78 + *pfVar7;
        local_7c = pfVar7[2] + local_7c;
      }
    }
    else if (local_20 == 4) {
      fVar4 = 1.0 - local_7c / *(float *)(param_2 + 0x10);
      fVar2 = fVar1;
      if ((0.0 <= fVar4) && (fVar2 = fVar4, 1.0 < fVar4)) {
        fVar2 = 1.0;
      }
      fVar4 = 1.0 - local_78 / *(float *)(param_2 + 0x10);
      if ((0.0 <= fVar4) && (fVar1 = fVar4, 1.0 < fVar4)) {
        fVar1 = fVar3;
      }
      fVar5 = *(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x40);
      local_40 = fVar5 * fVar2 + *(float *)(param_3 + 0x40);
      fVar4 = *(float *)(param_3 + 0x54) - *(float *)(param_3 + 0x44);
      local_3c = fVar4 * fVar2 + *(float *)(param_3 + 0x44);
      local_28 = *(float *)(param_3 + 0x58) - *(float *)(param_3 + 0x48);
      local_38 = local_28 * fVar2 + *(float *)(param_3 + 0x48);
      fVar3 = *(float *)(param_3 + 0x5c) - *(float *)(param_3 + 0x4c);
      local_34 = fVar3 * fVar2 + *(float *)(param_3 + 0x4c);
      local_30 = fVar5 * fVar1 + *(float *)(param_3 + 0x40);
      local_2c = fVar4 * fVar1 + *(float *)(param_3 + 0x44);
      local_28 = local_28 * fVar1;
      goto LAB_00ce76c8;
    }
    iVar6 = FUN_00caf060(&local_70);
    if (iVar6 == 0) {
      return 0;
    }
    pfVar7 = pfVar7 + 2;
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 4;
    if (2 < uVar8) {
      return 1;
    }
  } while( true );
}

// 00CE77E0  cUIDraw3Grid::vf18  size=188  [class]
void __thiscall cUIDraw3Grid::vf18(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_120 [64];
  undefined1 local_e0 [220];
  
  if ((param_2 != 0) && (0.0 < *(float *)(param_4 + 0x4c))) {
    FUN_00ce6d00(local_e0,local_120,param_4);
    iVar2 = FUN_00ce7420(param_2,local_e0,param_4);
    if (iVar2 != 0) {
      FUN_00cacde0(local_120,*(undefined4 *)(param_4 + 0x6c));
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(param_2 + 0x74) = uVar1;
      *(undefined4 *)(param_2 + 0x6c) = 0;
      iVar2 = *(int *)(param_4 + 0x6c);
      *(int *)(param_2 + 0x11c) = iVar2;
      *(uint *)(param_2 + 0x124) = (uint)(iVar2 == 3);
      FUN_00ccac10(local_120,param_3,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_4 + 0x68)
                   ,*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_4 + 0x74);
    }
  }
  return;
}

// 00CFB8E0  cUIDraw3Grid::vf14  size=417  [class]
void __thiscall cUIDraw3Grid::vf14(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_120 [64];
  undefined1 local_e0 [220];
  
  if (0.0 < *(float *)(param_3 + 0x4c)) {
    FUN_00ce6d00(local_e0,local_120,param_3);
    if (*param_2 != 0) {
      puVar1 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20);
      if (puVar1 != (undefined4 *)0x0) {
        cUIPrimWorkBase::cUIPrimWorkBase();
        *puVar1 = cUIPrimWork::vftable;
        iVar2 = FUN_00caef00(param_2,0xc,0x12);
        if (iVar2 != 0) {
          puVar1[3] = 0;
          puVar1[0x4c] = 0;
          puVar1[0x4d] = 3;
          iVar2 = FUN_00ce7420(puVar1,local_e0,param_3);
          if (iVar2 != 0) {
            FUN_00cacde0(local_120,*(undefined4 *)(param_3 + 0x6c));
            uVar3 = *(undefined4 *)(param_1 + 0x40);
            puVar1[0x1a] = *(undefined4 *)(param_1 + 0x3c);
            puVar1[0x1d] = uVar3;
            puVar1[0x1b] = 0;
            iVar2 = *(int *)(param_3 + 0x6c);
            puVar1[0x47] = iVar2;
            puVar1[0x49] = (uint)(iVar2 == 3);
            FUN_00ccabb0(local_120,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_3 + 0x68),
                         *(undefined4 *)(param_1 + 0x28));
            puVar1[0x35] = *(undefined4 *)(param_3 + 0x74);
            puVar1[0x46] = *(undefined4 *)(param_3 + 0x80);
            if (*(int *)(param_3 + 0x78) == 2) {
              FUN_00a30800(puVar1,0x3e,0);
              return;
            }
            if (*(int *)(param_3 + 0x78) == 1) {
              uVar3 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
              FUN_00a30800(puVar1,0x69,uVar3);
              return;
            }
            if (*(int *)(param_3 + 0x6c) == 3) {
              FUN_00a30800(puVar1,0x61,0);
              return;
            }
            uVar3 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
            FUN_00a30800(puVar1,0x67,uVar3);
          }
        }
      }
    }
  }
  return;
}

