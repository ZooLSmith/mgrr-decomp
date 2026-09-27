// src/misc/esp53.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0C00..00F25110, 2 functions

#include "mgrr.h"
#include "esp53.h"

// 00ED0C00  esp53::vf00  size=54  [class]
undefined4 __thiscall esp53::vf00(undefined4 param_1,byte param_2)

{
  FUN_009de370();
  Spline<float>::Spline<float>_2();
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F25110  esp53::vf08  size=42  [class]
void esp53::vf08(void)

{
  int iVar1;
  
  esp12::vf08();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c800();
    FUN_00ec7f70(iVar1 + 0x10);
  }
  return;
}

