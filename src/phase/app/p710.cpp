// src/phase/app/p710.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4AA50..00D70550, 7 functions

#include "types.h"

// 00D4AA50  P710::vf1C  size=3  [class]
void P710::vf1C(void)

{
  return;
}

// 00D4AA60  P710::vf18  size=52  [class]
void P710::vf18(void)

{
  int iVar1;
  
  iVar1 = FUN_00c81dd0(0x3e);
  if (iVar1 != 0) {
    iVar1 = FUN_00c1bd80();
    if ((iVar1 != 0) && (DAT_01b76174 != 0)) {
      FUN_00c81e90(0x3e);
    }
  }
  return;
}

// 00D4AAA0  P710::vf08  size=11  [class]
void __fastcall P710::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}

// 00D4AAB0  P710::vf0C  size=1  [class]
void P710::vf0C(void)

{
  return;
}

// 00D55200  P710::vf10  size=99  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall P710::vf10(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x11c);
  if (DAT_018b91a0 != 0x720) {
    FUN_00e51db0(&DAT_01dc5248,1);
    FUN_00de3540(0,0);
    if (DAT_01dc5250 != 0) {
      FUN_00e9d6a0(DAT_01dc5250);
      DAT_01dc5250 = 0;
    }
    _DAT_01dc5254 = 0;
  }
  return;
}

// 00D5BC80  P710::vf14  size=773  [class]
void __thiscall P710::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  pbVar8 = &DAT_01657afc;
  pbVar3 = param_3;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00d5bcc0:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d5bcc5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00d5bcc0;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00d5bcc5:
  if (iVar4 == 0) {
LAB_00d5bcf9:
    FUN_00c81e40(0x3e);
  }
  else {
    pcVar9 = "P710_RESTART";
    pbVar3 = param_3;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_00d5bcf0:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00d5bcf5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_00d5bcf0;
      pbVar3 = pbVar3 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00d5bcf5:
    if (iVar4 == 0) goto LAB_00d5bcf9;
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    pbVar8 = &DAT_016bd76c;
    pbVar3 = param_3;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00d5bd40:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00d5bd45;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00d5bd40;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00d5bd45:
    if (iVar4 != 0) {
      pcVar9 = "P710_RESTART";
      pbVar3 = param_3;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00d5bd70:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00d5bd75;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_00d5bd70;
        pbVar3 = pbVar3 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00d5bd75:
      if (iVar4 != 0) goto LAB_00d5be51;
    }
    *(undefined4 *)(param_1 + 0x120) = 1;
    FUN_0118f7b0();
    local_50 = 0;
    local_2c = 5;
    local_e0[0] = 0x14;
    piVar5 = (int *)FUN_00910da0();
    local_120 = 0x41d00000;
    local_11c = 0x42700000;
    local_118 = 0x40000000;
    local_110 = 0;
    local_10c = 0;
    local_108 = 0;
    local_100 = 0xc124cccd;
    local_fc = 0;
    local_f8 = 0x41dccccd;
    uVar6 = (**(code **)(*piVar5 + 4))(local_e4,local_e0,&local_100,&local_110,&local_120,1);
    FUN_00910ab0(uVar6);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x11c),4);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x11c),0x20);
    FUN_00911ca0("programmabled");
  }
LAB_00d5be51:
  pcVar9 = "P710_BASE";
  pbVar3 = param_3;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_00d5be78:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d5be7d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_00d5be78;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00d5be7d:
  if (iVar4 == 0) {
    piVar5 = (int *)FUN_00910da0();
    (**(code **)(*piVar5 + 0x2c))(param_1 + 0x11c);
  }
  pcVar9 = "P710_RUNWAY";
  do {
    bVar1 = *param_3;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_00d5bec0:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d5bec5;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_00d5bec0;
    param_3 = param_3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00d5bec5:
  if (iVar4 != 0) {
    return;
  }
  piVar5 = (int *)FUN_00c14bb0();
  iVar4 = *piVar5;
  uVar6 = FUN_00e03ea0("_hvk_usui_metal");
  iVar4 = (**(code **)(iVar4 + 0x2c))(uVar6);
  if (iVar4 == 0) {
    return;
  }
  FUN_004066f0();
  uVar2 = *(uint *)(iVar4 + 0xc);
  if (uVar2 == 0) {
    if (DAT_01885d68 == 1) goto LAB_00d5bf70;
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar7 = *puVar7 | 0x400;
    puVar7[0xc] = puVar7[0xc] | 0x40000000;
    if (DAT_01885d68 == 1) goto LAB_00d5bf70;
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar5 = (int *)(iVar4 + 4);
  *piVar5 = *piVar5 + -1;
  if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_00d5bf70:
  FUN_00dd5650("force change flags. need for BUGFIX5898");
  return;
}

// 00D70550  P710::vf00  size=54  [class]
undefined4 * __thiscall P710::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

