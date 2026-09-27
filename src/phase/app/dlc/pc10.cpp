// src/phase/app/dlc/pc10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B250..00D70860, 7 functions

#include "mgrr.h"
#include "cPc10.h"

// 00D4B250  cPc10::vf08  size=44  [class]
void cPc10::vf08(void)

{
  int iVar1;
  
  iVar1 = FUN_0094e9c0(0x3855170f,6);
  if (iVar1 != 0) {
    FUN_00c82240(0x14);
    FUN_00c82240(0x13);
  }
  return;
}

// 00D4B280  cPc10::vf0C  size=1  [class]
void cPc10::vf0C(void)

{
  return;
}

// 00D4B290  cPc10::vf10  size=1  [class]
void cPc10::vf10(void)

{
  return;
}

// 00D4B2A0  cPc10::vf14  size=3  [class]
void cPc10::vf14(void)

{
  return;
}

// 00D4B2B0  cPc10::vf18  size=1  [class]
void cPc10::vf18(void)

{
  return;
}

// 00D4B2C0  cPc10::vf1C  size=3  [class]
void cPc10::vf1C(void)

{
  return;
}

// 00D70860  cPc10::vf00  size=54  [class]
undefined4 * __thiscall cPc10::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

