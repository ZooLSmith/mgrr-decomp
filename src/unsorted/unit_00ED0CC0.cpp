// src/unsorted/unit_00ED0CC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0CC0..00ED1220, 11 functions

#include "types.h"

// 00ED0CC0  FUN_00ed0cc0  size=366  [run]
void __thiscall FUN_00ed0cc0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puStack_cc;
  undefined1 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [52];
  uint uStack_3c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&uStack_a4;
  iVar1 = *param_1;
  local_b4 = *(undefined4 *)(iVar1 + 0x188);
  local_b8 = *(undefined4 *)(iVar1 + 0x184);
  local_bc = *(undefined4 *)(iVar1 + 0x180);
  puStack_c0 = param_2;
  puStack_c4 = (undefined4 *)0xed0d0a;
  D3DXMatrixTranslation();
  iVar1 = *param_1;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_74 = 0x3f800000;
  uStack_88 = 0x3f800000;
  uStack_9c = 0x3f800000;
  if (*(float *)(iVar1 + 0x1b8) != 0.0) {
    puStack_c4 = *(undefined4 **)(iVar1 + 0x1b8);
    puStack_c8 = auStack_70;
    puStack_cc = (undefined4 *)0xed0d77;
    D3DXMatrixRotationZ();
    puStack_cc = &local_b8;
    D3DXMatrixMultiply(puStack_cc,&uStack_78);
  }
  if (*(float *)(iVar1 + 0x1b4) != 0.0) {
    puStack_c4 = *(undefined4 **)(iVar1 + 0x1b4);
    puStack_c8 = auStack_70;
    puStack_cc = (undefined4 *)0xed0db2;
    D3DXMatrixRotationY();
    puStack_cc = &local_b8;
    D3DXMatrixMultiply(puStack_cc,&uStack_78);
  }
  if (*(float *)(iVar1 + 0x1b0) != 0.0) {
    puStack_c4 = *(undefined4 **)(iVar1 + 0x1b0);
    puStack_c8 = auStack_70;
    puStack_cc = (undefined4 *)0xed0de9;
    D3DXMatrixRotationX();
    puStack_cc = &local_b8;
    D3DXMatrixMultiply(puStack_cc,&uStack_78);
  }
  puStack_c4 = param_2;
  puStack_c8 = &stack0xffffff50;
  puStack_cc = param_2;
  D3DXMatrixMultiply();
  D3DXMatrixMultiply(param_2,*param_1 + 0x200,param_2);
  __security_check_cookie(uStack_3c ^ (uint)&puStack_cc);
  return;
}

// 00ED0E30  FUN_00ed0e30  size=104  [run]
undefined4 __thiscall FUN_00ed0e30(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00eccfa0;
  piVar2[2] = 0x450;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED0EA0  FUN_00ed0ea0  size=104  [run]
undefined4 __thiscall FUN_00ed0ea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd000;
  piVar2[2] = 0x4f0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED0F10  FUN_00ed0f10  size=104  [run]
undefined4 __thiscall FUN_00ed0f10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd060;
  piVar2[2] = 0x4c0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED0F80  FUN_00ed0f80  size=104  [run]
undefined4 __thiscall FUN_00ed0f80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd0c0;
  piVar2[2] = 0x4c0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED0FF0  FUN_00ed0ff0  size=104  [run]
undefined4 __thiscall FUN_00ed0ff0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd120;
  piVar2[2] = 0x480;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED1060  FUN_00ed1060  size=104  [run]
undefined4 __thiscall FUN_00ed1060(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd180;
  piVar2[2] = 0x480;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED10D0  FUN_00ed10d0  size=104  [run]
undefined4 __thiscall FUN_00ed10d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd1e0;
  piVar2[2] = 0x470;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED1140  FUN_00ed1140  size=104  [run]
undefined4 __thiscall FUN_00ed1140(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd240;
  piVar2[2] = 0x4c0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED11B0  FUN_00ed11b0  size=104  [run]
undefined4 __thiscall FUN_00ed11b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd2a0;
  piVar2[2] = 0x4b0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 00ED1220  FUN_00ed1220  size=104  [run]
undefined4 __thiscall FUN_00ed1220(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_00ecd300;
  piVar2[2] = 0x5b0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

