// src/phase/app/pd50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4BCC0..00D70AB0, 7 functions

#include "mgrr.h"
#include "cPd50.h"

// 00D4BCC0  cPd50::vf0C  size=1  [class]
void cPd50::vf0C(void)

{
  return;
}

// 00D56B60  cPd50::vf10  size=51  [class]
void __fastcall cPd50::vf10(int param_1)

{
  int *piVar1;
  
  FUN_00951f30();
  DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
  DAT_0188694c = 0;
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x130);
  return;
}

// 00D56BA0  cPd50::vf14  size=247  [class]
void __fastcall cPd50::vf14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = "PD50_CODEC_END";
  uVar3 = 0;
  uVar1 = FUN_00e03ea0("PD50_CODEC_END",0,"PD50_CODEC_END");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  if (iVar2 == 0) {
    FUN_00c82290(8);
    FUN_00c82290(4);
    FUN_00c82290(5);
  }
  pcVar4 = "PD50_SET";
  uVar3 = 0;
  DAT_0188694c = 1;
  uVar1 = FUN_00e03ea0("PD50_SET",0,"PD50_SET");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  *(uint *)(param_1 + 0x124) = (uint)(iVar2 == 0);
  if (*(int *)(param_1 + 0x11c) == 0) {
    *(undefined4 *)(param_1 + 0x11c) = 1;
    FUN_00954070();
  }
  pcVar4 = "PD50_SET_CODEC";
  uVar3 = 0;
  uVar1 = FUN_00e03ea0("PD50_SET_CODEC",0,"PD50_SET_CODEC");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  if (iVar2 != 0) {
    FUN_00951f30();
  }
  iVar2 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x120),1);
  if (iVar2 != 0) {
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x804400;
  }
  return;
}

// 00D56CA0  cPd50::vf18  size=196  [class]
void __fastcall cPd50::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x120),1);
  if (iVar1 != 0) {
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x804400;
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    piVar2 = (int *)FUN_00c14bb0();
    iVar1 = (**(code **)(*piVar2 + 0x1c))(*(undefined4 *)(param_1 + 0x128),0xd4d);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x1c))();
    }
  }
  piVar2 = (int *)FUN_00c14bb0();
  iVar1 = (**(code **)(*piVar2 + 0x50))("musen_02");
  if (iVar1 == 0) {
    iVar1 = FUN_00916330();
    if (iVar1 != 0) {
      FUN_00916360();
      return;
    }
  }
  else {
    iVar1 = FUN_00916330();
    if (iVar1 == 0) {
      FUN_0091a8a0();
      FUN_0091a930(0x14);
    }
  }
  return;
}

// 00D5D910  cPd50::vf2C  size=50  [class]
void cPd50::vf2C(void)

{
  int *piVar1;
  
  DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
  DAT_01bea090 = DAT_01bea090 & 0xff7fbbff;
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D65960  cPd50::vf08  size=460  [class]
void __fastcall cPd50::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  uVar2 = FUN_00e03ea0("PD50_STOP");
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  iVar3 = FUN_0094e9c0(0x3855170f,9);
  if (iVar3 != 0) {
    FUN_00c82240(0x11);
    FUN_00c82240(0xc);
  }
  FUN_00c82290(0x15);
  uVar2 = FUN_00e03ea0("rd46_enkei_bridge_rd45_bridge_grid");
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  piVar4 = (int *)FUN_00910da0();
  local_120 = 0x40a00000;
  local_11c = 0x41c80000;
  local_118 = 0x40200000;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_100 = 0x3f800000;
  local_fc = 0x41c80000;
  local_f8 = 0xc3020000;
  uVar2 = (**(code **)(*piVar4 + 4))(local_e4,local_e0,&local_100,&local_110,&local_120,1);
  FUN_00910ab0(uVar2);
  iVar3 = *(int *)(param_1 + 0x130);
  if (iVar3 != 0) {
    FUN_004066f0();
    uVar1 = *(uint *)(iVar3 + 0xc);
    puVar5 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar5 = *puVar5 | 0x200;
    puVar5[0xb] = 0x1b;
    if (DAT_01885d68 != 1) {
      piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar4 = *piVar4 + -1;
      if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x130),4);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x130),2);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x130),0x20);
  FUN_00911ca0("programmabled");
  FUN_00916360();
  *(undefined4 *)(param_1 + 300) = 1;
  return;
}

// 00D70AB0  cPd50::vf00  size=54  [class]
undefined4 * __thiscall cPd50::vf00(undefined4 *param_1,byte param_2)

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

