// src/phase/app/p340.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D485E0..00D70340, 7 functions

#include "types.h"

// 00D485E0  P340::vf1C  size=3  [class]
void P340::vf1C(void)

{
  return;
}

// 00D485F0  P340::vf18  size=296  [class]
void __fastcall P340::vf18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((byte)DAT_01bea090 & 0x40) != 0) {
    FUN_00c81e40(0x39);
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar1 = FUN_00c1bd80();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x11c) == 1) {
        FUN_00a33520(1,0x300,1);
        *(undefined4 *)(param_1 + 0x11c) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x11c) == 0) {
      FUN_00a33520(0,0x300,1);
      *(undefined4 *)(param_1 + 0x11c) = 1;
    }
    iVar1 = FUN_00e03ea0(&DAT_0166187c);
    if (DAT_018b9178 == iVar1) {
      if (*(int *)(param_1 + 0x124) == 0) {
        iVar1 = FUN_00a7f600(0xf0d0a);
        if (iVar1 != 0) {
          uVar2 = FUN_00a7c8a0();
          *(undefined4 *)(param_1 + 0x124) = uVar2;
        }
      }
      if (*(int *)(param_1 + 0x124) != 0) {
        iVar1 = FUN_00a92f90();
        if (iVar1 != 0) {
          iVar1 = FUN_0085be10(0);
          if (iVar1 != 0) {
            FUN_00a33520(0,0x300,1);
            FUN_00a33520(0,0x300,0x11);
            FUN_00a33520(1,0x300,4);
            *(undefined4 *)(param_1 + 0x120) = 1;
          }
        }
      }
    }
  }
  return;
}

// 00D48720  P340::vf08  size=31  [class]
void __fastcall P340::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  DAT_01bea084 = DAT_01bea084 | 0x20000;
  return;
}

// 00D48740  P340::vf10  size=112  [class]
void __fastcall P340::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  DAT_01bea084 = DAT_01bea084 & 0xfffdffff;
  FUN_00a33520(0,0x300,1);
  FUN_00a33520(0,0x300,0x11);
  FUN_00a33520(1,0x300,4);
  *(undefined4 *)(param_1 + 0x120) = 1;
  return;
}

// 00D487B0  P340::vf0C  size=1  [class]
void P340::vf0C(void)

{
  return;
}

// 00D530B0  P340::vf14  size=220  [class]
void P340::vf14(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  
  pcVar4 = "P340_START";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d530e0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d530e5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d530e0;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d530e5:
  if (iVar3 == 0) {
    FUN_00a33520(1,0x300,1);
  }
  pbVar5 = &DAT_016bd010;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d53123:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d53128;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d53123;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d53128:
  if (iVar3 == 0) {
    FUN_00c81e90(0x39);
    FUN_00cad250(0);
    DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
  }
  pbVar2 = &DAT_0166187c;
  do {
    bVar1 = *param_2;
    bVar6 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_00d53176:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d5317b;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar6 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_00d53176;
    param_2 = param_2 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d5317b:
  if (iVar3 == 0) {
    DAT_01bea084 = DAT_01bea084 & 0xfffdffff;
  }
  return;
}

// 00D70340  P340::vf00  size=54  [class]
undefined4 * __thiscall P340::vf00(undefined4 *param_1,byte param_2)

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

