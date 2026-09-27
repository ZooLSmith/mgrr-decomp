// src/unsorted/unit_00CCDD60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCDD60..00CCE470, 12 functions

#include "types.h"

// 00CCDD60  FUN_00ccdd60  size=64  [run]
undefined4 __thiscall FUN_00ccdd60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(param_2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      iVar2 = iVar1 + 0x40;
      if ((*(int *)(iVar1 + 0xb8) == 0) || (*(int *)(iVar1 + 0xbc) == 0)) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x18) = iVar2;
      return 1;
    }
  }
  return 0;
}

// 00CCDDA0  FUN_00ccdda0  size=79  [run]
undefined4 __thiscall FUN_00ccdda0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    iVar2 = **(int **)(param_1 + 0x14);
    uVar1 = FUN_00cb2250(1,param_2);
    iVar2 = (**(code **)(iVar2 + 0x14))(uVar1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar3 = iVar2 + 0x40;
      if ((*(int *)(iVar2 + 0xb8) == 0) || (*(int *)(iVar2 + 0xbc) == 0)) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x18) = iVar3;
      return 1;
    }
  }
  return 0;
}

// 00CCDE20  FUN_00ccde20  size=53  [run]
int __thiscall FUN_00ccde20(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x78), iVar2 != 0)) &&
      (*(int *)(iVar2 + 0x10) != 0)) &&
     ((iVar2 = *(int *)(iVar2 + 0x10) + iVar2, iVar2 != 0 && (param_2 < *(uint *)(iVar1 + 0x80)))))
  {
    return param_2 * 0x1b0 + iVar2;
  }
  return 0;
}

// 00CCDE60  FUN_00ccde60  size=113  [run]
void __thiscall FUN_00ccde60(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1)) {
    if (param_3 != (int *)0x0) {
      piVar1[10] = *param_3;
      piVar1[0xb] = param_3[1];
      piVar1[0xc] = param_3[2];
      piVar1[0xd] = param_3[3];
      piVar1[0xe] = param_3[4];
      return;
    }
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[0xe] = 0;
  }
  return;
}

// 00CCDEE0  FUN_00ccdee0  size=101  [run]
void __thiscall
FUN_00ccdee0(int param_1,uint param_2,float param_3,float param_4,float param_5,float param_6)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1)) {
    piVar1[0x16] = (int)((float)piVar1[0x1e] + param_3);
    piVar1[0x17] = (int)((float)piVar1[0x1f] + param_4);
    piVar1[0x18] = (int)((float)piVar1[0x20] + param_5);
    piVar1[0x19] = (int)((float)piVar1[0x21] + param_6);
  }
  return;
}

// 00CCDF50  FUN_00ccdf50  size=62  [run]
void __thiscall FUN_00ccdf50(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1)) {
    piVar1[2] = param_3;
  }
  return;
}

// 00CCDF90  FUN_00ccdf90  size=248  [run]
void __thiscall FUN_00ccdf90(int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 3)) {
    piVar1[0x5d] = 0;
    piVar1[0x5f] = 0;
    piVar1[0x60] = 0;
    piVar1[0x61] = 0;
    piVar1[0x62] = 0;
    piVar1[99] = 0;
    piVar1[100] = 0;
    piVar1[0x65] = 0;
    piVar1[0x66] = 0;
    piVar1[0x67] = 0;
    piVar1[0x68] = 0;
    piVar1[0x69] = 0;
    piVar1[0x6a] = 0;
    piVar1[0x6b] = 0;
    piVar1[0x6c] = 0;
    piVar1[0x6d] = 0;
    piVar1[0x6e] = 0;
    piVar1[0x6f] = 0;
    piVar1[0x70] = 0;
    piVar1[0x5c] = 1;
    piVar1[0x71] = 3;
    piVar1[0x72] = 0xc;
    piVar1[0x71] = param_4;
    piVar1[0x5e] = param_3;
  }
  return;
}

// 00CCE090  FUN_00cce090  size=69  [run]
void __thiscall FUN_00cce090(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)) {
    FUN_00cb3cc0(piVar1,param_3);
  }
  return;
}

// 00CCE0E0  FUN_00cce0e0  size=248  [run]
void __thiscall FUN_00cce0e0(int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)) {
    piVar1[999] = 0;
    piVar1[0x3e9] = 0;
    piVar1[0x3ea] = 0;
    piVar1[0x3eb] = 0;
    piVar1[0x3ec] = 0;
    piVar1[0x3ed] = 0;
    piVar1[0x3ee] = 0;
    piVar1[0x3ef] = 0;
    piVar1[0x3f0] = 0;
    piVar1[0x3f1] = 0;
    piVar1[0x3f2] = 0;
    piVar1[0x3f3] = 0;
    piVar1[0x3f4] = 0;
    piVar1[0x3f5] = 0;
    piVar1[0x3f6] = 0;
    piVar1[0x3f7] = 0;
    piVar1[0x3f8] = 0;
    piVar1[0x3f9] = 0;
    piVar1[0x3fa] = 0;
    piVar1[0x3e6] = 1;
    piVar1[0x3fb] = 3;
    piVar1[0x3fc] = 0xc;
    piVar1[0x3fb] = param_4;
    piVar1[1000] = param_3;
  }
  return;
}

// 00CCE1E0  FUN_00cce1e0  size=62  [run]
void __thiscall FUN_00cce1e0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 8)) {
    piVar1[0x11] = param_3;
  }
  return;
}

// 00CCE3D0  FUN_00cce3d0  size=94  [run]
void __thiscall FUN_00cce3d0(int param_1,uint param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (iVar2 = param_2 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) &&
     ((iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0 && (*(int *)(iVar2 + 4) == 0x1f6)))) {
    fVar1 = 0.0;
    if ((0.0 <= param_3) && (fVar1 = param_3, 6.2831855 < param_3)) {
      *(undefined4 *)(iVar2 + 8) = 0x40c90fdb;
      return;
    }
    *(float *)(iVar2 + 8) = fVar1;
  }
  return;
}

// 00CCE470  FUN_00cce470  size=366  [run]
void __fastcall FUN_00cce470(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x1f;
  puVar1 = (undefined4 *)(param_1 + 0x60);
  do {
    *puVar1 = 0;
    puVar1[4] = 0;
    puVar1[0x19] = 0;
    puVar1[5] = 0;
    iVar2 = iVar2 + -1;
    puVar1[6] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[7] = 0x3f800000;
    puVar1[0x11] = 0x3f800000;
    puVar1[0x12] = 0x3f800000;
    puVar1[0x13] = 0x3f800000;
    puVar1[0x14] = 0x3f800000;
    puVar1[0x15] = 0x3f800000;
    puVar1[0x16] = 0x3f800000;
    puVar1[0x17] = 0x3f800000;
    puVar1[0x18] = 0x3f800000;
    puVar1 = puVar1 + 0x1c;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0xe64) = 0;
  *(undefined4 *)(param_1 + 0xe68) = 0;
  *(undefined4 *)(param_1 + 0xe6c) = 0;
  *(undefined4 *)(param_1 + 0xe70) = 0;
  *(undefined4 *)(param_1 + 0xe74) = 0;
  *(undefined4 *)(param_1 + 0xe78) = 0;
  *(undefined4 *)(param_1 + 0xe7c) = 0;
  *(undefined4 *)(param_1 + 0xe80) = 0;
  *(undefined4 *)(param_1 + 0xe84) = 0;
  *(undefined4 *)(param_1 + 0xe88) = 0;
  *(undefined4 *)(param_1 + 0xe8c) = 0;
  *(undefined4 *)(param_1 + 0xe90) = 0;
  *(undefined4 *)(param_1 + 0xe94) = 0;
  *(undefined4 *)(param_1 + 0xe98) = 0;
  *(undefined4 *)(param_1 + 0xe9c) = 0;
  *(undefined4 *)(param_1 + 0xea0) = 0;
  *(undefined4 *)(param_1 + 0xea8) = 0;
  *(undefined4 *)(param_1 + 0xeac) = 0;
  *(undefined4 *)(param_1 + 0xea4) = 0;
  *(undefined4 *)(param_1 + 0xeb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xeb8) = 0;
  *(undefined4 *)(param_1 + 0xebc) = 0;
  *(undefined4 *)(param_1 + 0xec0) = 1;
  *(undefined4 *)(param_1 + 0xec4) = 0;
  *(undefined4 *)(param_1 + 0xec8) = 0;
  *(undefined4 *)(param_1 + 0xecc) = 0;
  *(undefined4 *)(param_1 + 0xed0) = 0;
  *(undefined4 *)(param_1 + 0xed4) = 0;
  *(undefined4 *)(param_1 + 0xed8) = 0;
  *(undefined4 *)(param_1 + 0xedc) = 0;
  *(undefined4 *)(param_1 + 0xee0) = 0;
  *(undefined4 *)(param_1 + 0xee4) = 0;
  *(undefined4 *)(param_1 + 0xee8) = 0;
  *(undefined4 *)(param_1 + 0xeec) = 0;
  *(undefined4 *)(param_1 + 0xef0) = 0;
  *(undefined4 *)(param_1 + 0xef4) = 0;
  *(undefined4 *)(param_1 + 0xef8) = 0;
  *(undefined4 *)(param_1 + 0xefc) = 0;
  *(undefined4 *)(param_1 + 0xf00) = 0;
  *(undefined4 *)(param_1 + 0xf04) = 0;
  *(undefined4 *)(param_1 + 0xf08) = 0;
  *(undefined4 *)(param_1 + 0xf0c) = 3;
  *(undefined4 *)(param_1 + 0xf10) = 0xc;
  return;
}

