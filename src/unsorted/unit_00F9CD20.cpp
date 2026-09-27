// src/unsorted/unit_00F9CD20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9CD20..00F9D030, 7 functions

#include "mgrr.h"

// 00F9CD20  FUN_00f9cd20  size=54  [run]
void __fastcall FUN_00f9cd20(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}

// 00F9CD60  FUN_00f9cd60  size=85  [run]
int __thiscall FUN_00f9cd60(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xd) != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 0xc) = 0x100;
  }
  return param_1;
}

// 00F9CDD0  FUN_00f9cdd0  size=54  [run]
void __fastcall FUN_00f9cdd0(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}

// 00F9CE10  FUN_00f9ce10  size=85  [run]
int __thiscall FUN_00f9ce10(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xd) != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 0xc) = 0x100;
  }
  return param_1;
}

// 00F9CE80  FUN_00f9ce80  size=187  [run]
undefined4 FUN_00f9ce80(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_01f206d4;
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  if ((piVar2 != (int *)0x0) && (param_2 != 0)) {
    piVar1 = (int *)(param_1 + 4);
    iVar3 = (**(code **)(*piVar2 + 0x16c))(piVar2,param_2,piVar1);
    if (-1 < iVar3) {
      iVar3 = D3DXGetShaderConstantTable(param_2,param_1 + 8);
      if (-1 < iVar3) {
        *(undefined2 *)(param_1 + 0xc) = 0x101;
        return 1;
      }
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *piVar1 = 0;
      }
      piVar2 = *(int **)(param_1 + 8);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

// 00F9CF40  FUN_00f9cf40  size=187  [run]
undefined4 FUN_00f9cf40(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_01f206d4;
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  if ((piVar2 != (int *)0x0) && (param_2 != 0)) {
    piVar1 = (int *)(param_1 + 4);
    iVar3 = (**(code **)(*piVar2 + 0x1a8))(piVar2,param_2,piVar1);
    if (-1 < iVar3) {
      iVar3 = D3DXGetShaderConstantTable(param_2,param_1 + 8);
      if (-1 < iVar3) {
        *(undefined2 *)(param_1 + 0xc) = 0x101;
        return 1;
      }
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *piVar1 = 0;
      }
      piVar2 = *(int **)(param_1 + 8);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

// 00F9D030  FUN_00f9d030  size=49  [run]
void __fastcall FUN_00f9d030(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[6];
  uVar3 = iVar2 - 1U & 1;
  param_1[6] = uVar3;
  piVar1 = param_1 + uVar3 * 5 + 8;
  param_1[3] = (int)(param_1 + iVar2 * 5 + 8);
  *param_1 = (int)piVar1;
  piVar1[4] = 0;
  piVar1[2] = piVar1[1];
  FUN_00f9b090();
  return;
}

