// src/managers/battleparametermanager/BattleParameterManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D731A0..00D76190, 4 functions

#include "mgrr.h"
#include "BattleParameterManagerImplement.h"

// 00D731A0  BattleParameterManagerImplement::vf08  size=98  [class]
void __thiscall BattleParameterManagerImplement::vf08(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 0x28);
  puVar4 = *(undefined4 **)(iVar2 + 4);
  if (puVar4 != puVar4 + *(int *)(iVar2 + 8)) {
    puVar1 = puVar4 + *(int *)(iVar2 + 8);
    do {
      piVar3 = (int *)*puVar4;
      if (piVar3[2] == param_2) {
        *piVar3 = *piVar3 + -1;
        if (*piVar3 < 1) {
          piVar3[1] = 1;
        }
        break;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00D73210  FUN_00d73210  size=118  [callgraph]
void __fastcall FUN_00d73210(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00dd7270();
  piVar2 = *(int **)(*(int *)(param_1 + 0x28) + 4);
  if (piVar2 != piVar2 + *(int *)(*(int *)(param_1 + 0x28) + 8)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0xc) + 0x98))(1);
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
        FUN_00dd4920(iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 0x28) + 4) +
                              *(int *)(*(int *)(param_1 + 0x28) + 8) * 4));
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

// 00D73D00  BattleParameterManagerImplement::thunk_vf00  size=5  [class]
void __fastcall BattleParameterManagerImplement::thunk_vf00(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x28) + 4);
  if (piVar5 != piVar5 + *(int *)(*(int *)(param_1 + 0x28) + 8)) {
    do {
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 4) == 0) {
        piVar6 = piVar5 + 1;
      }
      else {
        if (iVar1 != 0) {
          if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
            (**(code **)(**(int **)(iVar1 + 0xc) + 0x98))(1);
            *(undefined4 *)(iVar1 + 0xc) = 0;
          }
          FUN_00dd4920(iVar1);
        }
        iVar1 = *(int *)(param_1 + 0x28);
        uVar2 = *(uint *)(iVar1 + 8);
        iVar3 = *(int *)(iVar1 + 4);
        piVar6 = (int *)(iVar3 + uVar2 * 4);
        if ((((piVar5 != piVar6) && (iVar3 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)piVar5 - iVar3 >> 2) < uVar2)) {
          for (piVar4 = piVar5; piVar4 != piVar6 + -1; piVar4 = piVar4 + 1) {
            *piVar4 = piVar4[1];
          }
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
          piVar6 = piVar5;
        }
      }
      piVar5 = piVar6;
    } while (piVar6 != (int *)(*(int *)(*(int *)(param_1 + 0x28) + 4) +
                              *(int *)(*(int *)(param_1 + 0x28) + 8) * 4));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00D76190  BattleParameterManagerImplement::vf0C  size=50  [class]
undefined4 * __thiscall BattleParameterManagerImplement::vf0C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00d73210();
  FUN_00dd7270();
  *param_1 = BattleParameterManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

