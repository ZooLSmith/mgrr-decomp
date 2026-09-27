// src/unsorted/unit_00CE4DD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE4DD0..00CE51D0, 5 functions

#include "mgrr.h"

// 00CE4DD0  FUN_00ce4dd0  size=41  [run]
bool __thiscall FUN_00ce4dd0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return false;
  }
  iVar1 = FUN_00cdf400(param_2);
  return iVar1 != 0;
}

// 00CE4E80  FUN_00ce4e80  size=77  [run]
void __thiscall
FUN_00ce4e80(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 3)) {
    FUN_00cceeb0(param_3,param_4,param_5);
  }
  return;
}

// 00CE4FF0  FUN_00ce4ff0  size=286  [run]
undefined4 __thiscall FUN_00ce4ff0(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) {
    piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c));
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 3) {
        iVar2 = 0;
        do {
          iVar5 = iVar2;
          if ((iVar2 == 1) || (iVar2 == 2)) {
            iVar3 = FUN_00932720();
            if (DAT_01dc2e78 == iVar3) {
              iVar5 = (iVar2 != 1) + 1;
            }
            else {
              iVar3 = FUN_00932720();
              if (DAT_01dc2f4c == iVar3) {
                iVar5 = 2 - (uint)(iVar2 != 1);
              }
            }
          }
          if (((iVar5 * 0xd4 == -0x1dc2d9c) || ((&DAT_01dc2db8)[iVar5 * 0x35] == 0)) ||
             ((&DAT_01dc2dc0)[iVar5 * 0x35] == 0)) {
            puVar4 = (undefined *)0x0;
          }
          else {
            puVar4 = &DAT_01dc2dd4 + iVar5 * 0xd4;
          }
          piVar1[5] = (int)puVar4;
          piVar1[0x2a] = -1;
          piVar1[0x2b] = param_4;
          if ((puVar4 != (undefined *)0x0) && (*(int *)(puVar4 + 4) != 0)) {
            iVar5 = FUN_00cb1cd0(param_3);
            if (-1 < iVar5) {
              piVar1[0x2b] = param_4;
              piVar1[0x2a] = iVar5;
              piVar1[0x2e] = 0;
              return 1;
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 6);
        return 0;
      }
    }
    return 0;
  }
  return 0;
}

// 00CE5150  FUN_00ce5150  size=114  [run]
undefined4 FUN_00ce5150(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_f30 [3684];
  undefined4 local_cc [50];
  
  if (param_1 != 0) {
    FUN_00cb3cc0(param_1,param_2);
    FUN_00cce470();
    iVar1 = FUN_00ccf550(local_f30);
    if (iVar1 != 0) {
      FUN_00ce4450(local_f30);
      puVar2 = local_cc;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_3 = *puVar2;
        puVar2 = puVar2 + 1;
        param_3 = param_3 + 1;
      }
      return 1;
    }
  }
  return 0;
}

// 00CE51D0  FUN_00ce51d0  size=120  [run]
undefined4 FUN_00ce51d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_f30 [3684];
  undefined4 local_cc [50];
  
  if (param_1 != 0) {
    FUN_00cce470();
    iVar1 = FUN_00ccf550(local_f30);
    if (iVar1 != 0) {
      FUN_00cb1930(local_f30,*(undefined4 *)(param_1 + 0x54));
      FUN_00ce4450(local_f30);
      puVar2 = local_cc;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    }
  }
  return 0;
}

