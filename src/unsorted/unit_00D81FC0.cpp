// src/unsorted/unit_00D81FC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D81FC0..00D820B0, 3 functions

#include "types.h"

// 00D81FC0  FUN_00d81fc0  size=154  [run]
void __fastcall FUN_00d81fc0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x40;
  piVar1 = param_1;
  do {
    (**(code **)(*piVar1 + 4))();
    piVar1 = piVar1 + 0x30;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = param_1[0xc00];
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4) + -1;
    if (-1 < iVar4) {
      puVar2 = (undefined4 *)(iVar3 + *(int *)(iVar3 + -4) * 0x18 + 8);
      do {
        if (puVar2[-6] != 0) {
          puVar2[-4] = 0;
          if (puVar2[-3] != 0) {
            FUN_00dd48d0(puVar2[-6],0);
            puVar2[-3] = 0;
          }
          puVar2[-6] = 0;
          puVar2[-5] = 0;
        }
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + -6;
      } while (-1 < iVar4);
    }
    FUN_00dd4940(iVar3 + -4);
    param_1[0xc00] = 0;
    *(undefined2 *)(param_1 + 0xc01) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0xc01) = 0;
  return;
}

// 00D82060  FUN_00d82060  size=68  [run]
void __fastcall FUN_00d82060(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      FUN_00dd4940(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3);
    }
    *param_1 = 0;
  }
  FUN_00d81fc0();
  *(undefined2 *)(param_1 + 0xc08) = 0;
  param_1[0xc09] = 0;
  return;
}

// 00D820B0  FUN_00d820b0  size=221  [run]
void FUN_00d820b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = DAT_01dc538c;
  if (DAT_01dc538c != DAT_01dc538c + DAT_01dc5394) {
    while (piVar1 = (int *)*piVar4, piVar1[0xc09] != param_1) {
      piVar4 = piVar4 + 1;
      if (piVar4 == DAT_01dc538c + DAT_01dc5394) {
        return;
      }
    }
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-1] == 0) {
        FUN_00dd4940(puVar2 + -1);
      }
      else {
        (**(code **)*puVar2)(3);
      }
      *piVar1 = 0;
    }
    FUN_00d81fc0();
    *(undefined2 *)(piVar1 + 0xc08) = 0;
    piVar1[0xc09] = 0;
    iVar5 = *piVar4;
    if (iVar5 != 0) {
      iVar3 = 0x3f;
      do {
        cEspControler::~cEspControler();
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      FUN_00dd4920(iVar5);
    }
    *piVar4 = 0;
    iVar5 = (int)piVar4 - (int)DAT_01dc538c >> 2;
    if (iVar5 < DAT_01dc5394 + -1) {
      do {
        DAT_01dc538c[iVar5] = DAT_01dc538c[iVar5 + 1];
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_01dc5394 + -1);
    }
    DAT_01dc5394 = DAT_01dc5394 + -1;
  }
  return;
}

