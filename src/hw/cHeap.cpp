// src/hw/cHeap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD2970..00DD4EC0, 10 functions

#include "mgrr.h"

// 00DD2970  Hw::cHeap::vf1C  size=5  [class]
undefined4 Hw::cHeap::vf1C(void)

{
  return 0;
}

// 00DD2980  Hw::cHeap::vf20  size=5  [class]
undefined4 Hw::cHeap::vf20(void)

{
  return 0;
}

// 00DD2990  Hw::cHeap::vf24  size=3  [class]
undefined4 Hw::cHeap::vf24(void)

{
  return 0;
}

// 00DD29A0  Hw::cHeap::vf2C  size=3  [class]
void Hw::cHeap::vf2C(void)

{
  return;
}

// 00DD3F60  Hw::cHeap::cHeap  size=73  [class]
void __fastcall Hw::cHeap::cHeap(undefined4 *param_1)

{
  *param_1 = cHeapGlobal::vftable;
  if (param_1[0x10] != 0) {
    cHeapVariableBase::vf10();
    HeapDestroy((HANDLE)param_1[0x10]);
    param_1[0x10] = 0;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = vftable;
  FUN_00dd7270();
  return;
}

// 00DD4530  Hw::cHeap::cHeap_5  size=84  [class]
void __fastcall Hw::cHeap::cHeap_5(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x10;
  *param_1 = cHeapVariable::vftable;
  if (*piVar1 != 0) {
    (**(code **)(*(int *)param_1[0xb] + 0x34))(piVar1,param_1[0x13]);
    *piVar1 = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = vftable;
  FUN_00dd7270();
  return;
}

// 00DD4A50  Hw::cHeap::cHeap_3  size=78  [class]
void __fastcall Hw::cHeap::cHeap_3(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cHeapFixed::vftable;
  iVar1 = param_1[0x10];
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + -4) + 0x3c))(iVar1,0);
    param_1[0x10] = 0;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  FUN_00dd7270();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = vftable;
  FUN_00dd7270();
  return;
}

// 00DD4AA0  Hw::cHeap::cHeap_2  size=84  [class]
void __fastcall Hw::cHeap::cHeap_2(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cHeapOneTime::vftable;
  iVar1 = param_1[0x10];
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + -4) + 0x3c))(iVar1,0);
    param_1[0x10] = 0;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_00dd7270();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = vftable;
  FUN_00dd7270();
  return;
}

// 00DD4B00  Hw::cHeap::cHeap_4  size=89  [class]
void __fastcall Hw::cHeap::cHeap_4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x10];
  *param_1 = cHeapPhysical::vftable;
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + -4) + 0x3c))(iVar1,0);
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = vftable;
  FUN_00dd7270();
  return;
}

// 00DD4EC0  Hw::cHeap::vf00  size=64  [class]
undefined4 * __thiscall Hw::cHeap::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    (**(code **)(*(int *)param_1[-1] + 0x3c))(param_1,0);
  }
  return param_1;
}

