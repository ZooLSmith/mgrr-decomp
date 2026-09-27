// src/unsorted/unit_00CD61A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD61A0..00CD6290, 4 functions

#include "types.h"

// 00CD61A0  FUN_00cd61a0  size=98  [run]
void __thiscall FUN_00cd61a0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x4b4);
  if (uVar1 < 0x20201) {
    if (uVar1 == 0x20200) {
LAB_00cd61ec:
      if (*(int *)(param_1 + 0x188) == 0) {
        return;
      }
      FUN_00cbdf80();
      return;
    }
    if ((uVar1 == 0x20030) || (uVar1 == 0x20080)) {
      if (*(int *)(param_1 + 0x18c) == 0) {
        return;
      }
      FUN_00cbe1a0();
      return;
    }
  }
  else if (uVar1 == 0x2020a) goto LAB_00cd61ec;
  if (*(int *)(param_1 + 400) == 0) {
    return;
  }
  FUN_00cbe3e0();
  return;
}

// 00CD6210  FUN_00cd6210  size=64  [run]
void __thiscall FUN_00cd6210(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if ((iVar1 != 0) && (param_2 < 0xb)) {
    *(undefined4 *)(iVar1 + 0x24 + param_2 * 4) = 1;
    puVar2 = (undefined4 *)((param_2 + 5) * 0x10 + iVar1);
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
  }
  return;
}

// 00CD6250  FUN_00cd6250  size=64  [run]
void __thiscall FUN_00cd6250(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x194);
  if ((iVar1 != 0) && (param_2 < 0xb)) {
    *(undefined4 *)(iVar1 + 0x20 + param_2 * 4) = 1;
    puVar2 = (undefined4 *)((param_2 + 5) * 0x10 + iVar1);
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
  }
  return;
}

// 00CD6290  FUN_00cd6290  size=829  [run]
void __thiscall FUN_00cd6290(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_8 [8];
  
  if (param_2 < 5999.4) {
    uVar3 = FUN_00fdbc60();
    FUN_0095c6a0(local_8,&DAT_016b8254,uVar3);
    iVar2 = *(int *)(param_1 + 0xa8);
    if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x128) < *(uint *)(iVar2 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x128) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)) {
      FUN_00cb3cc0(piVar1,local_8);
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 300) < *(uint *)(iVar2 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 300) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)))) {
      FUN_00cb3cc0(piVar1,local_8);
    }
    iVar2 = FUN_00fdbc60();
    iVar5 = iVar2 % 10;
    if ((param_2 != 0.0) && (iVar5 == *(int *)(param_1 + 0x150))) {
      uVar4 = FUN_00dde2a0(0,9);
      iVar2 = (uVar4 & 0xffff) + (iVar2 / 10) * 10;
    }
    FUN_0095c6a0(local_8,".%02d",iVar2);
    iVar2 = *(int *)(param_1 + 0xa8);
    if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x130) < *(uint *)(iVar2 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x130) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)) {
      FUN_00cb3cc0(piVar1,local_8);
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x134) < *(uint *)(iVar2 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x134) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)))) {
      FUN_00cb3cc0(piVar1,local_8);
    }
    *(int *)(param_1 + 0x150) = iVar5;
  }
  else {
    FUN_0095c6a0(local_8,&DAT_016b8260);
    iVar2 = *(int *)(param_1 + 0xa8);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x128) < *(uint *)(iVar2 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x128) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)))) {
      FUN_00cb3cc0(piVar1,local_8);
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    if ((((iVar2 != 0) && (*(uint *)(param_1 + 300) < *(uint *)(iVar2 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 300) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)) {
      FUN_00cb3cc0(piVar1,local_8);
    }
    FUN_0095c6a0(local_8,&DAT_016b825c);
    iVar2 = *(int *)(param_1 + 0xa8);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x130) < *(uint *)(iVar2 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x130) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)))) {
      FUN_00cb3cc0(piVar1,local_8);
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x134) < *(uint *)(iVar2 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x134) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)))) {
      FUN_00cb3cc0(piVar1,local_8);
      return;
    }
  }
  return;
}

