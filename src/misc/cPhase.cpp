// src/misc/cPhase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D575E0..00D6CAB0, 166 functions

#include "mgrr.h"

// 00D575E0  cPhase<cPa50>::vf2C  size=20  [class]
void cPhase<cPa50>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D57600  FUN_00d57600  size=216  [between]
undefined4 __thiscall
FUN_00d57600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4cd20,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4cd60);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D57710  FUN_00d57710  size=216  [between]
undefined4 __thiscall
FUN_00d57710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4cdc0,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4ce00);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D57850  FUN_00d57850  size=216  [between]
undefined4 __thiscall
FUN_00d57850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4ceb0,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4cef0);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D57960  FUN_00d57960  size=216  [between]
undefined4 __thiscall
FUN_00d57960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4cf50,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4cf90);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D57A70  FUN_00d57a70  size=216  [between]
undefined4 __thiscall
FUN_00d57a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4cff0,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4d030);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D57B80  FUN_00d57b80  size=216  [between]
undefined4 __thiscall
FUN_00d57b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4d090,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4d0d0);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D57C90  FUN_00d57c90  size=216  [between]
undefined4 __thiscall
FUN_00d57c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4d130,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4d170);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D57DA0  cPhase<cPc20>::vf2C  size=20  [class]
void cPhase<cPc20>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D57DC0  FUN_00d57dc0  size=216  [between]
undefined4 __thiscall
FUN_00d57dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4d1f0,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4d230);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D57ED0  cPhase<cPc40>::vf2C  size=20  [class]
void cPhase<cPc40>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D57EF0  cPhase<cPc50>::vf2C  size=20  [class]
void cPhase<cPc50>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D57F10  FUN_00d57f10  size=216  [between]
undefined4 __thiscall
FUN_00d57f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4d2d0,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4d310);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D58020  cPhase<cPd10>::vf2C  size=20  [class]
void cPhase<cPd10>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D58040  cPhase<cPd30>::vf2C  size=20  [class]
void cPhase<cPd30>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D58060  cPhase<cPd40>::vf2C  size=20  [class]
void cPhase<cPd40>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D58080  cPhase<cPd50>::vf2C  size=20  [class]
void cPhase<cPd50>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D673F0  cPhase<P118>::vf2C  size=20  [class]
void cPhase<P118>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D67430  cPhase<P118>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P118>::vf00(undefined4 *param_1,byte param_2)

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

// 00D67A40  cPhase<P210>::vf2C  size=20  [class]
void cPhase<P210>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D67A80  cPhase<P210>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P210>::vf00(undefined4 *param_1,byte param_2)

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

// 00D67B10  cPhase<P310>::vf2C  size=20  [class]
void cPhase<P310>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D67B50  cPhase<P310>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P310>::vf00(undefined4 *param_1,byte param_2)

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

// 00D67BE0  cPhase<P320>::vf2C  size=20  [class]
void cPhase<P320>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D67C20  cPhase<P320>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P320>::vf00(undefined4 *param_1,byte param_2)

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

// 00D68100  cPhase<P430>::vf2C  size=20  [class]
void cPhase<P430>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D68140  cPhase<P430>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P430>::vf00(undefined4 *param_1,byte param_2)

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

// 00D681D0  cPhase<P448>::vf2C  size=20  [class]
void cPhase<P448>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D68210  cPhase<P448>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P448>::vf00(undefined4 *param_1,byte param_2)

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

// 00D682A0  cPhase<cP450>::vf2C  size=20  [class]
void cPhase<cP450>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D682E0  cPhase<cP450>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP450>::vf00(undefined4 *param_1,byte param_2)

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

// 00D683E0  cPhase<cP458>::vf2C  size=20  [class]
void cPhase<cP458>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D68420  FUN_00d68420  size=21  [between]
undefined4 * __fastcall FUN_00d68420(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00D68450  cPhase<cP458>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP458>::vf00(undefined4 *param_1,byte param_2)

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

// 00D68490  FUN_00d68490  size=166  [between]
void FUN_00d68490(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  for (puVar2 = (undefined4 *)(**(code **)(DAT_01dc51e8 + 0x1c))(0); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)(**(code **)(*(int *)puVar2[-1] + 0x1c))(puVar2)) {
    uVar1 = *puVar2;
    switch(uVar1) {
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x10:
      puVar3 = (undefined4 *)FUN_00dd2bc0();
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      puVar3[1] = 0;
      *puVar3 = uVar1;
    }
  }
  iVar4 = (**(code **)(DAT_01dc51e8 + 0x1c))(0);
  while (iVar4 != 0) {
    iVar5 = (**(code **)(DAT_01dc51e8 + 0x1c))(iVar4);
    FUN_00dd4920(iVar4);
    iVar4 = iVar5;
  }
  return;
}

// 00D68570  FUN_00d68570  size=302  [between]
undefined4 __fastcall FUN_00d68570(int param_1)

{
  int iVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 uVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 == 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    for (piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x2b0) + 0x1c))(0); piVar2 != (int *)0x0;
        piVar2 = (int *)(**(code **)(*(int *)piVar2[-1] + 0x1c))(piVar2)) {
      if (*piVar2 < *unaff_retaddr) {
        piVar2[1] = 1;
      }
    }
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00408600();
      uVar3 = 3;
      FUN_00a81330(3);
      FUN_00a7c8a0();
      FUN_00a8cb50(uVar3);
      uVar3 = 3;
      FUN_00a81330(3);
      FUN_00a7c8a0();
      FUN_00a8cb60(uVar3);
      uVar3 = 0x11;
      FUN_00a81330(0x11);
      FUN_00a7c8a0();
      FUN_00a8cb80(uVar3);
      FUN_0094e9e0(0);
      FUN_00951930();
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
      FUN_00a33520(1,0x400,9);
      unaff_retaddr[1] = 1;
      return 1;
    }
  }
  return 0;
}

// 00D686F0  cPhase<cP470>::vf2C  size=20  [class]
void cPhase<cP470>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D68730  cPhase<cP470>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP470>::vf00(undefined4 *param_1,byte param_2)

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

// 00D68770  FUN_00d68770  size=78  [between]
void __fastcall FUN_00d68770(int param_1)

{
  FUN_00d54f60();
  if (DAT_01bea160 == 0) {
    FUN_00d664e0(10);
  }
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(0,0,0);
  FUN_00a55860(0);
  return;
}

// 00D687C0  FUN_00d687c0  size=985  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d687c0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float10 fVar9;
  int unaff_retaddr;
  undefined *puVar10;
  
  iVar3 = FUN_00a81330();
  piVar4 = (int *)FUN_00c13920();
  iVar5 = (**(code **)(*piVar4 + 0x28))(0);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar10 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar5 = FUN_00dd6d70(puVar10);
      uVar6 = -(uint)(iVar5 != 0) & (uint)piVar4;
    }
  }
  iVar5 = FUN_00c19c00(0,1,0);
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  else {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar10 = &DAT_01b34eb0;
      (**(code **)(*piVar4 + 4))(&DAT_01b34eb0);
      iVar5 = FUN_00dd6d70(puVar10);
      uVar7 = -(uint)(iVar5 != 0) & (uint)piVar4;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x130)) {
  case 0:
    if (iVar3 == 0) {
      iVar3 = FUN_00a7f600(0xd5415);
      if (iVar3 == 0) {
        return;
      }
      uVar8 = FUN_00a7c7f0();
      FUN_00a7c960(uVar8);
    }
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
    return;
  case 1:
    cVar2 = FUN_00a55810();
    if ((cVar2 != '\0') && (iVar5 = FUN_00d54fe0(), iVar5 == 0)) {
LAB_00d68aba:
      FUN_00d63d80();
      *(undefined4 *)(param_1 + 0x130) = 5;
      return;
    }
    if (0.0 < *(float *)(uVar6 + 0x341c)) {
      FUN_00d54f60();
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
      return;
    }
    if (((((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (*(int *)(uVar6 + 0x4e4) == 0))
        && (((*(byte *)(iVar3 + 0x4c0) & 1) != 0 && (unaff_retaddr == 0)))) &&
       ((iVar5 = FUN_00d54fe0(), iVar5 == 0 &&
        (fVar1 = ABS(*(float *)(uVar6 + 0x44) - *(float *)(iVar3 + 0x44)),
        fVar1 < 85.0 != (fVar1 == 85.0))))) {
      fVar1 = *(float *)(param_1 + 0x15c);
      fVar9 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x15c) =
           (float)(((float10)1 - fVar9) * ((float10)0.2 - (float10)fVar1) + (float10)fVar1);
      iVar3 = FUN_00a8cac0();
      if ((iVar3 != 0xd) && (iVar3 = FUN_00a8cac0(), iVar3 != 0xe)) {
        FUN_00a8cb60(0xd);
        if (uVar7 != 0) {
          FUN_00a8cb60(0xd);
        }
        _DAT_01d61384 = 0xffffffff;
        return;
      }
    }
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x15c);
    fVar9 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x15c) =
         (float)(((float10)1 - fVar9) * ((float10)0.08 - (float10)fVar1) + (float10)fVar1);
    if ((uVar6 != 0) && (iVar3 = FUN_00416db0(), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x130) = 3;
      return;
    }
    break;
  case 3:
    fVar1 = *(float *)(param_1 + 0x15c);
    fVar9 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x15c) =
         (float)(((float10)1 - fVar9) * ((float10)0.08 - (float10)fVar1) + (float10)fVar1);
    cVar2 = FUN_00a55810();
    if (cVar2 == '\0') {
LAB_00d68ad3:
      if ((uVar6 != 0) && (iVar3 = FUN_00416db0(), iVar3 == 0)) {
        *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
      }
    }
    else if (uVar6 != 0) {
      iVar5 = FUN_00d54fe0();
      if (iVar5 == 0) {
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c7e0(), iVar3 != 0)) goto LAB_00d68aba;
        goto LAB_00d68b80;
      }
      goto LAB_00d68ad3;
    }
    iVar3 = FUN_00d54fe0();
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
      return;
    }
    break;
  case 4:
    if ((uVar6 != 0) && (iVar5 = FUN_00416db0(), iVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
    }
    if (iVar3 == 0) {
LAB_00d68b3f:
      iVar5 = FUN_00d54fe0();
      if (iVar5 != 0) {
        return;
      }
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c7e0(), iVar3 != 0)) {
        cVar2 = FUN_00a55810();
        if (cVar2 == '\0') {
          return;
        }
        FUN_00d63d80();
        *(undefined4 *)(param_1 + 0x130) = 5;
        return;
      }
    }
    else {
      uVar8 = FUN_00a7c8a0();
      iVar5 = FUN_00d4c9d0(uVar8);
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0xb74) == 0)) goto LAB_00d68b3f;
    }
LAB_00d68b80:
    FUN_00d5b4e0();
    *(undefined4 *)(param_1 + 0x130) = 5;
  }
  return;
}

// 00D68C00  cPhase<P610>::vf2C  size=20  [class]
void cPhase<P610>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D68C40  cPhase<P610>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P610>::vf00(undefined4 *param_1,byte param_2)

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

// 00D68D90  cPhase<cP720>::vf2C  size=20  [class]
void cPhase<cP720>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D68DD0  cPhase<cP720>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP720>::vf00(undefined4 *param_1,byte param_2)

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

// 00D698B0  cPhase<cPd60>::vf2C  size=20  [class]
void cPhase<cPd60>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D698F0  cPhase<cPd60>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPd60>::vf00(undefined4 *param_1,byte param_2)

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

// 00D69930  FUN_00d69930  size=42  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d69930(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00D69960  FUN_00d69960  size=112  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00d69960(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01dc525c & 1) == 0) {
    _DAT_01dc525c = _DAT_01dc525c | 1;
    DAT_01dc5258 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01dc5258;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01dc5258);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00d5b100(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00D69A20  cPhase<cPf00>::vf2C  size=20  [class]
void cPhase<cPf00>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69AB0  cPhase<Pf02>::vf2C  size=20  [class]
void cPhase<Pf02>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69B40  cPhase<cPf03>::vf2C  size=20  [class]
void cPhase<cPf03>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69BD0  cPhase<cPf04>::vf2C  size=20  [class]
void cPhase<cPf04>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69C60  cPhase<cPf05>::vf2C  size=20  [class]
void cPhase<cPf05>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69CF0  cPhase<cPf06>::vf2C  size=20  [class]
void cPhase<cPf06>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69D80  cPhase<cPf07>::vf2C  size=20  [class]
void cPhase<cPf07>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69E10  cPhase<cPf08>::vf2C  size=20  [class]
void cPhase<cPf08>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69EA0  cPhase<cPf09>::vf2C  size=20  [class]
void cPhase<cPf09>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69F30  cPhase<cPf0a>::vf2C  size=20  [class]
void cPhase<cPf0a>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D69FC0  cPhase<cPf0b>::vf2C  size=20  [class]
void cPhase<cPf0b>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A050  cPhase<cP090>::vf2C  size=20  [class]
void cPhase<cP090>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A0E0  cPhase<P092>::vf2C  size=20  [class]
void cPhase<P092>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A170  cPhase<cP093>::vf2C  size=20  [class]
void cPhase<cP093>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A200  cPhase<Pa10>::vf2C  size=20  [class]
void cPhase<Pa10>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A290  cPhase<cPa15>::vf2C  size=20  [class]
void cPhase<cPa15>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A370  cPhase<Pa70>::vf2C  size=20  [class]
void cPhase<Pa70>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A400  cPhase<P128>::vf2C  size=20  [class]
void cPhase<P128>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A490  cPhase<P138>::vf2C  size=20  [class]
void cPhase<P138>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A520  cPhase<P140>::vf2C  size=20  [class]
void cPhase<P140>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A5B0  cPhase<P168>::vf2C  size=20  [class]
void cPhase<P168>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A640  cPhase<P170>::vf2C  size=20  [class]
void cPhase<P170>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A6D0  cPhase<P220>::vf2C  size=20  [class]
void cPhase<P220>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A760  cPhase<cP230>::vf2C  size=20  [class]
void cPhase<cP230>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A7F0  cPhase<cP2d0>::vf2C  size=20  [class]
void cPhase<cP2d0>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A880  cPhase<P330>::vf2C  size=20  [class]
void cPhase<P330>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A910  cPhase<P340>::vf2C  size=20  [class]
void cPhase<P340>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6A9A0  cPhase<P350>::vf2C  size=20  [class]
void cPhase<P350>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AA30  cPhase<P360>::vf2C  size=20  [class]
void cPhase<P360>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AAC0  cPhase<cP370>::vf2C  size=20  [class]
void cPhase<cP370>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AB50  cPhase<cP380>::vf2C  size=20  [class]
void cPhase<cP380>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6ABE0  cPhase<P410>::vf2C  size=20  [class]
void cPhase<P410>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AC70  cPhase<P420>::vf2C  size=20  [class]
void cPhase<P420>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AD00  cPhase<P468>::vf2C  size=20  [class]
void cPhase<P468>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AD90  cPhase<P520>::vf2C  size=20  [class]
void cPhase<P520>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AE20  cPhase<P710>::vf2C  size=20  [class]
void cPhase<P710>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AEB0  cPhase<cP730>::vf2C  size=20  [class]
void cPhase<cP730>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AF40  cPhase<cP740>::vf2C  size=20  [class]
void cPhase<cP740>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6AFD0  cPhase<cP750>::vf2C  size=20  [class]
void cPhase<cP750>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B070  cPhase<cPef1>::vf2C  size=20  [class]
void cPhase<cPef1>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B100  cPhase<VRPhase>::vf2C  size=20  [class]
void cPhase<VRPhase>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B190  cPhase<Pf12>::vf2C  size=20  [class]
void cPhase<Pf12>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B220  cPhase<Pf13>::vf2C  size=20  [class]
void cPhase<Pf13>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B2B0  cPhase<Pf14>::vf2C  size=20  [class]
void cPhase<Pf14>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B340  cPhase<cPf15>::vf2C  size=20  [class]
void cPhase<cPf15>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B3D0  cPhase<Pf20>::vf2C  size=20  [class]
void cPhase<Pf20>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B460  cPhase<cPf30>::vf2C  size=20  [class]
void cPhase<cPf30>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B4F0  cPhase<cPc10>::vf2C  size=20  [class]
void cPhase<cPc10>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B5D0  cPhase<cPc30>::vf2C  size=20  [class]
void cPhase<cPc30>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B700  cPhase<cPc60>::vf2C  size=20  [class]
void cPhase<cPc60>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B8D0  cPhase<Pf31>::vf2C  size=20  [class]
void cPhase<Pf31>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B960  cPhase<Pf32>::vf2C  size=20  [class]
void cPhase<Pf32>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6B9F0  cPhase<cPfff>::vf2C  size=20  [class]
void cPhase<cPfff>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6BA30  cPhase<cPf00>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf00>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BA70  cPhase<Pf02>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pf02>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BAB0  cPhase<cPf03>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf03>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BAF0  cPhase<cPf04>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf04>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BB30  cPhase<cPf05>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf05>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BB70  cPhase<cPf06>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf06>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BBB0  cPhase<cPf07>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf07>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BBF0  cPhase<cPf08>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf08>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BC30  cPhase<cPf09>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf09>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BC70  cPhase<cPf0a>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf0a>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BCB0  cPhase<cPf0b>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf0b>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BCF0  cPhase<cP090>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP090>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BD30  cPhase<P092>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P092>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BD70  cPhase<cP093>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP093>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BDB0  cPhase<Pa10>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pa10>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BDF0  cPhase<cPa15>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPa15>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BE30  cPhase<cPa50>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPa50>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BE70  cPhase<Pa70>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pa70>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BF00  cPhase<cPrologTrainEvent>::vf2C  size=20  [class]
void cPhase<cPrologTrainEvent>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6BF40  cPhase<P128>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P128>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BF80  cPhase<P138>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P138>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6BFC0  cPhase<P140>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P140>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C000  cPhase<P168>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P168>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C040  cPhase<P170>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P170>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C080  cPhase<P220>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P220>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C0C0  cPhase<cP230>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP230>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C100  cPhase<cP2d0>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP2d0>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C140  cPhase<P330>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P330>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C180  cPhase<P340>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P340>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C1C0  cPhase<P350>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P350>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C200  cPhase<P360>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P360>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C240  cPhase<cP370>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP370>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C280  cPhase<cP380>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP380>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C2C0  cPhase<P410>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P410>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C300  cPhase<P420>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P420>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C340  cPhase<P468>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P468>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C380  cPhase<P520>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P520>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C3C0  cPhase<P710>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<P710>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C400  cPhase<cP730>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP730>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C440  cPhase<cP740>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP740>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C480  cPhase<cP750>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cP750>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C4C0  cPhase<cPef1>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPef1>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C500  cPhase<VRPhase>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<VRPhase>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C540  cPhase<Pf12>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pf12>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C580  cPhase<Pf13>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pf13>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C5C0  cPhase<Pf14>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pf14>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C600  cPhase<cPf15>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf15>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C640  cPhase<Pf20>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pf20>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C680  cPhase<cPf30>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf30>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C6C0  cPhase<cPc10>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPc10>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C700  cPhase<cPc20>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPc20>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C740  cPhase<cPc30>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPc30>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C780  cPhase<cPc40>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPc40>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C7C0  cPhase<cPc50>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPc50>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C800  cPhase<cPc60>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPc60>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C840  cPhase<cPd10>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPd10>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C880  cPhase<cPd30>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPd30>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C8C0  cPhase<cPd40>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPd40>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C900  cPhase<cPd50>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPd50>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C940  cPhase<Pf31>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pf31>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C980  cPhase<Pf32>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<Pf32>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6C9C0  cPhase<cPfff>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPfff>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6CA00  cPhase<cPrologTrainEvent>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPrologTrainEvent>::vf00(undefined4 *param_1,byte param_2)

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

// 00D6CA90  cPhase<cPf01>::vf2C  size=20  [class]
void cPhase<cPf01>::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D6CAB0  cPhase<cPf01>::vf00  size=54  [class]
undefined4 * __thiscall cPhase<cPf01>::vf00(undefined4 *param_1,byte param_2)

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

