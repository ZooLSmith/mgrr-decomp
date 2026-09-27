// src/lib/detail.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401370..004017D0, 2 functions

#include "types.h"

// 00401370  lib::detail::SharedCoreImplBase::vf00  size=31  [class]
undefined4 * __thiscall lib::detail::SharedCoreImplBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
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

