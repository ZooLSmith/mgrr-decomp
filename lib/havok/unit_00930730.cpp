// lib/havok/unit_00930730.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00930730..009307C0, 3 functions

#include "types.h"

// 00930730  hkMallocAllocator::vf00  size=14  [run]
undefined4 __fastcall hkMallocAllocator::vf00(undefined4 param_1)

{
  hkMemoryAllocator::~hkMemoryAllocator();
  return param_1;
}

// 00930740  hkBaseObject::hkBaseObject_119  size=66  [run]
void __fastcall hkBaseObject::hkBaseObject_119(undefined4 *param_1)

{
  *param_1 = hkpWorldCinfo::vftable;
  if (param_1[0x1a] != 0) {
    FUN_010060a0();
  }
  param_1[0x1a] = 0;
  if (param_1[0x16] != 0) {
    FUN_010060a0();
  }
  param_1[0x16] = 0;
  if (param_1[0x15] != 0) {
    FUN_010060a0();
  }
  param_1[0x15] = 0;
  *param_1 = vftable;
  return;
}

// 009307C0  hkpWorldCinfo::vf00  size=113  [run]
undefined4 * __thiscall hkpWorldCinfo::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if (param_1[0x1a] != 0) {
    FUN_010060a0();
  }
  param_1[0x1a] = 0;
  if (param_1[0x16] != 0) {
    FUN_010060a0();
  }
  param_1[0x16] = 0;
  if (param_1[0x15] != 0) {
    FUN_010060a0();
  }
  param_1[0x15] = 0;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

