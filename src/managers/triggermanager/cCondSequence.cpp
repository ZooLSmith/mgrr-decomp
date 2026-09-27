// src/managers/triggermanager/cCondSequence.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C78EC0..00C84D10, 7 functions

#include "mgrr.h"

// 00C78EC0  Trigger::cCondSequence::cCondSequence  size=41  [class]
void __fastcall Trigger::cCondSequence::cCondSequence(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return;
}

// 00C78F30  Trigger::cCondSequence::vf04  size=48  [class]
void __fastcall Trigger::cCondSequence::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

// 00C78F60  Trigger::cCondSequence::vf08  size=62  [class]
void __fastcall Trigger::cCondSequence::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
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
    } while (iVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

// 00C79000  Trigger::cCondSequence::vf10  size=319  [class]
void __fastcall Trigger::cCondSequence::vf10(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) == 2) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (0 < *(int *)(param_1 + 0x8c)) {
      piVar3 = (int *)(param_1 + 0x10);
      do {
        if (*piVar3 != 0) {
          (**(code **)(*(int *)*piVar3 + 0x10))();
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x8c));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 < 0) {
      return;
    }
    if ((iVar2 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x10 + iVar2 * 4) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x10 + iVar2 * 4) + 0x10))();
    }
  }
  if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) {
    do {
      if (*(int *)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) == 0) break;
      uVar1 = (**(code **)(**(int **)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) + 0x14))();
      if (*(int *)(param_1 + 0x4c + *(int *)(param_1 + 0x88) * 4) == 1) {
        uVar1 = uVar1 ^ 1;
      }
      iVar2 = *(int *)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4);
      if (uVar1 != 1) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
        break;
      }
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
      iVar2 = *(int *)(param_1 + 0x88);
      if ((iVar2 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x10 + iVar2 * 4) != 0)) {
        (**(code **)(**(int **)(param_1 + 0x10 + iVar2 * 4) + 0xc))();
        (**(code **)(**(int **)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) + 0x10))();
      }
    } while (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  }
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  return;
}

// 00C79140  Trigger::cCondSequence::vf14  size=7  [class]
undefined4 __fastcall Trigger::cCondSequence::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}

// 00C79150  Trigger::cCondSequence::vf20  size=78  [class]
int __fastcall Trigger::cCondSequence::vf20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if ((*piVar4 != 0) && (iVar1 = (**(code **)(*(int *)*piVar4 + 0x20))(), iVar1 == 0)) {
        iVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x8c));
    if (iVar2 != 1) {
      return iVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return 1;
}

// 00C84D10  Trigger::cCondSequence::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondSequence::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

