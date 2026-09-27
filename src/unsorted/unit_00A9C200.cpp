// src/unsorted/unit_00A9C200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A9C200..00A9C7C0, 8 functions

#include "mgrr.h"

// 00A9C200  FUN_00a9c200  size=58  [run]
undefined4 __thiscall FUN_00a9c200(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 <= param_2) && (param_2 < uVar1 + *(int *)(param_1 + 0x1c) * 0x14)) {
    FUN_00a90d80(param_2);
    return 1;
  }
  return 0;
}

// 00A9C240  FUN_00a9c240  size=43  [run]
void __fastcall FUN_00a9c240(int param_1)

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

// 00A9C270  FUN_00a9c270  size=69  [run]
undefined4 __thiscall FUN_00a9c270(int *param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  while( true ) {
    if (param_2 == param_3) {
      return 1;
    }
    cVar1 = (**(code **)(*param_1 + 8))(param_2);
    if (cVar1 == '\0') break;
    param_2 = param_2 + 4;
  }
  return 0;
}

// 00A9C560  FUN_00a9c560  size=114  [run]
void __fastcall FUN_00a9c560(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x10) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x14;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00A9C5E0  FUN_00a9c5e0  size=43  [run]
void __fastcall FUN_00a9c5e0(int param_1)

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

// 00A9C760  FUN_00a9c760  size=43  [run]
void __fastcall FUN_00a9c760(int param_1)

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

// 00A9C790  FUN_00a9c790  size=43  [run]
void __fastcall FUN_00a9c790(int param_1)

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

// 00A9C7C0  FUN_00a9c7c0  size=43  [run]
void __fastcall FUN_00a9c7c0(int param_1)

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

