// src/player/pl0010/state/ZangekiForbidStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82FB0..00B91680, 9 functions

#include "mgrr.h"
#include "ZangekiForbidStatePl0010.h"

// 00B82FB0  ZangekiForbidStatePl0010::vf08  size=19  [class]
bool ZangekiForbidStatePl0010::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 00B82FD0  ZangekiForbidStatePl0010::SafeCheck  size=5  [class]
void __thiscall ZangekiForbidStatePl0010::SafeCheck(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}

// 00B82FE0  ZangekiForbidStatePl0010::qteSafeCheck  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl0010::qteSafeCheck(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 3;
  *(float *)(param_1 + 8) = *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  return 1;
}

// 00B82FF0  ZangekiForbidStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl0010::vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 00B83000  ZangekiForbidStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl0010::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 00B83010  ZangekiForbidStatePl0010::vf20  size=19  [class]
bool ZangekiForbidStatePl0010::vf20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf20(param_1);
  return iVar1 != 0;
}

// 00B83030  ZangekiForbidStatePl0010::vf24  size=19  [class]
bool ZangekiForbidStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83070  ZangekiForbidStatePl0010::vf00  size=6  [class]
undefined * ZangekiForbidStatePl0010::vf00(void)

{
  return &DAT_01be9eac;
}

// 00B91680  ZangekiForbidStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiForbidStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

