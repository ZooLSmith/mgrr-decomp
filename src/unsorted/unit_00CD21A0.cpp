// src/unsorted/unit_00CD21A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD21A0..00CD29D0, 4 functions

#include "mgrr.h"

// 00CD21A0  FUN_00cd21a0  size=182  [run]
undefined4 __fastcall FUN_00cd21a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 0x1d0)) {
  case 0:
    if (*(int *)(param_1 + 0x1cc) != 0) {
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = 1;
      return 0;
    }
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0x18);
    uVar1 = DAT_01bea094 >> 0x12;
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),~uVar1 & 1,3);
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
    return 0;
  case 2:
    iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x90));
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
      return 0;
    }
    break;
  case 3:
    uVar3 = 1;
  }
  return uVar3;
}

// 00CD2270  FUN_00cd2270  size=125  [run]
void __thiscall FUN_00cd2270(int param_1,uint param_2,int param_3,float param_4,float param_5)

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

// 00CD2390  FUN_00cd2390  size=1586  [run]
void __fastcall FUN_00cd2390(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
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
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xb4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
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
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xc4) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xc4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 200) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 200) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xcc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xd4) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xd4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xd8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xdc) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xdc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
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
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xec) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xec) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xf0) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xf0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xf4) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0xf4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (*(uint *)(param_1 + 0xf8) < *(uint *)(iVar1 + 0x80))) &&
      (iVar1 = *(uint *)(param_1 + 0xf8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x138) < *(uint *)(iVar1 + 0x80))) &&
     ((iVar1 = *(uint *)(param_1 + 0x138) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + 0x3f4), iVar1 != 0 && (*(int *)(iVar1 + 4) == 0x1f5)))))) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x48);
  }
  puVar3 = (uint *)(param_1 + 0x14c);
  piVar4 = (int *)(param_1 + 0x324);
  iVar1 = 5;
  do {
    iVar2 = *piVar4;
    if ((((iVar2 != 0) && (puVar3[-1] < *(uint *)(iVar2 + 0x80))) &&
        (iVar2 = puVar3[-1] * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) &&
       ((iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0 && (*(int *)(iVar2 + 4) == 0x1f5)))) {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + 0x38);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x3c);
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x48);
    }
    iVar2 = *piVar4;
    if (((iVar2 != 0) && (*puVar3 < *(uint *)(iVar2 + 0x80))) &&
       ((iVar2 = *puVar3 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0 &&
        ((iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0 && (*(int *)(iVar2 + 4) == 0x1f5)))))) {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + 0x38);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x3c);
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x48);
    }
    iVar2 = *piVar4;
    if ((((iVar2 != 0) && (puVar3[1] < *(uint *)(iVar2 + 0x80))) &&
        (iVar2 = puVar3[1] * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) &&
       ((iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0 && (*(int *)(iVar2 + 4) == 0x1f5)))) {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + 0x38);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x3c);
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x48);
    }
    puVar3 = puVar3 + 5;
    piVar4 = piVar4 + 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00CD29D0  FUN_00cd29d0  size=41  [run]
void __fastcall FUN_00cd29d0(int param_1)

{
  if (*(int *)(param_1 + 0x2e8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x250) + 8))(0,0,0);
  }
  return;
}

