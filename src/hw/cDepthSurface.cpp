// src/hw/cDepthSurface.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F99FA0..00FAA650, 3 functions

#include "types.h"

// 00F99FA0  Hw::cDepthSurface::cDepthSurface_2  size=23  [class]
void __fastcall Hw::cDepthSurface::cDepthSurface_2(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  return;
}

// 00FA4730  Hw::cDepthSurface::cDepthSurface  size=75  [class]
void __fastcall Hw::cDepthSurface::cDepthSurface(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = vftable;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  FUN_00fa16d0(param_1[2]);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

// 00FAA650  Hw::cDepthSurface::vf00  size=95  [class]
undefined4 * __thiscall Hw::cDepthSurface::vf00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  
  *param_1 = vftable;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  FUN_00fa16d0(param_1[2]);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

