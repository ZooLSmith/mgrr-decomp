// src/collision/BattleCollisionFilterImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D7B760..00D7B7B0, 2 functions

#include "mgrr.h"
#include "BattleCollisionFilterImplement.h"

// 00D7B760  BattleCollisionFilterImplement::vf04  size=59  [class]
undefined4 * __thiscall BattleCollisionFilterImplement::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  *param_1 = BattleCollisionFilter::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7B7B0  BattleCollisionFilterImplement::vf00  size=72  [class]
undefined4 __thiscall BattleCollisionFilterImplement::vf00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 2) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 2;
    do {
      if (((param_2 == 0) || (param_2 == *piVar3)) && ((param_3 == 0 || (param_3 == piVar3[1])))) {
        return 1;
      }
      piVar3 = piVar3 + 2;
    } while (piVar3 != piVar1);
  }
  return 0;
}

