// src/unsorted/unit_00D33AF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D33AF0..00D33C50, 3 functions

#include "types.h"

// 00D33AF0  FUN_00d33af0  size=268  [run]
void __fastcall FUN_00d33af0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    iVar2 = FUN_00cac360(1);
    if (iVar2 == 0) goto LAB_00d33b97;
    iVar2 = FUN_009c5690();
    if (iVar2 == 0) goto LAB_00d33b97;
    iVar2 = FUN_009c56a0();
    if (iVar2 == 0) goto LAB_00d33b97;
    if (*(int *)(param_1 + 8) == 0) {
      uVar3 = cSavingDispParts::cSavingDispParts();
      *(undefined4 *)(param_1 + 8) = uVar3;
    }
  }
  else {
    if (iVar2 != 1) {
      if ((iVar2 == 2) &&
         (puVar1 = *(undefined4 **)(param_1 + 8), puVar1[10] == 0 && puVar1[0xb] == 0)) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(undefined4 *)(param_1 + 4) = 0;
      }
      goto LAB_00d33b97;
    }
    iVar2 = FUN_009c5690();
    if (iVar2 != 0) {
      iVar2 = FUN_009c56a0();
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar2 + 0x2c) = 1;
        *(undefined4 *)(iVar2 + 0x30) = 1;
        goto LAB_00d33b97;
      }
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
LAB_00d33b97:
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = cCheckPointDispParts::cCheckPointDispParts();
      *(undefined4 *)(param_1 + 0xc) = uVar3;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 1;
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    if ((puVar1[9] == 0 && puVar1[10] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d33bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    return;
  }
  return;
}

// 00D33C00  FUN_00d33c00  size=72  [run]
int FUN_00d33c00(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xa0,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cSentryGunSiteParts::cSentryGunSiteParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cSentryGunSiteParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0x42);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D33C50  FUN_00d33c50  size=173  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d33c50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (DAT_01dc131c != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar5 = FUN_00d33c00();
      *(undefined4 *)(param_1 + 4) = uVar5;
      _DAT_01dc1320 = 1;
    }
    uVar4 = _DAT_01dc4ecc;
    uVar3 = _DAT_01dc4ec8;
    uVar5 = _DAT_01dc4ec4;
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x50) = _DAT_01dc4ec0;
    *(undefined4 *)(iVar1 + 0x54) = uVar5;
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
    *(undefined4 *)(iVar1 + 0x5c) = uVar4;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    FUN_00cbf180(_DAT_01dc1324,_DAT_01dc1328);
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2[0x10] == 2) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      _DAT_01dc1320 = 0;
    }
  }
  DAT_01dc131c = 0;
  return;
}

