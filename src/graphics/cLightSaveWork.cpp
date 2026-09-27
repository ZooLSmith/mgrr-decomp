// src/graphics/cLightSaveWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A35070..00A35080, 2 functions

#include "mgrr.h"
#include "cLightSaveWork.h"

// 00A35070  cLightSaveWork::vf00  size=6  [class]
undefined ** cLightSaveWork::vf00(void)

{
  return &PTR_s_cLightSaveWork_0189f5b4;
}

// 00A35080  cLightSaveWork::vf04  size=38  [class]
undefined4 * __thiscall cLightSaveWork::vf04(undefined4 *param_1,byte param_2)

{
  param_1[0x19] = cObject::vftable;
  *param_1 = cObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

