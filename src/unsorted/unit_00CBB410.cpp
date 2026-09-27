// src/unsorted/unit_00CBB410.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB410..00CBB410, 1 functions

#include "mgrr.h"

// 00CBB410  FUN_00cbb410  size=108  [run]
void FUN_00cbb410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar1 = 0;
    uVar2 = 0xffffffff;
    do {
      if ((&DAT_01dbfbe0)[uVar1] == 0) {
        if (uVar2 == 0xffffffff) {
          uVar2 = uVar1;
        }
      }
      else {
        uVar3 = uVar1;
        if ((&DAT_01dbfbe0)[uVar1] == param_1) break;
      }
      uVar3 = uVar2;
      uVar1 = uVar1 + 1;
      uVar2 = uVar3;
    } while (uVar1 < 0x14);
    if (uVar3 != 0xffffffff) {
      (&DAT_01dbfc30)[uVar3] = param_4;
      (&DAT_01dbfbe0)[uVar3] = param_1;
      (&DAT_01dc0e20)[uVar3] = param_2;
      (&DAT_01dc0e70)[uVar3] = param_3;
      (&DAT_01dbfb90)[uVar3] = 1;
    }
  }
  return;
}

