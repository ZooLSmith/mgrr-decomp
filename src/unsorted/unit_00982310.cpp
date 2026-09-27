// src/unsorted/unit_00982310.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00982310..009826D0, 9 functions

#include "types.h"

// 00982310  FUN_00982310  size=314  [run]
undefined4 FUN_00982310(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  undefined **ppuVar6;
  bool bVar7;
  char local_104 [260];
  
  piVar5 = &DAT_0188dbe0;
  ppuVar6 = &PTR_s_sound_stream_0188db80 + param_1 * 6;
  do {
    if (ppuVar6[1] != (undefined *)0xffffffff) {
      pbVar4 = &DAT_016416fa;
      pbVar2 = *ppuVar6;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00982367:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0098236c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00982367;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0098236c:
      if ((iVar3 != 0) && (*piVar5 != 0)) {
        FUN_00dd5650("Sound Mount File[%s]",*ppuVar6);
        if (param_2 == 0) {
          _sprintf_s(local_104,0x104,"%s.cpk",*ppuVar6);
          iVar3 = FUN_00deb9d0(local_104,0,0,ppuVar6[1]);
          if (iVar3 == 0) {
            FUN_00dd5650(&DAT_016526f4,local_104);
            return 0;
          }
        }
        else {
          _sprintf_s(local_104,0x104,"%s%s.cpk",param_2,*ppuVar6);
          iVar3 = FUN_00deba40(local_104,ppuVar6[1]);
          if (iVar3 == 0) {
            FUN_00dd5650(&DAT_016526f4,local_104);
            return 0;
          }
        }
      }
    }
    piVar5 = piVar5 + 1;
    ppuVar6 = ppuVar6 + 2;
    if (0x188dbeb < (int)piVar5) {
      return 1;
    }
  } while( true );
}

// 00982480  FUN_00982480  size=300  [run]
undefined4 FUN_00982480(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  undefined *puVar9;
  char local_104 [260];
  
  iVar1 = FUN_00de88c0();
  ppuVar5 = &PTR_s_data000_0188db38;
  do {
    puVar9 = ppuVar5[1];
    uVar4 = 0;
    uVar3 = 1;
    bVar7 = true;
    if ((((puVar9 == (undefined *)0x5) || (puVar9 == (undefined *)0x6)) ||
        (puVar9 == (undefined *)0x7)) || (puVar9 == (undefined *)0x8)) {
      iVar6 = 0;
      bVar7 = ppuVar5[2] == (undefined *)0x0;
      FUN_00dd5650("Cpk Mount File[PATCH][%s]",*ppuVar5);
      uVar4 = uVar3;
      if (bVar7) goto LAB_009824e2;
      puVar9 = *ppuVar5;
      pcVar8 = "%s.edat";
    }
    else {
      iVar6 = iVar1;
      if (iVar1 == 0) {
        FUN_00dd5650("Cpk Mount File[ROM][%s]",*ppuVar5);
      }
      else {
        FUN_00dd5650("Cpk Mount File[HDD][%s]",*ppuVar5);
      }
LAB_009824e2:
      puVar9 = *ppuVar5;
      pcVar8 = "%s.cpk";
      uVar3 = uVar4;
    }
    _sprintf_s(local_104,0x104,pcVar8,puVar9);
    iVar2 = FUN_00deb9d0(local_104,iVar6,uVar3,ppuVar5[1]);
    if (iVar2 == 0) {
      uVar3 = FUN_00de88b0(iVar6,uVar3);
      if (bVar7) {
        pcVar8 = "%s%s.cpk";
      }
      else {
        pcVar8 = "%s%s.edat";
      }
      _sprintf_s(local_104,0x104,pcVar8,uVar3,*ppuVar5);
      FUN_00dd5650(&DAT_016526f4,local_104);
    }
    ppuVar5 = ppuVar5 + 3;
    if (0x188db7f < (int)ppuVar5) {
      return 1;
    }
  } while( true );
}

// 009825B0  FUN_009825b0  size=62  [run]
void FUN_009825b0(void)

{
  int iVar1;
  
  thunk_FUN_00de8c00();
  if (DAT_01b37914 == 0) {
    FUN_00dd5650("Unused Cpk Mode!!");
    FUN_00982310(0,0);
  }
  else {
    iVar1 = FUN_00982480();
    if (iVar1 != 0) {
      FUN_00982310(0,0);
      return;
    }
  }
  return;
}

// 009825F0  FUN_009825f0  size=154  [run]
undefined4 FUN_009825f0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_00de8800(10);
  FUN_00de8810(0x80);
  FUN_00de8820(0x2800);
  FUN_00de8850(0x80);
  iVar1 = FUN_00e9fd40(param_1,1,&DAT_01b7bcf0);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_01b37914 = param_2;
  DAT_01b37918 = 0;
  thunk_FUN_00de8c00();
  if (DAT_01b37914 == 0) {
    FUN_00dd5650("Unused Cpk Mode!!");
    FUN_00982310(0,0);
  }
  else {
    iVar1 = FUN_00982480();
    if (iVar1 != 0) {
      FUN_00982310(0,0);
      return 1;
    }
  }
  return 1;
}

// 00982690  thunk_FUN_00deb8b0  size=5  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00deb8b0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_01dd45c0 + 0xc))();
  if (iVar1 != 0) {
    FUN_00dec940();
    (**(code **)(DAT_01dd45c0 + 8))();
  }
  if (DAT_01dd414c != 0) {
    FUN_00dd48d0(DAT_01dd414c,0);
    DAT_01dd414c = 0;
    DAT_01dd4150 = 0;
  }
  FUN_00de8c00();
  if (DAT_018cde28 != 0) {
    FUN_01297c59(DAT_018cde28);
    DAT_018cde28 = 0;
  }
  DAT_018cde24 = 0;
  _DAT_018cde34 = 0xffffffff;
  FUN_0129a851();
  if (DAT_01dd0884 != 0) {
    FUN_01293bfa(DAT_01dd0884);
  }
  DAT_01dd0884 = 0;
  if (DAT_01dd4114 != 0) {
    FUN_00dd48d0(DAT_01dd4114,0);
  }
  DAT_01dd4114 = 0;
  FUN_01293a6b();
  FUN_00de9120();
  return;
}

// 009826A0  thunk_FUN_00debcd0  size=5  [run]
void thunk_FUN_00debcd0(void)

{
  FUN_00debb00();
  if (DAT_01dd4110 != 0) {
    FUN_0129990c();
  }
  FUN_01299f20();
  return;
}

// 009826B0  thunk_FUN_00e9fd80  size=5  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00e9fd80(void)

{
  _DAT_01dda948 = _DAT_01dda948 | 1;
  return;
}

// 009826C0  thunk_FUN_00e9fd90  size=5  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00e9fd90(void)

{
  _DAT_01dda948 = _DAT_01dda948 & 0xfffffffe;
  return;
}

// 009826D0  FUN_009826d0  size=6  [run]
undefined4 FUN_009826d0(void)

{
  return DAT_01b37918;
}

