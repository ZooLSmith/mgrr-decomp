// src/unsorted/unit_00AC7810.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC7810..00AC7810, 1 functions

#include "mgrr.h"

// 00AC7810  FUN_00ac7810  size=216  [run]
void __fastcall FUN_00ac7810(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *unaff_EDI;
  undefined1 auStack_f4 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e0 [36];
  undefined4 uStack_50;
  undefined1 uStack_2c;
  
  if (param_1[0x2a2] != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x2a3);
  }
  param_1[0x2a2] = 1;
  FUN_0118f7b0();
  uStack_50 = 0;
  uStack_2c = 5;
  local_e0[0] = 0x1b;
  piVar2 = (int *)FUN_00910da0();
  uStack_f0 = 0x40200000;
  uStack_ec = 0x40500000;
  uStack_e8 = 0x40a00000;
  iVar1 = *piVar2;
  uVar3 = (**(code **)(*param_1 + 0x84))(&uStack_f0,1);
  uVar3 = (**(code **)(iVar1 + 4))(auStack_f4,local_e0,param_1 + 0x10,uVar3);
  FUN_00910ab0(uVar3);
  FUN_00917bd0(*unaff_EDI,0x800);
  return;
}

