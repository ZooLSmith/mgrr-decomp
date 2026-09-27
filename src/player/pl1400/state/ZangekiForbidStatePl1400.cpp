// src/player/pl1400/state/ZangekiForbidStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085F5F0..00867C50, 9 functions

#include "mgrr.h"
#include "ZangekiForbidStatePl1400.h"

// 0085F5F0  ZangekiForbidStatePl1400::vf08  size=19  [class]
bool ZangekiForbidStatePl1400::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 0085F610  ZangekiForbidStatePl1400::vf0C  size=5  [class]
void __thiscall ZangekiForbidStatePl1400::vf0C(int param_1,undefined4 param_2)

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

// 0085F620  ZangekiForbidStatePl1400::vf10  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl1400::vf10(int param_1,int param_2)

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

// 0085F630  ZangekiForbidStatePl1400::vf14  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl1400::vf14(int param_1,undefined4 param_2)

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

// 0085F640  ZangekiForbidStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 0085F650  ZangekiForbidStatePl1400::vf20  size=19  [class]
bool ZangekiForbidStatePl1400::vf20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf20(param_1);
  return iVar1 != 0;
}

// 0085F670  ZangekiForbidStatePl1400::vf24  size=19  [class]
bool ZangekiForbidStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 0085F6B0  ZangekiForbidStatePl1400::vf00  size=6  [class]
undefined * ZangekiForbidStatePl1400::vf00(void)

{
  return &DAT_01b35b40;
}

// 00867C50  ZangekiForbidStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiForbidStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

