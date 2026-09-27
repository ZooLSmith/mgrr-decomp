// src/havok/RigidBodyList.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0091D140..0091D1D0, 2 functions

#include "mgrr.h"

// 0091D140  RigidBodyList::add  size=143  [class]
void __thiscall RigidBodyList::add(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((uint)param_1[4] <= (uint)param_1[3]) {
    FUN_00dd5650(&DAT_0164cee0);
    return;
  }
  if (*param_1 == 0) {
    iVar1 = FUN_0092f750(*param_3);
    *param_1 = iVar1;
  }
  FUN_00918440(param_2,*(undefined4 *)*param_1);
  uStack_10 = param_3[1];
  uStack_14 = *param_3;
  uStack_4 = param_3[4];
  uStack_18 = param_2;
  uStack_c = param_3[2];
  uStack_8 = param_3[3];
  (**(code **)(param_1[1] + 8))(&uStack_18);
  return;
}

// 0091D1D0  FUN_0091d1d0  size=42  [callgraph]
void FUN_0091d1d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    *(undefined4 *)(iVar1 + 0xc) = 0;
    RigidBodyList::add(iVar1,param_2);
  }
  return;
}

