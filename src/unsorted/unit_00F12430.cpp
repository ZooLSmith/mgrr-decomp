// src/unsorted/unit_00F12430.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F12430..00F12430, 1 functions

#include "types.h"

// 00F12430  FUN_00f12430  size=78  [run]
void __fastcall FUN_00f12430(int param_1)

{
  int iVar1;
  int iVar2;
  
  EspReadWriteLock::enterWrite();
  iVar2 = *(int *)(param_1 + 0x420);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  FUN_00eaac50();
  return;
}

