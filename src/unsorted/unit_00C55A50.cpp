// src/unsorted/unit_00C55A50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C55A50..00C55F20, 10 functions

#include "types.h"

// 00C55A50  FUN_00c55a50  size=65  [run]
void __fastcall FUN_00c55a50(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C55B20  FUN_00c55b20  size=65  [run]
void __fastcall FUN_00c55b20(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C55B70  FUN_00c55b70  size=95  [run]
undefined4 __thiscall FUN_00c55b70(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x48 + 0x48,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x48 + iVar1;
  FUN_00c4c330();
  return 1;
}

// 00C55BE0  FUN_00c55be0  size=166  [run]
void __thiscall FUN_00c55be0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= param_3) {
      iVar1 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar1,0x90);
  }
  param_2 = param_3 - param_1[1];
  if (0 < param_2) {
    puVar2 = (undefined2 *)(param_1[1] * 0x90 + *param_1 + 0x48);
    do {
      if (puVar2 != (undefined2 *)&DAT_00000048) {
        FUN_00405230();
        *(undefined4 *)(puVar2 + -0x22) = 0;
        *(undefined4 *)(puVar2 + -0x20) = 0;
        *(undefined4 *)(puVar2 + -0x24) = 0;
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        FUN_00a7c950();
        puVar2[-0x1a] = 0xffff;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + -2) = 0;
        *(undefined4 *)(puVar2 + -0x18) = 0;
        *(undefined4 *)(puVar2 + -0x16) = 0;
      }
      puVar2 = puVar2 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 00C55C90  FUN_00c55c90  size=63  [run]
void __fastcall FUN_00c55c90(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00C55CD0  FUN_00c55cd0  size=65  [run]
void __fastcall FUN_00c55cd0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C55D20  FUN_00c55d20  size=91  [run]
undefined4 __thiscall FUN_00c55d20(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x20 + 0x20,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x20 + iVar1;
  FUN_00c4c430();
  return 1;
}

// 00C55E10  FUN_00c55e10  size=65  [run]
void __fastcall FUN_00c55e10(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C55ED0  FUN_00c55ed0  size=65  [run]
void __fastcall FUN_00c55ed0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C55F20  FUN_00c55f20  size=103  [run]
int * __thiscall FUN_00c55f20(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 4);
  iVar2 = *(int *)(*param_3 + 8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(int *)(*param_3 + 4) = iVar2;
  *(int *)(*param_3 + 8) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

