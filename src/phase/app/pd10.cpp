// src/phase/app/pd10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B900..00D709E0, 11 functions

#include "types.h"

// 00D4B900  cPd10::vf08  size=35  [class]
void __fastcall cPd10::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}

// 00D4B930  cPd10::vf0C  size=1  [class]
void cPd10::vf0C(void)

{
  return;
}

// 00D56730  cPd10::vf10  size=61  [class]
void __fastcall cPd10::vf10(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x84))();
  if (*(int *)(param_1 + 0x124) != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
  }
  return;
}

// 00D56770  FUN_00d56770  size=89  [callgraph]
uint FUN_00d56770(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c7e0();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          puVar3 = &DAT_01b35b90;
          (**(code **)(*piVar2 + 4))(&DAT_01b35b90);
          iVar1 = FUN_00dd6d80(puVar3);
          return -(uint)(iVar1 != 0) & (uint)piVar2;
        }
      }
    }
  }
  return 0;
}

// 00D567D0  FUN_00d567d0  size=170  [callgraph]
void __fastcall FUN_00d567d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 300) == 0) && (iVar1 = FUN_00d56770(), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x5708) == 0) {
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    else {
      fVar2 = (float10)FUN_00e03a90(0);
      fVar2 = fVar2 + (float10)*(float *)(param_1 + 0x128);
      *(float *)(param_1 + 0x128) = (float)fVar2;
      if ((float10)30.0 < fVar2) {
        FUN_0093b4a0("pd10_BACK",0,0);
        *(undefined4 *)(param_1 + 300) = 1;
      }
    }
    iVar1 = FUN_00a8cab0();
    if ((iVar1 == 0x100000) || (iVar1 == 0x100013)) {
      FUN_0093b4a0("pd10_BACK",0,0);
      *(undefined4 *)(param_1 + 300) = 1;
    }
  }
  return;
}

// 00D5D610  cPd10::vf14  size=191  [class]
void __thiscall cPd10::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = "PD10_START";
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d5d640:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d5d645;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d5d640;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d5d645:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 1;
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
  }
  pcVar4 = "PD10_NMANI";
  do {
    bVar1 = *param_3;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d5d690:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d5d695;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d5d690;
    param_3 = param_3 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d5d695:
  if (iVar3 == 0) {
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x804400;
    iVar3 = FUN_00d56770();
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xffefffff;
    }
  }
  return;
}

// 00D5D6D0  cPd10::vf18  size=156  [class]
void __fastcall cPd10::vf18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = "PD10_NMANI";
  uVar4 = 1;
  uVar1 = FUN_00e03ea0("PD10_NMANI",1,"PD10_NMANI");
  iVar2 = FUN_00d4f0b0(uVar1,uVar4,pcVar5);
  if (iVar2 != 0) {
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x804400;
  }
  FUN_00d567d0();
  if (*(int *)(param_1 + 0x120) == 0) {
    if (*(int *)(param_1 + 0x11c) == 0) {
      uVar1 = FUN_00a7f600(0xf0053);
      *(undefined4 *)(param_1 + 0x11c) = uVar1;
      return;
    }
    iVar2 = FUN_00a7c7e0();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x120) = 1;
      piVar3 = (int *)FUN_00a6e640();
      (**(code **)(*piVar3 + 0x48))(3,2);
    }
  }
  return;
}

// 00D5D770  cPd10::vf2C  size=50  [class]
void cPd10::vf2C(void)

{
  int *piVar1;
  
  DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
  DAT_01bea090 = DAT_01bea090 & 0xff7fbbff;
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D5D7B0  cPd10::vf20  size=114  [class]
void cPd10::vf20(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((((DAT_018b925c != 0) && (piVar1 = (int *)FUN_00d56770(), piVar1 != (int *)0x0)) &&
      (piVar1[0x139] == 0)) && (iVar2 = FUN_00a8cbe0(0x10001), iVar2 == 0)) {
    piVar3 = (int *)FUN_00d56770();
    if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x32c))(), iVar2 != 0)) {
      FUN_008a8f40(1,0,0);
    }
    (**(code **)(*piVar1 + 0x388))(1);
  }
  return;
}

// 00D5D830  cPd10::vf28  size=71  [class]
void cPd10::vf28(void)

{
  int iVar1;
  
  if ((((DAT_018b925c != 0) && (iVar1 = FUN_00d56770(), iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x4e4) == 0)) &&
     ((iVar1 = FUN_00a8cbe0(0x10001), iVar1 != 0 && (iVar1 = FUN_00a8cac0(), iVar1 == 2)))) {
    FUN_00a8cb60(3);
  }
  return;
}

// 00D709E0  cPd10::vf00  size=54  [class]
undefined4 * __thiscall cPd10::vf00(undefined4 *param_1,byte param_2)

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

