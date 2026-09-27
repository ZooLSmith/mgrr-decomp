// src/hw/cShader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9E620..00FB10E0, 5 functions

#include "mgrr.h"

// 00F9E620  Hw::cShader::vf04  size=99  [class]
void __fastcall Hw::cShader::vf04(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}

// 00FAA3F0  Hw::cShader::vf00  size=50  [class]
undefined4 * __thiscall Hw::cShader::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = cVertexShader::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB10A0  Hw::cShader::vf04  size=5  [class]
void __fastcall Hw::cShader::vf04(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}

// 00FB10B0  FUN_00fb10b0  size=46  [between]
bool FUN_00fb10b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00a281f0("ModelShaderEvWtrPs2.pso");
  uVar2 = FUN_00a281f0("ModelShaderEvWtrVs.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  return iVar3 != 0;
}

// 00FB10E0  Hw::cShader::vf04  size=5  [class]
void __fastcall Hw::cShader::vf04(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}

