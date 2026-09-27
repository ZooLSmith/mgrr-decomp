// src/managers/triggermanager/cCondResetSequence.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D950..00C86AB0, 8 functions

#include "mgrr.h"

// 00C7D950  Trigger::cCondResetSequence::cCondResetSequence  size=60  [class]
undefined4 * __fastcall Trigger::cCondResetSequence::cCondResetSequence(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  _memset(param_1 + 4,0,0x3c);
  return param_1;
}

// 00C7D9A0  Trigger::cCondResetSequence::vf04  size=48  [class]
void __fastcall Trigger::cCondResetSequence::vf04(int param_1)

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

// 00C7D9D0  Trigger::cCondResetSequence::vf08  size=67  [class]
void __fastcall Trigger::cCondResetSequence::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 8))();
        if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar1)(1);
          *piVar1 = 0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

// 00C7DA20  Trigger::cCondResetSequence::vf0C  size=1  [class]
undefined4 __fastcall Trigger::cCondResetSequence::vf0C(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_00dd5650(&DAT_016a8b24,1);
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016a8af4,*(int *)(param_1 + 0x88) + 1);
      return 0;
    }
  }
  return 1;
}

// 00C7DA80  Trigger::cCondResetSequence::vf10  size=397  [class]
void __fastcall Trigger::cCondResetSequence::vf10(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 8) == 2) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (0 < *(int *)(param_1 + 0x8c)) {
      piVar3 = (int *)(param_1 + 0x10);
      iVar4 = 0;
      do {
        if (*piVar3 != 0) {
          (**(code **)(*(int *)*piVar3 + 0x10))();
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x8c));
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x88);
    if (iVar4 < 0) {
      return;
    }
    if ((iVar4 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x10 + iVar4 * 4) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x10 + iVar4 * 4) + 0x10))();
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar3 = (int *)(param_1 + 0x10);
    piVar5 = (int *)(param_1 + 0x4c);
    do {
      if (*(int *)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) == 0) break;
      uVar1 = (**(code **)(*(int *)*piVar3 + 0x14))();
      if (*piVar5 == 1) {
        uVar1 = uVar1 ^ 1;
      }
      if (uVar1 != 1) {
        if (iVar4 != *(int *)(param_1 + 0x88)) {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x8c)) {
            piVar3 = (int *)(param_1 + 0x10);
            do {
              iVar4 = iVar4 + 1;
              *(undefined4 *)(*piVar3 + 0xc) = 0;
              piVar3 = piVar3 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x8c));
          }
          *(undefined4 *)(param_1 + 0x88) = 0;
          if (*(int *)(param_1 + 8) != 2) {
            (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
          }
        }
        break;
      }
      *(undefined4 *)(*piVar3 + 0xc) = 1;
      piVar5 = piVar5 + 1;
      if (iVar4 == *(int *)(param_1 + 0x88)) {
        iVar2 = *(int *)(param_1 + 0x88) + 1;
        *(int *)(param_1 + 0x88) = iVar2;
        if ((iVar2 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x10 + iVar2 * 4) != 0)) {
          if (*(int *)(param_1 + 8) != 2) {
            (**(code **)(**(int **)(param_1 + 0x10 + iVar2 * 4) + 0xc))();
          }
          (**(code **)(**(int **)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) + 0x10))();
        }
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  }
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 1;
  return;
}

// 00C7DC10  Trigger::cCondResetSequence::vf14  size=7  [class]
undefined4 __fastcall Trigger::cCondResetSequence::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}

// 00C7DC20  Trigger::cCondResetSequence::vf20  size=87  [class]
int __fastcall Trigger::cCondResetSequence::vf20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      if (*piVar3 != 0) {
        iVar1 = (**(code **)(*(int *)*piVar3 + 0x20))();
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        *(undefined4 *)(*piVar3 + 0xc) = 0;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x8c));
    if (iVar2 != 1) {
      return iVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return 1;
}

// 00C86AB0  Trigger::cCondResetSequence::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondResetSequence::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

