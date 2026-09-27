// src/managers/triggermanager/cCondOr.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79600..00C84D70, 6 functions

#include "mgrr.h"

// 00C79600  Trigger::cCondOr::vf04  size=48  [class]
void __fastcall Trigger::cCondOr::vf04(int param_1)

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

// 00C79630  Trigger::cCondOr::vf08  size=62  [class]
void __fastcall Trigger::cCondOr::vf08(int param_1)

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

// 00C796E0  Trigger::cCondOr::vf10  size=43  [class]
void __fastcall Trigger::cCondOr::vf10(int param_1)

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

// 00C79710  Trigger::cCondOr::vf14  size=88  [class]
undefined4 __fastcall Trigger::cCondOr::vf14(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar2 = (int *)(param_1 + 0x10);
    do {
      uVar1 = (**(code **)(*(int *)*piVar2 + 0x14))();
      if (piVar2[0xf] == 1) {
        uVar1 = uVar1 ^ 1;
      }
      if (uVar1 == 1) {
        *(undefined4 *)(*(int *)(param_1 + 0x10 + iVar3 * 4) + 0xc) = 1;
        return 1;
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*piVar2 + 0xc) = 0;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x88));
  }
  return 0;
}

// 00C79770  Trigger::cCondOr::vf20  size=63  [class]
undefined4 __fastcall Trigger::cCondOr::vf20(int param_1)

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

// 00C84D70  Trigger::cCondOr::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondOr::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

