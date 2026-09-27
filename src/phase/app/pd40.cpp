// src/phase/app/pd40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4BB20..00D70A70, 8 functions

#include "types.h"

// 00D4BB20  cPd40::vf08  size=58  [class]
void __fastcall cPd40::vf08(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  FUN_00c82290(4);
  FUN_00c82290(5);
  uVar1 = FUN_00e03ea0("rd46_enkei_bridge_rd45_bridge_grid");
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  return;
}

// 00D4BB60  cPd40::vf0C  size=1  [class]
void cPd40::vf0C(void)

{
  return;
}

// 00D4BB80  FUN_00d4bb80  size=251  [callgraph]
void __fastcall FUN_00d4bb80(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    piVar1 = (int *)FUN_00c18350();
    (**(code **)(*piVar1 + 0x5c))(0xd4c);
    piVar1 = (int *)FUN_00c18350();
    (**(code **)(*piVar1 + 0x60))(0xd4d);
    piVar1 = (int *)FUN_00c18350();
    (**(code **)(*piVar1 + 0x60))(0xd45);
    piVar1 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar1 + 0x58))(0xd4c,0);
    piVar1 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar1 + 0x58))(0xd4d,1);
    piVar1 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar1 + 0x58))(0xd45,1);
    return;
  }
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x60))(0xd4c);
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x5c))(0xd4d);
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x5c))(0xd45);
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x58))(0xd4c,1);
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x58))(0xd4d,0);
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x58))(0xd45,0);
  return;
}

// 00D56A30  cPd40::vf10  size=70  [class]
void __fastcall cPd40::vf10(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00c14bb0();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c14bb0();
    iVar1 = (**(code **)(*piVar2 + 0x1c))(*(undefined4 *)(param_1 + 0x124),0xd4d);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x1c))();
    }
  }
  DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
  return;
}

// 00D56A80  cPd40::vf14  size=147  [class]
void __fastcall cPd40::vf14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = "PD40_WOLF";
  uVar3 = 0;
  uVar1 = FUN_00e03ea0("PD40_WOLF",0,"PD40_WOLF");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  if (iVar2 == 0) {
    FUN_00c82290(6);
  }
  pcVar4 = "PD40_HELI_END";
  uVar3 = 1;
  uVar1 = FUN_00e03ea0("PD40_HELI_END",1,"PD40_HELI_END");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  pcVar4 = "PD40_BRIDGE";
  uVar3 = 1;
  *(uint *)(param_1 + 0x11c) = (uint)(iVar2 != 0);
  uVar1 = FUN_00e03ea0("PD40_BRIDGE",1,"PD40_BRIDGE");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  *(uint *)(param_1 + 0x120) = (uint)(iVar2 != 0);
  FUN_00d4bb80();
  return;
}

// 00D56B20  cPd40::vf18  size=61  [class]
void __fastcall cPd40::vf18(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    piVar1 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar1 + 0x1c))(*(undefined4 *)(param_1 + 0x124),0xd4d);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d56b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x20))();
      return;
    }
  }
  return;
}

// 00D5D8F0  cPd40::vf2C  size=20  [class]
void cPd40::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D70A70  cPd40::vf00  size=54  [class]
undefined4 * __thiscall cPd40::vf00(undefined4 *param_1,byte param_2)

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

