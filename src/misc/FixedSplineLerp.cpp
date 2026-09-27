// src/misc/FixedSplineLerp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECFA70..00ED1CF0, 2 functions

#include "types.h"

// 00ECFA70  FixedSplineLerp<Hw::cVec4>::vf00  size=85  [class]
undefined4 * __thiscall FixedSplineLerp<Hw::cVec4>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_1[10] != 0) {
    FUN_00dd3d90(param_1[8],0);
    param_1[10] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = Spline<Hw::cVec4>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED1CF0  FixedSplineLerp<Hw::cVec4>::FixedSplineLerp<Hw::cVec4>  size=90  [class]
undefined4 * __fastcall FixedSplineLerp<Hw::cVec4>::FixedSplineLerp<Hw::cVec4>(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = cEspStrip2p::vftable;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x151] = vftable;
  return param_1;
}

