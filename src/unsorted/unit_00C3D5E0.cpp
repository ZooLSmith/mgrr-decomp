// src/unsorted/unit_00C3D5E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C3D5E0..00C3D870, 4 functions

#include "mgrr.h"

// 00C3D5E0  FUN_00c3d5e0  size=106  [run]
bool FUN_00c3d5e0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  
  if ((param_2 != 0) && (uVar2 = param_2 - 1, uVar2 < 0x20)) {
    puVar1 = (undefined4 *)0x0;
    switch(param_1) {
    case 0:
      puVar1 = &DAT_01b77ce0;
      break;
    case 1:
      puVar1 = &DAT_01b77ce4;
      break;
    case 2:
      puVar1 = &DAT_01b77ce8;
      break;
    case 3:
      puVar1 = &DAT_01b77cec;
      break;
    case 4:
      puVar1 = &DAT_01b73808;
    }
    bVar3 = false;
    if (puVar1 != (undefined4 *)0x0) {
      bVar3 = (0x80000000U >> ((byte)uVar2 & 0x1f) & puVar1[uVar2 >> 5]) != 0;
    }
    return bVar3;
  }
  return false;
}

// 00C3D6E0  FUN_00c3d6e0  size=86  [run]
void FUN_00c3d6e0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    DAT_01b77ce0 = 0;
    return;
  case 1:
    DAT_01b77ce4 = 0;
    return;
  case 2:
    DAT_01b77ce8 = 0;
    return;
  case 3:
    DAT_01b77cec = 0;
    return;
  case 4:
    DAT_01b73808 = 0;
  }
  return;
}

// 00C3D750  FUN_00c3d750  size=177  [run]
int FUN_00c3d750(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  switch(param_1) {
  case 0:
    puVar4 = &DAT_01b77ce0;
    break;
  case 1:
    puVar4 = &DAT_01b77ce4;
    break;
  case 2:
    puVar4 = &DAT_01b77ce8;
    break;
  case 3:
    puVar4 = &DAT_01b77cec;
    break;
  case 4:
    puVar4 = &DAT_01b73808;
  }
  iVar2 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    uVar3 = 2;
    do {
      if ((puVar4[uVar3 - 2 >> 5] & 0x80000000U >> ((byte)(uVar3 - 2) & 0x1f)) != 0) {
        iVar2 = iVar2 + 1;
      }
      if ((puVar4[uVar3 - 1 >> 5] & 0x80000000U >> ((byte)(uVar3 - 1) & 0x1f)) != 0) {
        iVar2 = iVar2 + 1;
      }
      if ((puVar4[uVar3 >> 5] & 0x80000000U >> ((byte)uVar3 & 0x1f)) != 0) {
        iVar2 = iVar2 + 1;
      }
      if ((puVar4[uVar3 + 1 >> 5] & 0x80000000U >> ((byte)(uVar3 + 1) & 0x1f)) != 0) {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar3 + 2;
      uVar3 = uVar3 + 4;
    } while (uVar1 < 0x20);
  }
  return iVar2;
}

// 00C3D870  FUN_00c3d870  size=49  [run]
void FUN_00c3d870(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = FUN_00c3d750(param_1);
  switch(param_1) {
  case 0:
    bVar3 = SBORROW4(iVar1,9);
    bVar2 = iVar1 + -9 < 0;
    break;
  case 1:
  case 2:
  case 3:
    bVar3 = SBORROW4(iVar1,5);
    bVar2 = iVar1 + -5 < 0;
    break;
  case 4:
    bVar3 = SBORROW4(iVar1,4);
    bVar2 = iVar1 + -4 < 0;
    break;
  default:
    goto switchD_00c3d880_default;
  }
  if (bVar3 == bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00c3d896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_00c3d8f8)[param_1])();
    return;
  }
switchD_00c3d880_default:
  return;
}

