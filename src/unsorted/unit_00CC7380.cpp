// src/unsorted/unit_00CC7380.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC7380..00CC7380, 1 functions

#include "mgrr.h"

// 00CC7380  FUN_00cc7380  size=339  [run]
void __fastcall FUN_00cc7380(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  
  uVar4 = DAT_01bea094;
  puVar6 = (undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *puVar6 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  uVar4 = uVar4 >> 0x11 & 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (uVar4 != 0) {
    piVar1 = (int *)FUN_00c13920();
  }
  else {
    piVar1 = (int *)FUN_00c13920();
  }
  iVar2 = (**(code **)(*piVar1 + 0x28))(uVar4 != 0);
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    iVar2 = FUN_00a81330();
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      if (*(int *)(param_1 + 0x58) != 0) {
        if (uVar4 != 0) {
          iVar2 = 0xd;
          do {
            uVar3 = FUN_00a12210(0);
            *puVar6 = uVar3;
            puVar6 = puVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return;
        }
        iVar2 = FUN_00d467a0();
        if (iVar2 == 0) {
          puVar5 = &DAT_018b2f64;
          do {
            uVar3 = FUN_00a12210(*puVar5);
            *puVar6 = uVar3;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while ((int)puVar5 < 0x18b2f98);
        }
        else {
          puVar5 = &DAT_016b556c;
          do {
            uVar3 = FUN_00a12210(*puVar5);
            *puVar6 = uVar3;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while ((int)puVar5 < 0x16b55a0);
        }
        piVar1 = *(int **)(param_1 + 0x60);
        if (piVar1 == (int *)0x0) {
          *(undefined4 *)(param_1 + 0x98) = 0;
          return;
        }
        puVar7 = &DAT_01be9db8;
        (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d80(puVar7);
        *(uint *)(param_1 + 0x98) = -(uint)(iVar2 != 0) & (uint)piVar1;
      }
    }
  }
  return;
}

