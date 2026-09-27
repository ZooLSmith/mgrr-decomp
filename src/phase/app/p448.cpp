// src/phase/app/p448.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D49220..00D6D0B0, 7 functions

#include "mgrr.h"
#include "P448.h"

// 00D49220  P448::vf14  size=145  [class]
void P448::vf14(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar5 = "P448_START";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d49250:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d49255;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d49250;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d49255:
  if (iVar3 != 0) {
    pbVar2 = &DAT_016bc740;
    do {
      bVar1 = *param_2;
      bVar6 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00d49280:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d49285;
      }
      if (bVar1 == 0) break;
      bVar1 = param_2[1];
      bVar6 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00d49280;
      param_2 = param_2 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d49285:
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar4 + 0x44))(1);
      return;
    }
  }
  piVar4 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar4 + 0x44))(0);
  return;
}

// 00D492C0  P448::vf1C  size=3  [class]
void P448::vf1C(void)

{
  return;
}

// 00D492D0  P448::vf18  size=1  [class]
void P448::vf18(void)

{
  return;
}

// 00D492E0  P448::vf08  size=23  [class]
void P448::vf08(void)

{
  FUN_00da0d70();
  FUN_00c81e90(0x38);
  return;
}

// 00D49300  P448::vf0C  size=1  [class]
void P448::vf0C(void)

{
  return;
}

// 00D49310  P448::vf10  size=29  [class]
void P448::vf10(void)

{
  int *piVar1;
  
  FUN_00c81e90(0x38);
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x44))(1);
  return;
}

// 00D6D0B0  P448::vf00  size=54  [class]
undefined4 * __thiscall P448::vf00(undefined4 *param_1,byte param_2)

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

