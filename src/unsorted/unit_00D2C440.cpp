// src/unsorted/unit_00D2C440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D2C440..00D2C440, 1 functions

#include "mgrr.h"

// 00D2C440  FUN_00d2c440  size=107  [run]
int FUN_00d2c440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x1a0,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCodecWindowParts::cCodecWindowParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cCodecWindowParts";
      *(undefined4 *)(iVar1 + 8) = 9;
      uVar2 = FUN_00d29960(0xc);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(undefined4 *)(iVar1 + 0x174) = param_1;
      *(undefined4 *)(iVar1 + 0x178) = param_2;
      *(undefined4 *)(iVar1 + 0x17c) = param_3;
      DAT_018b4410 = param_2;
    }
    return iVar1;
  }
  return 0;
}

