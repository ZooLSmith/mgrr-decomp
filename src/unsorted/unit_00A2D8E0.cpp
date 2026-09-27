// src/unsorted/unit_00A2D8E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A2D8E0..00A2DB30, 3 functions

#include "types.h"

// 00A2D8E0  FUN_00a2d8e0  size=144  [run]
void __fastcall FUN_00a2d8e0(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x66) = 0x1f;
  param_1[0x1b] = 0;
  *param_1 = 0;
  param_1[0x1e] = 0;
  param_1[1] = 0;
  param_1[0x1f] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x26] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3f800000;
  return;
}

// 00A2D9A0  FUN_00a2d9a0  size=341  [run]
void __thiscall FUN_00a2d9a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
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
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((int)param_1 + 0x65) = *(undefined1 *)((int)param_2 + 0x65);
  *(undefined1 *)((int)param_1 + 0x66) = *(undefined1 *)((int)param_2 + 0x66);
  *(undefined1 *)((int)param_1 + 0x67) = *(undefined1 *)((int)param_2 + 0x67);
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  return;
}

// 00A2DB30  FUN_00a2db30  size=97  [run]
void __fastcall FUN_00a2db30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x300) = 0;
  iVar2 = 0x10;
  puVar1 = (undefined4 *)(param_1 + 0x18);
  do {
    iVar2 = iVar2 + -1;
    puVar1[-6] = 0x3f800000;
    puVar1[-5] = 0x47c35000;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0x40000000;
    puVar1[2] = 0x3f800000;
    puVar1[3] = 0x3f800000;
    puVar1[4] = 0x3f800000;
    puVar1[5] = 0x3f800000;
    puVar1 = puVar1 + 0xc;
  } while (iVar2 != 0);
  return;
}

