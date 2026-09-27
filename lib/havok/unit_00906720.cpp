// lib/havok/unit_00906720.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00906720..00906720, 1 functions

#include "types.h"

// 00906720  hkpCdBodyPairCollector::hkpCdBodyPairCollector_2  size=88  [run]
void __fastcall hkpCdBodyPairCollector::hkpCdBodyPairCollector_2(int *param_1)

{
  int iVar1;
  
  *param_1 = (int)RayCastPenetrationWork::vftable;
  if (param_1[9] != 0) {
    FUN_010060a0();
  }
  if (param_1[8] != 0) {
    FUN_010060a0();
  }
  if ((char)param_1[5] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 != 0) {
      FUN_00905560(param_1[0xe]);
    }
    (**(code **)(*param_1 + 0x1c))();
  }
  param_1[10] = (int)vftable;
  *param_1 = (int)RayCastWork::vftable;
  return;
}

