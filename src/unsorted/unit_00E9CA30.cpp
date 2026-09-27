// src/unsorted/unit_00E9CA30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E9CA30..00E9CB60, 4 functions

#include "types.h"

// 00E9CA30  FUN_00e9ca30  size=91  [run]
void __fastcall FUN_00e9ca30(int param_1)

{
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (0 < *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  _strcpy_s(local_24,0x20,(char *)(param_1 + 8));
  FUN_00dd5650(&DAT_016d1ce4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9CA90  FUN_00e9ca90  size=35  [run]
undefined4 __fastcall FUN_00e9ca90(undefined4 *param_1)

{
  thunk_FUN_00debc30(*param_1);
  param_1[0x13] = 5;
  param_1[0x14] = 0;
  return 1;
}

// 00E9CB10  FUN_00e9cb10  size=76  [run]
void __fastcall FUN_00e9cb10(int param_1)

{
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (*(int *)(param_1 + 0x40) < 1) {
    _strcpy_s(local_24,0x20,(char *)(param_1 + 8));
    FUN_00dd5650(&DAT_016d1d14,local_24);
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9CB60  FUN_00e9cb60  size=91  [run]
void __fastcall FUN_00e9cb60(int param_1)

{
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (0 < *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  _strcpy_s(local_24,0x20,(char *)(param_1 + 8));
  FUN_00dd5650(&DAT_016d1d48,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

