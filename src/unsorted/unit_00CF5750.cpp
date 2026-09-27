// src/unsorted/unit_00CF5750.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF5750..00CF62F0, 20 functions

#include "mgrr.h"

// 00CF5750  FUN_00cf5750  size=93  [run]
undefined4 __thiscall FUN_00cf5750(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00cde140();
  return 1;
}

// 00CF57B0  FUN_00cf57b0  size=65  [run]
void __fastcall FUN_00cf57b0(undefined4 *param_1)

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

// 00CF5800  FUN_00cf5800  size=21  [run]
undefined4 * __fastcall FUN_00cf5800(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapVariable::cHeapVariable();
  return param_1;
}

// 00CF5820  FUN_00cf5820  size=21  [run]
undefined4 * __fastcall FUN_00cf5820(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapVariable::cHeapVariable();
  return param_1;
}

// 00CF5860  FUN_00cf5860  size=43  [run]
void __fastcall FUN_00cf5860(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CF5890  FUN_00cf5890  size=73  [run]
void __thiscall FUN_00cf5890(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[3] < param_1[2]) {
    iVar1 = param_1[3] * 0x1c;
    puVar3 = (undefined4 *)(param_1[1] + iVar1);
    if (puVar3 != (undefined4 *)0x0) {
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1[3] = param_1[3] + 1;
    *param_2 = param_1[1] + iVar1;
    return;
  }
  *param_2 = *param_1;
  return;
}

// 00CF5920  FUN_00cf5920  size=65  [run]
void __fastcall FUN_00cf5920(undefined4 *param_1)

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

// 00CF5990  FUN_00cf5990  size=43  [run]
void __fastcall FUN_00cf5990(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CF5A60  FUN_00cf5a60  size=43  [run]
void __fastcall FUN_00cf5a60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CF5A90  FUN_00cf5a90  size=74  [run]
void __thiscall FUN_00cf5a90(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0xc;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00CF5BA0  FUN_00cf5ba0  size=43  [run]
void __fastcall FUN_00cf5ba0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CF5BD0  FUN_00cf5bd0  size=94  [run]
void __thiscall FUN_00cf5bd0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0x18;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    puVar2[4] = param_3[4];
    puVar2[5] = param_3[5];
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00CF5C30  FUN_00cf5c30  size=125  [run]
void __thiscall FUN_00cf5c30(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*param_3 - *(int *)(param_1 + 4)) / 0x18;
  if (iVar1 < *(int *)(param_1 + 0xc) + -1) {
    iVar3 = iVar1 * 0x18;
    iVar4 = iVar1;
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
      *puVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18 + iVar3);
      puVar2[1] = puVar2[7];
      puVar2[2] = puVar2[8];
      puVar2[3] = puVar2[9];
      puVar2[4] = puVar2[10];
      puVar2[5] = puVar2[0xb];
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < *(int *)(param_1 + 0xc) + -1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x18;
  return;
}

// 00CF5D00  FUN_00cf5d00  size=43  [run]
void __fastcall FUN_00cf5d00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CF5FD0  FUN_00cf5fd0  size=43  [run]
void __fastcall FUN_00cf5fd0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CF6050  FUN_00cf6050  size=102  [run]
void __thiscall FUN_00cf6050(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = (*param_3 - *(int *)(param_1 + 4)) / 0x24;
  if (iVar1 < *(int *)(param_1 + 0xc) + -1) {
    iVar3 = iVar1 * 0x24;
    iVar4 = iVar1;
    do {
      puVar6 = (undefined4 *)(iVar3 + *(int *)(param_1 + 4));
      puVar5 = puVar6 + 9;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar4 < *(int *)(param_1 + 0xc) + -1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x24;
  return;
}

// 00CF6110  FUN_00cf6110  size=43  [run]
void __fastcall FUN_00cf6110(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CF6140  FUN_00cf6140  size=74  [run]
void __thiscall FUN_00cf6140(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0xc;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00CF61E0  FUN_00cf61e0  size=43  [run]
void __fastcall FUN_00cf61e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CF62F0  FUN_00cf62f0  size=83  [run]
void __fastcall FUN_00cf62f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      *piVar1 = (int)(piVar1 + -4);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

