// src/collision/RayCastPenetrationWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00906780..009067C0, 3 functions

#include "mgrr.h"
#include "RayCastPenetrationWork.h"

// 00906780  RayCastPenetrationWork::vf00  size=6  [class]
undefined * RayCastPenetrationWork::vf00(void)

{
  return &DAT_01b35df4;
}

// 009067B0  FUN_009067b0  size=11  [between]
bool __fastcall FUN_009067b0(int param_1)

{
  return *(char *)(param_1 + 0x2c) != '\0';
}

// 009067C0  RayCastPenetrationWork::vf04  size=30  [class]
undefined4 __thiscall RayCastPenetrationWork::vf04(undefined4 param_1,byte param_2)

{
  hkpCdBodyPairCollector::hkpCdBodyPairCollector_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

