// src/unsorted/unit_00C9D210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C9D210..00C9D510, 3 functions

#include "mgrr.h"

// 00C9D210  FUN_00c9d210  size=73  [run]
void FUN_00c9d210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_5;
  local_1c = param_1;
  local_14 = param_3;
  local_18 = param_2;
  local_8 = param_6;
  local_10 = param_4;
  local_4 = param_7;
  FUN_00c9c080(&local_1c);
  return;
}

// 00C9D260  FUN_00c9d260  size=675  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00c9d260(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 local_2000 [1024];
  undefined1 local_1c00 [1024];
  undefined1 local_1800 [1024];
  undefined1 local_1400 [1024];
  undefined1 local_1000 [1024];
  undefined1 local_c00 [1024];
  undefined1 local_800 [1024];
  undefined1 local_400 [1020];
  undefined4 uStack_4;
  
  uStack_4 = 0xc9d26a;
  iVar2 = FUN_00de3560();
  if (iVar2 == 0) {
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x6c);
  iVar2 = 0x20;
  do {
    *puVar3 = 0x3c8efa35;
    puVar3[-7] = 0;
    puVar3[1] = 0xffffffff;
    puVar3 = puVar3 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x6e0) == 0) {
    pcVar10 = "_pos.bxm";
  }
  else {
    pcVar10 = "_VRpos.bxm";
  }
  iVar2 = FUN_00de4550(pcVar10,0);
  if (iVar2 != 0) {
    cXmlBinary::cXmlBinary_16(iVar2,&DAT_01b7bd48);
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x6e0) == 0) {
    pcVar10 = "p%03x.trg";
    puVar9 = local_1800;
LAB_00c9d313:
    uVar7 = FUN_00959930(puVar9,pcVar10,param_2);
  }
  else if (*(int *)(param_1 + 0x6e0) == 1) {
    pcVar10 = "vr-p%03x.trg";
    puVar9 = local_1000;
    goto LAB_00c9d313;
  }
  pbVar4 = (byte *)FUN_00de4500(uVar7);
  if (param_2 == 0xe08) {
    pcVar10 = "pf41.trg";
    puVar9 = local_800;
LAB_00c9d384:
    uVar7 = FUN_00959930(puVar9,pcVar10,param_2);
    pbVar5 = (byte *)FUN_00de4500(uVar7);
    if (pbVar5 != (byte *)0x0) {
      pbVar4 = pbVar5;
    }
  }
  else {
    if (param_2 == 0xe10) {
      pcVar10 = "pf42.trg";
      puVar9 = local_2000;
      goto LAB_00c9d384;
    }
    if (param_2 == 0xe12) {
      pcVar10 = "pf43.trg";
      puVar9 = local_1c00;
      goto LAB_00c9d384;
    }
    if (param_2 == 0xe17) {
      pcVar10 = "pf44.trg";
      puVar9 = local_1400;
      goto LAB_00c9d384;
    }
  }
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = &DAT_016509b8;
    pbVar5 = pbVar4;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00c9d3d0:
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c9d3d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00c9d3d0;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00c9d3d5:
    if (iVar2 != 0) {
      FUN_00dd5650(&DAT_016b1ac0,param_2);
      return;
    }
    if (*(int *)(pbVar4 + 4) != DAT_018ab99c) {
      FUN_00dd5650(&DAT_016b1a88,param_2);
      return;
    }
    FUN_00c9c2b0(pbVar4 + 0xc,*(undefined4 *)(pbVar4 + 8));
  }
  if (*(int *)(param_1 + 0x6e0) == 0) {
    pcVar10 = "p%03x.tgs";
    puVar9 = local_400;
  }
  else {
    if (*(int *)(param_1 + 0x6e0) != 1) goto LAB_00c9d467;
    pcVar10 = "vr-p%03x.tgs";
    puVar9 = local_c00;
  }
  uVar7 = FUN_00959930(puVar9,pcVar10,param_2);
LAB_00c9d467:
  pbVar4 = (byte *)FUN_00de4500(uVar7);
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = &DAT_016509b8;
    pbVar5 = pbVar4;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00c9d4a0:
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c9d4a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00c9d4a0;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00c9d4a5:
    if (iVar2 != 0) {
      FUN_00dd5650(&DAT_016b1a58,param_2);
      return;
    }
    if (*(int *)(pbVar4 + 4) != DAT_018ab99c) {
      FUN_00dd5650(&DAT_016b1a20,param_2);
      return;
    }
    FUN_00c9c3e0(pbVar4 + 0xc,*(undefined4 *)(pbVar4 + 8));
  }
  return;
}

// 00C9D510  FUN_00c9d510  size=48  [run]
void FUN_00c9d510(undefined4 param_1)

{
  if (DAT_01dbd1d0 != 0) {
    *(undefined4 *)(DAT_01dbd1d8 + 0xc) = param_1;
  }
  FUN_00c9d260(param_1);
  FUN_00c90600();
  return;
}

