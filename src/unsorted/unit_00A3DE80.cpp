// src/unsorted/unit_00A3DE80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A3DE80..00A3E4A0, 15 functions

#include "mgrr.h"

// 00A3DE80  FUN_00a3de80  size=97  [run]
undefined4 __thiscall FUN_00a3de80(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xe0 + 0xe0,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xe0 + iVar1;
  FUN_00a34210();
  return 1;
}

// 00A3DEF0  FUN_00a3def0  size=85  [run]
void __fastcall FUN_00a3def0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    for (iVar1 = param_1[5]; iVar1 != param_1[6]; iVar1 = *(int *)(iVar1 + 0xd4)) {
    }
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

// 00A3DF70  FUN_00a3df70  size=97  [run]
undefined4 __thiscall FUN_00a3df70(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x1e10 + 0x1e10,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x1e10 + iVar1;
  FUN_00a34310();
  return 1;
}

// 00A3DFE0  FUN_00a3dfe0  size=100  [run]
void __fastcall FUN_00a3dfe0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1[1] != 0) {
    piVar1 = (int *)param_1[6];
    for (piVar2 = (int *)param_1[5]; piVar2 != piVar1; piVar2 = (int *)piVar2[0x781]) {
      (**(code **)(*piVar2 + 4))(0);
    }
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

// 00A3E050  FUN_00a3e050  size=54  [run]
void __fastcall FUN_00a3e050(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x18);
  for (piVar1 = *(int **)(param_1 + 0x14); piVar1 != piVar2; piVar1 = (int *)piVar1[0x781]) {
    (**(code **)(*piVar1 + 4))(0);
  }
  FUN_00a34310();
  return;
}

// 00A3E0B0  FUN_00a3e0b0  size=97  [run]
undefined4 __thiscall FUN_00a3e0b0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xa30 + 0xa30,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xa30 + iVar1;
  FUN_00a34410();
  return 1;
}

// 00A3E120  FUN_00a3e120  size=65  [run]
void __fastcall FUN_00a3e120(undefined4 *param_1)

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

// 00A3E1A0  FUN_00a3e1a0  size=97  [run]
undefined4 __thiscall FUN_00a3e1a0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x8c + 0x8c,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x8c + iVar1;
  FUN_00a34500();
  return 1;
}

// 00A3E210  FUN_00a3e210  size=65  [run]
void __fastcall FUN_00a3e210(undefined4 *param_1)

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

// 00A3E290  FUN_00a3e290  size=92  [run]
undefined4 __thiscall FUN_00a3e290(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x50 + 0x50,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x50 + iVar1;
  FUN_00a345f0();
  return 1;
}

// 00A3E2F0  FUN_00a3e2f0  size=97  [run]
void __fastcall FUN_00a3e2f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1[1] != 0) {
    piVar1 = (int *)param_1[6];
    for (piVar2 = (int *)param_1[5]; piVar2 != piVar1; piVar2 = (int *)piVar2[0x13]) {
      (**(code **)(*piVar2 + 4))(0);
    }
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

// 00A3E360  FUN_00a3e360  size=51  [run]
void __fastcall FUN_00a3e360(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x18);
  for (piVar1 = *(int **)(param_1 + 0x14); piVar1 != piVar2; piVar1 = (int *)piVar1[0x13]) {
    (**(code **)(*piVar1 + 4))(0);
  }
  FUN_00a345f0();
  return;
}

// 00A3E3C0  FUN_00a3e3c0  size=97  [run]
undefined4 __thiscall FUN_00a3e3c0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xe0 + 0xe0,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xe0 + iVar1;
  FUN_00a346d0();
  return 1;
}

// 00A3E430  FUN_00a3e430  size=100  [run]
void __fastcall FUN_00a3e430(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1[1] != 0) {
    piVar1 = (int *)param_1[6];
    for (piVar2 = (int *)param_1[5]; piVar2 != piVar1; piVar2 = (int *)piVar2[0x35]) {
      (**(code **)(*piVar2 + 4))(0);
    }
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

// 00A3E4A0  FUN_00a3e4a0  size=54  [run]
void __fastcall FUN_00a3e4a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x18);
  for (piVar1 = *(int **)(param_1 + 0x14); piVar1 != piVar2; piVar1 = (int *)piVar1[0x35]) {
    (**(code **)(*piVar1 + 4))(0);
  }
  FUN_00a346d0();
  return;
}

