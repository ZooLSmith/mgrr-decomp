// src/unsorted/unit_00D5D0C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D5D0C0..00D5D150, 2 functions

#include "types.h"

// 00D5D0C0  FUN_00d5d0c0  size=134  [run]
void __fastcall FUN_00d5d0c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != puVar2 + *(int *)(param_1 + 8)) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      if (puVar1 != (undefined4 *)0x0) {
        if (puVar1[0x10] != 0) {
          FUN_00a805f0();
        }
        *(undefined1 *)((int)puVar1 + 0xe) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[0x10] = 0;
        FUN_00dd4920(puVar1);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  }
  FUN_00dd7270();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00D5D150  FUN_00d5d150  size=230  [run]
void __thiscall FUN_00d5d150(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (puVar5 != puVar5 + *(int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*puVar5;
      if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
        *(undefined1 *)((int)piVar2 + 0xe) = 0;
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[0x10] = 0;
        FUN_00dd4920(piVar2);
        uVar3 = *(uint *)(param_1 + 8);
        iVar4 = *(int *)(param_1 + 4);
        puVar1 = (undefined4 *)(iVar4 + uVar3 * 4);
        if ((((puVar5 != puVar1) && (iVar4 != 0)) && (uVar3 != 0)) &&
           ((uint)((int)puVar5 - iVar4 >> 2) < uVar3)) {
          for (; puVar5 != puVar1 + -1; puVar5 = puVar5 + 1) {
            *puVar5 = puVar5[1];
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        iVar4 = FUN_00c81c60(0xb);
        if (iVar4 == 1) {
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
        }
        break;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  }
  return;
}

