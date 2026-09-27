// src/unsorted/unit_00837430.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00837430..00837EA0, 4 functions

#include "types.h"

// 00837430  FUN_00837430  size=1326  [run]
/* WARNING: Removing unreachable block (ram,0x00837648) */
/* WARNING: Removing unreachable block (ram,0x008377c8) */

void FUN_00837430(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  undefined1 *puVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float unaff_retaddr;
  undefined1 **ppuVar6;
  float fVar7;
  undefined1 **ppuVar8;
  float fVar9;
  undefined1 *puStack_cc;
  undefined *puStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  float *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  
  local_b4 = &local_60;
  local_6c = *param_2;
  local_b8 = 0;
  local_b0 = 8;
  local_68 = param_2[1];
  local_a8 = 0.0;
  local_ac = 1;
  local_64 = param_2[2];
  local_94 = *param_3;
  local_90 = param_3[1];
  local_8c = param_3[2];
  local_78 = local_94 - local_6c;
  local_74 = local_90 - local_68;
  local_70 = local_8c - local_64;
  local_7c = SQRT(local_70 * local_70 + local_78 * local_78 + local_74 * local_74);
  local_a4 = local_7c * 0.33333334;
  if (param_4 < local_a4) {
    local_a4 = param_4;
  }
  if (local_a4 < param_5) {
    local_a4 = param_5;
  }
  local_7c = local_7c * 0.16666667;
  local_a0 = (local_6c + local_94) * 0.5;
  local_98 = (local_8c + local_64) * 0.5;
  if (local_90 <= local_68) {
    local_9c = local_68 + local_a4;
  }
  else {
    local_9c = local_90 + local_a4;
    if (local_90 + 5.0 < local_68) {
      local_9c = local_a4 * 0.5 + local_90;
    }
  }
  local_78 = local_78 * 0.16666667;
  local_74 = local_74 * 0.16666667;
  local_70 = local_70 * 0.16666667;
  local_88 = local_a0 - local_78;
  local_84 = local_9c - local_74;
  local_80 = local_98 - local_70;
  local_c4 = local_88 - local_6c;
  local_c0 = local_84 - local_68;
  local_bc = local_80 - local_64;
  fVar7 = local_bc * local_bc + local_c0 * local_c0 + local_c4 * local_c4;
  local_60 = local_6c;
  local_5c = local_68;
  local_58 = local_64;
  if (fVar7 < 0.0 != (fVar7 == 0.0)) {
    puStack_c8 = &DAT_0163d0ac;
    puStack_cc = (undefined1 *)0x83765a;
    FUN_00dd5650();
    local_c4 = 0.0;
    local_c0 = 1.0;
    local_bc = 0.0;
  }
  puStack_c8 = (undefined *)&local_c4;
  puStack_cc = (undefined1 *)&local_c4;
  ppuVar8 = &puStack_cc;
  ppuVar6 = &puStack_cc;
  D3DXVec3Normalize();
  pfVar4 = local_b4;
  if ((int)local_b4 < local_b8) {
    pfVar4 = (float *)((int)local_bc + (int)local_b4 * 0xc);
    if (pfVar4 != (float *)0x0) {
      *pfVar4 = (float)puStack_cc * local_84 + local_74;
      pfVar4[1] = (float)puStack_c8 * local_84 + local_70;
      pfVar4[2] = local_c4 * local_84 + local_6c;
    }
    pfVar4 = (float *)((int)local_b4 + 1);
    if ((int)pfVar4 < local_b8) {
      pfVar4 = (float *)((int)local_bc + (int)pfVar4 * 0xc);
      if (pfVar4 != (float *)0x0) {
        *pfVar4 = local_90;
        pfVar4[1] = local_8c;
        pfVar4[2] = local_88;
      }
      pfVar4 = (float *)((int)local_b4 + 2);
      if ((int)pfVar4 < local_b8) {
        pfVar4 = (float *)((int)local_bc + (int)pfVar4 * 0xc);
        if (pfVar4 != (float *)0x0) {
          *pfVar4 = local_a8;
          pfVar4[1] = local_a4;
          pfVar4[2] = local_a0;
        }
        pfVar4 = (float *)((int)local_b4 + 3);
      }
    }
  }
  local_b4 = pfVar4;
  local_90 = local_80 + local_a8;
  local_8c = local_7c + local_a4;
  local_88 = local_78 + local_a0;
  puStack_cc = (undefined1 *)(local_9c - local_90);
  puStack_c8 = (undefined *)(local_98 - local_8c);
  local_c4 = local_94 - local_88;
  fVar7 = local_c4 * local_c4 +
          (float)puStack_cc * (float)puStack_cc + (float)puStack_c8 * (float)puStack_c8;
  if (fVar7 < 0.0 != (fVar7 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    puStack_cc = (undefined1 *)0x0;
    puStack_c8 = (undefined *)0x3f800000;
    local_c4 = 0.0;
  }
  D3DXVec3Normalize();
  fVar7 = (float)ppuVar6 * local_8c;
  fVar9 = (float)ppuVar8 * local_8c;
  puStack_cc = (undefined1 *)((float)puStack_cc * local_8c);
  if (param_2 == (float *)0x0) {
    fVar1 = fVar7 * 0.01;
    puVar2 = (undefined1 *)((float)puStack_cc * 0.01);
    fVar3 = (local_a0 - fVar9 * 0.01) + unaff_retaddr;
  }
  else {
    fVar3 = local_a0 - fVar9;
    fVar1 = fVar7;
    puVar2 = puStack_cc;
  }
  fVar5 = local_bc;
  if ((int)local_bc < (int)local_c0) {
    pfVar4 = (float *)((int)local_c4 + (int)local_bc * 0xc);
    if (pfVar4 != (float *)0x0) {
      *pfVar4 = local_98;
      pfVar4[1] = local_94;
      pfVar4[2] = local_90;
    }
    fVar5 = (float)((int)local_bc + 1);
    if ((int)fVar5 < (int)local_c0) {
      pfVar4 = (float *)((int)local_c4 + (int)fVar5 * 0xc);
      if (pfVar4 != (float *)0x0) {
        *pfVar4 = local_a4 - fVar1;
        pfVar4[1] = fVar3;
        pfVar4[2] = local_9c - (float)puVar2;
      }
      fVar5 = (float)((int)local_bc + 2);
      if ((int)fVar5 < (int)local_c0) {
        pfVar4 = (float *)((int)local_c4 + (int)fVar5 * 0xc);
        if (pfVar4 == (float *)0x0) {
          fVar5 = (float)((int)local_bc + 3);
        }
        else {
          *pfVar4 = local_a4;
          pfVar4[1] = local_a0;
          pfVar4[2] = local_9c;
          fVar5 = (float)((int)local_bc + 3);
        }
      }
    }
  }
  local_bc = fVar5;
  FUN_00a5e090(&puStack_c8);
  if ((local_c4 != 0.0) && (local_bc = 0.0, local_b8 != 0)) {
    FUN_00dd48d0(local_c4,0,fVar7,fVar9);
  }
  return;
}

// 00837960  FUN_00837960  size=1273  [run]
/* WARNING: Removing unreachable block (ram,0x00837b78) */
/* WARNING: Removing unreachable block (ram,0x00837cf8) */

void FUN_00837960(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  undefined1 **ppuVar3;
  float fVar4;
  undefined1 **ppuVar5;
  float fVar6;
  undefined1 *puStack_cc;
  undefined *puStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  float *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  
  local_b4 = &local_60;
  local_6c = *param_2;
  local_b8 = 0;
  local_b0 = 8;
  local_68 = param_2[1];
  local_a8 = 0.0;
  local_ac = 1;
  local_64 = param_2[2];
  local_88 = *param_3;
  local_84 = param_3[1];
  local_80 = param_3[2];
  local_78 = local_88 - local_6c;
  local_74 = local_84 - local_68;
  local_70 = local_80 - local_64;
  local_7c = SQRT(local_70 * local_70 + local_78 * local_78 + local_74 * local_74);
  local_a4 = local_7c * 0.33333334;
  if (param_4 < local_a4) {
    local_a4 = param_4;
  }
  if (local_a4 < param_5) {
    local_a4 = param_5;
  }
  local_7c = local_7c * 0.16666667;
  local_a0 = (local_6c + local_88) * 0.5;
  local_98 = (local_80 + local_64) * 0.5;
  if (local_84 <= local_68) {
    local_9c = local_68 + local_a4;
  }
  else {
    local_9c = local_84 + local_a4;
    if (local_84 + 5.0 < local_68) {
      local_9c = local_a4 * 0.5 + local_84;
    }
  }
  local_78 = local_78 * 0.16666667;
  local_74 = local_74 * 0.16666667;
  local_70 = local_70 * 0.16666667;
  local_94 = local_a0 - local_78;
  local_90 = local_9c - local_74;
  local_8c = local_98 - local_70;
  local_c4 = local_94 - local_6c;
  local_c0 = local_90 - local_68;
  local_bc = local_8c - local_64;
  fVar4 = local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0;
  local_60 = local_6c;
  local_5c = local_68;
  local_58 = local_64;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    puStack_c8 = &DAT_0163d0ac;
    puStack_cc = (undefined1 *)0x837b8a;
    FUN_00dd5650();
    local_c4 = 0.0;
    local_c0 = 1.0;
    local_bc = 0.0;
  }
  puStack_c8 = (undefined *)&local_c4;
  puStack_cc = (undefined1 *)&local_c4;
  ppuVar5 = &puStack_cc;
  ppuVar3 = &puStack_cc;
  D3DXVec3Normalize();
  pfVar1 = local_b4;
  if ((int)local_b4 < local_b8) {
    pfVar1 = (float *)((int)local_bc + (int)local_b4 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)puStack_cc * local_84 + local_74;
      pfVar1[1] = (float)puStack_c8 * local_84 + local_70;
      pfVar1[2] = local_c4 * local_84 + local_6c;
    }
    pfVar1 = (float *)((int)local_b4 + 1);
    if ((int)pfVar1 < local_b8) {
      pfVar1 = (float *)((int)local_bc + (int)pfVar1 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_9c;
        pfVar1[1] = local_98;
        pfVar1[2] = local_94;
      }
      pfVar1 = (float *)((int)local_b4 + 2);
      if ((int)pfVar1 < local_b8) {
        pfVar1 = (float *)((int)local_bc + (int)pfVar1 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_a8;
          pfVar1[1] = local_a4;
          pfVar1[2] = local_a0;
        }
        pfVar1 = (float *)((int)local_b4 + 3);
      }
    }
  }
  local_b4 = pfVar1;
  local_9c = local_80 + local_a8;
  local_98 = local_7c + local_a4;
  local_94 = local_78 + local_a0;
  puStack_cc = (undefined1 *)(local_90 - local_9c);
  puStack_c8 = (undefined *)(local_8c - local_98);
  local_c4 = local_88 - local_94;
  fVar4 = local_c4 * local_c4 +
          (float)puStack_cc * (float)puStack_cc + (float)puStack_c8 * (float)puStack_c8;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    puStack_cc = (undefined1 *)0x0;
    puStack_c8 = (undefined *)0x3f800000;
    local_c4 = 0.0;
  }
  D3DXVec3Normalize();
  fVar4 = (float)ppuVar3 * local_8c;
  fVar6 = (float)ppuVar5 * local_8c;
  puStack_cc = (undefined1 *)((float)puStack_cc * local_8c);
  fVar2 = local_bc;
  if ((int)local_bc < (int)local_c0) {
    pfVar1 = (float *)((int)local_c4 + (int)local_bc * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_a4;
      pfVar1[1] = local_a0;
      pfVar1[2] = local_9c;
    }
    fVar2 = (float)((int)local_bc + 1);
    if ((int)fVar2 < (int)local_c0) {
      pfVar1 = (float *)((int)local_c4 + (int)fVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_98 - fVar4;
        pfVar1[1] = local_94 - fVar6;
        pfVar1[2] = local_90 - (float)puStack_cc;
      }
      fVar2 = (float)((int)local_bc + 2);
      if ((int)fVar2 < (int)local_c0) {
        pfVar1 = (float *)((int)local_c4 + (int)fVar2 * 0xc);
        if (pfVar1 == (float *)0x0) {
          fVar2 = (float)((int)local_bc + 3);
        }
        else {
          *pfVar1 = local_98;
          pfVar1[1] = local_94;
          pfVar1[2] = local_90;
          fVar2 = (float)((int)local_bc + 3);
        }
      }
    }
  }
  local_bc = fVar2;
  FUN_00a5e090(&puStack_c8);
  if ((local_c4 != 0.0) && (local_bc = 0.0, local_b8 != 0)) {
    FUN_00dd48d0(local_c4,0,fVar4,fVar6);
  }
  return;
}

// 00837E60  FUN_00837e60  size=52  [run]
void __thiscall FUN_00837e60(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1a78) = 0;
  FUN_00837430(param_1 + 0x15a0,param_1 + 0x40,param_2,param_3,0,1);
  return;
}

// 00837EA0  FUN_00837ea0  size=151  [run]
void __thiscall FUN_00837ea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x4a0) != 1) {
    return;
  }
  FUN_00eaa6e0(0,0);
  if (*(int *)(param_1 + 0x1138) == 0) {
    if (param_3 != 0) {
      cVar2 = '\b';
      goto LAB_00837eed;
    }
  }
  else if (param_3 != 0) {
    return;
  }
  cVar2 = (param_2 != 0) + '\x06';
LAB_00837eed:
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    FUN_004117d0(cVar2,iVar1,param_1 + 0x10a0);
    FUN_00a963e0(local_160);
  }
  return;
}

