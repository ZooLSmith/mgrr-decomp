// src/unsorted/unit_00CD1270.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD1270..00CD128C, 2 functions

#include "mgrr.h"

// 00CD1270  FUN_00cd1270  size=28  [run]
undefined4 FUN_00cd1270(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar1 = FUN_00986a80(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00985e00(param_1);
  bVar4 = 0;
  param_1 = param_1 & 0xffffff00;
  do {
    uVar3 = FUN_00a82090("BodyModel",uVar2,0);
    FUN_00a7c970(uVar3);
    FUN_00a81330();
    FUN_00a7c800();
    FUN_00a0bba0(param_1);
    FUN_00a81330();
    iVar1 = FUN_00a7c890();
    if (iVar1 != 0) {
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0;
      uVar3 = 0;
      if (bVar4 == 0) {
        puVar5 = &DAT_01641bdc;
      }
      else {
        puVar5 = &DAT_01641bcc;
      }
      FUN_00a81330(puVar5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a7c890();
      FUN_00e3ff90(puVar5,uVar3,uVar7,uVar8,uVar9,uVar10,uVar11);
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0x40200;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar3 = 1;
      puVar6 = &DAT_016b7cac;
      FUN_00a81330(&DAT_016b7cac,1,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
      FUN_00a7c890();
      FUN_00e3ff90(puVar6,uVar3,uVar7,uVar8,uVar9,uVar10,uVar11);
      FUN_00a81330();
      iVar1 = FUN_00a7c890();
      *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
    }
    bVar4 = bVar4 + 1;
    param_1 = CONCAT31(param_1._1_3_,bVar4);
  } while (bVar4 < 2);
  return 1;
}

// 00CD128C  FUN_00cd128c  size=291  [run]
undefined4 FUN_00cd128c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 unaff_ESI;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = FUN_00985e00(unaff_ESI);
  bVar4 = 0;
  param_3 = param_3 & 0xffffff00;
  do {
    uVar2 = FUN_00a82090("BodyModel",uVar1,0);
    FUN_00a7c970(uVar2);
    FUN_00a81330();
    FUN_00a7c800();
    FUN_00a0bba0(param_3);
    FUN_00a81330();
    iVar3 = FUN_00a7c890();
    if (iVar3 != 0) {
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0x3f800000;
      uVar7 = 0;
      uVar2 = 0;
      if (bVar4 == 0) {
        puVar5 = &DAT_01641bdc;
      }
      else {
        puVar5 = &DAT_01641bcc;
      }
      FUN_00a81330(puVar5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a7c890();
      FUN_00e3ff90(puVar5,uVar2,uVar7,uVar8,uVar9,uVar10,uVar11);
      uVar11 = 0x3f800000;
      uVar10 = 0xbf800000;
      uVar9 = 0x40200;
      uVar8 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar2 = 1;
      puVar6 = &DAT_016b7cac;
      FUN_00a81330(&DAT_016b7cac,1,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
      FUN_00a7c890();
      FUN_00e3ff90(puVar6,uVar2,uVar7,uVar8,uVar9,uVar10,uVar11);
      FUN_00a81330();
      iVar3 = FUN_00a7c890();
      *(uint *)(iVar3 + 0x94) = *(uint *)(iVar3 + 0x94) | 2;
    }
    bVar4 = bVar4 + 1;
    param_3 = CONCAT31(param_3._1_3_,bVar4);
  } while (bVar4 < 2);
  return 1;
}

