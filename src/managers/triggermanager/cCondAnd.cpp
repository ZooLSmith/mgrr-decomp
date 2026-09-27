// src/managers/triggermanager/cCondAnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C793F0..00C84D50, 7 functions

#include "mgrr.h"

// 00C793F0  Trigger::cCondAnd::cCondAnd  size=31  [class]
void __fastcall Trigger::cCondAnd::cCondAnd(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x22] = 0xffffffff;
  return;
}

// 00C79420  Trigger::cCondAnd::vf04  size=48  [class]
void __fastcall Trigger::cCondAnd::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79450  Trigger::cCondAnd::vf08  size=62  [class]
void __fastcall Trigger::cCondAnd::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
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
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79500  Trigger::cCondAnd::vf10  size=43  [class]
void __fastcall Trigger::cCondAnd::vf10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    do {
      (**(code **)(*(int *)*puVar2 + 0x10))();
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79530  Trigger::cCondAnd::vf14  size=93  [class]
undefined4 __fastcall Trigger::cCondAnd::vf14(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_4;
  
  iVar4 = 0;
  local_4 = 1;
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      uVar1 = (**(code **)(*(int *)*piVar3 + 0x14))();
      if (piVar3[0xf] == 1) {
        uVar1 = uVar1 ^ 1;
      }
      if (uVar1 == 0) {
        *(undefined4 *)(*piVar3 + 0xc) = 0;
        local_4 = 0;
      }
      else {
        *(undefined4 *)(*piVar3 + 0xc) = 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      uVar2 = local_4;
    } while (iVar4 < *(int *)(param_1 + 0x88));
  }
  return uVar2;
}

// 00C79590  Trigger::cCondAnd::vf20  size=63  [class]
undefined4 __fastcall Trigger::cCondAnd::vf20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if ((*piVar4 != 0) && (iVar1 = (**(code **)(*(int *)*piVar4 + 0x20))(), iVar1 == 0)) {
        uVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x88));
  }
  return uVar2;
}

// 00C84D50  Trigger::cCondAnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

