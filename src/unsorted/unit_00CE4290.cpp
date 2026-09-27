// src/unsorted/unit_00CE4290.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE4290..00CE4380, 2 functions

#include "mgrr.h"

// 00CE4290  FUN_00ce4290  size=238  [run]
void __fastcall FUN_00ce4290(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int aiStack_70 [28];
  
  iVar3 = 1;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0x60);
    do {
      aiStack_70[iVar1] = iVar3;
      iVar3 = iVar3 + *piVar2;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x1c);
    piVar2 = *(int **)(param_1 + 0x44);
    if (piVar2 != *(int **)(param_1 + 0x48)) {
      do {
        iVar3 = *piVar2;
        if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
          iVar1 = FUN_00cae180(1);
          if (iVar1 != 0) {
            iVar1 = aiStack_70[*(uint *)(iVar3 + 8)] + *(int *)(iVar3 + 0x2c);
            *(int *)(iVar3 + 0x30) = iVar1;
            if (0x1a < *(uint *)(iVar3 + 8)) {
              *(int *)(iVar3 + 0x30) = iVar1 - aiStack_70[0x1b];
            }
            if (*(int *)(param_1 + 0x50) == 0) {
              *(int *)(param_1 + 0x50) = iVar3;
              *(int *)(param_1 + 0x58) = iVar3;
            }
            if (*(int *)(param_1 + 0x54) != 0) {
              *(int *)(*(int *)(param_1 + 0x54) + 0x34) = iVar3;
            }
            *(int *)(param_1 + 0x54) = iVar3;
            *(undefined4 *)(iVar3 + 0x34) = 0;
            *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          }
        }
        piVar2 = (int *)piVar2[2];
      } while (piVar2 != *(int **)(param_1 + 0x48));
    }
    FUN_00dd75d0(&LAB_00caee30,param_1 + 0x4c,0xffffffff);
    FUN_00dd79a0(5);
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00CE4380  FUN_00ce4380  size=139  [run]
void __thiscall FUN_00ce4380(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0xa8) = *param_2;
  *(undefined4 *)(param_1 + 0xac) = param_2[1];
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0xb4) = param_2[3];
  *(undefined4 *)(param_1 + 0xb8) = param_2[4];
  *(undefined4 *)(param_1 + 0xbc) = param_2[5];
  *(undefined4 *)(param_1 + 0xc0) = param_2[6];
  *(undefined4 *)(param_1 + 0xc4) = *param_3;
  *(undefined4 *)(param_1 + 200) = param_3[1];
  *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0xd0) = param_3[3];
  *(undefined4 *)(param_1 + 0xd4) = param_3[4];
  *(undefined4 *)(param_1 + 0xd8) = param_3[5];
  *(undefined4 *)(param_1 + 0xdc) = param_3[6];
  return;
}

