// src/unsorted/unit_00CF66D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF66D0..00CF68C0, 2 functions

#include "types.h"

// 00CF66D0  FUN_00cf66d0  size=486  [run]
void __thiscall FUN_00cf66d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x10) = param_2;
  if (((param_2 != 4) && (param_2 != 1)) && (param_2 != 9)) {
    FUN_004b7c50(0x100,&DAT_01b7bd48);
    FUN_00c21530(0x100);
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 != *(int *)(param_1 + 0x28) * 0x70 + iVar3) {
      do {
        FUN_00c14f90();
        iVar3 = iVar3 + 0x70;
      } while (iVar3 != *(int *)(param_1 + 0x28) * 0x70 + *(int *)(param_1 + 0x20));
    }
    FUN_00c21b90(10,&DAT_01b7bd48);
    FUN_00cddce0(10);
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 != *(int *)(param_1 + 0x3c) * 0x30 + iVar3) {
      puVar2 = (undefined4 *)(iVar3 + 0x18);
      do {
        puVar2[-5] = 0xffffffff;
        puVar2[-4] = 0xffffffff;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        iVar3 = iVar3 + 0x30;
        *puVar2 = 0;
        puVar2[1] = 0x3f800000;
        puVar2[3] = 0;
        puVar2[2] = 0x3f800000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2 = puVar2 + 0xc;
      } while (iVar3 != *(int *)(param_1 + 0x3c) * 0x30 + *(int *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar3 = FUN_00dd29b0(0x280,0x20,0,0);
      *(int *)(param_1 + 0x48) = iVar3;
      if (iVar3 == 0) {
        uVar1 = (**(code **)(DAT_01b7bd48 + 0x18))();
        uVar1 = FUN_00dd2960(0x280,uVar1);
        FUN_00dd5650(&DAT_0163cadc,uVar1);
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 10;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x54) = 1;
      }
    }
    FUN_00cddd70(10);
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 != *(int *)(param_1 + 0x50) * 0x40 + iVar3) {
      puVar2 = (undefined4 *)(iVar3 + 0x18);
      do {
        puVar2[-5] = 0xffffffff;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        iVar3 = iVar3 + 0x40;
        *puVar2 = 0;
        puVar2[1] = 0x3f800000;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0x3f800000;
        puVar2[6] = 1;
        puVar2 = puVar2 + 0x10;
      } while (iVar3 != *(int *)(param_1 + 0x50) * 0x40 + *(int *)(param_1 + 0x48));
    }
    FUN_00987d80();
    FUN_00987e20();
    FUN_00987ec0();
    FUN_00987290();
    FUN_00c1cf50();
    FUN_00c54210();
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}

// 00CF68C0  FUN_00cf68c0  size=554  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00cf68c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if ((((*(int *)(param_1 + 0x14) != 0) && (iVar4 = *(int *)(param_1 + 0x10), iVar4 != 4)) &&
      (iVar4 != 1)) && ((iVar4 != 9 && (iVar4 != 0)))) {
    _DAT_01dc2d74 = 0;
    FUN_00cc7380();
    FUN_00c4e820(param_1 + 0x1c);
    if (0 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x20);
      for (iVar4 = *(int *)(param_1 + 0x20); iVar4 != iVar1 * 0x70 + iVar5; iVar4 = iVar4 + 0x70) {
        iVar2 = FUN_00a81330();
        if (((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 2) == 0)) &&
           ((*(int *)(iVar2 + 0x50) == 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)))) {
          FUN_00cad3e0(iVar2);
          FUN_00cd3050(iVar4);
          FUN_00cd35e0(iVar2);
          FUN_00cd3bf0(iVar2);
          FUN_00cd3e00(iVar2);
          FUN_00cd37c0(iVar2);
          FUN_00cd3a70(iVar2);
          FUN_00cd4720(iVar2);
        }
      }
    }
    if ((*(int *)(param_1 + 0x98) != 0) && (iVar4 = FUN_00b796f0(), iVar4 != 0)) {
      FUN_00cbf6e0(iVar4);
    }
    FUN_00c52500(param_1 + 0x30);
    if (0 < *(int *)(param_1 + 0x3c)) {
      iVar4 = *(int *)(param_1 + 0x3c);
      iVar1 = *(int *)(param_1 + 0x34);
      for (iVar5 = *(int *)(param_1 + 0x34); iVar5 != iVar4 * 0x30 + iVar1; iVar5 = iVar5 + 0x30) {
        FUN_00cda6c0(iVar5);
      }
    }
    FUN_00c525a0(param_1 + 0x44);
    if (0 < *(int *)(param_1 + 0x50)) {
      iVar4 = *(int *)(param_1 + 0x50);
      iVar1 = *(int *)(param_1 + 0x48);
      for (iVar5 = *(int *)(param_1 + 0x48); iVar5 != iVar4 * 0x40 + iVar1; iVar5 = iVar5 + 0x40) {
        FUN_00cbf4a0(iVar5);
      }
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      if (((DAT_01dc08d0 == 0) && (DAT_01dc08b8 == 0)) && (DAT_01dc08c4 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      FUN_00cad2f0(uVar6);
    }
    FUN_00987150();
    FUN_00983d50();
    FUN_009869b0();
    FUN_00c1cf50();
    FUN_00c46690();
    FUN_009875e0();
    if (DAT_01dc1364 != (int *)0x0) {
      (**(code **)(*DAT_01dc1364 + 4))();
    }
    if (((((DAT_01dc2d6c == 0) || (DAT_01dc2d70 != 0)) &&
         ((DAT_01dc0e18 == 0 && ((DAT_01dc1348 == 0 && (DAT_01dc13f4 == 0)))))) &&
        (DAT_01dc087c == 0)) && (DAT_01dc1304 == 0)) {
      DAT_01dc2d6c = 1;
      DAT_01dc2d70 = 0;
    }
  }
  return;
}

