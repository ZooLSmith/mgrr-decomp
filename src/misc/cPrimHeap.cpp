// src/misc/cPrimHeap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9B1F0..00F9B1F0, 1 functions

#include "mgrr.h"

// 00F9B1F0  cPrimHeap::allocBuffer  size=177  [class]
int __thiscall cPrimHeap::allocBuffer(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  piVar1 = (int *)(param_1 + 0x10);
  uVar5 = iVar3 + -1 + param_3;
  while( true ) {
    uVar5 = uVar5 & ~(param_3 - 1U);
    iVar4 = param_2 + uVar5;
    if (*(int *)(param_1 + 0xc) < iVar4) {
      FUN_00dd5650(&DAT_016eb7b0);
      return 0;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar4;
    }
    UNLOCK();
    if (iVar3 == iVar2) break;
    iVar3 = *piVar1;
    uVar5 = (param_3 - 1U) + iVar3;
  }
  return *(int *)(param_1 + 8) + uVar5;
}

