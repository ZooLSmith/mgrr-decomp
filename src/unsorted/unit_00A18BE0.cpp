// src/unsorted/unit_00A18BE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A18BE0..00A18E90, 6 functions

#include "mgrr.h"

// 00A18BE0  FUN_00a18be0  size=70  [run]
void __thiscall FUN_00a18be0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00dd72c0();
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0xb0)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xb4) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = param_2;
      }
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    }
    FUN_00dd7300();
  }
  return;
}

// 00A18C30  FUN_00a18c30  size=180  [run]
void __thiscall FUN_00a18c30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00dd72c0();
    piVar2 = *(int **)(param_1 + 0xac);
    if (piVar2 != piVar2 + *(int *)(param_1 + 0xb4)) {
      do {
        if (param_2 == *piVar2) {
          iVar1 = (int)piVar2 - *(int *)(param_1 + 0xac) >> 2;
          iVar3 = iVar1;
          if (iVar1 < *(int *)(param_1 + 0xb4) + -1) {
            do {
              *(undefined4 *)(*(int *)(param_1 + 0xac) + iVar3 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0xac) + 4 + iVar3 * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0xb4) + -1);
          }
          *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
          piVar2 = (int *)(*(int *)(param_1 + 0xac) + iVar1 * 4);
        }
        else {
          piVar2 = piVar2 + 1;
        }
      } while (piVar2 != (int *)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xb4) * 4));
    }
    FUN_00dd7300();
  }
  return;
}

// 00A18CF0  FUN_00a18cf0  size=115  [run]
undefined4 __thiscall FUN_00a18cf0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0;
  }
  FUN_00dd72c0();
  piVar3 = *(int **)(param_1 + 0xac);
  if (piVar3 != piVar3 + *(int *)(param_1 + 0xb4)) {
    piVar1 = piVar3 + *(int *)(param_1 + 0xb4);
    do {
      if (*(int *)(*piVar3 + 0x4ec) == param_2) {
        uVar2 = *(undefined4 *)(*piVar3 + 0x4f0);
        FUN_00dd7300();
        return uVar2;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  FUN_00dd7300();
  return 0;
}

// 00A18D70  FUN_00a18d70  size=125  [run]
undefined4 __thiscall FUN_00a18d70(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0;
  }
  FUN_00dd72c0();
  piVar4 = *(int **)(param_1 + 0xac);
  if (piVar4 != piVar4 + *(int *)(param_1 + 0xb4)) {
    piVar1 = piVar4 + *(int *)(param_1 + 0xb4);
    do {
      iVar2 = *piVar4;
      if ((*(int *)(iVar2 + 0x4ec) == param_2) && (*(int *)(iVar2 + 0x4b0) == param_3)) {
        uVar3 = *(undefined4 *)(iVar2 + 0x4f0);
        FUN_00dd7300();
        return uVar3;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
  }
  FUN_00dd7300();
  return 0;
}

// 00A18DF0  FUN_00a18df0  size=147  [run]
void __thiscall FUN_00a18df0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00dd72c0();
    piVar2 = *(int **)(param_1 + 0xac);
    if (piVar2 != piVar2 + *(int *)(param_1 + 0xb4)) {
      do {
        if (*(int *)(*piVar2 + 0x4ec) == param_3) {
          if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0xc)) break;
          puVar1 = (undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *(undefined4 *)(*piVar2 + 0x4f0);
          }
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != (int *)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xb4) * 4));
    }
    FUN_00dd7300();
  }
  return;
}

// 00A18E90  FUN_00a18e90  size=159  [run]
void __thiscall FUN_00a18e90(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00dd72c0();
    piVar3 = *(int **)(param_1 + 0xac);
    if (piVar3 != piVar3 + *(int *)(param_1 + 0xb4)) {
      do {
        iVar2 = *piVar3;
        if ((*(int *)(iVar2 + 0x4ec) == param_3) && (*(int *)(iVar2 + 0x4b0) == param_4)) {
          if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0xc)) break;
          puVar1 = (undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *(undefined4 *)(iVar2 + 0x4f0);
          }
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != (int *)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xb4) * 4));
    }
    FUN_00dd7300();
  }
  return;
}

