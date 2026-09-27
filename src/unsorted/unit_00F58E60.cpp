// src/unsorted/unit_00F58E60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F58E60..00F59130, 8 functions

#include "types.h"

// 00F58E60  FUN_00f58e60  size=75  [run]
undefined4 __thiscall FUN_00f58e60(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0xc >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 0xc),param_3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  param_1[1] = param_2;
  return 1;
}

// 00F58EE0  FUN_00f58ee0  size=100  [run]
undefined4 __thiscall FUN_00f58ee0(int *param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  uVar2 = -(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 8);
  puVar1 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,param_3);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  *param_1 = (int)puVar1;
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  param_1[1] = param_2;
  return 1;
}

// 00F58F70  FUN_00f58f70  size=75  [run]
undefined4 __thiscall FUN_00f58f70(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x100 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 0x100),param_3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  param_1[1] = param_2;
  return 1;
}

// 00F58FF0  FUN_00f58ff0  size=75  [run]
undefined4 __thiscall FUN_00f58ff0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 2),param_3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  param_1[1] = param_2;
  return 1;
}

// 00F590A0  FUN_00f590a0  size=33  [run]
void __fastcall FUN_00f590a0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

// 00F590D0  FUN_00f590d0  size=36  [run]
void __fastcall FUN_00f590d0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1 + -4);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

// 00F59100  FUN_00f59100  size=33  [run]
void __fastcall FUN_00f59100(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

// 00F59130  FUN_00f59130  size=33  [run]
void __fastcall FUN_00f59130(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

