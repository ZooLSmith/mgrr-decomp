// src/unsorted/unit_00CD8A40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD8A40..00CD8BD0, 3 functions

#include "types.h"

// 00CD8A40  FUN_00cd8a40  size=189  [run]
void __thiscall
FUN_00cd8a40(int param_1,uint param_2,int param_3,float param_4,float param_5,float param_6)

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
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(float *)(iVar1 + 0x30) = *(float *)(iVar1 + 0x44) + param_6;
    *(float *)(iVar1 + 0x34) = param_6 + *(float *)(iVar1 + 0x48);
  }
  return;
}

// 00CD8B00  FUN_00cd8b00  size=198  [run]
void __thiscall
FUN_00cd8b00(int param_1,uint param_2,int param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0x38) + param_3;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(float *)(iVar1 + 0x1c) = *(float *)(iVar1 + 0x3c) + param_4;
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x40) + param_5;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(float *)(iVar1 + 0x30) = *(float *)(iVar1 + 0x44) + param_6;
    *(float *)(iVar1 + 0x34) = param_6 + *(float *)(iVar1 + 0x48);
  }
  return;
}

// 00CD8BD0  FUN_00cd8bd0  size=458  [run]
void __fastcall FUN_00cd8bd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xb0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xb8) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xb8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
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
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xc0) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xc0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xd8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xdc) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xdc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  return;
}

