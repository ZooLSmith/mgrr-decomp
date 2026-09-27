// src/unsorted/unit_00CBBC70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBBC70..00CBBC70, 1 functions

#include "mgrr.h"

// 00CBBC70  FUN_00cbbc70  size=149  [run]
void FUN_00cbbc70(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((DAT_01dc1490 != 0) && (DAT_01dc0ec8 == 0)) && (param_1 != 0)) {
    uVar1 = 0;
    do {
      if (param_1 == (&DAT_01dc0fa0)[uVar1]) {
        (&DAT_01dc0f20)[uVar1] = param_1;
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x20);
    uVar2 = 0;
    uVar1 = 0xffffffff;
    do {
      if ((&DAT_01dc0fa0)[uVar2] == 0) {
        if (uVar1 == 0xffffffff) {
          uVar1 = uVar2;
        }
      }
      else {
        uVar3 = uVar2;
        if ((&DAT_01dc0f20)[uVar2] == param_1) break;
      }
      uVar3 = uVar1;
      uVar2 = uVar2 + 1;
      uVar1 = uVar3;
    } while (uVar2 < 0x20);
    if (uVar3 != 0xffffffff) {
      (&DAT_01dc0f20)[uVar3] = param_1;
      (&DAT_01dc1020)[uVar3] = param_2;
      (&DAT_01dc10a0)[uVar3] = param_3;
      (&DAT_01dbfa98)[uVar3] = 1;
    }
  }
  return;
}

