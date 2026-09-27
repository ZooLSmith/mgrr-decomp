// src/unsorted/unit_00CBD090.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBD090..00CBD180, 3 functions

#include "mgrr.h"

// 00CBD090  FUN_00cbd090  size=191  [run]
void __thiscall FUN_00cbd090(int param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x170) = 1;
  if ((param_2 & 0x4000000) == 0) {
    if ((param_2 & 0x8000000) == 0) {
      if (param_2 == 10) {
        param_2 = 3;
      }
      else if (param_2 == 0x4000) {
        param_2 = 4;
      }
      else if (param_2 == 0x1000) {
        param_2 = 5;
      }
      else if (param_2 == 0x2000) {
        param_2 = 6;
      }
      else if (param_2 == 1) {
        param_2 = 7;
      }
      else if (param_2 == 0x102) {
        param_2 = 9;
      }
      else if (param_2 == 2) {
        param_2 = 8;
      }
      else if (param_2 == 4) {
        param_2 = 10;
      }
      else if (param_2 == 8) {
        param_2 = 0xb;
      }
    }
    else {
      param_2 = 2;
    }
  }
  else {
    param_2 = 1;
  }
  if (*(uint *)(param_1 + 0x174) == 0) {
    *(uint *)(param_1 + 0x174) = param_2;
    return;
  }
  if (*(uint *)(param_1 + 0x174) != param_2) {
    *(uint *)(param_1 + 0x178) = param_2;
  }
  return;
}

// 00CBD150  FUN_00cbd150  size=36  [run]
byte FUN_00cbd150(byte param_1)

{
  if ((param_1 & 1) != 0) {
    return 0;
  }
  if ((param_1 & 2) != 0) {
    return 1;
  }
  return param_1 >> 1 & 2;
}

// 00CBD180  FUN_00cbd180  size=578  [run]
void __thiscall FUN_00cbd180(int param_1,int param_2,byte param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x158);
  if (param_4 == 0) {
    iVar4 = *(int *)(param_1 + 0xcc + param_2 * 0x1c);
    if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + param_2 * 0x1c + 0xcc);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x15c) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x15c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
      return;
    }
  }
  else {
    iVar4 = param_1 + 0xb4 + param_2 * 0x1c;
    iVar3 = *(int *)(iVar4 + 0x18);
    bVar2 = 1;
    if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = uVar1 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    iVar3 = *(int *)(iVar4 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x15c) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x15c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 0;
    }
    if ((param_3 & 1) == 0) {
      if ((param_3 & 2) == 0) {
        bVar2 = param_3 >> 1 & 2;
      }
    }
    else {
      bVar2 = 0;
    }
    if (bVar2 == 0) {
      iVar3 = *(int *)(iVar4 + 0x18);
      if (((iVar3 != 0) && (*(uint *)(param_1 + 0x160) < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = *(uint *)(param_1 + 0x160) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 1;
      }
      iVar3 = *(int *)(iVar4 + 0x18);
      if (((iVar3 != 0) && (*(uint *)(param_1 + 0x164) < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = *(uint *)(param_1 + 0x164) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 0;
      }
    }
    else {
      if (bVar2 != 1) {
        if (bVar2 != 2) {
          return;
        }
        iVar3 = *(int *)(iVar4 + 0x18);
        if (((iVar3 != 0) && (*(uint *)(param_1 + 0x160) < *(uint *)(iVar3 + 0x80))) &&
           (iVar3 = *(uint *)(param_1 + 0x160) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x3b0) = 0;
        }
        iVar3 = *(int *)(iVar4 + 0x18);
        if (((iVar3 != 0) && (*(uint *)(param_1 + 0x164) < *(uint *)(iVar3 + 0x80))) &&
           (iVar3 = *(uint *)(param_1 + 0x164) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x3b0) = 0;
        }
        iVar4 = *(int *)(iVar4 + 0x18);
        if (iVar4 == 0) {
          return;
        }
        if (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x168)) {
          return;
        }
        iVar4 = *(uint *)(param_1 + 0x168) * 0x400 + *(int *)(iVar4 + 0x7c);
        if (iVar4 == 0) {
          return;
        }
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
        return;
      }
      iVar3 = *(int *)(iVar4 + 0x18);
      if (((iVar3 != 0) && (*(uint *)(param_1 + 0x160) < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = *(uint *)(param_1 + 0x160) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 0;
      }
      iVar3 = *(int *)(iVar4 + 0x18);
      if (((iVar3 != 0) && (*(uint *)(param_1 + 0x164) < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = *(uint *)(param_1 + 0x164) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 1;
      }
    }
    iVar4 = *(int *)(iVar4 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x168) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x168) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
      return;
    }
  }
  return;
}

