// src/graphics/cLightDataMinimumEv.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A40C10..00A40C40, 3 functions

#include "types.h"

// 00A40C10  cLightDataMinimumEv::cLightDataMinimumEv  size=18  [class]
undefined4 * __fastcall cLightDataMinimumEv::cLightDataMinimumEv(undefined4 *param_1)

{
  cLightApplyScale::cLightApplyScale_8();
  *param_1 = vftable;
  return param_1;
}

// 00A40C30  cLightDataMinimumEv::vf00  size=6  [class]
undefined ** cLightDataMinimumEv::vf00(void)

{
  return &PTR_s_cLightDataMinimumEv_0189f6b8;
}

// 00A40C40  cLightDataMinimumEv::vf04  size=30  [class]
undefined4 __thiscall cLightDataMinimumEv::vf04(undefined4 param_1,byte param_2)

{
  cObject::cObject_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

