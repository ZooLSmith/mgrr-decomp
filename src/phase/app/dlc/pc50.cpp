// src/phase/app/dlc/pc50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B690..00D70960, 7 functions

#include "mgrr.h"
#include "cPc50.h"

// 00D4B690  cPc50::vf08  size=41  [class]
void __fastcall cPc50::vf08(int param_1)

{
  FUN_00950d10();
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}

// 00D4B6C0  cPc50::vf0C  size=1  [class]
void cPc50::vf0C(void)

{
  return;
}

// 00D4B6D0  cPc50::vf18  size=469  [class]
void __fastcall cPc50::vf18(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    iVar1 = FUN_00937e00("pc40_LOADING");
    if (iVar1 != 0) {
      FUN_00e5e050("Stop_rc00_r401_se_env_elevator_02",0);
      *(undefined4 *)(param_1 + 0x11c) = 1;
    }
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar1 = FUN_00c18cc0(0xc);
    iVar2 = FUN_00c18cf0(0xc);
    if (iVar1 != 0) {
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x128) == 0) {
          *(undefined4 *)(param_1 + 0x128) = 1;
          piVar3 = (int *)FUN_00c18350();
          (**(code **)(*piVar3 + 0x5c))(0xc0d);
          piVar3 = (int *)FUN_00c18350();
          (**(code **)(*piVar3 + 0x5c))(0xc0e);
          piVar3 = (int *)FUN_00c18350();
          (**(code **)(*piVar3 + 0x5c))(0xc13);
          piVar3 = (int *)FUN_00c18350();
          (**(code **)(*piVar3 + 0x5c))(0xc10);
          piVar3 = (int *)FUN_00c14bb0();
          (**(code **)(*piVar3 + 0x58))(0xc0d,0);
          piVar3 = (int *)FUN_00c14bb0();
          (**(code **)(*piVar3 + 0x58))(0xc0e,0);
          piVar3 = (int *)FUN_00c14bb0();
          (**(code **)(*piVar3 + 0x58))(0xc13,0);
          piVar3 = (int *)FUN_00c14bb0();
          (**(code **)(*piVar3 + 0x58))(0xc10,0);
          return;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x120) = 1;
        piVar3 = (int *)FUN_00c18350();
        (**(code **)(*piVar3 + 0x60))(0xc0d);
        piVar3 = (int *)FUN_00c18350();
        (**(code **)(*piVar3 + 0x60))(0xc0e);
        piVar3 = (int *)FUN_00c18350();
        (**(code **)(*piVar3 + 0x60))(0xc13);
        piVar3 = (int *)FUN_00c18350();
        (**(code **)(*piVar3 + 0x60))(0xc10);
        piVar3 = (int *)FUN_00c14bb0();
        (**(code **)(*piVar3 + 0x58))(0xc0d,1);
        piVar3 = (int *)FUN_00c14bb0();
        (**(code **)(*piVar3 + 0x58))(0xc0e,1);
        piVar3 = (int *)FUN_00c14bb0();
        (**(code **)(*piVar3 + 0x58))(0xc13,1);
        piVar3 = (int *)FUN_00c14bb0();
        (**(code **)(*piVar3 + 0x58))(0xc10,1);
      }
    }
  }
  return;
}

// 00D565A0  cPc50::vf10  size=26  [class]
void cPc50::vf10(void)

{
  DAT_0188694c = 0;
  FUN_00951e30();
  DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
  return;
}

// 00D565C0  cPc50::vf14  size=236  [class]
void __fastcall cPc50::vf14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = "PC50_DOOR_ROCK";
  uVar3 = 1;
  uVar1 = FUN_00e03ea0("PC50_DOOR_ROCK",1,"PC50_DOOR_ROCK");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  if (iVar2 == 0) {
    FUN_00c82290(4);
    FUN_00c82290(8);
    FUN_00c82290(1);
    FUN_00c82290(2);
    FUN_00c82290(3);
    FUN_00c82290(5);
    FUN_00c82290(6);
    FUN_00c82290(9);
    FUN_00c82290(10);
    FUN_00c82290(0xb);
  }
  DAT_0188694c = 1;
  if (*(int *)(param_1 + 0x124) == 0) {
    *(undefined4 *)(param_1 + 0x124) = 1;
    FUN_00953ef0();
  }
  pcVar4 = "PC50_ROOF";
  uVar3 = 1;
  uVar1 = FUN_00e03ea0("PC50_ROOF",1,"PC50_ROOF");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  if (iVar2 != 0) {
    FUN_00951e30();
  }
  return;
}

// 00D5D420  cPc50::vf2C  size=20  [class]
void cPc50::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D70960  cPc50::vf00  size=54  [class]
undefined4 * __thiscall cPc50::vf00(undefined4 *param_1,byte param_2)

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

