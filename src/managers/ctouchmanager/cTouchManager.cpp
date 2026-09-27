// src/managers/ctouchmanager/cTouchManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009835F0..00983780, 5 functions

#include "types.h"

// 009835F0  cTouchManager::cTouchManager  size=74  [class]
void __fastcall cTouchManager::cTouchManager(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x14] = 1;
  param_1[10] = 0;
  param_1[0x17] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}

// 00983640  cTouchManager::cTouchManager_2  size=14  [class]
void __fastcall cTouchManager::cTouchManager_2(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_009830a0();
  return;
}

// 00983650  FUN_00983650  size=122  [between]
void __thiscall FUN_00983650(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != *(undefined4 **)(param_1 + 0x1c)) {
    do {
      if (*(ushort *)((int)puVar3 + 6) == param_2) {
        iVar1 = puVar3[0xf];
        puVar4 = (undefined4 *)puVar3[0x10];
        if (iVar1 != 0) {
          *(undefined4 **)(iVar1 + 0x40) = puVar4;
        }
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[0xf] = iVar1;
        }
        if (*(undefined4 **)(param_1 + 0x18) == puVar3) {
          *(undefined4 **)(param_1 + 0x18) = puVar4;
        }
        (**(code **)*puVar3)(0);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar1 + 0x3c);
        }
        puVar3[0xf] = iVar2;
        puVar3[0x10] = iVar1;
        if (iVar2 != 0) {
          *(undefined4 **)(iVar2 + 0x40) = puVar3;
        }
        if (iVar1 != 0) {
          *(undefined4 **)(iVar1 + 0x3c) = puVar3;
        }
        *(undefined4 **)(param_1 + 0x14) = puVar3;
      }
      else {
        puVar4 = (undefined4 *)puVar3[0x10];
      }
      puVar3 = puVar4;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x1c));
  }
  return;
}

// 009836D0  FUN_009836d0  size=141  [between]
void __thiscall FUN_009836d0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(undefined4 **)(param_1 + 0x18) != *(undefined4 **)(param_1 + 0x1c)) {
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    do {
      if (puVar3[1] == (param_2 << 0x10 | param_3 & 0xffff)) {
        iVar1 = puVar3[0xf];
        puVar4 = (undefined4 *)puVar3[0x10];
        if (iVar1 != 0) {
          *(undefined4 **)(iVar1 + 0x40) = puVar4;
        }
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[0xf] = iVar1;
        }
        if (*(undefined4 **)(param_1 + 0x18) == puVar3) {
          *(undefined4 **)(param_1 + 0x18) = puVar4;
        }
        (**(code **)*puVar3)(0);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar1 + 0x3c);
        }
        puVar3[0xf] = iVar2;
        puVar3[0x10] = iVar1;
        if (iVar2 != 0) {
          *(undefined4 **)(iVar2 + 0x40) = puVar3;
        }
        if (iVar1 != 0) {
          *(undefined4 **)(iVar1 + 0x3c) = puVar3;
        }
        *(undefined4 **)(param_1 + 0x14) = puVar3;
      }
      else {
        puVar4 = (undefined4 *)puVar3[0x10];
      }
      puVar3 = puVar4;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x1c));
  }
  return;
}

// 00983780  cTouchManager::vf00  size=39  [class]
undefined4 * __thiscall cTouchManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_009830a0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

