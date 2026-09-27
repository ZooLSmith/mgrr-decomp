// src/unsorted/unit_00CB8E60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8E60..00CB8E60, 1 functions

#include "mgrr.h"

// 00CB8E60  FUN_00cb8e60  size=89  [run]
void FUN_00cb8e60(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((byte)DAT_01bea090 & 0x40) != 0) {
    uVar1 = 0;
    uVar2 = 0xffffffff;
    do {
      if ((&DAT_01dc0080)[uVar1] == -1) {
        if (uVar2 == 0xffffffff) {
          uVar2 = uVar1;
        }
      }
      else {
        uVar3 = uVar1;
        if ((&DAT_01dc0080)[uVar1] == param_1) break;
      }
      uVar3 = uVar2;
      uVar1 = uVar1 + 1;
      uVar2 = uVar3;
    } while (uVar1 < 10);
    if (uVar3 != 0xffffffff) {
      (&DAT_01dc0080)[uVar3] = param_1;
      (&DAT_01dc0058)[uVar3] = param_2;
      (&DAT_01dc0030)[uVar3] = 1;
    }
  }
  return;
}

