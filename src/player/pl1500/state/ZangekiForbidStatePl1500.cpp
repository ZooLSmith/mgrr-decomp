// src/player/pl1500/state/ZangekiForbidStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A45A0..008AA110, 9 functions

#include "mgrr.h"
#include "ZangekiForbidStatePl1500.h"

// 008A45A0  ZangekiForbidStatePl1500::vf08  size=19  [class]
bool ZangekiForbidStatePl1500::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_1);
  return iVar1 != 0;
}

// 008A45C0  ZangekiForbidStatePl1500::vf0C  size=5  [class]
void __thiscall ZangekiForbidStatePl1500::vf0C(int param_1,undefined4 param_2)

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

// 008A45D0  ZangekiForbidStatePl1500::thunk_vf10  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl1500::thunk_vf10(int param_1,int param_2)

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

// 008A45E0  ZangekiForbidStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl1500::vf14(int param_1,undefined4 param_2)

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

// 008A45F0  ZangekiForbidStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiForbidStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A4600  ZangekiForbidStatePl1500::vf20  size=19  [class]
bool ZangekiForbidStatePl1500::vf20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf20(param_1);
  return iVar1 != 0;
}

// 008A4620  ZangekiForbidStatePl1500::vf24  size=19  [class]
bool ZangekiForbidStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A4660  ZangekiForbidStatePl1500::vf00  size=6  [class]
undefined * ZangekiForbidStatePl1500::vf00(void)

{
  return &DAT_01b35bb4;
}

// 008AA110  ZangekiForbidStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiForbidStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

