// src/unsorted/unit_0053CD30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0053CD30..0053D260, 2 functions

#include "types.h"

// 0053CD30  FUN_0053cd30  size=1321  [run]
undefined4 __thiscall FUN_0053cd30(int *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_5c;
  undefined1 auStack_50 [76];
  
  uVar8 = param_1[0x186];
  local_5c = 0;
  iVar7 = *param_2;
  if (iVar7 == 0x2f) {
    param_1[0x4d4] = param_1[0x4d4] + 1;
  }
  iVar5 = FUN_00a81330();
  if (iVar5 != 0) {
    local_5c = FUN_00a7c8a0();
  }
  iVar5 = param_2[1];
  if ((param_2[0x23] & 0x200U) != 0) {
    iVar5 = FUN_00fdbc60();
  }
  if ((uVar8 & 0xffff0000) == 0x60000) {
    param_1[0x50e] = param_1[0x50e] + iVar5;
    param_1[0x50d] = param_1[0x50d] + 1;
    if (param_1[0x51b] <= param_1[0x50d]) {
      param_1[0x50f] = 1;
    }
    if (param_1[0x51c] <= param_1[0x50e]) {
      param_1[0x50f] = 1;
    }
    bVar3 = 0 < iVar5;
    iVar5 = FUN_00fdbc60();
    if ((iVar5 < 1) && (bVar3)) {
      iVar5 = 1;
    }
  }
  else {
    param_1[0x50d] = 0;
    param_1[0x50e] = 0;
    param_1[0x50f] = 0;
  }
  iVar6 = iVar5;
  if (((param_1[0x505] != 0) && (iVar6 = FUN_00fdbc60(), iVar6 < 1)) && (0 < iVar5)) {
    iVar6 = 1;
  }
  if ((local_5c != 0) && ((*(byte *)(local_5c + 0x4c0) & 0x10) != 0)) {
    uVar8 = (uint)*(byte *)(param_2 + 4);
    iVar5 = FUN_00a8c760(0x10);
    if (iVar5 != 0) {
      uVar8 = (int)uVar8 >> 1;
    }
    (**(code **)(*param_1 + 0x21c))(local_5c,uVar8,0x3c23d70a,0);
    if ((param_1[0x186] == 0x60006) || (param_1[0x186] == 0x60008)) {
      uVar15 = 0x3f800000;
      uVar14 = 0xbf800000;
      uVar13 = 0x8000010;
      uVar12 = 0x3f4ccccd;
      uVar11 = 0;
      uVar10 = 1;
      sVar4 = FUN_00dde2d0(0,2);
      FUN_00aa4080(sVar4 + 0xa1,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
      uVar15 = 0x3f800000;
      uVar14 = 0xbf800000;
      uVar13 = 0x8000010;
      uVar12 = 0x3e4ccccd;
      uVar11 = 0;
      uVar10 = 2;
      sVar4 = FUN_00dde2d0(0,6);
      iVar5 = sVar4 + 0x96;
    }
    else {
      uVar15 = 0x3f800000;
      uVar14 = 0xbf800000;
      uVar13 = 0x8000010;
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 1;
      sVar4 = FUN_00dde2d0(0,2);
      iVar5 = sVar4 + 0xa1;
    }
    FUN_00aa4080(iVar5,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
    if (iVar7 != 0x2f) {
      uVar8 = (uint)*(byte *)((int)param_2 + 0x11);
      iVar7 = *param_2;
      if (iVar7 == 0x42) {
        uVar8 = 0;
      }
      if (iVar7 == 0x61) {
        uVar8 = (int)uVar8 >> 1;
      }
      if (iVar7 == 0x62) {
        uVar8 = (int)uVar8 >> 1;
      }
      if (iVar7 == 99) {
        uVar8 = (int)uVar8 >> 2;
      }
      if (iVar7 == 100) {
        uVar8 = (int)uVar8 >> 2;
      }
      if (iVar7 == 0x6d) {
        uVar8 = (int)uVar8 >> 1;
      }
      if (iVar7 == 0x6f) {
        uVar8 = (int)uVar8 >> 1;
      }
      if (iVar7 == 0x70) {
        uVar8 = (int)uVar8 >> 1;
      }
      if (iVar7 == 0x2f) {
        uVar8 = 0;
      }
      if (param_1[0x50a] != 0) {
        uVar8 = 0;
      }
      param_1[0x57a] = param_1[0x57a] + uVar8;
    }
    param_1[0x57b] = param_1[0x519];
  }
  if (param_1[0x504] == 0) {
    (**(code **)(*param_1 + 0x30c))(iVar6,0);
  }
  piVar1 = param_1 + 0x436;
  *piVar1 = *piVar1 + iVar6;
  if (*piVar1 < 0) {
    param_1[0x436] = 0;
  }
  if (9999 < param_1[0x436]) {
    param_1[0x436] = 10000;
  }
  FID_conflict__memcpy(auStack_50,param_2 + 0x28,0x40);
  iVar7 = FUN_00c5fb10(param_1[0x13c],auStack_50,param_1[0x4cf],0,0);
  if (iVar7 != 0) {
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x4d3] = 1;
    (*pcVar2)(7,0);
  }
  iVar7 = FUN_00521da0();
  if (iVar7 != 0) {
    (**(code **)(*param_1 + 0x198))(local_5c,param_2,1);
    return 1;
  }
  if (param_1[0x21c] < 1) {
    if (param_1[0x128] == 2) {
      pcVar2 = *(code **)(*param_1 + 0x344);
      param_1[0x139] = 1;
      (*pcVar2)(0xb,0,1);
      FUN_00c57120(param_1[0x13c]);
      param_1[0x1af] = 1;
      FUN_0051d620(0x80000,0,0,0,0);
      return 1;
    }
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if ((param_1[0x504] == 0) && (param_1[0x505] == 0)) {
    if ((param_1[0x518] <= param_1[0x57a]) && (iVar7 = FUN_00a8c760(0x10), iVar7 == 0)) {
      FUN_0051d620(0x60000,0,0,0,0);
    }
    if ((1 < param_1[0x576]) && (iVar7 = FUN_00a8c760(0x10), iVar7 == 0)) {
      FUN_0051d620(0x60001,0,0,0,0);
    }
    if (1 < param_1[0x578]) {
      fVar9 = (float10)FUN_00ddba30((float)param_2[0xc] + 3.1415927);
      param_1[0x25] = (int)(float)fVar9;
      FUN_0051d620(0x60002,0,0,0,0);
    }
    FUN_0053ab30(0);
    iVar7 = FUN_0051a300();
    if (iVar7 != 0) {
      param_1[0x505] = 1;
      fVar9 = (float10)FUN_00ddba30((float)param_2[0xc] + 3.1415927);
      param_1[0x25] = (int)(float)fVar9;
      FUN_0051d620(0x60002,0,0,0,0);
    }
  }
  (**(code **)(*param_1 + 0x198))(local_5c,param_2,1);
  return uVar10;
}

// 0053D260  FUN_0053d260  size=756  [run]
bool __thiscall FUN_0053d260(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_50 [76];
  
  iVar1 = param_1[0x186];
  iVar5 = 0;
  if (*param_2 == 0x2f) {
    param_1[0x4d4] = param_1[0x4d4] + 1;
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  param_1[0x50d] = 0;
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x4c0) & 0x10) != 0)) {
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000010;
    uVar9 = 0x3f800000;
    uVar8 = 0;
    uVar7 = 1;
    sVar3 = FUN_00dde2d0(0,6);
    FUN_00aa4080(sVar3 + 0x96,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    iVar4 = 1;
    if ((param_1[0x504] == 0) &&
       (((*param_2 != 0x2f && (*param_2 != 0x42)) && (param_1[0x50a] == 0)))) {
      if (param_1[0x58d] != 0) {
        FUN_0051a1b0(param_1[0x512]);
        iVar4 = extraout_EDX;
      }
      param_1[0x57c] = param_1[0x57c] + iVar4;
      if ((param_1[0x58d] == 0) && (0x13 < param_1[0x57c])) {
        param_1[0x58d] = iVar4;
      }
    }
  }
  FID_conflict__memcpy(local_50,param_2 + 0x28,0x40);
  iVar4 = FUN_00c5fb10(param_1[0x13c],local_50,param_1[0x4cf],0,0);
  if (iVar4 != 0) {
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x4d3] = 1;
    (*pcVar2)(7,0);
    iVar4 = FUN_00ac8120();
    if (iVar4 != 0) {
      iVar4 = FUN_00ac8120();
      *(undefined4 *)(iVar4 + 0x3bcc) = 1;
    }
  }
  iVar4 = FUN_00521da0();
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x198))(iVar5,param_2,0x8001);
    return true;
  }
  iVar5 = param_1[0x21c];
  if (0 >= iVar5) {
    pcVar2 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar2)(0xb,0,1);
  }
  if (*param_2 == 0x4f) {
    FUN_0051d620(0x60003,0,0,0,0);
  }
  if ((param_1[0x504] == 0) && (param_1[0x505] == 0)) {
    if ((iVar1 != 0x60003) && ((param_2[0x23] & 0x20000U) != 0)) {
      FUN_0051d620(0x60003,0,0,0,0);
    }
    if (*param_2 == 0x4f) {
      FUN_0051d620(0x60003,0,0,0,0);
    }
    FUN_0053ab30(0);
    if (((param_1[0x506] != 0) && (param_1[0x438] != 0)) &&
       (((char)param_1[0x435] == '\x02' || ((char)param_1[0x435] == '\x03')))) {
      fVar6 = (float10)FUN_00ddba30((float)param_2[0xc] + 3.1415927);
      param_1[0x25] = (int)(float)fVar6;
      param_1[0x434] = -0x40800000;
      *(undefined1 *)(param_1 + 0x435) = 4;
      param_1[0x403] = 0;
      FUN_0051d620(0x60002,0,0,0,0);
      FUN_00519510();
      FUN_00533f90(0,0,0);
      FUN_0053aa20();
      pcVar2 = *(code **)(*param_1 + 0x358);
      param_1[0x58c] = 0;
      (*pcVar2)(7,0);
    }
  }
  return 0 < iVar5;
}

