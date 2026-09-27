// src/managers/triggermanager/cActArray.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80A10..00C93D00, 6 functions

#include "mgrr.h"

// 00C80A10  Trigger::cActArray::vf08  size=43  [class]
void __fastcall Trigger::cActArray::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 8))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00C80A40  Trigger::cActArray::vf0C  size=43  [class]
void __fastcall Trigger::cActArray::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00C80A70  Trigger::cActArray::vf10  size=43  [class]
void __fastcall Trigger::cActArray::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 0x10))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00C80AA0  Trigger::cActArray::vf18  size=78  [class]
undefined4 __thiscall Trigger::cActArray::vf18(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_4;
  
  local_4 = 1;
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 0x44)) {
    piVar3 = (int *)(param_1 + 8);
    iVar4 = 0;
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        iVar1 = (**(code **)(*(int *)*piVar3 + 0x18))(param_2);
        piVar3[0x10] = iVar1;
        if (iVar1 == 0) {
          local_4 = 0;
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      uVar2 = local_4;
    } while (iVar4 < *(int *)(param_1 + 0x44));
  }
  return uVar2;
}

// 00C93CC0  Trigger::cActArray::cActArray  size=56  [class]
undefined4 * __fastcall Trigger::cActArray::cActArray(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[0x11] = 0xffffffff;
  _memset(param_1 + 2,0,0x3c);
  _memset(param_1 + 0x12,-1,0x3c);
  return param_1;
}

// 00C93D00  Trigger::cActArray::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActArray::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

