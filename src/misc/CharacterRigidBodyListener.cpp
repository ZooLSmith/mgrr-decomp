// src/misc/CharacterRigidBodyListener.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E0A90..008E3BA0, 6 functions

#include "types.h"

// 008E0A90  CharacterRigidBodyListener::vf0C  size=3  [class]
void CharacterRigidBodyListener::vf0C(void)

{
  return;
}

// 008E0AA0  CharacterRigidBodyListener::vf10  size=3  [class]
void CharacterRigidBodyListener::vf10(void)

{
  return;
}

// 008E0AB0  CharacterRigidBodyListener::vf14  size=3  [class]
void CharacterRigidBodyListener::vf14(void)

{
  return;
}

// 008E0AC0  CharacterRigidBodyListener::vf18  size=3  [class]
void CharacterRigidBodyListener::vf18(void)

{
  return;
}

// 008E0AD0  CharacterRigidBodyListener::vf1C  size=3  [class]
void CharacterRigidBodyListener::vf1C(void)

{
  return;
}

// 008E3BA0  CharacterRigidBodyListener::vf00  size=50  [class]
undefined4 * __thiscall CharacterRigidBodyListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

