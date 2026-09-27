// src/phase/app/pf14.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47700..00D70760, 7 functions

#include "types.h"

// 00D47700  Pf14::vf14  size=13  [class]
void Pf14::vf14(void)

{
  DAT_01bea064 = DAT_01bea064 | 0x8000000;
  return;
}

// 00D47710  Pf14::vf1C  size=3  [class]
void Pf14::vf1C(void)

{
  return;
}

// 00D47720  Pf14::vf0C  size=1  [class]
void Pf14::vf0C(void)

{
  return;
}

// 00D511B0  Pf14::vf18  size=276  [class]
void __fastcall Pf14::vf18(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e03ea0("E3_ray_bt");
  if (DAT_018b9178 == iVar1) {
    if ((DAT_01bea060 & 0x8000000) == 0) {
      DAT_01bea064 = DAT_01bea064 & 0xf7ffffff;
    }
    else {
      DAT_01bea064 = DAT_01bea064 | 0x8000000;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x11c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x11c) = 1;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x11c) = 2;
    return;
  case 2:
    iVar1 = FUN_00e03ea0("end_slate");
    if (DAT_018b9178 == iVar1) {
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
      return;
    }
    break;
  case 3:
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
    return;
  case 4:
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    iVar1 = 300;
    if (*(int *)(param_1 + 0x124) == 1) {
      iVar1 = 0xb4;
    }
    if (iVar1 <= *(int *)(param_1 + 0x120)) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 5;
      return;
    }
    break;
  case 5:
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    *(uint *)(param_1 + 0x11c) = ((*(int *)(param_1 + 0x124) < 2) - 1 & 3) + 3;
    return;
  case 6:
    FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  }
  return;
}

// 00D512E0  Pf14::vf08  size=399  [class]
void Pf14::vf08(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char acStack_24 [36];
  
  acStack_24[0] = '\x13';
  acStack_24[1] = '\0';
  acStack_24[2] = '\0';
  acStack_24[3] = '\0';
  FUN_00c81b80();
  DAT_01bea060 = DAT_01bea060 | 0x80000;
  DAT_01bea090 = DAT_01bea090 | 0x400;
  acStack_24[0] = '\b';
  acStack_24[1] = '\x13';
  acStack_24[2] = -0x2b;
  acStack_24[3] = '\0';
  piVar1 = (int *)FUN_00c13920();
  acStack_24[0] = '\0';
  acStack_24[1] = '\0';
  acStack_24[2] = '\0';
  acStack_24[3] = '\0';
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      if (iVar2 != 0) {
        _sprintf_s(acStack_24,0x20,"pl0010_f030.mot");
        uVar3 = FUN_00de4500(acStack_24);
        _sprintf_s(acStack_24,0x20,"pl0010_f030_0_seq.bxm");
        uVar4 = FUN_00de4500(acStack_24);
        FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00a8caf0(0x135,0,0,0);
      }
    }
    iVar2 = FUN_00a7f600(0x10104);
    if (iVar2 != 0) {
      _sprintf_s(acStack_24,0x20,"pl0104_f030.mot");
      uVar3 = FUN_00de4500(acStack_24);
      _sprintf_s(acStack_24,0x20,"pl0104_f030_0_seq.bxm");
      uVar4 = FUN_00de4500(acStack_24);
      FUN_00a7c8a0();
      FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 00D51470  Pf14::vf10  size=41  [class]
void Pf14::vf10(void)

{
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea064 = DAT_01bea064 & 0xf7ffffff;
  DAT_01bea060 = DAT_01bea060 & 0xfff7ffff;
  DAT_01bea090 = DAT_01bea090 & 0xfffffbff;
  return;
}

// 00D70760  Pf14::vf00  size=54  [class]
undefined4 * __thiscall Pf14::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

