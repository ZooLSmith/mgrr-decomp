// src/unsorted/unit_00EC3620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC3620..00EC37B0, 4 functions

#include "mgrr.h"

// 00EC3620  FUN_00ec3620  size=21  [run]
undefined4 * __fastcall FUN_00ec3620(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00EC3660  FUN_00ec3660  size=93  [run]
undefined4 __thiscall FUN_00ec3660(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00ec3240();
  return 1;
}

// 00EC36C0  FUN_00ec36c0  size=65  [run]
void __fastcall FUN_00ec36c0(undefined4 *param_1)

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

// 00EC37B0  FUN_00ec37b0  size=526  [run]
void __thiscall FUN_00ec37b0(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  FUN_00ec3380(param_2);
  if ((*param_3 & 0x80000000) != 0) {
    param_1[0xc] = param_3[0xc];
    param_1[0xd] = param_3[0xd];
    param_1[0xe] = param_3[0xe];
    param_1[0xf] = param_3[0xf];
    param_1[0x10] = param_3[0x10];
    param_1[0x11] = param_3[0x11];
    param_1[0x12] = param_3[0x12];
    param_1[0x13] = param_3[0x13];
  }
  if ((*param_3 & 0x40000000) != 0) {
    if ((*param_3 & 0x8000000) == 0) {
      *param_1 = *param_1 & 0xf7ffffff;
    }
    else {
      *param_1 = *param_1 | 0x8000000;
    }
    param_1[0x1c] = param_3[0x1c];
    param_1[0x1d] = param_3[0x1d];
    param_1[0x1e] = param_3[0x1e];
    param_1[0x1f] = param_3[0x1f];
  }
  if ((*param_3 & 0x20000000) != 0) {
    param_1[0x18] = param_3[0x18];
    param_1[0x19] = param_3[0x19];
    param_1[0x1a] = param_3[0x1a];
    param_1[0x1b] = param_3[0x1b];
    param_1[0x22f] = param_3[0x22f];
    param_1[0x230] = param_3[0x230];
    param_1[0x231] = param_3[0x231];
    param_1[0x232] = param_3[0x232];
  }
  if ((*param_3 & 0x10000000) != 0) {
    param_1[4] = param_3[4];
    *(short *)(param_1 + 5) = (short)param_3[5];
    *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_3 + 0x16);
    *(short *)(param_1 + 6) = (short)param_3[6];
    *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_3 + 0x1a);
    *(short *)(param_1 + 7) = (short)param_3[7];
    *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)((int)param_3 + 0x1e);
    *(short *)(param_1 + 8) = (short)param_3[8];
    *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_3 + 0x22);
    param_1[0x228] = param_3[0x228];
    param_1[0x229] = param_3[0x229];
    param_1[0x22a] = param_3[0x22a];
    param_1[0x22b] = param_3[0x22b];
    param_1[0x22c] = param_3[0x22c];
    param_1[0x22d] = param_3[0x22d];
    param_1[0x22e] = param_3[0x22e];
  }
  puVar2 = param_3 + 0x33;
  puVar1 = param_1 + 0x31;
  param_2 = 0x10;
  do {
    if ((puVar2[1] & 0x80000000) != 0) {
      puVar1[-9] = puVar2[-0xb];
      puVar1[-8] = puVar2[-10];
      iVar3 = 0x10;
      puVar1[-7] = puVar2[-9];
      puVar1[-6] = puVar2[-8];
      puVar1[-5] = puVar2[-7];
      puVar1[-4] = puVar2[-6];
      puVar1[-1] = puVar2[-3];
      *puVar1 = *(uint *)(((int)param_3 - (int)param_1) + (int)puVar1);
      puVar1[1] = puVar2[-1];
      puVar1[2] = *puVar2;
      puVar1[3] = puVar2[1];
      puVar4 = puVar1 + 4;
      do {
        *puVar4 = *(uint *)((int)puVar2 + (-0x2c - (int)(puVar1 + -9)) + (int)puVar4);
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar2 = puVar2 + 0x20;
    puVar1 = puVar1 + 0x20;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

