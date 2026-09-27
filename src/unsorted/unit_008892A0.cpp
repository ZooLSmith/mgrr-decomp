// src/unsorted/unit_008892A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008892A0..0088A130, 6 functions

#include "mgrr.h"

// 008892A0  FUN_008892a0  size=1381  [run]
/* WARNING: Removing unreachable block (ram,0x008895d8) */
/* WARNING: Removing unreachable block (ram,0x008895da) */
/* WARNING: Removing unreachable block (ram,0x008895dc) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_008892a0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float unaff_EBX;
  uint uVar11;
  float unaff_ESI;
  float fVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  int local_d0;
  int *local_cc;
  float local_c8;
  float afStack_c4 [5];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [156];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar14 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar8 = FUN_00dd6d80(puVar14);
    uVar11 = -(uint)(iVar8 != 0) & (uint)param_2;
  }
  piVar9 = *(int **)(uVar11 + 0x5e0);
  if (piVar9 == (int *)0x0) {
    local_cc = (int *)0x0;
  }
  else {
    puVar14 = &DAT_01b35b20;
    (**(code **)(*piVar9 + 4))(&DAT_01b35b20);
    iVar8 = FUN_00dd6d80(puVar14);
    local_cc = (int *)(-(uint)(iVar8 != 0) & (uint)piVar9);
  }
  local_d0 = *(int *)(uVar11 + 0x61c);
  iVar8 = FUN_00876530(param_2);
  fVar12 = (float)(uint)(iVar8 == 0);
  if (*(int *)(uVar11 + 0x628) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 5;
    return;
  }
  *(uint *)(param_1 + 0x30) = 2 - (uint)(fVar12 != 0.0);
  if (local_d0 == 0) {
    *(uint *)(param_1 + 0x30) = (uint)(fVar12 != 0.0);
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_d0 = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  local_c8 = fVar12;
  iVar8 = FUN_00a81330();
  if ((iVar8 == 0) || (piVar9 = (int *)FUN_00a7c8a0(), fVar12 = local_c8, piVar9 == (int *)0x0)) {
    if ((*(float *)(uVar11 + 0x600) == 0.0) &&
       ((*(float *)(uVar11 + 0x604) == 0.0 && (*(float *)(uVar11 + 0x608) == 0.0)))) {
      return;
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar11 + 0x600);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(uVar11 + 0x604);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(uVar11 + 0x608);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar11 + 0x60c);
  }
  else {
    puVar14 = &DAT_01be9c78;
    (**(code **)(*piVar9 + 4))(&DAT_01be9c78);
    iVar8 = FUN_00dd6d80(puVar14);
    if (((iVar8 != 0) && (piVar9[0x1d9] != 0)) &&
       (iVar8 = (**(code **)(*piVar9 + 800))(0x3d888889), iVar8 == 0)) {
      local_d0 = 1;
    }
    FUN_00a7c960(uVar11 + 0x5f0);
    piVar7 = local_cc;
    if (*(int *)(uVar11 + 0x610) < 0) {
      iVar8 = *(int *)(uVar11 + 0x614);
      if (-1 < iVar8) goto LAB_00889423;
      if (piVar9[0x1bf] < 1) {
        if (0 < piVar9[0x1b1]) {
          iVar8 = FUN_00a12210(piVar9[0x1b1]);
          local_e0 = (float)piVar9[0x1b4];
          local_dc = (float)piVar9[0x1b5];
          local_d8 = (float)piVar9[0x1b6];
          fStack_d4 = (float)piVar9[0x1b7];
          D3DXVec3TransformNormal(&local_e0,&local_e0,iVar8 + 0x10);
          fVar12 = *(float *)(iVar8 + 0x44);
          fVar1 = *(float *)(iVar8 + 0x48);
          fVar2 = *(float *)(iVar8 + 0x4c);
          *(float *)(param_1 + 0x40) = *(float *)(iVar8 + 0x40) + local_e0;
          *(float *)(param_1 + 0x44) = fVar12 + local_dc;
          *(float *)(param_1 + 0x48) = fVar1 + local_d8;
          *(float *)(param_1 + 0x4c) = fVar2 + fStack_d4;
        }
      }
      else {
        afStack_c4[0] = (float)FUN_00a12210(0xffffffff);
        iVar8 = piVar7[0x13c];
        local_b0 = 0;
        uStack_ac = 0x3faccccd;
        uStack_a8 = 0;
        uVar15 = 0x3f490fdb;
        iVar10 = (**(code **)(*piVar7 + 0x84))(0x3f490fdb);
        uVar13 = *(undefined4 *)(iVar10 + 4);
        iVar10 = FUN_00f98aa0(iVar8,uVar13);
        fVar12 = (float)iVar10 * 0.5;
        fStack_e4 = (float)FUN_00f98a90(fVar12);
        iVar8 = FUN_00a866a0(piVar7 + 0x10,afStack_c4,&local_b0,&local_e0,
                             (float)(int)fStack_e4 * 0.5,fVar12,iVar8,uVar13,uVar15);
        if (-1 < iVar8) {
          *(float *)(param_1 + 0x40) = local_e0;
          *(float *)(param_1 + 0x44) = local_dc;
          *(float *)(param_1 + 0x48) = local_d8;
          *(float *)(param_1 + 0x4c) = fStack_d4;
        }
      }
    }
    else {
      iVar8 = FUN_00c518c0(auStack_a0,*(int *)(uVar11 + 0x610));
      iVar8 = *(int *)(iVar8 + 8);
LAB_00889423:
      iVar8 = FUN_00a12210(iVar8);
      if (iVar8 != 0) {
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar8 + 0x40);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar8 + 0x44);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar8 + 0x48);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar8 + 0x4c);
      }
    }
    fVar12 = local_c8;
    if (((*(float *)(param_1 + 0x40) == 0.0) && (*(float *)(param_1 + 0x44) == 0.0)) &&
       (*(float *)(param_1 + 0x48) == 0.0)) {
      *(int *)(param_1 + 0x40) = piVar9[0x10];
      *(int *)(param_1 + 0x44) = piVar9[0x11];
      *(int *)(param_1 + 0x48) = piVar9[0x12];
      *(int *)(param_1 + 0x4c) = piVar9[0x13];
    }
  }
  local_e0 = (float)local_cc[0x10];
  local_dc = (float)local_cc[0x11];
  local_d8 = (float)local_cc[0x12];
  afStack_c4[1] = 0.0;
  afStack_c4[2] = 1.0;
  afStack_c4[3] = 0.0;
  D3DXVec3TransformNormal(&local_b0,afStack_c4 + 1,local_cc + 4);
  fVar2 = local_c8 * 1.35 + unaff_EBX;
  fVar1 = *(float *)(param_1 + 0x40) - ((float)local_cc * 1.35 + unaff_ESI);
  fVar4 = *(float *)(param_1 + 0x44) - fVar2;
  fVar5 = *(float *)(param_1 + 0x48) - (afStack_c4[0] * 1.35 + fStack_e4);
  fVar2 = fVar2 - *(float *)(param_1 + 0x44);
  bVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1) < 3.0;
  bVar3 = fVar2 <= 3.0;
  if (fVar12 != 0.0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    if ((!bVar6) && (*(undefined4 *)(param_1 + 0x30) = 4, !bVar3)) {
      *(undefined4 *)(param_1 + 0x30) = 3;
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 2;
  if (local_dc == 0.0) {
    if (bVar6) goto LAB_00889792;
    if (bVar3) {
      *(uint *)(param_1 + 0x30) = (uint)(fVar2 < -3.0) * 2 + 2;
      return;
    }
  }
  else {
    if (bVar6) {
LAB_00889792:
      if (ABS(fVar2) < 1.0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x30) = 4;
    if (bVar3) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 3;
  return;
}

// 00889810  FUN_00889810  size=479  [run]
void __thiscall FUN_00889810(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint local_28;
  undefined1 auStack_20 [28];
  
  uVar7 = 0;
  if (param_2 == (undefined4 *)0x0) {
    local_28 = 0;
  }
  else {
    puVar8 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar8);
    local_28 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(local_28 + 0x5e0);
  if (piVar1 != (int *)0x0) {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar6 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar6 != 0) & (uint)piVar1;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x1d3,0,0,0x3f800000,0x8000000,0xbf800000,*(undefined4 *)(param_1 + 0x58));
    FUN_00864400(0x1d3,0,0,0x3f800000,0x8000000);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  else if (*(int *)(param_1 + 0x34) != 1) goto LAB_008899d3;
  iVar6 = FUN_008726a0(param_2);
  if (iVar6 != 0) {
    FUN_00d82510(1,100);
  }
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    FUN_00d82510(1,100);
  }
  iVar6 = FUN_00a8c760(0xb);
  if (iVar6 != 0) {
    FUN_00869220(auStack_20,param_2,*(undefined4 *)(param_1 + 0x54));
    FUN_00874f80(param_2,auStack_20);
    FUN_008697f0(param_2,0);
    *(undefined4 *)(param_1 + 0x50) = 1;
    FUN_00872740(param_2);
  }
  fVar2 = *(float *)(uVar7 + 0x40) - *(float *)(param_1 + 0x40);
  fVar4 = *(float *)(uVar7 + 0x44) - *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(uVar7 + 0x48) - *(float *)(param_1 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  if (2.0 <= fVar2) {
    if (3.0 <= fVar2) goto LAB_008899d3;
    iVar6 = FUN_00a92f90();
    FUN_00e26e90();
    uVar5 = 0x3dcccccd;
  }
  else {
    iVar6 = FUN_00a92f90();
    FUN_00e26e90();
    uVar5 = 0;
  }
  *(undefined4 *)(iVar6 + 0xe4) = uVar5;
  *(undefined4 *)(iVar6 + 0xe8) = uVar5;
  *(undefined4 *)(iVar6 + 0xec) = uVar5;
LAB_008899d3:
  FUN_00b83ea0(0x40a00000);
  return;
}

// 008899F0  FUN_008899f0  size=566  [run]
void __thiscall FUN_008899f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  int iStack_4c;
  uint local_48;
  int *local_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [32];
  
  piVar3 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    local_48 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar5);
    local_48 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  local_44 = *(int **)(local_48 + 0x5e0);
  if (local_44 != (int *)0x0) {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*local_44 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)local_44);
  }
  (**(code **)(*piVar3 + 0x1d4))(1);
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x1d5,0,0,0x3f800000,0x8000000,0xbf800000,*(undefined4 *)(param_1 + 0x58));
    FUN_00864400(0x1d5,0,0,0x3f800000,0x8000000);
    FUN_00a95fb0(0x3f000000);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    pfVar2 = (float *)(**(code **)(*piVar3 + 0x84))();
    if (0.0 < ABS(*pfVar2)) {
      pfVar2 = (float *)FUN_00a8b8a0(auStack_24,0x3f800000);
      local_44 = (int *)0x0;
      fVar4 = (float10)fpatan(((float10)(float)piVar3[0x10] + (float10)*pfVar2) -
                              (float10)(float)piVar3[0x10],
                              ((float10)(float)piVar3[0x12] + (float10)pfVar2[2]) -
                              (float10)(float)piVar3[0x12]);
      fStack_40 = (float)fVar4;
      uStack_3c = 0;
      (**(code **)(*piVar3 + 0x88))(&local_44);
    }
    FUN_00869220(auStack_34,param_2,*(undefined4 *)(param_1 + 0x54));
    FUN_00874f80(param_2,auStack_34);
    FUN_008697f0(param_2,0);
    *(undefined4 *)(param_1 + 0x50) = 1;
    (**(code **)(*piVar3 + 0x318))();
    FUN_008e0af0(0);
    FUN_00872740(param_2);
  }
  else if (*(int *)(param_1 + 0x34) != 1) goto LAB_00889c0a;
  iVar1 = FUN_008726a0(param_2);
  if (iVar1 != 0) {
    FUN_00d82510(1,100);
    FUN_00a95fb0(0x3f800000);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00d82510(1,100);
    FUN_00a95fb0(0x3f800000);
    (**(code **)(*piVar3 + 0x314))();
    FUN_008e0af0(1);
    *(undefined4 *)(iStack_4c + 0x3ec) = 0x100005;
  }
LAB_00889c0a:
  FUN_00b83ea0(0x40a00000);
  return;
}

// 00889C30  FUN_00889c30  size=781  [run]
void __thiscall FUN_00889c30(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  undefined4 *local_2c;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    local_2c = param_2;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar7);
    local_2c = (undefined4 *)(-(uint)(iVar5 != 0) & (uint)param_2);
  }
  piVar6 = (int *)local_2c[0x178];
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar6 + 4))(&DAT_01b35b20);
    iVar5 = FUN_00dd6d80(puVar7);
    piVar6 = (int *)(-(uint)(iVar5 != 0) & (uint)piVar6);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x1d4,0,0,0x3f800000,0x8000000,0xbf800000,*(undefined4 *)(param_1 + 0x5c));
    FUN_00864400(0x1d4,0,0,0x3f800000,0x8000000);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00889d07:
    iVar5 = FUN_008726a0(param_2);
    if (iVar5 != 0) {
      FUN_00d82510(1,100);
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00d82510(1,100);
    }
    iVar5 = FUN_00a952e0(0,0x41f00000);
    if (iVar5 != 0) {
      FUN_00869220(&local_20,param_2,*(undefined4 *)(param_1 + 0x54));
      FUN_00874f80(param_2,&local_20);
      FUN_008697f0(param_2,0);
      *(undefined4 *)(param_1 + 0x50) = 1;
      FUN_00872740(param_2);
    }
  }
  else if (*(int *)(param_1 + 0x34) == 1) goto LAB_00889d07;
  if (((*(float *)(param_1 + 0x40) == 0.0) && (*(float *)(param_1 + 0x44) == 0.0)) &&
     (*(float *)(param_1 + 0x48) == 0.0)) goto LAB_00889f21;
  fVar1 = (float)piVar6[0x10] - *(float *)(param_1 + 0x40);
  fVar3 = (float)piVar6[0x11] - *(float *)(param_1 + 0x44);
  fVar2 = (float)piVar6[0x12] - *(float *)(param_1 + 0x48);
  fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  if (2.0 <= fVar1) {
    if (fVar1 < 3.0) {
      local_24 = FUN_00a92f90();
      FUN_00e26e90();
      uVar4 = 0x3dcccccd;
      goto LAB_00889e33;
    }
  }
  else {
    local_24 = FUN_00a92f90();
    FUN_00e26e90();
    uVar4 = 0;
LAB_00889e33:
    *(undefined4 *)(local_24 + 0xe4) = uVar4;
    *(undefined4 *)(local_24 + 0xe8) = uVar4;
    *(undefined4 *)(local_24 + 0xec) = uVar4;
  }
  if (5.0 < fVar1) {
    iVar5 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar5 + 0xe4) = 0x40000000;
    *(undefined4 *)(iVar5 + 0xe8) = 0x40000000;
    *(undefined4 *)(iVar5 + 0xec) = 0x40000000;
  }
  if ((piVar6[0x9a8] != 0) || (piVar6[0x1513] != 0)) {
    iVar5 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar5 + 0xe4) = 0;
    *(undefined4 *)(iVar5 + 0xe8) = 0;
    *(undefined4 *)(iVar5 + 0xec) = 0;
  }
  iVar5 = FUN_00872510(param_2,&local_20);
  if (iVar5 != 0) {
    local_20 = (local_20 - (float)piVar6[0x10]) * 0.5;
    local_1c = (local_1c - (float)piVar6[0x11]) * 0.5;
    local_18 = (local_18 - (float)piVar6[0x12]) * 0.5;
    local_14 = (local_14 - (float)piVar6[0x13]) * 0.5;
    (**(code **)(*piVar6 + 0x70))(&local_20);
  }
LAB_00889f21:
  FUN_00b83ea0(0x40a00000);
  return;
}

// 00889F40  FUN_00889f40  size=487  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00889f40(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iStack_2c;
  uint local_28;
  int *local_24 [8];
  
  piVar2 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    local_28 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar3);
    local_28 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  local_24[0] = *(int **)(local_28 + 0x5e0);
  if (local_24[0] != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(*local_24[0] + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar3);
    piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)local_24[0]);
  }
  (**(code **)(*piVar2 + 0x1d4))(1);
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00aa4080(0x1d5,0,0,0x3f800000,0x8000000,0xbf800000,*(undefined4 *)(param_1 + 0x58));
    FUN_00864400(0x1d5,0,0,0x3f800000,0x8000000);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x54) = 0x42200000;
    FUN_00869220(local_24,param_2,0x42200000);
    FUN_00874f80(param_2,local_24);
    FUN_008697f0(param_2,0);
    *(undefined4 *)(param_1 + 0x50) = 1;
    (**(code **)(*piVar2 + 0x318))();
    FUN_008e0af0(0);
    FUN_00872740(param_2);
    if (*(int *)(iStack_2c + 0x690) != 0) {
      FUN_00da10b0(_DAT_01bea534);
    }
  }
  else if (*(int *)(param_1 + 0x34) != 1) goto LAB_0088a10b;
  iVar1 = FUN_008726a0(param_2);
  if (iVar1 != 0) {
    FUN_00d82510(1,100);
    FUN_00a95fb0(0x3f800000);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00d82510(1,100);
    FUN_00a95fb0(0x3f800000);
    (**(code **)(*piVar2 + 0x314))();
    FUN_008e0af0(1);
    *(undefined4 *)(iStack_2c + 0x3ec) = 0x100005;
  }
LAB_0088a10b:
  FUN_00b83ea0(0x41200000);
  return;
}

// 0088A130  FUN_0088a130  size=304  [run]
void __thiscall FUN_0088a130(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
    puVar4 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar4);
  }
  if ((*(int *)(uVar3 + 0x3e4) != 0) && (*(int *)(param_1 + 100) == 0)) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  piVar1 = (int *)(param_1 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x68) == 0)) &&
     (iVar2 = FUN_00a8c760(0x16), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x6c) = 1;
    DAT_01dc08bc = 1;
    DAT_01dc08c0 = 0;
    FUN_00e5e050("core_se_btl_char_datsu_in",0);
    *(undefined4 *)(uVar3 + 0x3e4) = 0;
    *(undefined4 *)(uVar3 + 0x2f4) = 1;
  }
  if ((*(int *)(param_1 + 0x6c) != 0) && (iVar2 = FUN_00a8c760(0x16), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_00876eb0(param_2,0);
    *(undefined4 *)(param_1 + 0x70) = 1;
  }
  if (((*(int *)(param_1 + 0x70) != 0) && (FUN_00b8c3c0(), *(int *)(param_1 + 0x70) != 0)) &&
     (*(float *)(uVar3 + 0x5cc) < 0.0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_00b7aa80();
  }
  return;
}

