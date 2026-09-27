// src/unsorted/unit_00CAE160.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CAE160..00CAE180, 2 functions

#include "mgrr.h"

// 00CAE160  FUN_00cae160  size=21  [run]
void __fastcall FUN_00cae160(int param_1)

{
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 00CAE180  FUN_00cae180  size=272  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00cae180(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((~*(uint *)(param_1 + 0x24) & 1) == 0) {
    return 0;
  }
  if (((DAT_01bea070 & 0x2000000) != 0) && ((*(uint *)(param_1 + 0x28) & 0x400000) == 0)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x28) & 0x40000000) == 0) {
    if ((DAT_01bea060 & 0x40000000) != 0) {
      return 0;
    }
    iVar2 = FUN_00c1d710();
    if (iVar2 != 0) {
      return 0;
    }
  }
  if ((((DAT_01bea060 & 0x8000000) != 0) && ((DAT_01bea070 & 0x200000) != 0)) &&
     ((*(byte *)(param_1 + 0x2b) & 1) == 0)) {
    return 0;
  }
  if ((DAT_01dc2d58 != 0) && ((*(uint *)(param_1 + 0x28) & 0x40000000) == 0)) {
    return 0;
  }
  if ((DAT_01dc2d64 != 0) && ((*(uint *)(param_1 + 0x28) & 0x100000) != 0)) {
    return 0;
  }
  if (((DAT_01bea094 & 0x8000000) != 0) && ((*(uint *)(param_1 + 0x28) & 0x20000) == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if (((((uVar1 & 0x8000000) == 0) &&
       ((iVar2 = FUN_00416910(0x13), iVar2 != 0 || (iVar2 = FUN_00416910(0x18), iVar2 != 0)))) &&
      ((iVar2 = FUN_00416d50(0x2d), iVar2 == 0 || ((uVar1 & 0x8000) == 0)))) &&
     (_DAT_01dc202c == 0.0)) {
    return 0;
  }
  if ((DAT_01dc2d7c != 0) && ((uVar1 & 0x80000) == 0)) {
    return 0;
  }
  return 1;
}

