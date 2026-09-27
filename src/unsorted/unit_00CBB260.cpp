// src/unsorted/unit_00CBB260.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB260..00CBB260, 1 functions

#include "mgrr.h"

// 00CBB260  FUN_00cbb260  size=78  [run]
void FUN_00cbb260(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((byte)DAT_01bea090 & 0x40) != 0) {
    uVar1 = 0;
    uVar2 = 0xffffffff;
    do {
      if ((&DAT_01dbfcd0)[uVar1] == 0) {
        if (uVar2 == 0xffffffff) {
          uVar2 = uVar1;
        }
      }
      else {
        uVar3 = uVar1;
        if ((&DAT_01dbfcd0)[uVar1] == param_1) break;
      }
      uVar3 = uVar2;
      uVar1 = uVar1 + 1;
      uVar2 = uVar3;
    } while (uVar1 < 0x14);
    if (uVar3 != 0xffffffff) {
      (&DAT_01dbfcd0)[uVar3] = param_1;
      (&DAT_01dbfc80)[uVar3] = 1;
    }
  }
  return;
}

