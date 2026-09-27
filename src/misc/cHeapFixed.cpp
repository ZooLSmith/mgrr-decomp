// src/misc/cHeapFixed.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3DD0..00DD3DD0, 1 functions

#include "types.h"

// 00DD3DD0  cHeapFixed::allocImpl  size=198  [class]
undefined4 * __thiscall cHeapFixed::allocImpl(int param_1,int param_2,int param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (((param_4 != 0) || (*(uint *)(param_1 + 0x48) < (param_2 + 3U & 0xfffffffc))) ||
     ((*(int *)(param_1 + 0x50) - 1U & param_3 + 3U & 0xfffffffc) != 0)) {
    return (undefined4 *)0x0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  if (puVar1 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    FUN_00dd5650(&DAT_016c4820,*(undefined4 *)(param_1 + 0x38));
    return (undefined4 *)0x0;
  }
  *(undefined4 *)(param_1 + 0x58) = puVar1[1];
  if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
    *(undefined4 *)puVar1[1] = 0;
  }
  *puVar1 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x5c);
  puVar1[1] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar1;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  *(undefined4 **)(param_1 + 0x5c) = puVar1;
  _memset(puVar1 + 3,0xef,*(size_t *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return puVar1 + 3;
}

