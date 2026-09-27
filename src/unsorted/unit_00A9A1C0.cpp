// src/unsorted/unit_00A9A1C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A9A1C0..00A9A1C0, 1 functions

#include "mgrr.h"

// 00A9A1C0  FUN_00a9a1c0  size=429  [run]
void __thiscall FUN_00a9a1c0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x28))(*param_2);
    if (((uVar1 & 1) != 0) && (iVar2 = FUN_00bda170(), iVar2 != 0)) {
      param_2[0x23] = param_2[0x23] | 0x10000;
    }
    param_2[0x23] = param_2[0x23] | 0x40000000;
    if ((uVar1 & 4) != 0) {
      param_2[0x23] = param_2[0x23] & 0xbfffffff;
      param_2[0x23] = param_2[0x23] | 0x20000000;
      *(undefined2 *)(param_2 + 0x21) = 3;
    }
    if ((uVar1 & 8) != 0) {
      param_2[0x23] = param_2[0x23] & 0xbfffffff;
      param_2[0x23] = param_2[0x23] | 0x800000;
      *(undefined2 *)(param_2 + 0x21) = 2;
    }
    if ((uVar1 & 0x10) != 0) {
      *(undefined1 *)((int)param_2 + 0x11) = 3;
    }
    if ((uVar1 & 0x20) != 0) {
      *(undefined1 *)((int)param_2 + 0x11) = 7;
    }
    if ((uVar1 & 0x40) != 0) {
      *(undefined1 *)((int)param_2 + 0x11) = 10;
    }
    if ((char)uVar1 < '\0') {
      param_2[0x23] = param_2[0x23] | 8;
    }
    if ((uVar1 & 0x100) != 0) {
      param_2[0x24] = param_2[0x24] | 0x200;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x30))(*param_2);
    if (iVar2 == 1) {
      param_2[0x24] = param_2[0x24] | 0x10000000;
      return;
    }
    if (iVar2 == 2) {
      param_2[0x24] = param_2[0x24] | 0x8000000;
      return;
    }
    if (iVar2 == 3) {
      param_2[0x24] = param_2[0x24] | 0x4000000;
      return;
    }
    if (iVar2 == 4) {
      param_2[0x24] = param_2[0x24] | 0x2000000;
      return;
    }
    if (iVar2 == 5) {
      param_2[0x24] = param_2[0x24] | 0x1000000;
      return;
    }
    if (iVar2 == 6) {
      param_2[0x24] = param_2[0x24] | 0x800000;
      return;
    }
    if (iVar2 == 7) {
      param_2[0x24] = param_2[0x24] | 0x80000000;
      return;
    }
    if (iVar2 == 8) {
      param_2[0x24] = param_2[0x24] | 0x40000000;
      return;
    }
    if (iVar2 == 9) {
      param_2[0x24] = param_2[0x24] | 0x20000000;
      return;
    }
    if (iVar2 == 10) {
      param_2[0x24] = param_2[0x24] | 0x80000;
    }
  }
  return;
}

