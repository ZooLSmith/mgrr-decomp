// src/hw/cHeapGlobal.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD31E0..00DD4F00, 5 functions

#include "mgrr.h"

// 00DD31E0  Hw::cHeapGlobal::vf04  size=18  [class]
void __fastcall Hw::cHeapGlobal::vf04(int param_1)

{
  FUN_00dd5650(&DAT_016c4560,*(undefined4 *)(param_1 + 0x38));
  return;
}

// 00DD3290  Hw::cHeapGlobal::vf0C  size=9  [class]
bool __fastcall Hw::cHeapGlobal::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x40) != 0;
}

// 00DD3F20  Hw::cHeapGlobal::cHeapGlobal  size=50  [class]
void __fastcall Hw::cHeapGlobal::cHeapGlobal(undefined4 *param_1)

{
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = vftable;
  return;
}

// 00DD3FB0  Hw::cHeapGlobal::vf08  size=53  [class]
void __fastcall Hw::cHeapGlobal::vf08(int *param_1)

{
  if (param_1[0x10] != 0) {
    (**(code **)(*param_1 + 0x10))();
    HeapDestroy((HANDLE)param_1[0x10]);
    param_1[0x10] = 0;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_00dd7270();
  return;
}

// 00DD4F00  Hw::cHeapGlobal::vf00  size=97  [class]
undefined4 * __thiscall Hw::cHeapGlobal::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0x10] != 0) {
    cHeapVariableBase::vf10();
    HeapDestroy((HANDLE)param_1[0x10]);
    param_1[0x10] = 0;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = cHeap::vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    (**(code **)(*(int *)param_1[-1] + 0x3c))(param_1,0);
  }
  return param_1;
}

