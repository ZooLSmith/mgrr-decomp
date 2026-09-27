// lib/havok/unit_00906630.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00906630..00906630, 1 functions

#include "mgrr.h"
#include "hkpFirstCdBodyPairCollector.h"

// 00906630  hkpFirstCdBodyPairCollector::vf00  size=47  [run]
undefined4 * __thiscall hkpFirstCdBodyPairCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpCdBodyPairCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return param_1;
}

