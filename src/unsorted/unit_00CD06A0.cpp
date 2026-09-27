// src/unsorted/unit_00CD06A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD06A0..00CD0720, 2 functions

#include "mgrr.h"

// 00CD06A0  FUN_00cd06a0  size=125  [run]
void __thiscall FUN_00cd06a0(int param_1,uint param_2,int param_3,float param_4,float param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0x38) + param_3;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(float *)(iVar1 + 0x1c) = *(float *)(iVar1 + 0x3c) + param_4;
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x40) + param_5;
  }
  return;
}

// 00CD0720  FUN_00cd0720  size=674  [run]
void __fastcall FUN_00cd0720(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xb0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xbc) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xbc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xcc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xdc) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xdc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xd0) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xd0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xe0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xfc) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xfc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0x100) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0x100) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  return;
}

