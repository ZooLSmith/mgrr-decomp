// src/unsorted/unit_00F4B8A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4B8A0..00F4B8F0, 2 functions

#include "types.h"

// 00F4B8A0  FUN_00f4b8a0  size=73  [run]
void FUN_00f4b8a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01ee5470;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + -5) = 0;
    puVar1[-0xe] = 0xfff;
    FUN_00f4ace0();
    FUN_00f4ae70();
    puVar1 = puVar1 + 0x15;
  } while ((int)puVar1 < 0x1ee556c);
  return;
}

// 00F4B8F0  FUN_00f4b8f0  size=176  [run]
void FUN_00f4b8f0(int param_1)

{
  int iVar1;
  
  if (param_1 < 4) {
    iVar1 = (&DAT_01ee546c)[param_1 * 0x15];
    if (iVar1 < 1) {
      FUN_00dd5650(&DAT_016e0888,param_1,iVar1);
      (&DAT_01ee5474)[param_1 * 0x15] = 0;
      (&DAT_01ee5478)[param_1 * 0x2a] = 0;
      (&DAT_01ee546c)[param_1 * 0x15] = 0;
      (&DAT_01ee5470)[param_1 * 0x15] = 0;
      (&DAT_01ee545c)[param_1 * 0x54] = 0;
      (&DAT_01ee5438)[param_1 * 0x15] = 0xfff;
      FUN_00f4ace0();
      FUN_00f4ae70();
      return;
    }
    if (iVar1 == 1) {
      (&DAT_01ee546c)[param_1 * 0x15] = 0;
      (&DAT_01ee5470)[param_1 * 0x15] = 0;
      (&DAT_01ee5474)[param_1 * 0x15] = 0;
      (&DAT_01ee5478)[param_1 * 0x2a] = 0;
      (&DAT_01ee545c)[param_1 * 0x54] = 0;
      (&DAT_01ee5438)[param_1 * 0x15] = 0xfff;
      FUN_00f4ace0();
      FUN_00f4ae70();
      return;
    }
    if ((int)(&DAT_01ee546c)[param_1 * 0x15] < 1) {
      FUN_00dd5650();
      return;
    }
    (&DAT_01ee546c)[param_1 * 0x15] = (&DAT_01ee546c)[param_1 * 0x15] + -1;
  }
  return;
}

