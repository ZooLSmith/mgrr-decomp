// src/collision/CollisionIDAllocatorImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77A40..00D7AC70, 5 functions

#include "types.h"

// 00D77A40  CollisionIDAllocatorImplement::vf00  size=45  [class]
void __fastcall CollisionIDAllocatorImplement::vf00(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

// 00D77A70  CollisionIDAllocatorImplement::vf04  size=60  [class]
void __thiscall CollisionIDAllocatorImplement::vf04(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
  }
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2);
  }
  return;
}

// 00D77AB0  CollisionIDAllocatorImplement::vf0C  size=14  [class]
bool __fastcall CollisionIDAllocatorImplement::vf0C(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x2c) + 8) != 0;
}

// 00D796E0  CollisionIDAllocatorImplement::vf08  size=64  [class]
undefined4 __fastcall CollisionIDAllocatorImplement::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 4) + -4 + *(int *)(iVar1 + 8) * 4);
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(iVar1 + 8) != 0)) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  }
  return uVar2;
}

// 00D7AC70  CollisionIDAllocatorImplement::vf10  size=77  [class]
undefined4 * __thiscall CollisionIDAllocatorImplement::vf10(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = CollisionIDAllocator::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

