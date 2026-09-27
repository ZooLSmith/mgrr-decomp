// lib/havok/unit_005DC0F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005DC0F0..005DC150, 2 functions

#include "mgrr.h"
#include "hkpCdBodyPairCollector.h"
#include "hkpPhantomOverlapListener.h"

// 005DC0F0  hkpCdBodyPairCollector::vf00  size=47  [run]
undefined4 * __thiscall hkpCdBodyPairCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 005DC150  hkpPhantomOverlapListener::vf08  size=47  [run]
undefined4 * __thiscall hkpPhantomOverlapListener::vf08(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

