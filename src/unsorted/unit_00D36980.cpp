// src/unsorted/unit_00D36980.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D36980..00D369E0, 2 functions

#include "mgrr.h"

// 00D36980  FUN_00d36980  size=82  [run]
int FUN_00d36980(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x73c,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCustomObjCtrlManager::cCustomObjCtrlManager_15();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cChapterResult";
      *(undefined4 *)(iVar1 + 8) = 10;
      uVar2 = FUN_00d29960(0x80);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 00D369E0  FUN_00d369e0  size=258  [run]
int __thiscall FUN_00d369e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
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
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  local_c = 0;
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
  local_14 = 0;
  uVar1 = *(uint *)(param_1 + 0x614 + param_2 * 4);
  local_8 = 0xffffffff;
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 0x80) <= uVar1) ||
        (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar3 == (int *)0x0))
       || (iVar2 = (**(code **)(*piVar3 + 8))(), iVar2 != 3)) {
      piVar3 = (int *)0x0;
    }
    FUN_00d1fa60(piVar3,&local_54);
  }
  uVar1 = *(uint *)(param_1 + 0x614 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) {
    return uVar1 * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c);
  }
  return 0;
}

