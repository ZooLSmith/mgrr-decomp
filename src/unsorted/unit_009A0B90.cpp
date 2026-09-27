// src/unsorted/unit_009A0B90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A0B90..009A0B90, 1 functions

#include "types.h"

// 009A0B90  FUN_009a0b90  size=68  [run]
int FUN_009a0b90(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x3b0,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCustomizePointDisp::cCustomizePointDisp_2();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cCustomizeSelMenu";
      FUN_00d29ca0(0x68,9);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

