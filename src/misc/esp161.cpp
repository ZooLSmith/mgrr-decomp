// src/misc/esp161.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0B90..009F6E50, 3 functions

#include "types.h"

// 009D0B90  esp161::vf08  size=42  [class]
void esp161::vf08(void)

{
  int iVar1;
  
  esp11::vf08();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c800();
    FUN_00ec7f70(iVar1 + 0x10);
  }
  return;
}

// 009F6DB0  esp161::esp161  size=18  [class]
undefined4 * __fastcall esp161::esp161(undefined4 *param_1)

{
  ModelShaderWtrJackModule::ModelShaderWtrJackModule();
  *param_1 = vftable;
  return param_1;
}

// 009F6E50  esp161::vf00  size=43  [class]
undefined4 __thiscall esp161::vf00(undefined4 param_1,byte param_2)

{
  Spline<float>::Spline<float>();
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

