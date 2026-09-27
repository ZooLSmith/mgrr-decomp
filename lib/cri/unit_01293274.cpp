// lib/cri/unit_01293274.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01293274..012981BA, 182 functions

#include "types.h"

// 01293274  FUN_01293274  size=100  [run]
int __fastcall FUN_01293274(int param_1)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  char *pcVar4;
  
  iVar2 = 0;
  if (param_1 == 1) {
    iVar3 = *(int *)(in_EAX + 0x10);
    do {
      if (*(char *)(iVar3 + 0xc) == '\0') {
        if ((*(int *)(iVar3 + 8) == unaff_EDI) &&
           (sVar1 = FUN_01293105(), *(short *)(iVar3 + 0xe) == sVar1)) {
          return iVar3;
        }
        if (*(char *)(iVar3 + 0xd) == '\0') {
          return iVar3;
        }
      }
      iVar3 = *(int *)(iVar3 + 4);
      iVar2 = 0;
    } while (iVar3 != 0);
  }
  else if (param_1 == 2) {
    iVar2 = FUN_01293212();
  }
  else {
    if (param_1 == 3) {
      pcVar4 = "E2009030950:Dynamic memory allocation is not supported yet.";
    }
    else {
      pcVar4 = "E2009030951:Specified memory allocation method is invalid.";
    }
    FUN_01293f1f(0,pcVar4);
  }
  return iVar2;
}

// 01293342  FUN_01293342  size=251  [run]
void FUN_01293342(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_ESI;
  int *_Dst;
  
  uVar2 = *(ushort *)(unaff_ESI + 0xe);
  iVar4 = *(int *)(unaff_ESI + 8);
  uVar3 = *(ushort *)(unaff_ESI + 0x10);
  uVar5 = FUN_01293105();
  uVar7 = (uint)uVar5;
  iVar1 = uVar7 + 0x1a + param_2;
  iVar8 = FUN_01293105();
  if (iVar8 + 0x1a + iVar1 <=
      (int)((uint)*(ushort *)(unaff_ESI + 0xe) + *(int *)(unaff_ESI + 8) + 0x1a + (uint)uVar3)) {
    _Dst = (int *)(iVar1 + unaff_ESI + 7U & 0xfffffff8);
    uVar9 = (int)_Dst - (iVar1 + unaff_ESI);
    _memset(_Dst,0,0x16);
    uVar6 = FUN_01293105();
    *(ushort *)((int)_Dst + 0xe) = uVar6;
    *_Dst = unaff_ESI;
    _Dst[2] = ((((uint)uVar2 + iVar4 + (uint)uVar3) - (uint)uVar6) - (uVar9 & 0xffff)) - iVar1;
    _Dst[1] = *(int *)(unaff_ESI + 4);
    *(ushort *)(unaff_ESI + 0xe) = uVar5;
    *(int *)(unaff_ESI + 8) = param_2;
    *(short *)(unaff_ESI + 0x10) = (short)uVar9;
    *(undefined4 *)(unaff_ESI + 0x12) = param_3;
    *(int **)(unaff_ESI + 4) = _Dst;
    *(undefined1 *)(unaff_ESI + 0xd) = 1;
    *(undefined1 *)(unaff_ESI + 0xc) = 1;
    *(uint *)((uVar7 + 0x1d + unaff_ESI & 0xfffffff8) - 4) = uVar7 + 0x1a;
    if ((undefined4 *)_Dst[1] == (undefined4 *)0x0) {
      *(int **)(param_1 + 0x14) = _Dst;
    }
    else {
      *(undefined4 *)_Dst[1] = _Dst;
    }
  }
  return;
}

// 0129343D  FUN_0129343d  size=287  [run]
void FUN_0129343d(int param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBX;
  int *piVar9;
  int unaff_EDI;
  bool bVar10;
  
  iVar5 = *(int *)(unaff_EDI + 4);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 4) + param_1;
  }
  uVar7 = 8;
  if (8 < (int)param_3) {
    uVar7 = param_3;
  }
  uVar6 = uVar7 & 0x80000007;
  bVar10 = uVar6 == 0;
  if ((int)uVar6 < 0) {
    bVar10 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
  }
  if (!bVar10) {
    iVar8 = uVar7 * 8 + -0x40;
    uVar7 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
  }
  iVar8 = ((uint)(iVar5 - unaff_EBX) / uVar7) * uVar7;
  sVar2 = (short)iVar8;
  sVar1 = (short)(iVar5 - unaff_EBX) - sVar2;
  piVar9 = (int *)(iVar8 - 0x1aU & 0xfffffff8);
  if (piVar9 < (int *)(*(ushort *)(unaff_EDI + 0xe) + 0x1a + unaff_EDI)) {
    if (*(char *)(unaff_EDI + 0xd) != '\0') {
      uVar3 = (sVar2 - (short)unaff_EDI) - 0x1a;
      *(ushort *)(unaff_EDI + 0xe) = uVar3;
      *(short *)(unaff_EDI + 0x10) = sVar1;
      *(undefined4 *)(unaff_EDI + 0x12) = param_2;
      *(int *)(unaff_EDI + 8) = unaff_EBX;
      *(undefined1 *)(unaff_EDI + 0xd) = 2;
      *(undefined1 *)(unaff_EDI + 0xc) = 1;
      *(uint *)((uVar3 + 0x1d + unaff_EDI & 0xfffffff8) - 4) = uVar3 + 0x1a;
    }
  }
  else {
    uVar3 = (sVar2 - (short)piVar9) - 0x1a;
    *(ushort *)((int)piVar9 + 0xe) = uVar3;
    piVar9[2] = unaff_EBX;
    *(undefined1 *)((int)piVar9 + 0xd) = 2;
    iVar5 = *(int *)(unaff_EDI + 4);
    *(short *)(piVar9 + 4) = sVar1;
    *(undefined4 *)((int)piVar9 + 0x12) = param_2;
    piVar9[1] = iVar5;
    *piVar9 = unaff_EDI;
    *(undefined1 *)(piVar9 + 3) = 1;
    *(uint *)((uVar3 + 0x1d + (int)piVar9 & 0xfffffff8) - 4) = uVar3 + 0x1a;
    uVar4 = FUN_01293105();
    *(undefined2 *)(unaff_EDI + 0xe) = uVar4;
    if (*(uint **)(unaff_EDI + 4) != (uint *)0x0) {
      **(uint **)(unaff_EDI + 4) = (uint)piVar9;
    }
    *(int **)(unaff_EDI + 4) = piVar9;
    *(uint *)(unaff_EDI + 8) =
         (int)piVar9 + (-unaff_EDI - (uint)(ushort)(*(short *)(unaff_EDI + 0xe) + 0x1a));
    *(undefined2 *)(unaff_EDI + 0x10) = 0;
    if (piVar9[1] == 0) {
      *(int **)(param_1 + 0x14) = piVar9;
    }
  }
  return;
}

// 0129355C  FUN_0129355c  size=205  [run]
int FUN_0129355c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  
  if (in_EAX < 0) {
    return 0;
  }
  iVar3 = FUN_01293274(param_4);
  if (iVar3 == 0) {
    return 0;
  }
  if (in_EAX == *(int *)(iVar3 + 8)) {
    uVar2 = FUN_01293105();
    uVar1 = *(ushort *)(iVar3 + 0xe);
    if (uVar2 == uVar1) {
      if (*(char *)(iVar3 + 0xd) == '\0') {
        return 0;
      }
      *(undefined4 *)(iVar3 + 0x12) = param_3;
      *(undefined1 *)(iVar3 + 0xd) = (undefined1)param_2;
      *(undefined1 *)(iVar3 + 0xc) = 1;
      *(uint *)((uVar1 + 0x1d + iVar3 & 0xfffffff8) - 4) = uVar1 + 0x1a;
      goto LAB_012935f7;
    }
  }
  if (param_2 == 1) {
    iVar3 = FUN_01293342(param_1);
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar3 = FUN_0129343d(param_1,param_3,param_4);
  }
LAB_012935f7:
  if (iVar3 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0xc) =
       *(int *)(param_1 + 0xc) +
       (uint)*(ushort *)(iVar3 + 0x10) + *(int *)(iVar3 + 8) + 0x1a + (uint)*(ushort *)(iVar3 + 0xe)
  ;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc);
  }
  return *(ushort *)(iVar3 + 0xe) + 0x1a + iVar3;
}

// 01293629  FUN_01293629  size=27  [run]
void FUN_01293629(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0129355c(param_1,1,param_3,param_4);
  return;
}

// 01293644  FUN_01293644  size=27  [run]
void FUN_01293644(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0129355c(param_1,2,param_3,param_4);
  return;
}

// 0129365F  FUN_0129365f  size=27  [run]
void FUN_0129365f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0129355c(param_1,3,param_3,param_4);
  return;
}

// 0129368D  FUN_0129368d  size=223  [run]
void __fastcall FUN_0129368d(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  if ((char)param_2[3] == '\x01') {
    *(int *)(param_3 + 0xc) =
         *(int *)(param_3 + 0xc) +
         (((-0x1a - (uint)*(ushort *)(param_2 + 4)) - (uint)*(ushort *)((int)param_2 + 0xe)) -
         param_2[2]);
  }
  piVar1 = (int *)param_2[1];
  piVar2 = (int *)*param_2;
  local_8 = 0;
  if (piVar1 != (int *)0x0) {
    local_8 = piVar1[1];
  }
  *(undefined1 *)(param_2 + 3) = 0;
  piVar3 = param_2;
  if ((piVar2 != (int *)0x0) && (*(char *)(piVar2 + 3) == '\0')) {
    piVar2[1] = (int)piVar1;
    piVar2[2] = piVar2[2] +
                (uint)*(ushort *)(param_2 + 4) + (uint)*(ushort *)((int)param_2 + 0xe) + 0x1a +
                param_2[2];
    if (piVar1 != (int *)0x0) {
      *piVar1 = (int)piVar2;
    }
    piVar3 = piVar2;
    if (piVar2[1] == 0) {
      *(int **)(param_3 + 0x14) = piVar2;
    }
  }
  if ((piVar1 != (int *)0x0) && ((char)piVar1[3] == '\0')) {
    piVar3[1] = piVar1[1];
    piVar3[2] = piVar3[2] +
                (uint)*(ushort *)(piVar1 + 4) + (uint)*(ushort *)((int)piVar1 + 0xe) + 0x1a +
                piVar1[2];
    if ((undefined4 *)piVar1[1] != (undefined4 *)0x0) {
      *(undefined4 *)piVar1[1] = piVar3;
    }
    if (piVar3 == param_2) {
      if (local_8 == 0) {
        *(int **)(param_3 + 0x14) = param_2;
      }
    }
    else if (local_8 == 0) {
      *(int **)(param_3 + 0x14) = piVar3;
    }
    if (*(char *)((int)piVar1 + 0xd) == '\0') {
      *(undefined1 *)((int)piVar3 + 0xd) = 0;
    }
    if (*(int *)((int)piVar1 + 0x12) == 0) {
      *(undefined4 *)((int)piVar3 + 0x12) = 0;
    }
    *(uint *)((*(ushort *)((int)piVar3 + 0xe) + 0x1d + (int)piVar3 & 0xfffffff8) - 4) =
         *(ushort *)((int)piVar3 + 0xe) + 0x1a;
  }
  return;
}

// 0129376C  FUN_0129376c  size=207  [run]
int __fastcall FUN_0129376c(undefined4 param_1,int *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  short sVar8;
  int iVar9;
  
  iVar9 = param_2[2];
  if (*(char *)((int)param_2 + 0xd) == '\x02') {
    FUN_0129368d(param_3);
  }
  else if (*(char *)((int)param_2 + 0xd) == '\x01') {
    *(int *)(param_3 + 0xc) =
         *(int *)(param_3 + 0xc) +
         (((-0x1a - (uint)*(ushort *)(param_2 + 4)) - (uint)*(ushort *)((int)param_2 + 0xe)) - iVar9
         );
    iVar3 = param_2[1];
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0xd) != '\0')) {
      *(undefined1 *)(param_2 + 3) = 0;
      if (iVar3 == 0) {
        *(undefined1 *)((int)param_2 + 0xd) = 0;
        *(undefined4 *)((int)param_2 + 0x12) = 0;
      }
    }
    else {
      uVar1 = *(ushort *)(iVar3 + 0x10);
      uVar2 = *(ushort *)(iVar3 + 0xe);
      iVar4 = *(int *)(iVar3 + 8);
      iVar5 = *param_2;
      while ((iVar5 != 0 && (piVar6 = (int *)*param_2, (char)piVar6[3] != '\x01'))) {
        iVar5 = *piVar6;
        param_2 = piVar6;
      }
      *(undefined1 *)(param_2 + 3) = 0;
      *(undefined1 *)((int)param_2 + 0xd) = 0;
      sVar8 = FUN_01293105();
      *(short *)((int)param_2 + 0xe) = sVar8;
      *(undefined4 *)((int)param_2 + 0x12) = 0;
      param_2[2] = (((uint)uVar1 + (uint)uVar2 + iVar4 + 0x1a + iVar3) -
                   (uint)(ushort)(sVar8 + 0x1a)) - (int)param_2;
      *(undefined2 *)(param_2 + 4) = 0;
      puVar7 = *(undefined4 **)(iVar3 + 4);
      param_2[1] = (int)puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        *(int **)(param_3 + 0x14) = param_2;
      }
      else {
        *puVar7 = param_2;
      }
    }
  }
  else {
    iVar9 = -1;
  }
  return iVar9;
}

// 0129383B  FUN_0129383b  size=62  [run]
undefined4 FUN_0129383b(uint param_1,uint param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    pcVar2 = "E08062600H:Pointer was NULL.";
  }
  else {
    if ((param_1 <= param_2) && (param_2 <= *(int *)(param_1 + 4) + param_1)) {
      uVar1 = FUN_0129376c(param_1);
      return uVar1;
    }
    pcVar2 = "E08021402H:Bad pointer was appointed.";
  }
  FUN_01293f1f(0,pcVar2);
  return 0;
}

// 01293879  FUN_01293879  size=36  [run]
undefined4 FUN_01293879(void)

{
  if (DAT_020ade08 == 0) {
    FUN_01293f1f(0,"E08052300H:CRI Heap is not initialized.");
    return 0xffffffff;
  }
  FUN_012941d9(DAT_020ade08);
  return 0;
}

// 0129389D  FUN_0129389d  size=36  [run]
undefined4 FUN_0129389d(void)

{
  if (DAT_020ade08 == 0) {
    FUN_01293f1f(0,"E08052301H:CRI Heap is not initialized.");
    return 0xffffffff;
  }
  FUN_0129420c(DAT_020ade08);
  return 0;
}

// 012938F2  FUN_012938f2  size=50  [run]
int FUN_012938f2(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  
  iVar2 = *(int *)(in_EAX + 0x10);
  iVar3 = 0x18;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(char *)(iVar2 + 0xc) != '\0') {
      iVar3 = iVar3 + 0x1a +
              (uint)*(ushort *)(iVar2 + 0x10) + (uint)*(ushort *)(iVar2 + 0xe) + *(int *)(iVar2 + 8)
      ;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar2 != 0);
  if (unaff_ESI != (int *)0x0) {
    *unaff_ESI = iVar3;
  }
  return iVar1;
}

// 01293932  FUN_01293932  size=22  [run]
undefined4 __fastcall FUN_01293932(undefined4 param_1)

{
  FUN_012938f2();
  return param_1;
}

// 012939CC  FUN_012939cc  size=16  [run]
int FUN_012939cc(int param_1)

{
  if (param_1 < 8) {
    param_1 = 8;
  }
  return param_1 + 0x22;
}

// 012939DC  FUN_012939dc  size=25  [run]
void FUN_012939dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01293e63(0,param_2,param_3,0,param_1);
  return;
}

// 012939F5  FUN_012939f5  size=66  [run]
void FUN_012939f5(LPCSTR param_1)

{
  CHAR local_208 [512];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  wvsprintfA(local_208,param_1,&stack0x00000008);
  OutputDebugStringA(local_208);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 01293A6B  FUN_01293a6b  size=39  [run]
int __fastcall FUN_01293a6b(undefined4 param_1)

{
  int iVar1;
  
  DAT_020ade04 = DAT_020ade04 + -1;
  iVar1 = DAT_020ade04;
  if ((DAT_020ade04 == 0) && (iVar1 = 0, DAT_020ade08 != 0)) {
    iVar1 = FUN_01294197(DAT_020ade08,param_1);
    DAT_020ade08 = 0;
  }
  return iVar1;
}

// 01293A92  FUN_01293a92  size=49  [run]
undefined4
FUN_01293a92(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != 0) {
    uVar1 = (**(code **)*param_1)(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  FUN_012939dc(0,"E05063002H",0);
  return 0;
}

// 01293AC3  FUN_01293ac3  size=52  [run]
undefined4 FUN_01293ac3(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(*param_1 + 4) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 4))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  FUN_012939dc(0,"E05063003H",0);
  return 0;
}

// 01293B2B  FUN_01293b2b  size=74  [run]
undefined4
FUN_01293b2b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 uVar1;
  
  if (param_5 == 1) {
    uVar1 = FUN_01293a92(param_1,param_2,param_3,param_4);
  }
  else {
    if (param_5 != 2) {
      FUN_01293f1f(0,"E08032601H:Invalid allocation type.");
      return 0;
    }
    uVar1 = FUN_01293ac3(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

// 01293B75  FUN_01293b75  size=43  [run]
undefined4 FUN_01293b75(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(*param_1 + 0xc) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
    return uVar1;
  }
  FUN_012939dc(0,"E05063005H",0);
  return 0;
}

// 01293BA0  FUN_01293ba0  size=45  [run]
undefined4 * FUN_01293ba0(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 < 0x19) {
    return (undefined4 *)0x0;
  }
  _memset(param_1,0,0x18);
  puVar1 = (undefined4 *)FUN_0129311f();
  *puVar1 = &PTR_LAB_01b2646c;
  return puVar1;
}

// 01293BFA  FUN_01293bfa  size=28  [run]
void FUN_01293bfa(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  do {
    iVar1 = *(int *)(iVar1 + 4);
    FUN_0129368d(param_1);
  } while (iVar1 != 0);
  return;
}

// 01293CB1  FUN_01293cb1  size=183  [run]
void FUN_01293cb1(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = iVar2 - param_1;
  do {
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 0x1a +
            (uint)*(ushort *)(iVar2 + 0x10) + (uint)*(ushort *)(iVar2 + 0xe) + *(int *)(iVar2 + 8);
    FUN_012939f5("%05d: MBLK:%08xH(%08xH) ",local_8,iVar2,*(ushort *)(iVar2 + 0xe) + 0x1a);
    FUN_012939f5("PTR:%08xH(%08xH) ",*(ushort *)(iVar2 + 0xe) + 0x1a + iVar2,
                 *(undefined4 *)(iVar2 + 8));
    FUN_012939f5("%s %s ",(&PTR_DAT_01b26498)[*(byte *)(iVar2 + 0xd)],
                 (&PTR_DAT_01b26490)[*(byte *)(iVar2 + 0xc)]);
    puVar1 = *(undefined **)(iVar2 + 0x12);
    if (*(undefined **)(iVar2 + 0x12) == (undefined *)0x0) {
      puVar1 = PTR_s__no_name__01b2648c;
    }
    FUN_012939f5("\"%s\"\r\n",puVar1);
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar2 != 0);
  FUN_012939f5("TotalMemory = %08xH CurrentMemory = %08xH PeakSize = %08xH\r\n\r\n",iVar3,
               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
  return;
}

// 01293D68  FUN_01293d68  size=68  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01293d68(void)

{
  DAT_020ade04 = DAT_020ade04 + 1;
  if (DAT_020ade04 == 1) {
    _DAT_020ade00 = "\nCRI Heap/PCx86 Ver.1.21.02 Build:Sep  3 2012 18:07:27\n";
    FUN_01294241();
    DAT_020ade08 = FUN_01294159(&DAT_020ade10,0x48);
    if (DAT_020ade08 == 0) {
      FUN_01293f1f(0,"E08021401H:Faild to create critical section.");
    }
  }
  return;
}

// 01293E63  FUN_01293e63  size=135  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01293e63(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  code *pcVar2;
  
  FUN_01294241();
  pcVar2 = DAT_020ae160;
  pcVar1 = DAT_020ae15c;
  if (DAT_020ae160 != (code *)0x0) {
    DAT_020ae160 = (code *)0x0;
    DAT_020ae15c = (code *)0x0;
    (*pcVar2)(param_2,param_3,param_4,param_5);
  }
  if (param_1 == 1) {
    _DAT_020ae16c = _DAT_020ae16c + 1;
  }
  else {
    _DAT_020ae168 = _DAT_020ae168 + 1;
  }
  DAT_020ae15c = pcVar1;
  DAT_020ae160 = pcVar2;
  if (((DAT_020ae164 != 1) || (param_1 != 1)) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_2,param_3,param_4,param_5);
  }
  return;
}

// 01293F1F  FUN_01293f1f  size=22  [run]
void FUN_01293f1f(undefined4 param_1,undefined4 param_2)

{
  FUN_01293e63(param_1,param_2,0,0,0);
  return;
}

// 01293F35  FUN_01293f35  size=25  [run]
void FUN_01293f35(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01293e63(param_1,param_2,param_3,0,0);
  return;
}

// 01293F4E  FUN_01293f4e  size=27  [run]
void FUN_01293f4e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01293e63(param_1,param_2,param_3,param_4,0);
  return;
}

// 01293F69  FUN_01293f69  size=119  [run]
void FUN_01293f69(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_017f4498 + iVar1) == param_3) {
      pcVar3 = (&PTR_s_<No_Error>_017f449c)[iVar2 * 2];
      goto LAB_01293f98;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 8;
  } while ((&PTR_s_<No_Error>_017f449c)[iVar2 * 2] != (undefined *)0x0);
  pcVar3 = "Unknown Error.";
LAB_01293f98:
  FUN_01294257(&DAT_020ae058,0x100,param_2);
  FUN_012942a8(&DAT_020ae058,0x100,&DAT_016bc034);
  FUN_012942a8(&DAT_020ae058,0x100,pcVar3);
  FUN_01293e63(param_1,&DAT_020ae058,0,0,0);
  return;
}

// 01294038  FUN_01294038  size=55  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

bool FUN_01294038(LPCRITICAL_SECTION param_1)

{
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSection(param_1);
  }
  return param_1 != (LPCRITICAL_SECTION)0x0;
}

// 01294078  FUN_01294078  size=55  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

bool FUN_01294078(LPCRITICAL_SECTION param_1)

{
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(param_1);
  }
  return param_1 != (LPCRITICAL_SECTION)0x0;
}

// 012940B8  FUN_012940b8  size=55  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

bool FUN_012940b8(LPCRITICAL_SECTION param_1)

{
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(param_1);
  }
  return param_1 != (LPCRITICAL_SECTION)0x0;
}

// 012940F8  FUN_012940f8  size=55  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

bool FUN_012940f8(LPCRITICAL_SECTION param_1)

{
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1 != (LPCRITICAL_SECTION)0x0;
}

// 01294138  FUN_01294138  size=33  [run]
bool FUN_01294138(int param_1)

{
  DWORD DVar1;
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    return false;
  }
  DVar1 = GetCurrentThreadId();
  return DVar1 == *(DWORD *)(param_1 + 0x18);
}

// 01294159  FUN_01294159  size=62  [run]
uint FUN_01294159(void *param_1,size_t param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_0129433f();
  _memset(param_1,0,param_2);
  uVar2 = (int)param_1 + 7U & 0xfffffff8;
  iVar1 = FUN_01294038(uVar2);
  if (iVar1 == 0) {
    FUN_01293f1f(0,"E2006081802:InitializeCriticalSection function has failed.");
    return 0;
  }
  return uVar2;
}

// 01294197  FUN_01294197  size=66  [run]
void FUN_01294197(void *param_1)

{
  int iVar1;
  
  if (0 < *(int *)((int)param_1 + 0x1c)) {
    FUN_01293f1f(0,
                 "E2010062902:Critical section object will be deleted while some process is still in the section."
                );
  }
  iVar1 = FUN_01294078(param_1);
  if (iVar1 == 0) {
    FUN_01293f1f(0,"E2006081803:DeleteCriticalSection function has failed.");
    return;
  }
  _memset(param_1,0,0x20);
  return;
}

// 012941D9  FUN_012941d9  size=51  [run]
void FUN_012941d9(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_012940b8(param_1);
  if (iVar1 == 0) {
    FUN_01293f1f(0,"E2006081804:EnterCriticalSection function has failed.");
    return;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (*(int *)(param_1 + 0x1c) == 1) {
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x18) = DVar2;
  }
  return;
}

// 0129420C  FUN_0129420c  size=53  [run]
void FUN_0129420c(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = (int *)(param_1 + 0x1c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    pcVar3 = "E2010062901:Mismatch of the number of entering and leaving to critical section.";
  }
  else {
    iVar2 = FUN_012940f8(param_1);
    if (iVar2 != 0) {
      return;
    }
    pcVar3 = "E2006081805:EnterCriticalSection function has failed.";
  }
  FUN_01293f1f(0,pcVar3);
  return;
}

// 01294241  FUN_01294241  size=11  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01294241(void)

{
  _DAT_020ae170 = "\nCRI Base/PCx86 Ver.2.27.00 Build:Sep  3 2012 18:07:27\n";
  return;
}

// 01294257  FUN_01294257  size=25  [run]
char * FUN_01294257(char *param_1,rsize_t param_2,char *param_3)

{
  _strcpy_s(param_1,param_2,param_3);
  return param_1;
}

// 01294270  FUN_01294270  size=28  [run]
char * FUN_01294270(char *param_1,rsize_t param_2,char *param_3,rsize_t param_4)

{
  _strncpy_s(param_1,param_2,param_3,param_4);
  return param_1;
}

// 0129428C  FUN_0129428c  size=28  [run]
char * FUN_0129428c(char *param_1,rsize_t param_2,char *param_3,rsize_t param_4)

{
  _strncat_s(param_1,param_2,param_3,param_4);
  return param_1;
}

// 012942A8  FUN_012942a8  size=25  [run]
char * FUN_012942a8(char *param_1,rsize_t param_2,char *param_3)

{
  _strcat_s(param_1,param_2,param_3);
  return param_1;
}

// 012942C1  FUN_012942c1  size=21  [run]
size_t FUN_012942c1(char *param_1)

{
  size_t sVar1;
  
  sVar1 = _strlen(param_1);
  if (0x7fffffff < sVar1) {
    sVar1 = 0xffffffff;
  }
  return sVar1;
}

// 012942D6  FUN_012942d6  size=26  [run]
void FUN_012942d6(char *param_1,size_t param_2,char *param_3)

{
  _vsprintf_s(param_1,param_2,param_3,&stack0x00000010);
  return;
}

// 0129430B  FUN_0129430b  size=28  [run]
void * FUN_0129430b(void *param_1,rsize_t param_2,void *param_3,rsize_t param_4)

{
  _memcpy_s(param_1,param_2,param_3,param_4);
  return param_1;
}

// 01294327  _memset  size=5  [run]
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0x7f < _Size)) && (DAT_0225d0a8 != 0)) {
    pvVar2 = (void *)__VEC_memzero();
    return pvVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}

// 0129432C  FUN_0129432c  size=19  [run]
void FUN_0129432c(void *param_1,size_t param_2)

{
  _memset(param_1,0,param_2);
  return;
}

// 0129433F  FUN_0129433f  size=11  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0129433f(void)

{
  _DAT_020ae178 = "\nCRI Critical Section/PCx86 Ver.1.00.12 Build:Sep  3 2012 18:07:26\n";
  return;
}

// 0129434A  thunk_FUN_01294159  size=5  [run]
uint thunk_FUN_01294159(void *param_1,size_t param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_0129433f();
  _memset(param_1,0,param_2);
  uVar2 = (int)param_1 + 7U & 0xfffffff8;
  iVar1 = FUN_01294038(uVar2);
  if (iVar1 == 0) {
    FUN_01293f1f(0,"E2006081802:InitializeCriticalSection function has failed.");
    return 0;
  }
  return uVar2;
}

// 0129434F  FUN_0129434f  size=30  [run]
undefined4 FUN_0129434f(void)

{
  if (DAT_020ae318 != 0) {
    return 0;
  }
  FUN_01293f1f(1,"W2008121610:The binder module is not initialized.");
  return 0xffffffff;
}

// 0129436D  FUN_0129436d  size=48  [run]
void FUN_0129436d(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)(in_EAX + 0x20) = 0;
  if (*(undefined1 **)(in_EAX + 0x24) != (undefined1 *)0x0) {
    **(undefined1 **)(in_EAX + 0x24) = 0;
  }
  *(undefined4 *)(in_EAX + 0x28) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(undefined4 *)(in_EAX + 0x3c) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x38) = 0;
  *(undefined4 *)(in_EAX + 0x34) = 0;
  return;
}

// 0129439D  FUN_0129439d  size=46  [run]
void FUN_0129439d(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 4) == in_EAX) {
      *(int *)(iVar1 + 4) = in_EAX[1];
    }
    else {
      *(int *)(iVar1 + 8) = in_EAX[1];
    }
  }
  if ((int *)in_EAX[1] != (int *)0x0) {
    *(int *)in_EAX[1] = *in_EAX;
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  return;
}

// 012943CB  FUN_012943cb  size=75  [run]
int __fastcall FUN_012943cb(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = piVar1 + param_2 * 0x10;
  iVar2 = 0;
  iVar4 = param_2;
  if (0 < param_2) {
    do {
      piVar1[2] = 0;
      *piVar1 = param_1;
      piVar1[1] = (int)(piVar1 + 0x10);
      piVar1[9] = -(uint)(param_3 != 0) & (uint)piVar3;
      param_1 = FUN_0129436d();
      piVar3 = (int *)((int)piVar3 + param_3);
      iVar4 = iVar4 + -1;
      piVar1 = *(int **)(param_1 + 4);
      iVar2 = param_2;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar2;
}

// 0129449A  FUN_0129449a  size=61  [run]
void FUN_0129449a(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = DAT_020ae318;
  if (DAT_020ae318 != 0) {
    iVar3 = **(int **)(DAT_020ae318 + 0x3c);
    piVar2 = (int *)FUN_0129439d();
    if (iVar3 == 0) {
      **(int **)(iVar1 + 0x3c) = (int)piVar2;
    }
    else {
      for (; *(int *)(iVar3 + 4) != 0; iVar3 = *(int *)(iVar3 + 4)) {
      }
      *(int **)(iVar3 + 4) = piVar2;
      *piVar2 = iVar3;
    }
    piVar2[8] = 0;
    piVar2[0xc] = param_1;
  }
  return;
}

// 012944D7  FUN_012944d7  size=61  [run]
void FUN_012944d7(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_012944d7(*(int *)(param_1 + 8),param_2);
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_012944d7(*(int *)(param_1 + 4),param_2);
    }
    FUN_0129449a(param_2);
  }
  return;
}

// 01294514  FUN_01294514  size=58  [run]
void FUN_01294514(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_01294514(*(int *)(param_1 + 8));
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_01294514(*(int *)(param_1 + 4));
    }
    if (*(code **)(param_1 + 0xc) != (code *)0x0) {
      (**(code **)(param_1 + 0xc))(param_1);
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  return;
}

// 0129457F  FUN_0129457f  size=43  [run]
void FUN_0129457f(int param_1,undefined4 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0129457f(*(int *)(param_1 + 8),param_2);
    }
    *(undefined4 *)(param_1 + 0x20) = param_2;
  }
  return;
}

// 012945AA  FUN_012945aa  size=49  [run]
int FUN_012945aa(int param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_012945aa(*(int *)(param_1 + 8),param_2);
    }
    iVar1 = (*param_2)(param_1);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}

// 012945DB  FUN_012945db  size=26  [run]
int FUN_012945db(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  return (param_2 + 0x48) * param_1 + 0x60;
}

// 012945F5  FUN_012945f5  size=17  [run]
void FUN_012945f5(void *param_1)

{
  _memset(param_1,0,0x20);
  return;
}

// 01294606  FUN_01294606  size=93  [run]
void FUN_01294606(void)

{
  if (DAT_020ae33c != 0) {
    FUN_01294197(DAT_020ae33c);
    DAT_020ae33c = 0;
  }
  if (DAT_020ae340 != 0) {
    FUN_01294197(DAT_020ae340);
    DAT_020ae340 = 0;
  }
  if (DAT_020ae344 != 0) {
    FUN_01294197(DAT_020ae344);
    DAT_020ae344 = 0;
  }
  if (DAT_020ae348 != 0) {
    FUN_01294197(DAT_020ae348);
    DAT_020ae348 = 0;
  }
  return;
}

// 01294663  FUN_01294663  size=113  [run]
undefined4 FUN_01294663(void)

{
  DAT_020ae33c = FUN_01294159(&DAT_020ae2d0,0x48);
  DAT_020ae340 = FUN_01294159(&DAT_020ae240,0x48);
  DAT_020ae344 = FUN_01294159(&DAT_020ae1c0,0x48);
  DAT_020ae348 = FUN_01294159(&DAT_020ae288,0x48);
  if ((((DAT_020ae33c != 0) && (DAT_020ae340 != 0)) && (DAT_020ae344 != 0)) && (DAT_020ae348 != 0))
  {
    return 0;
  }
  FUN_01294606();
  return 0xffffffff;
}

// 012946D4  FUN_012946d4  size=24  [run]
void FUN_012946d4(int param_1)

{
  DAT_020ae324 = param_1;
  DAT_020ae328 = DAT_020ae31c - param_1;
  return;
}

// 0129471D  FUN_0129471d  size=25  [run]
int FUN_0129471d(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_020ae318;
  while (iVar2 = *(int *)(iVar2 + 4), iVar2 != 0) {
    if (*(int *)(iVar2 + 0x18) == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

// 01294798  FUN_01294798  size=32  [run]
undefined4 FUN_01294798(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_0129b6d6(param_1,&local_8);
  if (iVar1 != 0) {
    return 3;
  }
  return local_8;
}

// 012947B8  FUN_012947b8  size=51  [run]
undefined4 FUN_012947b8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01294798(param_1);
  while( true ) {
    if (iVar1 == 2) {
      return 0;
    }
    if (iVar1 == 3) break;
    FUN_0129b6c9();
    FUN_014996ef(1);
    iVar1 = FUN_01294798(param_1);
  }
  return 0xffffffff;
}

// 012947EB  FUN_012947eb  size=72  [run]
undefined4 FUN_012947eb(char *param_1)

{
  int iVar1;
  long lVar2;
  long *unaff_ESI;
  
  if (unaff_ESI != (long *)0x0) {
    *unaff_ESI = -1;
  }
  if (param_1 != (char *)0x0) {
    iVar1 = FUN_00fdbbd0(param_1,&DAT_017f4814);
    if (iVar1 != 0) {
      lVar2 = _strtol((char *)(iVar1 + 3),&param_1,0);
      if (-1 < lVar2) {
        if (unaff_ESI != (long *)0x0) {
          *unaff_ESI = lVar2;
        }
        return 1;
      }
    }
  }
  return 0;
}

// 01294833  FUN_01294833  size=110  [run]
uint __fastcall FUN_01294833(int param_1)

{
  int in_EAX;
  char *pcVar1;
  undefined1 *unaff_ESI;
  int local_8;
  
  local_8 = 0;
  *unaff_ESI = 0x49;
  unaff_ESI[1] = 0x44;
  unaff_ESI[2] = 0x3d;
  pcVar1 = unaff_ESI + 3;
  for (; 1 < in_EAX; in_EAX = in_EAX / 10) {
    if (param_1 < in_EAX) {
      if (local_8 != 0) {
        *pcVar1 = '0';
        pcVar1 = pcVar1 + 1;
      }
    }
    else {
      local_8 = param_1 / in_EAX;
      *pcVar1 = (char)local_8 + '0';
      pcVar1 = pcVar1 + 1;
      param_1 = param_1 - local_8 * in_EAX;
    }
  }
  if (param_1 < 10) {
    *pcVar1 = (char)param_1 + '0';
    pcVar1 = pcVar1 + 1;
  }
  *pcVar1 = '\0';
  return -(uint)(unaff_ESI[3] != '\0') & (uint)unaff_ESI;
}

// 012948A1  FUN_012948a1  size=57  [run]
undefined4 FUN_012948a1(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "E2009091400:The srcbndrhn is NULL. To use the ID, specify the srcbndrhn.";
  }
  else {
    iVar1 = FUN_01294833();
    if (iVar1 != 0) {
      return in_EAX;
    }
    pcVar2 = "E2009091401:Invalid ID.";
  }
  FUN_01293f1f(0,pcVar2);
  return 0;
}

// 012948DA  FUN_012948da  size=30  [run]
void FUN_012948da(void)

{
  undefined1 local_24 [24];
  undefined4 local_c;
  
  FUN_0129a152(0,local_24);
  FUN_0129cd55(local_c);
  return;
}

// 012948F8  FUN_012948f8  size=62  [run]
undefined4 FUN_012948f8(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar2 = 0;
  if (unaff_EDI == (int *)0x0) {
    FUN_01293f69(0,"E2008082902",0xfffffffe);
    return 0xfffffffe;
  }
  iVar1 = FUN_0129d6a7();
  if ((iVar1 == 0) || (param_1 != 0)) {
    iVar2 = FUN_012948da();
  }
  *unaff_EDI = iVar2 + 0x440;
  return 0;
}

// 01294936  FUN_01294936  size=15  [run]
void FUN_01294936(void)

{
  FUN_012948f8(0);
  return;
}

// 01294945  FUN_01294945  size=15  [run]
void FUN_01294945(void)

{
  FUN_012948f8(1);
  return;
}

// 01294954  FUN_01294954  size=66  [run]
void FUN_01294954(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_012948a1(param_1,param_2);
  if (iVar2 != 0) {
    FUN_012948f8(0);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

// 01294996  FUN_01294996  size=33  [run]
void FUN_01294996(int param_1)

{
  int iVar1;
  int *unaff_ESI;
  
  if (param_1 == 0) {
    iVar1 = 0x208;
  }
  else {
    iVar1 = FUN_012942c1(param_1);
    iVar1 = iVar1 + 1;
  }
  *unaff_ESI = *unaff_ESI + iVar1 + 0x280;
  return;
}

// 012949B7  FUN_012949b7  size=35  [run]
int FUN_012949b7(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_012948f8(0);
  if (iVar1 == 0) {
    FUN_01294996(param_2);
    iVar1 = 0;
  }
  return iVar1;
}

// 012949DA  FUN_012949da  size=108  [run]
undefined4 FUN_012949da(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *unaff_EDI;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  *unaff_EDI = 0;
  iVar1 = FUN_0129e60f(param_1,local_10,&local_c);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_0129ca5c(&local_8);
    if (iVar1 == 0) {
      FUN_0129b774(local_8,0);
      FUN_0129c6e2(local_8,0,param_1,0,0,0,0,0,0,0);
      *param_3 = local_c;
      *param_2 = local_8;
      return local_8;
    }
  }
  else {
    *unaff_EDI = 3;
  }
  return 0;
}

// 01294A46  FUN_01294a46  size=111  [run]
/* WARNING: Removing unreachable block (ram,0x01294ab0) */

undefined4 FUN_01294a46(undefined4 *param_1)

{
  undefined4 *unaff_ESI;
  undefined4 local_10;
  
  *unaff_ESI = 0;
  FUN_0129b6d6();
  if (local_10 == 2) {
    FUN_0129b7b8();
  }
  else {
    if (local_10 != 3) {
      return 1;
    }
    FUN_0129b7ef();
  }
  *param_1 = 0;
  FUN_0129c89d();
  *unaff_ESI = 2;
  return 3;
}

// 01294AB5  FUN_01294ab5  size=139  [run]
undefined4 FUN_01294ab5(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x1f0);
  if (*piVar1 != 1) {
    return 0;
  }
  iVar2 = FUN_01294a46(piVar1 + 2);
  if (iVar2 == 2) {
    *piVar1 = 2;
    FUN_0129d6b3(*(int *)(param_1 + 0x3c) + 0x20,piVar1[8],piVar1[2],piVar1[4],piVar1[5]);
    FUN_0129e3b9(piVar1[0xc],piVar1[2],&local_c);
    piVar1[7] = local_c;
    piVar1[6] = local_c;
  }
  else if (iVar2 == 3) {
    *piVar1 = 6;
    piVar1[0xd] = local_8;
    goto LAB_01294b37;
  }
  if (*piVar1 == 1) {
    return 1;
  }
LAB_01294b37:
  piVar1[0xb] = 0;
  return 0;
}

// 01294B40  FUN_01294b40  size=79  [run]
/* WARNING: Removing unreachable block (ram,0x01294b82) */

void FUN_01294b40(int param_1)

{
  _memset((void *)(param_1 + 8),0,0x20);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x28);
  FUN_012949da(*(undefined4 *)(param_1 + 0x28),param_1 + 0x2c,(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

// 01294B8F  FUN_01294b8f  size=62  [run]
uint FUN_01294b8f(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  
  uVar1 = *(uint *)(in_EAX + 0x3c);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(int *)(in_EAX + 0x1c) == 2) {
    iVar2 = FUN_0129d0c4(uVar1 + 0x20);
  }
  else {
    if (*(int *)(in_EAX + 0x1c) != 3) {
      return 0;
    }
    if (*(int **)(uVar1 + 0x1f0) == (int *)0x0) {
      return 0;
    }
    iVar2 = **(int **)(uVar1 + 0x1f0) + -1;
  }
  return ~-(uint)(iVar2 != 1) & uVar1;
}

// 01294BCD  FUN_01294bcd  size=104  [run]
void FUN_01294bcd(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *unaff_EBX;
  uint uVar3;
  byte *pbVar4;
  
  pbVar2 = (byte *)*unaff_EBX;
  uVar3 = 0;
  pbVar4 = pbVar2;
  if (param_2 != 0) {
    do {
      bVar1 = *pbVar4;
      if (bVar1 < 0x80) {
        if ((((bVar1 == 10) || (bVar1 == 0x2c)) || (bVar1 == 9)) || (bVar1 == 0)) break;
        pbVar4 = pbVar4 + 1;
      }
      else {
        pbVar4 = pbVar4 + 2;
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  FUN_0129e674(param_1,param_2,pbVar2,uVar3);
  *(undefined1 *)(uVar3 + param_1) = 0;
  for (; ((bVar1 = *pbVar4, bVar1 == 10 || (bVar1 == 0x2c)) || ((bVar1 == 9 || (bVar1 == 0x20))));
      pbVar4 = pbVar4 + 1) {
  }
  *unaff_EBX = pbVar4;
  return;
}

// 01294C35  FUN_01294c35  size=174  [run]
void FUN_01294c35(undefined4 param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_210;
  undefined1 local_20f [119];
  undefined1 local_198 [400];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)local_198;
  iVar2 = 0;
  local_210 = 0;
  _memset(local_20f,0,0x207);
  if ((param_3 == (int *)0x0) || (param_2 == (char *)0x0)) {
    FUN_01293f69(0,"E2008082901",0xfffffffe);
  }
  else {
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      FUN_01294bcd(&local_210,0x207);
      iVar2 = iVar2 + 1;
      cVar1 = *param_2;
    }
    *param_3 = iVar2 * 0x240 + 0x50;
  }
  __security_check_cookie(local_8 ^ (uint)local_198);
  return;
}

// 01294CE3  thunk_FUN_01294c35  size=5  [run]
void thunk_FUN_01294c35(undefined4 param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uStack_210;
  undefined1 auStack_20f [119];
  undefined1 auStack_198 [400];
  uint uStack_8;
  
  uStack_8 = DAT_018e8764 ^ (uint)auStack_198;
  iVar2 = 0;
  uStack_210 = 0;
  _memset(auStack_20f,0,0x207);
  if ((param_3 == (int *)0x0) || (param_2 == (char *)0x0)) {
    FUN_01293f69(0,"E2008082901",0xfffffffe);
  }
  else {
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      FUN_01294bcd(&uStack_210,0x207);
      iVar2 = iVar2 + 1;
      cVar1 = *param_2;
    }
    *param_3 = iVar2 * 0x240 + 0x50;
  }
  __security_check_cookie(uStack_8 ^ (uint)auStack_198);
  return;
}

// 01294CE8  FUN_01294ce8  size=37  [run]
undefined4 FUN_01294ce8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_3 == (undefined4 *)0x0) {
    FUN_01293f69(0,"E2008082900",0xfffffffe);
    return 0xfffffffe;
  }
  *param_3 = 0x48;
  return 0;
}

// 01294D0D  FUN_01294d0d  size=174  [run]
void FUN_01294d0d(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  uint local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  int local_8;
  
  FUN_0129b6d6(param_1,&local_8);
  if (local_8 == 2) {
    FUN_0129b7b8(param_1);
    if ((*unaff_ESI != 0) && (iVar2 = FUN_0129e60f(param_2,local_10,&local_c), iVar2 == 0)) {
      FUN_0129e3b9(local_c,*unaff_ESI,&local_18);
      uVar1 = unaff_ESI[4];
      if (uVar1 == 0) {
        unaff_ESI[4] = local_18;
        unaff_ESI[5] = local_18;
      }
      else {
        uVar4 = local_18 - unaff_ESI[2];
        uVar3 = (local_14 - unaff_ESI[3]) - (uint)(local_18 < (uint)unaff_ESI[2]);
        if ((uVar3 < 0x80000000) && ((0 < (int)uVar3 || (uVar1 < uVar4)))) {
          uVar4 = uVar1;
        }
        unaff_ESI[4] = uVar4;
        unaff_ESI[5] = uVar4;
      }
      unaff_ESI[6] = param_2;
      *unaff_EBX = 2;
      return;
    }
  }
  else if (local_8 != 3) {
    return;
  }
  *unaff_EBX = 6;
  return;
}

// 01294DBB  FUN_01294dbb  size=104  [run]
bool FUN_01294dbb(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int local_14 [2];
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = *(int *)(unaff_ESI + 0x1f0);
  iVar2 = *(int *)(unaff_ESI + 0x14);
  if (*(int *)(unaff_ESI + 0x14) == 0) {
    local_8 = 0;
    iVar2 = FUN_0129d377(unaff_ESI + 0x20);
    FUN_0129e60f(*(undefined4 *)(unaff_ESI + 0x1e0),local_c,&local_8);
    if ((local_8 == 0) || (iVar2 == 0)) {
      return false;
    }
    FUN_0129e3b9(local_8,iVar2,local_14);
    iVar2 = local_14[0];
  }
  return iVar2 == *(int *)(iVar1 + 0x1c);
}

// 01294E23  FUN_01294e23  size=81  [run]
undefined4 FUN_01294e23(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (unaff_ESI != (undefined4 *)0x0) {
    FUN_012945f5();
  }
  iVar1 = FUN_0129e6cd(param_1,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  if (unaff_ESI != (undefined4 *)0x0) {
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[2] = unaff_EDI[2];
    unaff_ESI[3] = unaff_EDI[3];
    unaff_ESI[4] = unaff_EDI[4];
    unaff_ESI[5] = unaff_EDI[5];
    unaff_ESI[6] = unaff_EDI[6];
    unaff_ESI[7] = unaff_EDI[7];
  }
  return 1;
}

// 01294E74  FUN_01294e74  size=232  [run]
undefined8 FUN_01294e74(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_20 = 0xffffffff;
  local_1c = 0xffffffff;
  iVar1 = FUN_0129e60f();
  if (iVar1 == 0) {
    iVar1 = FUN_0129e325(local_8);
    if ((local_14 == 1) && (iVar1 == 0)) {
      FUN_012949da();
      iVar1 = local_10;
      if ((local_14 == 0) && (local_10 != 0)) {
        FUN_012947b8(local_10);
        iVar2 = FUN_0129b7b8(iVar1,&local_c);
        if ((iVar2 == 0) && (local_c != 0)) {
          FUN_0129e3b9(local_8,local_c,&local_20);
        }
        else {
          local_20 = 0xffffffff;
          local_1c = 0xffffffff;
        }
        FUN_0129b774(iVar1,1);
        FUN_0129c802(iVar1,local_c);
        FUN_012947b8(iVar1);
        FUN_0129c89d(iVar1);
      }
      else {
        local_1c = 0xffffffff;
        local_20 = 0xffffffff;
      }
      goto LAB_01294f58;
    }
  }
  local_1c = 0xffffffff;
  local_20 = 0xffffffff;
LAB_01294f58:
  return CONCAT44(local_1c,local_20);
}

// 01294F5C  FUN_01294f5c  size=34  [run]
int __fastcall FUN_01294f5c(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (*param_2 != '*') {
    return -1;
  }
  uVar3 = 0;
  do {
    iVar1 = uVar3 + 1;
    uVar3 = uVar3 + 1;
    iVar2 = param_2[iVar1] + -0x30 + iVar2 * 10;
  } while (uVar3 < 9);
  return iVar2;
}

// 01294F7E  FUN_01294f7e  size=33  [run]
void __fastcall FUN_01294f7e(int *param_1)

{
  int *in_EAX;
  
  if (*param_1 != 0) {
    *in_EAX = *param_1;
    in_EAX[6] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[7] = param_1[4];
  }
  return;
}

// 01294F9F  FUN_01294f9f  size=30  [run]
int FUN_01294f9f(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x18) != 4) {
    FUN_01293f1f(0,"E2008072392:This isn\'t Cpk Binder.");
    return 0;
  }
  return *(int *)(in_EAX + 0x3c) + 0x20;
}

// 01294FBD  FUN_01294fbd  size=32  [run]
undefined4 FUN_01294fbd(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    FUN_01293f69(0,"E2008072393",0xfffffffe);
    return 0;
  }
  uVar1 = FUN_01294f9f();
  return uVar1;
}

// 01294FDD  FUN_01294fdd  size=154  [run]
undefined4 FUN_01294fdd(int param_1,int param_2)

{
  FUN_012941d9(DAT_020ae344);
  if (param_1 == 0) {
    DAT_020ae354 = (undefined *)0x0;
    DAT_020ae35c = 0;
  }
  else {
    FUN_012942d6(&DAT_020ae35c,0x208,&DAT_016575ac,param_1);
    DAT_020ae354 = &DAT_020ae35c;
  }
  if (param_2 == 0) {
    DAT_020ae358 = (undefined *)0x0;
    DAT_020ae564 = 0;
  }
  else {
    FUN_012942d6(&DAT_020ae564,0x208,&DAT_016575ac,param_2);
    DAT_020ae358 = &DAT_020ae564;
  }
  DAT_020ae350 = (uint)(param_1 != 0);
  FUN_0129420c(DAT_020ae344);
  return 0;
}

// 01295077  FUN_01295077  size=54  [run]
undefined4 FUN_01295077(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *param_1 = DAT_020ae350;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = DAT_020ae354;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = DAT_020ae358;
  }
  return 0;
}

// 012950AD  FUN_012950ad  size=87  [run]
undefined4 FUN_012950ad(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_020ae33c;
  iVar3 = 0;
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if (param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    uVar1 = 0xffffffff;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    FUN_012941d9(uVar1);
    uVar1 = DAT_020ae33c;
    for (iVar2 = *(int *)(param_1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar3 = iVar3 + 1;
    }
    param_2[1] = iVar3;
    FUN_0129420c(uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

// 01295104  FUN_01295104  size=134  [run]
undefined4 FUN_01295104(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_01294f9f();
  if (iVar1 != 0) {
    _memset(&local_2c,0,0x28);
    if (param_1 == 0) {
      iVar1 = FUN_0129e1e8(iVar1,&local_2c,param_2);
    }
    else {
      iVar1 = FUN_0129d2be(iVar1,&local_2c,param_1);
    }
    if (iVar1 == 1) {
      if (unaff_ESI != (undefined4 *)0x0) {
        *unaff_ESI = local_2c;
        unaff_ESI[1] = local_28;
        unaff_ESI[2] = local_24;
        unaff_ESI[3] = local_20;
        unaff_ESI[4] = local_1c;
        unaff_ESI[5] = local_18;
        unaff_ESI[6] = local_14;
        unaff_ESI[7] = local_10;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

// 0129518A  FUN_0129518a  size=198  [run]
undefined4 FUN_0129518a(undefined4 *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_ESI;
  char *pcVar5;
  undefined1 local_2c [32];
  undefined4 local_c;
  
  iVar4 = 0;
  if (in_EAX == 0) {
    FUN_01293f69(0,"E2009022410",0xfffffffe);
    uVar3 = 0xfffffffe;
  }
  else {
    iVar2 = FUN_01294f9f();
    if (iVar2 == 0) {
      pcVar5 = "E2009022411:Cannot get the cpkc.";
    }
    else {
      _memset(local_2c,0,0x28);
      FUN_012941d9(DAT_020ae33c);
      iVar1 = *unaff_ESI;
      if (iVar1 == 0) {
        iVar4 = FUN_0129deee(iVar2,local_2c,unaff_ESI[1]);
      }
      else if (iVar1 == 1) {
        iVar4 = FUN_0129e1e8(iVar2,local_2c,unaff_ESI[1]);
      }
      else if (iVar1 == 2) {
        iVar4 = FUN_0129d2be(iVar2,local_2c,unaff_ESI[1]);
      }
      FUN_0129420c(DAT_020ae33c);
      if (iVar4 == 1) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = local_c;
        }
        return 0;
      }
      pcVar5 = "E2009022412:Cannot get the contents file info details.";
    }
    FUN_01293f1f(0,pcVar5);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

// 01295250  FUN_01295250  size=19  [run]
bool FUN_01295250(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return false;
  }
  return *param_1 != 0;
}

// 01295263  FUN_01295263  size=55  [run]
undefined4 FUN_01295263(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_012941d9(DAT_020ae33c);
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x14);
  }
  FUN_0129420c(DAT_020ae33c);
  return uVar1;
}

// 0129529A  FUN_0129529a  size=165  [run]
undefined4 __fastcall FUN_0129529a(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *(undefined4 *)(in_EAX + 0x1c);
  unaff_ESI[1] = *(undefined4 *)(in_EAX + 0x20);
  unaff_ESI[2] = *(undefined4 *)(in_EAX + 0x10);
  unaff_ESI[4] = *(undefined4 *)(in_EAX + 0x24);
  unaff_ESI[5] = *(undefined4 *)(in_EAX + 0x24);
  uVar2 = *(undefined4 *)(in_EAX + 0x28);
  unaff_ESI[7] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[6] = uVar2;
  iVar3 = *(int *)(in_EAX + 0x18);
  if (iVar3 == 3) {
    uVar2 = *(undefined4 *)(*(int *)(in_EAX + 0x3c) + 0x1c);
  }
  else {
    if (iVar3 == 4) {
      iVar3 = *(int *)(in_EAX + 0x3c);
      unaff_ESI[5] = *(undefined4 *)(iVar3 + 0x1e0);
      unaff_ESI[7] = *(undefined4 *)(iVar3 + 0x1c);
      uVar2 = FUN_0129d3b0(iVar3 + 0x20);
      unaff_ESI[3] = uVar2;
      return 0;
    }
    if (iVar3 != 5) {
      return 0;
    }
    iVar3 = (*(int **)(in_EAX + 0x3c))[1];
    iVar1 = **(int **)(in_EAX + 0x3c);
    if ((param_2 < iVar1) && (0 < param_2)) {
      iVar3 = param_2 * 0x38 + *(int *)(*(int *)(in_EAX + 0x3c) + 4);
    }
    unaff_ESI[3] = iVar1;
    if (iVar3 == 0) {
      unaff_ESI[4] = 0;
      unaff_ESI[5] = 0;
      return 0;
    }
    unaff_ESI[4] = *(undefined4 *)(iVar3 + 0x28);
    unaff_ESI[5] = *(undefined4 *)(iVar3 + 0x2c);
    uVar2 = *(undefined4 *)(iVar3 + 0x24);
  }
  unaff_ESI[7] = uVar2;
  return 0;
}

// 0129533F  FUN_0129533f  size=95  [run]
undefined4 FUN_0129533f(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_30 [24];
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_4 == (int *)0x0) {
    FUN_01293f69(0,"E2010080201",0xfffffffe);
    uVar1 = 0xfffffffe;
  }
  else {
    local_c = param_1;
    local_10 = param_2;
    local_8 = param_3;
    uVar1 = FUN_0129a152(0,local_30);
    iVar2 = FUN_0129cefa(&local_10,local_18);
    *param_4 = iVar2 + 0x440;
  }
  return uVar1;
}

// 0129539E  FUN_0129539e  size=38  [run]
void FUN_0129539e(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_0129533f(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    *param_4 = *param_4 + 0x488;
  }
  return;
}

// 012953C4  FUN_012953c4  size=61  [run]
int FUN_012953c4(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_020ae770 == 0) {
    FUN_01293f1f(0,"E2009072320:The work is NULL, and user-heap API is unset.");
    return 0;
  }
  iVar1 = FUN_0149987c(DAT_020ae770,param_1);
  if (iVar1 == 0) {
    FUN_01293f1f(0,"E2009072321:Cannot allocate memory.");
  }
  return iVar1;
}

// 01295401  FUN_01295401  size=35  [run]
void FUN_01295401(undefined4 param_1)

{
  if (DAT_020ae770 == 0) {
    FUN_01293f1f(0,"E2009072322:The user-heap API is unset.");
  }
  else {
    FUN_014998b6(DAT_020ae770,param_1);
  }
  return;
}

// 01295478  FUN_01295478  size=174  [run]
undefined4 FUN_01295478(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_020ae318 == 0) {
    FUN_01293f1f(0,"E2009072410:CriFsBinder module is not initialized.\n");
    uVar1 = 0xffffffff;
  }
  else {
    FUN_012941d9(DAT_020ae348);
    if (param_1 == 0) {
      FUN_0129d688(0,0,0);
      FUN_0129d63c(&DAT_020ae770,&DAT_020ae218,0,0,0);
    }
    else {
      FUN_0129d63c(&DAT_020ae774,&DAT_020ae22c,param_1,param_2,param_3);
      FUN_0129d688(&LAB_01295424,&LAB_01295451,DAT_020ae774);
      FUN_0129d63c(&DAT_020ae770,&DAT_020ae218,&LAB_01295424,&LAB_01295451,DAT_020ae774);
    }
    FUN_0129420c(DAT_020ae348);
    uVar1 = 0;
  }
  return uVar1;
}

// 01295526  FUN_01295526  size=108  [run]
void FUN_01295526(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01295526(*(int *)(param_1 + 8),param_2,param_3);
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_01295526(*(int *)(param_1 + 4),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    iVar3 = *(int *)(param_1 + 0x3c) + 0x48;
    uVar1 = FUN_012a0029(iVar3);
    uVar2 = FUN_012a0039(iVar3);
    if ((uVar1 != 0) && (*param_3 < uVar1)) {
      *param_3 = uVar1;
    }
    if ((uVar2 != 0) && (*param_2 < uVar2)) {
      *param_2 = uVar2;
    }
  }
  return;
}

// 01295592  FUN_01295592  size=116  [run]
int FUN_01295592(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_01295526(param_1,&local_8,&local_c);
  if ((local_8 == 0) || (local_c == 0)) {
    *param_3 = 0;
    *param_4 = 0;
    local_c = 0;
  }
  else {
    uVar1 = FUN_0129cd55(param_2);
    uVar2 = FUN_0129cd7f(0,local_8,param_2);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    *param_3 = uVar2 + 0x440;
    *param_4 = local_c;
    local_c = *param_3 + local_c;
  }
  return local_c;
}

// 01295606  FUN_01295606  size=103  [run]
undefined4 FUN_01295606(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = param_2;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    FUN_01293f69(0,"E2009082601",0xfffffffe);
    uVar3 = 0xfffffffe;
  }
  else {
    iVar2 = FUN_01295592(param_1,0x20,&param_1,&param_2);
    if (iVar2 == 0) {
      FUN_01293f1f(1,"W2009082601:No Dpk.");
    }
    else {
      *piVar1 = param_1 + 0x20 + (int)param_2;
    }
    uVar3 = 0;
  }
  return uVar3;
}

// 012956B3  FUN_012956b3  size=27  [run]
void FUN_012956b3(void)

{
  if (DAT_01b264a8 == -1) {
    DAT_01b264a8 = 1;
    return;
  }
  DAT_01b264a8 = DAT_01b264a8 + 1;
  return;
}

// 012956CE  FUN_012956ce  size=49  [run]
void FUN_012956ce(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_020ae34c + DAT_020ae76c * 8);
  puVar1 = puVar2;
  for (param_1 = DAT_020ae76c - param_1; 0 < param_1; param_1 = param_1 + -1) {
    *puVar2 = puVar1[-2];
    puVar2[1] = puVar1[-1];
    puVar2 = puVar2 + -2;
    puVar1 = puVar1 + -2;
  }
  return;
}

// 01295736  FUN_01295736  size=69  [run]
uint * FUN_01295736(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_EBX;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = DAT_020ae76c + -1;
  if (unaff_EBX == 0) {
    return (uint *)0x0;
  }
  if (-1 < iVar4) {
    do {
      iVar3 = (iVar4 + iVar5) / 2;
      puVar1 = (uint *)(DAT_020ae34c + iVar3 * 8);
      uVar2 = *puVar1;
      if (uVar2 == unaff_EBX) {
        return puVar1;
      }
      if (uVar2 < unaff_EBX) {
        iVar5 = iVar3 + 1;
      }
      else {
        iVar4 = iVar3 + -1;
      }
    } while (iVar5 <= iVar4);
  }
  return (uint *)0x0;
}

// 0129577B  FUN_0129577b  size=43  [run]
undefined4 FUN_0129577b(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_012941d9(DAT_020ae33c);
  iVar1 = FUN_01295736();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  FUN_0129420c(DAT_020ae33c);
  return uVar2;
}

// 012957BA  FUN_012957ba  size=142  [run]
undefined4 FUN_012957ba(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0129577b();
  if (((iVar1 == 0) || (param_3 == (int *)0x0)) || (param_2 < 1)) {
    FUN_01293f69(0,"E2011010301",0xfffffffe);
    uVar3 = 0xfffffffe;
  }
  else if ((*(int *)(iVar1 + 0x1c) == 2) && (*(int *)(iVar1 + 0x3c) != 0)) {
    iVar1 = *(int *)(iVar1 + 0x3c) + 0x20;
    iVar2 = FUN_0129d359(iVar1);
    if (iVar2 == 1) {
      iVar1 = FUN_0129d938(iVar1,param_2);
      *param_3 = iVar1 * 8 + 0x20;
    }
    else {
      FUN_01293f1f(1,"W2011010401:CpkIdAccessTable::CPK without ID information.");
      *param_3 = 0;
    }
    uVar3 = 0;
  }
  else {
    FUN_01293f1f(0,"E2011010302:No Cpk Binder.");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

// 01295848  FUN_01295848  size=19  [run]
int FUN_01295848(int param_1,int param_2)

{
  return param_1 / (int)(param_2 - 0x20U >> 3) + 1;
}

// 0129585B  FUN_0129585b  size=121  [run]
int FUN_0129585b(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = FUN_012957ba(param_1,param_2,&local_8);
  if (iVar1 == 0) {
    if ((int)param_4 < local_8) {
      FUN_01293f1f(0,"E2011010303:the size for work is too small.");
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_0129577b();
      iVar1 = *(int *)(iVar1 + 0x3c) + 0x20;
      iVar2 = FUN_0129d359(iVar1);
      if (iVar2 == 1) {
        iVar1 = FUN_0129d908(iVar1,param_3 + 0x1fU & 0xffffffe0,param_4 >> 3,param_2);
        iVar1 = (iVar1 != 0) - 1;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

// 012958D4  FUN_012958d4  size=396  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_012958d4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (DAT_020ae318 == (undefined *)0x0) {
    if (param_1 < 0) {
      FUN_01293f1f(0,"W2008071601:The numder of binder must be larger or equal zero.");
    }
    else {
      iVar1 = FUN_01294663();
      if ((iVar1 == 0) && (param_1 != 0)) {
        iVar1 = FUN_012945db(param_1,param_2);
        if (iVar1 <= param_4) {
          puVar3 = (undefined4 *)(param_3 + 0x1fU & 0xffffffe0);
          DAT_01b264a8 = 1;
          DAT_020ae76c = 0;
          iVar1 = param_1;
          DAT_020ae34c = puVar3;
          if (0 < param_1) {
            do {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3 = puVar3 + 2;
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          uVar4 = (int)puVar3 + 0x1fU & 0xffffffe0;
          _memset(&DAT_020ae180,0,0x40);
          _memset(&DAT_020ae208,0,0x10);
          _DAT_020ae180 = 0;
          _DAT_020ae188 = 0;
          _DAT_020ae1a4 = 0;
          _DAT_020ae184 = uVar4;
          FUN_0129436d();
          _DAT_020ae20c = param_3;
          _DAT_020ae1bc = &DAT_020ae208;
          _DAT_020ae198 = 1;
          _DAT_020ae19c = 7;
          _DAT_020ae1a0 = 2;
          _DAT_020ae210 = param_4;
          _DAT_020ae208 = 0;
          DAT_020ae324 = 0;
          DAT_020ae328 = 0;
          DAT_020ae32c = 0;
          DAT_020ae330 = 0;
          DAT_020ae334 = 0;
          DAT_020ae338 = 0;
          _DAT_020ae214 = uVar4;
          if (param_1 < 1) {
            DAT_020ae31c = 0;
          }
          else {
            DAT_020ae31c = FUN_012943cb(param_2);
          }
          DAT_020ae318 = &DAT_020ae180;
          DAT_020ae320 = param_2;
          FUN_01295478(0,0,0);
          return DAT_020ae31c;
        }
        FUN_01293f1f(0,"E2008071602:The designate work size is too small.");
        FUN_01294606();
      }
    }
    uVar2 = 0;
  }
  else {
    FUN_01293f1f(1,"W2008071691:The binder module has already been initialized.");
    uVar2 = DAT_020ae31c;
  }
  return uVar2;
}

// 01295A60  FUN_01295a60  size=85  [run]
undefined4 FUN_01295a60(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  
  if ((*unaff_EDI == 0) || (param_2 == 0)) {
LAB_01295ab0:
    uVar2 = 0;
  }
  else {
    if (unaff_EDI[7] != 0) {
      iVar1 = FUN_0129577b();
      if ((*(int *)(iVar1 + 0x18) == 4) || (*(int *)(iVar1 + 0x18) == 5)) goto LAB_01295ab0;
    }
    FUN_0129b774(param_1,1);
    FUN_0129c802(param_1,*unaff_EDI,param_2,0,0,0,0,0,0,0);
    uVar2 = 1;
  }
  return uVar2;
}

// 01295AB5  FUN_01295ab5  size=340  [run]
void __thiscall FUN_01295ab5(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *local_8;
  
  if (*(int *)(param_2 + 0x18) == 4) {
    local_8 = param_1;
    if (*(int *)(*(int *)(param_2 + 0x3c) + 0x1f0) != 0) {
      FUN_0129d733(*(int *)(param_2 + 0x3c) + 0x20);
      if (*(int *)(*(int *)(*(int *)(param_2 + 0x3c) + 0x1f0) + 8) != 0) {
        local_8 = (int *)0x0;
        iVar1 = thunk_FUN_0129ca5c(&local_8);
        if (iVar1 != 0) {
          FUN_01293f1f(0,"E2009061210:Cannot Create LoaderHn for close the primary cpk filehn.");
        }
        if (local_8 != (int *)0x0) {
          iVar1 = FUN_01295a60(local_8,*(undefined4 *)
                                        (*(int *)(*(int *)(param_2 + 0x3c) + 0x1f0) + 0x20));
          if (iVar1 != 0) {
            FUN_012947b8(local_8);
          }
          FUN_0129c89d(local_8);
        }
      }
      *(undefined4 *)(*(int *)(param_2 + 0x3c) + 0x1f0) = 0;
    }
    FUN_0129cd2d(*(int *)(param_2 + 0x3c) + 0x20);
  }
  else if (*(int *)(param_2 + 0x18) == 5) {
    piVar4 = *(int **)(param_2 + 0x3c);
    if (piVar4[2] != 0) {
      local_8 = piVar4;
      if (piVar4[3] != -1) {
        piVar2 = (int *)(piVar4[3] * 0x38 + piVar4[1]);
        FUN_01294d0d(piVar4[2],piVar2[0xb]);
        while ((*piVar2 != 2 && (*piVar2 != 6))) {
          FUN_0129b6c9();
          FUN_014996ef(1);
          FUN_01294d0d(piVar4[2],piVar2[0xb]);
        }
      }
      if (0 < *piVar4) {
        puVar3 = (undefined4 *)(*(int *)(*(int *)(param_2 + 0x3c) + 4) + 0x2c);
        param_2 = *piVar4;
        do {
          piVar4 = local_8;
          iVar1 = FUN_01295a60(local_8[2],*puVar3);
          if (iVar1 == 1) {
            FUN_012947b8(piVar4[2]);
          }
          puVar3 = puVar3 + 0xe;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      FUN_0129c89d(piVar4[2]);
      piVar4[2] = 0;
    }
  }
  return;
}

// 01295C09  FUN_01295c09  size=69  [run]
void FUN_01295c09(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_0129577b();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) == 3) {
      FUN_0129e87c(param_2,param_3,*(undefined4 *)(unaff_ESI + 0x18),param_1);
      return;
    }
    param_1 = *(undefined4 *)(unaff_ESI + 0x18);
  }
  FUN_0129e84c(param_2,param_3,param_1);
  return;
}

// 01295C4E  FUN_01295c4e  size=65  [run]
void FUN_01295c4e(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  
  if ((((param_2 != 1) && (in_EAX != 0)) && (*(int *)(in_EAX + 0x18) == 2)) &&
     (*(int *)(in_EAX + 0x28) != 0)) {
    FUN_0129e87c(param_3,param_4,*(int *)(in_EAX + 0x28),param_1);
    return;
  }
  FUN_01295c09(param_1,param_3,param_4);
  return;
}

// 01295CF7  FUN_01295cf7  size=342  [run]
int FUN_01295cf7(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar5 = FUN_0129577b();
  if (iVar5 == 0) {
    FUN_01293f69(0,"E2009110201",0xfffffffe);
    return -2;
  }
  if (*(int *)(iVar5 + 0x1c) == 3) {
    puVar2 = *(undefined4 **)(iVar5 + 0x3c);
    piVar3 = (int *)puVar2[0x7c];
    if (piVar3 == (int *)0x0) {
      return -1;
    }
    if (*piVar3 != 2) {
      iVar6 = FUN_0129577b();
      if (iVar6 == 0) {
        if (piVar3[2] != 0) {
          local_8 = 0;
          iVar6 = thunk_FUN_0129ca5c(&local_8);
          if (iVar6 != 0) {
            FUN_01293f1f(0,"E2009110202:Cannot Create LoaderHn for close the primary cpk filehn.");
          }
          if (local_8 != 0) {
            iVar6 = FUN_01295a60(local_8,piVar3[8]);
            if (iVar6 != 0) {
              FUN_012947b8(local_8);
            }
            FUN_0129c89d(local_8);
          }
        }
        *piVar3 = 1;
        FUN_01294b40(piVar3);
        if (*piVar3 == 6) {
          return 0;
        }
      }
      else {
        piVar3[0xd] = 0;
        *piVar3 = 2;
      }
      iVar6 = FUN_012a03b4();
      if (iVar6 == 1) {
        puVar1 = puVar2 + 8;
        FUN_0129cd2d(puVar1);
        uVar4 = DAT_020ae33c;
        *(undefined4 *)(iVar5 + 0x20) = 1;
        *puVar2 = 0;
        FUN_012941d9(uVar4);
        FUN_0129d96d(puVar1,puVar2[0x79],puVar2[0x7a]);
        FUN_0129420c(DAT_020ae33c);
        iVar5 = FUN_0129dfc1(puVar1,puVar2[0x78],puVar2);
        return (iVar5 != 0) - 1;
      }
      if (*piVar3 != 2) {
        puVar2[0x7b] = puVar2[0x7b] | 1;
        *(undefined4 *)(iVar5 + 0x20) = 1;
      }
    }
    return 0;
  }
  return -1;
}

// 01295E4D  FUN_01295e4d  size=81  [run]
uint FUN_01295e4d(void)

{
  uint uVar1;
  int in_EAX;
  
  while( true ) {
    uVar1 = *(uint *)(in_EAX + 0x3c);
    if (uVar1 == 0) {
      return 0;
    }
    if (*(int *)(in_EAX + 0x1c) == 2) {
      return uVar1;
    }
    if (*(int *)(in_EAX + 0x1c) != 3) {
      return 0;
    }
    if (*(int *)(uVar1 + 0x1f0) == 0) break;
    if ((*(int *)(*(int *)(uVar1 + 0x1f0) + 0x24) == 0) || (in_EAX = FUN_0129577b(), in_EAX == 0)) {
      return ~-(uint)(**(int **)(uVar1 + 0x1f0) != 2) & uVar1;
    }
  }
  return 0;
}

// 01295E9E  FUN_01295e9e  size=44  [run]
int FUN_01295e9e(void)

{
  int iVar1;
  
  iVar1 = FUN_0129577b();
  if ((((iVar1 != 0) && (iVar1 = FUN_01294b8f(), iVar1 != 0)) && (*(int *)(iVar1 + 0x1f0) != 0)) &&
     (iVar1 = *(int *)(*(int *)(iVar1 + 0x1f0) + 0x28), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}

// 01295ECA  FUN_01295eca  size=80  [run]
undefined4 FUN_01295eca(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0129577b();
  if (iVar1 == 0) {
    FUN_01293f69(0,"E2009032601",0xfffffffe);
    uVar3 = 0xfffffffe;
  }
  else {
    iVar2 = FUN_01294b8f();
    if ((iVar2 != 0) && (*(int *)(iVar1 + 0x1c) != 2)) {
      **(undefined4 **)(iVar2 + 0x1f0) = 5;
      *(undefined4 *)(*(int *)(iVar2 + 0x1f0) + 0x34) = param_2;
    }
    uVar3 = 0;
  }
  return uVar3;
}

// 01295F1A  FUN_01295f1a  size=89  [run]
undefined4 FUN_01295f1a(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_01293f69(0,"E2009063001",0xfffffffe);
    return 0xfffffffe;
  }
  *param_2 = 0;
  iVar1 = FUN_0129577b();
  if (iVar1 == 0) {
    FUN_01293f69(1,"E2009032701",0xfffffffe);
  }
  else {
    iVar1 = FUN_01294b8f();
    if (iVar1 != 0) {
      *param_2 = 1;
    }
  }
  return 0;
}

// 01295FE3  FUN_01295fe3  size=381  [run]
void FUN_01295fe3(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x18) == 4) {
    if (*(int *)(param_1 + 0x20) == 5) {
      return;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x3c);
    if (puVar2[0x7c] != 0) {
      iVar7 = FUN_01294ab5(param_1);
      if (iVar7 != 0) {
        return;
      }
      uVar3 = puVar2[0x7b];
      if ((uVar3 & 1) != 0) {
        puVar2[0x7b] = uVar3 & 0xfffffffe;
        goto LAB_012960c1;
      }
    }
    puVar4 = puVar2 + 8;
    do {
      iVar7 = FUN_0129daca(puVar4);
    } while (iVar7 != 0);
    iVar7 = FUN_0129d0d3(puVar4);
    if (iVar7 == 0x12) {
      uVar6 = FUN_0129d377(puVar4);
      *puVar2 = uVar6;
      uVar6 = FUN_0129d3a5(puVar4);
      puVar2[6] = uVar6;
      *(undefined4 *)(param_1 + 0x20) = 2;
      puVar4 = (undefined4 *)puVar2[0x7c];
      if (puVar4 != (undefined4 *)0x0) {
        if (puVar2[0x71] == 0) {
          iVar7 = FUN_01294dbb();
          if (iVar7 != 1) {
            *(undefined4 *)puVar2[0x7c] = 6;
            FUN_01295eca(*(undefined4 *)(param_1 + 0x14),2);
          }
        }
        else {
          *puVar4 = 6;
          if (puVar4[0xd] == 0) {
            puVar4[0xd] = (puVar2[0x71] != 2) + 1;
          }
        }
      }
    }
    else if (iVar7 == -1) {
      *(undefined4 *)(param_1 + 0x20) = 6;
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 5) {
      return;
    }
    piVar1 = *(int **)(param_1 + 0x3c);
    if (-1 < piVar1[3]) {
      piVar5 = (int *)(piVar1[3] * 0x38 + piVar1[1]);
      FUN_01294d0d(piVar1[2],piVar5[0xb]);
      if ((*piVar5 != 2) && (*piVar5 != 6)) {
        return;
      }
      iVar7 = piVar1[3];
      do {
        if (*piVar1 <= iVar7) {
LAB_01296063:
          if (iVar7 != *piVar1) {
            return;
          }
          piVar1[3] = -1;
          *(undefined4 *)(param_1 + 0x20) = 2;
          FUN_0129b524(piVar1[2],0,0);
          return;
        }
        if (*piVar5 == 1) {
          FUN_0129c6e2(piVar1[2],0,piVar5[0xb],0,0,0,0,0,0,0);
          piVar1[3] = iVar7;
          goto LAB_01296063;
        }
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 0xe;
      } while( true );
    }
LAB_012960c1:
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  return;
}

// 01296160  FUN_01296160  size=390  [run]
undefined4 FUN_01296160(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = param_1;
  if (param_1[6] != 4) {
    if (param_1[6] != 5) {
      return 0;
    }
    piVar2 = (int *)param_1[0xf];
    iVar5 = piVar2[1];
    if (piVar2[2] != 0) {
      if (-1 < piVar2[3]) {
        iVar4 = FUN_01294798(piVar2[2]);
        if (iVar4 != 2) {
          return 1;
        }
        iVar5 = iVar5 + piVar2[3] * 0x38;
        *(undefined4 *)(iVar5 + 8) = 0;
      }
      if (piVar2[3] == -1) {
        piVar2[3] = 0;
      }
      iVar4 = piVar2[3];
      if (iVar4 < *piVar2) {
        param_1 = (undefined4 *)(iVar5 + 0x2c);
        do {
          iVar5 = FUN_01295a60(piVar2[2],*param_1);
          if (iVar5 == 1) {
            piVar2[3] = iVar4;
            return 1;
          }
          param_1 = param_1 + 0xe;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *piVar2);
      }
      FUN_0129c89d(piVar2[2]);
      piVar2[2] = 0;
      return 0;
    }
    return 0;
  }
  piVar2 = *(int **)(param_1[0xf] + 0x1f0);
  if (piVar2 == (int *)0x0) goto LAB_012962bc;
  if (piVar2[2] != 0) {
    if (*piVar2 == 2) {
      piVar1 = piVar2 + 0xb;
      if (*piVar1 == 0) {
        iVar5 = thunk_FUN_0129ca5c(piVar1);
        if (iVar5 != 0) {
          FUN_01293f1f(1,"W2010040710:Unbind:CPK:DB:Close:LoaderHn cannot create.");
          return 1;
        }
      }
      else {
        FUN_0129b6d6(*piVar1,&param_1);
        if (param_1 == (undefined4 *)0x1) {
          return 1;
        }
      }
      iVar5 = FUN_01295a60(*piVar1,piVar2[8]);
      if (iVar5 == 0) {
        *piVar2 = 4;
LAB_01296285:
        if (*piVar2 == 3) goto LAB_0129628a;
      }
      else {
        *piVar2 = 3;
LAB_0129628a:
        iVar5 = FUN_01294798(piVar2[0xb]);
        if (iVar5 != 2) {
          return 1;
        }
        *piVar2 = 4;
        param_1 = (undefined4 *)0x2;
      }
      FUN_0129c89d(piVar2[0xb]);
      piVar2[2] = 0;
      piVar2[0xb] = 0;
    }
    else if (*piVar2 == 3) goto LAB_01296285;
  }
  *(undefined4 *)(puVar3[0xf] + 0x1f0) = 0;
LAB_012962bc:
  iVar5 = FUN_0129da90(puVar3[0xf] + 0x20);
  if (iVar5 != 0) {
    FUN_0129cd41(puVar3[0xf] + 0x20);
    return 1;
  }
  return 0;
}

// 012962E6  FUN_012962e6  size=69  [run]
int FUN_012962e6(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  local_8 = **(int **)(in_EAX + 0x3c);
  piVar2 = (int *)(*(int **)(in_EAX + 0x3c))[1];
  iVar3 = 0;
  if (0 < local_8) {
    do {
      iVar1 = FUN_0129577b();
      if (((*piVar2 != 6) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x18) == 0)) {
        *piVar2 = 6;
        iVar3 = iVar3 + 1;
      }
      piVar2 = piVar2 + 0xe;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return iVar3;
}

// 0129632B  FUN_0129632b  size=143  [run]
int FUN_0129632b(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) {
    local_8 = 0;
  }
  else {
    do {
      iVar1 = *(int *)(param_1 + 4);
      if (*(int *)(param_1 + 0x20) == 0) {
        return local_8;
      }
      if (*(int *)(param_1 + 8) != 0) {
        iVar2 = FUN_0129632b(*(int *)(param_1 + 8),param_2);
        local_8 = local_8 + iVar2;
      }
      if (*(int *)(param_1 + 0x18) == 4) {
        iVar2 = FUN_0129577b();
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) == 0)) {
          FUN_012944d7(*(undefined4 *)(param_1 + 8),param_2);
          FUN_0129449a(param_2);
          local_8 = local_8 + 1;
        }
      }
      else if (*(int *)(param_1 + 0x18) == 5) {
        iVar2 = FUN_012962e6();
        local_8 = local_8 + iVar2;
      }
      param_1 = iVar1;
    } while (iVar1 != 0);
  }
  return local_8;
}

// 012963BA  FUN_012963ba  size=110  [run]
undefined4 FUN_012963ba(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0129577b();
  if (iVar1 == 0) {
    FUN_01293f1f(1,"W2008071661:The BinderId is already unbinded or ivalid binderid.");
    uVar2 = 0xfffffffe;
  }
  else if (*(int *)(iVar1 + 0x18) == 2) {
    FUN_01293f1f(0,"E2008122692:It is created by criFsBinder_Create.");
    uVar2 = 0xffffffff;
  }
  else {
    FUN_012941d9(DAT_020ae344);
    FUN_0129457f(iVar1,3);
    FUN_012945aa(iVar1,FUN_01296160);
    FUN_0129420c(DAT_020ae344);
    uVar2 = 0;
  }
  return uVar2;
}

// 01296428  FUN_01296428  size=1075  [run]
void __fastcall FUN_01296428(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_254 [8];
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 *local_224;
  int local_220;
  undefined4 *local_21c;
  int local_218;
  undefined4 *local_214;
  undefined1 local_210 [520];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)(local_210 + 0x3c);
  puVar7 = (undefined4 *)*param_2;
  local_210[0] = 0;
  local_224 = puVar7;
  local_21c = param_2;
  local_218 = param_1;
  _memset(local_210 + 1,0,0x207);
  param_2[10] = param_2[10] + 1;
  local_220 = 0;
  if (*(int *)(param_1 + 0x20) != 2) goto LAB_01296843;
  if (param_2[1] == 0) {
    if (*(int *)(param_1 + 0x18) != 4) goto LAB_01296843;
  }
  else {
    FUN_0129e87c(local_210,0x208,*(undefined4 *)(param_1 + 0x28),param_2[1]);
    local_220 = FUN_0129e719(local_210);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 3) {
    sVar4 = 0;
    local_224 = (undefined4 *)0x0;
    if ((param_2[3] == 0) &&
       ((*(char **)(param_1 + 0x28) == (char *)0x0 ||
        (sVar4 = _strlen(*(char **)(param_1 + 0x28)), sVar4 < 0x208)))) {
      uVar3 = param_2[1];
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      local_210[sVar4] = 0;
      FUN_0129e87c(local_210 + sVar4,0x208 - sVar4,uVar1,uVar3);
      iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 0x20);
      if ((iVar2 == 0) ||
         (FUN_01297dad(iVar2,local_210,1,local_254,0,&local_224), local_224 == (undefined4 *)0x0)) {
        if ((int)param_2[0x15] < 5) {
          param_2[param_2[0x15] * 2 + 0xb] = param_1;
          param_2[param_2[0x15] * 2 + 0xc] = param_2[10];
          param_2[0x15] = param_2[0x15] + 1;
        }
        else {
          FUN_01293f1f(1,"W20091203010:The number of box(5) is not enough.");
        }
      }
      else {
        if (puVar7 != (undefined4 *)0x0) {
          puVar8 = local_254;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        local_218 = FUN_0129577b();
      }
    }
    goto LAB_01296843;
  }
  if (iVar2 != 4) {
    if (iVar2 == 5) {
      local_21c = (undefined4 *)**(undefined4 **)(param_1 + 0x3c);
      piVar6 = (int *)(*(undefined4 **)(param_1 + 0x3c))[1];
      local_214 = (undefined4 *)0x0;
      if (0 < (int)local_21c) {
        do {
          if (((*piVar6 == 2) && (piVar6[0xc] == local_220)) &&
             (iVar2 = FUN_01294e23(piVar6[10],local_210), iVar2 == 1)) {
            if (local_224 != (undefined4 *)0x0) {
              puVar7 = local_254;
              puVar8 = local_224;
              for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              if (local_224[7] == 0) {
                local_224[7] = *(undefined4 *)(local_218 + 0x14);
              }
            }
            break;
          }
          local_214 = (undefined4 *)((int)local_214 + 1);
          piVar6 = piVar6 + 0xe;
        } while ((int)local_214 < (int)local_21c);
      }
    }
    goto LAB_01296843;
  }
  local_214 = *(undefined4 **)(param_1 + 0x3c);
  _memset(&local_234,0,0x10);
  if (((*(int *)(param_1 + 0x1c) == 3) && (*(int *)local_214[0x7c] == 2)) &&
     (iVar2 = FUN_01295e4d(), iVar2 == 0)) {
    iVar2 = FUN_0129577b();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == 3)) {
      puVar7 = *(undefined4 **)(iVar2 + 0x3c);
      puVar8 = local_214;
      for (iVar5 = 8; param_2 = local_21c, param_1 = local_218, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 *)local_214[0x7c] = 5;
    *(undefined4 *)(local_214[0x7c] + 0x34) = 2;
    puVar7 = local_224;
  }
  if (param_2[1] == 0) {
    FUN_01295077(&local_218,&local_220,&local_21c);
    if ((local_218 == 0) ||
       (iVar2 = FUN_0129d503(local_214 + 8,local_220,local_21c,param_2[2],&local_234), iVar2 != 1))
    {
      iVar2 = FUN_0129e1d1(local_214 + 8,&local_234,param_2[2]);
      goto LAB_01296694;
    }
  }
  else {
    iVar2 = FUN_01294f5c();
    if (iVar2 < 0) {
      FUN_01295077(&local_218,&local_220,&local_21c);
      if ((local_218 != 0) &&
         (iVar2 = FUN_0129d4bc(local_214 + 8,local_220,local_21c,local_210,&local_234), iVar2 == 1))
      goto LAB_0129669f;
      iVar2 = FUN_0129d150(local_214 + 8,&local_234,local_210);
    }
    else {
      iVar2 = FUN_0129d1dd(local_214 + 8,&local_234,iVar2);
    }
LAB_01296694:
    if (iVar2 == 0) goto LAB_01296843;
  }
LAB_0129669f:
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *local_214;
    puVar7[6] = local_214[6];
    puVar7[2] = local_22c;
    puVar7[3] = local_228;
    puVar7[4] = local_234;
    puVar7[5] = local_230;
    iVar2 = local_214[7];
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    puVar7[7] = iVar2;
    iVar2 = FUN_01295e4d();
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x1c) == 3) {
        param_2[4] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x1f0) + 8);
        param_2[5] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x1f0) + 0x20);
        iVar2 = (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x1f0) + 0x10) -
                *(int *)(*(int *)(param_1 + 0x3c) + 8)) + puVar7[2];
        param_2[6] = iVar2;
        param_2[7] = iVar2 >> 0x1f;
        param_2[9] = *(undefined4 *)(param_1 + 0x14);
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x1f0) + 0x24) == 0) {
          uVar3 = *(undefined4 *)(param_1 + 0x14);
        }
        else {
          uVar3 = puVar7[7];
        }
        param_2[8] = uVar3;
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x1f0) + 0x24) == 0) {
          puVar7[7] = *(undefined4 *)(param_1 + 0x14);
        }
      }
      else {
        param_2[4] = *puVar7;
        param_2[5] = puVar7[6];
        param_2[6] = puVar7[2];
        param_2[7] = puVar7[3];
        param_2[9] = *(undefined4 *)(param_1 + 0x14);
        param_2[8] = puVar7[7];
      }
    }
  }
LAB_01296843:
  __security_check_cookie(local_8 ^ (uint)(local_210 + 0x3c));
  return;
}

// 0129685B  FUN_0129685b  size=60  [run]
int FUN_0129685b(int param_1,undefined4 param_2)

{
  int iVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_01296428();
    if (iVar1 != 0) break;
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar1 = FUN_0129685b(*(int *)(param_1 + 8),param_2), iVar1 != 0)) {
      return iVar1;
    }
    param_1 = *(int *)(param_1 + 4);
  }
  return param_1;
}

// 012968B5  FUN_012968b5  size=58  [run]
undefined4 FUN_012968b5(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  iVar1 = FUN_0129577b();
  if (iVar1 == 0) {
    FUN_01293f69(0,"E2008071670",0xfffffffe);
    return 0xfffffffe;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return 0;
}

// 012968EF  FUN_012968ef  size=83  [run]
undefined4 FUN_012968ef(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0129577b();
  if ((iVar1 == 0) || (param_2 == (undefined4 *)0x0)) {
    FUN_01293f69(0,"E2008073182",0xfffffffe);
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_012941d9(DAT_020ae33c);
    uVar2 = DAT_020ae33c;
    *param_2 = *(undefined4 *)(iVar1 + 0x10);
    FUN_0129420c(uVar2);
    uVar2 = 0;
  }
  return uVar2;
}

// 012969A9  FUN_012969a9  size=216  [run]
undefined4 FUN_012969a9(char *param_1,int param_2)

{
  undefined4 uVar1;
  int in_EAX;
  size_t sVar2;
  int unaff_ESI;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (unaff_ESI == 0) {
    FUN_01293f69();
    return 0xfffffffe;
  }
  FUN_012941d9(DAT_020ae33c);
  uVar1 = DAT_020ae33c;
  iVar3 = *(int *)(unaff_ESI + 0x34);
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  FUN_0129420c(uVar1);
  if (iVar3 != 0) {
    FUN_01295401(iVar3);
  }
  if (param_1 != (char *)0x0) {
    sVar2 = _strlen(param_1);
    iVar3 = sVar2 + 1;
    if (in_EAX == 0) {
      in_EAX = FUN_012953c4(iVar3);
      local_8 = in_EAX;
      if (in_EAX == 0) {
        FUN_01293f1f(0,"E2009072340:the work memory cannot allocated.");
        return 0xffffffff;
      }
    }
    else if (param_2 < iVar3) {
      FUN_01293f1f(0,"E2008090111:the worksize is not enough.");
      return 0xfffffffe;
    }
    FUN_012941d9(DAT_020ae33c);
    *(int *)(unaff_ESI + 0x28) = in_EAX;
    *(int *)(unaff_ESI + 0x34) = local_8;
    FUN_0129e84c(in_EAX,iVar3,param_1);
    FUN_0129420c(DAT_020ae33c);
  }
  return 0;
}

// 01296A81  FUN_01296a81  size=35  [run]
void FUN_01296a81(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0129577b();
  FUN_012969a9(param_2,param_4);
  return;
}

// 01296AC9  FUN_01296ac9  size=184  [run]
int FUN_01296ac9(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_1 == 0) {
    FUN_01293f69(0,"E2009022710",0xfffffffe);
    iVar2 = -2;
  }
  else {
    FUN_012941d9(DAT_020ae33c);
    FUN_012968b5(param_1,&local_8);
    if (local_8 == 0) {
      FUN_01293f1f(0,"E2009022711:This BinderId is invalid.");
    }
    else {
      uVar1 = FUN_01294f9f();
      iVar2 = FUN_0129d33b(uVar1);
      if (iVar2 != 0) {
        FUN_0129d5aa(uVar1,param_2,param_3,&local_c,&local_14);
      }
    }
    FUN_0129420c(DAT_020ae33c);
    if (param_4 != (int *)0x0) {
      if (local_c < 0) {
        local_c = 0;
      }
      *param_4 = local_c;
    }
    iVar2 = (local_8 != 0) - 1;
  }
  return iVar2;
}

// 01296B81  FUN_01296b81  size=191  [run]
int FUN_01296b81(int param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  int local_8;
  
  puVar2 = param_4;
  uVar1 = DAT_020ae33c;
  if (param_1 == 0) {
    FUN_01293f69(0,"E2011122201",0xfffffffe);
    local_8 = -2;
  }
  else if (param_4 == (undefined8 *)0x0) {
    FUN_01293f69(0,"E2011122202",0xfffffffe);
    local_8 = -2;
  }
  else {
    *(undefined4 *)param_4 = 0;
    *(undefined4 *)((int)param_4 + 4) = 0;
    FUN_012941d9(uVar1);
    local_8 = FUN_012968b5(param_1,&param_1);
    if (((local_8 == 0) && (iVar3 = FUN_01294fbd(param_1), iVar3 != 0)) &&
       (iVar4 = FUN_0129d33b(iVar3), iVar4 != 0)) {
      FUN_0129d5aa(iVar3,param_2,param_3,local_c,&local_14);
      uVar5 = FUN_012a0b63(local_14,local_10);
      *puVar2 = uVar5;
    }
    FUN_0129420c(DAT_020ae33c);
  }
  return local_8;
}

// 01296C40  FUN_01296c40  size=41  [run]
void FUN_01296c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0129577b();
  FUN_0129518a(param_3);
  return;
}

// 01296C69  FUN_01296c69  size=44  [run]
void FUN_01296c69(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0129577b();
  FUN_0129518a(param_3);
  return;
}

// 01296C95  FUN_01296c95  size=72  [run]
undefined4 FUN_01296c95(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar1 = FUN_0129577b();
  if ((iVar1 != 0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_01294b8f();
    if (iVar1 != 0) {
      *param_2 = 1;
    }
    return 0;
  }
  FUN_01293f69(0,"E2009041500",0xfffffffe);
  return 0xfffffffe;
}

// 01296CDD  FUN_01296cdd  size=55  [run]
undefined4 FUN_01296cdd(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0129577b();
  if ((iVar1 == 0) || (param_2 == 0)) {
    FUN_01293f69(0,"E2008112503",0xfffffffe);
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = FUN_0129529a();
  }
  return uVar2;
}

// 01296D1E  FUN_01296d1e  size=38  [run]
undefined4 FUN_01296d1e(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0129577b();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 4)) {
    uVar2 = FUN_012a001d(*(int *)(iVar1 + 0x3c) + 0x48);
    return uVar2;
  }
  return 0;
}

// 01296D44  FUN_01296d44  size=38  [run]
undefined4 FUN_01296d44(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0129577b();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 4)) {
    uVar2 = FUN_012a0029(*(int *)(iVar1 + 0x3c) + 0x48);
    return uVar2;
  }
  return 0;
}

// 01296D6A  FUN_01296d6a  size=34  [run]
undefined4 FUN_01296d6a(void)

{
  int iVar1;
  
  iVar1 = FUN_0129577b();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 4)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0xac);
  }
  return 0;
}

// 01296D8C  FUN_01296d8c  size=190  [run]
undefined4 FUN_01296d8c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_8;
  
  iVar2 = FUN_0129577b();
  if (iVar2 == 0) {
    FUN_01293f69(0,"E2011081101",0xfffffffe);
    uVar3 = 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x3c);
    if (((*(int *)(iVar2 + 0x1c) == 2) || (*(int *)(iVar2 + 0x1c) == 3)) && (iVar1 != 0)) {
      local_8 = param_2;
      if (param_2 < param_2 + param_4) {
        puVar4 = (undefined4 *)(param_3 + 8);
        do {
          FUN_0129deee(iVar1 + 0x20,&local_30,local_8);
          puVar4[-2] = local_30;
          puVar4[-1] = local_2c;
          *puVar4 = local_28;
          puVar4[1] = local_24;
          puVar4[2] = local_20;
          puVar4[3] = local_1c;
          puVar4[4] = local_18;
          puVar4[5] = local_14;
          puVar4 = puVar4 + 8;
          local_8 = local_8 + 1;
        } while (local_8 < param_2 + param_4);
      }
      uVar3 = 0;
    }
    else {
      FUN_01293f1f(0,"E2011081102:No Cpk Binder.");
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

// 01296E4A  FUN_01296e4a  size=209  [run]
undefined4 FUN_01296e4a(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  int local_4;
  
  iVar4 = DAT_020ae76c;
  puVar3 = DAT_020ae34c;
  iVar9 = 0;
  if (DAT_020ae34c == (uint *)0x0) {
    return 0;
  }
  if (DAT_020ae31c <= DAT_020ae76c) {
    FUN_01293f1f(0,"E2009042400:BinderIdList overflow.");
    return 0;
  }
  while (uVar2 = DAT_01b264a8, iVar5 = FUN_01295736(), iVar5 != 0) {
    FUN_012956b3();
    bVar1 = 1000 < iVar9;
    iVar9 = iVar9 + 1;
    if (bVar1) {
      return 0;
    }
  }
  iVar9 = 0;
  puVar7 = puVar3;
  if ((iVar4 != 0) && (puVar7 = puVar3 + iVar4 * 2, uVar2 <= (puVar3 + iVar4 * 2)[-2])) {
    if (uVar2 < *puVar3) {
      local_4 = 0;
    }
    else {
      local_4 = 0;
      iVar5 = iVar4 + -1;
      if (-1 < iVar5) {
        do {
          iVar6 = (iVar5 + iVar9) / 2;
          if (puVar3[iVar6 * 2] < uVar2) {
            if (uVar2 < puVar3[iVar6 * 2 + 2]) {
              local_4 = iVar6 + 1;
              break;
            }
            iVar9 = iVar6 + 1;
          }
          else {
            iVar5 = iVar6 + -1;
          }
        } while (iVar9 <= iVar5);
      }
    }
    puVar7 = (uint *)FUN_012956ce(local_4);
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  *puVar7 = uVar2;
  puVar7[1] = param_1;
  uVar8 = FUN_012956b3();
  DAT_020ae76c = iVar4 + 1;
  return uVar8;
}

// 01296F1B  FUN_01296f1b  size=101  [run]
void FUN_01296f1b(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  *(undefined4 *)(in_EAX + 0x14) = 0;
  puVar1 = (undefined4 *)FUN_01295736();
  iVar3 = DAT_020ae76c;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)puVar1 - DAT_020ae34c;
    *puVar1 = 0;
    uVar4 = (iVar3 - (iVar2 >> 3)) - 1;
    puVar1[1] = 0;
    if (0 < (int)uVar4) {
      puVar5 = puVar1 + 2;
      puVar6 = puVar1;
      for (iVar3 = (uVar4 & 0x1fffffff) * 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar1 = puVar1 + uVar4 * 2;
    }
    DAT_020ae76c = DAT_020ae76c + -1;
    bVar7 = DAT_020ae76c < 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    if (bVar7) {
      FUN_01293f1f(0,"E2009011310:BinderIdList error.");
    }
  }
  return;
}

// 01296F80  FUN_01296f80  size=12  [run]
void FUN_01296f80(void)

{
  FUN_0129577b();
  return;
}

// 01296F8C  FUN_01296f8c  size=120  [run]
int * FUN_01296f8c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  if (DAT_020ae318 == 0) {
    FUN_01293f1f(0,"E2008080111:The binder module is not initialized.");
    return (int *)0x0;
  }
  piVar3 = *(int **)(DAT_020ae318 + 4);
  if (piVar3 != (int *)0x0) {
    do {
      if (piVar3[6] == 0) break;
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if ((piVar3 != (int *)0x0) && (iVar1 = FUN_01296e4a(piVar3), iVar1 != 0)) {
      *(int *)(*piVar3 + 4) = piVar3[1];
      if ((int *)piVar3[1] != (int *)0x0) {
        *(int *)piVar3[1] = *piVar3;
      }
      piVar3[1] = 0;
      iVar1 = *(int *)(unaff_EDI + 8);
      if (*(int *)(unaff_EDI + 8) == 0) {
        *(int **)(unaff_EDI + 8) = piVar3;
        *piVar3 = unaff_EDI;
      }
      else {
        do {
          iVar2 = iVar1;
          iVar1 = *(int *)(iVar2 + 4);
        } while (*(int *)(iVar2 + 4) != 0);
        *(int **)(iVar2 + 4) = piVar3;
        *piVar3 = iVar2;
      }
      return piVar3;
    }
  }
  return (int *)0x0;
}

// 01297004  FUN_01297004  size=114  [run]
void FUN_01297004(void)

{
  int *piVar1;
  int *piVar2;
  int *unaff_ESI;
  
  piVar1 = DAT_020ae318;
  if (((DAT_020ae318 != (int *)0x0) && (DAT_020ae318 != unaff_ESI)) && (unaff_ESI[6] != 0)) {
    if ((code *)unaff_ESI[3] != (code *)0x0) {
      (*(code *)unaff_ESI[3])();
    }
    if (unaff_ESI[0xe] != 0) {
      FUN_01295401(unaff_ESI[0xe]);
      unaff_ESI[0xe] = 0;
    }
    if (unaff_ESI[0xd] != 0) {
      FUN_01295401(unaff_ESI[0xd]);
      unaff_ESI[0xd] = 0;
    }
    FUN_0129439d();
    for (piVar2 = (int *)piVar1[1]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      piVar1 = piVar2;
    }
    piVar1[1] = (int)unaff_ESI;
    *unaff_ESI = (int)piVar1;
    FUN_01296f1b();
    FUN_0129436d();
    return;
  }
  return;
}

// 01297076  FUN_01297076  size=40  [run]
void FUN_01297076(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01297076(*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_01297076(*(int *)(param_1 + 4));
  }
  FUN_01297004();
  return;
}

// 0129709E  FUN_0129709e  size=96  [run]
undefined4 FUN_0129709e(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)**(undefined4 **)(DAT_020ae318 + 0x3c);
  if (piVar2 != (int *)0x0) {
    do {
      if (piVar2 == param_1) break;
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      piVar1 = (int *)piVar2[1];
      piVar3 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        *piVar1 = *piVar2;
        piVar3 = piVar1;
      }
      piVar2[1] = 0;
      *piVar2 = 0;
      FUN_01297004();
      if (piVar2 == (int *)**(undefined4 **)(DAT_020ae318 + 0x3c)) {
        **(undefined4 **)(DAT_020ae318 + 0x3c) = piVar3;
      }
      return 1;
    }
  }
  return 0;
}

// 012970FE  FUN_012970fe  size=87  [run]
void FUN_012970fe(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)**(undefined4 **)(DAT_020ae318 + 0x3c);
  piVar4 = (int *)0x0;
  while (piVar3 = piVar1, piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[1];
    if (piVar3[0xc] == param_1) {
      if (*piVar3 != 0) {
        *(int **)(*piVar3 + 4) = piVar1;
      }
      piVar2 = (int *)piVar3[1];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar3;
      }
      FUN_01297004();
    }
    else if (piVar4 == (int *)0x0) {
      piVar4 = piVar3;
    }
  }
  **(undefined4 **)(DAT_020ae318 + 0x3c) = piVar4;
  return;
}

// 01297155  FUN_01297155  size=102  [run]
int FUN_01297155(void)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_020ae334 < DAT_020ae324) {
    iVar1 = FUN_01296f8c();
    if (iVar1 != 0) {
      DAT_020ae334 = DAT_020ae334 + 1;
      if (DAT_020ae32c < DAT_020ae334) {
        DAT_020ae32c = DAT_020ae334;
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 2;
      *(undefined4 *)(iVar1 + 0x1c) = 7;
      *(undefined4 *)(iVar1 + 0x20) = 2;
      return iVar1;
    }
    pcVar2 = 
    "E2008082611:Can not allocate binder handle. (Increase num_binders of CriFsConfiguration.)";
  }
  else {
    pcVar2 = "E2008121601:No more binder handle. (Increase num_binders of CriFsConfiguration.)";
  }
  FUN_01293f1f(0,pcVar2);
  return 0;
}

// 012971BB  FUN_012971bb  size=119  [run]
int FUN_012971bb(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  iVar1 = FUN_0129434f();
  if (iVar1 != 0) {
    return -1;
  }
  if (param_1 == (int *)0x0) {
    FUN_01293f69(0,"E2008091110",0xfffffffe);
    return -2;
  }
  FUN_012941d9(DAT_020ae344);
  FUN_012941d9(DAT_020ae33c);
  iVar1 = FUN_01297155();
  FUN_0129420c(DAT_020ae33c);
  FUN_0129420c(DAT_020ae344);
  *param_1 = iVar1;
  return (iVar1 != 0) - 1;
}

// 01297232  FUN_01297232  size=187  [run]
int FUN_01297232(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int in_EAX;
  int iVar1;
  
  if (in_EAX == 0) {
    in_EAX = DAT_020ae318;
  }
  if (*(int *)(in_EAX + 0x18) != 0) {
    if (DAT_020ae338 < DAT_020ae328) {
      iVar1 = FUN_01296f8c();
      if (iVar1 == 0) {
        FUN_01293f1f(0,
                     "E2008082621:No more resources for binding. (Increase max_binds of CriFsConfiguration.)"
                    );
        return 0;
      }
      DAT_020ae338 = DAT_020ae338 + 1;
      if (DAT_020ae330 < DAT_020ae338) {
        DAT_020ae330 = DAT_020ae338;
      }
      if (param_1 != 0) {
        FUN_0129e84c(*(undefined4 *)(iVar1 + 0x24),DAT_020ae320,param_1);
      }
      *(undefined4 *)(iVar1 + 0x18) = param_4;
      *(undefined4 *)(iVar1 + 0x1c) = param_5;
      *(undefined4 *)(iVar1 + 0x38) = param_3;
      *(uint *)(iVar1 + 0x3c) = param_2 + 0x1fU & 0xffffffe0;
      *(code **)(iVar1 + 0xc) = FUN_01295ab5;
      *(undefined4 *)(iVar1 + 0x20) = 1;
      return iVar1;
    }
    FUN_01293f1f(0,
                 "E2008121602:No more resources for binding. (Increase max_binds of CriFsConfiguration.)"
                );
  }
  return 0;
}

// 012972ED  FUN_012972ed  size=300  [run]
undefined4
FUN_012972ed(undefined4 param_1,undefined4 param_2,int param_3,void *param_4,size_t param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  void *local_8;
  
  puVar2 = param_6;
  local_8 = (void *)0x0;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  iVar3 = FUN_0129434f();
  if (iVar3 == 0) {
    if ((param_3 == 0) || (puVar2 == (undefined4 *)0x0)) {
      pcVar4 = "E2008071640";
LAB_01297408:
      FUN_01293f69(0,pcVar4,0xfffffffe);
      return 0xfffffffe;
    }
    if (param_4 == (void *)0x0) {
      FUN_01294ce8(param_2,param_3,&param_5);
      param_4 = (void *)FUN_012953c4(param_5);
      local_8 = param_4;
      if (param_4 == (void *)0x0) {
        return 0xffffffff;
      }
    }
    else if ((int)param_5 < 0x48) {
      pcVar4 = "E2008071641";
      goto LAB_01297408;
    }
    _memset(param_4,0,param_5);
    FUN_012941d9(DAT_020ae344);
    FUN_012941d9(DAT_020ae33c);
    iVar3 = FUN_01297232(param_3,param_4,local_8,3,1);
    FUN_0129420c(DAT_020ae33c);
    FUN_0129420c(DAT_020ae344);
    if (iVar3 != 0) {
      FUN_0129e761(*(undefined4 *)(iVar3 + 0x24),DAT_020ae320);
      iVar1 = *(int *)(iVar3 + 0x3c);
      FUN_012945f5(iVar1);
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(iVar1 + 0x20) = param_2;
      *(undefined4 *)(iVar3 + 0x20) = 2;
      *param_6 = *(undefined4 *)(iVar3 + 0x14);
      return 0;
    }
    if (local_8 != (void *)0x0) {
      FUN_01295401(local_8);
    }
  }
  return 0xffffffff;
}

// 0129745E  FUN_0129745e  size=229  [run]
int FUN_0129745e(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  FUN_012941d9(DAT_020ae340);
  FUN_012941d9(DAT_020ae33c);
  iVar1 = FUN_0129471d();
  iVar2 = FUN_0129709e();
  if ((iVar2 == 0) && (*(int *)(in_EAX + 0x18) != 0)) {
    FUN_012944d7(*(undefined4 *)(in_EAX + 8),param_1);
    FUN_0129449a(param_1);
    do {
      iVar2 = FUN_0129632b(*(undefined4 *)(DAT_020ae318 + 8),0);
    } while (iVar2 != 0);
    FUN_0129420c(DAT_020ae33c);
    if (**(int **)(DAT_020ae318 + 0x3c) != 0) {
      FUN_01294514(**(int **)(DAT_020ae318 + 0x3c));
    }
    FUN_012941d9(DAT_020ae33c);
    FUN_0129709e();
    FUN_012970fe(param_1);
    for (iVar2 = **(int **)(DAT_020ae318 + 0x3c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      *(undefined4 *)(iVar2 + 0x30) = 0;
    }
  }
  iVar2 = FUN_0129471d();
  FUN_0129420c(DAT_020ae33c);
  FUN_0129420c(DAT_020ae340);
  return iVar2 - iVar1;
}

// 01297543  FUN_01297543  size=105  [run]
undefined4 FUN_01297543(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0129577b();
  if (iVar1 == 0) {
    FUN_01293f1f(1,"W2008071660:The BinderId is already unbinded or ivalid binderid.");
    uVar2 = 0xfffffffe;
  }
  else if (*(int *)(iVar1 + 0x18) == 2) {
    FUN_01293f1f(0,"E2008122691:It is created by criFsBinder_Create.");
    uVar2 = 0xffffffff;
  }
  else {
    FUN_012941d9(DAT_020ae344);
    iVar1 = FUN_0129745e(param_1);
    DAT_020ae338 = DAT_020ae338 - iVar1;
    FUN_0129420c(DAT_020ae344);
    uVar2 = 0;
  }
  return uVar2;
}

// 012975AC  FUN_012975ac  size=81  [run]
undefined4 FUN_012975ac(void)

{
  int iVar1;
  
  FUN_012941d9(DAT_020ae340);
  for (iVar1 = **(int **)(DAT_020ae318 + 0x3c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  FUN_012941d9(DAT_020ae33c);
  FUN_012970fe(0);
  FUN_0129420c(DAT_020ae33c);
  FUN_0129420c(DAT_020ae340);
  return 0;
}

// 012975FD  FUN_012975fd  size=100  [run]
undefined4 FUN_012975fd(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EDI;
  int local_8;
  
  if (*(int *)(in_EAX + 0x1c) != 2) {
    return 1;
  }
  if ((*(byte *)(*(int *)(in_EAX + 0x3c) + 0x1ec) & 2) == 0) {
    uVar2 = 1;
  }
  else {
    FUN_01296c95(*(undefined4 *)(*(int *)(in_EAX + 0x3c) + 0x1c),&local_8);
    if (local_8 == 0) {
      unaff_EDI[4] = 0;
      unaff_EDI[9] = 0;
    }
    if (*unaff_EDI != 0) {
      iVar3 = FUN_0129577b();
      if (iVar3 != 0) {
        puVar1 = *(undefined4 **)(iVar3 + 0x3c);
        *(undefined4 *)*unaff_EDI = *puVar1;
        *(undefined4 *)(*unaff_EDI + 0x18) = puVar1[6];
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

// 01297661  FUN_01297661  size=511  [run]
/* WARNING: Removing unreachable block (ram,0x01297787) */

void __thiscall FUN_01297661(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_ESI;
  longlong lVar4;
  size_t local_220;
  int local_21c;
  int *local_218;
  int local_214;
  undefined1 local_210 [104];
  undefined1 local_1a8 [416];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)local_1a8;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 != 0) {
    if ((unaff_ESI[2] == -1) && (unaff_ESI[1] == 0)) {
      FUN_01293f69(0,"E2008073160",0xfffffffe);
    }
    else {
      FUN_012941d9(DAT_020ae33c);
      local_214 = FUN_01296428();
      if (local_214 == 0) {
        local_214 = FUN_0129685b(*(undefined4 *)(param_1 + 8));
      }
      FUN_0129420c(DAT_020ae33c);
      local_21c = 0;
      if (0 < unaff_ESI[0x15]) {
        local_218 = unaff_ESI + 0xb;
        do {
          local_220 = 0;
          if (unaff_ESI[10] < local_218[1]) break;
          iVar3 = *local_218;
          if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == 3)) &&
             ((*(char **)(iVar3 + 0x28) == (char *)0x0 ||
              (local_220 = _strlen(*(char **)(iVar3 + 0x28)), local_220 < 0x208)))) {
            local_210[0] = 0;
            FUN_0129e87c(local_210,0x208,*(undefined4 *)(iVar3 + 0x28),0);
            iVar1 = unaff_ESI[1];
            local_210[local_220] = 0;
            FUN_0129e87c(local_210 + local_220,0x208 - local_220,*(undefined4 *)(iVar3 + 0x24),iVar1
                        );
            lVar4 = FUN_01294e74();
            if (0 < lVar4) {
              puVar2 = (undefined4 *)*unaff_ESI;
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = 0;
                puVar2[2] = 0;
                puVar2[3] = 0;
                puVar2[6] = *(undefined4 *)(*(int *)(iVar3 + 0x3c) + 0x18);
                puVar2[4] = (int)lVar4;
                puVar2[5] = (int)lVar4;
                puVar2[7] = *(undefined4 *)(iVar3 + 0x14);
              }
              unaff_ESI[4] = 0;
              unaff_ESI[9] = 0;
              local_214 = iVar3;
              break;
            }
          }
          local_21c = local_21c + 1;
          local_218 = local_218 + 2;
        } while (local_21c < unaff_ESI[0x15]);
      }
      if (((local_214 != 0) && (*(int *)(local_214 + 0x1c) == 2)) &&
         ((*(byte *)(*(int *)(local_214 + 0x3c) + 0x1ec) & 2) != 0)) {
        FUN_01296c95(*(undefined4 *)(*(int *)(local_214 + 0x3c) + 0x1c),&local_218);
        if (local_218 == (int *)0x0) {
          unaff_ESI[4] = 0;
          unaff_ESI[9] = 0;
        }
        if ((*unaff_ESI != 0) && (iVar3 = FUN_0129577b(), iVar3 != 0)) {
          puVar2 = *(undefined4 **)(iVar3 + 0x3c);
          *(undefined4 *)*unaff_ESI = *puVar2;
          *(undefined4 *)(*unaff_ESI + 0x18) = puVar2[6];
        }
      }
      if ((param_3 != (undefined4 *)0x0) && (local_214 != 0)) {
        *param_3 = 1;
      }
      if (param_2 != (int *)0x0) {
        *param_2 = local_214;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_1a8);
  return;
}

// 01297860  FUN_01297860  size=117  [run]
int FUN_01297860(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  undefined4 local_50 [5];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_c;
  int local_8;
  
  local_38 = 0;
  local_c = 0;
  local_50[0] = 0;
  local_3c = 0;
  local_8 = FUN_01297661(param_3,param_2);
  if ((local_8 == 0) && (unaff_EBX != 0)) {
    if (param_1 == (undefined4 *)0x0) {
      FUN_01294f7e();
    }
    else {
      puVar2 = local_50;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = *puVar2;
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
      }
    }
  }
  else if (param_1 != (undefined4 *)0x0) {
    _memset(param_1,0,0x18);
  }
  return local_8;
}

// 012978D5  FUN_012978d5  size=66  [run]
undefined4 FUN_012978d5(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != 0) {
    FUN_012945f5(param_3);
  }
  iVar1 = FUN_0129434f();
  if (iVar1 == 0) {
    uVar2 = FUN_01297860(0,param_4,0);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// 01297917  FUN_01297917  size=106  [run]
undefined4 FUN_01297917(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_28 [20];
  undefined4 local_14;
  int local_8;
  
  local_8 = 0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xffffffff;
    param_3[1] = 0xffffffff;
  }
  iVar1 = FUN_0129434f();
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      FUN_01293f69(0,"E2008073190",0xfffffffe);
      return 0xfffffffe;
    }
    FUN_012978d5(param_1,param_2,local_28,&local_8);
    if (local_8 != 0) {
      param_3[1] = 0;
      *param_3 = local_14;
      return 0;
    }
  }
  return 0xffffffff;
}

// 01297981  FUN_01297981  size=151  [run]
int FUN_01297981(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((param_1 == 0) || (param_3 == (void *)0x0)) {
    FUN_01293f69(0,"E2008111410",0xfffffffe);
    iVar1 = -2;
  }
  else {
    _memset(param_3,0,0x20);
    iVar1 = FUN_01297860(0,0,&local_8);
    if (iVar1 == 0) {
      if (local_8 == 0) {
        FUN_01293f1f(1,"W2008111810:The contents file specified ID not found in the binderhn.");
        iVar1 = -1;
      }
      else {
        FUN_012941d9(DAT_020ae33c);
        iVar1 = FUN_01295104(0,param_2);
        FUN_0129420c(DAT_020ae33c);
      }
    }
  }
  return iVar1;
}

// 01297A18  FUN_01297a18  size=104  [run]
void __thiscall
FUN_01297a18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_012947eb(param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_01294f5c();
    if (iVar1 < 0) {
      FUN_0129577b();
      FUN_0129518a(param_4);
    }
    else {
      FUN_01296c40(param_2,iVar1,param_4);
    }
  }
  else {
    FUN_01296c69(param_2,param_1,param_4);
  }
  return;
}

// 01297A80  FUN_01297a80  size=368  [run]
int FUN_01297a80(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  FUN_012945f5(local_44);
  iVar1 = FUN_01297860(&local_24,&local_8,0);
  if ((local_28 == 0) || (iVar1 != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      _memset(param_3,0,0x40);
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_44[0];
      param_3[2] = local_3c;
      param_3[9] = local_28;
      param_3[3] = local_38;
      param_3[4] = local_34;
      param_3[8] = local_2c;
      param_3[5] = 0;
      param_3[6] = local_30;
      param_3[7] = 0;
      param_3[10] = 0;
      param_3[0xc] = 0;
      param_3[0xb] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = local_8;
    }
    if ((local_8 == 0) || (param_3 == (undefined4 *)0x0)) {
      iVar1 = -1;
    }
    else {
      FUN_01295f1a(local_44,&local_8);
      if (local_8 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_01296c69(local_10,param_2,&local_c);
        param_3[10] = local_c;
        if (((local_c == 0) && (param_3[4] != 0 || param_3[5] != 0)) &&
           (iVar2 = FUN_012a03b4(), iVar2 == 1)) {
          FUN_01293f1f(1,"W2009061111:The PrimaryCPK has not the CRC. Switch the SecondaryCPK.");
          FUN_01295eca(local_28,1);
        }
        else {
          param_3[0xc] = local_20;
          param_3[0xb] = local_24;
          param_3[0xe] = local_1c;
          param_3[0xf] = local_18;
        }
        iVar2 = FUN_0129577b();
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == 2)) {
          param_3[0xc] = 0;
          param_3[0xb] = 0;
          param_3[0xe] = 0;
          param_3[0xf] = 0;
        }
      }
    }
  }
  return iVar1;
}

// 01297BF0  FUN_01297bf0  size=105  [run]
void FUN_01297bf0(void)

{
  if (DAT_020ae318 != 0) {
    FUN_012975ac();
    if (*(int *)(DAT_020ae318 + 8) != 0) {
      FUN_01297076(*(int *)(DAT_020ae318 + 8));
    }
    FUN_01295478(0,0,0);
    *(undefined4 *)(DAT_020ae318 + 4) = 0;
    *(undefined4 *)(DAT_020ae318 + 0x18) = 0;
    *(undefined4 *)(DAT_020ae318 + 0x20) = 0;
    *(undefined4 *)(DAT_020ae318 + 0x3c) = 0;
    DAT_020ae318 = 0;
    DAT_020ae31c = 0;
    DAT_020ae34c = 0;
    DAT_020ae76c = 0;
    DAT_01b264a8 = 1;
    FUN_01294606();
    return;
  }
  return;
}

// 01297C59  FUN_01297c59  size=144  [run]
undefined4 FUN_01297c59(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_020ae318 == 0) {
    FUN_01293f69(0,"E2012060502",0xfffffffa);
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    FUN_01293f69(0,"E2008071610",0xfffffffe);
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x18) == 2) {
    FUN_012941d9(DAT_020ae344);
    iVar2 = FUN_0129745e(*(undefined4 *)(param_1 + 0x14));
    if (1 < iVar2) {
      DAT_020ae338 = DAT_020ae338 + (1 - iVar2);
    }
    DAT_020ae334 = DAT_020ae334 + -1;
    FUN_0129420c(DAT_020ae344);
    uVar1 = 0;
  }
  else {
    FUN_01293f1f(0,"E2008122690:This CriFsBinderHn is not created by criFsBinder_Create.");
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 01297D08  FUN_01297d08  size=78  [run]
void FUN_01297d08(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_014998f9(unaff_ESI + 0x2c,1);
  if (iVar1 == 0) {
    if (*(int *)(unaff_ESI + 0x20) == 3) {
      iVar1 = FUN_012945aa();
      if (iVar1 < 1) {
        FUN_01297543(param_1);
      }
    }
    else if (*(int *)(unaff_ESI + 0x20) != 2) {
      FUN_01295fe3();
    }
    FUN_014998f9(unaff_ESI + 0x2c,0);
  }
  return;
}

// 01297D56  FUN_01297d56  size=87  [run]
undefined4 FUN_01297d56(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_0129577b();
    if (iVar1 != 0) {
      FUN_01297d08(param_1);
      iVar1 = FUN_0129577b();
      if (iVar1 != 0) {
        *param_2 = *(undefined4 *)(iVar1 + 0x20);
        return 0;
      }
    }
    *param_2 = 4;
    return 0;
  }
  FUN_01293f69(0,"E2012082901",0xfffffffe);
  return 0xfffffffe;
}

// 01297DAD  FUN_01297dad  size=183  [run]
int FUN_01297dad(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [5];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_c;
  
  if (((param_1 == 0) || (param_3 == 1)) || (iVar1 = FUN_012947eb(param_2), iVar1 == 0)) {
    local_38 = 0;
    local_c = 0;
    local_50[0] = 0;
    local_3c = 0;
    iVar1 = FUN_01297661(0,param_6);
    if ((iVar1 == 0) && (param_4 != 0)) {
      if (param_5 == (undefined4 *)0x0) {
        FUN_01294f7e();
      }
      else {
        puVar3 = local_50;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_5 = *puVar3;
          puVar3 = puVar3 + 1;
          param_5 = param_5 + 1;
        }
      }
    }
    else if (param_5 != (undefined4 *)0x0) {
      _memset(param_5,0,0x18);
    }
  }
  else {
    iVar1 = FUN_01297860(param_5,param_6,0);
  }
  return iVar1;
}

// 01297E64  FUN_01297e64  size=269  [run]
int FUN_01297e64(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5,
                int *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_28 [7];
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  FUN_012945f5(local_28);
  iVar1 = FUN_0129434f();
  if (iVar1 == 0) {
    iVar1 = FUN_01297dad(param_1,param_2,0,local_28,0,&local_8);
    if (param_3 != (undefined4 *)0x0) {
      puVar3 = local_28;
      puVar4 = param_3;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    if (param_6 != (int *)0x0) {
      *param_6 = local_8;
    }
    if ((param_3 != (undefined4 *)0x0) && (param_4 != 0)) {
      if (local_8 != 1) {
        if (((param_1 == 0) || (*(int *)(param_1 + 0x18) != 2)) || (*(int *)(param_1 + 0x28) == 0))
        {
          FUN_01294257(param_4,param_5,param_2);
        }
        else {
          FUN_0129e87c(param_4,param_5,*(int *)(param_1 + 0x28),param_2);
        }
        param_3[6] = param_4;
      }
      if ((local_c != 0) && (iVar1 == 0)) {
        iVar1 = FUN_0129577b();
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 3)) {
          FUN_0129e87c(param_4,param_5,param_3[6],param_2);
          param_3[6] = param_4;
        }
        iVar1 = 0;
      }
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      puVar3 = local_28;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_3 = *puVar3;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}

// 01297F71  FUN_01297f71  size=45  [run]
void FUN_01297f71(int param_1)

{
  int *piVar1;
  int iVar2;
  
  while (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    FUN_01297d08(*(undefined4 *)(param_1 + 0x14));
    piVar1 = (int *)(param_1 + 8);
    param_1 = iVar2;
    if (*piVar1 != 0) {
      FUN_01297f71(*piVar1);
    }
  }
  return;
}

// 01297FD7  FUN_01297fd7  size=483  [run]
int FUN_01297fd7(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5,
                int *param_6)

{
  int iVar1;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  FUN_012945f5(local_48);
  local_c = FUN_01297dad(param_1,param_2,0,local_48,&local_28,&local_8);
  if ((local_8 != 1) && (param_4 != 0)) {
    if ((param_1 == 0) || ((*(int *)(param_1 + 0x18) != 2 || (*(int *)(param_1 + 0x28) == 0)))) {
      FUN_01294257(param_4,param_5,param_2);
    }
    else {
      FUN_0129e87c(param_4,param_5,*(int *)(param_1 + 0x28),param_2);
    }
    local_30 = param_4;
  }
  if ((local_2c == 0) || (local_c != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      _memset(param_3,0,0x40);
    }
  }
  else {
    iVar1 = FUN_0129577b();
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 3)) && (param_4 != 0)) {
      FUN_0129e87c(param_4,param_5,local_30,param_2);
      local_30 = param_4;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_48[0];
      param_3[2] = local_40;
      param_3[3] = local_3c;
      param_3[8] = local_30;
      param_3[9] = local_2c;
      param_3[4] = local_38;
      param_3[5] = 0;
      param_3[6] = local_34;
      param_3[7] = 0;
      param_3[10] = 0;
      param_3[0xc] = 0;
      param_3[0xb] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = local_8;
    }
    if ((local_8 == 0) || (param_3 == (undefined4 *)0x0)) {
      local_c = -1;
    }
    else {
      FUN_01295f1a(local_48,&local_8);
      if (local_8 == 0) {
        local_c = 0;
      }
      else {
        local_c = FUN_01297a18(local_14,param_2,&local_10);
        param_3[10] = local_10;
        if (((local_10 == 0) && (param_3[4] != 0 || param_3[5] != 0)) &&
           (iVar1 = FUN_012a03b4(), iVar1 == 1)) {
          FUN_01293f1f(1,"W2009061110:The PrimaryCPK has not the CRC. Switch the SecondaryCPK.");
          FUN_01295eca(local_2c,1);
        }
        else {
          param_3[0xc] = local_24;
          param_3[0xb] = local_28;
          param_3[0xe] = local_20;
          param_3[0xf] = local_1c;
        }
        iVar1 = FUN_0129577b();
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == 2)) {
          param_3[0xc] = 0;
          param_3[0xb] = 0;
          param_3[0xe] = 0;
          param_3[0xf] = 0;
        }
      }
    }
  }
  return local_c;
}

// 012981BA  FUN_012981ba  size=654  [run]
undefined4
FUN_012981ba(undefined4 param_1,undefined4 param_2,int param_3,void *param_4,uint param_5,
            undefined4 *param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  char *_Str;
  int *piVar5;
  int local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  undefined4 local_48;
  undefined4 local_40;
  int local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int *local_10;
  int local_c;
  void *local_8;
  
  local_8 = (void *)0x0;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  iVar2 = FUN_0129434f();
  if (iVar2 == 0) {
    if ((param_3 == 0) || (param_6 == (undefined4 *)0x0)) {
      FUN_01293f69(0,"E2008071620",0xfffffffe);
      return 0xfffffffe;
    }
    if (param_4 == (void *)0x0) {
      FUN_012948f8(0);
      param_4 = (void *)FUN_012953c4(param_5);
      local_8 = param_4;
      if (param_4 == (void *)0x0) {
        return 0xffffffff;
      }
    }
    else if (param_5 < 0x440) {
      FUN_01293f1f(0,
                   "E2008071621:The designate work size is too small.  To inquire about tha minimum size, use CriFsBinder_GetWorkSizeBindCpk function."
                  );
      return 0xfffffffe;
    }
    _memset(param_4,0,param_5);
    FUN_012941d9(DAT_020ae344);
    FUN_012941d9(DAT_020ae33c);
    iVar2 = FUN_01297232(param_3,param_4,local_8,4,2);
    local_18 = iVar2;
    FUN_0129420c(DAT_020ae33c);
    FUN_0129420c(DAT_020ae344);
    if (iVar2 != 0) {
      FUN_01297fd7(param_2,*(undefined4 *)(iVar2 + 0x24),local_78,0,0,&local_14);
      local_1c = local_54;
      local_28 = local_68;
      local_24 = local_60;
      if ((param_7 == 0) || (local_4c == 0)) {
        local_38[0] = local_78[0];
        local_20 = local_58;
        local_38[2] = local_70;
        local_c = 0;
      }
      else {
        local_38[0] = local_4c;
        local_20 = local_48;
        local_38[2] = local_40;
        local_c = 1;
      }
      _Str = (char *)(*(int *)(iVar2 + 0x3c) + 0x217U & 0xffffffe0);
      FUN_01295c4e(param_3,local_14,_Str,0x208);
      sVar3 = _strlen(_Str);
      local_14 = (int)param_4 + 0x440U;
      if ((int)param_4 + 0x440U < ((uint)(_Str + sVar3 + 0x20) & 0xffffffe0)) {
        local_14 = (uint)(_Str + sVar3 + 0x20) & 0xffffffe0;
      }
      local_10 = *(int **)(iVar2 + 0x3c);
      local_10[0x78] = (int)_Str;
      piVar4 = local_38;
      piVar5 = local_10;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      local_10[0x7c] = 0;
      local_10[0x7b] = 0;
      if (local_c != 0) {
        local_10[0x7b] = 2;
      }
      iVar2 = FUN_0129577b();
      piVar4 = local_10;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 3)) {
        local_10[7] = 0;
      }
      uVar1 = DAT_020ae33c;
      piVar5 = local_10 + 0x7a;
      local_10[0x79] = local_14;
      *piVar5 = (int)param_4 + (param_5 - local_14);
      FUN_012941d9(uVar1);
      FUN_0129d96d(piVar4 + 8,piVar4[0x79],*piVar5);
      FUN_0129420c(DAT_020ae33c);
      iVar2 = FUN_0129dfc1(piVar4 + 8,piVar4[0x78],piVar4);
      if (iVar2 != 0) {
        *param_6 = *(undefined4 *)(local_18 + 0x14);
        return 0;
      }
      FUN_012941d9(DAT_020ae33c);
      FUN_01297004();
      FUN_0129420c(DAT_020ae33c);
    }
    if (local_8 != (void *)0x0) {
      FUN_01295401(local_8);
    }
  }
  return 0xffffffff;
}

