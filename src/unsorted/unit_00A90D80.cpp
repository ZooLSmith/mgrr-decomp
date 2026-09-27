// src/unsorted/unit_00A90D80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A90D80..00A912E0, 4 functions

#include "types.h"

// 00A90D80  FUN_00a90d80  size=71  [run]
void __thiscall FUN_00a90d80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x10) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00a90dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00A90DD0  FUN_00a90dd0  size=155  [run]
longlong __fastcall FUN_00a90dd0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x10));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00A91250  FUN_00a91250  size=39  [run]
void __fastcall FUN_00a91250(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00A912E0  FUN_00a912e0  size=286  [run]
void __fastcall FUN_00a912e0(undefined4 *param_1)

{
  undefined4 local_14;
  
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = local_14;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[0x30] = 0;
  param_1[8] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x25] = 0;
  param_1[0xb] = 0;
  param_1[0x27] = 0;
  param_1[0xc] = 0;
  param_1[0x39] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x2f] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x4c] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x4b] = 0x3f800000;
  param_1[0x46] = 0x3f800000;
  param_1[0x41] = 0x3f800000;
  param_1[0x3c] = 0x3f800000;
  return;
}

