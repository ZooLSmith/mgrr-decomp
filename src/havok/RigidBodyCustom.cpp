// src/havok/RigidBodyCustom.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00919D60..00919D60, 1 functions

#include "mgrr.h"
#include "RigidBodyCustom.h"

// 00919D60  RigidBodyCustom::vf00  size=100  [class]
undefined4 * __thiscall RigidBodyCustom::vf00(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *piVar2;
  LPVOID pvVar3;
  
  uVar1 = param_1[3];
  *param_1 = vftable;
  if ((uVar1 != 0) &&
     (piVar2 = *(int **)((-(uint)(uVar1 != 0) & uVar1) + 0x4c), piVar2 != (int *)0x0)) {
    FUN_0118fa20(piVar2);
    (**(code **)(*piVar2 + 0xc))(1);
  }
  hkpRigidBody::~hkpRigidBody();
  if ((param_2 & 1) != 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(param_1,0x220);
  }
  return param_1;
}

