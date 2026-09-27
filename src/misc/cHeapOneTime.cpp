// src/misc/cHeapOneTime.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3FF0..00DD3FF0, 1 functions

#include "types.h"

// 00DD3FF0  cHeapOneTime::allocImpl  size=208  [class]
uint __thiscall cHeapOneTime::allocImpl(int param_1,int param_2,int param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2 + 3U & 0xfffffffc;
  uVar5 = param_3 + 3U & 0xfffffffc;
  if ((param_4 == 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    if (*(int *)(param_1 + 0x20) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uVar2 = *(uint *)(param_1 + 0x44);
    uVar3 = *(int *)(param_1 + 0x4c) + 0xf + uVar5 & ~(uVar5 - 1);
    uVar5 = uVar3 + uVar4;
    if (uVar5 <= uVar2) {
      *(int *)(uVar3 - 4) = param_1;
      puVar1 = (undefined4 *)(uVar3 - 0x10);
      if (*(int *)(param_1 + 0x50) == 0) {
        *(undefined4 **)(param_1 + 0x50) = puVar1;
        *puVar1 = 0;
      }
      else {
        *(undefined4 **)(*(int *)(param_1 + 0x54) + 4) = puVar1;
        *puVar1 = *(undefined4 *)(param_1 + 0x54);
      }
      *(undefined4 **)(param_1 + 0x54) = puVar1;
      *(undefined4 *)(uVar3 - 0xc) = 0;
      *(uint *)(uVar3 - 8) = uVar4 + 0x10;
      *(uint *)(param_1 + 0x4c) = uVar5;
      *(uint *)(param_1 + 0x58) = uVar2 - uVar5;
      if (*(int *)(param_1 + 0x20) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return uVar3;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  FUN_00dd5650(&DAT_016c48a4,*(undefined4 *)(param_1 + 0x38));
  return 0;
}

