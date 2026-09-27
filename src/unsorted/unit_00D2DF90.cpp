// src/unsorted/unit_00D2DF90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D2DF90..00D2DFE0, 2 functions

#include "mgrr.h"

// 00D2DF90  FUN_00d2df90  size=72  [run]
int FUN_00d2df90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x110,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cEnemyEnergyGaugeParts::cEnemyEnergyGaugeParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cEnemyEnergyGaugeParts";
      *(undefined4 *)(iVar1 + 8) = 9;
      uVar2 = FUN_00d29960(0x14);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D2DFE0  FUN_00d2dfe0  size=154  [run]
void __fastcall FUN_00d2dfe0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_01dc08ec == 0) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    uVar3 = FUN_00d2df90();
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  uVar2 = DAT_01dc08e0;
  uVar3 = DAT_018b4414;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xd0) = DAT_01dc08dc;
    *(undefined4 *)(iVar1 + 200) = uVar3;
    *(undefined4 *)(iVar1 + 0xd4) = uVar2;
    uVar3 = DAT_01dc08e8;
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0xd8) = DAT_01dc08e4;
    *(undefined4 *)(iVar1 + 0xdc) = uVar3;
    *(undefined4 *)(iVar1 + 0xe0) = 1;
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  DAT_01dc08ec = 0;
  return;
}

