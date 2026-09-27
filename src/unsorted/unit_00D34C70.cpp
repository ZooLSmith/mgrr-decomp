// src/unsorted/unit_00D34C70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D34C70..00D34D50, 2 functions

#include "mgrr.h"

// 00D34C70  FUN_00d34c70  size=218  [run]
int __thiscall FUN_00d34c70(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
      piVar2 = (int *)0x0;
    }
    FUN_00d1fa60(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00D34D50  FUN_00d34d50  size=230  [run]
void __fastcall FUN_00d34d50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (DAT_01dc134c != 0) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
      DAT_01dc1348 = 0;
    }
    if (*(int *)(param_1 + 4) == 0) {
      if ((DAT_01bea094 & 0x20000) == 0) {
        uVar3 = FUN_00d34740();
        *(undefined4 *)(param_1 + 4) = uVar3;
      }
      else {
        DAT_01dc1348 = 0;
      }
      DAT_01dc134c = 0;
    }
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if ((DAT_01bea094 & 0x40000) == 0) {
      (**(code **)(**(int **)(param_1 + 4) + 4))();
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xe0);
      if ((iVar1 == 0x13) || (DAT_01dc1350 = 1, iVar1 == 0)) {
        DAT_01dc1350 = 0;
      }
      DAT_01dc1354 = (uint)(*(int *)(*(int *)(param_1 + 4) + 0xe0) < 0xb);
      if ((DAT_01dc1348 != 0) && (DAT_01dc1354 == 0)) {
        DAT_01dc1348 = 0;
      }
    }
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2[0x38] == 0x13) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      DAT_01dc1348 = 0;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    DAT_01dc1350 = 0;
    DAT_01dc1354 = 0;
  }
  return;
}

