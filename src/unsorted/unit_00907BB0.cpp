// src/unsorted/unit_00907BB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00907BB0..00907D90, 4 functions

#include "mgrr.h"

// 00907BB0  FUN_00907bb0  size=238  [run]
void __fastcall FUN_00907bb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_4;
  
  piVar6 = *(int **)(param_1 + 0x6c);
  if (piVar6 != piVar6 + *(int *)(param_1 + 0x74)) {
    do {
      piVar1 = (int *)*piVar6;
      if (*(char *)((int)piVar1 + 0x1a) == '\0') {
        if ((char)piVar1[2] < '\x01') {
          *(undefined1 *)((int)piVar1 + 0x17) = 0;
        }
        else {
          *(char *)(piVar1 + 2) = (char)piVar1[2] + -1;
        }
        (**(code **)(*piVar1 + 0x18))();
        piVar6 = piVar6 + 1;
      }
      else {
        piVar5 = (int *)(param_1 + 0x80);
        local_4 = 5;
        do {
          piVar4 = (int *)*piVar5;
          piVar7 = piVar4;
          if (piVar4 != piVar4 + piVar5[2]) {
            do {
              if (piVar1 == (int *)*piVar4) {
                iVar3 = (int)piVar4 - (int)piVar7 >> 2;
                piVar7[iVar3] = piVar7[piVar5[2] + -1];
                piVar7 = (int *)*piVar5;
                piVar5[2] = piVar5[2] + -1;
                piVar4 = piVar7 + iVar3;
              }
              else {
                piVar4 = piVar4 + 1;
              }
            } while (piVar4 != (int *)(*piVar5 + piVar5[2] * 4));
          }
          piVar5 = piVar5 + 5;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
        (**(code **)(*piVar1 + 4))(1);
        iVar3 = *(int *)(param_1 + 0x6c);
        iVar2 = ((int)piVar6 - iVar3 >> 2) * 4;
        *(undefined4 *)(iVar3 + iVar2) = *(undefined4 *)(iVar3 + -4 + *(int *)(param_1 + 0x74) * 4);
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        piVar6 = (int *)(*(int *)(param_1 + 0x6c) + iVar2);
      }
    } while (piVar6 != (int *)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x74) * 4));
  }
  return;
}

// 00907CE0  FUN_00907ce0  size=54  [run]
void __thiscall FUN_00907ce0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x6c);
  if (puVar1 != puVar1 + *(int *)(param_1 + 0x74)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x20))(param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x74) * 4));
  }
  return;
}

// 00907D20  FUN_00907d20  size=110  [run]
void __fastcall FUN_00907d20(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_00907bb0();
  *(undefined4 *)(param_1 + 0x134) = 0;
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(0);
  while (piVar1 = piVar2, piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x88);
  iVar4 = 5;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 5;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

// 00907D90  FUN_00907d90  size=45  [run]
void __fastcall FUN_00907d90(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x6c);
  if (puVar1 != puVar1 + *(int *)(param_1 + 0x74)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x14))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x74) * 4));
  }
  return;
}

