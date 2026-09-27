// src/unsorted/unit_00ED8680.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8680..00ED8680, 1 functions

#include "mgrr.h"

// 00ED8680  FUN_00ed8680  size=264  [run]
void __fastcall FUN_00ed8680(int param_1)

{
  short sVar1;
  
  sVar1 = FUN_00dde2a0(0,7);
  if (sVar1 == *(short *)(param_1 + 0x464)) {
    do {
      sVar1 = FUN_00dde2a0(0,7);
    } while (sVar1 == *(short *)(param_1 + 0x464));
  }
  *(short *)(param_1 + 0x464) = sVar1;
  switch(sVar1) {
  case 0:
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfff3ffff;
    *(undefined4 *)(param_1 + 0x460) = 0;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80000;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffbffff;
    *(undefined4 *)(param_1 + 0x460) = 0;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x40000;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfff7ffff;
    *(undefined4 *)(param_1 + 0x460) = 0;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0xc0000;
    *(undefined4 *)(param_1 + 0x460) = 0;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x45c) = 0;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x45c) = 1;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x45c) = 0x10000;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x45c) = 0x10001;
    break;
  default:
    goto switchD_00ed86ce_default;
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfff3ffff;
  *(undefined4 *)(param_1 + 0x460) = 1;
switchD_00ed86ce_default:
  return;
}

