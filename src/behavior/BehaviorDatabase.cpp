// src/behavior/BehaviorDatabase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8B020..00AC1E10, 2 functions

#include "types.h"

// 00A8B020  BehaviorDatabase::vf14  size=31  [class]
undefined4 * __thiscall BehaviorDatabase::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC1E10  BehaviorDatabase::BehaviorDatabase  size=176  [class]
void __fastcall BehaviorDatabase::BehaviorDatabase(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = BehaviorDatabaseImplement::vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  piVar2 = *(int **)(param_1[2] + 4);
  if (piVar2 != piVar2 + *(int *)(param_1[2] + 8)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x130) != 0) {
          FUN_00dd4920(*(int *)(iVar1 + 0x130));
          *(undefined4 *)(iVar1 + 0x130) = 0;
        }
        FUN_00dd7270();
        FUN_00dd7270();
        FUN_00dd4920(iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1[2] + 4) + *(int *)(param_1[2] + 8) * 4));
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}

