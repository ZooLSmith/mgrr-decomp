// src/misc/cIndexBufferHeap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F99B40..00F99B40, 1 functions

#include "mgrr.h"

// 00F99B40  cIndexBufferHeap::allocateBuffer  size=208  [class]
undefined4 __thiscall cIndexBufferHeap::allocateBuffer(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_8;
  
  uVar4 = (*(uint *)(param_1 + 0xc) * param_3 + 3 & 0xfffffffc) / *(uint *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  piVar1 = (int *)(param_1 + 0x14);
  local_8 = iVar5 + uVar4;
  if (local_8 <= *(int *)(param_1 + 0x10)) {
    do {
      LOCK();
      iVar2 = *piVar1;
      if (iVar5 == iVar2) {
        *piVar1 = local_8;
      }
      UNLOCK();
      if (iVar5 == iVar2) {
        iVar2 = *(int *)(param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 0x18);
        *param_2 = *(undefined4 *)(param_1 + 4);
        param_2[4] = iVar5;
        param_2[1] = 0;
        param_2[5] = *(undefined4 *)(param_1 + 0xc);
        param_2[2] = param_1;
        param_2[6] = param_3;
        param_2[3] = iVar2 * iVar5 + iVar3;
        return 1;
      }
      iVar5 = *piVar1;
      local_8 = iVar5 + uVar4;
    } while (local_8 <= *(int *)(param_1 + 0x10));
  }
  FUN_00dd5650(&DAT_016eb3e8);
  return 0;
}

