// src/unsorted/unit_00D81230.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D81230..00D81490, 5 functions

#include "types.h"

// 00D81230  FUN_00d81230  size=43  [run]
void __fastcall FUN_00d81230(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00D81260  FUN_00d81260  size=60  [run]
void __thiscall FUN_00d81260(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 4;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00D81320  FUN_00d81320  size=64  [run]
undefined4 * __fastcall FUN_00d81320(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  if (param_1[2] != 0) {
    param_1[4] = 0;
    if (param_1[5] != 0) {
      FUN_00dd48d0(param_1[2],0);
      param_1[5] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}

// 00D81360  FUN_00d81360  size=299  [run]
undefined4 __thiscall FUN_00d81360(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcStack_1c;
  int iStack_18;
  char *pcStack_14;
  
  *param_1 = 0;
  iStack_18 = param_1[2];
  if (iStack_18 != 0) {
    param_1[4] = 0;
    if (param_1[5] != 0) {
      pcStack_14 = (char *)0x0;
      pcStack_1c = (char *)0xd81385;
      FUN_00dd48d0();
      param_1[5] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
  }
  pcStack_14 = "AreaNo";
  iStack_18 = param_3;
  pcStack_1c = (char *)0xd813ab;
  iVar2 = (**(code **)(*param_2 + 0x9c))();
  if (iVar2 != -1) {
    pcStack_1c = (char *)((int)param_1 + 2);
    (**(code **)(*param_2 + 0xec))(iVar2);
  }
  pcStack_1c = "SstNo";
  iVar2 = (**(code **)(*param_2 + 0x9c))(param_3);
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar2,param_1);
  }
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"PhaseList");
  if (iVar2 != -1) {
    iStack_18 = (**(code **)(*param_2 + 0x10))(iVar2);
    if (0 < iStack_18) {
      iVar3 = FUN_00964450(iStack_18,DAT_01dc5384);
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016c1a18);
        return 0;
      }
      iVar3 = 0;
      if (0 < iStack_18) {
        do {
          uVar4 = (**(code **)(*param_2 + 0x14))(iVar2,iVar3);
          (**(code **)(*param_2 + 0x7c))(uVar4,&pcStack_1c);
          if ((int)param_1[4] < (int)param_1[3]) {
            puVar1 = (undefined4 *)(param_1[2] + param_1[4] * 4);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = pcStack_14;
            }
            param_1[4] = param_1[4] + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iStack_18);
      }
    }
  }
  return 1;
}

// 00D81490  FUN_00d81490  size=43  [run]
void __fastcall FUN_00d81490(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

