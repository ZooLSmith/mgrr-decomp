// src/unsorted/unit_009D4800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D4800..009D4A00, 4 functions

#include "types.h"

// 009D4800  FUN_009d4800  size=33  [run]
bool FUN_009d4800(uint param_1)

{
  return (0x80000000U >> ((byte)param_1 & 0x1f) & (&DAT_01b78874)[param_1 >> 5]) != 0;
}

// 009D4830  FUN_009d4830  size=173  [run]
undefined4 * __fastcall FUN_009d4830(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_004105d0();
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x51] = 5;
  param_1[0x48] = 0x3f800000;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x49] = 0x3dcccccd;
  param_1[0x4a] = 0x3e800000;
  param_1[0x4b] = 0x40000000;
  param_1[0x4c] = 0x40000000;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4e] = 0x3f800000;
  param_1[5] = 10;
  param_1[7] = 10;
  *(undefined1 *)(param_1 + 8) = 10;
  param_1[6] = 10;
  param_1[4] = 0x187;
  return param_1;
}

// 009D49D0  FUN_009d49d0  size=46  [run]
uint __fastcall FUN_009d49d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    return 0;
  }
  uVar1 = **(uint **)(param_1 + 4);
  if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
    uVar2 = FUN_00f59ed0(0);
    FUN_00dd5650(&DAT_016597b4,uVar2);
  }
  return uVar1;
}

// 009D4A00  FUN_009d4a00  size=53  [run]
uint __fastcall FUN_009d4a00(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0x10), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(1);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    return uVar1;
  }
  return 0;
}

