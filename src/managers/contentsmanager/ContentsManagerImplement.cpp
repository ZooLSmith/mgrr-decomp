// src/managers/contentsmanager/ContentsManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DF6D0..008DF870, 5 functions

#include "mgrr.h"
#include "ContentsManagerImplement.h"

// 008DF6D0  ContentsManagerImplement::vf10  size=44  [class]
undefined4 __fastcall ContentsManagerImplement::vf10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return uVar1;
}

// 008DF700  ContentsManagerImplement::vf04  size=51  [class]
void __fastcall ContentsManagerImplement::vf04(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 4);
  if (puVar1 != puVar1 + *(int *)(*(int *)(param_1 + 0x2c) + 8)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0xc))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x2c) + 4) +
                       *(int *)(*(int *)(param_1 + 0x2c) + 8) * 4));
  }
  return;
}

// 008DF740  ContentsManagerImplement::vf08  size=64  [class]
void __thiscall ContentsManagerImplement::vf08(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  (**(code **)(*param_2 + 8))();
  (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 008DF800  ContentsManagerImplement::vf00  size=30  [class]
undefined4 __thiscall ContentsManagerImplement::vf00(undefined4 param_1,byte param_2)

{
  ContentsManager::ContentsManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DF870  ContentsManagerImplement::vf0C  size=179  [class]
void __thiscall ContentsManagerImplement::vf0C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  piVar6 = *(int **)(iVar2 + 4);
  if (piVar6 != piVar6 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar6 + *(int *)(iVar2 + 8);
    do {
      piVar3 = (int *)*piVar6;
      if (piVar3[2] == param_2) {
        (**(code **)(*piVar3 + 0x10))();
        iVar2 = *(int *)(param_1 + 0x2c);
        uVar4 = *(uint *)(iVar2 + 8);
        iVar5 = *(int *)(iVar2 + 4);
        piVar1 = (int *)(iVar5 + uVar4 * 4);
        if ((((piVar6 != piVar1) && (iVar5 != 0)) && (uVar4 != 0)) &&
           ((uint)((int)piVar6 - iVar5 >> 2) < uVar4)) {
          for (; piVar6 != piVar1 + -1; piVar6 = piVar6 + 1) {
            *piVar6 = piVar6[1];
          }
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
        }
        (**(code **)(*piVar3 + 4))(1);
        break;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

