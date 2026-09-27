// src/havok/HavokMallocAllocator.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00930D10..00930DC0, 3 functions

#include "types.h"

// 00930D10  HavokMallocAllocator::vf04  size=97  [class]
int __thiscall HavokMallocAllocator::vf04(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 8);
  }
  iVar1 = FUN_00dd29b0(param_2,*(undefined4 *)(param_1 + 4),0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00dd29b0(param_2,*(undefined4 *)(param_1 + 4),0,0);
    FUN_00dd5650(&DAT_0164e92c);
  }
  return iVar1;
}

// 00930D80  HavokMallocAllocator::vf08  size=54  [class]
void __thiscall HavokMallocAllocator::vf08(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 != 0) {
      FUN_00dd5650(&DAT_0164e968,param_3);
      return;
    }
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_3;
    FUN_00dd48d0(param_2,0);
  }
  return;
}

// 00930DC0  HavokMallocAllocator::vf00  size=14  [class]
undefined4 __fastcall HavokMallocAllocator::vf00(undefined4 param_1)

{
  hkMemoryAllocator::~hkMemoryAllocator();
  return param_1;
}

