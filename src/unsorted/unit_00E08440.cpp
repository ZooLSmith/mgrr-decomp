// src/unsorted/unit_00E08440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E08440..00E08600, 3 functions

#include "mgrr.h"

// 00E08440  FUN_00e08440  size=127  [run]
void __thiscall FUN_00e08440(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  iVar3 = FUN_00e13c00();
  if (iVar3 != 0) {
    do {
      cVar2 = FUN_00e057c0(param_2,param_3,param_3,uVar7);
      if (cVar2 != '\0') {
        puVar6 = (undefined1 *)(*(int *)(param_1 + 4) + uVar7);
        puVar4 = puVar6 + param_3;
        if (puVar6 != puVar4) {
          puVar1 = *(undefined1 **)(param_1 + 8);
          for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            *puVar6 = *puVar4;
            puVar6 = puVar6 + 1;
          }
          *(undefined1 **)(param_1 + 8) = puVar6;
        }
        FUN_00e173a0(*(int *)(param_1 + 4) + uVar7,param_4,param_4 + param_5);
        uVar7 = (uVar7 - 1) + param_5;
      }
      uVar7 = uVar7 + 1;
      uVar5 = FUN_00e13c00();
    } while (uVar7 < uVar5);
  }
  return;
}

// 00E085E0  FUN_00e085e0  size=27  [run]
void __fastcall FUN_00e085e0(int *param_1)

{
  if (*param_1 != 0) {
    InterlockedDecrement((LONG *)(*param_1 + 8));
    *param_1 = 0;
  }
  return;
}

// 00E08600  FUN_00e08600  size=56  [run]
int * __thiscall FUN_00e08600(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    if (*param_1 != 0) {
      InterlockedDecrement((LONG *)(*param_1 + 8));
      *param_1 = 0;
    }
    iVar1 = *param_2;
    *param_1 = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  return param_1;
}

