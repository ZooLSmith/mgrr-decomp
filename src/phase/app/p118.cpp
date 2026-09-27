// src/phase/app/p118.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47C80..00D6CD40, 7 functions

#include "types.h"

// 00D47C80  P118::vf18  size=39  [class]
void P118::vf18(void)

{
  int iVar1;
  
  iVar1 = FUN_009968d0(2);
  if (iVar1 == 0) {
    iVar1 = FUN_00c81da0(0x40);
    if (iVar1 != 0) {
      FUN_00996910(2);
    }
  }
  return;
}

// 00D47CB0  P118::vf08  size=51  [class]
void __fastcall P118::vf08(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_4;
  
  local_4 = param_1;
  iVar2 = TelegraphNetContents::TelegraphNetContents(1,&DAT_01b7bd48);
  pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 8);
  *(int *)(param_1 + 0x11c) = iVar2;
  local_4 = *(int *)(iVar2 + 8);
  (*pcVar1)(&local_4);
  return;
}

// 00D47CF0  P118::vf0C  size=1  [class]
void P118::vf0C(void)

{
  return;
}

// 00D51F80  P118::vf14  size=124  [class]
void __thiscall P118::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_4();
  }
  iVar2 = FUN_009968d0(2);
  if (iVar2 != 0) {
    FUN_00c81e40(0x40);
  }
  pcVar3 = "P118_TUTORIAL";
  do {
    bVar1 = *pcVar3;
    bVar4 = bVar1 < *param_3;
    if (bVar1 != *param_3) {
LAB_00d51fd2:
      iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_00d51fd7;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar3[1];
    bVar4 = bVar1 < param_3[1];
    if (bVar1 != param_3[1]) goto LAB_00d51fd2;
    pcVar3 = pcVar3 + 2;
    param_3 = param_3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d51fd7:
  if (iVar2 == 0) {
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
  }
  return;
}

// 00D52000  P118::vf1C  size=90  [class]
void P118::vf1C(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = "P118_TUTORIAL";
  do {
    bVar1 = *pcVar3;
    bVar4 = bVar1 < *param_2;
    if (bVar1 != *param_2) {
LAB_00d52030:
      iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_00d52035;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar3[1];
    bVar4 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) goto LAB_00d52030;
    pcVar3 = pcVar3 + 2;
    param_2 = param_2 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00d52035:
  if (iVar2 == 0) {
    DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
  }
  return;
}

// 00D60A10  P118::vf10  size=92  [class]
void __fastcall P118::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x11c) + 8);
    FUN_008dc7e0(iVar2);
    piVar3 = *(int **)(param_1 + 0x10);
    piVar1 = piVar3 + *(int *)(param_1 + 0x14);
    for (; (piVar3 != piVar1 && (*piVar3 != iVar2)); piVar3 = piVar3 + 1) {
    }
    if ((piVar3 != (int *)0x0) &&
       (piVar3 != (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4))) {
      FUN_00c3e0f0(piVar3);
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  return;
}

// 00D6CD40  P118::vf00  size=54  [class]
undefined4 * __thiscall P118::vf00(undefined4 *param_1,byte param_2)

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

