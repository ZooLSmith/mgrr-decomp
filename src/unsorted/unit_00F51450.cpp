// src/unsorted/unit_00F51450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F51450..00F519D0, 2 functions

#include "types.h"

// 00F51450  FUN_00f51450  size=1400  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f51450(undefined4 *param_1,undefined4 *param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  float unaff_EBX;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 **ppuStack_110;
  float *pfStack_10c;
  float fStack_108;
  float **ppfStack_104;
  undefined *puStack_100;
  undefined1 *puStack_fc;
  float *pfStack_f8;
  float fStack_f4;
  float *pfStack_f0;
  undefined *puStack_ec;
  float *pfStack_e8;
  undefined1 *puStack_e4;
  undefined *puStack_e0;
  undefined8 *puStack_dc;
  float *pfStack_d8;
  float local_d4;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined1 auStack_b0 [8];
  undefined4 *local_a8;
  float local_a4;
  float local_a0;
  undefined4 *local_9c;
  undefined1 local_98 [4];
  float local_94 [2];
  int iStack_8c;
  undefined1 auStack_88 [8];
  float local_80;
  undefined4 *local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 *puStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 *puStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_c4;
  *param_1 = 0xbf000000;
  param_1[1] = 0xbf000000;
  local_94[0] = param_4;
  local_c4 = (float)((int)param_3 + -2);
  param_1[2] = 0;
  local_a8 = param_2 + (int)param_3 * 2;
  *param_2 = 0x3f000000;
  param_2[1] = 0x3f000000;
  *local_a8 = 0x3f000000;
  puVar2 = param_2 + (int)param_3 * 4;
  local_a8[1] = 0x3f000000;
  puVar6 = param_2 + (int)param_3 * 6;
  *puVar2 = 0x3f000000;
  local_9c = param_2;
  puVar2[1] = 0x3f000000;
  uVar4 = DAT_01ee66b0;
  *puVar6 = 0x3f000000;
  puVar6[1] = 0x3f000000;
  local_7c = param_1;
  local_a4 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar4 | 1;
    _DAT_01ee66a0 = 0;
    _DAT_01ee66a8 = 0;
    _DAT_01ee66a4 = 0x3f000000;
    DAT_01ee66b0 = uVar4;
  }
  if ((uVar4 & 2) == 0) {
    uVar4 = uVar4 | 2;
    _DAT_01ee6690 = 0;
    _DAT_01ee6698 = 0;
    _DAT_01ee6694 = 0x3f000000;
    DAT_01ee66b0 = uVar4;
  }
  if ((uVar4 & 4) == 0) {
    uVar4 = uVar4 | 4;
    _DAT_01ee6680 = 0xbf000000;
    _DAT_01ee6684 = 0xbf000000;
    _DAT_01ee6688 = 0.0;
    DAT_01ee66b0 = uVar4;
  }
  if ((uVar4 & 8) == 0) {
    DAT_01ee66b0 = uVar4 | 8;
    _DAT_01ee6670 = 0.5;
    _DAT_01ee6674 = (undefined4 *)0x3f000000;
    _DAT_01ee6678 = 0.0;
  }
  local_a0 = 1.4013e-45;
  if (1 < (int)param_3) {
    local_80 = (float)((int)puVar2 - (int)puVar6);
    local_68 = 360.0 / (double)(int)local_c4;
    local_78 = (float)((int)local_a8 - (int)puVar6);
    local_70 = (float)((int)param_2 - (int)puVar6);
    pfVar7 = (float *)(puVar6 + 3);
    local_6c = (float)((int)puVar2 - (int)local_a8);
    pfVar5 = (float *)(local_a8 + 2);
    param_1 = param_1 + 5;
    local_74 = (float)((int)param_2 - (int)local_a8);
    do {
      pfStack_d8 = &local_60;
      local_a8 = (undefined4 *)((float)((int)local_a0 + -1) * (float)local_68);
      local_d4 = (float)local_a8 * 0.017453292;
      puStack_dc = (undefined8 *)0xf515fb;
      local_c4 = local_d4;
      D3DXMatrixRotationZ();
      uStack_38 = _DAT_01ee6680;
      puStack_dc = &local_68;
      uStack_34 = _DAT_01ee6684;
      puStack_e0 = &DAT_01ee66a0;
      puStack_e4 = local_98;
      fStack_30 = _DAT_01ee6688;
      pfStack_e8 = (float *)0xf51636;
      D3DXVec3TransformNormal();
      local_a4 = fStack_44 + local_a4;
      pfStack_e8 = &local_74;
      puStack_ec = &DAT_01ee6690;
      pfStack_f0 = &local_d4;
      local_a0 = (float)puStack_40 + local_a0;
      local_9c = (undefined4 *)(fStack_3c + (float)local_9c);
      param_1[-2] = local_a4;
      param_1[-1] = local_a0;
      *param_1 = local_9c;
      fStack_44 = _DAT_01ee6670;
      puStack_40 = _DAT_01ee6674;
      fStack_3c = _DAT_01ee6678;
      fStack_f4 = 2.2507838e-38;
      D3DXVec3TransformNormal();
      puStack_e0 = (undefined *)(fStack_50 + (float)puStack_e0);
      pfStack_f8 = &local_80;
      puStack_dc = (undefined8 *)(fStack_4c + (float)puStack_dc);
      pfStack_d8 = (float *)(fStack_48 + (float)pfStack_d8);
      *(undefined **)(iStack_8c + (int)pfVar5) = puStack_e0;
      *(undefined8 **)((int)local_a0 + (int)pfVar7) = puStack_dc;
      fStack_f4 = -unaff_EBX * 0.017453292;
      puStack_fc = (undefined1 *)0xf5171f;
      puStack_e4 = (undefined1 *)fStack_f4;
      D3DXMatrixRotationZ();
      puStack_fc = auStack_88;
      fStack_58 = _DAT_01ee6670;
      puStack_100 = &DAT_01ee6690;
      puStack_54 = _DAT_01ee6674;
      ppfStack_104 = &pfStack_e8;
      fStack_50 = _DAT_01ee6678;
      fStack_108 = 2.2508074e-38;
      D3DXVec3TransformNormal();
      fStack_f4 = local_68._4_4_ + fStack_f4;
      pfStack_10c = local_94;
      pfStack_f0 = (float *)(local_60 + (float)pfStack_f0);
      puStack_ec = (undefined *)(fStack_5c + (float)puStack_ec);
      pfVar7[-1] = fStack_f4;
      *pfVar7 = (float)pfStack_f0;
      fStack_108 = ((float)puStack_dc + 180.0) * 0.017453292;
      ppuStack_110 = (undefined4 **)0xf517c2;
      pfStack_f8 = (float *)fStack_108;
      D3DXMatrixRotationZ();
      local_6c = _DAT_01ee6670;
      ppuStack_110 = &local_9c;
      local_68 = (double)CONCAT44(_DAT_01ee6678,_DAT_01ee6674);
      D3DXVec3TransformNormal(&puStack_fc,&DAT_01ee6690);
      fStack_108 = local_78 + fStack_108;
      ppfStack_104 = (float **)(local_74 + (float)ppfStack_104);
      puStack_100 = (undefined *)(local_70 + (float)puStack_100);
      *pfVar5 = fStack_108;
      *(float ***)((int)fStack_c0 + (int)pfVar7) = ppfStack_104;
      pfStack_10c = (float *)((180.0 - (float)pfStack_f0) * 0.017453292);
      D3DXMatrixRotationZ(&local_a8,pfStack_10c);
      local_80 = _DAT_01ee6670;
      local_7c = _DAT_01ee6674;
      local_78 = _DAT_01ee6678;
      D3DXVec3TransformNormal(&ppuStack_110,&DAT_01ee6690,auStack_b0);
      fStack_c0 = fStack_30 + fStack_c0;
      param_1 = param_1 + 3;
      pfVar7 = pfVar7 + 2;
      pfVar5 = pfVar5 + 2;
      local_c4 = fStack_2c + fStack_bc;
      fStack_b8 = fStack_28 + fStack_b8;
      *(float *)((int)local_74 + -8 + (int)pfVar5) = fStack_c0;
      *(float *)((int)local_70 + -8 + (int)pfVar7) = local_c4;
      local_a0 = (float)((int)local_a0 + 1);
      fStack_bc = local_c4;
    } while ((int)local_a0 < (int)local_a4);
  }
  local_d4 = local_94[0];
  puStack_dc = (undefined8 *)0xc;
  puStack_e0 = (undefined *)0xf51925;
  pfStack_d8 = (float *)local_a4;
  iVar3 = FUN_00f9cae0();
  fVar1 = local_a4;
  if (iVar3 != 0) {
    local_d4 = local_a4;
    pfStack_d8 = (float *)0xc;
    puStack_dc = (undefined8 *)local_7c;
    puStack_e0 = (undefined *)0xf5193d;
    iVar3 = FUN_00f99d50();
    if (iVar3 != 0) {
      local_a4 = 0.0;
      puVar6 = local_9c;
      while( true ) {
        local_d4 = local_94[0];
        pfStack_d8 = (float *)fVar1;
        puStack_dc = (undefined8 *)&DAT_00000008;
        puStack_e0 = (undefined *)0xf5197f;
        iVar3 = FUN_00f9cae0();
        if (iVar3 == 0) break;
        local_d4 = fVar1;
        pfStack_d8 = (float *)0x8;
        puStack_e0 = (undefined *)0xf5198e;
        puStack_dc = (undefined8 *)puVar6;
        iVar3 = FUN_00f99d50();
        if (iVar3 == 0) break;
        local_a4 = (float)((int)local_a4 + 1);
        puVar6 = puVar6 + (int)fVar1 * 2;
        if (3 < (int)local_a4) {
          __security_check_cookie(local_14 ^ (uint)&local_c4);
          return;
        }
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)&local_c4);
  return;
}

// 00F519D0  FUN_00f519d0  size=873  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f519d0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined1 auStack_b4 [8];
  undefined4 *local_ac;
  uint local_a8;
  undefined4 *local_a4;
  uint local_a0;
  int local_9c;
  undefined1 local_98 [4];
  undefined4 local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int local_80;
  undefined4 *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  double local_68;
  undefined1 local_60 [40];
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b4;
  *param_1 = 0xbf000000;
  local_94 = param_4;
  param_1[1] = 0xbf000000;
  local_ac = param_2 + param_3 * 2;
  param_1[2] = 0;
  puVar4 = param_2 + param_3 * 4;
  *param_2 = 0x3f000000;
  local_a8 = param_3 - 2;
  param_2[1] = 0x3f800000;
  local_ac[1] = 0x3f800000;
  uVar3 = DAT_01ee6700;
  puVar6 = param_2 + param_3 * 6;
  local_a4 = param_2;
  *local_ac = 0x3f000000;
  local_7c = param_1;
  *puVar4 = 0x3f000000;
  local_9c = param_3;
  puVar4[1] = 0;
  *puVar6 = 0x3f000000;
  puVar6[1] = 0;
  if ((uVar3 & 1) == 0) {
    _DAT_01ee66f0 = 0;
    uVar3 = uVar3 | 1;
    _DAT_01ee66f8 = 0;
    _DAT_01ee66f4 = 0x3f000000;
    DAT_01ee6700 = uVar3;
  }
  if ((uVar3 & 2) == 0) {
    uVar3 = uVar3 | 2;
    _DAT_01ee66e0 = 0;
    _DAT_01ee66e8 = 0;
    _DAT_01ee66e4 = 0x3f000000;
    DAT_01ee6700 = uVar3;
  }
  if ((uVar3 & 4) == 0) {
    uVar3 = uVar3 | 4;
    _DAT_01ee66d0 = 0xbf000000;
    _DAT_01ee66d4 = 0xbf000000;
    _DAT_01ee66d8 = 0.0;
    DAT_01ee6700 = uVar3;
  }
  if ((uVar3 & 8) == 0) {
    DAT_01ee6700 = uVar3 | 8;
    _DAT_01ee66c0 = 0x3f000000;
    _DAT_01ee66c4 = 0x3f000000;
    _DAT_01ee66c8 = 0;
  }
  local_a0 = 1;
  if (1 < param_3) {
    local_70 = (int)local_ac - (int)puVar6;
    local_68 = 360.0 / (double)(int)local_a8;
    local_78 = (int)puVar4 - (int)puVar6;
    local_6c = (int)param_2 - (int)puVar6;
    local_80 = (int)local_ac - (int)puVar4;
    local_74 = (int)param_2 - (int)puVar4;
    puVar4 = puVar4 + 2;
    puVar6 = puVar6 + 3;
    pfVar8 = (float *)(param_1 + 5);
    do {
      local_a8 = local_a0 - 1;
      local_ac = (undefined4 *)((float)(int)local_a8 * (float)local_68 * 0.017453292);
      D3DXMatrixRotationZ(local_60,local_ac);
      uStack_38 = _DAT_01ee66d0;
      uStack_34 = _DAT_01ee66d4;
      fStack_30 = _DAT_01ee66d8;
      D3DXVec3TransformNormal(local_98,&DAT_01ee66f0,&local_68);
      fStack_90 = fStack_30 + fStack_90;
      uVar3 = local_a0 & 1;
      fStack_8c = fStack_2c + fStack_8c;
      local_a0 = local_a0 + 1;
      puVar7 = puVar6 + 2;
      puVar5 = puVar4 + 2;
      fStack_88 = fStack_28 + fStack_88;
      pfVar8[-2] = fStack_90;
      pfVar8[-1] = fStack_8c;
      *pfVar8 = fStack_88;
      *(float *)(local_80 + -8 + (int)puVar5) = (float)uVar3;
      *(undefined4 *)(local_70 + -8 + (int)puVar7) = 0x3f800000;
      local_ac = (undefined4 *)(float)(local_a8 & 1);
      puVar6[-1] = local_ac;
      *puVar6 = 0;
      *puVar4 = local_ac;
      *(undefined4 *)(local_78 + -8 + (int)puVar7) = 0x3f800000;
      *(float *)(local_74 + -8 + (int)puVar5) = (float)uVar3;
      *(undefined4 *)(local_6c + -8 + (int)puVar7) = 0;
      puVar4 = puVar5;
      puVar6 = puVar7;
      pfVar8 = pfVar8 + 3;
    } while ((int)local_a0 < local_9c);
  }
  iVar2 = FUN_00f9cae0(0xc,local_9c,local_94);
  iVar1 = local_9c;
  if ((iVar2 != 0) && (iVar2 = FUN_00f99d50(local_7c,0xc,local_9c), iVar2 != 0)) {
    local_a8 = 0;
    puVar6 = local_a4;
    while ((iVar2 = FUN_00f9cae0(8,iVar1,local_94), iVar2 != 0 &&
           (iVar2 = FUN_00f99d50(puVar6,8,iVar1), iVar2 != 0))) {
      local_a8 = local_a8 + 1;
      puVar6 = puVar6 + iVar1 * 2;
      if (3 < (int)local_a8) {
        __security_check_cookie(local_14 ^ (uint)auStack_b4);
        return;
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_b4);
  return;
}

