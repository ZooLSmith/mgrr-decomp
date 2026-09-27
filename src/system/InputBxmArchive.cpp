// src/system/InputBxmArchive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E91320..00E98A40, 18 functions

#include "types.h"

// 00E91320  sys::InputBxmArchive::vf74  size=10  [class]
void __fastcall sys::InputBxmArchive::vf74(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e91328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x74))();
  return;
}

// 00E91830  sys::InputBxmArchive::vf10  size=373  [class]
void __fastcall sys::InputBxmArchive::vf10(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  byte *unaff_retaddr;
  undefined1 auStack_40c [4];
  byte abStack_408 [1024];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_40c;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x60) + -4 + *(int *)(param_1 + 100) * 4);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x3c) + 0x10))(uVar2);
  iVar11 = 0;
  if (*(int *)(param_1 + 0x70) != -1) {
    if (0 < iVar4) {
      do {
        iVar5 = (**(code **)(*(int *)(param_1 + 0x3c) + 0x14))(uVar2,iVar11);
        iVar11 = iVar11 + 1;
        if (*(int *)(param_1 + 0x70) == iVar5) break;
      } while (iVar11 < iVar4);
    }
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  do {
    if (iVar4 <= iVar11) goto LAB_00e91902;
    uVar6 = (**(code **)(*(int *)(param_1 + 0x3c) + 0x14))(uVar2,iVar11);
    (**(code **)(*(int *)(param_1 + 0x3c) + 0x24))(uVar6,&stack0xfffffbf0,0x400);
    pbVar9 = abStack_408;
    pbVar7 = unaff_retaddr;
    do {
      bVar1 = *pbVar7;
      bVar12 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_00e918f0:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00e918f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar12 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_00e918f0;
      pbVar7 = pbVar7 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00e918f5:
    if (iVar5 == 0) {
      (**(code **)(*(int *)(param_1 + 0x5c) + 8))(auStack_40c);
      (**(code **)(*(int *)(param_1 + 0x3c) + 0x74))(iVar4,auStack_40c,0x400);
      pbVar9 = abStack_408;
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar1 != 0);
      FUN_00e97ef0(abStack_408,(int)pbVar9 - (int)(abStack_408 + 1));
      if (*(uint *)(param_1 + 0x34) < 0x10) {
        pcVar10 = (char *)(param_1 + 0x20);
        pcVar3 = pcVar10;
      }
      else {
        pcVar10 = *(char **)(param_1 + 0x20);
        pcVar3 = pcVar10;
      }
      do {
        pcVar8 = pcVar3;
        pcVar3 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(char **)(param_1 + 0x14) = pcVar8;
      *(char **)(param_1 + 0x10) = pcVar10;
      *(char **)(param_1 + 0x18) = pcVar10;
      *(undefined1 *)(param_1 + 0x1c) = 0;
LAB_00e91902:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffbf0);
      return;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}

// 00E919B0  sys::InputBxmArchive::vf14  size=243  [class]
void __fastcall sys::InputBxmArchive::vf14(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_410 [4];
  undefined1 local_404 [1012];
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  if ((*(int *)(param_1 + 0x60) != 0) && (*(int *)(param_1 + 100) != 0)) {
    *(undefined4 *)(param_1 + 0x70) =
         *(undefined4 *)(*(int *)(param_1 + 0x60) + -4 + *(int *)(param_1 + 100) * 4);
    if ((*(int *)(param_1 + 0x60) != 0) && (*(int *)(param_1 + 100) != 0)) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    }
    acStack_410[0] = '\0';
    acStack_410[1] = '\x04';
    acStack_410[2] = '\0';
    acStack_410[3] = '\0';
    (**(code **)(*(int *)(param_1 + 0x3c) + 0x74))
              (*(undefined4 *)(*(int *)(param_1 + 0x60) + -4 + *(int *)(param_1 + 100) * 4),
               local_404);
    pcVar3 = acStack_410;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00e97ef0(acStack_410,(int)pcVar3 - (int)(acStack_410 + 1));
    if (*(uint *)(param_1 + 0x34) < 0x10) {
      pcVar3 = (char *)(param_1 + 0x20);
      pcVar2 = pcVar3;
    }
    else {
      pcVar3 = *(char **)(param_1 + 0x20);
      pcVar2 = pcVar3;
    }
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(char **)(param_1 + 0x14) = pcVar4;
    *(char **)(param_1 + 0x10) = pcVar3;
    *(char **)(param_1 + 0x18) = pcVar3;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    __security_check_cookie(uStack_10 ^ (uint)acStack_410);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E97CB0  sys::InputBxmArchive::vf04  size=3  [class]
undefined1 sys::InputBxmArchive::vf04(void)

{
  return 0;
}

// 00E97CC0  sys::InputBxmArchive::vf0C  size=3  [class]
undefined1 sys::InputBxmArchive::vf0C(void)

{
  return 0;
}

// 00E97D60  sys::InputBxmArchive::vf40  size=10  [class]
void __fastcall sys::InputBxmArchive::vf40(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x40))();
  return;
}

// 00E97D70  sys::InputBxmArchive::vf34  size=10  [class]
void __fastcall sys::InputBxmArchive::vf34(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x34))();
  return;
}

// 00E97D80  sys::InputBxmArchive::vf30  size=10  [class]
void __fastcall sys::InputBxmArchive::vf30(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x30))();
  return;
}

// 00E97D90  sys::InputBxmArchive::vf2C  size=10  [class]
void __fastcall sys::InputBxmArchive::vf2C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  return;
}

// 00E97DA0  sys::InputBxmArchive::vf28  size=10  [class]
void __fastcall sys::InputBxmArchive::vf28(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x28))();
  return;
}

// 00E97DB0  sys::InputBxmArchive::vf24  size=10  [class]
void __fastcall sys::InputBxmArchive::vf24(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x24))();
  return;
}

// 00E97DC0  sys::InputBxmArchive::vf20  size=10  [class]
void __fastcall sys::InputBxmArchive::vf20(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x20))();
  return;
}

// 00E97DD0  sys::InputBxmArchive::vf1C  size=10  [class]
void __fastcall sys::InputBxmArchive::vf1C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x1c))();
  return;
}

// 00E97DE0  sys::InputBxmArchive::vf18  size=10  [class]
void __fastcall sys::InputBxmArchive::vf18(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e97de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x18))();
  return;
}

// 00E97E50  sys::InputBxmArchive::vf3C  size=41  [class]
undefined4 __fastcall sys::InputBxmArchive::vf3C(int param_1)

{
  char cVar1;
  undefined1 *unaff_retaddr;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (cVar1 != '\0') {
    *unaff_retaddr = 0xfc;
    return 1;
  }
  return 0;
}

// 00E97E80  sys::InputBxmArchive::vf38  size=41  [class]
undefined4 __fastcall sys::InputBxmArchive::vf38(int param_1)

{
  char cVar1;
  undefined1 *unaff_retaddr;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (cVar1 != '\0') {
    *unaff_retaddr = 0xfc;
    return 1;
  }
  return 0;
}

// 00E97EF0  FUN_00e97ef0  size=240  [callgraph]
int * __thiscall FUN_00e97ef0(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    uVar1 = param_1[5];
    piVar2 = param_1;
    if (0xf < uVar1) {
      piVar2 = (int *)*param_1;
    }
    if (piVar2 <= param_2) {
      piVar2 = param_1;
      if (0xf < uVar1) {
        piVar2 = (int *)*param_1;
      }
      if (param_2 < (int *)(param_1[4] + (int)piVar2)) {
        if (0xf < uVar1) {
          piVar2 = (int *)FUN_00c55960(param_1,(int)param_2 - *param_1,param_3);
          return piVar2;
        }
        piVar2 = (int *)FUN_00c55960(param_1,(int)param_2 - (int)param_1,param_3);
        return piVar2;
      }
    }
  }
  if (param_3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if ((uint)param_1[5] < param_3) {
    FUN_00c3ef00(param_3,param_1[4]);
    if (param_3 == 0) {
      return param_1;
    }
  }
  else if (param_3 == 0) {
    param_1[4] = 0;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  piVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    piVar2 = (int *)*param_1;
  }
  FID_conflict__memcpy(piVar2,param_2,param_3);
  param_1[4] = param_3;
  if ((uint)param_1[5] < 0x10) {
    *(undefined1 *)((int)param_1 + param_3) = 0;
    return param_1;
  }
  *(undefined1 *)(*param_1 + param_3) = 0;
  return param_1;
}

// 00E98A40  sys::InputBxmArchive::vf78  size=30  [class]
undefined4 __thiscall sys::InputBxmArchive::vf78(undefined4 param_1,byte param_2)

{
  cXml::cXml_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

