// src/hw/cHeapVariable.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD39D0..00DD4FD0, 5 functions

#include "types.h"

// 00DD39D0  Hw::cHeapVariable::vf40  size=137  [class]
undefined4 __thiscall Hw::cHeapVariable::vf40(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 == 0) {
    iVar1 = FUN_00dd7240();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_3 + 0x30))(param_1 + 0x10,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      param_1[0xb] = (int)param_3;
      iVar1 = param_3[0xd];
      if (iVar1 == 0) {
        param_3[0xd] = (int)param_1;
      }
      else if (*(int *)(iVar1 + 0x30) == 0) {
        *(int **)(iVar1 + 0x30) = param_1;
      }
      else {
        FUN_00dd2a00(param_1);
      }
      param_1[0x13] = param_2;
      param_1[0x14] = param_2;
      param_1[0xe] = param_2;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      return 1;
    }
  }
  return 0;
}

// 00DD3A60  Hw::cHeapVariable::vf44  size=35  [class]
void __thiscall
Hw::cHeapVariable::vf44(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  (**(code **)(*param_1 + 0x40))(param_2 + 0x13 + param_3,param_4,param_5);
  return;
}

// 00DD3A90  Hw::cHeapVariable::vf08  size=96  [class]
void __fastcall Hw::cHeapVariable::vf08(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) {
    if (*(int *)(iVar1 + 0x34) == param_1) {
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      FUN_00dd2a30(param_1);
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x34))
              ((undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_00dd7270();
  return;
}

// 00DD44F0  Hw::cHeapVariable::cHeapVariable  size=50  [class]
void __fastcall Hw::cHeapVariable::cHeapVariable(undefined4 *param_1)

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

// 00DD4FD0  Hw::cHeapVariable::vf00  size=108  [class]
undefined4 * __thiscall Hw::cHeapVariable::vf00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x10;
  *param_1 = vftable;
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

