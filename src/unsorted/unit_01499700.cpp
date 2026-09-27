// src/unsorted/unit_01499700.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01499700..0149977A, 4 functions

#include "types.h"

// 01499700  FUN_01499700  size=35  [run]
void FUN_01499700(int param_1,int param_2)

{
  BOOL BVar1;
  
  if (*(int *)(param_1 + 0x10) != param_2) {
    BVar1 = SetThreadPriority(*(HANDLE *)(param_1 + 0xc),param_2);
    if (BVar1 != 0) {
      *(int *)(param_1 + 0x10) = param_2;
    }
  }
  return;
}

// 0149972B  FUN_0149972b  size=71  [run]
void FUN_0149972b(uint param_1,uint param_2)

{
  uint uVar1;
  uint dwThreadAffinityMask;
  HANDLE hProcess;
  BOOL BVar2;
  DWORD_PTR DVar3;
  
  dwThreadAffinityMask = param_2;
  uVar1 = param_1;
  if (*(uint *)(param_1 + 0x18) != param_2) {
    hProcess = GetCurrentProcess();
    BVar2 = GetProcessAffinityMask(hProcess,&param_1,&param_2);
    if (BVar2 != 0) {
      param_1 = 0xffffffff;
    }
    if ((param_1 & dwThreadAffinityMask) != 0) {
      DVar3 = SetThreadAffinityMask(*(HANDLE *)(uVar1 + 0xc),dwThreadAffinityMask);
      if (DVar3 != 0) {
        *(uint *)(uVar1 + 0x18) = dwThreadAffinityMask;
      }
    }
  }
  return;
}

// 01499772  FUN_01499772  size=8  [run]
undefined4 FUN_01499772(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// 0149977A  FUN_0149977a  size=10  [run]
void FUN_0149977a(undefined4 param_1)

{
  DAT_0225bd2c = param_1;
  return;
}

