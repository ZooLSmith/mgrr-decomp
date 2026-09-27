// src/collision/RigidBodyCollisionListener.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00910CD0..0091D690, 5 functions

#include "mgrr.h"
#include "RigidBodyCollisionListener.h"

// 00910CD0  RigidBodyCollisionListener::contactProcessCallback  size=3  [class]
void RigidBodyCollisionListener::contactProcessCallback(void)

{
  return;
}

// 00910CE0  RigidBodyCollisionListener::vf14  size=3  [class]
void RigidBodyCollisionListener::vf14(void)

{
  return;
}

// 00919470  RigidBodyCollisionListener::vf1C  size=49  [class]
void RigidBodyCollisionListener::vf1C(int *param_1)

{
  FUN_0092f1c0((int)*(char *)(*param_1 + 0x10) + *param_1,
               (int)*(char *)(param_1[1] + 0x10) + param_1[1],param_1[3],param_1[7] == 0);
  return;
}

// 0091D5E0  RigidBodyCollisionListener::RigidBodyCollisionListener  size=125  [class]
undefined4 * __thiscall
RigidBodyCollisionListener::RigidBodyCollisionListener(undefined4 *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  
  *param_1 = vftable;
  param_1[1] = param_2;
  FUN_0118fe00(param_1);
  if (param_2 != 0) {
    FUN_004066f0();
    puVar2 = (uint *)(-(uint)(*(uint *)(param_2 + 0xc) != 0) & *(uint *)(param_2 + 0xc));
    *puVar2 = *puVar2 | 0x20000;
    puVar2[0x13] = (uint)param_1;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return param_1;
}

// 0091D690  RigidBodyCollisionListener::vf0C  size=47  [class]
undefined4 * __thiscall RigidBodyCollisionListener::vf0C(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpContactListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

