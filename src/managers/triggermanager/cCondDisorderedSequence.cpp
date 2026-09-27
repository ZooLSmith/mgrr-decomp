// src/managers/triggermanager/cCondDisorderedSequence.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C791A0..00C84D30, 7 functions

#include "mgrr.h"

// 00C791A0  Trigger::cCondDisorderedSequence::cCondDisorderedSequence  size=31  [class]
void __fastcall Trigger::cCondDisorderedSequence::cCondDisorderedSequence(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x31] = 0xffffffff;
  return;
}

// 00C791D0  Trigger::cCondDisorderedSequence::vf04  size=60  [class]
void __fastcall Trigger::cCondDisorderedSequence::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      piVar1[0x1e] = 0;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc4));
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}

// 00C79210  Trigger::cCondDisorderedSequence::vf08  size=62  [class]
void __fastcall Trigger::cCondDisorderedSequence::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 8))();
        if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc4));
  }
  return;
}

// 00C792C0  Trigger::cCondDisorderedSequence::vf10  size=171  [class]
void __fastcall Trigger::cCondDisorderedSequence::vf10(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
    do {
      if ((*(int *)(param_1 + 8) == 2) || (puVar3[0x1e] == 0)) {
        (**(code **)(*(int *)*puVar3 + 0x10))();
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc4));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
    do {
      if ((*(int *)(param_1 + 8) == 2) || (puVar3[0x1e] == 0)) {
        uVar1 = (**(code **)(*(int *)*puVar3 + 0x14))();
        if (puVar3[0xf] == 1) {
          uVar1 = uVar1 ^ 1;
        }
        puVar3[0x1e] = uVar1;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc4));
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 200) = 1;
  if (0 < *(int *)(param_1 + 0xc4)) {
    puVar2 = (uint *)(param_1 + 0x88);
    do {
      if (*(uint *)(param_1 + 200) == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
      *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & *puVar2;
      puVar2 = puVar2 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc4));
  }
  return;
}

// 00C79380  Trigger::cCondDisorderedSequence::vf14  size=7  [class]
undefined4 __fastcall Trigger::cCondDisorderedSequence::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 200);
}

// 00C79390  Trigger::cCondDisorderedSequence::vf20  size=84  [class]
int __fastcall Trigger::cCondDisorderedSequence::vf20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 0xc4)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        piVar3[0x1e] = 0;
        iVar1 = (**(code **)(*(int *)*piVar3 + 0x20))();
        if (iVar1 == 0) {
          iVar2 = 0;
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc4));
    if (iVar2 != 1) {
      return iVar2;
    }
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return 1;
}

// 00C84D30  Trigger::cCondDisorderedSequence::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondDisorderedSequence::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

