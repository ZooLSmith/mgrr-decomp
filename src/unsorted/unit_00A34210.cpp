// src/unsorted/unit_00A34210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A34210..00A34930, 9 functions

#include "mgrr.h"

// 00A34210  FUN_00a34210  size=102  [run]
void __fastcall FUN_00a34210(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0xd0);
    do {
      *piVar1 = (int)(piVar1 + -0x6c);
      piVar1[1] = (int)(piVar1 + 4);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x38;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) * 0xe0 + -0xc + *(int *)(param_1 + 4)) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A34310  FUN_00a34310  size=102  [run]
void __fastcall FUN_00a34310(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x1e00);
    do {
      *piVar1 = (int)(piVar1 + -0xf04);
      piVar1[1] = (int)(piVar1 + 4);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x784;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x1e00) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) * 0x1e10 + -0xc + *(int *)(param_1 + 4)) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1e00) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1e04) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A34410  FUN_00a34410  size=102  [run]
void __fastcall FUN_00a34410(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0xa20);
    do {
      *piVar1 = (int)(piVar1 + -0x514);
      piVar1[1] = (int)(piVar1 + 4);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x28c;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0xa20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) * 0xa30 + -0xc + *(int *)(param_1 + 4)) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xa20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xa24) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A34500  FUN_00a34500  size=102  [run]
void __fastcall FUN_00a34500(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x84);
    do {
      *piVar1 = (int)(piVar1 + -0x44);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x23;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) * 0x8c + -4 + *(int *)(param_1 + 4)) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x84) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A345F0  FUN_00a345f0  size=88  [run]
void __fastcall FUN_00a345f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x48);
    do {
      *piVar1 = (int)(piVar1 + -0x26);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0x50) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A346D0  FUN_00a346d0  size=102  [run]
void __fastcall FUN_00a346d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0xd0);
    do {
      *piVar1 = (int)(piVar1 + -0x6c);
      piVar1[1] = (int)(piVar1 + 4);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x38;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) * 0xe0 + -0xc + *(int *)(param_1 + 4)) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A34800  FUN_00a34800  size=48  [run]
void __fastcall FUN_00a34800(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00A34830  FUN_00a34830  size=53  [run]
void __fastcall FUN_00a34830(int param_1)

{
  FUN_00a2a170();
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00A34930  FUN_00a34930  size=1587  [run]
void __thiscall FUN_00a34930(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  puVar1 = param_2 + 0x28;
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  local_8 = 2;
  puVar3 = (undefined4 *)((int)puVar1 + (0x28 - (int)param_2) + (int)param_1);
  puVar4 = param_2 + 0x33;
  do {
    puVar3[-10] = *puVar1;
    puVar3[-9] = puVar4[-10];
    puVar3[-8] = puVar4[-9];
    puVar3[-7] = puVar4[-8];
    puVar3[-6] = puVar4[-7];
    puVar3[-5] = puVar4[-6];
    puVar3[-2] = puVar4[-3];
    puVar3[-1] = puVar4[-2];
    *puVar3 = *(undefined4 *)((int)puVar3 + ((int)param_2 - (int)param_1));
    puVar3[1] = *puVar4;
    puVar3[2] = puVar4[1];
    puVar5 = puVar4 + 2;
    puVar6 = puVar3 + 3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3[0x16] = puVar4[0x15];
    puVar3[0x17] = puVar4[0x16];
    puVar3[0x18] = puVar4[0x17];
    puVar3[0x19] = puVar4[0x18];
    puVar3[0x1a] = puVar4[0x19];
    puVar3[0x1b] = puVar4[0x1a];
    puVar3[0x1e] = puVar4[0x1d];
    puVar3[0x1f] = puVar4[0x1e];
    puVar3[0x20] = puVar4[0x1f];
    puVar3[0x21] = puVar4[0x20];
    puVar3[0x22] = puVar4[0x21];
    puVar5 = puVar4 + 0x22;
    puVar6 = puVar3 + 0x23;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3[0x36] = puVar4[0x35];
    puVar3[0x37] = puVar4[0x36];
    puVar3[0x38] = puVar4[0x37];
    puVar3[0x39] = puVar4[0x38];
    puVar3[0x3a] = puVar4[0x39];
    puVar3[0x3b] = puVar4[0x3a];
    puVar3[0x3e] = puVar4[0x3d];
    puVar3[0x3f] = puVar4[0x3e];
    puVar3[0x40] = puVar4[0x3f];
    puVar3[0x41] = puVar4[0x40];
    puVar3[0x42] = puVar4[0x41];
    puVar5 = puVar4 + 0x42;
    puVar6 = puVar3 + 0x43;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3[0x56] = puVar4[0x55];
    puVar3[0x57] = puVar4[0x56];
    puVar3[0x58] = puVar4[0x57];
    puVar3[0x59] = puVar4[0x58];
    puVar3[0x5a] = puVar4[0x59];
    puVar3[0x5b] = puVar4[0x5a];
    puVar3[0x5e] = puVar4[0x5d];
    puVar3[0x5f] = puVar4[0x5e];
    puVar3[0x60] = puVar4[0x5f];
    puVar3[0x61] = puVar4[0x60];
    puVar3[0x62] = puVar4[0x61];
    puVar5 = puVar4 + 0x62;
    puVar6 = puVar3 + 99;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3[0x76] = puVar4[0x75];
    puVar3[0x77] = puVar4[0x76];
    puVar3[0x78] = puVar4[0x77];
    puVar3[0x79] = puVar4[0x78];
    puVar3[0x7a] = puVar4[0x79];
    puVar3[0x7b] = puVar4[0x7a];
    puVar3[0x7e] = puVar4[0x7d];
    puVar3[0x7f] = puVar4[0x7e];
    puVar3[0x80] = puVar4[0x7f];
    puVar3[0x81] = puVar4[0x80];
    puVar3[0x82] = puVar4[0x81];
    puVar5 = puVar4 + 0x82;
    puVar6 = puVar3 + 0x83;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3[0x96] = puVar4[0x95];
    puVar3[0x97] = puVar4[0x96];
    puVar3[0x98] = puVar4[0x97];
    puVar3[0x99] = puVar4[0x98];
    puVar3[0x9a] = puVar4[0x99];
    puVar3[0x9b] = puVar4[0x9a];
    puVar3[0x9e] = puVar4[0x9d];
    puVar3[0x9f] = puVar4[0x9e];
    puVar3[0xa0] = puVar4[0x9f];
    puVar3[0xa1] = puVar4[0xa0];
    puVar3[0xa2] = puVar4[0xa1];
    puVar5 = puVar4 + 0xa2;
    puVar6 = puVar3 + 0xa3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3[0xb6] = puVar4[0xb5];
    puVar3[0xb7] = puVar4[0xb6];
    puVar3[0xb8] = puVar4[0xb7];
    puVar3[0xb9] = puVar4[0xb8];
    puVar1 = puVar1 + 0x100;
    puVar3[0xba] = puVar4[0xb9];
    puVar3[0xbb] = puVar4[0xba];
    puVar3[0xbe] = puVar4[0xbd];
    puVar3[0xbf] = puVar4[0xbe];
    puVar3[0xc0] = puVar4[0xbf];
    puVar3[0xc1] = puVar4[0xc0];
    puVar3[0xc2] = puVar4[0xc1];
    puVar5 = puVar4 + 0xc2;
    puVar6 = puVar3 + 0xc3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3[0xd6] = puVar4[0xd5];
    puVar3[0xd7] = puVar4[0xd6];
    puVar3[0xd8] = puVar4[0xd7];
    puVar3[0xd9] = puVar4[0xd8];
    puVar3[0xda] = puVar4[0xd9];
    puVar3[0xdb] = puVar4[0xda];
    puVar3[0xde] = puVar4[0xdd];
    local_8 = local_8 + -1;
    puVar3[0xdf] = puVar4[0xde];
    puVar3[0xe0] = puVar4[0xdf];
    puVar3[0xe1] = puVar4[0xe0];
    puVar3[0xe2] = puVar4[0xe1];
    puVar5 = puVar4 + 0xe2;
    puVar6 = puVar3 + 0xe3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = puVar3 + 0x100;
    puVar4 = puVar4 + 0x100;
  } while (local_8 != 0);
  param_1[0x228] = param_2[0x228];
  param_1[0x229] = param_2[0x229];
  param_1[0x22a] = param_2[0x22a];
  param_1[0x22b] = param_2[0x22b];
  param_1[0x22c] = param_2[0x22c];
  param_1[0x22d] = param_2[0x22d];
  param_1[0x22e] = param_2[0x22e];
  param_1[0x22f] = param_2[0x22f];
  param_1[0x230] = param_2[0x230];
  param_1[0x231] = param_2[0x231];
  param_1[0x232] = param_2[0x232];
  puVar1 = param_2 + 0x233;
  puVar3 = param_1 + 0x233;
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

