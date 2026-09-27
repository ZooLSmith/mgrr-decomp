// src/unsorted/unit_00DA4130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DA4130..00DA4250, 3 functions

#include "types.h"

// 00DA4130  FUN_00da4130  size=110  [run]
void __fastcall FUN_00da4130(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = DAT_01dc5580;
joined_r0x00da4148:
  do {
    if (piVar1 == (int *)0x0) {
      FUN_00dd5650(&DAT_016c2a9c);
      uVar2 = 0;
    }
    else {
      if (piVar1[2] != iVar3) {
        piVar1 = (int *)piVar1[1];
        goto joined_r0x00da4148;
      }
      uVar2 = (**(code **)(*piVar1 + 4))(&DAT_01b7bd48);
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = uVar2;
    iVar3 = iVar3 + 1;
    piVar1 = DAT_01dc5580;
    if (0x12 < iVar3) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      return;
    }
  } while( true );
}

// 00DA41A0  FUN_00da41a0  size=169  [run]
undefined4 __thiscall FUN_00da41a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x4c);
  do {
    if (*piVar2 != 0) {
      piVar3 = *(int **)(param_1 + 0x4c + iVar1 * 4);
      break;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 3);
  piVar2 = *(int **)(param_1 + 100);
  if ((piVar3 != piVar2) || (*(int *)(param_1 + 0x68) != 0)) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(param_2,param_3,piVar3);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(param_2,param_3,*(undefined4 *)(param_1 + 100));
    }
    *(int **)(param_1 + 100) = piVar3;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x4c);
  }
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x50);
  }
  if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x54);
  }
  if (*(int **)(param_1 + 100) == (int *)0x0) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 100) + 0x10))(param_2,param_3);
  return 1;
}

// 00DA4250  FUN_00da4250  size=48  [run]
void __fastcall FUN_00da4250(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 100) = 0;
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x13);
  return;
}

