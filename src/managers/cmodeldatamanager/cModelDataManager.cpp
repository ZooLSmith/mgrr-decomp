// src/managers/cmodeldatamanager/cModelDataManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A198D0..00A19920, 2 functions

#include "types.h"

// 00A198D0  FUN_00a198d0  size=73  [callgraph]
undefined4 __thiscall FUN_00a198d0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 <= param_2) && (param_2 < *(int *)(param_1 + 0x1c) * 0x1f0 + uVar1)) {
    FUN_00a19870(0);
    FUN_00a0cf50(param_2);
    return 1;
  }
  return 0;
}

// 00A19920  cModelDataManager::EntryModelData  size=348  [class]
int cModelDataManager::EntryModelData(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_01b7b398;
  if (DAT_01b7b4e8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b4d0);
    uVar2 = DAT_01b7b398;
  }
  while (uVar2 != 0) {
    if (*(uint *)(uVar2 + 0x1c8) == param_1) goto LAB_00a19a6c;
    if (*(uint *)(uVar2 + 0x1c8) < param_1) {
      uVar2 = *(uint *)(uVar2 + 8);
    }
    else {
      uVar2 = *(uint *)(uVar2 + 0xc);
    }
  }
  if (((DAT_0189ef28 == 0) || (iVar1 = FUN_00a0cfa0(), iVar1 == 0)) ||
     (uVar2 = FUN_00a19620(), uVar2 == 0)) {
    FUN_00dd5650(&DAT_0165cad0);
  }
  else {
    if ((uVar2 < DAT_0189ef28) || (DAT_0189ef2c * 0x1f0 + DAT_0189ef28 <= uVar2)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uVar2 - DAT_0189ef28) / 0x1f0;
    }
    iVar1 = FUN_00a163b0(uVar2 + 0x10,param_1,param_2,uVar3,&DAT_01b7c1c0);
    if (iVar1 != 0) {
      *(uint *)(uVar2 + 0x1c8) = param_1;
      if (DAT_01b7b394 != 0) {
        *(uint *)(DAT_01b7b394 + 0x1cc) = uVar2;
      }
      *(undefined4 *)(uVar2 + 0x1cc) = 0;
      *(uint *)(uVar2 + 0x1d0) = DAT_01b7b394;
      DAT_01b7b390 = DAT_01b7b390 + 1;
      DAT_01b7b394 = uVar2;
      FUN_00a14200(&DAT_01b7b398,uVar2,&LAB_00a0c790);
LAB_00a19a6c:
      if (DAT_01b7b4e8 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b4d0);
      }
      return uVar2 + 0x10;
    }
    FUN_00dd5650(&DAT_0165ca88);
    FUN_00a198d0(uVar2);
  }
  if (DAT_01b7b4e8 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b4d0);
  }
  return 0;
}

