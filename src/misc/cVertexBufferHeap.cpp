// src/misc/cVertexBufferHeap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F99E10..00F99E10, 1 functions

#include "mgrr.h"

// 00F99E10  cVertexBufferHeap::allocateBuffer  size=208  [class]
undefined4 __thiscall
cVertexBufferHeap::allocateBuffer(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  uVar3 = param_3 * param_4 + 3U & 0xfffffffc;
  if (param_1[6] == 0) {
    return 0;
  }
  piVar1 = param_1 + 5;
  iVar4 = *piVar1;
  local_8 = iVar4 + uVar3;
  if (local_8 <= (int)param_1[4]) {
    do {
      LOCK();
      iVar2 = *piVar1;
      if (iVar4 == iVar2) {
        *piVar1 = local_8;
      }
      UNLOCK();
      if (iVar4 == iVar2) {
        *param_2 = *param_1;
        param_2[6] = param_3;
        param_2[5] = iVar4;
        param_2[3] = param_1;
        param_2[1] = 0;
        param_2[7] = param_4;
        param_2[4] = param_1[6] + iVar4;
        return 1;
      }
      iVar4 = *piVar1;
      local_8 = iVar4 + uVar3;
    } while (local_8 <= (int)param_1[4]);
  }
  FUN_00dd5650(&DAT_016eb498,uVar3,local_8,param_1[4],*piVar1);
  return 0;
}

