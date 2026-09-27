// src/unsorted/unit_00D37F40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D37F40..00D37F40, 1 functions

#include "mgrr.h"

// 00D37F40  FUN_00d37f40  size=82  [run]
int FUN_00d37f40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xa34,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cGameResultRankDisp::cGameResultRankDisp();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cGameAllResult";
      *(undefined4 *)(iVar1 + 8) = 10;
      uVar2 = FUN_00d29960(0x82);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

