// src/unsorted/unit_00EA9E60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EA9E60..00EAA010, 9 functions

#include "mgrr.h"

// 00EA9E60  FUN_00ea9e60  size=31  [run]
void __thiscall FUN_00ea9e60(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  return;
}

// 00EA9E80  FUN_00ea9e80  size=40  [run]
undefined4 __thiscall FUN_00ea9e80(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x10) != 1) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  return 1;
}

// 00EA9EB0  FUN_00ea9eb0  size=8  [run]
void __fastcall FUN_00ea9eb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

// 00EA9EC0  FUN_00ea9ec0  size=58  [run]
undefined4 __thiscall FUN_00ea9ec0(int param_1,undefined4 *param_2)

{
  if ((*(byte *)(param_1 + 0x68) & 0x80) == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0xb0);
  param_2[1] = *(undefined4 *)(param_1 + 0xb4);
  param_2[2] = *(undefined4 *)(param_1 + 0xb8);
  param_2[3] = *(undefined4 *)(param_1 + 0xbc);
  return 1;
}

// 00EA9F00  FUN_00ea9f00  size=58  [run]
undefined4 __thiscall FUN_00ea9f00(int param_1,undefined4 *param_2)

{
  if ((*(byte *)(param_1 + 0x68) & 0x80) == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0xc0);
  param_2[1] = *(undefined4 *)(param_1 + 0xc4);
  param_2[2] = *(undefined4 *)(param_1 + 200);
  param_2[3] = *(undefined4 *)(param_1 + 0xcc);
  return 1;
}

// 00EA9F40  FUN_00ea9f40  size=49  [run]
void __thiscall FUN_00ea9f40(int param_1,undefined4 *param_2)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x80;
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  *(undefined4 *)(param_1 + 0xb4) = param_2[1];
  *(undefined4 *)(param_1 + 0xb8) = param_2[2];
  *(undefined4 *)(param_1 + 0xbc) = param_2[3];
  return;
}

// 00EA9F80  FUN_00ea9f80  size=49  [run]
void __thiscall FUN_00ea9f80(int param_1,undefined4 *param_2)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x80;
  *(undefined4 *)(param_1 + 0xc0) = *param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_2[1];
  *(undefined4 *)(param_1 + 200) = param_2[2];
  *(undefined4 *)(param_1 + 0xcc) = param_2[3];
  return;
}

// 00EA9FC0  FUN_00ea9fc0  size=65  [run]
void __fastcall FUN_00ea9fc0(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xffffff7f;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00EAA010  FUN_00eaa010  size=76  [run]
undefined4 __fastcall FUN_00eaa010(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x9c) == -0x54325433) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xabcdabcd;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return 1;
}

