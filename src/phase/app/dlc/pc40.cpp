// src/phase/app/dlc/pc40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B600..00D70920, 7 functions

#include "types.h"

// 00D4B600  cPc40::vf08  size=80  [class]
void __fastcall cPc40::vf08(int param_1)

{
  DAT_01b354e0 = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_00c82290(0xe);
  FUN_00c82290(0xf);
  FUN_00c82290(0x10);
  FUN_00c82290(0x11);
  FUN_00c82290(0x12);
  return;
}

// 00D4B650  cPc40::vf10  size=23  [class]
void __fastcall cPc40::vf10(int param_1)

{
  DAT_01b354e0 = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  FUN_00950d10();
  return;
}

// 00D4B670  cPc40::vf18  size=1  [class]
void cPc40::vf18(void)

{
  return;
}

// 00D564A0  cPc40::vf0C  size=179  [class]
void __fastcall cPc40::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01b354e0 != 0) && (*(int *)(param_1 + 0x11c) == 0)) {
    piVar1 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar1 + 0x24))(0x14,1,2);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
      if (iVar2 != 0) {
        uVar3 = FUN_00a7c8a0();
        piVar1 = (int *)FUN_00602f90(uVar3);
        iVar2 = (**(code **)(*piVar1 + 0x32c))();
        if (iVar2 == 0) {
          FUN_0093b4a0("pc40_INSIDE2",0,0);
          *(undefined4 *)(param_1 + 0x11c) = 1;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar2 = FUN_00936700("pc40_LOADING");
    if (iVar2 != 0) {
      FUN_00e5e050("rc00_r401_se_env_elevator_02",0);
      *(undefined4 *)(param_1 + 0x120) = 1;
    }
  }
  return;
}

// 00D56560  cPc40::vf14  size=50  [class]
void cPc40::vf14(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = "PC40_IN";
  uVar3 = 0;
  uVar1 = FUN_00e03ea0("PC40_IN",0,"PC40_IN");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  if (iVar2 == 0) {
    FUN_00c82290(7);
  }
  return;
}

// 00D5D400  cPc40::vf2C  size=20  [class]
void cPc40::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D70920  cPc40::vf00  size=54  [class]
undefined4 * __thiscall cPc40::vf00(undefined4 *param_1,byte param_2)

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

