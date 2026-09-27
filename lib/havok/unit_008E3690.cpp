// lib/havok/unit_008E3690.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E3690..008E3690, 1 functions

#include "mgrr.h"
#include "hkpCharacterRigidBodyListener.h"

// 008E3690  hkpCharacterRigidBodyListener::vf00  size=50  [run]
undefined4 * __thiscall hkpCharacterRigidBodyListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

