// src/misc/cHeapVariableBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3C60..00DD3C60, 1 functions

#include "types.h"

// 00DD3C60  cHeapVariableBase::createChildHeap  size=75  [class]
undefined4 __thiscall
cHeapVariableBase::createChildHeap(int param_1,undefined4 *param_2,int param_3)

{
  HANDLE pvVar1;
  
  if (*(int *)(param_1 + 0x50) < param_3) {
    FUN_00dd5650(&DAT_016c47d8,*(undefined4 *)(param_1 + 0x38));
  }
  pvVar1 = HeapCreate(1,0,0);
  if (pvVar1 != (HANDLE)0x0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - param_3;
    *param_2 = pvVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
    return 1;
  }
  return 0;
}

