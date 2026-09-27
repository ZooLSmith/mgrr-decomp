// lib/havok/unit_00915010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00915010..00915010, 1 functions

#include "mgrr.h"
#include "hkpCollisionListener.h"

// 00915010  hkpCollisionListener::vf0C  size=47  [run]
undefined4 * __thiscall hkpCollisionListener::vf0C(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpContactListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

