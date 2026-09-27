// lib/havok/unit_008E2CB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E2CB0..008E30A0, 6 functions

#include "mgrr.h"
#include "hkReferencedObject.h"
#include "hkpCharacterControllerCinfo.h"
#include "hkpCharacterProxyCinfo.h"
#include "hkpCharacterProxyListener.h"
#include "hkpCharacterRigidBodyCinfo.h"

// 008E2CB0  hkReferencedObject::vf00  size=50  [run]
undefined4 * __thiscall hkReferencedObject::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 008E2ED0  hkpCharacterControllerCinfo::vf00  size=50  [run]
undefined4 * __thiscall hkpCharacterControllerCinfo::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 008E2F40  hkpCharacterProxyCinfo::vf00  size=50  [run]
undefined4 * __thiscall hkpCharacterProxyCinfo::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 008E2FB0  hkpCharacterProxyListener::vf00  size=47  [run]
undefined4 * __thiscall hkpCharacterProxyListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 008E2FE0  hkpCharacterRigidBodyCinfo::hkpCharacterRigidBodyCinfo_2  size=142  [run]
void __fastcall hkpCharacterRigidBodyCinfo::hkpCharacterRigidBodyCinfo_2(undefined4 *param_1)

{
  param_1[0xc] = 0x42c80000;
  param_1[0x15] = 0x447a0000;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xd] = 0;
  param_1[0x14] = 0x3f860a92;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[0x16] = 0x3f000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xe] = 0x41a00000;
  param_1[0xf] = 0xbdcccccd;
  param_1[0x17] = 0x41200000;
  param_1[0x18] = 0x3dcccccd;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0x1a] = 0xa0ff0000;
  param_1[3] = 0;
  param_1[0x19] = 0;
  return;
}

// 008E30A0  hkpCharacterRigidBodyCinfo::vf00  size=50  [run]
undefined4 * __thiscall hkpCharacterRigidBodyCinfo::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

