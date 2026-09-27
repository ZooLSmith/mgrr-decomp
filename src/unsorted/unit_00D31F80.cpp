// src/unsorted/unit_00D31F80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D31F80..00D31FE0, 2 functions

#include "mgrr.h"

// 00D31F80  FUN_00d31f80  size=72  [run]
int FUN_00d31f80(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xbc,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cQTEButtonParts::cQTEButtonParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cQTEButtonParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0x34);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D31FE0  FUN_00d31fe0  size=72  [run]
int FUN_00d31fe0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x18c,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCustomObjCtrlManager::cCustomObjCtrlManager();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cQTEButtonPCParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0x35);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

