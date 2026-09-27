// src/unsorted/unit_00E9BFD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E9BFD0..00E9C110, 4 functions

#include "mgrr.h"

// 00E9BFD0  FUN_00e9bfd0  size=126  [run]
void FUN_00e9bfd0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 *local_c [2];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_c;
  local_c[0] = (undefined4 *)0x0;
  cVar1 = (**(code **)*param_1)();
  if (cVar1 == '\0') {
    FUN_00e9bc30(param_1);
  }
  else {
    lib::
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
    ::
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_2
              (param_1);
  }
  if (param_2 != 0) {
    lib::
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
    ::
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
              (local_c);
  }
  if (local_c[0] != (undefined4 *)0x0) {
    (**(code **)*local_c[0])(0);
    FUN_00dd48d0(local_c[0],0);
  }
  __security_check_cookie(local_4 ^ (uint)local_c);
  return;
}

// 00E9C050  FUN_00e9c050  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e9c050(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01dda764 & 1) == 0) {
    _DAT_01dda764 = _DAT_01dda764 | 1;
    DAT_01dda760 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda760;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x10;
  param_1[5] = FUN_00e9bfd0;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E9C100  FUN_00e9c100  size=13  [run]
void __thiscall FUN_00e9c100(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | param_2;
  return;
}

// 00E9C110  FUN_00e9c110  size=15  [run]
void __thiscall FUN_00e9c110(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & ~param_2;
  return;
}

