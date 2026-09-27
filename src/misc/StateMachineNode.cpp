// src/misc/StateMachineNode.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085C5F0..00D82530, 22 functions

#include "types.h"

// 0085C5F0  StateMachineNode::vf00  size=6  [class]
undefined * StateMachineNode::vf00(void)

{
  return &DAT_01dc53c4;
}

// 0085C630  StateMachineNode::vf04  size=31  [class]
undefined4 * __thiscall StateMachineNode::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0085F010  StateMachineNode::StateMachineNode  size=19  [class]
void __fastcall StateMachineNode::StateMachineNode(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
  return;
}

// 00860270  StateMachineNode::StateMachineNode_5  size=22  [class]
void __fastcall StateMachineNode::StateMachineNode_5(undefined4 *param_1)

{
  cXml::cXml_7();
  *param_1 = vftable;
  return;
}

// 008A4010  StateMachineNode::StateMachineNode_7  size=19  [class]
void __fastcall StateMachineNode::StateMachineNode_7(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
  return;
}

// 008A4A50  StateMachineNode::StateMachineNode_6  size=22  [class]
void __fastcall StateMachineNode::StateMachineNode_6(undefined4 *param_1)

{
  cXml::cXml_7();
  *param_1 = vftable;
  return;
}

// 00B81330  StateMachineNode::StateMachineNode_4  size=19  [class]
void __fastcall StateMachineNode::StateMachineNode_4(undefined4 *param_1)

{
  cEspControler::~cEspControler();
  *param_1 = vftable;
  return;
}

// 00B82010  StateMachineNode::StateMachineNode_3  size=19  [class]
void __fastcall StateMachineNode::StateMachineNode_3(undefined4 *param_1)

{
  cXml::cXml_7();
  *param_1 = vftable;
  return;
}

// 00B837E0  StateMachineNode::StateMachineNode_2  size=22  [class]
void __fastcall StateMachineNode::StateMachineNode_2(undefined4 *param_1)

{
  cXml::cXml_7();
  *param_1 = vftable;
  return;
}

// 00D82210  StateMachineNode::vf08  size=16  [class]
void __fastcall StateMachineNode::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}

// 00D82220  StateMachineNode::vf0C  size=64  [class]
void __thiscall StateMachineNode::vf0C(int param_1,undefined4 param_2)

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

// 00D82260  StateMachineNode::vf10  size=64  [class]
undefined4 __thiscall StateMachineNode::vf10(int param_1,int param_2)

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

// 00D822A0  StateMachineNode::vf14  size=55  [class]
undefined4 __thiscall StateMachineNode::vf14(int param_1,undefined4 param_2)

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

// 00D822E0  StateMachineNode::vf18  size=55  [class]
undefined4 __thiscall StateMachineNode::vf18(int param_1,undefined4 param_2)

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

// 00D82320  StateMachineNode::vf1C  size=55  [class]
undefined4 __thiscall StateMachineNode::vf1C(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 6;
  return 1;
}

// 00D82360  StateMachineNode::vf20  size=55  [class]
undefined4 __thiscall StateMachineNode::vf20(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x20))(param_2);
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 7;
  return 1;
}

// 00D823A0  StateMachineNode::vf24  size=52  [class]
undefined4 __thiscall StateMachineNode::vf24(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(param_2);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x24))(param_2);
  }
  return 1;
}

// 00D823E0  FUN_00d823e0  size=38  [between]
void __thiscall FUN_00d823e0(int *param_1,undefined4 param_2)

{
  if (param_1[7] == 0) {
    (**(code **)(*param_1 + 8))(param_2);
    param_1[7] = 1;
    param_1[5] = 1;
  }
  return;
}

// 00D82410  FUN_00d82410  size=186  [between]
int * __thiscall FUN_00d82410(int *param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  
  if (-1 < param_1[9]) {
    (**(code **)(*param_1 + 0x20))(param_2);
    piVar2 = (int *)(**(code **)**(undefined4 **)(param_2 + 4))(param_1[9]);
    pcVar1 = *(code **)(*piVar2 + 8);
    piVar2[0xb] = param_1[1];
    (*pcVar1)(param_2);
    return piVar2;
  }
  if (param_1[3] != 0) {
    piVar2 = (int *)FUN_00d82410(param_2);
    if (piVar2 != (int *)param_1[3]) {
      (**(code **)(*(int *)param_1[3] + 0x24))(param_2);
      if ((int *)param_1[3] != (int *)0x0) {
        (**(code **)(*(int *)param_1[3] + 4))(1);
        param_1[3] = 0;
      }
      param_1[3] = (int)piVar2;
    }
  }
  if (param_1[4] != 0) {
    piVar2 = (int *)FUN_00d82410(param_2);
    if (piVar2 != (int *)param_1[4]) {
      (**(code **)(*(int *)param_1[4] + 0x24))(param_2);
      if ((int *)param_1[4] != (int *)0x0) {
        (**(code **)(*(int *)param_1[4] + 4))(1);
        param_1[4] = 0;
      }
      param_1[4] = (int)piVar2;
    }
  }
  return param_1;
}

// 00D824D0  FUN_00d824d0  size=62  [between]
void __fastcall FUN_00d824d0(int *param_1)

{
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))(1);
    param_1[4] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))(1);
    param_1[3] = 0;
  }
  (**(code **)(*param_1 + 4))(1);
  return;
}

// 00D82510  FUN_00d82510  size=22  [between]
void __thiscall FUN_00d82510(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_1 + 0x28) <= param_3) {
    *(int *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  return;
}

// 00D82530  StateMachineNode::StateMachineNode_8  size=50  [class]
void __thiscall StateMachineNode::StateMachineNode_8(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  return;
}

