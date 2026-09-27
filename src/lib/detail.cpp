// src/lib/detail.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401370..00401CB0, 4 functions

#include "mgrr.h"

// 00401370  lib::detail::SharedCoreImplBase::vf00  size=31  [class]
undefined4 * __thiscall lib::detail::SharedCoreImplBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004017B0  lib::detail::SharedCoreImpl<lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>,lib::helper::DeleterByAllocator<sys::AllocatorByHeap>,sys::AllocatorByHeap>::vf08  size=24  [class]
void __fastcall
lib::detail::
SharedCoreImpl<lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>,lib::helper::DeleterByAllocator<sys::AllocatorByHeap>,sys::AllocatorByHeap>
::vf08(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  FUN_00dd48d0(param_1,0);
  return;
}

// 004017D0  lib::detail::SharedCoreImpl<lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>,lib::helper::DeleterByAllocator<sys::AllocatorByHeap>,sys::AllocatorByHeap>::vf00  size=31  [class]
undefined4 * __thiscall
lib::detail::
SharedCoreImpl<lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>,lib::helper::DeleterByAllocator<sys::AllocatorByHeap>,sys::AllocatorByHeap>
::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SharedCoreImplBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00401CB0  lib::detail::SharedCoreImpl<lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>,lib::helper::DeleterByAllocator<sys::AllocatorByHeap>,sys::AllocatorByHeap>::vf04  size=42  [class]
void __fastcall
lib::detail::
SharedCoreImpl<lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>,lib::helper::DeleterByAllocator<sys::AllocatorByHeap>,sys::AllocatorByHeap>
::vf04(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(0);
    FUN_00dd48d0(puVar1,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

