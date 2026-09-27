// src/misc/UserData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F77F0..008F9FB0, 7 functions

#include "mgrr.h"

// 008F77F0  UserData::EntityUserDataListener::vf08  size=3  [class]
void UserData::EntityUserDataListener::vf08(void)

{
  return;
}

// 008F7800  UserData::PhantomUserDataListener::vf08  size=3  [class]
void UserData::PhantomUserDataListener::vf08(void)

{
  return;
}

// 008F8980  UserData::EntityUserDataListener::EntityUserDataListener  size=103  [class]
void UserData::EntityUserDataListener::EntityUserDataListener(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  DAT_01b35da8 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(4);
  if (DAT_01b35da8 == (undefined4 *)0x0) {
    DAT_01b35da8 = (undefined4 *)0x0;
  }
  else {
    *DAT_01b35da8 = vftable;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  DAT_01b35dac = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(4);
  if (DAT_01b35dac != (undefined4 *)0x0) {
    *DAT_01b35dac = PhantomUserDataListener::vftable;
    return;
  }
  DAT_01b35dac = (undefined4 *)0x0;
  return;
}

// 008F89F0  UserData::EntityUserDataListener::vf00  size=47  [class]
undefined4 * __thiscall UserData::EntityUserDataListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpEntityListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 008F8A20  UserData::PhantomUserDataListener::vf00  size=47  [class]
undefined4 * __thiscall UserData::PhantomUserDataListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpPhantomListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 008F9FA0  UserData::EntityUserDataListener::vf14  size=14  [class]
void UserData::EntityUserDataListener::vf14(undefined4 param_1)

{
  lib::Array<EntityHandle>::Array<EntityHandle>_6(param_1);
  return;
}

// 008F9FB0  UserData::PhantomUserDataListener::vf10  size=14  [class]
void UserData::PhantomUserDataListener::vf10(undefined4 param_1)

{
  lib::Array<EntityHandle>::Array<EntityHandle>_6(param_1);
  return;
}

