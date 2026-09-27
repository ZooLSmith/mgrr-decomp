// src/unsorted/unit_00ABAD40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ABAD40..00ABAE60, 3 functions

#include "mgrr.h"

// 00ABAD40  FUN_00abad40  size=65  [run]
void __fastcall FUN_00abad40(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00ABAD90  FUN_00abad90  size=206  [run]
void __fastcall FUN_00abad90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_00a7f290(0);
    *(undefined1 *)(iVar1 + 6) = 0xff;
    *(undefined2 *)(iVar1 + 4) = 0xffff;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x24) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x28) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x2c) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x30) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  *(int *)(param_1 + 0x644) = iVar1;
  puVar2 = (undefined4 *)FUN_00dd3500(0x1c,&DAT_01b7bd48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
  }
  if (puVar2[1] == 0) {
    iVar1 = FUN_00dd29b0(0x110,0x20,0,0);
    puVar2[1] = iVar1;
    if (iVar1 != 0) {
      puVar2[2] = 0x10;
      puVar2[3] = 0;
      puVar2[6] = iVar1 + 0x100;
      FUN_00aa8f60();
    }
  }
  *(undefined4 **)(param_1 + 0x648) = puVar2;
  return;
}

// 00ABAE60  FUN_00abae60  size=85  [run]
undefined4 * __thiscall FUN_00abae60(undefined4 *param_1,byte param_2)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

