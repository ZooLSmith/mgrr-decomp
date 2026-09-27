// lib/havok/Source/Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010776E0..0108C000, 353 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkgpConvexHull.h"

// 010776E0  FUN_010776e0  size=155  [__FILE__]
undefined4 __fastcall FUN_010776e0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a6) != '\0') {
    return *(undefined4 *)(iVar2 + 0x4c);
  }
  hkErrStream::hkErrStream(local_210,0x200);
  uVar3 = *(undefined4 *)(iVar2 + 0x1a0);
  pcVar4 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
  FUN_01018d00("No index available (");
  FUN_01018e10(uVar3);
  FUN_01018d00(pcVar4);
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x79f9d886,local_210,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                     ,0x167);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  hkBaseObject::hkBaseObject_38();
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x4c);
}

// 01077780  FUN_01077780  size=154  [__FILE__]
int __thiscall FUN_01077780(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    uVar3 = *(undefined4 *)(iVar2 + 0x1a0);
    pcVar4 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar3);
    FUN_01018d00(pcVar4);
    iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_210,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    hkBaseObject::hkBaseObject_38();
  }
  return param_2 * 0x10 + *(int *)(*(int *)(param_1 + 8) + 0x48);
}

// 01077820  FUN_01077820  size=7  [between]
undefined4 __fastcall FUN_01077820(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
}

// 01077830  FUN_01077830  size=7  [between]
undefined4 __fastcall FUN_01077830(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x20);
}

// 01077840  FUN_01077840  size=157  [__FILE__]
undefined4 __thiscall FUN_01077840(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a6) != '\0') {
    return *(undefined4 *)(param_2 + 0x34);
  }
  hkErrStream::hkErrStream(local_210,0x200);
  uVar3 = *(undefined4 *)(iVar2 + 0x1a0);
  pcVar4 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
  FUN_01018d00("No index available (");
  FUN_01018e10(uVar3);
  FUN_01018d00(pcVar4);
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x79f9d886,local_210,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                     ,0x167);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  hkBaseObject::hkBaseObject_38();
  return *(undefined4 *)(param_2 + 0x34);
}

// 010778E0  FUN_010778e0  size=12  [between]
undefined4 FUN_010778e0(undefined4 *param_1)

{
  return *param_1;
}

// 010778F0  FUN_010778f0  size=69  [between]
void __thiscall FUN_010778f0(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x24);
  iVar3 = *(int *)(param_3 + 0x28);
  fVar4 = *(float *)(iVar1 + 0x104);
  fVar5 = *(float *)(iVar1 + 0x108);
  fVar6 = *(float *)(iVar1 + 0x10c);
  fVar7 = *(float *)(iVar1 + 0xe4);
  fVar8 = *(float *)(iVar1 + 0xe8);
  fVar9 = *(float *)(iVar1 + 0xec);
  *param_2 = (float)*(int *)(param_3 + 0x20) * *(float *)(iVar1 + 0x100) + *(float *)(iVar1 + 0xe0);
  param_2[1] = (float)iVar2 * fVar4 + fVar7;
  param_2[2] = (float)iVar3 * fVar5 + fVar8;
  param_2[3] = fVar6 * 0.0 + fVar9;
  return;
}

// 01077940  FUN_01077940  size=7  [between]
undefined4 __fastcall FUN_01077940(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x34);
}

// 01077950  FUN_01077950  size=7  [between]
undefined4 __fastcall FUN_01077950(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x30);
}

// 01077960  FUN_01077960  size=157  [__FILE__]
undefined4 __thiscall FUN_01077960(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a6) != '\0') {
    return *(undefined4 *)(param_2 + 0x44);
  }
  hkErrStream::hkErrStream(local_210,0x200);
  uVar3 = *(undefined4 *)(iVar2 + 0x1a0);
  pcVar4 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
  FUN_01018d00("No index available (");
  FUN_01018e10(uVar3);
  FUN_01018d00(pcVar4);
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x79f9d886,local_210,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                     ,0x167);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  hkBaseObject::hkBaseObject_38();
  return *(undefined4 *)(param_2 + 0x44);
}

// 01077A00  FUN_01077a00  size=12  [between]
undefined4 FUN_01077a00(undefined4 *param_1)

{
  return *param_1;
}

// 01077A10  FUN_01077a10  size=157  [__FILE__]
undefined4 __thiscall FUN_01077a10(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a6) != '\0') {
    return *(undefined4 *)(param_2 + 0x38);
  }
  hkErrStream::hkErrStream(local_210,0x200);
  uVar3 = *(undefined4 *)(iVar2 + 0x1a0);
  pcVar4 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
  FUN_01018d00("No index available (");
  FUN_01018e10(uVar3);
  FUN_01018d00(pcVar4);
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x79f9d886,local_210,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                     ,0x167);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  hkBaseObject::hkBaseObject_38();
  return *(undefined4 *)(param_2 + 0x38);
}

// 01077AB0  FUN_01077ab0  size=17  [between]
undefined4 FUN_01077ab0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 8 + param_2 * 4);
}

// 01077AD0  FUN_01077ad0  size=163  [__FILE__]
float10 __fastcall FUN_01077ad0(int param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a4) != '\0') {
    return (float10)*(float *)(iVar2 + 400);
  }
  hkErrStream::hkErrStream(local_210,0x200);
  uVar4 = *(undefined4 *)(iVar2 + 0x1a0);
  pcVar5 = ") hkgpConvexHull::buildMassProperties need to be called before this operation.";
  FUN_01018d00("No mass properties available (");
  FUN_01018e10(uVar4);
  FUN_01018d00(pcVar5);
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x79f9d887,local_210,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                     ,0x16f);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float10)(*pcVar1)();
    return fVar3;
  }
  hkBaseObject::hkBaseObject_38();
  return (float10)*(float *)(*(int *)(param_1 + 8) + 400);
}

// 01077B80  FUN_01077b80  size=163  [__FILE__]
float10 __fastcall FUN_01077b80(int param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a4) != '\0') {
    return (float10)*(float *)(iVar2 + 0x194);
  }
  hkErrStream::hkErrStream(local_210,0x200);
  uVar4 = *(undefined4 *)(iVar2 + 0x1a0);
  pcVar5 = ") hkgpConvexHull::buildMassProperties need to be called before this operation.";
  FUN_01018d00("No mass properties available (");
  FUN_01018e10(uVar4);
  FUN_01018d00(pcVar5);
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x79f9d887,local_210,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                     ,0x16f);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float10)(*pcVar1)();
    return fVar3;
  }
  hkBaseObject::hkBaseObject_38();
  return (float10)*(float *)(*(int *)(param_1 + 8) + 0x194);
}

// 01077C30  FUN_01077c30  size=47  [between]
float10 FUN_01077c30(void)

{
  float10 fVar1;
  float10 fVar2;
  
  FUN_01077ad0();
  fVar1 = (float10)FUN_00fdc1f0();
  fVar2 = (float10)FUN_01077b80();
  return (float10)(float)(fVar1 * (float10)4.8359756) / fVar2;
}

// 01077C60  FUN_01077c60  size=148  [__FILE__]
int __fastcall FUN_01077c60(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a4) == '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    uVar3 = *(undefined4 *)(iVar2 + 0x1a0);
    pcVar4 = ") hkgpConvexHull::buildMassProperties need to be called before this operation.";
    FUN_01018d00("No mass properties available (");
    FUN_01018e10(uVar3);
    FUN_01018d00(pcVar4);
    iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d887,local_210,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x16f);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    hkBaseObject::hkBaseObject_38();
  }
  return *(int *)(param_1 + 8) + 0x160;
}

// 01077D00  FUN_01077d00  size=148  [__FILE__]
int __fastcall FUN_01077d00(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x1a4) == '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    uVar3 = *(undefined4 *)(iVar2 + 0x1a0);
    pcVar4 = ") hkgpConvexHull::buildMassProperties need to be called before this operation.";
    FUN_01018d00("No mass properties available (");
    FUN_01018e10(uVar3);
    FUN_01018d00(pcVar4);
    iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d887,local_210,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x16f);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    hkBaseObject::hkBaseObject_38();
  }
  return *(int *)(param_1 + 8) + 0x140;
}

// 01077F90  FUN_01077f90  size=125  [between]
float10 FUN_01077f90(float *param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float local_8;
  
  local_8 = -3.40282e+38;
  iVar3 = 0;
  iVar1 = FUN_010776e0();
  if (0 < iVar1) {
    do {
      pfVar2 = (float *)FUN_01077780(iVar3);
      fVar4 = param_1[2] * pfVar2[2] + *param_1 * *pfVar2 + pfVar2[3] + param_1[1] * pfVar2[1];
      if (local_8 < fVar4) {
        local_8 = fVar4;
        if (param_2 != (int *)0x0) {
          *param_2 = iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_010776e0();
    } while (iVar3 < iVar1);
  }
  return (float10)local_8;
}

// 01078010  FUN_01078010  size=8  [between]
void FUN_01078010(void)

{
  FUN_0107d9f0();
  return;
}

// 01078020  FUN_01078020  size=207  [__FILE__]
void __thiscall FUN_01078020(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 local_210 [524];
  
  iVar4 = *(int *)(param_1 + 8);
  if (*(char *)(iVar4 + 0x1a4) == '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    uVar5 = *(undefined4 *)(iVar4 + 0x1a0);
    pcVar6 = ") hkgpConvexHull::buildMassProperties need to be called before this operation.";
    FUN_01018d00("No mass properties available (");
    FUN_01018e10(uVar5);
    FUN_01018d00(pcVar6);
    iVar4 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d887,local_210,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x16f);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(iVar4 + 0x114);
  uVar2 = *(undefined4 *)(iVar4 + 0x118);
  uVar3 = *(undefined4 *)(iVar4 + 0x11c);
  *param_2 = *(undefined4 *)(iVar4 + 0x110);
  param_2[1] = uVar5;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar5 = *(undefined4 *)(iVar4 + 0x124);
  uVar2 = *(undefined4 *)(iVar4 + 0x128);
  uVar3 = *(undefined4 *)(iVar4 + 300);
  param_2[4] = *(undefined4 *)(iVar4 + 0x120);
  param_2[5] = uVar5;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar5 = *(undefined4 *)(iVar4 + 0x134);
  uVar2 = *(undefined4 *)(iVar4 + 0x138);
  uVar3 = *(undefined4 *)(iVar4 + 0x13c);
  param_2[8] = *(undefined4 *)(iVar4 + 0x130);
  param_2[9] = uVar5;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar5 = *(undefined4 *)(iVar4 + 0x144);
  uVar2 = *(undefined4 *)(iVar4 + 0x148);
  uVar3 = *(undefined4 *)(iVar4 + 0x14c);
  param_2[0xc] = *(undefined4 *)(iVar4 + 0x140);
  param_2[0xd] = uVar5;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(iVar4 + 0x154);
  uVar2 = *(undefined4 *)(iVar4 + 0x158);
  uVar3 = *(undefined4 *)(iVar4 + 0x15c);
  *param_3 = *(undefined4 *)(iVar4 + 0x150);
  param_3[1] = uVar5;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  return;
}

// 010780F0  FUN_010780f0  size=191  [__FILE__]
void __thiscall FUN_010780f0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 local_210 [524];
  
  iVar4 = *(int *)(param_1 + 8);
  if (*(char *)(iVar4 + 0x1a4) == '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    uVar5 = *(undefined4 *)(iVar4 + 0x1a0);
    pcVar6 = ") hkgpConvexHull::buildMassProperties need to be called before this operation.";
    FUN_01018d00("No mass properties available (");
    FUN_01018e10(uVar5);
    FUN_01018d00(pcVar6);
    iVar4 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d887,local_210,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x16f);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(iVar4 + 0x114);
  uVar2 = *(undefined4 *)(iVar4 + 0x118);
  uVar3 = *(undefined4 *)(iVar4 + 0x11c);
  *param_2 = *(undefined4 *)(iVar4 + 0x110);
  param_2[1] = uVar5;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar5 = *(undefined4 *)(iVar4 + 0x124);
  uVar2 = *(undefined4 *)(iVar4 + 0x128);
  uVar3 = *(undefined4 *)(iVar4 + 300);
  param_2[4] = *(undefined4 *)(iVar4 + 0x120);
  param_2[5] = uVar5;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar5 = *(undefined4 *)(iVar4 + 0x134);
  uVar2 = *(undefined4 *)(iVar4 + 0x138);
  uVar3 = *(undefined4 *)(iVar4 + 0x13c);
  param_2[8] = *(undefined4 *)(iVar4 + 0x130);
  param_2[9] = uVar5;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar5 = *(undefined4 *)(iVar4 + 0x144);
  uVar2 = *(undefined4 *)(iVar4 + 0x148);
  uVar3 = *(undefined4 *)(iVar4 + 0x14c);
  param_2[0xc] = *(undefined4 *)(iVar4 + 0x140);
  param_2[0xd] = uVar5;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return;
}

// 010781B0  FUN_010781b0  size=43  [between]
void FUN_010781b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_c [8];
  
  FUN_0107da60(param_1,param_2,local_c,param_3);
  return;
}

// 010781E0  FUN_010781e0  size=21  [between]
void FUN_010781e0(void)

{
  FUN_0107fd00(0);
  FUN_01077520();
  return;
}

// 010782F0  FUN_010782f0  size=54  [between]
undefined1 * FUN_010782f0(undefined1 *param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_01080500(param_2,param_3 != '\0',param_4);
  *param_1 = uVar1;
  return param_1;
}

// 010785D0  FUN_010785d0  size=221  [between]
void __thiscall FUN_010785d0(int param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = *(int *)(param_1 + 8);
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar6 = param_3[3];
  fVar11 = 3.40282e+38;
  *param_4 = *param_3;
  param_4[1] = fVar2;
  param_4[2] = fVar3;
  param_4[3] = fVar6;
  piVar4 = *(int **)(iVar1 + 0x20);
  if (param_2 == 0) {
    if (piVar4 != (int *)0x0) {
      do {
        fVar2 = (float)piVar4[5];
        fVar3 = (float)piVar4[6];
        fVar6 = (float)piVar4[7];
        fVar5 = *param_3 - (float)piVar4[4];
        fVar7 = param_3[1] - fVar2;
        fVar8 = param_3[2] - fVar3;
        fVar5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5;
        if (fVar5 < fVar11) {
          *param_4 = (float)piVar4[4];
          param_4[1] = fVar2;
          param_4[2] = fVar3;
          param_4[3] = fVar6;
          fVar11 = fVar5;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
      return;
    }
  }
  else {
    for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      fVar2 = *(float *)(iVar1 + 0x10c);
      fVar3 = *(float *)(iVar1 + 0xec);
      fVar8 = (float)piVar4[8] * *(float *)(iVar1 + 0x100) + *(float *)(iVar1 + 0xe0);
      fVar9 = (float)piVar4[9] * *(float *)(iVar1 + 0x104) + *(float *)(iVar1 + 0xe4);
      fVar10 = (float)piVar4[10] * *(float *)(iVar1 + 0x108) + *(float *)(iVar1 + 0xe8);
      fVar6 = *param_3 - fVar8;
      fVar5 = param_3[1] - fVar9;
      fVar7 = param_3[2] - fVar10;
      fVar6 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
      if (fVar6 < fVar11) {
        *param_4 = fVar8;
        param_4[1] = fVar9;
        param_4[2] = fVar10;
        param_4[3] = fVar2 * 0.0 + fVar3;
        fVar11 = fVar6;
      }
    }
  }
  return;
}

// 010786C0  FUN_010786c0  size=217  [between]
void __thiscall FUN_010786c0(int param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = *(int *)(param_1 + 8);
  fVar11 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_4 = *param_3;
  param_4[1] = fVar11;
  param_4[2] = fVar2;
  param_4[3] = fVar3;
  piVar4 = *(int **)(iVar1 + 0x20);
  if (param_2 == 0) {
    fVar11 = 0.0;
    if (piVar4 != (int *)0x0) {
      do {
        fVar2 = (float)piVar4[5];
        fVar3 = (float)piVar4[6];
        fVar6 = (float)piVar4[7];
        fVar5 = *param_3 - (float)piVar4[4];
        fVar7 = param_3[1] - fVar2;
        fVar8 = param_3[2] - fVar3;
        fVar5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5;
        if (fVar11 < fVar5) {
          *param_4 = (float)piVar4[4];
          param_4[1] = fVar2;
          param_4[2] = fVar3;
          param_4[3] = fVar6;
          fVar11 = fVar5;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
      return;
    }
  }
  else {
    fVar11 = 0.0;
    for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      fVar2 = *(float *)(iVar1 + 0x10c);
      fVar3 = *(float *)(iVar1 + 0xec);
      fVar8 = (float)piVar4[8] * *(float *)(iVar1 + 0x100) + *(float *)(iVar1 + 0xe0);
      fVar9 = (float)piVar4[9] * *(float *)(iVar1 + 0x104) + *(float *)(iVar1 + 0xe4);
      fVar10 = (float)piVar4[10] * *(float *)(iVar1 + 0x108) + *(float *)(iVar1 + 0xe8);
      fVar6 = *param_3 - fVar8;
      fVar5 = param_3[1] - fVar9;
      fVar7 = param_3[2] - fVar10;
      fVar6 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
      if (fVar11 < fVar6) {
        *param_4 = fVar8;
        param_4[1] = fVar9;
        param_4[2] = fVar10;
        param_4[3] = fVar2 * 0.0 + fVar3;
        fVar11 = fVar6;
      }
    }
  }
  return;
}

// 01078920  FUN_01078920  size=289  [between]
void __thiscall FUN_01078920(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(iVar2 + 0x24);
    iVar4 = param_3[1];
    iVar1 = iVar4 + iVar3;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar1) {
      iVar13 = (param_3[2] & 0x3fffffffU) * 2;
      if (iVar13 <= iVar1) {
        iVar13 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar13,0x10);
    }
    param_3[1] = param_3[1] + iVar3;
    piVar14 = *(int **)(iVar2 + 0x20);
    piVar15 = (int *)(iVar4 * 0x10 + *param_3);
    if (piVar14 != (int *)0x0) {
      do {
        iVar1 = piVar14[5];
        iVar2 = piVar14[6];
        iVar3 = piVar14[7];
        *piVar15 = piVar14[4];
        piVar15[1] = iVar1;
        piVar15[2] = iVar2;
        piVar15[3] = iVar3;
        piVar14 = (int *)*piVar14;
        piVar15 = piVar15 + 4;
      } while (piVar14 != (int *)0x0);
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(iVar2 + 0x24);
    iVar4 = param_3[1];
    iVar1 = iVar4 + iVar3;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar1) {
      iVar13 = (param_3[2] & 0x3fffffffU) * 2;
      if (iVar13 <= iVar1) {
        iVar13 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar13,0x10);
    }
    param_3[1] = param_3[1] + iVar3;
    pfVar12 = (float *)(iVar4 * 0x10 + *param_3);
    for (puVar5 = *(undefined4 **)(iVar2 + 0x20); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      iVar1 = puVar5[9];
      iVar3 = puVar5[10];
      fVar6 = *(float *)(iVar2 + 0x104);
      fVar7 = *(float *)(iVar2 + 0x108);
      fVar8 = *(float *)(iVar2 + 0x10c);
      fVar9 = *(float *)(iVar2 + 0xe4);
      fVar10 = *(float *)(iVar2 + 0xe8);
      fVar11 = *(float *)(iVar2 + 0xec);
      *pfVar12 = (float)(int)puVar5[8] * *(float *)(iVar2 + 0x100) + *(float *)(iVar2 + 0xe0);
      pfVar12[1] = (float)iVar1 * fVar6 + fVar9;
      pfVar12[2] = (float)iVar3 * fVar7 + fVar10;
      pfVar12[3] = fVar8 * 0.0 + fVar11;
      pfVar12 = pfVar12 + 4;
    }
  }
  return;
}

// 01078A50  FUN_01078a50  size=135  [between]
void FUN_01078a50(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar6 = FUN_010776e0();
  iVar2 = param_1[1];
  iVar1 = iVar2 + iVar6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar8 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar8,0x10);
  }
  param_1[1] = param_1[1] + iVar6;
  iVar1 = *param_1;
  iVar8 = 0;
  iVar6 = FUN_010776e0();
  puVar9 = (undefined4 *)(iVar2 * 0x10 + iVar1);
  if (0 < iVar6) {
    do {
      puVar7 = (undefined4 *)FUN_01077780(iVar8);
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      iVar8 = iVar8 + 1;
      *puVar9 = *puVar7;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9 = puVar9 + 4;
    } while (iVar8 < iVar6);
  }
  return;
}

// 01078AE0  FUN_01078ae0  size=20  [between]
uint FUN_01078ae0(int param_1,int param_2)

{
  return *(uint *)(param_1 + 0x14 + param_2 * 4) & 0xfffffffc;
}

// 01078B00  FUN_01078b00  size=193  [between]
void __thiscall FUN_01078b00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x58) == 0) {
    uVar2 = *(uint *)(iVar1 + 0x24);
    local_10 = (int *)0x0;
    local_c = 0;
    local_8 = -0x80000000;
    if (0 < (int)uVar2) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_10,((int)uVar2 < 0) - 1 & uVar2,0x10);
    }
    local_c = local_c + uVar2;
    piVar7 = local_10;
    for (puVar3 = *(undefined4 **)(iVar1 + 0x20); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      iVar4 = puVar3[5];
      iVar5 = puVar3[6];
      iVar6 = puVar3[7];
      *piVar7 = puVar3[4];
      piVar7[1] = iVar4;
      piVar7[2] = iVar5;
      piVar7[3] = iVar6;
      piVar7 = piVar7 + 4;
    }
    FUN_0108f520(&local_10,iVar1 + 0x54);
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 << 4);
    }
  }
  FUN_0108ef00(iVar1 + 0x54,param_2,param_3);
  return;
}

// 01078BD0  FUN_01078bd0  size=962  [between]
void __thiscall FUN_01078bd0(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  float *local_c;
  int local_8;
  
  iVar11 = *(int *)(param_1 + 8);
  local_8 = param_1;
  if (*(int *)(iVar11 + 0x198) == 2) {
    iVar1 = param_3[1];
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
    local_18 = 0x80000000;
    iVar2 = *(int *)(iVar11 + 0x24);
    iVar11 = iVar1 + iVar2;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar11) {
      iVar3 = (param_3[2] & 0x3fffffffU) * 2;
      if (iVar11 < iVar3) {
        iVar11 = iVar3;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar11,0x10);
    }
    param_3[1] = param_3[1] + iVar2;
    iVar2 = param_3[4];
    local_c = (float *)(iVar1 * 0x10 + *param_3);
    local_14 = *(int *)(*(int *)(local_8 + 8) + 0x24) * 2 + -4;
    iVar11 = local_14 + iVar2;
    if ((int)(param_3[5] & 0x3fffffffU) < iVar11) {
      iVar3 = (param_3[5] & 0x3fffffffU) * 2;
      if (iVar11 < iVar3) {
        iVar11 = iVar3;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_3 + 3,iVar11,0x10);
    }
    param_3[4] = param_3[4] + local_14;
    puVar14 = (undefined4 *)(iVar2 * 0x10 + param_3[3]);
    iVar11 = *(int *)(*(int *)(local_8 + 8) + 0x24);
    pfVar13 = local_c;
    if ((int)(local_18 & 0x3fffffff) < iVar11) {
      iVar2 = (local_18 & 0x3fffffff) * 2;
      if (iVar11 < iVar2) {
        iVar11 = iVar2;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&local_20,iVar11,4);
      pfVar13 = local_c;
    }
    local_c = *(float **)(*(int *)(local_8 + 8) + 0x20);
    if (local_c != (float *)0x0) {
      do {
        local_20[local_1c] = iVar1 + local_1c;
        local_1c = local_1c + 1;
        if (param_2 != 0) {
          iVar11 = (int)local_c[9];
          iVar2 = (int)local_c[10];
          iVar3 = *(int *)(local_8 + 8);
          fVar4 = *(float *)(iVar3 + 0x104);
          fVar5 = *(float *)(iVar3 + 0x108);
          fVar6 = *(float *)(iVar3 + 0x10c);
          fVar7 = *(float *)(iVar3 + 0xe4);
          fVar8 = *(float *)(iVar3 + 0xe8);
          fVar9 = *(float *)(iVar3 + 0xec);
          *pfVar13 = (float)(int)local_c[8] * *(float *)(iVar3 + 0x100) + *(float *)(iVar3 + 0xe0);
          pfVar13[1] = (float)iVar11 * fVar4 + fVar7;
          pfVar13[2] = (float)iVar2 * fVar5 + fVar8;
          pfVar13[3] = fVar6 * 0.0 + fVar9;
        }
        else {
          fVar4 = local_c[5];
          fVar5 = local_c[6];
          fVar6 = local_c[7];
          *pfVar13 = local_c[4];
          pfVar13[1] = fVar4;
          pfVar13[2] = fVar5;
          pfVar13[3] = fVar6;
        }
        local_c = (float *)*local_c;
        pfVar13 = pfVar13 + 4;
      } while (local_c != (float *)0x0);
      local_c = (float *)0x0;
    }
    iVar11 = 1;
    if (1 < (int)(local_1c + -1)) {
      do {
        *puVar14 = *local_20;
        puVar14[1] = local_20[iVar11];
        puVar14[2] = local_20[iVar11 + 1];
        puVar14[3] = param_4;
        puVar14[4] = *local_20;
        puVar14[5] = local_20[iVar11 + 1];
        puVar14[6] = local_20[iVar11];
        puVar14[7] = param_4;
        iVar11 = iVar11 + 1;
        puVar14 = puVar14 + 8;
      } while (iVar11 < (int)(local_1c + -1));
    }
    local_1c = 0;
    if (-1 < (int)local_18) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 * 4);
    }
  }
  else if (*(int *)(iVar11 + 0x198) == 3) {
    iVar1 = param_3[1];
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
    local_18 = 0xffffffff;
    iVar2 = *(int *)(iVar11 + 0x24);
    iVar11 = iVar1 + iVar2;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar11) {
      iVar3 = (param_3[2] & 0x3fffffffU) * 2;
      if (iVar11 < iVar3) {
        iVar11 = iVar3;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar11,0x10);
    }
    param_3[1] = param_3[1] + iVar2;
    local_10 = *(int *)(*(int *)(local_8 + 8) + 0x34);
    local_14 = param_3[4];
    pfVar13 = (float *)(iVar1 * 0x10 + *param_3);
    local_c = (float *)(param_3[5] & 0x3fffffff);
    iVar11 = local_14 + local_10;
    if ((int)local_c < iVar11) {
      if (iVar11 < (int)local_c * 2) {
        iVar11 = (int)local_c * 2;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_3 + 3,iVar11,0x10);
    }
    param_3[4] = param_3[4] + local_10;
    local_14 = local_14 * 0x10 + param_3[3];
    FUN_01010c40(&PTR_vftable_018e9b94,*(undefined4 *)(*(int *)(local_8 + 8) + 0x24));
    for (puVar14 = *(undefined4 **)(*(int *)(local_8 + 8) + 0x20); puVar14 != (undefined4 *)0x0;
        puVar14 = (undefined4 *)*puVar14) {
      FUN_010100a0(&PTR_vftable_018e9b94,puVar14,(local_1c & 0x7fffffff) + iVar1);
      if (param_2 != 0) {
        iVar11 = puVar14[9];
        iVar2 = puVar14[10];
        iVar3 = *(int *)(local_8 + 8);
        fVar4 = *(float *)(iVar3 + 0x104);
        fVar5 = *(float *)(iVar3 + 0x108);
        fVar6 = *(float *)(iVar3 + 0x10c);
        fVar7 = *(float *)(iVar3 + 0xe4);
        fVar8 = *(float *)(iVar3 + 0xe8);
        fVar9 = *(float *)(iVar3 + 0xec);
        *pfVar13 = (float)(int)puVar14[8] * *(float *)(iVar3 + 0x100) + *(float *)(iVar3 + 0xe0);
        pfVar13[1] = (float)iVar11 * fVar4 + fVar7;
        pfVar13[2] = (float)iVar2 * fVar5 + fVar8;
        pfVar13[3] = fVar6 * 0.0 + fVar9;
      }
      else {
        fVar4 = (float)puVar14[5];
        fVar5 = (float)puVar14[6];
        fVar6 = (float)puVar14[7];
        *pfVar13 = (float)puVar14[4];
        pfVar13[1] = fVar4;
        pfVar13[2] = fVar5;
        pfVar13[3] = fVar6;
      }
      pfVar13 = pfVar13 + 4;
    }
    piVar12 = *(int **)(*(int *)(local_8 + 8) + 0x30);
    if (piVar12 != (int *)0x0) {
      puVar14 = (undefined4 *)(local_14 + 8);
      do {
        uVar10 = FUN_01010160(piVar12[2],0xffffffff);
        puVar14[-2] = uVar10;
        uVar10 = FUN_01010160(piVar12[3],0xffffffff);
        puVar14[-1] = uVar10;
        uVar10 = FUN_01010160(piVar12[4],0xffffffff);
        *puVar14 = uVar10;
        puVar14[1] = param_4;
        piVar12 = (int *)*piVar12;
        puVar14 = puVar14 + 4;
      } while (piVar12 != (int *)0x0);
    }
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
    return;
  }
  return;
}

// 01078FA0  hkgpConvexHull::hkgpConvexHull  size=85  [between]
undefined4 * __fastcall hkgpConvexHull::hkgpConvexHull(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1b0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
            ::
            hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
                      ();
  }
  param_1[2] = iVar2;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}

// 01079000  hkBaseObject::hkBaseObject_27  size=68  [between]
void __fastcall hkBaseObject::hkBaseObject_27(undefined4 *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  *param_1 = hkgpConvexHull::vftable;
  if (iVar1 != 0) {
    hkBaseObject_222();
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x1b0);
  }
  FUN_01077520();
  *param_1 = vftable;
  return;
}

// 01079050  FUN_01079050  size=153  [between]
int __fastcall FUN_01079050(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x14);
  *(undefined2 *)(iVar2 + 4) = 0x14;
  iVar3 = hkgpConvexHull::hkgpConvexHull();
  iVar2 = *(int *)(iVar3 + 8);
  if (iVar2 != 0) {
    hkBaseObject::hkBaseObject_222();
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(iVar2,0x1b0);
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  iVar2 = FUN_01083ec0();
  *(int *)(iVar3 + 8) = iVar2;
  *(int *)(iVar2 + 0x10) = iVar3;
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 4))();
    *(undefined4 *)(iVar3 + 0x10) = uVar4;
    return iVar3;
  }
  *(undefined4 *)(iVar3 + 0x10) = 0;
  return iVar3;
}

// 010790F0  FUN_010790f0  size=8  [between]
void FUN_010790f0(void)

{
  FUN_01082990();
  return;
}

// 01079100  FUN_01079100  size=235  [between]
void FUN_01079100(float *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 in_XMM5 [16];
  undefined1 auVar15 [16];
  
  uVar1 = FUN_01077ab0(param_2,0);
  pfVar2 = (float *)FUN_01077660(uVar1);
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar14 = pfVar2[2];
  uVar1 = FUN_01077ab0(param_2,1);
  pfVar2 = (float *)FUN_01077660(uVar1);
  fVar3 = *pfVar2 - fVar12;
  fVar4 = pfVar2[1] - fVar13;
  fVar5 = pfVar2[2] - fVar14;
  uVar1 = FUN_01077ab0(param_2,2);
  pfVar2 = (float *)FUN_01077660(uVar1);
  fVar6 = (pfVar2[2] - fVar14) * fVar4 - (pfVar2[1] - fVar13) * fVar5;
  fVar7 = (*pfVar2 - fVar12) * fVar5 - (pfVar2[2] - fVar14) * fVar3;
  fVar8 = (pfVar2[1] - fVar13) * fVar3 - (*pfVar2 - fVar12) * fVar4;
  fVar3 = fVar6 * fVar6;
  fVar4 = fVar7 * fVar7;
  fVar5 = fVar8 * fVar8;
  fVar9 = fVar4 + fVar3 + fVar5;
  fVar10 = fVar4 + fVar3 + fVar5;
  fVar11 = fVar4 + fVar3 + fVar5;
  auVar15._4_4_ = fVar10;
  auVar15._0_4_ = fVar9;
  auVar15._8_4_ = fVar11;
  auVar15._12_4_ = fVar4 + fVar3 + fVar5;
  auVar15 = rsqrtps(in_XMM5,auVar15);
  fVar3 = auVar15._0_4_;
  fVar4 = auVar15._4_4_;
  fVar5 = auVar15._8_4_;
  fVar6 = fVar6 * (float)(~-(uint)(fVar9 <= 0.0) &
                         (uint)((3.0 - fVar3 * fVar9 * fVar3) * fVar3 * 0.5));
  fVar7 = fVar7 * (float)(~-(uint)(fVar10 <= 0.0) &
                         (uint)((3.0 - fVar4 * fVar10 * fVar4) * fVar4 * 0.5));
  fVar8 = fVar8 * (float)(~-(uint)(fVar11 <= 0.0) &
                         (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5));
  *param_1 = fVar6;
  param_1[1] = fVar7;
  param_1[2] = fVar8;
  param_1[3] = 0.0 - (fVar13 * fVar7 + fVar12 * fVar6 + fVar14 * fVar8);
  return;
}

// 010792F0  FUN_010792f0  size=30  [between]
void FUN_010792f0(undefined4 param_1,undefined4 param_2)

{
  FUN_01083900(param_1,param_2);
  return;
}

// 01079310  FUN_01079310  size=44  [between]
void __thiscall FUN_01079310(int param_1,undefined4 param_2,char param_3)

{
  if (param_3 != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x1a6) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = param_2;
  FUN_01084fc0();
  return;
}

// 010795B0  FUN_010795b0  size=51  [between]
void FUN_010795b0(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  FUN_01086440(param_2,param_3,param_1 == 0,param_4 != '\0');
  return;
}

// 010795F0  FUN_010795f0  size=51  [between]
void FUN_010795f0(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  FUN_01085c10(param_2,param_3,param_1 == 0,param_4 != '\0');
  return;
}

// 01079630  FUN_01079630  size=51  [between]
void __thiscall FUN_01079630(int param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  FUN_010887a0(param_2,param_3,0,0);
  return;
}

// 01079670  FUN_01079670  size=255  [between]
undefined4 FUN_01079670(uint *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_14;
  uint local_10;
  int local_c;
  
  if ((param_1[2] == 0x10) && ((*param_1 & 0xf) == 0)) {
    uVar4 = FUN_01079630(*param_1,param_1[1],param_2);
    return uVar4;
  }
  uVar2 = param_1[1];
  puVar7 = (undefined4 *)*param_1;
  local_14 = 0;
  local_10 = 0;
  local_c = -0x80000000;
  if (0 < (int)uVar2) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_14,uVar2 & ((int)uVar2 < 0) - 1,0x10);
  }
  iVar5 = 0;
  if (0 < (int)param_1[1]) {
    iVar6 = 0;
    do {
      uVar4 = puVar7[1];
      uVar3 = puVar7[2];
      iVar5 = iVar5 + 1;
      puVar1 = (undefined4 *)(iVar6 + local_14);
      *puVar1 = *puVar7;
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      puVar1[3] = 0;
      puVar7 = (undefined4 *)((int)puVar7 + param_1[2]);
      iVar6 = iVar6 + 0x10;
    } while (iVar5 < (int)param_1[1]);
  }
  local_10 = uVar2;
  uVar4 = FUN_01079630(-(uint)(uVar2 != 0) & local_14,uVar2,param_2);
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c << 4);
  }
  return uVar4;
}

// 01079770  FUN_01079770  size=67  [between]
void __thiscall
FUN_01079770(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *param_5;
  puVar1[1] = param_5[1];
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)(iVar2 + 0xd0) = *param_4;
  *(undefined4 *)(iVar2 + 0xd4) = uVar3;
  *(undefined4 *)(iVar2 + 0xd8) = uVar4;
  *(undefined4 *)(iVar2 + 0xdc) = uVar5;
  FUN_010887a0(param_2,param_3,1,0);
  return;
}

// 010797C0  FUN_010797c0  size=259  [between]
undefined4 FUN_010797c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_14;
  uint local_10;
  int local_c;
  
  if (param_1[2] != 0x10) {
    uVar2 = param_1[1];
    puVar7 = (undefined4 *)*param_1;
    local_14 = 0;
    local_10 = 0;
    local_c = -0x80000000;
    if (0 < (int)uVar2) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_14,uVar2 & ((int)uVar2 < 0) - 1,0x10);
    }
    iVar5 = 0;
    if (0 < (int)param_1[1]) {
      iVar6 = 0;
      do {
        uVar4 = puVar7[1];
        uVar3 = puVar7[2];
        iVar5 = iVar5 + 1;
        puVar1 = (undefined4 *)(iVar6 + local_14);
        *puVar1 = *puVar7;
        puVar1[1] = uVar4;
        puVar1[2] = uVar3;
        puVar1[3] = 0;
        puVar7 = (undefined4 *)((int)puVar7 + param_1[2]);
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < (int)param_1[1]);
    }
    local_10 = uVar2;
    uVar4 = FUN_01079770(-(uint)(uVar2 != 0) & local_14,uVar2,param_2,param_3);
    local_10 = 0;
    if (-1 < local_c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c << 4);
    }
    return uVar4;
  }
  uVar4 = FUN_01079770(*param_1,param_1[1],param_2,param_3);
  return uVar4;
}

// 010798D0  FUN_010798d0  size=1064  [between]
undefined4 FUN_010798d0(float *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  float *pfVar14;
  LPVOID pvVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  undefined4 uVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float *local_30;
  int local_28;
  int local_20;
  uint local_1c;
  uint local_18;
  float *local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x80000000;
  pvVar15 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar15 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar15 + 0xc)) {
    *puVar1 = "TtVertexEnumeration";
    uVar2 = rdtsc();
    local_14 = (float *)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar15 + 4) = puVar1 + 3;
  }
  iVar16 = param_2 * 3;
  if ((int)(local_18 & 0x3fffffff) < iVar16) {
    iVar21 = (local_18 & 0x3fffffff) * 2;
    if (iVar21 <= iVar16) {
      iVar21 = iVar16;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_20,iVar21,0x10);
  }
  local_28 = 0;
  pfVar20 = param_1;
  if (0 < param_2) {
    do {
      iVar21 = local_28 + 1;
      fVar23 = 0.0 - pfVar20[3];
      iVar16 = iVar21;
      local_14 = pfVar20;
      while (pfVar14 = pfVar20, iVar13 = iVar16, iVar13 < param_2) {
        pfVar20 = pfVar14 + 4;
        iVar16 = iVar13 + 1;
        fVar28 = 0.0 - pfVar14[7];
        if (iVar16 < param_2) {
          local_30 = pfVar14 + 8;
          iVar22 = iVar16;
          do {
            fVar25 = *local_30;
            fVar26 = local_30[1];
            fVar27 = local_30[2];
            fVar3 = local_30[3];
            fVar24 = 0.0 - fVar3;
            fVar4 = *local_14;
            fVar5 = local_14[1];
            fVar6 = local_14[2];
            fVar7 = local_14[3];
            fVar8 = *pfVar20;
            fVar9 = pfVar14[5];
            fVar10 = pfVar14[6];
            fVar11 = pfVar14[7];
            FUN_01013480();
            iVar17 = FUN_01013f90(0x34000000);
            if (iVar17 == 0) {
              fVar25 = fVar28 * fVar8 + fVar23 * fVar4 + fVar24 * fVar25;
              fVar26 = fVar28 * fVar9 + fVar23 * fVar5 + fVar24 * fVar26;
              fVar27 = fVar28 * fVar10 + fVar23 * fVar6 + fVar24 * fVar27;
              bVar12 = true;
              iVar17 = 0;
              pfVar18 = param_1;
              if (0 < local_28) {
                do {
                  if (!bVar12) break;
                  if (1e-05 < pfVar18[3] + fVar26 * pfVar18[1] +
                              fVar27 * pfVar18[2] + fVar25 * *pfVar18) {
                    bVar12 = false;
                  }
                  iVar17 = iVar17 + 1;
                  pfVar18 = pfVar18 + 4;
                } while (iVar17 < local_28);
              }
              iVar17 = iVar17 + 1;
              if (iVar17 < iVar13) {
                pfVar18 = param_1 + iVar17 * 4;
                do {
                  if (!bVar12) break;
                  if (1e-05 < pfVar18[3] + fVar26 * pfVar18[1] +
                              fVar27 * pfVar18[2] + fVar25 * *pfVar18) {
                    bVar12 = false;
                  }
                  iVar17 = iVar17 + 1;
                  pfVar18 = pfVar18 + 4;
                } while (iVar17 < iVar13);
              }
              iVar17 = iVar17 + 1;
              if (iVar17 < iVar22) {
                pfVar18 = param_1 + iVar17 * 4;
                do {
                  if (!bVar12) break;
                  if (1e-05 < pfVar18[3] + fVar26 * pfVar18[1] +
                              fVar27 * pfVar18[2] + fVar25 * *pfVar18) {
                    bVar12 = false;
                  }
                  iVar17 = iVar17 + 1;
                  pfVar18 = pfVar18 + 4;
                } while (iVar17 < iVar22);
              }
              iVar17 = iVar17 + 1;
              if (iVar17 < param_2) {
                pfVar18 = param_1 + iVar17 * 4;
                do {
                  if (!bVar12) goto LAB_01079bf8;
                  if (1e-05 < pfVar18[3] + fVar26 * pfVar18[1] +
                              fVar27 * pfVar18[2] + fVar25 * *pfVar18) {
                    bVar12 = false;
                  }
                  iVar17 = iVar17 + 1;
                  pfVar18 = pfVar18 + 4;
                } while (iVar17 < param_2);
              }
              if (bVar12) {
                if (local_1c == (local_18 & 0x3fffffff)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,&local_20,0x10);
                }
                pfVar18 = (float *)(local_1c * 0x10 + local_20);
                *pfVar18 = fVar25;
                pfVar18[1] = fVar26;
                pfVar18[2] = fVar27;
                pfVar18[3] = fVar28 * fVar11 + fVar23 * fVar7 + fVar24 * fVar3;
                local_1c = local_1c + 1;
              }
            }
LAB_01079bf8:
            local_30 = local_30 + 4;
            iVar22 = iVar22 + 1;
          } while (iVar22 < param_2);
        }
      }
      local_14 = local_14 + 4;
      pfVar20 = local_14;
      local_28 = iVar21;
    } while (iVar21 < param_2);
  }
  pvVar15 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar15 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar15 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    local_14 = (float *)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar15 + 4) = puVar1 + 3;
  }
  if ((int)local_1c < 4) {
    local_1c = 0;
    if (-1 < (int)local_18) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
    }
    return 0xffffffff;
  }
  uVar19 = FUN_01079630(local_20,local_1c,param_3);
  local_1c = 0;
  if (-1 < (int)local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
  }
  return uVar19;
}

// 01079D00  FUN_01079d00  size=719  [between]
undefined4 FUN_01079d00(float *param_1,int param_2,float *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  LPVOID pvVar10;
  int iVar11;
  float *pfVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  uint local_2c;
  uint local_28;
  int local_20;
  float *local_1c;
  int local_18;
  float *local_14;
  
  local_30 = 0.0;
  local_2c = 0;
  local_28 = 0x80000000;
  pvVar10 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar10 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar10 + 0xc)) {
    *puVar1 = "TtVertexEnumeration";
    uVar2 = rdtsc();
    local_1c = (float *)uVar2;
    puVar1[1] = local_1c;
    *(undefined4 **)((int)pvVar10 + 4) = puVar1 + 3;
  }
  iVar14 = param_2 * 3;
  if ((int)(local_28 & 0x3fffffff) < iVar14) {
    iVar11 = (local_28 & 0x3fffffff) * 2;
    if (iVar11 <= iVar14) {
      iVar11 = iVar14;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_30,iVar11,0x10);
  }
  local_18 = 0;
  if (0 < param_2) {
    local_1c = param_1 + 4;
    do {
      fVar15 = -local_1c[-1];
      iVar14 = local_18 + 1;
      local_20 = iVar14;
      pfVar9 = local_1c;
      pfVar12 = local_14;
      for (; local_14 = pfVar9, iVar14 < param_2; iVar14 = iVar14 + 1) {
        fVar18 = *local_14;
        fVar19 = local_14[1];
        fVar3 = local_14[2];
        fStack_3c = -local_14[3];
        fVar17 = local_1c[-4];
        fVar4 = local_1c[-3];
        fVar5 = local_1c[-2];
        fVar6 = *param_3;
        fVar7 = param_3[1];
        fVar8 = param_3[2];
        fVar16 = param_3[3];
        fStack_38 = -param_3[3];
        iVar11 = FUN_01013f90(0x34000000);
        if (iVar11 == 0) {
          fVar20 = fStack_3c * fVar16;
          fVar16 = fStack_38 * fVar16;
          fVar17 = fStack_3c * fVar4 + fVar15 * fVar17 + fStack_38 * fVar5;
          fVar18 = fStack_3c * fVar19 + fVar15 * fVar18 + fStack_38 * fVar3;
          fVar19 = fStack_3c * fVar7 + fVar15 * fVar6 + fStack_38 * fVar8;
          iVar11 = 0;
          pfVar12 = param_1;
          do {
            if (((iVar11 != local_18) && (iVar11 != iVar14)) &&
               (1.1920929e-07 <
                pfVar12[2] * fVar19 + *pfVar12 * fVar17 + pfVar12[3] + pfVar12[1] * fVar18))
            goto LAB_01079ee7;
            iVar11 = iVar11 + 1;
            pfVar12 = pfVar12 + 4;
          } while (iVar11 < param_2);
          if (local_2c == (local_28 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_30,0x10);
          }
          pfVar12 = (float *)(local_2c * 0x10 + (int)local_30);
          *pfVar12 = fVar17;
          pfVar12[1] = fVar18;
          pfVar12[2] = fVar19;
          pfVar12[3] = fVar20 + fVar15 * fVar7 + fVar16;
          local_2c = local_2c + 1;
        }
LAB_01079ee7:
        pfVar12 = local_14 + 4;
        pfVar9 = pfVar12;
      }
      local_1c = local_1c + 4;
      local_18 = local_20;
      local_14 = pfVar12;
    } while (local_20 < param_2);
  }
  pvVar10 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar10 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar10 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    local_1c = (float *)uVar2;
    puVar1[1] = local_1c;
    *(undefined4 **)((int)pvVar10 + 4) = puVar1 + 3;
  }
  if (2 < (int)local_2c) {
    fStack_38 = (float)local_2c;
    fStack_3c = local_30;
    uStack_34 = 0x10;
    uVar13 = FUN_010797c0(&fStack_3c,param_3,param_4);
    local_2c = 0;
    if (-1 < (int)local_28) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,local_28 << 4);
    }
    return uVar13;
  }
  local_2c = 0;
  if (-1 < (int)local_28) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,local_28 << 4);
  }
  return 0xffffffff;
}

// 01079FE0  FUN_01079fe0  size=2481  [between]
undefined1 * __thiscall FUN_01079fe0(float *param_1,undefined1 *param_2,float param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined1 local_290 [512];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  float *local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  char local_32;
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  float *local_20;
  float *local_1c;
  uint local_18;
  uint local_14;
  
  local_20 = (float *)(param_3 * 0.5);
  puVar6 = (undefined8 *)param_1[2];
  local_31 = *(char *)((int)puVar6 + 0x1a4);
  local_32 = *(char *)((int)puVar6 + 0x1a6);
  local_90 = *puVar6;
  local_88 = puVar6[1];
  local_54 = param_1;
  uVar33 = FUN_01077610();
  switch((int)uVar33) {
  case 0:
    local_1c = (float *)0x0;
    local_18 = 0;
    local_14 = 0x80000000;
    iVar10 = *(int *)((int)((ulonglong)uVar33 >> 0x20) + 0x20);
    local_50 = *(undefined8 *)(iVar10 + 0x10);
    uStack_48 = *(undefined8 *)(iVar10 + 0x18);
    FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,6,0x10);
    pfVar8 = local_1c + local_18 * 4;
    if (0 < (int)(6 - local_18)) {
      *pfVar8 = (float)local_50;
      pfVar8[1] = local_50._4_4_;
      pfVar8[2] = (float)uStack_48;
      pfVar8[3] = uStack_48._4_4_;
      pfVar13 = pfVar8 + 4;
      for (uVar12 = (6 - local_18) * 0x10 - 0xd >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pfVar13 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar13 = pfVar13 + 1;
      }
    }
    local_18 = 6;
    *local_1c = *local_1c + (float)local_20;
    local_1c[4] = local_1c[4] - (float)local_20;
    local_1c[9] = local_1c[9] + (float)local_20;
    local_1c[0xd] = local_1c[0xd] - (float)local_20;
    local_1c[0x12] = local_1c[0x12] + (float)local_20;
    local_1c[0x16] = local_1c[0x16] - (float)local_20;
    local_30 = CONCAT44(local_1c,(float)local_30);
    uStack_28 = 0x1000000006;
    FUN_01079670((int)&local_30 + 4,&local_90);
    local_18 = 0;
    if ((int)local_14 < 0) goto LAB_0107a93c;
    goto LAB_0107a172;
  case 1:
    local_1c = (float *)0x0;
    local_18 = 0;
    local_14 = 0x80000000;
    FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,10,0x10);
    FUN_01078920(0,&local_1c);
    uVar33 = *(undefined8 *)local_1c;
    uVar1 = *(undefined8 *)(local_1c + 2);
    uVar2 = *(ulonglong *)(local_1c + 4);
    uVar3 = *(undefined8 *)(local_1c + 6);
    local_70._0_4_ = (float)uVar2;
    local_70._4_4_ = (float)(uVar2 >> 0x20);
    uStack_68._0_4_ = (float)uVar3;
    uStack_68._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    local_30._0_4_ = (float)uVar33;
    local_30._4_4_ = (float)((ulonglong)uVar33 >> 0x20);
    uStack_28._0_4_ = (float)uVar1;
    uStack_28._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_70._0_4_ = (float)local_70 - (float)local_30;
    local_70._4_4_ = local_70._4_4_ - local_30._4_4_;
    uStack_68._0_4_ = (float)uStack_68 - (float)uStack_28;
    uStack_68._4_4_ = uStack_68._4_4_ - uStack_28._4_4_;
    fVar22 = local_70._4_4_ * 1.0 - (float)uStack_68 * 1.0;
    fVar24 = (float)uStack_68 * 1.0 - (float)local_70 * 1.0;
    fVar25 = (float)local_70 * 1.0 - local_70._4_4_ * 1.0;
    fVar26 = local_70._4_4_ * 0.0 - (float)uStack_68 * 0.0;
    fVar29 = (float)uStack_68 * 1.0 - (float)local_70 * 0.0;
    fVar30 = (float)local_70 * 0.0 - local_70._4_4_ * 1.0;
    fVar23 = fVar26 * fVar26;
    fVar20 = fVar29 * fVar29;
    fVar21 = fVar30 * fVar30;
    fVar17 = fVar22 * fVar22;
    fVar18 = fVar24 * fVar24;
    fVar19 = fVar25 * fVar25;
    auVar31._0_4_ = fVar20 + fVar23 + fVar21;
    auVar31._4_4_ = fVar20 + fVar23 + fVar21;
    auVar31._8_4_ = fVar20 + fVar23 + fVar21;
    auVar31._12_4_ = fVar20 + fVar23 + fVar21;
    uVar12 = -(uint)(fVar18 + fVar17 + fVar19 < auVar31._0_4_);
    uVar14 = -(uint)(fVar18 + fVar17 + fVar19 < auVar31._4_4_);
    uVar15 = -(uint)(fVar18 + fVar17 + fVar19 < auVar31._8_4_);
    uVar16 = -(uint)(fVar18 + fVar17 + fVar19 < auVar31._12_4_);
    fVar17 = (float)(uVar12 & (uint)fVar26 | ~uVar12 & (uint)fVar22);
    fVar18 = (float)(uVar14 & (uint)fVar29 | ~uVar14 & (uint)fVar24);
    fVar19 = (float)(uVar15 & (uint)fVar30 | ~uVar15 & (uint)fVar25);
    fVar23 = (float)(uVar16 & (uint)(uStack_68._4_4_ * 0.0 - uStack_68._4_4_ * 0.0) |
                    ~uVar16 & (uint)(uStack_68._4_4_ * 1.0 - uStack_68._4_4_ * 1.0));
    fVar24 = fVar19 * local_70._4_4_ - fVar18 * (float)uStack_68;
    fVar25 = fVar17 * (float)uStack_68 - fVar19 * (float)local_70;
    fVar26 = fVar18 * (float)local_70 - fVar17 * local_70._4_4_;
    fVar20 = fVar17 * fVar17;
    fVar21 = fVar18 * fVar18;
    fVar22 = fVar19 * fVar19;
    auVar27._0_4_ = fVar21 + fVar20 + fVar22;
    auVar27._4_4_ = fVar21 + fVar20 + fVar22;
    auVar27._8_4_ = fVar21 + fVar20 + fVar22;
    auVar27._12_4_ = fVar21 + fVar20 + fVar22;
    auVar32 = rsqrtps(auVar31,auVar27);
    fVar20 = auVar32._0_4_;
    fVar21 = auVar32._4_4_;
    fVar22 = auVar32._8_4_;
    fVar29 = auVar32._12_4_;
    local_80 = CONCAT44((float)(~-(uint)(auVar27._4_4_ <= 0.0) &
                               (uint)((3.0 - fVar21 * auVar27._4_4_ * fVar21) * fVar21 * 0.5)) *
                        fVar18 * (float)local_20,
                        (float)(~-(uint)(auVar27._0_4_ <= 0.0) &
                               (uint)((3.0 - fVar20 * auVar27._0_4_ * fVar20) * fVar20 * 0.5)) *
                        fVar17 * (float)local_20);
    uStack_78 = CONCAT44((float)(~-(uint)(auVar27._12_4_ <= 0.0) &
                                (uint)((3.0 - fVar29 * auVar27._12_4_ * fVar29) * fVar29 * 0.5)) *
                         fVar23 * (float)local_20,
                         (float)(~-(uint)(auVar27._8_4_ <= 0.0) &
                                (uint)((3.0 - fVar22 * auVar27._8_4_ * fVar22) * fVar22 * 0.5)) *
                         fVar19 * (float)local_20);
    fVar17 = fVar24 * fVar24;
    fVar18 = fVar25 * fVar25;
    fVar19 = fVar26 * fVar26;
    auVar28._4_4_ = fVar17;
    auVar28._0_4_ = fVar17;
    auVar28._8_4_ = fVar17;
    auVar28._12_4_ = fVar17;
    fVar20 = fVar18 + fVar17 + fVar19;
    fVar21 = fVar18 + fVar17 + fVar19;
    fVar22 = fVar18 + fVar17 + fVar19;
    fVar19 = fVar18 + fVar17 + fVar19;
    auVar5._4_4_ = fVar21;
    auVar5._0_4_ = fVar20;
    auVar5._8_4_ = fVar22;
    auVar5._12_4_ = fVar19;
    auVar32 = rsqrtps(auVar28,auVar5);
    fVar17 = auVar32._0_4_;
    fVar18 = auVar32._4_4_;
    fVar29 = auVar32._8_4_;
    fVar30 = auVar32._12_4_;
    local_50 = CONCAT44((float)(~-(uint)(fVar21 <= 0.0) &
                               (uint)((3.0 - fVar18 * fVar21 * fVar18) * fVar18 * 0.5)) * fVar25 *
                        (float)local_20,
                        (float)(~-(uint)(fVar20 <= 0.0) &
                               (uint)((3.0 - fVar17 * fVar20 * fVar17) * fVar17 * 0.5)) * fVar24 *
                        (float)local_20);
    uStack_48 = CONCAT44((float)(~-(uint)(fVar19 <= 0.0) &
                                (uint)((3.0 - fVar30 * fVar19 * fVar30) * fVar30 * 0.5)) *
                         (fVar23 * uStack_68._4_4_ - fVar23 * uStack_68._4_4_) * (float)local_20,
                         (float)(~-(uint)(fVar22 <= 0.0) &
                                (uint)((3.0 - fVar29 * fVar22 * fVar29) * fVar29 * 0.5)) * fVar26 *
                         (float)local_20);
    local_70 = uVar2;
    uStack_68 = uVar3;
    local_30 = uVar33;
    uStack_28 = uVar1;
    if (local_18 == (local_14 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
    }
    uVar12 = local_18 + 1;
    pfVar8 = local_1c + local_18 * 4;
    *pfVar8 = (float)local_80 + (float)local_30;
    pfVar8[1] = local_80._4_4_ + local_30._4_4_;
    pfVar8[2] = (float)uStack_78 + (float)uStack_28;
    pfVar8[3] = uStack_78._4_4_ + uStack_28._4_4_;
    local_18 = uVar12;
    if (uVar12 == (local_14 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
    }
    pfVar8 = local_1c + local_18 * 4;
    local_18 = local_18 + 1;
    *pfVar8 = (float)local_30 - (float)local_80;
    pfVar8[1] = local_30._4_4_ - local_80._4_4_;
    pfVar8[2] = (float)uStack_28 - (float)uStack_78;
    pfVar8[3] = uStack_28._4_4_ - uStack_78._4_4_;
    fVar17 = (float)local_30;
    fVar18 = local_30._4_4_;
    fVar19 = (float)uStack_28;
    fVar23 = uStack_28._4_4_;
    if (local_18 == (local_14 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
      fVar17 = (float)local_30;
      fVar18 = local_30._4_4_;
      fVar19 = (float)uStack_28;
      fVar23 = uStack_28._4_4_;
    }
    pfVar8 = local_1c + local_18 * 4;
    local_18 = local_18 + 1;
    *pfVar8 = (float)local_50 + fVar17;
    pfVar8[1] = local_50._4_4_ + fVar18;
    pfVar8[2] = (float)uStack_48 + fVar19;
    pfVar8[3] = uStack_48._4_4_ + fVar23;
    if (local_18 == (local_14 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
      fVar17 = (float)local_30;
      fVar18 = local_30._4_4_;
      fVar19 = (float)uStack_28;
      fVar23 = uStack_28._4_4_;
    }
    pfVar8 = local_1c + local_18 * 4;
    local_18 = local_18 + 1;
    *pfVar8 = fVar17 - (float)local_50;
    pfVar8[1] = fVar18 - local_50._4_4_;
    pfVar8[2] = fVar19 - (float)uStack_48;
    pfVar8[3] = fVar23 - uStack_48._4_4_;
    if (local_18 == (local_14 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
    }
    pfVar8 = local_1c + local_18 * 4;
    local_18 = local_18 + 1;
    *pfVar8 = (float)local_80 + (float)local_70;
    pfVar8[1] = local_80._4_4_ + local_70._4_4_;
    pfVar8[2] = (float)uStack_78 + (float)uStack_68;
    pfVar8[3] = uStack_78._4_4_ + uStack_68._4_4_;
    if (local_18 == (local_14 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
    }
    pfVar8 = local_1c + local_18 * 4;
    local_18 = local_18 + 1;
    *pfVar8 = (float)local_70 - (float)local_80;
    pfVar8[1] = local_70._4_4_ - local_80._4_4_;
    pfVar8[2] = (float)uStack_68 - (float)uStack_78;
    pfVar8[3] = uStack_68._4_4_ - uStack_78._4_4_;
    if (local_18 == (local_14 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
    }
    pfVar8 = local_1c + local_18 * 4;
    local_18 = local_18 + 1;
    *pfVar8 = (float)local_50 + (float)local_70;
    pfVar8[1] = local_50._4_4_ + local_70._4_4_;
    pfVar8[2] = (float)uStack_48 + (float)uStack_68;
    pfVar8[3] = uStack_48._4_4_ + uStack_68._4_4_;
    if (local_18 == (local_14 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
    }
    pfVar8 = local_1c + local_18 * 4;
    local_18 = local_18 + 1;
    *pfVar8 = (float)local_70 - (float)local_50;
    pfVar8[1] = local_70._4_4_ - local_50._4_4_;
    pfVar8[2] = (float)uStack_68 - (float)uStack_48;
    pfVar8[3] = uStack_68._4_4_ - uStack_48._4_4_;
    break;
  case 2:
    local_1c = (float *)0x0;
    local_18 = 0;
    local_14 = 0x80000000;
    puVar6 = (undefined8 *)FUN_01078010();
    local_80 = *puVar6;
    uStack_78 = puVar6[1];
    puVar6 = (undefined8 *)FUN_01077650();
    local_50 = *puVar6;
    uStack_48 = puVar6[1];
    iVar10 = FUN_01077820();
    iVar10 = iVar10 * 3;
    if ((int)(local_14 & 0x3fffffff) < iVar10) {
      iVar7 = (local_14 & 0x3fffffff) * 2;
      if (iVar7 <= iVar10) {
        iVar7 = iVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,iVar7,0x10);
    }
    FUN_01078920(0,&local_1c);
    fVar17 = param_3;
    fVar18 = param_3;
    fVar19 = param_3;
    fVar23 = param_3;
    iVar10 = FUN_01077830();
    if (iVar10 != 0) {
      local_70 = CONCAT44(local_50._4_4_ * fVar18,(float)local_50 * fVar17);
      uStack_68 = CONCAT44(uStack_48._4_4_ * fVar23,(float)uStack_48 * fVar19);
      local_30 = CONCAT44(0.0 - fVar18,0.0 - fVar17);
      uStack_28 = CONCAT44(0.0 - fVar23,0.0 - fVar19);
      do {
        local_20 = (float *)FUN_01077660(iVar10);
        if (local_18 == (local_14 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
        }
        pfVar8 = local_1c + local_18 * 4;
        local_18 = local_18 + 1;
        fVar17 = local_20[1];
        fVar18 = local_20[2];
        fVar19 = local_20[3];
        *pfVar8 = (float)local_70 + *local_20;
        pfVar8[1] = local_70._4_4_ + fVar17;
        pfVar8[2] = (float)uStack_68 + fVar18;
        pfVar8[3] = uStack_68._4_4_ + fVar19;
        if (local_18 == (local_14 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
        }
        pfVar8 = local_1c + local_18 * 4;
        local_18 = local_18 + 1;
        fVar17 = local_20[1];
        fVar18 = local_20[2];
        fVar19 = local_20[3];
        *pfVar8 = (float)local_30 * (float)local_50 + *local_20;
        pfVar8[1] = local_30._4_4_ * local_50._4_4_ + fVar17;
        pfVar8[2] = (float)uStack_28 * (float)uStack_48 + fVar18;
        pfVar8[3] = uStack_28._4_4_ * uStack_48._4_4_ + fVar19;
        iVar10 = FUN_010778e0(iVar10);
      } while (iVar10 != 0);
    }
    local_30 = CONCAT44(local_1c,(float)local_30);
    uStack_28 = CONCAT44(0x10,local_18);
    iVar10 = FUN_01079670((int)&local_30 + 4,&local_90);
    if (iVar10 != 3) {
      local_18 = 0;
      if ((local_14 & 0x3fffffff) == 0) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
      }
      pfVar8 = local_1c + local_18 * 4;
      *pfVar8 = (float)local_80;
      pfVar8[1] = local_80._4_4_;
      pfVar8[2] = (float)uStack_78;
      pfVar8[3] = uStack_78._4_4_;
      local_18 = local_18 + 1;
      local_30 = CONCAT44(local_1c,(float)local_30);
      uStack_28 = CONCAT44(0x10,local_18);
      FUN_01079670((int)&local_30 + 4,&local_90);
      FUN_01079fe0(param_2,param_3);
      local_18 = 0;
      if (-1 < (int)local_14) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
      }
      return param_2;
    }
    goto LAB_0107a544;
  case 3:
    local_1c = (float *)0x0;
    local_18 = 0;
    local_14 = 0x80000000;
    iVar10 = FUN_01077940();
    uVar12 = iVar10 * 6;
    if (0 < (int)uVar12) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,uVar12 & ((int)uVar12 < 0) - 1,0x10);
    }
    FUN_01078920(0,&local_1c);
    local_30 = CONCAT44(param_3,param_3);
    uStack_28 = CONCAT44(param_3,param_3);
    fVar17 = param_3;
    fVar18 = param_3;
    fVar19 = param_3;
    pfVar8 = (float *)FUN_01077950();
    local_20 = pfVar8;
    if (pfVar8 != (float *)0x0) {
      local_50 = 0;
      uStack_48 = 0;
      do {
        local_20 = pfVar8;
        FUN_01079100(&local_80,pfVar8);
        auVar32._4_4_ = -(uint)(NAN(local_80._4_4_) || NAN(local_50._4_4_));
        auVar32._0_4_ = -(uint)(NAN((float)local_80) || NAN((float)local_50));
        auVar32._8_4_ = -(uint)(NAN((float)uStack_78) || NAN((float)uStack_48));
        auVar32._12_4_ = -(uint)(NAN(uStack_78._4_4_) || NAN(uStack_48._4_4_));
        uVar12 = movmskps(extraout_EDX,auVar32);
        if ((uVar12 & 7) == 0) {
          fVar23 = ABS(((float)uStack_78 * (float)uStack_78 +
                       local_80._4_4_ * local_80._4_4_ + (float)local_80 * (float)local_80) - 1.0);
          local_70 = (ulonglong)(uint)fVar23;
          uStack_68 = 0;
          if (fVar23 < 0.0001) {
            iVar10 = 0;
            local_70 = CONCAT44(local_80._4_4_ * fVar17,(float)local_80 * param_3);
            uStack_68 = CONCAT44(uStack_78._4_4_ * fVar19,(float)uStack_78 * fVar18);
            do {
              uVar9 = FUN_01077ab0(local_20,iVar10);
              local_54 = (float *)FUN_01077660(uVar9);
              if (local_18 == (local_14 & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
              }
              uVar12 = local_18 + 1;
              fVar17 = local_54[1];
              fVar18 = local_54[2];
              fVar19 = local_54[3];
              pfVar8 = local_1c + local_18 * 4;
              iVar10 = iVar10 + 1;
              *pfVar8 = *local_54 + (float)local_70;
              pfVar8[1] = fVar17 + local_70._4_4_;
              pfVar8[2] = fVar18 + (float)uStack_68;
              pfVar8[3] = fVar19 + uStack_68._4_4_;
              local_18 = uVar12;
            } while (iVar10 < 3);
            pfVar8 = local_20;
            param_3 = (float)local_30;
            fVar17 = local_30._4_4_;
            fVar18 = (float)uStack_28;
            fVar19 = uStack_28._4_4_;
          }
        }
        pfVar8 = (float *)FUN_01077a00(pfVar8);
      } while (pfVar8 != (float *)0x0);
      local_20 = (float *)0x0;
    }
    break;
  default:
    hkErrStream::hkErrStream(local_290,0x200);
    FUN_01018d00("Invalid dimemsions for that operation");
    iVar10 = (**(code **)(*DAT_01f8fc58 + 0xc))
                       (3,0x172cdf48,local_290,"GeometryProcessing\\ConvexHull\\hkgpConvexHull.cpp",
                        0x1a0);
    if (iVar10 != 0) {
      pcVar4 = (code *)swi(3);
      puVar11 = (undefined1 *)(*pcVar4)();
      return puVar11;
    }
    hkBaseObject::hkBaseObject_38();
    goto LAB_0107a93c;
  }
  local_30 = CONCAT44(local_1c,(float)local_30);
  uStack_28 = CONCAT44(0x10,local_18);
  FUN_01079670((int)&local_30 + 4,&local_90);
LAB_0107a544:
  local_18 = 0;
  if (-1 < (int)local_14) {
LAB_0107a172:
    local_18 = 0;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
  }
LAB_0107a93c:
  iVar10 = FUN_01077610();
  if (iVar10 != 3) {
    *param_2 = 0;
    return param_2;
  }
  if (local_32 != '\0') {
    FUN_01079310(0x3f7fff58,extraout_ECX & 0xffffff00);
  }
  if (local_31 != '\0') {
    FUN_010790f0();
  }
  *param_2 = 1;
  return param_2;
}

// 0107A9B0  FUN_0107a9b0  size=1983  [__FILE__]
void __thiscall FUN_0107a9b0(int param_1,float param_2,int *param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulonglong *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint extraout_ECX;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 in_XMM3 [16];
  float fVar33;
  float fVar37;
  undefined1 in_XMM4 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  undefined1 auVar36 [16];
  undefined8 uVar39;
  char *pcVar40;
  undefined1 local_280 [512];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [16];
  float local_60;
  float *pfStack_5c;
  int iStack_58;
  int iStack_54;
  float *local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  iVar9 = *(int *)(param_1 + 8);
  if (*(char *)(iVar9 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_280,0x200);
    uVar14 = *(undefined4 *)(iVar9 + 0x1a0);
    pcVar40 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar14);
    FUN_01018d00(pcVar40);
    iVar9 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_280,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x1a4) == '\0') {
    puVar10 = (undefined8 *)FUN_01078010();
  }
  else {
    puVar10 = (undefined8 *)FUN_01077d00();
  }
  local_30 = *puVar10;
  uStack_28 = puVar10[1];
  if (*param_3 == 0) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x80000000;
    iVar9 = FUN_01077820();
    uVar17 = 0;
    if (0 < iVar9) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,iVar9,0x10);
      uVar17 = local_14;
    }
    fVar21 = (float)local_30;
    fVar22 = local_30._4_4_;
    fVar23 = (float)uStack_28;
    fVar25 = uStack_28._4_4_;
    if ((param_2 < 0.0) && (local_20 = FUN_01077830(), local_20 != 0)) {
      in_XMM4._0_12_ = ZEXT812(0x80000000);
      in_XMM4._12_4_ = 0;
      fVar24 = 0.0;
      do {
        pfVar11 = (float *)FUN_01077660(local_20);
        fVar26 = (*pfVar11 - fVar21) * (*pfVar11 - fVar21);
        fVar27 = (pfVar11[1] - fVar22) * (pfVar11[1] - fVar22);
        fVar28 = (pfVar11[2] - fVar23) * (pfVar11[2] - fVar23);
        fVar29 = fVar27 + fVar26 + fVar28;
        auVar35._4_4_ = fVar27 + fVar26 + fVar28;
        auVar35._0_4_ = fVar29;
        auVar35._8_4_ = fVar27 + fVar26 + fVar28;
        auVar35._12_4_ = fVar27 + fVar26 + fVar28;
        in_XMM3 = rsqrtps(in_XMM3,auVar35);
        fVar26 = in_XMM3._0_4_;
        fVar26 = (float)(~-(uint)(fVar29 <= fVar24) &
                        (uint)((3.0 - fVar26 * fVar29 * fVar26) * fVar26 * 0.5 * fVar29));
        if (fVar26 < (float)((uint)param_2 ^ in_XMM4._0_4_)) {
          param_2 = (float)((uint)fVar26 ^ in_XMM4._0_4_);
        }
        local_20 = FUN_010778e0(local_20);
      } while (local_20 != 0);
    }
    local_20 = FUN_01077830();
    if (local_20 != 0) {
      local_70 = ZEXT816(0);
      local_60 = 3.0;
      pfStack_5c = (float *)0x40400000;
      iStack_58 = 0x40400000;
      iStack_54 = 0x40400000;
      local_40 = 0x3f0000003f000000;
      uStack_38 = 0x3f0000003f000000;
      do {
        uVar39 = FUN_01077660(local_20);
        uVar18 = (uint)((ulonglong)uVar39 >> 0x20);
        local_44 = (float *)uVar39;
        fVar29 = *local_44 - fVar21;
        fVar30 = local_44[1] - fVar22;
        fVar31 = local_44[2] - fVar23;
        fVar24 = fVar29 * fVar29;
        fVar26 = fVar30 * fVar30;
        fVar27 = fVar31 * fVar31;
        fVar28 = fVar26 + fVar24 + fVar27;
        auVar5._4_4_ = fVar26 + fVar24 + fVar27;
        auVar5._0_4_ = fVar28;
        auVar5._8_4_ = fVar26 + fVar24 + fVar27;
        auVar5._12_4_ = fVar26 + fVar24 + fVar27;
        in_XMM4 = rsqrtps(in_XMM4,auVar5);
        fVar24 = in_XMM4._0_4_;
        fVar26 = (float)(~-(uint)(fVar28 <= (float)local_70._0_4_) &
                        (uint)((local_60 - fVar24 * fVar28 * fVar24) * (float)local_40 * fVar24 *
                              fVar28));
        fVar24 = (float)param_3[1];
        if (fVar26 <= fVar24) {
          if (uVar18 == (uVar17 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
            uVar39 = CONCAT44(local_18,local_44);
            fVar21 = (float)local_30;
            fVar22 = local_30._4_4_;
            fVar23 = (float)uStack_28;
            fVar25 = uStack_28._4_4_;
          }
          local_44 = (float *)uVar39;
          uVar14 = local_44[1];
          uVar15 = local_44[2];
          uVar7 = local_44[3];
          puVar13 = (undefined4 *)((int)((ulonglong)uVar39 >> 0x20) * 0x10 + local_1c);
          *puVar13 = *local_44;
          puVar13[1] = uVar14;
          puVar13[2] = uVar15;
          puVar13[3] = uVar7;
        }
        else {
          fVar27 = fVar26 + param_2;
          if (fVar26 + param_2 < fVar24) {
            fVar27 = fVar24;
          }
          fVar27 = fVar27 / fVar26;
          local_80 = fVar27 * fVar29 + fVar21;
          fStack_7c = fVar27 * fVar30 + fVar22;
          fStack_78 = fVar27 * fVar31 + fVar23;
          fStack_74 = fVar27 * (local_44[3] - fVar25) + fVar25;
          if (uVar18 == (uVar17 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
            uVar39 = CONCAT44(local_18,local_44);
            fVar21 = (float)local_30;
            fVar22 = local_30._4_4_;
            fVar23 = (float)uStack_28;
            fVar25 = uStack_28._4_4_;
          }
          local_44 = (float *)uVar39;
          pfVar11 = (float *)((int)((ulonglong)uVar39 >> 0x20) * 0x10 + local_1c);
          *pfVar11 = local_80;
          pfVar11[1] = fStack_7c;
          pfVar11[2] = fStack_78;
          pfVar11[3] = fStack_74;
        }
        local_18 = local_18 + 1;
        local_20 = FUN_010778e0(local_20);
        uVar17 = local_14;
      } while (local_20 != 0);
    }
    uVar39 = FUN_01077610();
    uStack_28 = CONCAT44(0x10,(int)((ulonglong)uVar39 >> 0x20));
    if ((int)uVar39 == 2) {
      local_30 = CONCAT44(local_1c,(float)local_30);
      uVar14 = FUN_01077600();
      uVar15 = FUN_01077650(uVar14);
      FUN_010797c0((int)&local_30 + 4,uVar15,uVar14);
    }
    else {
      local_30 = CONCAT44(local_1c,(float)local_30);
      uVar14 = FUN_01077600();
      FUN_01079670((int)&local_30 + 4,uVar14);
    }
    local_18 = 0;
    if (-1 < (int)local_14) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
    }
  }
  else if (*param_3 - 1U < 2) {
    pfStack_5c = (float *)0x0;
    iStack_58 = 0;
    iStack_54 = -0x80000000;
    FUN_01078920(0,&pfStack_5c);
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x80000000;
    iVar9 = FUN_010776e0();
    if ((int)(local_14 & 0x3fffffff) < iVar9) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,iVar9,0x10);
    }
    if (param_2 < 0.0) {
      iVar16 = 0;
      iVar9 = FUN_010776e0();
      if (0 < iVar9) {
        do {
          pfVar11 = (float *)FUN_01077780(iVar16);
          fVar21 = pfVar11[2] * (float)uStack_28 + *pfVar11 * (float)local_30 +
                   pfVar11[3] + pfVar11[1] * local_30._4_4_;
          if (param_2 < fVar21) {
            param_2 = fVar21;
          }
          iVar16 = iVar16 + 1;
          iVar9 = FUN_010776e0();
        } while (iVar16 < iVar9);
      }
    }
    iVar16 = 0;
    iVar9 = FUN_010776e0();
    if (0 < iVar9) {
      do {
        puVar12 = (ulonglong *)FUN_01077780(iVar16);
        uVar2 = *puVar12;
        local_40._0_4_ = (float)uVar2;
        local_40._4_4_ = (float)(uVar2 >> 0x20);
        uStack_38._0_4_ = (float)puVar12[1];
        uStack_38._4_4_ = (float)(puVar12[1] >> 0x20);
        fVar21 = (float)param_3[1] +
                 uStack_38._4_4_ + local_40._4_4_ * local_30._4_4_ +
                 (float)uStack_38 * (float)uStack_28 + (float)local_40 * (float)local_30;
        if (fVar21 <= param_2) {
          fVar21 = param_2;
        }
        uStack_38 = CONCAT44(uStack_38._4_4_ - fVar21,(float)uStack_38);
        local_40 = uVar2;
        if (local_18 == (local_14 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
        }
        puVar13 = (undefined4 *)(local_18 * 0x10 + local_1c);
        *puVar13 = (float)local_40;
        puVar13[1] = local_40._4_4_;
        puVar13[2] = (float)uStack_38;
        puVar13[3] = uStack_38._4_4_;
        local_18 = local_18 + 1;
        iVar16 = iVar16 + 1;
        iVar9 = FUN_010776e0();
      } while (iVar16 < iVar9);
    }
    iVar9 = FUN_01077610();
    if (iVar9 == 2) {
      uVar14 = FUN_01077600();
      uVar15 = FUN_01077650(uVar14);
      FUN_01079d00(local_1c,local_18,uVar15,uVar14);
    }
    else {
      uVar14 = FUN_01077600();
      FUN_010798d0(local_1c,local_18,uVar14);
    }
    if (*param_3 == 2) {
      fVar21 = param_2 * param_2;
      local_40 = local_40 & 0xffffffff;
      uStack_38 = -0x8000000000000000;
      local_30 = CONCAT44(fVar21,fVar21);
      uStack_28 = CONCAT44(fVar21,fVar21);
      FUN_01078920(0,(int)&local_40 + 4);
      local_44 = (float *)0x0;
      if (0 < (int)(float)uStack_38) {
        local_20 = 0;
        do {
          fVar21 = 3.40282e+38;
          iVar9 = -1;
          iVar16 = 0;
          if (0 < iStack_58) {
            auVar35 = *(undefined1 (*) [16])(local_20 + (int)local_40._4_4_);
            pfVar11 = pfStack_5c;
            do {
              fVar22 = *pfVar11 - auVar35._0_4_;
              fVar23 = pfVar11[1] - auVar35._4_4_;
              fVar25 = pfVar11[2] - auVar35._8_4_;
              fVar22 = fVar23 * fVar23 + fVar22 * fVar22 + fVar25 * fVar25;
              if (fVar22 < fVar21) {
                iVar9 = iVar16;
                fVar21 = fVar22;
              }
              iVar16 = iVar16 + 1;
              pfVar11 = pfVar11 + 4;
            } while (iVar16 < iStack_58);
            if ((-1 < iVar9) && ((float)local_30 < fVar21)) {
              pfVar1 = pfStack_5c + iVar9 * 4;
              fVar21 = pfVar1[1];
              fVar22 = pfVar1[2];
              fVar23 = pfVar1[3];
              fVar30 = auVar35._0_4_ - *pfVar1;
              fVar31 = auVar35._4_4_ - fVar21;
              fVar32 = auVar35._8_4_ - fVar22;
              fVar33 = auVar35._12_4_ - fVar23;
              fVar25 = fVar30 * fVar30;
              fVar24 = fVar31 * fVar31;
              fVar26 = fVar32 * fVar32;
              auVar34._0_12_ = ZEXT812(0);
              auVar34._12_4_ = 0;
              fVar27 = fVar24 + fVar25 + fVar26;
              fVar28 = fVar24 + fVar25 + fVar26;
              fVar29 = fVar24 + fVar25 + fVar26;
              fVar26 = fVar24 + fVar25 + fVar26;
              uVar17 = -(uint)(0.0 - fVar27 < 0.0);
              uVar18 = -(uint)(0.0 - fVar28 < 0.0);
              uVar19 = -(uint)(0.0 - fVar29 < 0.0);
              uVar20 = -(uint)(0.0 - fVar26 < 0.0);
              auVar4._4_4_ = fVar28;
              auVar4._0_4_ = fVar27;
              auVar4._8_4_ = fVar29;
              auVar4._12_4_ = fVar26;
              auVar35 = rsqrtps(auVar34,auVar4);
              fVar25 = auVar35._0_4_;
              fVar24 = auVar35._4_4_;
              fVar37 = auVar35._8_4_;
              fVar38 = auVar35._12_4_;
              auVar6._4_4_ = uVar18;
              auVar6._0_4_ = uVar17;
              auVar6._8_4_ = uVar19;
              auVar6._12_4_ = uVar20;
              iVar9 = movmskps(pfVar11,auVar6);
              if (iVar9 != 0) {
                auVar36._0_8_ = (ulonglong)(uint)param_2 & 0xffffffff7fffffff;
                auVar36._8_8_ = 0;
                local_70._0_4_ = (undefined4)auVar36._0_8_;
                pfVar11 = (float *)(local_20 + (int)local_40._4_4_);
                *pfVar11 = (float)((uint)((float)(~-(uint)(fVar27 <= 0.0) &
                                                 (uint)((3.0 - fVar25 * fVar27 * fVar25) *
                                                       fVar25 * 0.5)) * fVar30) & uVar17 |
                                  ~uVar17 & (uint)fVar30) * (float)local_70._0_4_ + *pfVar1;
                pfVar11[1] = (float)((uint)((float)(~-(uint)(fVar28 <= 0.0) &
                                                   (uint)((3.0 - fVar24 * fVar28 * fVar24) *
                                                         fVar24 * 0.5)) * fVar31) & uVar18 |
                                    ~uVar18 & (uint)fVar31) * (float)local_70._0_4_ + fVar21;
                pfVar11[2] = (float)((uint)((float)(~-(uint)(fVar29 <= 0.0) &
                                                   (uint)((3.0 - fVar37 * fVar29 * fVar37) *
                                                         fVar37 * 0.5)) * fVar32) & uVar19 |
                                    ~uVar19 & (uint)fVar32) * (float)local_70._0_4_ + fVar22;
                pfVar11[3] = (float)((uint)((float)(~-(uint)(fVar26 <= 0.0) &
                                                   (uint)((3.0 - fVar38 * fVar26 * fVar38) *
                                                         fVar38 * 0.5)) * fVar33) & uVar20 |
                                    ~uVar20 & (uint)fVar33) * (float)local_70._0_4_ + fVar23;
                local_70 = auVar36;
              }
            }
          }
          local_20 = local_20 + 0x10;
          local_44 = (float *)((int)local_44 + 1);
        } while ((int)local_44 < (int)(float)uStack_38);
      }
      uVar39 = FUN_01077610();
      uStack_28 = CONCAT44(0x10,(int)((ulonglong)uVar39 >> 0x20));
      if ((int)uVar39 == 2) {
        local_30 = CONCAT44(local_40._4_4_,(float)local_30);
        uVar14 = FUN_01077600();
        uVar15 = FUN_01077650(uVar14);
        FUN_010797c0((int)&local_30 + 4,uVar15,uVar14);
      }
      else {
        local_30 = CONCAT44(local_40._4_4_,(float)local_30);
        uVar14 = FUN_01077600();
        FUN_01079670((int)&local_30 + 4,uVar14);
      }
      lVar8 = uStack_38;
      uVar17 = (uint)uStack_38._4_4_;
      uStack_38 = (ulonglong)(uint)uStack_38._4_4_ << 0x20;
      if (-1 < lVar8) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40._4_4_,uVar17 << 4);
      }
    }
    local_18 = 0;
    if (-1 < (int)local_14) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
    }
    local_1c = 0;
    iStack_58 = 0;
    local_14 = 0x80000000;
    if (-1 < iStack_54) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(pfStack_5c,iStack_54 << 4);
    }
  }
  FUN_010790f0();
  FUN_01079310(0x3f7fff58,extraout_ECX & 0xffffff00);
  return;
}

// 0107B180  FUN_0107b180  size=29  [between]
void FUN_0107b180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01089a70(param_1,param_2,param_3);
  return;
}

// 0107B1A0  FUN_0107b1a0  size=27  [between]
undefined4 FUN_0107b1a0(undefined4 param_1,undefined4 param_2)

{
  FUN_0108aa10(param_1,param_2);
  return param_1;
}

// 0107B1C0  FUN_0107b1c0  size=43  [between]
undefined1 * FUN_0107b1c0(undefined1 *param_1,undefined4 param_2,char param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0108ae40(param_2,param_3 != '\0');
  *param_1 = uVar1;
  return param_1;
}

// 0107B1F0  FUN_0107b1f0  size=12  [between]
void FUN_0107b1f0(void)

{
  FUN_0108be40();
  return;
}

// 0107B200  FUN_0107b200  size=143  [between]
void FUN_0107b200(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 local_60 [64];
  float local_20 [4];
  
  FUN_0107b1f0(local_20,local_60);
  *param_2 = local_20[0];
  *param_1 = local_20[0];
  uVar4 = FUN_01077610();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  if (iVar2 < (int)uVar4) {
    do {
      fVar1 = local_20[iVar2];
      fVar3 = *param_1;
      if (fVar1 <= *param_1) {
        fVar3 = fVar1;
      }
      *param_1 = fVar3;
      fVar3 = *param_2;
      if (*param_2 <= fVar1) {
        fVar3 = fVar1;
      }
      *param_2 = fVar3;
      uVar4 = FUN_01077610();
      iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    } while (iVar2 < (int)uVar4);
  }
  return;
}

// 0107B450  FUN_0107b450  size=38  [between]
void FUN_0107b450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0108a030(param_1,param_2,param_3,param_4);
  return;
}

// 0107B600  FUN_0107b600  size=12  [between]
void FUN_0107b600(void)

{
  FUN_0108bab0();
  return;
}

// 0107B610  FUN_0107b610  size=12  [between]
void FUN_0107b610(void)

{
  FUN_0108c000();
  return;
}

// 0107B620  FUN_0107b620  size=26  [between]
float10 FUN_0107b620(void)

{
  float local_c;
  undefined1 local_8 [4];
  
  FUN_0107b200(&local_c,local_8);
  return (float10)local_c;
}

// 0107B640  FUN_0107b640  size=26  [between]
float10 FUN_0107b640(void)

{
  undefined1 local_c [4];
  float local_8;
  
  FUN_0107b200(local_c,&local_8);
  return (float10)local_8;
}

// 0107B660  FUN_0107b660  size=11  [between]
int FUN_0107b660(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0107B670  FUN_0107b670  size=11  [between]
int FUN_0107b670(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0107B690  FUN_0107b690  size=8  [between]
undefined4 FUN_0107b690(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0107B6A0  FUN_0107b6a0  size=64  [between]
undefined4 __thiscall FUN_0107b6a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x20);
  while( true ) {
    iVar1 = *(int *)((param_2 - param_1) + (int)piVar2);
    if (*piVar2 < iVar1) {
      return 0xffffffff;
    }
    if (iVar1 < *piVar2) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (2 < iVar3) {
      return 0;
    }
  }
  return 1;
}

// 0107B6E0  FUN_0107b6e0  size=36  [between]
undefined4 FUN_0107b6e0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) &&
     (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))) {
    return 1;
  }
  return 0;
}

// 0107B710  FUN_0107b710  size=50  [between]
undefined4 FUN_0107b710(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) &&
     (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))) {
    return 0;
  }
  return 1;
}

// 0107B750  FUN_0107b750  size=81  [between]
undefined4 FUN_0107b750(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_2 + 0x20);
  while( true ) {
    iVar1 = *(int *)((param_1 - param_2) + (int)piVar2);
    if (iVar1 < *piVar2) {
      return 0xffffff01;
    }
    if (*piVar2 < iVar1) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (2 < iVar3) {
      return 0;
    }
  }
  return 0;
}

// 0107B7B0  FUN_0107b7b0  size=8  [between]
undefined4 FUN_0107b7b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0107B7C0  FUN_0107b7c0  size=24  [between]
bool FUN_0107b7c0(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x38) < *(int *)(param_2 + 0x38);
}

// 0107B7F0  FUN_0107b7f0  size=11  [between]
int FUN_0107b7f0(undefined4 param_1,int param_2)

{
  return param_2 + 0x10;
}

// 0107B800  FUN_0107b800  size=52  [between]
int FUN_0107b800(float param_1)

{
  if (param_1 < 0.0) {
    return (int)(param_1 + -0.5);
  }
  return (int)(param_1 + 0.5);
}

// 0107B840  FUN_0107b840  size=24  [between]
void FUN_0107b840(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 ^ 0x80000000;
  param_1[1] = uVar1 ^ 0x80000000;
  param_1[2] = uVar2 ^ 0x80000000;
  param_1[3] = uVar3 ^ 0x80000000;
  return;
}

// 0107B860  FUN_0107b860  size=54  [between]
int FUN_0107b860(int param_1,int param_2,int param_3)

{
  return (*(int *)(param_3 + 0x24) - *(int *)(param_1 + 0x24)) *
         (*(int *)(param_2 + 0x20) - *(int *)(param_1 + 0x20)) -
         (*(int *)(param_2 + 0x24) - *(int *)(param_1 + 0x24)) *
         (*(int *)(param_3 + 0x20) - *(int *)(param_1 + 0x20));
}

// 0107B8A0  FUN_0107b8a0  size=16  [between]
uint __thiscall FUN_0107b8a0(undefined1 (*param_1) [16],uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = movmskps(in_EAX,*param_1);
  return uVar1 & param_2;
}

// 0107B8D0  FUN_0107b8d0  size=22  [between]
void __thiscall
FUN_0107b8d0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = maxps(*param_2,*param_3);
  *param_1 = auVar1;
  return;
}

// 0107B8F0  FUN_0107b8f0  size=18  [between]
void __thiscall FUN_0107b8f0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = param_2 | 0x3f000000;
  return;
}

// 0107B930  FUN_0107b930  size=30  [between]
void __thiscall FUN_0107b930(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = minps(*param_1,*param_2);
  *param_1 = auVar1;
  auVar1 = maxps(param_1[1],*param_2);
  param_1[1] = auVar1;
  return;
}

// 0107BA00  FUN_0107ba00  size=15  [between]
int __thiscall FUN_0107ba00(int param_1,int param_2)

{
  return param_2 * 0x10 + param_1;
}

// 0107BA70  FUN_0107ba70  size=14  [between]
undefined4 __thiscall FUN_0107ba70(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 8 + param_2 * 4);
}

// 0107BA80  FUN_0107ba80  size=14  [between]
int __thiscall FUN_0107ba80(int param_1,int param_2)

{
  return param_1 + 8 + param_2 * 4;
}

// 0107BAE0  FUN_0107bae0  size=20  [between]
void __thiscall FUN_0107bae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 0107BB40  FUN_0107bb40  size=27  [between]
undefined4 __thiscall FUN_0107bb40(int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)(param_1[1] + *param_1) >> 8),
                  param_1[1] + *param_1 != param_2[1] + *param_2);
}

// 0107BBE0  FUN_0107bbe0  size=9  [between]
void FUN_0107bbe0(void)

{
  FUN_01010160();
  return;
}

// 0107BBF0  FUN_0107bbf0  size=9  [between]
void FUN_0107bbf0(void)

{
  FUN_01010160();
  return;
}

// 0107BC00  FUN_0107bc00  size=9  [between]
void FUN_0107bc00(void)

{
  FUN_01010c10();
  return;
}

// 0107BC70  FUN_0107bc70  size=22  [between]
void __thiscall FUN_0107bc70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}

// 0107BC90  FUN_0107bc90  size=20  [between]
void __thiscall FUN_0107bc90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return;
}

// 0107BCC0  FUN_0107bcc0  size=9  [between]
void FUN_0107bcc0(void)

{
  FUN_01010160();
  return;
}

// 0107BCD0  FUN_0107bcd0  size=50  [between]
uint FUN_0107bcd0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_2 + 0x20);
  do {
    iVar1 = *(int *)((param_1 - param_2) + (int)piVar2);
    if (iVar1 < *piVar2) break;
    if (*piVar2 < iVar1) {
      return (uint)piVar2 & 0xffffff00;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 3);
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

// 0107BD20  FUN_0107bd20  size=14  [between]
int __thiscall FUN_0107bd20(int param_1,int param_2)

{
  return param_1 + 0x14 + param_2 * 4;
}

// 0107BD40  FUN_0107bd40  size=14  [between]
void __thiscall FUN_0107bd40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0107BD50  FUN_0107bd50  size=14  [between]
void __thiscall FUN_0107bd50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0107BD60  FUN_0107bd60  size=20  [between]
uint FUN_0107bd60(char param_1)

{
  return 9 >> (param_1 * '\x02' & 0x1fU) & 3;
}

// 0107BD80  FUN_0107bd80  size=20  [between]
uint FUN_0107bd80(char param_1)

{
  return 0x12 >> (param_1 * '\x02' & 0x1fU) & 3;
}

// 0107BDA0  FUN_0107bda0  size=46  [between]
void __thiscall FUN_0107bda0(int *param_1,int *param_2)

{
  *(int *)(*param_1 + 0x14 + param_1[1] * 4) = *param_2 + param_2[1];
  if (*param_2 != 0) {
    *(int *)(*param_2 + 0x14 + param_2[1] * 4) = param_1[1] + *param_1;
  }
  return;
}

// 0107BE00  FUN_0107be00  size=15  [between]
int __thiscall FUN_0107be00(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 0107BE10  FUN_0107be10  size=15  [between]
int __thiscall FUN_0107be10(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 0107BE30  FUN_0107be30  size=44  [between]
void __thiscall FUN_0107be30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 0107BE60  FUN_0107be60  size=42  [between]
void FUN_0107be60(float *param_1,float *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  
  auVar1 = *param_3;
  auVar5 = rcpps(in_XMM1,auVar1);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = (2.0 - auVar1._0_4_ * auVar5._0_4_) * auVar5._0_4_ * *param_2;
  param_1[1] = (2.0 - auVar1._4_4_ * auVar5._4_4_) * auVar5._4_4_ * fVar2;
  param_1[2] = (2.0 - auVar1._8_4_ * auVar5._8_4_) * auVar5._8_4_ * fVar3;
  param_1[3] = (2.0 - auVar1._12_4_ * auVar5._12_4_) * auVar5._12_4_ * fVar4;
  return;
}

// 0107BED0  FUN_0107bed0  size=11  [between]
longlong FUN_0107bed0(int param_1,int param_2)

{
  return (longlong)param_1 * (longlong)param_2;
}

// 0107BF40  FUN_0107bf40  size=21  [between]
void FUN_0107bf40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 0107BF60  FUN_0107bf60  size=18  [between]
void FUN_0107bf60(undefined4 *param_1)

{
  *param_1 = 0x7f7fffee;
  param_1[1] = 0x7f7fffee;
  param_1[2] = 0x7f7fffee;
  param_1[3] = 0x7f7fffee;
  return;
}

// 0107BF90  FUN_0107bf90  size=52  [between]
int __thiscall FUN_0107bf90(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 0107C000  FUN_0107c000  size=18  [between]
int __thiscall FUN_0107c000(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0107C060  FUN_0107c060  size=15  [between]
int __thiscall FUN_0107c060(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0107C080  FUN_0107c080  size=11  [between]
int FUN_0107c080(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0107C090  FUN_0107c090  size=23  [between]
void FUN_0107c090(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 0107C0B0  FUN_0107c0b0  size=15  [between]
int __thiscall FUN_0107c0b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0107C100  FUN_0107c100  size=25  [between]
void FUN_0107c100(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0107C120  FUN_0107c120  size=9  [between]
void FUN_0107c120(void)

{
  FUN_01010160();
  return;
}

// 0107C130  FUN_0107c130  size=21  [between]
void FUN_0107c130(undefined4 param_1)

{
  FUN_01010c40(&PTR_vftable_018e9b94,param_1);
  return;
}

// 0107C180  FUN_0107c180  size=96  [between]
void __thiscall FUN_0107c180(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_3;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_3 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_3 = *(int *)(param_1 + 4) + param_3;
  }
  if (param_3 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(param_2,param_1,0x10,0,param_3);
  }
  return;
}

// 0107C1F0  FUN_0107c1f0  size=52  [between]
undefined4 __thiscall FUN_0107c1f0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x40);
    return uVar3;
  }
  return 0;
}

// 0107C240  FUN_0107c240  size=25  [between]
void __thiscall FUN_0107c240(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 6);
  return;
}

// 0107C260  FUN_0107c260  size=38  [between]
void FUN_0107c260(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - (int)param_1;
  iVar1 = 8;
  do {
    *param_1 = *(undefined4 *)(param_2 + (int)param_1);
    param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 0107C2D0  FUN_0107c2d0  size=15  [between]
int __thiscall FUN_0107c2d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0107C380  FUN_0107c380  size=15  [between]
int __thiscall FUN_0107c380(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0107C3B0  FUN_0107c3b0  size=52  [between]
undefined4 __thiscall FUN_0107c3b0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0107C420  FUN_0107c420  size=34  [between]
void FUN_0107c420(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0107C470  FUN_0107c470  size=34  [between]
void FUN_0107c470(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0107C4A0  FUN_0107c4a0  size=12  [between]
int __thiscall FUN_0107c4a0(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 0107C4B0  FUN_0107c4b0  size=26  [between]
void FUN_0107c4b0(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 & 3;
  *param_2 = param_1 & 0xfffffffc;
  return;
}

// 0107C4F0  FUN_0107c4f0  size=85  [between]
void __thiscall FUN_0107c4f0(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0xa04) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xa08);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0xa04) + 0xa08) = *(undefined4 *)(param_2 + 0xa08);
  }
  if (*(int *)(param_2 + 0xa08) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xa08) + 0xa04) = *(undefined4 *)(param_2 + 0xa04);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0xa10);
  return;
}

// 0107C550  FUN_0107c550  size=85  [between]
void __thiscall FUN_0107c550(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc04) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xc08);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0xc04) + 0xc08) = *(undefined4 *)(param_2 + 0xc08);
  }
  if (*(int *)(param_2 + 0xc08) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc08) + 0xc04) = *(undefined4 *)(param_2 + 0xc04);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0xc10);
  return;
}

// 0107C5C0  FUN_0107c5c0  size=28  [between]
void __thiscall FUN_0107c5c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 0107C620  FUN_0107c620  size=32  [between]
void __thiscall FUN_0107c620(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0107C650  FUN_0107c650  size=34  [between]
void FUN_0107c650(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0107C680  FUN_0107c680  size=157  [between]
void FUN_0107c680(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar1 = *(int *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar5 = param_3;
    iVar6 = param_2;
    do {
      iVar2 = *(int *)(iVar1 + 0x38);
      for (iVar3 = *(int *)(*(int *)(param_1 + iVar6 * 4) + 0x38); iVar3 < iVar2;
          iVar3 = *(int *)(*(int *)(param_1 + 4 + iVar3) + 0x38)) {
        iVar3 = iVar6 * 4;
        iVar6 = iVar6 + 1;
      }
      for (iVar3 = *(int *)(*(int *)(param_1 + iVar5 * 4) + 0x38); iVar2 < iVar3;
          iVar3 = *(int *)(*(int *)(param_1 + -4 + iVar3) + 0x38)) {
        iVar3 = iVar5 * 4;
        iVar5 = iVar5 + -1;
      }
      if (iVar5 < iVar6) break;
      if (iVar5 != iVar6) {
        uVar4 = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = uVar4;
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar5);
    if (param_2 < iVar5) {
      FUN_0107c680(param_1,param_2,iVar5,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

// 0107C720  FUN_0107c720  size=26  [between]
void __thiscall FUN_0107c720(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0107C740  FUN_0107c740  size=29  [between]
void __thiscall FUN_0107c740(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 0107C760  FUN_0107c760  size=34  [between]
void FUN_0107c760(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)(iVar1 + param_1) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0107C790  FUN_0107c790  size=32  [between]
void __thiscall FUN_0107c790(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0107C7B0  FUN_0107c7b0  size=93  [between]
undefined4 FUN_0107c7b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_2 + 0x20);
  while( true ) {
    iVar1 = *(int *)((param_1 - param_2) + (int)piVar2);
    if (iVar1 < *piVar2) {
      return 1;
    }
    if (*piVar2 < iVar1) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (2 < iVar3) {
      return 0;
    }
  }
  return 0;
}

// 0107C810  FUN_0107c810  size=8  [between]
undefined4 FUN_0107c810(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0107C820  FUN_0107c820  size=8  [between]
undefined4 FUN_0107c820(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0107C830  FUN_0107c830  size=48  [between]
undefined4 __thiscall FUN_0107c830(int param_1,int param_2)

{
  if (0.0 < (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) * -1.0) {
    return 1;
  }
  return 0;
}

// 0107C860  FUN_0107c860  size=28  [between]
void __thiscall FUN_0107c860(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0107C880  FUN_0107c880  size=28  [between]
void __thiscall FUN_0107c880(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0107C8A0  FUN_0107c8a0  size=11  [between]
int FUN_0107c8a0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0107C8B0  FUN_0107c8b0  size=26  [between]
void __thiscall FUN_0107c8b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0107C8D0  FUN_0107c8d0  size=40  [between]
undefined4 __thiscall FUN_0107c8d0(int param_1,int param_2)

{
  if (0.0 < *(float *)(param_1 + 4) - *(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

// 0107C920  FUN_0107c920  size=63  [between]
void FUN_0107c920(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar12 = param_4[3];
  fVar13 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  fVar16 = param_2[3];
  *param_1 = (fVar11 - fVar15) * (fVar2 - fVar6) - (fVar10 - fVar14) * (fVar3 - fVar7);
  param_1[1] = (fVar9 - fVar13) * (fVar3 - fVar7) - (fVar11 - fVar15) * (fVar1 - fVar5);
  param_1[2] = (fVar10 - fVar14) * (fVar1 - fVar5) - (fVar9 - fVar13) * (fVar2 - fVar6);
  param_1[3] = (fVar12 - fVar16) * (fVar4 - fVar8) - (fVar12 - fVar16) * (fVar4 - fVar8);
  return;
}

// 0107C9D0  FUN_0107c9d0  size=37  [between]
void FUN_0107c9d0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0107CA00  FUN_0107ca00  size=31  [between]
void FUN_0107ca00(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 0107CA20  FUN_0107ca20  size=42  [between]
void FUN_0107ca20(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1b0);
  }
  return;
}

// 0107CA50  FUN_0107ca50  size=26  [between]
void __thiscall FUN_0107ca50(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = -(uint)(*param_3 <= *param_1);
  param_2[1] = -(uint)(fVar1 <= fVar4);
  param_2[2] = -(uint)(fVar2 <= fVar5);
  param_2[3] = -(uint)(fVar3 <= fVar6);
  return;
}

// 0107CA80  FUN_0107ca80  size=20  [between]
void __thiscall FUN_0107ca80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 0107CAB0  FUN_0107cab0  size=55  [between]
void __thiscall FUN_0107cab0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[2] * param_1[2] + *param_3 * *param_1;
  fVar2 = param_1[3] + param_3[1] * param_1[1];
  fVar3 = *param_3 * *param_1 + param_3[2] * param_1[2];
  fVar4 = param_3[1] * param_1[1] + param_1[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return;
}

// 0107CAF0  FUN_0107caf0  size=36  [between]
void __thiscall FUN_0107caf0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = *param_1;
  auVar1._0_8_ = auVar2._8_8_;
  auVar1._8_4_ = auVar2._0_4_;
  auVar1._12_4_ = auVar2._4_4_;
  auVar1 = maxps(auVar1,auVar2);
  auVar2._4_4_ = auVar1._0_4_;
  auVar2._0_4_ = auVar1._4_4_;
  auVar2._8_4_ = auVar1._12_4_;
  auVar2._12_4_ = auVar1._8_4_;
  auVar2 = maxps(auVar1,auVar2);
  *param_2 = auVar2;
  return;
}

// 0107CB20  FUN_0107cb20  size=135  [__FILE__]
void __fastcall FUN_0107cb20(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    uVar3 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar4 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar3);
    FUN_01018d00(pcVar4);
    iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_210,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  return;
}

// 0107CBB0  FUN_0107cbb0  size=135  [__FILE__]
void __fastcall FUN_0107cbb0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    uVar3 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar4 = ") hkgpConvexHull::buildMassProperties need to be called before this operation.";
    FUN_01018d00("No mass properties available (");
    FUN_01018e10(uVar3);
    FUN_01018d00(pcVar4);
    iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d887,local_210,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x16f);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  return;
}

// 0107CC40  FUN_0107cc40  size=52  [between]
undefined8 FUN_0107cc40(int param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x24) * (longlong)param_2[1] +
          (longlong)*(int *)(param_1 + 0x28) * (longlong)param_2[2] +
          (longlong)*(int *)(param_1 + 0x20) * (longlong)*param_2;
  uVar2 = (uint)lVar1;
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + param_2[5] + (uint)CARRY4(uVar2,param_2[4]),
                  uVar2 + param_2[4]);
}

// 0107CC80  FUN_0107cc80  size=205  [between]
undefined4 FUN_0107cc80(int param_1,int param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_2 + 0x20) - *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_2 + 0x24) - *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_3 + 0x20) - *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_3 + 0x24) - *(int *)(param_1 + 0x24);
  iVar7 = *(int *)(param_2 + 0x28) - *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_3 + 0x28) - *(int *)(param_1 + 0x28);
  iVar8 = iVar4 * iVar6 - iVar3 * iVar7;
  iVar3 = iVar3 * iVar5 - iVar2 * iVar6;
  param_4[4] = 0;
  param_4[5] = 0;
  iVar2 = iVar2 * iVar7 - iVar4 * iVar5;
  *param_4 = iVar8;
  param_4[1] = iVar2;
  param_4[2] = iVar3;
  if ((iVar3 != 0 || iVar2 != 0) || iVar8 != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x24) * (longlong)iVar2 +
            (longlong)iVar8 * (longlong)*(int *)(param_1 + 0x20) +
            (longlong)*(int *)(param_1 + 0x28) * (longlong)iVar3;
    iVar2 = (int)lVar1;
    param_4[4] = -iVar2;
    iVar2 = -((int)((ulonglong)lVar1 >> 0x20) + (uint)(iVar2 != 0));
    param_4[5] = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return 0;
}

// 0107CD50  FUN_0107cd50  size=257  [between]
uint FUN_0107cd50(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  *(int *)(param_4 + 0xc) = param_2;
  *(undefined4 *)(param_4 + 0x40) = 0;
  *(undefined4 *)(param_4 + 0x44) = 0xffffffff;
  *(int *)(param_4 + 8) = param_1;
  *(int *)(param_4 + 0x10) = param_3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + 1;
  iVar5 = *(int *)(param_2 + 0x20) - *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_2 + 0x28) - *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_2 + 0x24) - *(int *)(param_1 + 0x24);
  iVar8 = *(int *)(param_3 + 0x28) - *(int *)(param_1 + 0x28);
  iVar7 = *(int *)(param_3 + 0x20) - *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_3 + 0x24) - *(int *)(param_1 + 0x24);
  iVar9 = iVar8 * iVar6 - iVar3 * iVar2;
  *(int *)(param_4 + 0x20) = iVar9;
  iVar2 = iVar7 * iVar2 - iVar8 * iVar5;
  uVar4 = iVar3 * iVar5 - iVar7 * iVar6;
  *(int *)(param_4 + 0x24) = iVar2;
  *(uint *)(param_4 + 0x28) = uVar4;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(undefined4 *)(param_4 + 0x34) = 0;
  if ((uVar4 != 0 || iVar2 != 0) || iVar9 != 0) {
    lVar1 = (longlong)(int)uVar4 * (longlong)*(int *)(param_1 + 0x28) +
            (longlong)*(int *)(param_1 + 0x20) * (longlong)iVar9 +
            (longlong)*(int *)(param_1 + 0x24) * (longlong)iVar2;
    iVar3 = (int)lVar1;
    iVar2 = -((int)((ulonglong)lVar1 >> 0x20) + (uint)(iVar3 != 0));
    *(int *)(param_4 + 0x30) = -iVar3;
    *(int *)(param_4 + 0x34) = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar4 & 0xffffff00;
}

// 0107CE60  FUN_0107ce60  size=66  [between]
void __thiscall FUN_0107ce60(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_3 + 0x24);
  iVar2 = *(int *)(param_3 + 0x28);
  fVar3 = *(float *)(param_1 + 0x104);
  fVar4 = *(float *)(param_1 + 0x108);
  fVar5 = *(float *)(param_1 + 0x10c);
  fVar6 = *(float *)(param_1 + 0xe4);
  fVar7 = *(float *)(param_1 + 0xe8);
  fVar8 = *(float *)(param_1 + 0xec);
  *param_2 = (float)*(int *)(param_3 + 0x20) * *(float *)(param_1 + 0x100) +
             *(float *)(param_1 + 0xe0);
  param_2[1] = (float)iVar1 * fVar3 + fVar6;
  param_2[2] = (float)iVar2 * fVar4 + fVar7;
  param_2[3] = fVar5 * 0.0 + fVar8;
  return;
}

// 0107CEB0  FUN_0107ceb0  size=41  [between]
void __thiscall FUN_0107ceb0(float *param_1,float *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  
  auVar1 = *param_3;
  auVar5 = rcpps(in_XMM1,auVar1);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = (2.0 - auVar1._0_4_ * auVar5._0_4_) * auVar5._0_4_ * *param_2;
  param_1[1] = (2.0 - auVar1._4_4_ * auVar5._4_4_) * auVar5._4_4_ * fVar2;
  param_1[2] = (2.0 - auVar1._8_4_ * auVar5._8_4_) * auVar5._8_4_ * fVar3;
  param_1[3] = (2.0 - auVar1._12_4_ * auVar5._12_4_) * auVar5._12_4_ * fVar4;
  return;
}

// 0107CEE0  FUN_0107cee0  size=38  [between]
void __thiscall FUN_0107cee0(float *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_2;
  auVar2 = rcpps(in_XMM1,auVar1);
  *param_1 = (2.0 - auVar1._0_4_ * auVar2._0_4_) * auVar2._0_4_ * *param_1;
  param_1[1] = (2.0 - auVar1._4_4_ * auVar2._4_4_) * auVar2._4_4_ * param_1[1];
  param_1[2] = (2.0 - auVar1._8_4_ * auVar2._8_4_) * auVar2._8_4_ * param_1[2];
  param_1[3] = (2.0 - auVar1._12_4_ * auVar2._12_4_) * auVar2._12_4_ * param_1[3];
  return;
}

// 0107CF10  FUN_0107cf10  size=162  [between]
int * __thiscall FUN_0107cf10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  piVar6 = *(int **)(param_1 + 0x30);
  if (piVar6 != (int *)0x0) {
    iVar1 = *(int *)(param_2 + 0x28);
    iVar2 = *(int *)(param_2 + 0x24);
    iVar3 = *(int *)(param_2 + 0x20);
    do {
      lVar7 = __allmul(piVar6[9],piVar6[9] >> 0x1f,iVar2,iVar2 >> 0x1f);
      lVar8 = __allmul(piVar6[10],piVar6[10] >> 0x1f,iVar1,iVar1 >> 0x1f);
      lVar9 = __allmul(piVar6[8],piVar6[8] >> 0x1f,iVar3,iVar3 >> 0x1f);
      lVar9 = lVar7 + lVar8 + lVar9;
      uVar4 = (uint)lVar9;
      iVar5 = (int)((ulonglong)lVar9 >> 0x20) + piVar6[0xd] + (uint)CARRY4(uVar4,piVar6[0xc]);
      if ((0 < iVar5) || ((-1 < iVar5 && (uVar4 + piVar6[0xc] != 0)))) {
        return piVar6;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  return (int *)0x0;
}

// 0107CFC0  FUN_0107cfc0  size=124  [between]
void __thiscall FUN_0107cfc0(int param_1,float *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  
  piVar5 = *(int **)(param_1 + 0x20);
  piVar4 = (int *)*piVar5;
  fVar7 = (float)piVar5[5] * param_2[1] + (float)piVar5[4] * *param_2 +
          (float)piVar5[6] * param_2[2];
  if (piVar4 != (int *)0x0) {
    do {
      fVar6 = (float)piVar4[5] * param_2[1] + (float)piVar4[4] * *param_2 +
              (float)piVar4[6] * param_2[2];
      if (fVar7 < fVar6) {
        piVar5 = piVar4;
        fVar7 = fVar6;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
    iVar1 = piVar5[5];
    iVar2 = piVar5[6];
    iVar3 = piVar5[7];
    *param_3 = piVar5[4];
    param_3[1] = iVar1;
    param_3[2] = iVar2;
    param_3[3] = iVar3;
    return;
  }
  iVar1 = piVar5[5];
  iVar2 = piVar5[6];
  iVar3 = piVar5[7];
  *param_3 = piVar5[4];
  param_3[1] = iVar1;
  param_3[2] = iVar2;
  param_3[3] = iVar3;
  return;
}

// 0107D040  FUN_0107d040  size=565  [__FILE__]
undefined4 __thiscall
FUN_0107d040(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  char *pcVar14;
  undefined1 local_240 [512];
  float local_40;
  float fStack_3c;
  float fStack_38;
  int local_24;
  float local_20;
  float fStack_1c;
  float afStack_18 [2];
  
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_240,0x200);
    uVar9 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar14 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar9);
    FUN_01018d00(pcVar14);
    iVar8 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_240,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar8 != 0) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return uVar9;
    }
    hkBaseObject::hkBaseObject_38();
  }
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  uVar5 = *(undefined8 *)param_3;
  uVar6 = *(undefined8 *)(param_3 + 2);
  *param_4 = 0.0;
  iVar8 = 0;
  *param_5 = 1.0;
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    local_20 = (float)uVar3;
    fStack_1c = (float)((ulonglong)uVar3 >> 0x20);
    afStack_18[0] = (float)uVar4;
    local_40 = (float)uVar5;
    fStack_3c = (float)((ulonglong)uVar5 >> 0x20);
    fStack_38 = (float)uVar6;
    fVar13 = afStack_18[0];
    do {
      pfVar1 = (float *)(*(int *)(param_1 + 0x48) + iVar8);
      iVar12 = 0;
      afStack_18[1] = pfVar1[1] * fStack_3c + *pfVar1 * local_40 + pfVar1[2] * fStack_38 + pfVar1[3]
      ;
      afStack_18[0] = pfVar1[2] * fVar13 + pfVar1[1] * fStack_1c + *pfVar1 * local_20 + pfVar1[3];
      iVar10 = 0;
      uVar11 = 1;
      do {
        if (param_6 < afStack_18[iVar10]) {
          iVar12 = iVar12 + uVar11;
        }
        if (ABS(afStack_18[iVar10]) < 1.1920929e-07) {
          afStack_18[iVar10] = 0.0;
        }
        iVar10 = iVar10 + 1;
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      } while (iVar10 < 2);
      if (iVar12 == 3) {
        return 0;
      }
      if (afStack_18[1] * afStack_18[0] < 0.0) {
        fVar13 = afStack_18[0] / (afStack_18[0] - afStack_18[1]);
        if (0.0 <= afStack_18[0]) {
          *param_5 = fVar13;
        }
        else {
          *param_4 = fVar13;
        }
        local_40 = *param_2;
        fStack_3c = param_2[1];
        fStack_38 = param_2[2];
        fVar13 = *param_4;
        local_20 = fVar13 * (*param_3 - local_40) + local_40;
        fStack_1c = fVar13 * (param_3[1] - fStack_3c) + fStack_3c;
        fVar13 = fVar13 * (param_3[2] - fStack_38) + fStack_38;
        fVar2 = *param_5;
        local_40 = fVar2 * (*param_3 - local_40) + local_40;
        fStack_3c = fVar2 * (param_3[1] - fStack_3c) + fStack_3c;
        fStack_38 = fVar2 * (param_3[2] - fStack_38) + fStack_38;
      }
      local_24 = local_24 + 1;
      iVar8 = iVar8 + 0x10;
    } while (local_24 < *(int *)(param_1 + 0x4c));
  }
  return 1;
}

// 0107D2C0  FUN_0107d2c0  size=110  [between]
void FUN_0107d2c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar11 = *param_3 * fVar1;
  fVar12 = fVar5 * fVar2;
  fVar13 = fVar6 * fVar3;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  *param_4 = (*param_3 - (fVar4 + fVar12 + fVar13 + fVar11) * fVar1) +
             (fVar4 + fVar12 + fVar13 + fVar11) * *param_2 * fVar1;
  param_4[1] = (fVar5 - (fVar13 + fVar11 + fVar4 + fVar12) * fVar2) +
               (fVar13 + fVar11 + fVar4 + fVar12) * fVar8 * fVar2;
  param_4[2] = (fVar6 - (fVar12 + fVar4 + fVar11 + fVar13) * fVar3) +
               (fVar12 + fVar4 + fVar11 + fVar13) * fVar9 * fVar3;
  param_4[3] = (fVar7 - (fVar11 + fVar13 + fVar12 + fVar4) * fVar4) +
               (fVar11 + fVar13 + fVar12 + fVar4) * fVar10 * fVar4;
  return;
}

// 0107D330  FUN_0107d330  size=260  [between]
void FUN_0107d330(int param_1,int param_2,int param_3,int param_4,float param_5,int param_6,
                 int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + param_2 * 4);
  fVar2 = *(float *)(param_1 + 0x20 + param_2 * 4);
  fVar3 = *(float *)(param_1 + 0x10 + param_2 * 4);
  *(float *)(param_6 + param_2 * 4) =
       ((fVar1 + fVar2) * fVar3 + fVar1 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) *
       param_5 + *(float *)(param_6 + param_2 * 4);
  fVar1 = *(float *)(param_1 + param_3 * 4);
  fVar2 = *(float *)(param_1 + 0x10 + param_3 * 4);
  fVar3 = *(float *)(param_1 + 0x20 + param_3 * 4);
  fVar4 = *(float *)(param_1 + 0x20 + param_4 * 4);
  fVar5 = *(float *)(param_1 + 0x10 + param_4 * 4);
  fVar6 = *(float *)(param_1 + param_4 * 4);
  *(float *)(param_7 + param_2 * 4) =
       (fVar1 * fVar5 + fVar4 * fVar2 + fVar6 * fVar3 + fVar1 * fVar4 + fVar6 * fVar2 +
        fVar3 * fVar5 + fVar6 * fVar1 * 2.0 + fVar5 * fVar2 * 2.0 + fVar3 * fVar4 * 2.0) * param_5 +
       *(float *)(param_7 + param_2 * 4);
  return;
}

// 0107D4C0  FUN_0107d4c0  size=54  [between]
void __thiscall FUN_0107d4c0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  fVar10 = param_1[9];
  fVar11 = param_1[10];
  fVar12 = param_1[0xb];
  *param_3 = fVar2 * param_1[4] + fVar1 * *param_1 + fVar3 * param_1[8];
  param_3[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10;
  param_3[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11;
  param_3[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12;
  return;
}

// 0107D520  FUN_0107d520  size=32  [between]
void __thiscall FUN_0107d520(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 9 >> ((char)uVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 0107D540  FUN_0107d540  size=32  [between]
void __thiscall FUN_0107d540(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 0x12 >> ((char)uVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 0107D580  FUN_0107d580  size=15  [between]
void __thiscall FUN_0107d580(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return;
}

// 0107D590  FUN_0107d590  size=15  [between]
void __thiscall FUN_0107d590(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  return;
}

// 0107D5E0  FUN_0107d5e0  size=25  [between]
void FUN_0107d5e0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0107D600  FUN_0107d600  size=21  [between]
void FUN_0107d600(undefined4 param_1)

{
  FUN_01010c40(&PTR_vftable_018e9b94,param_1);
  return;
}

// 0107D620  FUN_0107d620  size=25  [between]
void FUN_0107d620(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0107D640  FUN_0107d640  size=21  [between]
void FUN_0107d640(undefined4 param_1)

{
  FUN_01010c40(&PTR_vftable_018e9b94,param_1);
  return;
}

// 0107D6A0  FUN_0107d6a0  size=25  [between]
void FUN_0107d6a0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0107D6D0  FUN_0107d6d0  size=21  [between]
void FUN_0107d6d0(undefined4 param_1)

{
  FUN_01010c40(&PTR_vftable_018e9b94,param_1);
  return;
}

// 0107D6F0  FUN_0107d6f0  size=45  [between]
undefined4 __thiscall FUN_0107d6f0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,0x10);
    return uVar1;
  }
  return 0;
}

// 0107D720  FUN_0107d720  size=86  [between]
void __thiscall FUN_0107d720(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= param_3) {
      iVar5 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar5,0x10);
  }
  iVar5 = param_3 - param_1[1];
  puVar4 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (0 < iVar5) {
    do {
      uVar1 = param_4[1];
      uVar2 = param_4[2];
      uVar3 = param_4[3];
      *puVar4 = *param_4;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 0107D780  FUN_0107d780  size=53  [between]
int __thiscall FUN_0107d780(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0107D7D0  FUN_0107d7d0  size=60  [between]
void __thiscall FUN_0107d7d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107D810  FUN_0107d810  size=60  [between]
void __thiscall FUN_0107d810(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(param_2 * 0x40 + *param_1);
    iVar2 = (*param_1 + param_1[1] * 0x40) - (int)puVar1;
    iVar3 = 8;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 0107D850  FUN_0107d850  size=13  [between]
void __thiscall FUN_0107d850(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 0107D870  FUN_0107d870  size=36  [between]
void __thiscall FUN_0107d870(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = *param_2;
  auVar1._0_8_ = auVar2._8_8_;
  auVar1._8_4_ = auVar2._0_4_;
  auVar1._12_4_ = auVar2._4_4_;
  auVar1 = maxps(auVar1,auVar2);
  auVar2._4_4_ = auVar1._0_4_;
  auVar2._0_4_ = auVar1._4_4_;
  auVar2._8_4_ = auVar1._12_4_;
  auVar2._12_4_ = auVar1._8_4_;
  auVar2 = maxps(auVar1,auVar2);
  *param_1 = auVar2;
  return;
}

// 0107D8A0  FUN_0107d8a0  size=25  [between]
void __thiscall FUN_0107d8a0(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107D8D0  FUN_0107d8d0  size=45  [between]
undefined4 __thiscall FUN_0107d8d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,0xc);
    return uVar1;
  }
  return 0;
}

// 0107D910  FUN_0107d910  size=57  [between]
void __thiscall FUN_0107d910(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107D9F0  FUN_0107d9f0  size=104  [between]
int __fastcall FUN_0107d9f0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(param_1 + 0x6c) == 3.40282e+38) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      fVar4 = (float)puVar1[5];
      fVar2 = (float)puVar1[6];
      fVar3 = (float)puVar1[7];
      *(float *)(param_1 + 0x60) = (float)puVar1[4] + *(float *)(param_1 + 0x60);
      *(float *)(param_1 + 100) = fVar4 + *(float *)(param_1 + 100);
      *(float *)(param_1 + 0x68) = fVar2 + *(float *)(param_1 + 0x68);
      *(float *)(param_1 + 0x6c) = fVar3 + *(float *)(param_1 + 0x6c);
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      fVar4 = 1.0 / (float)*(int *)(param_1 + 0x24);
      *(float *)(param_1 + 0x60) = fVar4 * *(float *)(param_1 + 0x60);
      *(float *)(param_1 + 100) = fVar4 * *(float *)(param_1 + 100);
      *(float *)(param_1 + 0x68) = fVar4 * *(float *)(param_1 + 0x68);
      *(float *)(param_1 + 0x6c) = fVar4 * *(float *)(param_1 + 0x6c);
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return param_1 + 0x60;
}

// 0107DA60  FUN_0107da60  size=304  [between]
undefined1 __thiscall
FUN_0107da60(int param_1,float *param_2,float param_3,int *param_4,float *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float local_18 [2];
  
  if (param_5 == (float *)0x0) {
    param_5 = local_18;
  }
  param_4[1] = 0;
  *param_4 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  param_5[1] = 0.0;
  *param_5 = 0.0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    fVar3 = param_2[3] + (float)puVar1[5] * param_2[1] +
            (float)puVar1[6] * param_2[2] + (float)puVar1[4] * *param_2;
    if (puVar1[1] == 0) {
      param_5[1] = fVar3;
      *param_5 = fVar3;
    }
    else {
      fVar4 = *param_5;
      if (fVar3 < *param_5) {
        fVar4 = fVar3;
      }
      *param_5 = fVar4;
      fVar4 = param_5[1];
      if (param_5[1] < fVar3) {
        fVar4 = fVar3;
      }
      param_5[1] = fVar4;
    }
    if (param_3 <= ABS(fVar3)) {
      puVar1[0xb] = fVar3;
      if (fVar3 <= 0.0) {
        param_4[1] = param_4[1] + 1;
      }
      else {
        *param_4 = *param_4 + 1;
      }
    }
    else {
      puVar1[0xb] = 0;
    }
  }
  iVar2 = *param_4;
  if ((iVar2 != 0) && (param_4[1] != 0)) {
    return 3;
  }
  if (iVar2 < param_4[1]) {
    return 2;
  }
  return iVar2 != 0;
}

// 0107DBA0  FUN_0107dba0  size=28  [between]
void __thiscall FUN_0107dba0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0107DBC0  FUN_0107dbc0  size=57  [between]
void __thiscall FUN_0107dbc0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107DC00  FUN_0107dc00  size=26  [between]
void FUN_0107dc00(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 & 3;
  *param_2 = param_1 & 0xfffffffc;
  return;
}

// 0107DC20  FUN_0107dc20  size=97  [between]
void __thiscall FUN_0107dc20(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  if (param_2 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_1,0x10,0,param_2);
  }
  return;
}

// 0107DCC0  FUN_0107dcc0  size=20  [between]
void __thiscall FUN_0107dcc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return;
}

// 0107DCE0  FUN_0107dce0  size=53  [between]
undefined4 __thiscall FUN_0107dce0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0107DDA0  FUN_0107dda0  size=44  [between]
void __thiscall FUN_0107dda0(int param_1,int param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return;
}

// 0107DDD0  FUN_0107ddd0  size=31  [between]
void FUN_0107ddd0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    piVar1 = (int *)(iVar2 + 0xa0c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_0107c4f0(iVar2);
    }
  }
  return;
}

// 0107DDF0  FUN_0107ddf0  size=94  [between]
void __fastcall FUN_0107ddf0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xa04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xa08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xa04) + 0xa08) = *(undefined4 *)(iVar1 + 0xa08);
    }
    if (*(int *)(iVar1 + 0xa08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xa08) + 0xa04) = *(undefined4 *)(iVar1 + 0xa04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xa10);
    iVar1 = *param_1;
  }
  return;
}

// 0107DE60  FUN_0107de60  size=31  [between]
void FUN_0107de60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    piVar1 = (int *)(iVar2 + 0xc0c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_0107c550(iVar2);
    }
  }
  return;
}

// 0107DE80  FUN_0107de80  size=94  [between]
void __fastcall FUN_0107de80(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xc04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xc08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xc04) + 0xc08) = *(undefined4 *)(iVar1 + 0xc08);
    }
    if (*(int *)(iVar1 + 0xc08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xc08) + 0xc04) = *(undefined4 *)(iVar1 + 0xc04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xc10);
    iVar1 = *param_1;
  }
  return;
}

// 0107DEF0  FUN_0107def0  size=63  [between]
void __thiscall FUN_0107def0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107DF30  FUN_0107df30  size=45  [between]
undefined4 __thiscall FUN_0107df30(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,8);
    return uVar1;
  }
  return 0;
}

// 0107DF60  FUN_0107df60  size=23  [between]
int __thiscall FUN_0107df60(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = param_2 + iVar1;
  return *param_1 + iVar1 * 8;
}

// 0107DF90  FUN_0107df90  size=13  [between]
void __thiscall FUN_0107df90(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 0107DFA0  FUN_0107dfa0  size=25  [between]
void __thiscall FUN_0107dfa0(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107DFC0  FUN_0107dfc0  size=52  [between]
undefined4 __thiscall FUN_0107dfc0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0107E000  FUN_0107e000  size=33  [between]
void FUN_0107e000(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0107c680(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0107E030  FUN_0107e030  size=61  [between]
void __thiscall FUN_0107e030(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107E070  FUN_0107e070  size=64  [between]
void __thiscall FUN_0107e070(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107E0B0  FUN_0107e0b0  size=46  [between]
void FUN_0107e0b0(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0107E0E0  FUN_0107e0e0  size=54  [between]
void __thiscall FUN_0107e0e0(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,1);
  }
  *(undefined1 *)(*param_1 + param_1[1]) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107E120  FUN_0107e120  size=55  [between]
void __thiscall FUN_0107e120(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,2);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0107E170  FUN_0107e170  size=32  [between]
void __thiscall FUN_0107e170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0107E190  FUN_0107e190  size=32  [between]
void __thiscall FUN_0107e190(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0107E1B0  FUN_0107e1b0  size=102  [between]
void __fastcall FUN_0107e1b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xa10);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0x9b0);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0x14;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0xa00) = piVar3;
    *(undefined4 *)(iVar2 + 0xa0c) = 0;
    *(undefined4 *)(iVar2 + 0xa04) = 0;
    *(int *)(iVar2 + 0xa08) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0xa08) != 0) {
      *(int *)(*(int *)(iVar2 + 0xa08) + 0xa04) = iVar2;
    }
  }
  return;
}

// 0107E220  FUN_0107e220  size=102  [between]
void __fastcall FUN_0107e220(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0xba0);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0x18;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0xc00) = piVar3;
    *(undefined4 *)(iVar2 + 0xc0c) = 0;
    *(undefined4 *)(iVar2 + 0xc04) = 0;
    *(int *)(iVar2 + 0xc08) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0xc08) != 0) {
      *(int *)(*(int *)(iVar2 + 0xc08) + 0xc04) = iVar2;
    }
  }
  return;
}

// 0107E290  FUN_0107e290  size=63  [between]
void __thiscall FUN_0107e290(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107E2D0  FUN_0107e2d0  size=40  [between]
void FUN_0107e2d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0107E300  FUN_0107e300  size=57  [between]
undefined4 FUN_0107e300(int param_1,int param_2)

{
  if (0.0 < (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) * -1.0) {
    return 1;
  }
  return 0;
}

// 0107E360  FUN_0107e360  size=49  [between]
undefined4 FUN_0107e360(int param_1,int param_2)

{
  if (0.0 < *(float *)(param_1 + 4) - *(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

// 0107E3D0  FUN_0107e3d0  size=62  [between]
void __thiscall FUN_0107e3d0(undefined1 *param_1,int param_2,char param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_2 + 8 + (9 >> (param_3 * '\x02' & 0x1fU) & 3U) * 4);
  fVar2 = *(float *)(iVar1 + 0x2c) + 1.0;
  *(float *)(iVar1 + 0x2c) = fVar2;
  if (1.0 < fVar2) {
    *param_1 = 1;
  }
  return;
}

// 0107E410  FUN_0107e410  size=67  [between]
void FUN_0107e410(float *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_3 + 0x24);
  iVar2 = *(int *)(param_3 + 0x28);
  fVar3 = *(float *)(param_2 + 0x104);
  fVar4 = *(float *)(param_2 + 0x108);
  fVar5 = *(float *)(param_2 + 0x10c);
  fVar6 = *(float *)(param_2 + 0xe4);
  fVar7 = *(float *)(param_2 + 0xe8);
  fVar8 = *(float *)(param_2 + 0xec);
  *param_1 = (float)*(int *)(param_3 + 0x20) * *(float *)(param_2 + 0x100) +
             *(float *)(param_2 + 0xe0);
  param_1[1] = (float)iVar1 * fVar3 + fVar6;
  param_1[2] = (float)iVar2 * fVar4 + fVar7;
  param_1[3] = fVar5 * 0.0 + fVar8;
  return;
}

// 0107E460  FUN_0107e460  size=77  [between]
float10 FUN_0107e460(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 8 + ((param_2 + 1) % 3) * 4);
  iVar2 = *(int *)(param_1 + 8 + param_2 * 4);
  fVar3 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
  fVar4 = *(float *)(iVar2 + 0x14) - *(float *)(iVar1 + 0x14);
  fVar5 = *(float *)(iVar2 + 0x18) - *(float *)(iVar1 + 0x18);
  return (float10)(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
}

// 0107E4B0  FUN_0107e4b0  size=544  [__FILE__]
void __thiscall FUN_0107e4b0(int param_1,undefined1 (*param_2) [16],int param_3)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  undefined1 local_250 [528];
  undefined1 local_40 [8];
  float fStack_38;
  float fStack_34;
  float local_24;
  undefined1 local_20 [8];
  float fStack_18;
  float fStack_14;
  
  if (param_3 != 0) {
    _local_40 = *param_2;
    _local_20 = *param_2;
    if (1 < param_3) {
      param_3 = param_3 + -1;
      do {
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        _local_40 = minps(_local_40,*param_2);
        _local_20 = maxps(_local_20,*param_2);
      } while (param_3 != 0);
    }
    iVar4 = 0;
    do {
      local_24 = *(float *)(local_40 + iVar4);
      if ((local_24 < -3.40282e+38) || (3.40282e+38 < *(float *)(local_20 + iVar4))) {
        hkErrStream::hkErrStream(local_250,0x200);
        FUN_01018d00("Input domain out of range");
        iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                          (3,0x405a2174,local_250,
                           "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                           ,0x22e);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        hkBaseObject::hkBaseObject_38();
      }
      fVar1 = *(float *)(local_20 + iVar4);
      if (fVar1 - local_24 < 1e-05) {
        fVar5 = (fVar1 + local_24) * 0.5;
        fVar7 = fVar5 - 1e-05;
        if (local_24 < fVar7) {
          fVar7 = local_24;
        }
        fVar5 = fVar5 + 1e-05;
        *(float *)(local_40 + iVar4) = fVar7;
        if (fVar5 < fVar1) {
          fVar5 = fVar1;
        }
        *(float *)(local_20 + iVar4) = fVar5;
        in_XMM3 = ZEXT416((uint)local_24);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0xc);
    auVar6._0_4_ = ((float)local_20._0_4_ - (float)local_40._0_4_) * 0.5;
    auVar6._4_4_ = ((float)local_20._4_4_ - (float)local_40._4_4_) * 0.5;
    auVar6._8_4_ = (fStack_18 - fStack_38) * 0.5;
    auVar6._12_4_ = (fStack_14 - fStack_34) * 0.5;
    auVar9 = rcpps(in_XMM3,auVar6);
    auVar8._0_4_ = auVar6._0_4_ + (float)local_40._0_4_;
    auVar8._4_4_ = auVar6._4_4_ + (float)local_40._4_4_;
    auVar8._8_4_ = auVar6._8_4_ + fStack_38;
    auVar8._12_4_ = auVar6._12_4_ + fStack_34;
    *(undefined1 (*) [16])(param_1 + 0xe0) = auVar8;
    *(float *)(param_1 + 0xf0) = (2.0 - auVar9._0_4_ * auVar6._0_4_) * auVar9._0_4_;
    *(float *)(param_1 + 0xf4) = (2.0 - auVar9._4_4_ * auVar6._4_4_) * auVar9._4_4_;
    *(float *)(param_1 + 0xf8) = (2.0 - auVar9._8_4_ * auVar6._8_4_) * auVar9._8_4_;
    *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0xf0) * 8191.0;
    *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0xf4) * 8191.0;
    *(float *)(param_1 + 0xf8) = *(float *)(param_1 + 0xf8) * 8191.0;
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) * 8191.0;
    auVar6 = *(undefined1 (*) [16])(param_1 + 0xf0);
    auVar8 = rcpps(auVar8,auVar6);
    *(float *)(param_1 + 0x100) = (2.0 - auVar6._0_4_ * auVar8._0_4_) * auVar8._0_4_;
    *(float *)(param_1 + 0x104) = (2.0 - auVar6._4_4_ * auVar8._4_4_) * auVar8._4_4_;
    *(float *)(param_1 + 0x108) = (2.0 - auVar6._8_4_ * auVar8._8_4_) * auVar8._8_4_;
    *(float *)(param_1 + 0x10c) = (2.0 - auVar6._12_4_ * auVar8._12_4_) * auVar8._12_4_;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
  }
  return;
}

// 0107E720  FUN_0107e720  size=56  [between]
void __thiscall FUN_0107e720(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return;
}

// 0107E760  FUN_0107e760  size=66  [between]
void __thiscall FUN_0107e760(int param_1,int param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return;
}

// 0107E7B0  FUN_0107e7b0  size=46  [between]
undefined4 __thiscall FUN_0107e7b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,0x10);
    return uVar1;
  }
  return 0;
}

// 0107E7E0  FUN_0107e7e0  size=87  [between]
void __thiscall FUN_0107e7e0(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= param_2) {
      iVar5 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar5,0x10);
  }
  iVar5 = param_2 - param_1[1];
  puVar4 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (0 < iVar5) {
    do {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar4 = *param_3;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 0107E840  FUN_0107e840  size=48  [between]
int __fastcall FUN_0107e840(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0107E870  FUN_0107e870  size=27  [between]
void __thiscall FUN_0107e870(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  param_1[1] = uVar1 & 3;
  *param_1 = uVar1 & 0xfffffffc;
  return;
}

// 0107E890  FUN_0107e890  size=60  [between]
void __fastcall FUN_0107e890(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107E910  FUN_0107e910  size=53  [between]
undefined4 __thiscall FUN_0107e910(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0107E950  FUN_0107e950  size=46  [between]
undefined4 __thiscall FUN_0107e950(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,0xc);
    return uVar1;
  }
  return 0;
}

// 0107E980  FUN_0107e980  size=58  [between]
void __thiscall FUN_0107e980(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107E9C0  FUN_0107e9c0  size=58  [between]
void __thiscall FUN_0107e9c0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107EA20  FUN_0107ea20  size=94  [between]
void __fastcall FUN_0107ea20(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xa04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xa08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xa04) + 0xa08) = *(undefined4 *)(iVar1 + 0xa08);
    }
    if (*(int *)(iVar1 + 0xa08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xa08) + 0xa04) = *(undefined4 *)(iVar1 + 0xa04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xa10);
    iVar1 = *param_1;
  }
  return;
}

// 0107EA90  FUN_0107ea90  size=94  [between]
void __fastcall FUN_0107ea90(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xc04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xc08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xc04) + 0xc08) = *(undefined4 *)(iVar1 + 0xc08);
    }
    if (*(int *)(iVar1 + 0xc08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xc08) + 0xc04) = *(undefined4 *)(iVar1 + 0xc04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xc10);
    iVar1 = *param_1;
  }
  return;
}

// 0107EB00  FUN_0107eb00  size=58  [between]
void __thiscall FUN_0107eb00(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar2;
  }
  if (piVar2 == (int *)0x0) {
    *(int *)(param_1 + 4) = iVar1;
  }
  else {
    *piVar2 = iVar1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  iVar1 = param_2[0x10];
  piVar2 = (int *)(iVar1 + 0xa0c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_0107c4f0(iVar1);
  }
  return;
}

// 0107EB40  FUN_0107eb40  size=58  [between]
void __thiscall FUN_0107eb40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar2;
  }
  if (piVar2 == (int *)0x0) {
    *(int *)(param_1 + 4) = iVar1;
  }
  else {
    *piVar2 = iVar1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  iVar1 = param_2[0x14];
  piVar2 = (int *)(iVar1 + 0xc0c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_0107c550(iVar1);
  }
  return;
}

// 0107EB80  FUN_0107eb80  size=60  [between]
void __fastcall FUN_0107eb80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107EC10  FUN_0107ec10  size=119  [between]
void __thiscall FUN_0107ec10(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = param_2[1];
  iVar1 = iVar3 + iVar2;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    iVar8 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar8,0x10);
  }
  param_2[1] = param_2[1] + iVar2;
  puVar9 = (undefined4 *)(iVar3 * 0x10 + *param_2);
  for (puVar4 = *(undefined4 **)(param_1 + 0x20); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    uVar5 = puVar4[5];
    uVar6 = puVar4[6];
    uVar7 = puVar4[7];
    *puVar9 = puVar4[4];
    puVar9[1] = uVar5;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    puVar9 = puVar9 + 4;
  }
  return;
}

// 0107EC90  FUN_0107ec90  size=91  [between]
void __thiscall FUN_0107ec90(int param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar8 = 3.40282e+38;
  *param_3 = *param_2;
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  param_3[3] = fVar4;
  for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    fVar2 = (float)puVar1[5];
    fVar3 = (float)puVar1[6];
    fVar4 = (float)puVar1[7];
    fVar5 = *param_2 - (float)puVar1[4];
    fVar6 = param_2[1] - fVar2;
    fVar7 = param_2[2] - fVar3;
    fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar5 < fVar8) {
      *param_3 = (float)puVar1[4];
      param_3[1] = fVar2;
      param_3[2] = fVar3;
      param_3[3] = fVar4;
      fVar8 = fVar5;
    }
  }
  return;
}

// 0107ECF0  FUN_0107ecf0  size=141  [between]
void __thiscall FUN_0107ecf0(int param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar10 = 3.40282e+38;
  *param_3 = *param_2;
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  param_3[3] = fVar4;
  for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    fVar2 = *(float *)(param_1 + 0x10c);
    fVar3 = *(float *)(param_1 + 0xec);
    fVar7 = (float)(int)puVar1[8] * *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0);
    fVar8 = (float)(int)puVar1[9] * *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0xe4);
    fVar9 = (float)(int)puVar1[10] * *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0xe8);
    fVar4 = *param_2 - fVar7;
    fVar5 = param_2[1] - fVar8;
    fVar6 = param_2[2] - fVar9;
    fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar4 < fVar10) {
      *param_3 = fVar7;
      param_3[1] = fVar8;
      param_3[2] = fVar9;
      param_3[3] = fVar2 * 0.0 + fVar3;
      fVar10 = fVar4;
    }
  }
  return;
}

// 0107ED90  FUN_0107ed90  size=91  [between]
void __thiscall FUN_0107ed90(int param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar8 = 0.0;
  *param_3 = *param_2;
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  param_3[3] = fVar4;
  for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    fVar2 = (float)puVar1[5];
    fVar3 = (float)puVar1[6];
    fVar4 = (float)puVar1[7];
    fVar5 = *param_2 - (float)puVar1[4];
    fVar6 = param_2[1] - fVar2;
    fVar7 = param_2[2] - fVar3;
    fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar8 < fVar5) {
      *param_3 = (float)puVar1[4];
      param_3[1] = fVar2;
      param_3[2] = fVar3;
      param_3[3] = fVar4;
      fVar8 = fVar5;
    }
  }
  return;
}

// 0107EDF0  FUN_0107edf0  size=137  [between]
void __thiscall FUN_0107edf0(int param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_3 = *param_2;
  param_3[1] = fVar10;
  param_3[2] = fVar2;
  param_3[3] = fVar3;
  fVar10 = 0.0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    fVar2 = *(float *)(param_1 + 0x10c);
    fVar3 = *(float *)(param_1 + 0xec);
    fVar7 = (float)(int)puVar1[8] * *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0);
    fVar8 = (float)(int)puVar1[9] * *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0xe4);
    fVar9 = (float)(int)puVar1[10] * *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0xe8);
    fVar4 = *param_2 - fVar7;
    fVar5 = param_2[1] - fVar8;
    fVar6 = param_2[2] - fVar9;
    fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar10 < fVar4) {
      *param_3 = fVar7;
      param_3[1] = fVar8;
      param_3[2] = fVar9;
      param_3[3] = fVar2 * 0.0 + fVar3;
      fVar10 = fVar4;
    }
  }
  return;
}

// 0107EE80  FUN_0107ee80  size=168  [between]
void __thiscall FUN_0107ee80(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  
  iVar2 = param_2[1];
  iVar3 = *(int *)(param_1 + 0x24);
  iVar1 = iVar2 + iVar3;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    iVar12 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar12 <= iVar1) {
      iVar12 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar12,0x10);
  }
  param_2[1] = param_2[1] + iVar3;
  pfVar11 = (float *)(iVar2 * 0x10 + *param_2);
  for (puVar4 = *(undefined4 **)(param_1 + 0x20); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    iVar1 = puVar4[9];
    iVar2 = puVar4[10];
    fVar5 = *(float *)(param_1 + 0x104);
    fVar6 = *(float *)(param_1 + 0x108);
    fVar7 = *(float *)(param_1 + 0x10c);
    fVar8 = *(float *)(param_1 + 0xe4);
    fVar9 = *(float *)(param_1 + 0xe8);
    fVar10 = *(float *)(param_1 + 0xec);
    *pfVar11 = (float)(int)puVar4[8] * *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0);
    pfVar11[1] = (float)iVar1 * fVar5 + fVar8;
    pfVar11[2] = (float)iVar2 * fVar6 + fVar9;
    pfVar11[3] = fVar7 * 0.0 + fVar10;
    pfVar11 = pfVar11 + 4;
  }
  return;
}

// 0107EF30  FUN_0107ef30  size=63  [between]
void __fastcall FUN_0107ef30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107EF70  FUN_0107ef70  size=64  [between]
void __fastcall FUN_0107ef70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107EFB0  FUN_0107efb0  size=61  [between]
void __fastcall FUN_0107efb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107EFF0  FUN_0107eff0  size=46  [between]
undefined4 __thiscall FUN_0107eff0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,8);
    return uVar1;
  }
  return 0;
}

// 0107F020  FUN_0107f020  size=53  [between]
undefined4 __thiscall FUN_0107f020(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0107F060  FUN_0107f060  size=55  [between]
void __thiscall FUN_0107f060(int *param_1,undefined1 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,1);
  }
  *(undefined1 *)(*param_1 + param_1[1]) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107F0A0  FUN_0107f0a0  size=53  [between]
undefined4 __thiscall FUN_0107f0a0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,1);
    return uVar3;
  }
  return 0;
}

// 0107F0E0  FUN_0107f0e0  size=56  [between]
void __thiscall FUN_0107f0e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,2);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0107F120  FUN_0107f120  size=96  [between]
void __thiscall FUN_0107f120(int param_1,int param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  return;
}

// 0107F200  FUN_0107f200  size=106  [between]
void __fastcall FUN_0107f200(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xa04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xa08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xa04) + 0xa08) = *(undefined4 *)(iVar1 + 0xa08);
    }
    if (*(int *)(iVar1 + 0xa08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xa08) + 0xa04) = *(undefined4 *)(iVar1 + 0xa04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xa10);
    iVar1 = *param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// 0107F270  FUN_0107f270  size=106  [between]
void __fastcall FUN_0107f270(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xc04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xc08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xc04) + 0xc08) = *(undefined4 *)(iVar1 + 0xc08);
    }
    if (*(int *)(iVar1 + 0xc08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xc08) + 0xc04) = *(undefined4 *)(iVar1 + 0xc04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xc10);
    iVar1 = *param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// 0107F2E0  FUN_0107f2e0  size=45  [between]
void FUN_0107f2e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x34);
    do {
      if (puVar1 != (undefined4 *)0x34) {
        puVar1[-2] = 0;
        *puVar1 = 0xffffffff;
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0107F310  FUN_0107f310  size=67  [between]
void __thiscall FUN_0107f310(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0107F360  FUN_0107f360  size=154  [between]
float * __fastcall FUN_0107f360(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  pfVar1 = (float *)(param_1 + 0x70);
  if (*(float *)(param_1 + 0x7c) == 3.40282e+38) {
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    for (puVar2 = *(undefined4 **)(param_1 + 0x20); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      iVar3 = puVar2[9];
      iVar4 = puVar2[10];
      *pfVar1 = (float)(int)puVar2[8] * *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0) +
                *pfVar1;
      *(float *)(param_1 + 0x74) =
           (float)iVar3 * *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0xe4) +
           *(float *)(param_1 + 0x74);
      *(float *)(param_1 + 0x78) =
           (float)iVar4 * *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0xe8) +
           *(float *)(param_1 + 0x78);
      *(float *)(param_1 + 0x7c) =
           *(float *)(param_1 + 0x10c) * 0.0 + *(float *)(param_1 + 0xec) +
           *(float *)(param_1 + 0x7c);
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      fVar5 = 1.0 / (float)*(int *)(param_1 + 0x24);
      *pfVar1 = fVar5 * *pfVar1;
      *(float *)(param_1 + 0x74) = fVar5 * *(float *)(param_1 + 0x74);
      *(float *)(param_1 + 0x78) = fVar5 * *(float *)(param_1 + 0x78);
      *(float *)(param_1 + 0x7c) = fVar5 * *(float *)(param_1 + 0x7c);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return pfVar1;
}

// 0107F410  FUN_0107f410  size=63  [between]
void __fastcall FUN_0107f410(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107F450  FUN_0107f450  size=381  [between]
void FUN_0107f450(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_8;
  
  local_8 = 0;
  if (3 < param_3) {
    puVar6 = (undefined4 *)(param_2 + 100);
    iVar7 = (param_3 - 4U >> 2) + 1;
    puVar5 = (undefined4 *)(param_1 + 0x50);
    local_8 = iVar7 * 4;
    do {
      uVar2 = puVar6[-0x14];
      uVar3 = puVar6[-0x13];
      uVar4 = puVar6[-0x12];
      puVar5[-0x10] = puVar6[-0x15];
      puVar5[-0xf] = uVar2;
      puVar5[-0xe] = uVar3;
      puVar5[-0xd] = uVar4;
      puVar5[-0xc] = puVar6[-0x11];
      puVar5[-0xb] = puVar6[-0x10];
      puVar5[-10] = puVar6[-0xf];
      puVar5[-9] = puVar6[-0xe];
      puVar5[-8] = puVar6[-0xd];
      puVar5[-7] = puVar6[-0xc];
      puVar1 = (undefined4 *)((param_2 - param_1) + (int)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5[4] = puVar6[-1];
      puVar5[5] = *puVar6;
      puVar5[6] = puVar6[1];
      puVar5[7] = puVar6[2];
      puVar5[8] = puVar6[3];
      puVar5[9] = puVar6[4];
      uVar2 = puVar6[0xc];
      uVar3 = puVar6[0xd];
      uVar4 = puVar6[0xe];
      puVar5[0x10] = puVar6[0xb];
      puVar5[0x11] = uVar2;
      puVar5[0x12] = uVar3;
      puVar5[0x13] = uVar4;
      puVar5[0x14] = puVar6[0xf];
      puVar5[0x15] = puVar6[0x10];
      puVar5[0x16] = puVar6[0x11];
      puVar5[0x17] = puVar6[0x12];
      puVar5[0x18] = puVar6[0x13];
      puVar5[0x19] = puVar6[0x14];
      uVar2 = puVar6[0x1c];
      uVar3 = puVar6[0x1d];
      uVar4 = puVar6[0x1e];
      puVar5[0x20] = puVar6[0x1b];
      puVar5[0x21] = uVar2;
      puVar5[0x22] = uVar3;
      puVar5[0x23] = uVar4;
      puVar5[0x24] = puVar6[0x1f];
      puVar5[0x25] = puVar6[0x20];
      puVar5[0x26] = puVar6[0x21];
      puVar5[0x27] = puVar6[0x22];
      puVar5[0x28] = puVar6[0x23];
      puVar5[0x29] = puVar6[0x24];
      puVar6 = puVar6 + 0x40;
      puVar5 = puVar5 + 0x40;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_8 < param_3) {
    puVar6 = (undefined4 *)(local_8 * 0x40 + 0x24 + param_2);
    param_3 = param_3 - local_8;
    puVar5 = (undefined4 *)(local_8 * 0x40 + 0x10 + param_1);
    do {
      puVar1 = (undefined4 *)((int)puVar5 + (param_2 - param_1));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5[4] = puVar6[-1];
      puVar5[5] = *puVar6;
      puVar5[6] = puVar6[1];
      puVar5[7] = puVar6[2];
      puVar5[8] = puVar6[3];
      puVar5[9] = puVar6[4];
      puVar6 = puVar6 + 0x10;
      puVar5 = puVar5 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0107F5D0  FUN_0107f5d0  size=448  [between]
void FUN_0107f5d0(int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (3 < param_2) {
    puVar1 = (undefined8 *)(param_1 + 0x50);
    puVar2 = (undefined4 *)(param_3 + 0x6c);
    iVar4 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar4 * 4;
    do {
      if (puVar1 != (undefined8 *)0x50) {
        puVar1[-8] = *(undefined8 *)(puVar2 + -0x17);
        puVar1[-7] = *(undefined8 *)(puVar2 + -0x15);
        puVar1[-6] = *(undefined8 *)(puVar2 + -0x13);
        *(undefined4 *)(puVar1 + -5) = puVar2[-0x11];
        *(undefined4 *)((int)puVar1 + -0x24) = puVar2[-0x10];
        *(undefined4 *)(puVar1 + -4) = puVar2[-0xf];
        *(undefined4 *)((int)puVar1 + -0x1c) = puVar2[-0xe];
      }
      if (puVar1 != (undefined8 *)0x10) {
        *puVar1 = *(undefined8 *)((param_3 - param_1) + (int)puVar1);
        puVar1[1] = *(undefined8 *)((param_3 - param_1) + 8 + (int)puVar1);
        puVar1[2] = *(undefined8 *)(puVar2 + -3);
        *(undefined4 *)(puVar1 + 3) = puVar2[-1];
        *(undefined4 *)((int)puVar1 + 0x1c) = *puVar2;
        *(undefined4 *)(puVar1 + 4) = puVar2[1];
        *(undefined4 *)((int)puVar1 + 0x24) = puVar2[2];
      }
      if (puVar1 != (undefined8 *)0xffffffd0) {
        puVar1[8] = *(undefined8 *)(puVar2 + 9);
        puVar1[9] = *(undefined8 *)(puVar2 + 0xb);
        puVar1[10] = *(undefined8 *)(puVar2 + 0xd);
        *(undefined4 *)(puVar1 + 0xb) = puVar2[0xf];
        *(undefined4 *)((int)puVar1 + 0x5c) = puVar2[0x10];
        *(undefined4 *)(puVar1 + 0xc) = puVar2[0x11];
        *(undefined4 *)((int)puVar1 + 100) = puVar2[0x12];
      }
      if (puVar1 != (undefined8 *)0xffffff90) {
        puVar1[0x10] = *(undefined8 *)(puVar2 + 0x19);
        puVar1[0x11] = *(undefined8 *)(puVar2 + 0x1b);
        puVar1[0x12] = *(undefined8 *)(puVar2 + 0x1d);
        *(undefined4 *)(puVar1 + 0x13) = puVar2[0x1f];
        *(undefined4 *)((int)puVar1 + 0x9c) = puVar2[0x20];
        *(undefined4 *)(puVar1 + 0x14) = puVar2[0x21];
        *(undefined4 *)((int)puVar1 + 0xa4) = puVar2[0x22];
      }
      puVar1 = puVar1 + 0x20;
      puVar2 = puVar2 + 0x40;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (iVar3 < param_2) {
    puVar2 = (undefined4 *)(iVar3 * 0x40 + 0x2c + param_3);
    param_2 = param_2 - iVar3;
    puVar1 = (undefined8 *)(iVar3 * 0x40 + 0x10 + param_1);
    do {
      if (puVar1 != (undefined8 *)0x10) {
        *puVar1 = *(undefined8 *)((param_3 - param_1) + (int)puVar1);
        puVar1[1] = *(undefined8 *)((param_3 - param_1) + 8 + (int)puVar1);
        puVar1[2] = *(undefined8 *)(puVar2 + -3);
        *(undefined4 *)(puVar1 + 3) = puVar2[-1];
        *(undefined4 *)((int)puVar1 + 0x1c) = *puVar2;
        *(undefined4 *)(puVar1 + 4) = puVar2[1];
        *(undefined4 *)((int)puVar1 + 0x24) = puVar2[2];
      }
      puVar1 = puVar1 + 8;
      puVar2 = puVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0107F790  FUN_0107f790  size=428  [between]
void FUN_0107f790(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  int local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  int local_18;
  int local_14;
  
LAB_0107f7b0:
  local_14 = param_2;
  iVar15 = (param_2 + param_3 >> 1) * 0x40 + param_1;
  local_18 = param_3;
  local_40[3] = *(undefined4 *)(iVar15 + 0x2c);
  local_40[0] = *(int *)(iVar15 + 0x20);
  local_40[1] = *(undefined4 *)(iVar15 + 0x24);
  local_30 = *(undefined4 *)(iVar15 + 0x30);
  local_2c = *(undefined4 *)(iVar15 + 0x34);
  local_40[2] = *(undefined4 *)(iVar15 + 0x28);
LAB_0107f7f6:
  piVar18 = (int *)(local_14 * 0x40 + 0x20 + param_1);
  do {
    iVar15 = 0;
    piVar16 = piVar18;
LAB_0107f807:
    if (local_40[iVar15] <= *piVar16) {
      if (*piVar16 <= local_40[iVar15]) break;
      goto LAB_0107f820;
    }
    local_14 = local_14 + 1;
    piVar18 = piVar18 + 0x10;
  } while( true );
  iVar15 = iVar15 + 1;
  piVar16 = piVar16 + 1;
  if (2 < iVar15) {
LAB_0107f820:
    piVar18 = (int *)(local_18 * 0x40 + param_1 + 0x20);
    goto LAB_0107f830;
  }
  goto LAB_0107f807;
LAB_0107f830:
  iVar15 = 0;
  piVar16 = piVar18;
LAB_0107f834:
  if (*piVar16 <= local_40[iVar15]) {
    if (local_40[iVar15] <= *piVar16) goto code_r0x0107f844;
    goto LAB_0107f84d;
  }
  local_18 = local_18 + -1;
  piVar18 = piVar18 + -0x10;
  goto LAB_0107f830;
code_r0x0107f844:
  iVar15 = iVar15 + 1;
  piVar16 = piVar16 + 1;
  if (2 < iVar15) {
LAB_0107f84d:
    if (local_14 <= local_18) {
      if (local_18 != local_14) {
        iVar15 = local_18 * 0x40;
        uVar3 = *(undefined4 *)(iVar15 + 0x28 + param_1);
        uVar4 = *(undefined4 *)(iVar15 + 0x20 + param_1);
        puVar1 = (undefined4 *)(iVar15 + 0x10 + param_1);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        uVar2 = *(undefined4 *)(iVar15 + 0x2c + param_1);
        iVar15 = iVar15 + param_1;
        uVar5 = *(undefined4 *)(iVar15 + 0x30);
        uVar6 = *(undefined4 *)(iVar15 + 0x34);
        puVar1 = (undefined4 *)(param_1 + 0x10 + local_14 * 0x40);
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        iVar17 = param_1 + local_14 * 0x40;
        uVar7 = *(undefined4 *)(iVar15 + 0x24);
        *(undefined4 *)(iVar15 + 0x10) = *puVar1;
        *(undefined4 *)(iVar15 + 0x14) = uVar12;
        *(undefined4 *)(iVar15 + 0x18) = uVar13;
        *(undefined4 *)(iVar15 + 0x1c) = uVar14;
        *(undefined4 *)(iVar15 + 0x20) = *(undefined4 *)(iVar17 + 0x20);
        *(undefined4 *)(iVar15 + 0x24) = *(undefined4 *)(iVar17 + 0x24);
        *(undefined4 *)(iVar15 + 0x28) = *(undefined4 *)(iVar17 + 0x28);
        *(undefined4 *)(iVar15 + 0x2c) = *(undefined4 *)(iVar17 + 0x2c);
        *(undefined4 *)(iVar15 + 0x30) = *(undefined4 *)(iVar17 + 0x30);
        *(undefined4 *)(iVar15 + 0x34) = *(undefined4 *)(iVar17 + 0x34);
        *(undefined4 *)(iVar17 + 0x10) = uVar8;
        *(undefined4 *)(iVar17 + 0x14) = uVar9;
        *(undefined4 *)(iVar17 + 0x18) = uVar10;
        *(undefined4 *)(iVar17 + 0x1c) = uVar11;
        *(undefined4 *)(iVar17 + 0x20) = uVar4;
        *(undefined4 *)(iVar17 + 0x28) = uVar3;
        *(undefined4 *)(iVar17 + 0x24) = uVar7;
        *(undefined4 *)(iVar17 + 0x30) = uVar5;
        *(undefined4 *)(iVar17 + 0x2c) = uVar2;
        *(undefined4 *)(iVar17 + 0x34) = uVar6;
      }
      local_18 = local_18 + -1;
      local_14 = local_14 + 1;
      if (local_14 <= local_18) goto LAB_0107f7f6;
    }
    iVar15 = local_14;
    if (param_2 < local_18) {
      FUN_0107f790(param_1,param_2,local_18,param_4);
    }
    param_2 = iVar15;
    if (param_3 <= iVar15) {
      return;
    }
    goto LAB_0107f7b0;
  }
  goto LAB_0107f834;
}

// 0107F940  FUN_0107f940  size=63  [between]
void __thiscall FUN_0107f940(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107F980  FUN_0107f980  size=61  [between]
void __thiscall FUN_0107f980(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0107F9C0  FUN_0107f9c0  size=274  [between]
void FUN_0107f9c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  
  do {
    fVar4 = *(float *)(param_1 + (param_2 + param_3 >> 1) * 0xc + 8);
    iVar6 = param_3;
    iVar8 = param_2;
    do {
      for (pfVar7 = (float *)(param_1 + 8 + iVar8 * 0xc); 0.0 < (*pfVar7 - fVar4) * -1.0;
          pfVar7 = pfVar7 + 3) {
        iVar8 = iVar8 + 1;
      }
      for (pfVar7 = (float *)(param_1 + 8 + iVar6 * 0xc); 0.0 < (fVar4 - *pfVar7) * -1.0;
          pfVar7 = pfVar7 + -3) {
        iVar6 = iVar6 + -1;
      }
      if (iVar6 < iVar8) break;
      if (iVar6 != iVar8) {
        uVar3 = *(undefined8 *)(param_1 + iVar6 * 0xc);
        puVar1 = (undefined8 *)(param_1 + iVar6 * 0xc);
        puVar2 = (undefined8 *)(param_1 + iVar8 * 0xc);
        uVar5 = *(undefined4 *)(puVar1 + 1);
        *puVar1 = *(undefined8 *)(param_1 + iVar8 * 0xc);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar2 = uVar3;
        *(undefined4 *)(puVar2 + 1) = uVar5;
      }
      iVar6 = iVar6 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar6);
    if (param_2 < iVar6) {
      FUN_0107f9c0(param_1,param_2,iVar6,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}

// 0107FAE0  FUN_0107fae0  size=204  [between]
void FUN_0107fae0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  do {
    fVar1 = *(float *)(param_1 + 4 + (param_2 + param_3 >> 1) * 8);
    iVar4 = param_3;
    iVar6 = param_2;
    do {
      for (pfVar5 = (float *)(param_1 + 4 + iVar6 * 8); 0.0 < *pfVar5 - fVar1; pfVar5 = pfVar5 + 2)
      {
        iVar6 = iVar6 + 1;
      }
      for (pfVar5 = (float *)(param_1 + 4 + iVar4 * 8); 0.0 < fVar1 - *pfVar5; pfVar5 = pfVar5 + -2)
      {
        iVar4 = iVar4 + -1;
      }
      if (iVar4 < iVar6) break;
      if (iVar4 != iVar6) {
        uVar2 = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 8);
        *(undefined4 *)(param_1 + iVar4 * 8) = *(undefined4 *)(param_1 + iVar6 * 8);
        *(undefined4 *)(param_1 + 4 + iVar4 * 8) = *(undefined4 *)(param_1 + 4 + iVar6 * 8);
        *(undefined4 *)(param_1 + iVar6 * 8) = uVar3;
        *(undefined4 *)(param_1 + 4 + iVar6 * 8) = uVar2;
      }
      iVar4 = iVar4 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar4);
    if (param_2 < iVar4) {
      FUN_0107fae0(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

// 0107FBB0  FUN_0107fbb0  size=146  [between]
float10 FUN_0107fbb0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  auVar5._4_4_ = fVar1;
  auVar5._0_4_ = fVar3;
  auVar5._8_4_ = fVar2;
  auVar5._12_4_ = param_2[3] - param_1[3];
  fVar4 = (param_3[2] - param_1[2]) * fVar2 - (param_3[1] - param_1[1]) * fVar3;
  fVar3 = (*param_3 - *param_1) * fVar3 - (param_3[2] - param_1[2]) * fVar1;
  fVar2 = (param_3[1] - param_1[1]) * fVar1 - (*param_3 - *param_1) * fVar2;
  fVar4 = fVar4 * fVar4;
  fVar3 = fVar3 * fVar3;
  fVar2 = fVar2 * fVar2;
  fVar1 = fVar3 + fVar4 + fVar2;
  auVar6._4_4_ = fVar3 + fVar4 + fVar2;
  auVar6._0_4_ = fVar1;
  auVar6._8_4_ = fVar3 + fVar4 + fVar2;
  auVar6._12_4_ = fVar3 + fVar4 + fVar2;
  auVar6 = rsqrtps(auVar5,auVar6);
  fVar2 = auVar6._0_4_;
  return (float10)(float)(~-(uint)(fVar1 <= 0.0) &
                         (uint)((3.0 - fVar2 * fVar1 * fVar2) * fVar2 * 0.5 * fVar1));
}

// 0107FC50  FUN_0107fc50  size=141  [between]
void FUN_0107fc50(uint *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  
  fVar1 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar3 = param_3[2] - param_2[2];
  auVar7._4_4_ = fVar1;
  auVar7._0_4_ = fVar3;
  auVar7._8_4_ = fVar2;
  auVar7._12_4_ = param_3[3] - param_2[3];
  fVar4 = (param_4[2] - param_2[2]) * fVar2 - (param_4[1] - param_2[1]) * fVar3;
  fVar5 = (*param_4 - *param_2) * fVar3 - (param_4[2] - param_2[2]) * fVar1;
  fVar6 = (param_4[1] - param_2[1]) * fVar1 - (*param_4 - *param_2) * fVar2;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar1 = fVar5 + fVar4 + fVar6;
  fVar2 = fVar5 + fVar4 + fVar6;
  fVar3 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar8._4_4_ = fVar2;
  auVar8._0_4_ = fVar1;
  auVar8._8_4_ = fVar3;
  auVar8._12_4_ = fVar6;
  auVar8 = rsqrtps(auVar7,auVar8);
  fVar4 = auVar8._0_4_;
  fVar5 = auVar8._4_4_;
  fVar9 = auVar8._8_4_;
  fVar10 = auVar8._12_4_;
  *param_1 = ~-(uint)(fVar1 <= 0.0) & (uint)((3.0 - fVar4 * fVar1 * fVar4) * fVar4 * 0.5 * fVar1);
  param_1[1] = ~-(uint)(fVar2 <= 0.0) & (uint)((3.0 - fVar5 * fVar2 * fVar5) * fVar5 * 0.5 * fVar2);
  param_1[2] = ~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar9 * fVar3 * fVar9) * fVar9 * 0.5 * fVar3);
  param_1[3] = ~-(uint)(fVar6 <= 0.0) &
               (uint)((3.0 - fVar10 * fVar6 * fVar10) * fVar10 * 0.5 * fVar6);
  return;
}

// 0107FCE0  FUN_0107fce0  size=25  [between]
void __thiscall FUN_0107fce0(uint *param_1,uint param_2)

{
  param_1[1] = param_2 & 3;
  *param_1 = param_2 & 0xfffffffc;
  return;
}

// 0107FD00  FUN_0107fd00  size=353  [between]
void __thiscall FUN_0107fd00(int param_1,char param_2)

{
  (**(code **)(*(int *)(param_1 + 0x14) + 0xc))();
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x84) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x88) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x8c) = 0x7f7fffee;
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x80) ^ 0x80000000;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x84) ^ 0x80000000;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x88) ^ 0x80000000;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x8c) ^ 0x80000000;
  *(undefined4 *)(param_1 + 0xa0) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0xa4) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0xa8) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0xac) = 0x7f7fffee;
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xa0) ^ 0x80000000;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xa4) ^ 0x80000000;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xa8) ^ 0x80000000;
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xac) ^ 0x80000000;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  *(undefined2 *)(param_1 + 0x1a5) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  return;
}

// 0107FE70  FUN_0107fe70  size=62  [between]
void FUN_0107fe70(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0x30) = 0;
  return;
}

// 0107FEB0  FUN_0107feb0  size=288  [between]
void __thiscall FUN_0107feb0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  
  piVar4 = param_2 + 2;
  local_8 = 3;
  do {
    iVar2 = *piVar4;
    piVar1 = (int *)(iVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
    if (*(int *)(iVar2 + 0x30) == 0) {
      piVar1 = (int *)*piVar4;
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      if (iVar2 != 0) {
        *(int **)(iVar2 + 4) = piVar3;
      }
      if (piVar3 == (int *)0x0) {
        *(int *)(param_1 + 0x20) = iVar2;
      }
      else {
        *piVar3 = iVar2;
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      iVar2 = piVar1[0x10];
      piVar1 = (int *)(iVar2 + 0xa0c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (*(int *)(iVar2 + 0xa04) == 0) {
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0xa08);
        }
        else {
          *(undefined4 *)(*(int *)(iVar2 + 0xa04) + 0xa08) = *(undefined4 *)(iVar2 + 0xa08);
        }
        if (*(int *)(iVar2 + 0xa08) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + 0xa08) + 0xa04) = *(undefined4 *)(iVar2 + 0xa04);
        }
        (**(code **)(PTR_vftable_018e9b94 + 8))(iVar2,0xa10);
      }
    }
    piVar4 = piVar4 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar2 = *param_2;
  piVar4 = (int *)param_2[1];
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = piVar4;
  }
  if (piVar4 == (int *)0x0) {
    *(int *)(param_1 + 0x30) = iVar2;
  }
  else {
    *piVar4 = iVar2;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  iVar2 = param_2[0x14];
  piVar4 = (int *)(iVar2 + 0xc0c);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    if (*(int *)(iVar2 + 0xc04) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar2 + 0xc08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar2 + 0xc04) + 0xc08) = *(undefined4 *)(iVar2 + 0xc08);
    }
    if (*(int *)(iVar2 + 0xc08) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0xc08) + 0xc04) = *(undefined4 *)(iVar2 + 0xc04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar2,0xc10);
  }
  return;
}

// 0107FFD0  FUN_0107ffd0  size=217  [between]
void FUN_0107ffd0(float *param_1,float *param_2,float *param_3,float *param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar17 = param_4[3] - param_2[3];
  fVar10 = param_3[3] - param_2[3];
  fVar14 = (param_4[2] - fVar3) * (param_3[1] - fVar2) - (param_4[1] - fVar2) * (param_3[2] - fVar3)
  ;
  fVar15 = (*param_4 - fVar1) * (param_3[2] - fVar3) - (param_4[2] - fVar3) * (*param_3 - fVar1);
  fVar16 = (param_4[1] - fVar2) * (*param_3 - fVar1) - (*param_4 - fVar1) * (param_3[1] - fVar2);
  fVar10 = fVar17 * fVar10 - fVar17 * fVar10;
  *param_1 = fVar14;
  param_1[1] = fVar15;
  param_1[2] = fVar16;
  param_1[3] = fVar10;
  if (param_5 != '\0') {
    fVar17 = fVar14 * fVar14;
    fVar8 = fVar15 * fVar15;
    fVar9 = fVar16 * fVar16;
    fVar11 = fVar8 + fVar17 + fVar9;
    fVar12 = fVar8 + fVar17 + fVar9;
    fVar13 = fVar8 + fVar17 + fVar9;
    fVar9 = fVar8 + fVar17 + fVar9;
    auVar18._0_12_ = ZEXT812(0);
    auVar18._12_4_ = 0;
    uVar4 = -(uint)(0.0 - fVar11 < 0.0);
    uVar5 = -(uint)(0.0 - fVar12 < 0.0);
    uVar6 = -(uint)(0.0 - fVar13 < 0.0);
    uVar7 = -(uint)(0.0 - fVar9 < 0.0);
    auVar19._4_4_ = fVar12;
    auVar19._0_4_ = fVar11;
    auVar19._8_4_ = fVar13;
    auVar19._12_4_ = fVar9;
    auVar19 = rsqrtps(auVar18,auVar19);
    fVar17 = auVar19._0_4_;
    fVar8 = auVar19._4_4_;
    fVar20 = auVar19._8_4_;
    fVar21 = auVar19._12_4_;
    *param_1 = (float)((uint)((float)(~-(uint)(fVar11 <= 0.0) &
                                     (uint)((3.0 - fVar17 * fVar11 * fVar17) * fVar17 * 0.5)) *
                             fVar14) & uVar4 | ~uVar4 & (uint)fVar14);
    param_1[1] = (float)((uint)((float)(~-(uint)(fVar12 <= 0.0) &
                                       (uint)((3.0 - fVar8 * fVar12 * fVar8) * fVar8 * 0.5)) *
                               fVar15) & uVar5 | ~uVar5 & (uint)fVar15);
    param_1[2] = (float)((uint)((float)(~-(uint)(fVar13 <= 0.0) &
                                       (uint)((3.0 - fVar20 * fVar13 * fVar20) * fVar20 * 0.5)) *
                               fVar16) & uVar6 | ~uVar6 & (uint)fVar16);
    param_1[3] = (float)((uint)((float)(~-(uint)(fVar9 <= 0.0) &
                                       (uint)((3.0 - fVar21 * fVar9 * fVar21) * fVar21 * 0.5)) *
                               fVar10) & uVar7 | ~uVar7 & (uint)fVar10);
  }
  param_1[3] = -(param_1[2] * fVar3 + param_1[1] * fVar2 + *param_1 * fVar1);
  return;
}

// 01080280  FUN_01080280  size=177  [between]
void __fastcall FUN_01080280(int param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  float fVar10;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar2 = *param_3;
  fVar10 = ABS(auVar2._8_4_);
  auVar7._0_8_ = CONCAT44(0xff7fffee,auVar2._8_4_) & 0xffffffff7fffffff;
  auVar7._8_4_ = ABS(auVar2._0_4_);
  auVar7._12_4_ = ABS(auVar2._4_4_);
  auVar8._8_4_ = fVar10;
  auVar8._0_8_ = auVar2._0_8_ & 0x7fffffff7fffffff;
  auVar8._12_4_ = 0xff7fffee;
  auVar8 = maxps(auVar7,auVar8);
  auVar4._4_4_ = auVar8._0_4_;
  auVar4._0_4_ = auVar8._4_4_;
  auVar4._8_4_ = auVar8._12_4_;
  auVar4._12_4_ = auVar8._8_4_;
  auVar8 = maxps(auVar8,auVar4);
  auVar9._4_4_ = -(uint)(auVar8._4_4_ <= ABS(auVar2._4_4_));
  auVar9._0_4_ = -(uint)(auVar8._0_4_ <= ABS(auVar2._0_4_));
  auVar9._8_4_ = -(uint)(auVar8._8_4_ <= fVar10);
  auVar9._12_4_ = -(uint)(auVar8._12_4_ <= -3.40282e+38);
  iVar6 = movmskps(param_2,auVar9);
  if ((&DAT_0182bb90)[iVar6] == '\0') {
    param_3 = *(undefined1 (**) [16])(param_1 + 0x40);
    if (0 < (int)param_3) {
      iVar6 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x3c);
        puVar1 = (undefined4 *)(iVar5 + 0x28 + iVar6);
        uVar3 = *(undefined4 *)(iVar5 + 0x20 + iVar6);
        iVar5 = iVar5 + iVar6;
        iVar6 = iVar6 + 0x40;
        param_3 = (undefined1 (*) [16])((int)param_3 + -1);
        *(undefined4 *)(iVar5 + 0x20) = *puVar1;
        *(undefined4 *)(iVar5 + 0x28) = uVar3;
      } while (param_3 != (undefined1 (*) [16])0x0);
    }
  }
  else if (((&DAT_0182bb90)[iVar6] == '\x01') &&
          (param_3 = *(undefined1 (**) [16])(param_1 + 0x40), 0 < (int)param_3)) {
    iVar6 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x3c);
      puVar1 = (undefined4 *)(iVar5 + 0x28 + iVar6);
      uVar3 = *(undefined4 *)(iVar5 + 0x24 + iVar6);
      iVar5 = iVar5 + iVar6;
      iVar6 = iVar6 + 0x40;
      param_3 = (undefined1 (*) [16])((int)param_3 + -1);
      *(undefined4 *)(iVar5 + 0x24) = *puVar1;
      *(undefined4 *)(iVar5 + 0x28) = uVar3;
    } while (param_3 != (undefined1 (*) [16])0x0);
    return;
  }
  return;
}

// 01080340  FUN_01080340  size=446  [between]
void __fastcall
FUN_01080340(undefined4 param_1,int param_2,float *param_3,int param_4,float *param_5)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 in_XMM5 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_14;
  
  fVar18 = 0.0;
  *param_5 = 0.0;
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  param_5[3] = 0.0;
  local_14 = 0;
  if (0 < param_4) {
    do {
      param_2 = local_14 + 1;
      iVar4 = local_14;
      if (param_2 < param_4) {
        local_30 = (float)*(undefined8 *)(param_3 + local_14 * 4);
        fStack_2c = (float)((ulonglong)*(undefined8 *)(param_3 + local_14 * 4) >> 0x20);
        fStack_28 = (float)*(undefined8 *)(param_3 + local_14 * 4 + 2);
        fStack_24 = (float)((ulonglong)*(undefined8 *)(param_3 + local_14 * 4 + 2) >> 0x20);
        do {
          pfVar1 = param_3 + param_2 * 4;
          iVar3 = param_2 + 1;
          fVar9 = *pfVar1 - local_30;
          fVar10 = pfVar1[1] - fStack_2c;
          fVar11 = pfVar1[2] - fStack_28;
          fVar13 = pfVar1[3] - fStack_24;
          if (iVar3 < param_4) {
            in_XMM5._4_4_ = fVar11;
            in_XMM5._0_4_ = fVar10;
            in_XMM5._8_4_ = fVar9;
            in_XMM5._12_4_ = fVar13;
            do {
              pfVar1 = param_3 + iVar3 * 4;
              fVar12 = pfVar1[3];
              fVar14 = (pfVar1[2] - fStack_28) * fVar10 - (pfVar1[1] - fStack_2c) * fVar11;
              fVar15 = (*pfVar1 - local_30) * fVar11 - (pfVar1[2] - fStack_28) * fVar9;
              fVar16 = (pfVar1[1] - fStack_2c) * fVar9 - (*pfVar1 - local_30) * fVar10;
              fVar17 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
              if (fVar18 < fVar17) {
                *param_5 = fVar14;
                param_5[1] = fVar15;
                param_5[2] = fVar16;
                param_5[3] = (fVar12 - fStack_24) * fVar13 - (fVar12 - fStack_24) * fVar13;
                fVar18 = fVar17;
                if (1e-05 < fVar17) {
                  local_14 = param_4;
                  iVar3 = param_4;
                  param_2 = param_4;
                }
              }
              iVar3 = iVar3 + 1;
              iVar4 = local_14;
            } while (iVar3 < param_4);
          }
          param_2 = param_2 + 1;
        } while (param_2 < param_4);
      }
      local_14 = iVar4 + 1;
    } while (local_14 < param_4);
  }
  fVar18 = *param_5;
  fVar9 = param_5[1];
  fVar10 = param_5[2];
  fVar11 = fVar18 * fVar18;
  fVar13 = fVar9 * fVar9;
  fVar12 = fVar10 * fVar10;
  fVar14 = fVar13 + fVar11 + fVar12;
  fVar15 = fVar13 + fVar11 + fVar12;
  fVar16 = fVar13 + fVar11 + fVar12;
  fVar12 = fVar13 + fVar11 + fVar12;
  auVar19._4_4_ = fVar15;
  auVar19._0_4_ = fVar14;
  auVar19._8_4_ = fVar16;
  auVar19._12_4_ = fVar12;
  auVar19 = rsqrtps(in_XMM5,auVar19);
  fVar11 = auVar19._0_4_;
  fVar13 = auVar19._4_4_;
  fVar17 = auVar19._8_4_;
  fVar20 = auVar19._12_4_;
  uVar5 = -(uint)(0.0 - fVar14 < 0.0);
  uVar6 = -(uint)(0.0 - fVar15 < 0.0);
  uVar7 = -(uint)(0.0 - fVar16 < 0.0);
  uVar8 = -(uint)(0.0 - fVar12 < 0.0);
  auVar2._4_4_ = uVar6;
  auVar2._0_4_ = uVar5;
  auVar2._8_4_ = uVar7;
  auVar2._12_4_ = uVar8;
  iVar4 = movmskps(param_2,auVar2);
  *param_5 = (float)((uint)((float)(~-(uint)(fVar14 <= 0.0) &
                                   (uint)((3.0 - fVar11 * fVar14 * fVar11) * fVar11 * 0.5)) * fVar18
                           ) & uVar5 | ~uVar5 & (uint)fVar18);
  param_5[1] = (float)((uint)((float)(~-(uint)(fVar15 <= 0.0) &
                                     (uint)((3.0 - fVar13 * fVar15 * fVar13) * fVar13 * 0.5)) *
                             fVar9) & uVar6 | ~uVar6 & (uint)fVar9);
  param_5[2] = (float)((uint)((float)(~-(uint)(fVar16 <= 0.0) &
                                     (uint)((3.0 - fVar17 * fVar16 * fVar17) * fVar17 * 0.5)) *
                             fVar10) & uVar7 | ~uVar7 & (uint)fVar10);
  param_5[3] = (float)((uint)((float)(~-(uint)(fVar12 <= 0.0) &
                                     (uint)((3.0 - fVar20 * fVar12 * fVar20) * fVar20 * 0.5)) *
                             param_5[3]) & uVar8 | ~uVar8 & (uint)param_5[3]);
  if (iVar4 == 0) {
    *param_5 = 1.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[3] = 0.0;
  }
  fVar18 = *param_5;
  fVar9 = param_5[1];
  fVar10 = param_5[2];
  fVar11 = *param_3;
  fVar13 = param_3[1];
  fVar12 = param_3[2];
  *param_5 = fVar18;
  param_5[1] = fVar9;
  param_5[2] = fVar10;
  param_5[3] = 0.0 - (fVar13 * fVar9 + fVar11 * fVar18 + fVar12 * fVar10);
  return;
}

// 01080500  FUN_01080500  size=614  [__FILE__]
uint __thiscall FUN_01080500(int param_1,float *param_2,char param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined1 local_280 [544];
  int local_60 [8];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30 [7];
  int *local_14;
  
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x1a6) == '\0') {
      hkErrStream::hkErrStream(local_280,0x200);
      uVar13 = *(undefined4 *)(param_1 + 0x1a0);
      pcVar14 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
      FUN_01018d00("No index available (");
      FUN_01018e10(uVar13);
      FUN_01018d00(pcVar14);
      iVar6 = (**(code **)(*DAT_01f8fc58 + 0xc))
                        (3,0x79f9d886,local_280,
                         "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x167);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      hkBaseObject::hkBaseObject_38();
    }
    local_14 = (int *)0x0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      pfVar5 = *(float **)(param_1 + 0x48);
      do {
        if (param_4 < pfVar5[2] * param_2[2] + pfVar5[1] * param_2[1] + *pfVar5 * *param_2 +
                      pfVar5[3]) goto LAB_010805d8;
        local_14 = (int *)((int)local_14 + 1);
        pfVar5 = pfVar5 + 4;
      } while ((int)local_14 < *(int *)(param_1 + 0x4c));
    }
LAB_01080759:
    return CONCAT31((int3)((uint)local_14 >> 8),1);
  }
  local_30[0] = (float)*(undefined8 *)param_2;
  local_30[1] = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  local_30[2] = (float)*(undefined8 *)(param_2 + 2);
  local_30[3] = (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
  bVar2 = false;
  local_30[1] = (local_30[1] - *(float *)(param_1 + 0xe4)) * *(float *)(param_1 + 0xf4);
  local_30[0] = (local_30[0] - *(float *)(param_1 + 0xe0)) * *(float *)(param_1 + 0xf0);
  local_30[3] = (local_30[3] - *(float *)(param_1 + 0xec)) * *(float *)(param_1 + 0xfc);
  local_30[2] = (local_30[2] - *(float *)(param_1 + 0xe8)) * *(float *)(param_1 + 0xf8);
  iVar6 = 0;
  do {
    fVar9 = *(float *)((int)local_30 + iVar6);
    if ((8191.0 < fVar9) || (fVar9 < -8192.0)) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    bVar2 = (bool)(bVar2 | bVar3);
    if (fVar9 <= 8191.0) {
      if (-8192.0 <= fVar9) goto LAB_010805a3;
      fVar9 = -8192.0;
      fVar8 = -0.5;
    }
    else {
      fVar9 = 8191.0;
LAB_010805a3:
      if (0.0 <= fVar9) {
        fVar8 = 0.5;
      }
      else {
        fVar8 = -0.5;
      }
    }
    local_14 = (int *)(int)(fVar8 + fVar9);
    *(int **)((int)local_60 + iVar6) = local_14;
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0xc);
  if (!bVar2) {
    piVar4 = *(int **)(param_1 + 0x30);
    if (piVar4 == (int *)0x0) goto LAB_01080759;
    local_34 = local_60[1] >> 0x1f;
    local_38 = local_60[1];
    local_3c = local_60[2] >> 0x1f;
    local_40 = local_60[2];
    local_30[3] = (float)(local_60[0] >> 0x1f);
    local_30[2] = (float)local_60[0];
    while( true ) {
      local_14 = piVar4;
      lVar10 = __allmul(piVar4[10],piVar4[10] >> 0x1f,local_40,local_3c);
      lVar11 = __allmul(local_14[9],local_14[9] >> 0x1f,local_38,local_34);
      lVar12 = __allmul(local_14[8],local_14[8] >> 0x1f,local_30[2],local_30[3]);
      lVar12 = lVar10 + lVar11 + lVar12;
      uVar7 = (uint)lVar12;
      iVar6 = (int)((ulonglong)lVar12 >> 0x20) + local_14[0xd] + (uint)CARRY4(uVar7,local_14[0xc]);
      if ((0 < iVar6) || ((-1 < iVar6 && (uVar7 + local_14[0xc] != 0)))) break;
      piVar4 = (int *)*local_14;
      if (piVar4 == (int *)0x0) {
        return 1;
      }
    }
  }
LAB_010805d8:
  return (uint)local_14 & 0xffffff00;
}

// 01080770  FUN_01080770  size=32  [between]
void __thiscall FUN_01080770(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  param_2[1] = uVar1 & 3;
  *param_2 = uVar1 & 0xfffffffc;
  return;
}

// 01080790  FUN_01080790  size=45  [between]
void __thiscall FUN_01080790(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = 9 >> ((byte)uVar1 & 3) * '\x02' & 3;
  return;
}

// 01080830  FUN_01080830  size=16  [between]
void FUN_01080830(void)

{
  FUN_0107f200();
  FUN_0107ea20();
  return;
}

// 01080840  FUN_01080840  size=16  [between]
void FUN_01080840(void)

{
  FUN_0107f270();
  FUN_0107ea90();
  return;
}

// 01080850  hkBaseObject::hkBaseObject_223  size=51  [between]
void __fastcall hkBaseObject::hkBaseObject_223(undefined4 *param_1)

{
  *param_1 = hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
             ::vftable;
  FUN_0107f270();
  FUN_0107ea90();
  FUN_0107f200();
  FUN_0107ea20();
  *param_1 = vftable;
  return;
}

// 01080890  FUN_01080890  size=38  [between]
void FUN_01080890(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010808C0  hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::vf0C  size=20  [between]
void hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
     ::vf0C(void)

{
  FUN_0107f200();
  FUN_0107f270();
  return;
}

// 010808E0  FUN_010808e0  size=101  [between]
void __thiscall FUN_010808e0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x40);
  }
  iVar2 = param_3 - param_1[1];
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1[1] * 0x40 + *param_1 + 0x34);
    do {
      if (puVar1 != (undefined4 *)0x34) {
        puVar1[-2] = 0;
        *puVar1 = 0xffffffff;
      }
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 01080950  FUN_01080950  size=63  [between]
void __fastcall FUN_01080950(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01080990  FUN_01080990  size=64  [between]
void __fastcall FUN_01080990(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010809D0  FUN_010809d0  size=61  [between]
void __fastcall FUN_010809d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01080A60  FUN_01080a60  size=119  [between]
undefined4 * __thiscall FUN_01080a60(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xa00) == 0)) {
    iVar2 = FUN_0107e1b0();
  }
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 0xa00);
    *(undefined4 *)(iVar2 + 0xa00) = *puVar1;
    puVar1[0x10] = iVar2;
    *(int *)(iVar2 + 0xa0c) = *(int *)(iVar2 + 0xa0c) + 1;
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 0x20);
    puVar1[10] = *(undefined4 *)(param_2 + 0x28);
    puVar1[0xb] = *(undefined4 *)(param_2 + 0x2c);
    puVar1[0xc] = *(undefined4 *)(param_2 + 0x30);
    puVar1[0xd] = *(undefined4 *)(param_2 + 0x34);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01080B20  FUN_01080b20  size=62  [between]
undefined4 __fastcall FUN_01080b20(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc00) == 0)) {
    iVar2 = FUN_0107e220();
  }
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 0xc00);
    *(undefined4 *)(iVar2 + 0xc00) = *puVar1;
    puVar1[0x14] = iVar2;
    *(int *)(iVar2 + 0xc0c) = *(int *)(iVar2 + 0xc0c) + 1;
    uVar3 = FUN_0107f120();
    return uVar3;
  }
  return 0;
}

// 01080B60  FUN_01080b60  size=45  [between]
void __thiscall FUN_01080b60(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = 9 >> ((byte)uVar1 & 3) * '\x02' & 3;
  return;
}

// 01080B90  FUN_01080b90  size=46  [between]
uint * __thiscall FUN_01080b90(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + (0x12 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = uVar1 & 3;
  return param_2;
}

// 01080D50  FUN_01080d50  size=68  [between]
void __thiscall FUN_01080d50(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01080DA0  FUN_01080da0  size=61  [between]
void __fastcall FUN_01080da0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01080DE0  FUN_01080de0  size=953  [between]
void __thiscall FUN_01080de0(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_8;
  
  iVar2 = param_3[1];
  local_8 = param_1[1];
  if (iVar2 <= param_1[1]) {
    local_8 = iVar2;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar11 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar11 <= iVar2) {
      iVar11 = iVar2;
    }
    FUN_0100a210(param_2,param_1,iVar11,0x40);
  }
  iVar10 = *param_3;
  iVar12 = *param_1;
  iVar11 = 0;
  if (3 < local_8) {
    puVar6 = (undefined4 *)(iVar12 + 0x50);
    iVar9 = (local_8 - 4U >> 2) + 1;
    iVar11 = iVar9 * 4;
    puVar7 = (undefined4 *)(iVar10 + 100);
    do {
      uVar3 = puVar7[-0x14];
      uVar4 = puVar7[-0x13];
      uVar5 = puVar7[-0x12];
      puVar6[-0x10] = puVar7[-0x15];
      puVar6[-0xf] = uVar3;
      puVar6[-0xe] = uVar4;
      puVar6[-0xd] = uVar5;
      puVar6[-0xc] = puVar7[-0x11];
      puVar6[-0xb] = puVar7[-0x10];
      puVar6[-10] = puVar7[-0xf];
      puVar6[-9] = puVar7[-0xe];
      puVar6[-8] = puVar7[-0xd];
      puVar6[-7] = puVar7[-0xc];
      puVar1 = (undefined4 *)((iVar10 - iVar12) + (int)puVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar6[4] = puVar7[-1];
      puVar6[5] = *puVar7;
      puVar6[6] = puVar7[1];
      puVar6[7] = puVar7[2];
      puVar6[8] = puVar7[3];
      puVar6[9] = puVar7[4];
      uVar3 = puVar7[0xc];
      uVar4 = puVar7[0xd];
      uVar5 = puVar7[0xe];
      puVar6[0x10] = puVar7[0xb];
      puVar6[0x11] = uVar3;
      puVar6[0x12] = uVar4;
      puVar6[0x13] = uVar5;
      puVar6[0x14] = puVar7[0xf];
      puVar6[0x15] = puVar7[0x10];
      puVar6[0x16] = puVar7[0x11];
      puVar6[0x17] = puVar7[0x12];
      puVar6[0x18] = puVar7[0x13];
      puVar6[0x19] = puVar7[0x14];
      uVar3 = puVar7[0x1c];
      uVar4 = puVar7[0x1d];
      uVar5 = puVar7[0x1e];
      puVar6[0x20] = puVar7[0x1b];
      puVar6[0x21] = uVar3;
      puVar6[0x22] = uVar4;
      puVar6[0x23] = uVar5;
      puVar6[0x24] = puVar7[0x1f];
      puVar6[0x25] = puVar7[0x20];
      puVar6[0x26] = puVar7[0x21];
      puVar6[0x27] = puVar7[0x22];
      puVar6[0x28] = puVar7[0x23];
      puVar6[0x29] = puVar7[0x24];
      puVar7 = puVar7 + 0x40;
      puVar6 = puVar6 + 0x40;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (iVar11 < local_8) {
    puVar6 = (undefined4 *)(iVar11 * 0x40 + 0x24 + iVar10);
    puVar7 = (undefined4 *)(iVar11 * 0x40 + 0x10 + iVar12);
    iVar11 = local_8 - iVar11;
    do {
      puVar1 = (undefined4 *)((iVar10 - iVar12) + (int)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      puVar7[4] = puVar6[-1];
      puVar7[5] = *puVar6;
      puVar7[6] = puVar6[1];
      puVar7[7] = puVar6[2];
      puVar7[8] = puVar6[3];
      puVar7[9] = puVar6[4];
      puVar6 = puVar6 + 0x10;
      puVar7 = puVar7 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = iVar2 - local_8;
  iVar10 = *param_3 + local_8 * 0x40;
  iVar12 = *param_1 + local_8 * 0x40;
  param_3 = (int *)0x0;
  if (3 < iVar11) {
    puVar6 = (undefined4 *)(iVar10 + 0x6c);
    param_2 = (iVar11 - 4U >> 2) + 1;
    param_3 = (int *)(param_2 * 4);
    puVar8 = (undefined8 *)(iVar12 + 0x50);
    do {
      if (puVar8 != (undefined8 *)0x50) {
        puVar8[-8] = *(undefined8 *)(puVar6 + -0x17);
        puVar8[-7] = *(undefined8 *)(puVar6 + -0x15);
        puVar8[-6] = *(undefined8 *)(puVar6 + -0x13);
        *(undefined4 *)(puVar8 + -5) = puVar6[-0x11];
        *(undefined4 *)((int)puVar8 + -0x24) = puVar6[-0x10];
        *(undefined4 *)(puVar8 + -4) = puVar6[-0xf];
        *(undefined4 *)((int)puVar8 + -0x1c) = puVar6[-0xe];
      }
      if (puVar8 != (undefined8 *)0x10) {
        *puVar8 = *(undefined8 *)((iVar10 - iVar12) + (int)puVar8);
        puVar8[1] = *(undefined8 *)((iVar10 - iVar12) + 8 + (int)puVar8);
        puVar8[2] = *(undefined8 *)(puVar6 + -3);
        *(undefined4 *)(puVar8 + 3) = puVar6[-1];
        *(undefined4 *)((int)puVar8 + 0x1c) = *puVar6;
        *(undefined4 *)(puVar8 + 4) = puVar6[1];
        *(undefined4 *)((int)puVar8 + 0x24) = puVar6[2];
      }
      if (puVar8 != (undefined8 *)0xffffffd0) {
        puVar8[8] = *(undefined8 *)(puVar6 + 9);
        puVar8[9] = *(undefined8 *)(puVar6 + 0xb);
        puVar8[10] = *(undefined8 *)(puVar6 + 0xd);
        *(undefined4 *)(puVar8 + 0xb) = puVar6[0xf];
        *(undefined4 *)((int)puVar8 + 0x5c) = puVar6[0x10];
        *(undefined4 *)(puVar8 + 0xc) = puVar6[0x11];
        *(undefined4 *)((int)puVar8 + 100) = puVar6[0x12];
      }
      if (puVar8 != (undefined8 *)0xffffff90) {
        puVar8[0x10] = *(undefined8 *)(puVar6 + 0x19);
        puVar8[0x11] = *(undefined8 *)(puVar6 + 0x1b);
        puVar8[0x12] = *(undefined8 *)(puVar6 + 0x1d);
        *(undefined4 *)(puVar8 + 0x13) = puVar6[0x1f];
        *(undefined4 *)((int)puVar8 + 0x9c) = puVar6[0x20];
        *(undefined4 *)(puVar8 + 0x14) = puVar6[0x21];
        *(undefined4 *)((int)puVar8 + 0xa4) = puVar6[0x22];
      }
      puVar8 = puVar8 + 0x20;
      puVar6 = puVar6 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (iVar11 <= (int)param_3) {
    param_1[1] = iVar2;
    return;
  }
  puVar6 = (undefined4 *)((int)param_3 * 0x40 + 0x2c + iVar10);
  iVar11 = iVar11 - (int)param_3;
  puVar8 = (undefined8 *)((int)param_3 * 0x40 + 0x10 + iVar12);
  do {
    if (puVar8 != (undefined8 *)0x10) {
      *puVar8 = *(undefined8 *)((int)puVar8 + (iVar10 - iVar12));
      puVar8[1] = *(undefined8 *)((int)puVar8 + (iVar10 - iVar12) + 8);
      puVar8[2] = *(undefined8 *)(puVar6 + -3);
      *(undefined4 *)(puVar8 + 3) = puVar6[-1];
      *(undefined4 *)((int)puVar8 + 0x1c) = *puVar6;
      *(undefined4 *)(puVar8 + 4) = puVar6[1];
      *(undefined4 *)((int)puVar8 + 0x24) = puVar6[2];
    }
    puVar8 = puVar8 + 8;
    puVar6 = puVar6 + 0x10;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  param_1[1] = iVar2;
  return;
}

// 010811A0  FUN_010811a0  size=33  [between]
void FUN_010811a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0107f790(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010811D0  FUN_010811d0  size=355  [between]
void __thiscall FUN_010811d0(int param_1,float *param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  iVar1 = *(int *)(param_3 + 0x10);
  iVar2 = *(int *)(param_3 + 0xc);
  iVar3 = *(int *)(param_3 + 8);
  fVar14 = *(float *)(param_1 + 0x100);
  fVar15 = *(float *)(param_1 + 0x104);
  fVar17 = *(float *)(param_1 + 0x108);
  fVar18 = *(float *)(param_1 + 0x10c);
  fVar16 = *(float *)(param_1 + 0xe0);
  fVar10 = *(float *)(param_1 + 0xe4);
  fVar12 = *(float *)(param_1 + 0xe8);
  fVar19 = *(float *)(param_1 + 0xec);
  fVar20 = (float)*(int *)(iVar3 + 0x20) * fVar14 + fVar16;
  fVar21 = (float)*(int *)(iVar3 + 0x24) * fVar15 + fVar10;
  fVar22 = (float)*(int *)(iVar3 + 0x28) * fVar17 + fVar12;
  fVar23 = fVar18 * 0.0 + fVar19;
  fVar8 = ((float)*(int *)(iVar2 + 0x20) * fVar14 + fVar16) - fVar20;
  fVar9 = ((float)*(int *)(iVar2 + 0x24) * fVar15 + fVar10) - fVar21;
  fVar11 = ((float)*(int *)(iVar2 + 0x28) * fVar17 + fVar12) - fVar22;
  fVar13 = (fVar18 * 0.0 + fVar19) - fVar23;
  fVar14 = ((float)*(int *)(iVar1 + 0x20) * fVar14 + fVar16) - fVar20;
  fVar16 = ((float)*(int *)(iVar1 + 0x24) * fVar15 + fVar10) - fVar21;
  fVar17 = ((float)*(int *)(iVar1 + 0x28) * fVar17 + fVar12) - fVar22;
  fVar23 = (fVar18 * 0.0 + fVar19) - fVar23;
  fVar15 = fVar17 * fVar9 - fVar16 * fVar11;
  fVar17 = fVar14 * fVar11 - fVar17 * fVar8;
  fVar14 = fVar16 * fVar8 - fVar14 * fVar9;
  fVar18 = fVar23 * fVar13 - fVar23 * fVar13;
  *param_2 = fVar15;
  param_2[1] = fVar17;
  param_2[2] = fVar14;
  param_2[3] = fVar18;
  if (param_4 != '\0') {
    fVar16 = fVar15 * fVar15;
    fVar10 = fVar17 * fVar17;
    fVar12 = fVar14 * fVar14;
    fVar19 = fVar10 + fVar16 + fVar12;
    fVar8 = fVar10 + fVar16 + fVar12;
    fVar9 = fVar10 + fVar16 + fVar12;
    fVar12 = fVar10 + fVar16 + fVar12;
    auVar24._0_12_ = ZEXT812(0);
    auVar24._12_4_ = 0;
    uVar4 = -(uint)(0.0 - fVar19 < 0.0);
    uVar5 = -(uint)(0.0 - fVar8 < 0.0);
    uVar6 = -(uint)(0.0 - fVar9 < 0.0);
    uVar7 = -(uint)(0.0 - fVar12 < 0.0);
    auVar25._4_4_ = fVar8;
    auVar25._0_4_ = fVar19;
    auVar25._8_4_ = fVar9;
    auVar25._12_4_ = fVar12;
    auVar25 = rsqrtps(auVar24,auVar25);
    fVar16 = auVar25._0_4_;
    fVar10 = auVar25._4_4_;
    fVar11 = auVar25._8_4_;
    fVar13 = auVar25._12_4_;
    *param_2 = (float)((uint)((float)(~-(uint)(fVar19 <= 0.0) &
                                     (uint)((3.0 - fVar16 * fVar19 * fVar16) * fVar16 * 0.5)) *
                             fVar15) & uVar4 | ~uVar4 & (uint)fVar15);
    param_2[1] = (float)((uint)((float)(~-(uint)(fVar8 <= 0.0) &
                                       (uint)((3.0 - fVar10 * fVar8 * fVar10) * fVar10 * 0.5)) *
                               fVar17) & uVar5 | ~uVar5 & (uint)fVar17);
    param_2[2] = (float)((uint)((float)(~-(uint)(fVar9 <= 0.0) &
                                       (uint)((3.0 - fVar11 * fVar9 * fVar11) * fVar11 * 0.5)) *
                               fVar14) & uVar6 | ~uVar6 & (uint)fVar14);
    param_2[3] = (float)((uint)((float)(~-(uint)(fVar12 <= 0.0) &
                                       (uint)((3.0 - fVar13 * fVar12 * fVar13) * fVar13 * 0.5)) *
                               fVar18) & uVar7 | ~uVar7 & (uint)fVar18);
  }
  param_2[3] = -(param_2[2] * fVar22 + param_2[1] * fVar21 + *param_2 * fVar20);
  return;
}

// 01081340  FUN_01081340  size=63  [between]
void __fastcall FUN_01081340(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01081380  FUN_01081380  size=27  [between]
void __thiscall FUN_01081380(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 010813B0  FUN_010813b0  size=33  [between]
void FUN_010813b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0107f9c0(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010813E0  FUN_010813e0  size=27  [between]
void __thiscall FUN_010813e0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 01081400  FUN_01081400  size=63  [between]
void __fastcall FUN_01081400(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01081440  FUN_01081440  size=61  [between]
void __fastcall FUN_01081440(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01081480  FUN_01081480  size=33  [between]
void FUN_01081480(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0107fae0(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010814D0  hkBaseObject::hkBaseObject_222  size=211  [between]
void __fastcall hkBaseObject::hkBaseObject_222(int param_1)

{
  FUN_0107fd00(0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x54),(*(uint *)(param_1 + 0x5c) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (-1 < *(int *)(param_1 + 0x50)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x48),*(int *)(param_1 + 0x50) << 4);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < *(int *)(param_1 + 0x44)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x3c),*(int *)(param_1 + 0x44) << 6);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined ***)(param_1 + 0x14) =
       hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
       ::vftable;
  FUN_0107f270();
  FUN_0107ea90();
  FUN_0107f200();
  FUN_0107ea20();
  *(undefined ***)(param_1 + 0x14) = vftable;
  return;
}

// 010815B0  FUN_010815b0  size=98  [between]
void FUN_010815b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  uVar2 = 9 >> ((char)uVar2 * '\x02' & 0x1fU) & 3;
  uVar1 = *(uint *)(uVar1 + 0x14 + uVar2 * 4);
  param_1[1] = uVar2;
  while ((uVar1 & 0xfffffffc) != 0) {
    uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
    uVar2 = uVar1 & 0xfffffffc;
    *param_1 = uVar2;
    uVar3 = 9 >> ((byte)uVar1 & 3) * '\x02' & 3;
    uVar1 = *(uint *)(uVar2 + 0x14 + uVar3 * 4);
    param_1[1] = uVar3;
  }
  return;
}

// 01081620  FUN_01081620  size=708  [between]
void __thiscall FUN_01081620(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar2 = *param_3;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x40) != *(int *)(param_1 + 0x19c))) {
    *(int *)(iVar2 + 0x40) = *(int *)(param_1 + 0x19c);
    iVar2 = *param_3;
    lVar6 = (longlong)*(int *)(iVar2 + 0x28) * (longlong)*(int *)(param_2 + 0x28) +
            (longlong)*(int *)(iVar2 + 0x24) * (longlong)*(int *)(param_2 + 0x24) +
            (longlong)*(int *)(param_2 + 0x20) * (longlong)*(int *)(iVar2 + 0x20);
    if ((int)((int)((ulonglong)lVar6 >> 0x20) + *(int *)(iVar2 + 0x34) +
             (uint)CARRY4((uint)lVar6,*(uint *)(iVar2 + 0x30))) < 0) {
      *param_4 = iVar2;
      param_4[1] = param_3[1];
    }
    else {
      local_c = *(uint *)(iVar2 + 0x14 + param_3[1] * 4);
      local_10 = local_c & 0xfffffffc;
      local_c = local_c & 3;
      local_8 = param_1;
      FUN_01081620(param_2,&local_10,param_4);
      local_10 = *(uint *)(*param_3 + 0x14 + (9 >> ((char)param_3[1] * '\x02' & 0x1fU) & 3U) * 4);
      local_c = local_10 & 3;
      local_10 = local_10 & 0xfffffffc;
      FUN_01081620(param_2,&local_10,param_4);
      iVar2 = local_8;
      local_10 = *(uint *)(*param_3 + 0x14 + (0x12 >> ((char)param_3[1] * '\x02' & 0x1fU) & 3U) * 4)
      ;
      local_c = local_10 & 3;
      local_10 = local_10 & 0xfffffffc;
      FUN_01081620(param_2,&local_10,param_4);
      uVar3 = *(uint *)(*param_3 + 0x14 + param_3[1] * 4);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(undefined4 *)((uVar3 & 0xfffffffc) + 0x14 + (uVar3 & 3) * 4) = 0;
      }
      *(undefined4 *)(*param_3 + 0x14 + param_3[1] * 4) = 0;
      iVar4 = *param_3;
      uVar7 = 9 >> ((char)param_3[1] * '\x02' & 0x1fU) & 3;
      uVar3 = *(uint *)(iVar4 + 0x14 + uVar7 * 4);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(undefined4 *)((uVar3 & 0xfffffffc) + 0x14 + (uVar3 & 3) * 4) = 0;
      }
      *(undefined4 *)(iVar4 + 0x14 + uVar7 * 4) = 0;
      iVar4 = *param_3;
      uVar7 = 0x12 >> ((char)param_3[1] * '\x02' & 0x1fU) & 3;
      uVar3 = *(uint *)(iVar4 + 0x14 + uVar7 * 4);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(undefined4 *)((uVar3 & 0xfffffffc) + 0x14 + (uVar3 & 3) * 4) = 0;
      }
      *(undefined4 *)(iVar4 + 0x14 + uVar7 * 4) = 0;
      param_3 = (int *)*param_3;
      piVar8 = param_3 + 2;
      param_4 = (int *)0x3;
      do {
        iVar4 = *piVar8;
        piVar1 = (int *)(iVar4 + 0x30);
        *piVar1 = *piVar1 + -1;
        if (*(int *)(iVar4 + 0x30) == 0) {
          piVar1 = (int *)*piVar8;
          iVar4 = *piVar1;
          piVar5 = (int *)piVar1[1];
          if (iVar4 != 0) {
            *(int **)(iVar4 + 4) = piVar5;
          }
          if (piVar5 == (int *)0x0) {
            *(int *)(iVar2 + 0x20) = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
          *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
          iVar4 = piVar1[0x10];
          piVar1 = (int *)(iVar4 + 0xa0c);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            if (*(int *)(iVar4 + 0xa04) == 0) {
              *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar4 + 0xa08);
            }
            else {
              *(undefined4 *)(*(int *)(iVar4 + 0xa04) + 0xa08) = *(undefined4 *)(iVar4 + 0xa08);
            }
            if (*(int *)(iVar4 + 0xa08) != 0) {
              *(undefined4 *)(*(int *)(iVar4 + 0xa08) + 0xa04) = *(undefined4 *)(iVar4 + 0xa04);
            }
            (**(code **)(PTR_vftable_018e9b94 + 8))(iVar4,0xa10);
          }
        }
        piVar8 = piVar8 + 1;
        param_4 = (int *)((int)param_4 + -1);
      } while (param_4 != (int *)0x0);
      iVar4 = *param_3;
      piVar8 = (int *)param_3[1];
      if (iVar4 != 0) {
        *(int **)(iVar4 + 4) = piVar8;
      }
      if (piVar8 == (int *)0x0) {
        *(int *)(iVar2 + 0x30) = iVar4;
      }
      else {
        *piVar8 = iVar4;
      }
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + -1;
      iVar4 = param_3[0x14];
      piVar8 = (int *)(iVar4 + 0xc0c);
      *piVar8 = *piVar8 + -1;
      if (*piVar8 == 0) {
        if (*(int *)(iVar4 + 0xc04) == 0) {
          *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar4 + 0xc08);
        }
        else {
          *(undefined4 *)(*(int *)(iVar4 + 0xc04) + 0xc08) = *(undefined4 *)(iVar4 + 0xc08);
        }
        if (*(int *)(iVar4 + 0xc08) != 0) {
          *(undefined4 *)(*(int *)(iVar4 + 0xc08) + 0xc04) = *(undefined4 *)(iVar4 + 0xc04);
        }
        (**(code **)(PTR_vftable_018e9b94 + 8))(iVar4,0xc10);
        return;
      }
    }
  }
  return;
}

// 010818F0  FUN_010818f0  size=190  [between]
void __thiscall FUN_010818f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    local_10 = (undefined4 *)0x0;
    local_c = 0;
    local_8 = -0x80000000;
    if (0 < (int)uVar1) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_10,((int)uVar1 < 0) - 1 & uVar1,0x10);
    }
    local_c = local_c + uVar1;
    puVar6 = local_10;
    for (puVar2 = *(undefined4 **)(param_1 + 0x20); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      uVar3 = puVar2[5];
      uVar4 = puVar2[6];
      uVar5 = puVar2[7];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar6 = puVar6 + 4;
    }
    FUN_0108f520(&local_10,param_1 + 0x54);
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 << 4);
    }
  }
  FUN_0108ef00(param_1 + 0x54,param_2,param_3);
  return;
}

// 010819B0  FUN_010819b0  size=386  [between]
void __fastcall FUN_010819b0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  int local_50 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  
  uVar1 = *(uint *)(param_1 + 0x24);
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = -0x80000000;
  if (0 < (int)uVar1) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_20,((int)uVar1 < 0) - 1 & uVar1,0x10);
  }
  local_1c = local_1c + uVar1;
  puVar8 = local_20;
  for (puVar2 = *(undefined4 **)(param_1 + 0x20); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    uVar4 = puVar2[5];
    uVar5 = puVar2[6];
    uVar6 = puVar2[7];
    *puVar8 = puVar2[4];
    puVar8[1] = uVar4;
    puVar8[2] = uVar5;
    puVar8[3] = uVar6;
    puVar8 = puVar8 + 4;
  }
  FUN_0107e4b0(local_20,local_1c);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = (uint)local_14 & -(uint)(piVar3 != (int *)0x0);
  do {
    if (uVar1 == 0) {
      local_1c = 0;
      if (-1 < local_18) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
      }
      return;
    }
    local_30._0_4_ = (float)*(undefined8 *)(piVar3 + 4);
    local_30._4_4_ = (float)((ulonglong)*(undefined8 *)(piVar3 + 4) >> 0x20);
    uStack_28._0_4_ = (float)*(undefined8 *)(piVar3 + 6);
    uStack_28._4_4_ = (float)((ulonglong)*(undefined8 *)(piVar3 + 6) >> 0x20);
    local_30 = CONCAT44((local_30._4_4_ - *(float *)(param_1 + 0xe4)) * *(float *)(param_1 + 0xf4),
                        ((float)local_30 - *(float *)(param_1 + 0xe0)) * *(float *)(param_1 + 0xf0))
    ;
    uStack_28 = CONCAT44((uStack_28._4_4_ - *(float *)(param_1 + 0xec)) * *(float *)(param_1 + 0xfc)
                         ,((float)uStack_28 - *(float *)(param_1 + 0xe8)) *
                          *(float *)(param_1 + 0xf8));
    iVar7 = 0;
    do {
      fVar10 = *(float *)((int)&local_30 + iVar7);
      if (fVar10 <= 8191.0) {
        if (-8192.0 <= fVar10) goto LAB_01081aae;
        fVar10 = -8192.0;
        fVar9 = -0.5;
      }
      else {
        fVar10 = 8191.0;
LAB_01081aae:
        if (0.0 <= fVar10) {
          fVar9 = 0.5;
        }
        else {
          fVar9 = -0.5;
        }
      }
      *(int *)((int)local_50 + iVar7) = (int)(fVar9 + fVar10);
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0xc);
    piVar3[8] = local_50[0];
    piVar3[9] = local_50[1];
    piVar3[10] = local_50[2];
    piVar3 = (int *)*piVar3;
    uVar1 = (uint)local_14 & -(uint)(piVar3 != (int *)0x0);
  } while( true );
}

// 01081B40  FUN_01081b40  size=498  [between]
float10 __thiscall FUN_01081b40(int param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_30 = -*param_2;
  fStack_2c = -param_2[1];
  fStack_28 = -param_2[2];
  fStack_24 = -param_2[3];
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    local_20 = (int *)0x0;
    local_1c = 0;
    local_18 = -0x80000000;
    if (0 < (int)uVar1) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_20,((int)uVar1 < 0) - 1 & uVar1,0x10);
    }
    local_1c = local_1c + uVar1;
    piVar6 = local_20;
    for (puVar2 = *(undefined4 **)(param_1 + 0x20); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      iVar3 = puVar2[5];
      iVar4 = puVar2[6];
      iVar5 = puVar2[7];
      *piVar6 = puVar2[4];
      piVar6[1] = iVar3;
      piVar6[2] = iVar4;
      piVar6[3] = iVar5;
      piVar6 = piVar6 + 4;
    }
    FUN_0108f520(&local_20,param_1 + 0x54);
    local_1c = 0;
    if (-1 < local_18) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
    }
  }
  local_14 = param_1 + 0x54;
  FUN_0108ef00(local_14,param_2,&local_40);
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    local_20 = (int *)0x0;
    local_1c = 0;
    local_18 = -0x80000000;
    if (0 < (int)uVar1) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_20,((int)uVar1 < 0) - 1 & uVar1,0x10);
    }
    local_1c = local_1c + uVar1;
    piVar6 = local_20;
    for (puVar2 = *(undefined4 **)(param_1 + 0x20); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      iVar3 = puVar2[5];
      iVar4 = puVar2[6];
      iVar5 = puVar2[7];
      *piVar6 = puVar2[4];
      piVar6[1] = iVar3;
      piVar6[2] = iVar4;
      piVar6[3] = iVar5;
      piVar6 = piVar6 + 4;
    }
    FUN_0108f520(&local_20,local_14);
    local_1c = 0;
    if (-1 < local_18) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
    }
  }
  FUN_0108ef00(local_14,&local_30,&local_50);
  *param_4 = param_2[2] * fStack_38 + param_2[1] * fStack_3c + *param_2 * local_40;
  fVar7 = param_2[2] * fStack_48 + param_2[1] * fStack_4c + *param_2 * local_50;
  *param_3 = fVar7;
  return (float10)*param_4 - (float10)fVar7;
}

// 01081D70  hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::vf00  size=93  [between]
undefined4 * __thiscall
hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  FUN_0107f270();
  FUN_0107ea90();
  FUN_0107f200();
  FUN_0107ea20();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01081DD0  FUN_01081dd0  size=56  [between]
int __thiscall FUN_01081dd0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_222();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1b0);
  }
  return param_1;
}

// 01081E10  FUN_01081e10  size=99  [between]
undefined4 __fastcall FUN_01081e10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar6 = 0;
  iVar3 = *(int *)(iVar1 + 8 + (9 >> ((char)iVar2 * '\x02' & 0x1fU) & 3U) * 4);
  piVar5 = (int *)(iVar3 + 0x20);
  while( true ) {
    iVar4 = *(int *)((*(int *)(iVar1 + 8 + iVar2 * 4) - iVar3) + (int)piVar5);
    if (iVar4 < *piVar5) {
      return 1;
    }
    if (*piVar5 < iVar4) break;
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 1;
    if (2 < iVar6) {
      return 1;
    }
  }
  if ((*(uint *)(iVar1 + 0x14 + iVar2 * 4) & 0xfffffffc) == 0) {
    return 1;
  }
  return 0;
}

// 01081E80  FUN_01081e80  size=102  [between]
void __thiscall FUN_01081e80(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x40);
  }
  iVar2 = param_2 - param_1[1];
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1[1] * 0x40 + *param_1 + 0x34);
    do {
      if (puVar1 != (undefined4 *)0x34) {
        puVar1[-2] = 0;
        *puVar1 = 0xffffffff;
      }
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 01081EF0  FUN_01081ef0  size=161  [between]
int * __thiscall FUN_01081ef0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xa00) == 0)) {
    iVar2 = FUN_0107e1b0();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0xa00);
    *(int *)(iVar2 + 0xa00) = *piVar1;
    piVar1[0x10] = iVar2;
    *(int *)(iVar2 + 0xa0c) = *(int *)(iVar2 + 0xa0c) + 1;
    *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(param_2 + 0x20);
    piVar1[10] = *(int *)(param_2 + 0x28);
    piVar1[0xb] = *(int *)(param_2 + 0x2c);
    piVar1[0xc] = *(int *)(param_2 + 0x30);
    piVar1[0xd] = *(int *)(param_2 + 0x34);
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 01081FA0  FUN_01081fa0  size=108  [between]
int * __fastcall FUN_01081fa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xa00) == 0)) {
    iVar2 = FUN_0107e1b0();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0xa00);
    *(int *)(iVar2 + 0xa00) = *piVar1;
    piVar1[0x10] = iVar2;
    *(int *)(iVar2 + 0xa0c) = *(int *)(iVar2 + 0xa0c) + 1;
    piVar1[0xb] = 0;
    piVar1[0xd] = -1;
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 01082010  FUN_01082010  size=106  [between]
int * __thiscall FUN_01082010(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc00) == 0)) {
    iVar2 = FUN_0107e220();
  }
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 0xc00);
    *(undefined4 *)(iVar2 + 0xc00) = *puVar1;
    puVar1[0x14] = iVar2;
    *(int *)(iVar2 + 0xc0c) = *(int *)(iVar2 + 0xc0c) + 1;
    piVar3 = (int *)FUN_0107f120(param_2);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = param_1[1];
      if (param_1[1] != 0) {
        *(int **)(param_1[1] + 4) = piVar3;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = (int)piVar3;
    }
    return piVar3;
  }
  return (int *)0x0;
}

// 01082080  FUN_01082080  size=102  [between]
int * __fastcall FUN_01082080(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc00) == 0)) {
    iVar2 = FUN_0107e220();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0xc00);
    *(int *)(iVar2 + 0xc00) = *piVar1;
    piVar1[0x14] = iVar2;
    *(int *)(iVar2 + 0xc0c) = *(int *)(iVar2 + 0xc0c) + 1;
    piVar1[0xe] = -1;
    piVar1[0x11] = -1;
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 010820F0  FUN_010820f0  size=953  [between]
void __thiscall FUN_010820f0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_8;
  
  iVar2 = param_2[1];
  local_8 = param_1[1];
  if (iVar2 <= param_1[1]) {
    local_8 = iVar2;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar11 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar11 <= iVar2) {
      iVar11 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar11,0x40);
  }
  iVar10 = *param_1;
  iVar12 = *param_2;
  iVar11 = 0;
  if (3 < local_8) {
    puVar6 = (undefined4 *)(iVar10 + 0x50);
    iVar9 = (local_8 - 4U >> 2) + 1;
    iVar11 = iVar9 * 4;
    puVar7 = (undefined4 *)(iVar12 + 100);
    do {
      uVar3 = puVar7[-0x14];
      uVar4 = puVar7[-0x13];
      uVar5 = puVar7[-0x12];
      puVar6[-0x10] = puVar7[-0x15];
      puVar6[-0xf] = uVar3;
      puVar6[-0xe] = uVar4;
      puVar6[-0xd] = uVar5;
      puVar6[-0xc] = puVar7[-0x11];
      puVar6[-0xb] = puVar7[-0x10];
      puVar6[-10] = puVar7[-0xf];
      puVar6[-9] = puVar7[-0xe];
      puVar6[-8] = puVar7[-0xd];
      puVar6[-7] = puVar7[-0xc];
      puVar1 = (undefined4 *)((iVar12 - iVar10) + (int)puVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar6[4] = puVar7[-1];
      puVar6[5] = *puVar7;
      puVar6[6] = puVar7[1];
      puVar6[7] = puVar7[2];
      puVar6[8] = puVar7[3];
      puVar6[9] = puVar7[4];
      uVar3 = puVar7[0xc];
      uVar4 = puVar7[0xd];
      uVar5 = puVar7[0xe];
      puVar6[0x10] = puVar7[0xb];
      puVar6[0x11] = uVar3;
      puVar6[0x12] = uVar4;
      puVar6[0x13] = uVar5;
      puVar6[0x14] = puVar7[0xf];
      puVar6[0x15] = puVar7[0x10];
      puVar6[0x16] = puVar7[0x11];
      puVar6[0x17] = puVar7[0x12];
      puVar6[0x18] = puVar7[0x13];
      puVar6[0x19] = puVar7[0x14];
      uVar3 = puVar7[0x1c];
      uVar4 = puVar7[0x1d];
      uVar5 = puVar7[0x1e];
      puVar6[0x20] = puVar7[0x1b];
      puVar6[0x21] = uVar3;
      puVar6[0x22] = uVar4;
      puVar6[0x23] = uVar5;
      puVar6[0x24] = puVar7[0x1f];
      puVar6[0x25] = puVar7[0x20];
      puVar6[0x26] = puVar7[0x21];
      puVar6[0x27] = puVar7[0x22];
      puVar6[0x28] = puVar7[0x23];
      puVar6[0x29] = puVar7[0x24];
      puVar7 = puVar7 + 0x40;
      puVar6 = puVar6 + 0x40;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (iVar11 < local_8) {
    puVar6 = (undefined4 *)(iVar11 * 0x40 + 0x24 + iVar12);
    puVar7 = (undefined4 *)(iVar11 * 0x40 + 0x10 + iVar10);
    iVar11 = local_8 - iVar11;
    do {
      puVar1 = (undefined4 *)((iVar12 - iVar10) + (int)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      puVar7[4] = puVar6[-1];
      puVar7[5] = *puVar6;
      puVar7[6] = puVar6[1];
      puVar7[7] = puVar6[2];
      puVar7[8] = puVar6[3];
      puVar7[9] = puVar6[4];
      puVar6 = puVar6 + 0x10;
      puVar7 = puVar7 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = iVar2 - local_8;
  iVar10 = *param_2 + local_8 * 0x40;
  iVar12 = *param_1 + local_8 * 0x40;
  param_2 = (int *)0x0;
  if (3 < iVar11) {
    puVar6 = (undefined4 *)(iVar10 + 0x6c);
    local_8 = (iVar11 - 4U >> 2) + 1;
    param_2 = (int *)(local_8 * 4);
    puVar8 = (undefined8 *)(iVar12 + 0x50);
    do {
      if (puVar8 != (undefined8 *)0x50) {
        puVar8[-8] = *(undefined8 *)(puVar6 + -0x17);
        puVar8[-7] = *(undefined8 *)(puVar6 + -0x15);
        puVar8[-6] = *(undefined8 *)(puVar6 + -0x13);
        *(undefined4 *)(puVar8 + -5) = puVar6[-0x11];
        *(undefined4 *)((int)puVar8 + -0x24) = puVar6[-0x10];
        *(undefined4 *)(puVar8 + -4) = puVar6[-0xf];
        *(undefined4 *)((int)puVar8 + -0x1c) = puVar6[-0xe];
      }
      if (puVar8 != (undefined8 *)0x10) {
        *puVar8 = *(undefined8 *)((iVar10 - iVar12) + (int)puVar8);
        puVar8[1] = *(undefined8 *)((iVar10 - iVar12) + 8 + (int)puVar8);
        puVar8[2] = *(undefined8 *)(puVar6 + -3);
        *(undefined4 *)(puVar8 + 3) = puVar6[-1];
        *(undefined4 *)((int)puVar8 + 0x1c) = *puVar6;
        *(undefined4 *)(puVar8 + 4) = puVar6[1];
        *(undefined4 *)((int)puVar8 + 0x24) = puVar6[2];
      }
      if (puVar8 != (undefined8 *)0xffffffd0) {
        puVar8[8] = *(undefined8 *)(puVar6 + 9);
        puVar8[9] = *(undefined8 *)(puVar6 + 0xb);
        puVar8[10] = *(undefined8 *)(puVar6 + 0xd);
        *(undefined4 *)(puVar8 + 0xb) = puVar6[0xf];
        *(undefined4 *)((int)puVar8 + 0x5c) = puVar6[0x10];
        *(undefined4 *)(puVar8 + 0xc) = puVar6[0x11];
        *(undefined4 *)((int)puVar8 + 100) = puVar6[0x12];
      }
      if (puVar8 != (undefined8 *)0xffffff90) {
        puVar8[0x10] = *(undefined8 *)(puVar6 + 0x19);
        puVar8[0x11] = *(undefined8 *)(puVar6 + 0x1b);
        puVar8[0x12] = *(undefined8 *)(puVar6 + 0x1d);
        *(undefined4 *)(puVar8 + 0x13) = puVar6[0x1f];
        *(undefined4 *)((int)puVar8 + 0x9c) = puVar6[0x20];
        *(undefined4 *)(puVar8 + 0x14) = puVar6[0x21];
        *(undefined4 *)((int)puVar8 + 0xa4) = puVar6[0x22];
      }
      puVar8 = puVar8 + 0x20;
      puVar6 = puVar6 + 0x40;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if (iVar11 <= (int)param_2) {
    param_1[1] = iVar2;
    return;
  }
  puVar6 = (undefined4 *)((int)param_2 * 0x40 + 0x2c + iVar10);
  iVar11 = iVar11 - (int)param_2;
  puVar8 = (undefined8 *)((int)param_2 * 0x40 + 0x10 + iVar12);
  do {
    if (puVar8 != (undefined8 *)0x10) {
      *puVar8 = *(undefined8 *)((int)puVar8 + (iVar10 - iVar12));
      puVar8[1] = *(undefined8 *)((int)puVar8 + (iVar10 - iVar12) + 8);
      puVar8[2] = *(undefined8 *)(puVar6 + -3);
      *(undefined4 *)(puVar8 + 3) = puVar6[-1];
      *(undefined4 *)((int)puVar8 + 0x1c) = *puVar6;
      *(undefined4 *)(puVar8 + 4) = puVar6[1];
      *(undefined4 *)((int)puVar8 + 0x24) = puVar6[2];
    }
    puVar8 = puVar8 + 8;
    puVar6 = puVar6 + 0x10;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  param_1[1] = iVar2;
  return;
}

// 010824B0  FUN_010824b0  size=40  [between]
void FUN_010824b0(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0107f790(param_1,0,param_2 + -1,0);
  }
  return;
}

// 010824E0  FUN_010824e0  size=54  [between]
int __thiscall FUN_010824e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 01082880  FUN_01082880  size=40  [between]
void FUN_01082880(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0107f9c0(param_1,0,param_2 + -1,0);
  }
  return;
}

// 010828B0  FUN_010828b0  size=209  [between]
void __thiscall FUN_010828b0(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  uVar1 = *param_1;
  uVar6 = param_1[1];
  uVar5 = uVar6;
  uVar4 = uVar1;
  while( true ) {
    bVar3 = (char)uVar5 * '\x02';
    iVar2 = *(int *)(uVar4 + 8 + (9 >> (bVar3 & 0x1f) & 3U) * 4);
    fVar7 = *(float *)(iVar2 + 0x2c) + 1.0;
    *(float *)(iVar2 + 0x2c) = fVar7;
    if (1.0 < fVar7) {
      *param_2 = 1;
    }
    uVar4 = *(uint *)(uVar4 + 0x14 + (0x12 >> (bVar3 & 0x1f) & 3U) * 4);
    uVar5 = uVar4 & 3;
    uVar4 = uVar4 & 0xfffffffc;
    if (uVar4 == 0) break;
    if (uVar4 + uVar5 == uVar6 + uVar1) {
      return;
    }
  }
  uVar1 = *(uint *)(uVar1 + 0x14 + uVar6 * 4);
  bVar3 = (byte)uVar1;
  while (uVar1 = uVar1 & 0xfffffffc, uVar1 != 0) {
    uVar6 = 9 >> (bVar3 & 3) * '\x02' & 3;
    iVar2 = *(int *)(uVar1 + 8 + (9 >> (char)uVar6 * '\x02' & 3U) * 4);
    fVar7 = *(float *)(iVar2 + 0x2c) + 1.0;
    *(float *)(iVar2 + 0x2c) = fVar7;
    if (1.0 < fVar7) {
      *param_2 = 1;
    }
    uVar1 = *(uint *)(uVar1 + 0x14 + uVar6 * 4);
    bVar3 = (byte)uVar1;
  }
  return;
}

// 01082990  FUN_01082990  size=3598  [__FILE__]
bool __fastcall FUN_01082990(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined *puVar25;
  undefined1 local_400 [512];
  undefined1 local_200 [16];
  undefined1 local_1f0 [48];
  undefined1 local_1c0 [48];
  undefined1 local_190 [48];
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_34;
  float local_30;
  float *pfStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    *(undefined1 *)(param_1 + 0x1a5) = 0;
    if (*(int *)(param_1 + 0x198) == 3) {
      puVar4 = (undefined8 *)FUN_0107f360();
      local_100 = *puVar4;
      piVar6 = *(int **)(param_1 + 0x30);
      uStack_f8 = puVar4[1];
      local_c0 = 0.0;
      fStack_bc = 0.0;
      fStack_b8 = 0.0;
      fStack_b4 = 0.0;
      local_30 = 0.0;
      pfStack_2c = (float *)0x0;
      fStack_28 = 0.0;
      fStack_24 = 0.0;
      local_90 = 0.0;
      fStack_8c = 0.0;
      fStack_88 = 0.0;
      fStack_84 = 0.0;
      local_34 = 0.0;
      local_78 = 0.0;
      if (piVar6 != (int *)0x0) {
        local_d0 = 0.0;
        fStack_cc = 0.0;
        fStack_c8 = 0.0;
        fStack_c4 = 0.0;
        local_f0 = 3.0;
        fStack_ec = 3.0;
        fStack_e8 = 3.0;
        uStack_e4 = 0x40400000;
        local_a0 = 0.5;
        fStack_9c = 0.5;
        fStack_98 = 0.5;
        fStack_94 = 0.5;
        do {
          iVar7 = piVar6[4];
          local_d4 = (float)*(int *)(iVar7 + 0x20);
          local_dc = (float)*(int *)(iVar7 + 0x24);
          iVar1 = piVar6[3];
          local_74 = (float)*(int *)(iVar7 + 0x28);
          local_e0 = (float)*(int *)(iVar1 + 0x24);
          iVar7 = piVar6[2];
          local_d8 = (float)*(int *)(iVar1 + 0x28);
          fVar11 = *(float *)(param_1 + 0x100);
          fVar12 = *(float *)(param_1 + 0x104);
          fVar13 = *(float *)(param_1 + 0x108);
          fVar14 = *(float *)(param_1 + 0x10c);
          fVar15 = *(float *)(param_1 + 0xe0);
          fVar16 = *(float *)(param_1 + 0xe4);
          fVar17 = *(float *)(param_1 + 0xe8);
          fVar18 = *(float *)(param_1 + 0xec);
          local_b0 = ((float)*(int *)(iVar7 + 0x20) * fVar11 + fVar15) - (float)local_100;
          fStack_ac = ((float)*(int *)(iVar7 + 0x24) * fVar12 + fVar16) - local_100._4_4_;
          fStack_a8 = ((float)*(int *)(iVar7 + 0x28) * fVar13 + fVar17) - (float)uStack_f8;
          fStack_a4 = (fVar14 * 0.0 + fVar18) - uStack_f8._4_4_;
          local_60 = ((float)*(int *)(iVar1 + 0x20) * fVar11 + fVar15) - (float)local_100;
          fStack_5c = (local_e0 * fVar12 + fVar16) - local_100._4_4_;
          fStack_58 = (local_d8 * fVar13 + fVar17) - (float)uStack_f8;
          fStack_54 = (fVar14 * 0.0 + fVar18) - uStack_f8._4_4_;
          local_50 = (local_d4 * fVar11 + fVar15) - (float)local_100;
          fStack_4c = (local_dc * fVar12 + fVar16) - local_100._4_4_;
          fStack_48 = (local_74 * fVar13 + fVar17) - (float)uStack_f8;
          fStack_44 = (fVar14 * 0.0 + fVar18) - uStack_f8._4_4_;
          local_70 = local_b0;
          fStack_6c = fStack_ac;
          fStack_68 = fStack_a8;
          fStack_64 = fStack_a4;
          pfVar5 = (float *)FUN_010141c0(local_200);
          local_14 = *pfVar5;
          fVar11 = local_60 - local_b0;
          fVar12 = fStack_5c - fStack_ac;
          fVar13 = fStack_58 - fStack_a8;
          auVar21._4_4_ = fVar11;
          auVar21._0_4_ = fVar13;
          auVar21._8_4_ = fVar12;
          auVar21._12_4_ = fStack_54 - fStack_a4;
          fVar14 = (fStack_48 - fStack_a8) * fVar12 - (fStack_4c - fStack_ac) * fVar13;
          fVar13 = (local_50 - local_b0) * fVar13 - (fStack_48 - fStack_a8) * fVar11;
          fVar11 = (fStack_4c - fStack_ac) * fVar11 - (local_50 - local_b0) * fVar12;
          fVar14 = fVar14 * fVar14;
          fVar13 = fVar13 * fVar13;
          fVar11 = fVar11 * fVar11;
          auVar23._0_4_ = fVar13 + fVar14 + fVar11;
          auVar23._4_4_ = fVar13 + fVar14 + fVar11;
          auVar23._8_4_ = fVar13 + fVar14 + fVar11;
          auVar23._12_4_ = fVar13 + fVar14 + fVar11;
          auVar21 = rsqrtps(auVar21,auVar23);
          fVar11 = auVar21._0_4_;
          local_78 = (float)(~-(uint)(auVar23._0_4_ <= local_d0) &
                            (uint)((local_f0 - fVar11 * auVar23._0_4_ * fVar11) * local_a0 * fVar11
                                  * auVar23._0_4_)) + local_78;
          local_c0 = (local_b0 + local_60 + local_50) * local_14 + local_c0;
          fStack_bc = (fStack_ac + fStack_5c + fStack_4c) * local_14 + fStack_bc;
          fStack_b8 = (fStack_a8 + fStack_58 + fStack_48) * local_14 + fStack_b8;
          fStack_b4 = (fStack_a4 + fStack_54 + fStack_44) * local_14 + fStack_b4;
          local_34 = local_14 + local_34;
          local_30 = ((local_50 + local_70) * local_60 + local_50 * local_70 + local_70 * local_70 +
                      local_60 * local_60 + local_50 * local_50) * local_14 + local_30;
          local_90 = (fStack_48 * fStack_5c + fStack_58 * fStack_6c + fStack_68 * fStack_4c +
                      fStack_48 * fStack_6c + fStack_68 * fStack_5c + fStack_4c * fStack_58 +
                      fStack_68 * fStack_6c * 2.0 + fStack_5c * fStack_58 * 2.0 +
                     fStack_4c * fStack_48 * 2.0) * local_14 + local_90;
          pfStack_2c = (float *)(((fStack_4c + fStack_6c) * fStack_5c + fStack_4c * fStack_6c +
                                  fStack_6c * fStack_6c + fStack_5c * fStack_5c +
                                 fStack_4c * fStack_4c) * local_14 + (float)pfStack_2c);
          fStack_8c = (fStack_68 * local_60 + fStack_58 * local_50 + fStack_48 * local_70 +
                       fStack_68 * local_50 + fStack_58 * local_70 + fStack_48 * local_60 +
                       fStack_68 * local_70 * 2.0 + fStack_58 * local_60 * 2.0 +
                      fStack_48 * local_50 * 2.0) * local_14 + fStack_8c;
          fStack_28 = ((fStack_68 + fStack_48) * fStack_58 + fStack_68 * fStack_48 +
                       fStack_68 * fStack_68 + fStack_58 * fStack_58 + fStack_48 * fStack_48) *
                      local_14 + fStack_28;
          piVar6 = (int *)*piVar6;
          fStack_88 = (fStack_4c * local_60 + fStack_5c * local_70 + fStack_6c * local_50 +
                       fStack_4c * local_70 + fStack_6c * local_60 + fStack_5c * local_50 +
                       fStack_6c * local_70 * 2.0 + fStack_5c * local_60 * 2.0 +
                      fStack_4c * local_50 * 2.0) * local_14 + fStack_88;
        } while (piVar6 != (int *)0x0);
      }
      fVar11 = 1.0 / (local_34 * 4.0);
      local_c0 = fVar11 * local_c0 + (float)local_100;
      fStack_bc = fVar11 * fStack_bc + local_100._4_4_;
      fStack_b8 = fVar11 * fStack_b8 + (float)uStack_f8;
      fStack_b4 = fVar11 * fStack_b4 + uStack_f8._4_4_;
      *(float *)(param_1 + 0x140) = local_c0;
      *(float *)(param_1 + 0x144) = fStack_bc;
      *(float *)(param_1 + 0x148) = fStack_b8;
      *(float *)(param_1 + 0x14c) = fStack_b4;
      if (*(char *)(param_1 + 0xd) != '\0') {
        piVar6 = *(int **)(param_1 + 0x30);
        local_14 = 0.0;
        if (piVar6 != (int *)0x0) {
          local_a0 = *(float *)(param_1 + 0x100);
          fStack_9c = *(float *)(param_1 + 0x104);
          fStack_98 = *(float *)(param_1 + 0x108);
          fStack_94 = *(float *)(param_1 + 0x10c);
          local_f0 = *(float *)(param_1 + 0xe0);
          fStack_ec = *(float *)(param_1 + 0xe4);
          fStack_e8 = *(float *)(param_1 + 0xe8);
          uStack_e4 = *(undefined4 *)(param_1 + 0xec);
          local_d0 = 0.0;
          fStack_cc = 0.0;
          fStack_c8 = 0.0;
          fStack_c4 = 0.0;
          do {
            iVar7 = piVar6[2];
            iVar1 = piVar6[3];
            iVar2 = piVar6[4];
            fVar18 = (float)*(int *)(iVar7 + 0x20) * local_a0 + local_f0;
            fVar19 = (float)*(int *)(iVar7 + 0x24) * fStack_9c + fStack_ec;
            fVar20 = (float)*(int *)(iVar7 + 0x28) * fStack_98 + fStack_e8;
            fVar11 = ((float)*(int *)(iVar1 + 0x20) * local_a0 + local_f0) - fVar18;
            fVar12 = ((float)*(int *)(iVar1 + 0x24) * fStack_9c + fStack_ec) - fVar19;
            fVar13 = ((float)*(int *)(iVar1 + 0x28) * fStack_98 + fStack_e8) - fVar20;
            fVar14 = ((float)*(int *)(iVar2 + 0x20) * local_a0 + local_f0) - fVar18;
            fVar16 = ((float)*(int *)(iVar2 + 0x24) * fStack_9c + fStack_ec) - fVar19;
            fVar17 = ((float)*(int *)(iVar2 + 0x28) * fStack_98 + fStack_e8) - fVar20;
            fVar15 = fVar17 * fVar12 - fVar16 * fVar13;
            fVar17 = fVar14 * fVar13 - fVar17 * fVar11;
            fVar14 = fVar16 * fVar11 - fVar14 * fVar12;
            fVar11 = fVar15 * fVar15;
            fVar12 = fVar17 * fVar17;
            fVar13 = fVar14 * fVar14;
            auVar22._0_4_ = fVar12 + fVar11 + fVar13;
            auVar22._4_4_ = fVar12 + fVar11 + fVar13;
            auVar22._8_4_ = fVar12 + fVar11 + fVar13;
            auVar22._12_4_ = fVar12 + fVar11 + fVar13;
            uVar8 = -(uint)(0.0 - auVar22._0_4_ < 0.0);
            uVar9 = -(uint)(0.0 - auVar22._4_4_ < 0.0);
            uVar10 = -(uint)(0.0 - auVar22._8_4_ < 0.0);
            auVar23 = rsqrtps(ZEXT816(0),auVar22);
            fVar11 = auVar23._0_4_;
            fVar12 = auVar23._4_4_;
            fVar13 = auVar23._8_4_;
            local_b0 = (float)((uint)((float)(~-(uint)(auVar22._0_4_ <= 0.0) &
                                             (uint)((3.0 - fVar11 * auVar22._0_4_ * fVar11) *
                                                   fVar11 * 0.5)) * fVar15) & uVar8 |
                              ~uVar8 & (uint)fVar15);
            fStack_ac = (float)((uint)((float)(~-(uint)(auVar22._4_4_ <= 0.0) &
                                              (uint)((3.0 - fVar12 * auVar22._4_4_ * fVar12) *
                                                    fVar12 * 0.5)) * fVar17) & uVar9 |
                               ~uVar9 & (uint)fVar17);
            fStack_a8 = (float)((uint)((float)(~-(uint)(auVar22._8_4_ <= 0.0) &
                                              (uint)((3.0 - fVar13 * auVar22._8_4_ * fVar13) *
                                                    fVar13 * 0.5)) * fVar14) & uVar10 |
                               ~uVar10 & (uint)fVar14);
            fStack_a4 = -(fStack_a8 * fVar20 + fStack_ac * fVar19 + local_b0 * fVar18);
            fVar11 = fStack_ac * fStack_bc + local_b0 * local_c0 + fStack_a8 * fStack_b8 + fStack_a4
            ;
            if (local_14 <= fVar11) {
              local_14 = fVar11;
            }
            piVar6 = (int *)*piVar6;
          } while (piVar6 != (int *)0x0);
          if (0.0 < local_14) {
            *(undefined1 *)(param_1 + 0x1a5) = 1;
          }
        }
        fVar11 = local_14;
        if (*(char *)(param_1 + 0x1a6) != '\0') {
          fVar11 = 0.0;
          if (*(int *)(param_1 + 0x4c) < 1) goto LAB_01083186;
          puVar4 = *(undefined8 **)(param_1 + 0x48);
          iVar7 = *(int *)(param_1 + 0x4c);
          do {
            local_d0 = (float)*puVar4;
            fStack_cc = (float)((ulonglong)*puVar4 >> 0x20);
            fStack_c8 = (float)puVar4[1];
            fStack_c4 = (float)((ulonglong)puVar4[1] >> 0x20);
            fVar12 = fStack_bc * fStack_cc + local_c0 * local_d0 + fStack_b8 * fStack_c8 + fStack_c4
            ;
            if (fVar11 <= fVar12) {
              fVar11 = fVar12;
            }
            puVar4 = puVar4 + 2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (0.0 < fVar11) {
          *(undefined1 *)(param_1 + 0x1a5) = 1;
        }
      }
LAB_01083186:
      *(float *)(param_1 + 0x194) = local_78 * 0.5;
      *(float *)(param_1 + 400) = local_34 * 0.16666667;
      if (1.1920929e-07 < local_34 * 0.16666667) {
        fVar11 = 1.0 / (local_34 * 10.0);
        fVar12 = 1.0 / (local_34 * 20.0);
        local_c0 = local_c0 - (float)local_100;
        fStack_bc = fStack_bc - local_100._4_4_;
        fStack_b8 = fStack_b8 - (float)uStack_f8;
        fStack_b4 = fStack_b4 - uStack_f8._4_4_;
        local_30 = fVar11 * local_30;
        pfStack_2c = (float *)(fVar11 * (float)pfStack_2c);
        fStack_28 = fVar11 * fStack_28;
        fStack_24 = fVar11 * fStack_24;
        local_70 = fStack_28 + (float)pfStack_2c;
        local_90 = fVar12 * local_90;
        fStack_8c = fVar12 * fStack_8c;
        fStack_88 = fVar12 * fStack_88;
        fStack_84 = fVar12 * fStack_84;
        fStack_6c = -fStack_88;
        fStack_68 = -fStack_8c;
        fStack_5c = local_30 + fStack_28;
        fStack_64 = 0.0;
        fStack_58 = -local_90;
        fStack_54 = 0.0;
        fStack_48 = local_30 + (float)pfStack_2c;
        fStack_44 = 0.0;
        local_60 = fStack_6c;
        local_50 = fStack_68;
        fStack_4c = fStack_58;
        FUN_010136d0(&local_c0);
        FUN_010136d0(&DAT_01701b10);
        FUN_01013ae0(local_1c0,local_1c0);
        FUN_01013ae0(local_160,local_160);
        FUN_01013480();
        FUN_01013790(local_190);
        local_b0 = 1.0;
        fStack_ac = 1.0;
        fStack_a8 = 1.0;
        fStack_a4 = 1.0;
        local_a0 = 1.0;
        fStack_9c = 1.0;
        fStack_98 = 1.0;
        fStack_94 = 1.0;
        FUN_01013da0(&local_a0,local_1f0);
        iVar7 = FUN_01014480(&local_130,&local_f0,0x80,0x34000000);
        if (iVar7 == 1) {
          *(undefined1 *)(param_1 + 0x1a5) = 1;
          local_130 = 0x3f800000;
          uStack_12c = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          local_120 = 0;
          uStack_11c = 0x3f800000;
          uStack_118 = 0;
          uStack_114 = 0;
          local_110 = 0;
          uStack_10c = 0;
          uStack_108 = 0x3f800000;
          uStack_104 = 0;
          local_f0 = local_b0;
          fStack_ec = fStack_ac;
          fStack_e8 = fStack_a8;
          uStack_e4 = fStack_a4;
          hkErrStream::hkErrStream(local_400,0x200);
          uVar24 = *(undefined4 *)(param_1 + 0x1a0);
          puVar25 = &DAT_017d5924;
          FUN_01018d00("Failed to diagonalize inertia matrix (");
          FUN_01018e10(uVar24);
          FUN_01018d00(puVar25);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,0x45465,local_400,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                     ,0x80b);
          hkBaseObject::hkBaseObject_38();
        }
        FUN_01013480();
        FUN_0100ae80();
        *(float *)(param_1 + 0x160) = local_70;
        *(float *)(param_1 + 0x164) = fStack_6c;
        *(float *)(param_1 + 0x168) = fStack_68;
        *(float *)(param_1 + 0x16c) = fStack_64;
        *(float *)(param_1 + 0x170) = local_60;
        *(float *)(param_1 + 0x174) = fStack_5c;
        *(float *)(param_1 + 0x178) = fStack_58;
        *(float *)(param_1 + 0x17c) = fStack_54;
        *(float *)(param_1 + 0x180) = local_50;
        *(float *)(param_1 + 0x184) = fStack_4c;
        *(float *)(param_1 + 0x188) = fStack_48;
        *(float *)(param_1 + 0x18c) = fStack_44;
        FUN_01014430(&local_130);
        *(float *)(param_1 + 0x150) = local_70;
        *(float *)(param_1 + 0x154) = fStack_5c;
        *(float *)(param_1 + 0x158) = fStack_48;
        *(undefined4 *)(param_1 + 0x15c) = 0;
        FUN_01013480();
        *(undefined4 *)(param_1 + 0x110) = local_130;
        *(undefined4 *)(param_1 + 0x114) = uStack_12c;
        *(undefined4 *)(param_1 + 0x118) = uStack_128;
        *(undefined4 *)(param_1 + 0x11c) = uStack_124;
        *(undefined4 *)(param_1 + 0x120) = local_120;
        *(undefined4 *)(param_1 + 0x124) = uStack_11c;
        *(undefined4 *)(param_1 + 0x128) = uStack_118;
        *(undefined4 *)(param_1 + 300) = uStack_114;
        *(undefined4 *)(param_1 + 0x130) = local_110;
        *(undefined4 *)(param_1 + 0x134) = uStack_10c;
        *(undefined4 *)(param_1 + 0x138) = uStack_108;
        *(undefined4 *)(param_1 + 0x13c) = uStack_104;
        *(undefined1 *)(param_1 + 0x1a4) = 1;
        return *(char *)(param_1 + 0x1a4) == '\0';
      }
      FUN_0100ac20(&DAT_01701cd0);
      *(undefined1 *)(param_1 + 0x1a5) = 1;
      *(undefined4 *)(param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0;
      *(undefined4 *)(param_1 + 0x188) = 0;
      *(undefined4 *)(param_1 + 0x18c) = 0;
      *(undefined1 *)(param_1 + 0x1a4) = 1;
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      return *(char *)(param_1 + 0x1a4) == '\0';
    }
    if (*(int *)(param_1 + 0x198) == 2) {
      uVar8 = *(uint *)(param_1 + 0x24);
      pfStack_2c = (float *)0x0;
      fStack_28 = 0.0;
      fStack_24 = -0.0;
      local_a0 = 0.0;
      fStack_9c = 0.0;
      fStack_98 = 0.0;
      fStack_94 = 0.0;
      local_74 = 0.0;
      if (0 < (int)uVar8) {
        FUN_0100a210(&PTR_vftable_018e9b94,&pfStack_2c,((int)uVar8 < 0) - 1 & uVar8,0x10);
      }
      pfVar5 = pfStack_2c;
      for (puVar3 = *(undefined4 **)(param_1 + 0x20); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        iVar7 = puVar3[9];
        iVar1 = puVar3[10];
        fVar11 = *(float *)(param_1 + 0x104);
        fVar12 = *(float *)(param_1 + 0x108);
        fVar13 = *(float *)(param_1 + 0x10c);
        fVar14 = *(float *)(param_1 + 0xe4);
        fVar15 = *(float *)(param_1 + 0xe8);
        fVar16 = *(float *)(param_1 + 0xec);
        *pfVar5 = (float)(int)puVar3[8] * *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0);
        pfVar5[1] = (float)iVar7 * fVar11 + fVar14;
        pfVar5[2] = (float)iVar1 * fVar12 + fVar15;
        pfVar5[3] = fVar13 * 0.0 + fVar16;
        pfVar5 = pfVar5 + 4;
      }
      fVar11 = local_74;
      fVar12 = local_a0;
      fVar13 = fStack_9c;
      fVar14 = fStack_98;
      fVar15 = fStack_94;
      fVar16 = local_a0;
      fVar17 = fStack_9c;
      fVar18 = fStack_98;
      fVar19 = fStack_94;
      if (1 < (int)((int)fStack_28 + uVar8 + -1)) {
        iVar7 = (int)fStack_28 + uVar8 + -2;
        pfVar5 = pfStack_2c;
        do {
          fVar13 = pfVar5[8] - *pfStack_2c;
          fVar14 = pfVar5[9] - pfStack_2c[1];
          fVar15 = pfVar5[10] - pfStack_2c[2];
          fVar16 = pfVar5[4] - *pfStack_2c;
          fVar17 = pfVar5[5] - pfStack_2c[1];
          fVar18 = pfVar5[6] - pfStack_2c[2];
          local_b0 = ABS((fVar14 * fVar16 - fVar13 * fVar17) * *(float *)(param_1 + 0xd8) +
                         (fVar13 * fVar18 - fVar15 * fVar16) * *(float *)(param_1 + 0xd4) +
                         (fVar15 * fVar17 - fVar14 * fVar18) * *(float *)(param_1 + 0xd0));
          fStack_ac = 0.0;
          fStack_a8 = 0.0;
          fStack_a4 = 0.0;
          fVar12 = local_b0 * 0.33333334;
          fVar11 = fVar11 + local_b0;
          iVar7 = iVar7 + -1;
          local_a0 = local_a0 + (fVar13 + fVar16) * fVar12;
          fStack_9c = fStack_9c + (fVar14 + fVar17) * fVar12;
          fStack_98 = fStack_98 + (fVar15 + fVar18) * fVar12;
          fStack_94 = fStack_94 +
                      ((pfVar5[0xb] - pfStack_2c[3]) + (pfVar5[7] - pfStack_2c[3])) * fVar12;
          pfVar5 = pfVar5 + 4;
          fVar12 = local_a0;
          fVar13 = fStack_9c;
          fVar14 = fStack_98;
          fVar15 = fStack_94;
          fVar16 = *(float *)(param_1 + 0xd0);
          fVar17 = *(float *)(param_1 + 0xd4);
          fVar18 = *(float *)(param_1 + 0xd8);
          fVar19 = *(float *)(param_1 + 0xdc);
        } while (iVar7 != 0);
      }
      fStack_94 = fVar19;
      fStack_98 = fVar18;
      fStack_9c = fVar17;
      local_a0 = fVar16;
      *(float *)(param_1 + 0x194) = fVar11 * 0.5;
      *(undefined1 *)(param_1 + 0x1a4) = 1;
      *(undefined4 *)(param_1 + 0x160) = 0x3f800000;
      fVar11 = 1.0 / fVar11;
      *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      fVar16 = pfStack_2c[1];
      fVar17 = pfStack_2c[2];
      fVar18 = pfStack_2c[3];
      *(float *)(param_1 + 0x140) = fVar11 * fVar12 + *pfStack_2c;
      *(float *)(param_1 + 0x144) = fVar11 * fVar13 + fVar16;
      *(float *)(param_1 + 0x148) = fVar11 * fVar14 + fVar17;
      *(float *)(param_1 + 0x14c) = fVar11 * fVar15 + fVar18;
      fStack_28 = 0.0;
      if (-1 < (int)fStack_24) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(pfStack_2c,(int)fStack_24 << 4);
        return *(char *)(param_1 + 0x1a4) == '\0';
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1a4) = 1;
      *(undefined4 *)(param_1 + 0x194) = 0;
      *(undefined4 *)(param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 0x160) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(undefined4 *)(param_1 + 0x174) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0;
      *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x18c) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 300) = 0;
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0x3f800000;
    }
  }
  return *(char *)(param_1 + 0x1a4) == '\0';
}

// 010837C0  FUN_010837c0  size=309  [between]
void __fastcall FUN_010837c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar1 = *param_1;
  do {
    if (iVar1 == 0) {
      return;
    }
    uVar4 = param_1[1];
    do {
      *param_1 = iVar1;
      uVar4 = 9 >> ((char)uVar4 * '\x02' & 0x1fU) & 3;
      param_1[1] = uVar4;
      if (uVar4 == 0) goto LAB_01083896;
      local_8 = 0;
      iVar6 = *(int *)(iVar1 + 8 + (9 >> (char)uVar4 * '\x02' & 3U) * 4);
      piVar3 = (int *)(iVar6 + 0x20);
      while( true ) {
        iVar5 = *(int *)((*(int *)(iVar1 + 8 + uVar4 * 4) - iVar6) + (int)piVar3);
        if (iVar5 < *piVar3) goto LAB_01083849;
        if (*piVar3 < iVar5) break;
        local_8 = local_8 + 1;
        piVar3 = piVar3 + 1;
        if (2 < local_8) goto LAB_01083849;
      }
    } while ((*(uint *)(iVar1 + 0x14 + uVar4 * 4) & 0xfffffffc) != 0);
LAB_01083849:
    if (uVar4 != 0) {
      iVar1 = *param_1;
      iVar6 = *(int *)(iVar1 + 8 + uVar4 * 4);
      piVar3 = (int *)(iVar6 + 0x20);
      iVar5 = 0;
      while( true ) {
        iVar2 = *(int *)((*(int *)(iVar1 + 8 + (9 >> (char)uVar4 * '\x02' & 3U) * 4) - iVar6) +
                        (int)piVar3);
        if (*piVar3 < iVar2) {
          return;
        }
        if (iVar2 < *piVar3) break;
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 1;
        if (2 < iVar5) {
          return;
        }
      }
      if ((*(uint *)(iVar1 + 0x14 + param_1[1] * 4) & 0xfffffffc) == 0) {
        return;
      }
    }
LAB_01083896:
    iVar1 = *(int *)*param_1;
    *param_1 = iVar1;
    param_1[1] = 0;
    if (iVar1 == 0) {
      return;
    }
    piVar3 = (int *)(*(int *)(iVar1 + 8) + 0x20);
    iVar6 = 0;
    while( true ) {
      iVar5 = *(int *)((*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) + (int)piVar3);
      if (*piVar3 < iVar5) {
        return;
      }
      if (iVar5 < *piVar3) break;
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
      if (2 < iVar6) {
        return;
      }
    }
    if ((*(uint *)(iVar1 + 0x14 + param_1[1] * 4) & 0xfffffffc) == 0) {
      return;
    }
  } while( true );
}

// 01083900  FUN_01083900  size=784  [__FILE__]
void __thiscall FUN_01083900(int param_1,float param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  char *pcVar22;
  undefined1 local_238 [512];
  int local_38;
  uint local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_20;
  uint local_1c;
  uint *local_18;
  undefined4 *local_14;
  
  local_38 = param_1;
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_238,0x200);
    uVar21 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar22 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar21);
    FUN_01018d00(pcVar22);
    iVar5 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_238,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  if (*(int *)(param_1 + 0x198) == 3) {
    local_14 = *(undefined4 **)(param_1 + 0x30);
    while (local_14 != (undefined4 *)0x0) {
      local_18 = local_14 + 5;
      local_20 = 0;
      puVar8 = local_14;
      do {
        puVar4 = local_14;
        local_34 = *local_18;
        local_1c = local_34 & 0xfffffffc;
        iVar5 = 0;
        piVar7 = (int *)(puVar8[(9 >> ((char)local_20 * '\x02' & 0x1fU) & 3U) + 2] + 0x20);
        do {
          iVar2 = *(int *)((local_18[-3] - puVar8[(9 >> ((char)local_20 * '\x02' & 0x1fU) & 3U) + 2]
                           ) + (int)piVar7);
          if (iVar2 < *piVar7) break;
          if (*piVar7 < iVar2) {
            if (local_1c != 0) goto LAB_01083bdf;
            break;
          }
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar5 < 3);
        if (local_14[0xe] != *(int *)((local_34 & 0xfffffffc) + 0x38)) {
          iVar5 = *(int *)(local_38 + 0x48);
          pfVar6 = (float *)(iVar5 + local_14[0xe] * 0x10);
          pfVar1 = (float *)(iVar5 + *(int *)(local_1c + 0x38) * 0x10);
          if (pfVar6[2] * pfVar1[2] + pfVar6[1] * pfVar1[1] + *pfVar6 * *pfVar1 < param_2) {
            fVar16 = *pfVar6 + *pfVar1;
            fVar17 = pfVar6[1] + pfVar1[1];
            fVar18 = pfVar6[2] + pfVar1[2];
            fVar12 = fVar16 * fVar16;
            fVar13 = fVar17 * fVar17;
            fVar14 = fVar18 * fVar18;
            auVar15._0_4_ = fVar13 + fVar12 + fVar14;
            auVar15._4_4_ = fVar13 + fVar12 + fVar14;
            auVar15._8_4_ = fVar13 + fVar12 + fVar14;
            auVar15._12_4_ = fVar13 + fVar12 + fVar14;
            auVar19._0_12_ = ZEXT812(0);
            auVar19._12_4_ = 0;
            uVar9 = -(uint)(0.0 - auVar15._0_4_ < 0.0);
            uVar10 = -(uint)(0.0 - auVar15._4_4_ < 0.0);
            uVar11 = -(uint)(0.0 - auVar15._8_4_ < 0.0);
            auVar20 = rsqrtps(auVar19,auVar15);
            fVar12 = auVar20._0_4_;
            fVar13 = auVar20._4_4_;
            fVar14 = auVar20._8_4_;
            auVar20._4_4_ = uVar10;
            auVar20._0_4_ = uVar9;
            auVar20._8_4_ = uVar11;
            auVar20._12_4_ = -(uint)(0.0 - auVar15._12_4_ < 0.0);
            iVar5 = movmskps(iVar5,auVar20);
            local_30 = (float)(~uVar9 & (uint)fVar16 |
                              (uint)((float)(~-(uint)(auVar15._0_4_ <= 0.0) &
                                            (uint)((3.0 - fVar12 * auVar15._0_4_ * fVar12) *
                                                  fVar12 * 0.5)) * fVar16) & uVar9);
            fStack_2c = (float)(~uVar10 & (uint)fVar17 |
                               (uint)((float)(~-(uint)(auVar15._4_4_ <= 0.0) &
                                             (uint)((3.0 - fVar13 * auVar15._4_4_ * fVar13) *
                                                   fVar13 * 0.5)) * fVar17) & uVar10);
            fStack_28 = (float)(~uVar11 & (uint)fVar18 |
                               (uint)((float)(~-(uint)(auVar15._8_4_ <= 0.0) &
                                             (uint)((3.0 - fVar14 * auVar15._8_4_ * fVar14) *
                                                   fVar14 * 0.5)) * fVar18) & uVar11);
            if (iVar5 != 0) {
              puVar8 = *(undefined4 **)(local_38 + 0x20);
              fStack_24 = ((float)(int)puVar8[9] * *(float *)(local_38 + 0x104) +
                          *(float *)(local_38 + 0xe4)) * fStack_2c +
                          ((float)(int)puVar8[8] * *(float *)(local_38 + 0x100) +
                          *(float *)(local_38 + 0xe0)) * local_30 +
                          ((float)(int)puVar8[10] * *(float *)(local_38 + 0x108) +
                          *(float *)(local_38 + 0xe8)) * fStack_28;
              if (*(char *)(local_38 + 0xe) != '\0') {
                for (puVar8 = (undefined4 *)*puVar8; puVar8 != (undefined4 *)0x0;
                    puVar8 = (undefined4 *)*puVar8) {
                  fVar12 = ((float)(int)puVar8[10] * *(float *)(local_38 + 0x108) +
                           *(float *)(local_38 + 0xe8)) * fStack_28 +
                           ((float)(int)puVar8[9] * *(float *)(local_38 + 0x104) +
                           *(float *)(local_38 + 0xe4)) * fStack_2c +
                           ((float)(int)puVar8[8] * *(float *)(local_38 + 0x100) +
                           *(float *)(local_38 + 0xe0)) * local_30;
                  if (fStack_24 <= fVar12) {
                    fStack_24 = fVar12;
                  }
                }
              }
              fStack_24 = -fStack_24;
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_3,0x10);
              }
              pfVar6 = (float *)(param_3[1] * 0x10 + *param_3);
              *pfVar6 = local_30;
              pfVar6[1] = fStack_2c;
              pfVar6[2] = fStack_28;
              pfVar6[3] = fStack_24;
              param_3[1] = param_3[1] + 1;
            }
          }
        }
LAB_01083bdf:
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
        puVar8 = puVar4;
      } while (local_20 < 3);
      local_14 = (undefined4 *)*puVar4;
    }
  }
  return;
}

// 01083C10  FUN_01083c10  size=59  [between]
void __fastcall FUN_01083c10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01083C50  FUN_01083c50  size=63  [between]
void __fastcall FUN_01083c50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01083C90  FUN_01083c90  size=40  [between]
void FUN_01083c90(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0107fae0(param_1,0,param_2 + -1,0);
  }
  return;
}

// 01083CC0  FUN_01083cc0  size=61  [between]
void __fastcall FUN_01083cc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01083D00  FUN_01083d00  size=144  [between]
void FUN_01083d00(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  
  fVar1 = param_2[3];
  fVar2 = param_1[3];
  fVar3 = param_3[3];
  fVar4 = param_1[3];
  fVar8 = (param_3[2] - param_1[2]) * (param_2[1] - param_1[1]) -
          (param_3[1] - param_1[1]) * (param_2[2] - param_1[2]);
  fVar9 = (*param_3 - *param_1) * (param_2[2] - param_1[2]) -
          (param_3[2] - param_1[2]) * (*param_2 - *param_1);
  fVar10 = (param_3[1] - param_1[1]) * (*param_2 - *param_1) -
           (*param_3 - *param_1) * (param_2[1] - param_1[1]);
  fVar5 = fVar8 * fVar8;
  fVar6 = fVar9 * fVar9;
  fVar7 = fVar10 * fVar10;
  fVar11 = fVar6 + fVar5 + fVar7;
  fVar12 = fVar6 + fVar5 + fVar7;
  fVar13 = fVar6 + fVar5 + fVar7;
  fVar7 = fVar6 + fVar5 + fVar7;
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar11;
  auVar15._8_4_ = fVar13;
  auVar15._12_4_ = fVar7;
  auVar15 = rsqrtps(auVar14,auVar15);
  fVar5 = auVar15._0_4_;
  fVar6 = auVar15._4_4_;
  fVar16 = auVar15._8_4_;
  fVar17 = auVar15._12_4_;
  *param_4 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5))
             * fVar8;
  param_4[1] = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar6 * fVar12 * fVar6) * fVar6 * 0.5)) * fVar9;
  param_4[2] = (float)(~-(uint)(fVar13 <= 0.0) &
                      (uint)((3.0 - fVar16 * fVar13 * fVar16) * fVar16 * 0.5)) * fVar10;
  param_4[3] = (float)(~-(uint)(fVar7 <= 0.0) &
                      (uint)((3.0 - fVar17 * fVar7 * fVar17) * fVar17 * 0.5)) *
               ((fVar3 - fVar4) * (fVar1 - fVar2) - (fVar3 - fVar4) * (fVar1 - fVar2));
  return;
}

// 01083D90  FUN_01083d90  size=187  [between]
void FUN_01083d90(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar7 = (param_3[2] - fVar3) * (param_2[1] - fVar2) - (param_3[1] - fVar2) * (param_2[2] - fVar3);
  fVar8 = (*param_3 - fVar1) * (param_2[2] - fVar3) - (param_3[2] - fVar3) * (*param_2 - fVar1);
  fVar9 = (param_3[1] - fVar2) * (*param_2 - fVar1) - (*param_3 - fVar1) * (param_2[1] - fVar2);
  fVar4 = fVar7 * fVar7;
  fVar5 = fVar8 * fVar8;
  fVar6 = fVar9 * fVar9;
  fVar10 = fVar5 + fVar4 + fVar6;
  fVar11 = fVar5 + fVar4 + fVar6;
  fVar12 = fVar5 + fVar4 + fVar6;
  auVar13._4_4_ = fVar11;
  auVar13._0_4_ = fVar10;
  auVar13._8_4_ = fVar12;
  auVar13._12_4_ = fVar5 + fVar4 + fVar6;
  auVar13 = rsqrtps(in_XMM5,auVar13);
  fVar4 = auVar13._0_4_;
  fVar5 = auVar13._4_4_;
  fVar6 = auVar13._8_4_;
  fVar7 = fVar7 * (float)(~-(uint)(fVar10 <= 0.0) &
                         (uint)((3.0 - fVar4 * fVar10 * fVar4) * fVar4 * 0.5));
  fVar8 = fVar8 * (float)(~-(uint)(fVar11 <= 0.0) &
                         (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5));
  fVar9 = fVar9 * (float)(~-(uint)(fVar12 <= 0.0) &
                         (uint)((3.0 - fVar6 * fVar12 * fVar6) * fVar6 * 0.5));
  *param_4 = fVar7;
  param_4[1] = fVar8;
  param_4[2] = fVar9;
  param_4[3] = 0.0 - (fVar2 * fVar8 + fVar1 * fVar7 + fVar3 * fVar9);
  return;
}

// 01083E50  hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>  size=109  [between]
int __fastcall
hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
::
hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
          (int param_1)

{
  LONG LVar1;
  
  FUN_01077490();
  *(undefined ***)(param_1 + 0x14) = vftable;
  *(undefined2 *)(param_1 + 0x1a) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x80000000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  LVar1 = InterlockedExchangeAdd((LONG *)&DAT_0209a988,1);
  *(LONG *)(param_1 + 0x1a0) = LVar1;
  FUN_0107fd00(0);
  return param_1;
}

// 01083EC0  FUN_01083ec0  size=1307  [between]
undefined8 * __fastcall FUN_01083ec0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int local_14;
  undefined8 *local_10;
  undefined4 *local_c;
  int local_8;
  
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x1b0);
  if (iVar5 == 0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    local_10 = (undefined8 *)
               hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
               ::
               hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
                         ();
  }
  *local_10 = *param_1;
  local_10[1] = param_1[1];
  uVar8 = *(undefined4 *)((int)param_1 + 0xc4);
  uVar1 = *(undefined4 *)(param_1 + 0x19);
  uVar2 = *(undefined4 *)((int)param_1 + 0xcc);
  *(undefined4 *)(local_10 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)local_10 + 0xc4) = uVar8;
  *(undefined4 *)(local_10 + 0x19) = uVar1;
  *(undefined4 *)((int)local_10 + 0xcc) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0xd4);
  uVar1 = *(undefined4 *)(param_1 + 0x1b);
  uVar2 = *(undefined4 *)((int)param_1 + 0xdc);
  *(undefined4 *)(local_10 + 0x1a) = *(undefined4 *)(param_1 + 0x1a);
  *(undefined4 *)((int)local_10 + 0xd4) = uVar8;
  *(undefined4 *)(local_10 + 0x1b) = uVar1;
  *(undefined4 *)((int)local_10 + 0xdc) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0xe4);
  uVar1 = *(undefined4 *)(param_1 + 0x1d);
  uVar2 = *(undefined4 *)((int)param_1 + 0xec);
  *(undefined4 *)(local_10 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)local_10 + 0xe4) = uVar8;
  *(undefined4 *)(local_10 + 0x1d) = uVar1;
  *(undefined4 *)((int)local_10 + 0xec) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0xf4);
  uVar1 = *(undefined4 *)(param_1 + 0x1f);
  uVar2 = *(undefined4 *)((int)param_1 + 0xfc);
  *(undefined4 *)(local_10 + 0x1e) = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)((int)local_10 + 0xf4) = uVar8;
  *(undefined4 *)(local_10 + 0x1f) = uVar1;
  *(undefined4 *)((int)local_10 + 0xfc) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0x21);
  uVar2 = *(undefined4 *)((int)param_1 + 0x10c);
  *(undefined4 *)(local_10 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)local_10 + 0x104) = uVar8;
  *(undefined4 *)(local_10 + 0x21) = uVar1;
  *(undefined4 *)((int)local_10 + 0x10c) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0x114);
  uVar1 = *(undefined4 *)(param_1 + 0x23);
  uVar2 = *(undefined4 *)((int)param_1 + 0x11c);
  *(undefined4 *)(local_10 + 0x22) = *(undefined4 *)(param_1 + 0x22);
  *(undefined4 *)((int)local_10 + 0x114) = uVar8;
  *(undefined4 *)(local_10 + 0x23) = uVar1;
  *(undefined4 *)((int)local_10 + 0x11c) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0x124);
  uVar1 = *(undefined4 *)(param_1 + 0x25);
  uVar2 = *(undefined4 *)((int)param_1 + 300);
  *(undefined4 *)(local_10 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)local_10 + 0x124) = uVar8;
  *(undefined4 *)(local_10 + 0x25) = uVar1;
  *(undefined4 *)((int)local_10 + 300) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0x134);
  uVar1 = *(undefined4 *)(param_1 + 0x27);
  uVar2 = *(undefined4 *)((int)param_1 + 0x13c);
  *(undefined4 *)(local_10 + 0x26) = *(undefined4 *)(param_1 + 0x26);
  *(undefined4 *)((int)local_10 + 0x134) = uVar8;
  *(undefined4 *)(local_10 + 0x27) = uVar1;
  *(undefined4 *)((int)local_10 + 0x13c) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0x144);
  uVar1 = *(undefined4 *)(param_1 + 0x29);
  uVar2 = *(undefined4 *)((int)param_1 + 0x14c);
  *(undefined4 *)(local_10 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)local_10 + 0x144) = uVar8;
  *(undefined4 *)(local_10 + 0x29) = uVar1;
  *(undefined4 *)((int)local_10 + 0x14c) = uVar2;
  uVar8 = *(undefined4 *)((int)param_1 + 0x154);
  uVar1 = *(undefined4 *)(param_1 + 0x2b);
  uVar2 = *(undefined4 *)((int)param_1 + 0x15c);
  *(undefined4 *)(local_10 + 0x2a) = *(undefined4 *)(param_1 + 0x2a);
  *(undefined4 *)((int)local_10 + 0x154) = uVar8;
  *(undefined4 *)(local_10 + 0x2b) = uVar1;
  *(undefined4 *)((int)local_10 + 0x15c) = uVar2;
  *(undefined4 *)(local_10 + 0x32) = *(undefined4 *)(param_1 + 0x32);
  *(undefined4 *)((int)local_10 + 0x194) = *(undefined4 *)((int)param_1 + 0x194);
  *(undefined4 *)(local_10 + 0x33) = *(undefined4 *)(param_1 + 0x33);
  *(undefined4 *)((int)local_10 + 0x19c) = *(undefined4 *)((int)param_1 + 0x19c);
  *(undefined1 *)((int)local_10 + 0x1a4) = *(undefined1 *)((int)param_1 + 0x1a4);
  *(undefined1 *)((int)local_10 + 0x1a6) = *(undefined1 *)((int)param_1 + 0x1a6);
  *(undefined4 *)(local_10 + 2) = 0;
  iVar5 = *(int *)(param_1 + 8);
  uVar6 = *(uint *)((int)local_10 + 0x44) & 0x3fffffff;
  if ((int)uVar6 < iVar5) {
    iVar10 = uVar6 * 2;
    iVar11 = iVar5;
    if (iVar5 < iVar10) {
      iVar11 = iVar10;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int)local_10 + 0x3c,iVar11,0x40);
  }
  iVar10 = iVar5 - *(int *)(local_10 + 8);
  if (0 < iVar10) {
    puVar7 = (undefined4 *)(*(int *)(local_10 + 8) * 0x40 + *(int *)((int)local_10 + 0x3c) + 0x34);
    do {
      if (puVar7 != (undefined4 *)0x34) {
        puVar7[-2] = 0;
        *puVar7 = 0xffffffff;
      }
      puVar7 = puVar7 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(int *)(local_10 + 8) = iVar5;
  local_c = (undefined4 *)0x0;
  if (0 < *(int *)(param_1 + 8)) {
    local_8 = 0;
    do {
      puVar7 = (undefined4 *)(*(int *)((int)param_1 + 0x3c) + 0x10 + local_8);
      uVar8 = puVar7[1];
      uVar1 = puVar7[2];
      uVar2 = puVar7[3];
      iVar10 = *(int *)((int)local_10 + 0x3c) + local_8;
      iVar5 = *(int *)((int)param_1 + 0x3c) + local_8;
      *(undefined4 *)(iVar10 + 0x10) = *puVar7;
      *(undefined4 *)(iVar10 + 0x14) = uVar8;
      *(undefined4 *)(iVar10 + 0x18) = uVar1;
      *(undefined4 *)(iVar10 + 0x1c) = uVar2;
      *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)(iVar10 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar5 + 0x30);
      *(undefined4 *)(iVar10 + 0x34) = *(undefined4 *)(iVar5 + 0x34);
      local_c = (undefined4 *)((int)local_c + 1);
      local_8 = local_8 + 0x40;
    } while ((int)local_c < *(int *)(param_1 + 8));
  }
  iVar5 = *(int *)((int)param_1 + 0x4c);
  if ((int)(*(uint *)(local_10 + 10) & 0x3fffffff) < iVar5) {
    iVar10 = (*(uint *)(local_10 + 10) & 0x3fffffff) * 2;
    iVar11 = iVar5;
    if (iVar5 < iVar10) {
      iVar11 = iVar10;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_10 + 9,iVar11,0x10);
  }
  *(int *)((int)local_10 + 0x4c) = iVar5;
  local_c = (undefined4 *)0x0;
  if (0 < *(int *)((int)param_1 + 0x4c)) {
    iVar5 = 0;
    do {
      puVar7 = (undefined4 *)(*(int *)(param_1 + 9) + iVar5);
      uVar8 = puVar7[1];
      uVar1 = puVar7[2];
      uVar2 = puVar7[3];
      puVar13 = (undefined4 *)(*(int *)(local_10 + 9) + iVar5);
      *puVar13 = *puVar7;
      puVar13[1] = uVar8;
      puVar13[2] = uVar1;
      puVar13[3] = uVar2;
      local_c = (undefined4 *)((int)local_c + 1);
      iVar5 = iVar5 + 0x10;
    } while ((int)local_c < *(int *)((int)param_1 + 0x4c));
  }
  if (*(int *)((int)param_1 + 0x24) != 0) {
    FUN_01010c40(&PTR_vftable_018e9b94,*(int *)((int)param_1 + 0x24));
    puVar7 = *(undefined4 **)(param_1 + 4);
    if (puVar7 != (undefined4 *)0x0) {
      for (puVar13 = (undefined4 *)*puVar7; puVar13 != (undefined4 *)0x0;
          puVar13 = (undefined4 *)*puVar13) {
        puVar7 = puVar13;
      }
    }
    for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[1]) {
      uVar8 = FUN_01081ef0(puVar7);
      FUN_010100a0(&PTR_vftable_018e9b94,puVar7,uVar8);
    }
  }
  if (*(int *)((int)param_1 + 0x34) != 0) {
    FUN_01010c40(&PTR_vftable_018e9b94,*(int *)((int)param_1 + 0x34));
    puVar7 = *(undefined4 **)(param_1 + 6);
    if (puVar7 != (undefined4 *)0x0) {
      for (puVar13 = (undefined4 *)*puVar7; puVar13 != (undefined4 *)0x0;
          puVar13 = (undefined4 *)*puVar13) {
        puVar7 = puVar13;
      }
    }
    for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[1]) {
      iVar5 = *(int *)((int)local_10 + 0x2c);
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0xc00) == 0)) {
        local_c = (undefined4 *)0x0;
        iVar5 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
        if (iVar5 != 0) {
          iVar10 = 0x1f;
          piVar3 = (int *)(iVar5 + 0xba0);
          do {
            piVar12 = piVar3;
            *piVar12 = (int)local_c;
            iVar10 = iVar10 + -1;
            piVar3 = piVar12 + -0x18;
            local_c = piVar12;
          } while (-1 < iVar10);
          *(int **)(iVar5 + 0xc00) = piVar12;
          *(undefined4 *)(iVar5 + 0xc0c) = 0;
          *(undefined4 *)(iVar5 + 0xc04) = 0;
          *(undefined4 *)(iVar5 + 0xc08) = *(undefined4 *)((int)local_10 + 0x2c);
          *(int *)((int)local_10 + 0x2c) = iVar5;
          if (*(int *)(iVar5 + 0xc08) != 0) {
            *(int *)(*(int *)(iVar5 + 0xc08) + 0xc04) = iVar5;
          }
        }
      }
      if (iVar5 == 0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        puVar13 = *(undefined4 **)(iVar5 + 0xc00);
        *(undefined4 *)(iVar5 + 0xc00) = *puVar13;
        puVar13[0x14] = iVar5;
        *(int *)(iVar5 + 0xc0c) = *(int *)(iVar5 + 0xc0c) + 1;
        *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar7 + 2);
        puVar13[4] = puVar7[4];
        *(undefined8 *)(puVar13 + 5) = *(undefined8 *)(puVar7 + 5);
        puVar13[7] = puVar7[7];
        *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(puVar7 + 8);
        *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(puVar7 + 10);
        *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
        *(undefined8 *)(puVar13 + 0xe) = *(undefined8 *)(puVar7 + 0xe);
        puVar13[0x10] = puVar7[0x10];
        puVar13[0x11] = puVar7[0x11];
        puVar13[1] = 0;
        *puVar13 = *(undefined4 *)(local_10 + 6);
        if (*(int *)(local_10 + 6) != 0) {
          *(undefined4 **)(*(int *)(local_10 + 6) + 4) = puVar13;
        }
        *(int *)((int)local_10 + 0x34) = *(int *)((int)local_10 + 0x34) + 1;
        *(undefined4 **)(local_10 + 6) = puVar13;
      }
      puVar14 = puVar13 + 2;
      local_c = (undefined4 *)0x3;
      do {
        uVar8 = FUN_01010160(*puVar14,0);
        *puVar14 = uVar8;
        puVar14 = puVar14 + 1;
        local_c = (undefined4 *)((int)local_c + -1);
      } while (local_c != (undefined4 *)0x0);
      puVar15 = puVar13 + 5;
      local_14 = 3;
      local_c = puVar13;
      do {
        uVar6 = FUN_01010160((*puVar15 & 3) + (*puVar15 & 0xfffffffc),0);
        uVar9 = uVar6 & 0xfffffffc;
        if (uVar9 == 0) {
          FUN_010100a0(&PTR_vftable_018e9b94,((int)puVar7 - (int)puVar13) + (int)local_c,local_c);
        }
        else {
          FUN_01010c10((*puVar15 & 3) + (*puVar15 & 0xfffffffc));
          *puVar15 = (uVar6 & 3) + uVar9;
          *(undefined4 **)(uVar9 + 0x14 + (uVar6 & 3) * 4) = local_c;
        }
        local_c = (undefined4 *)((int)local_c + 1);
        puVar15 = puVar15 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return local_10;
}

// 010843E0  FUN_010843e0  size=1193  [between]
undefined4 __thiscall FUN_010843e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 0x30);
  if (local_8 != (int *)0x0) {
    local_28 = *(int **)(param_2 + 0x28);
    local_24 = (int)local_28 >> 0x1f;
    local_30 = *(uint *)(param_2 + 0x24);
    local_2c = (int)local_30 >> 0x1f;
    local_20 = *(int *)(param_2 + 0x20);
    local_1c = local_20 >> 0x1f;
    local_c = param_1;
    do {
      lVar16 = __allmul(local_8[9],local_8[9] >> 0x1f,local_30,local_2c);
      lVar17 = __allmul(local_8[10],local_8[10] >> 0x1f,local_28,local_24);
      lVar18 = __allmul(local_8[8],local_8[8] >> 0x1f,local_20,local_1c);
      iVar5 = local_c;
      lVar18 = lVar16 + lVar17 + lVar18;
      uVar13 = (uint)lVar18;
      iVar15 = (int)((ulonglong)lVar18 >> 0x20) + local_8[0xd] + (uint)CARRY4(uVar13,local_8[0xc]);
      if ((0 < iVar15) || ((-1 < iVar15 && (uVar13 + local_8[0xc] != 0)))) {
        if (local_8 == (int *)0x0) {
          return 0;
        }
        iVar15 = FUN_01081fa0();
        uVar1 = *(undefined4 *)(param_2 + 0x14);
        uVar2 = *(undefined4 *)(param_2 + 0x18);
        uVar3 = *(undefined4 *)(param_2 + 0x1c);
        local_30 = 0;
        local_2c = 0;
        *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(iVar15 + 0x14) = uVar1;
        *(undefined4 *)(iVar15 + 0x18) = uVar2;
        *(undefined4 *)(iVar15 + 0x1c) = uVar3;
        *(undefined4 *)(iVar15 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(iVar15 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        *(undefined4 *)(iVar15 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(iVar15 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(iVar15 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(iVar15 + 0x34) = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(iVar15 + 0x30) = 0;
        *(int *)(iVar5 + 0x19c) = *(int *)(iVar5 + 0x19c) + 1;
        local_24 = 0;
        local_28 = local_8;
        local_14 = iVar15;
        FUN_01081620(iVar15,&local_28,&local_30);
        uVar13 = *(uint *)(local_30 + 0x14 + local_2c * 4);
        while ((uVar13 & 0xfffffffc) != 0) {
          local_2c = 9 >> ((char)local_2c * '\x02' & 0x1fU) & 3;
          uVar13 = *(uint *)(local_30 + 0x14 + local_2c * 4);
        }
        local_8 = (undefined4 *)0x0;
        local_10 = (undefined4 *)0x0;
        local_18 = local_2c + local_30;
        puVar14 = local_10;
        piVar4 = local_8;
        while( true ) {
          local_8 = piVar4;
          local_10 = puVar14;
          local_2c = 9 >> ((char)local_2c * '\x02' & 0x1fU) & 3;
          uVar13 = *(uint *)(local_30 + 0x14 + local_2c * 4);
          while ((uVar13 & 0xfffffffc) != 0) {
            uVar13 = *(uint *)(local_30 + 0x14 + local_2c * 4);
            local_30 = uVar13 & 0xfffffffc;
            local_2c = 9 >> ((byte)uVar13 & 3) * '\x02' & 3;
            uVar13 = *(uint *)(local_30 + 0x14 + local_2c * 4);
          }
          if (local_18 == local_2c + local_30) break;
          iVar5 = *(int *)(local_c + 0x2c);
          if ((iVar5 == 0) || (*(int *)(iVar5 + 0xc00) == 0)) {
            iVar5 = FUN_0107e220();
          }
          if (iVar5 == 0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = *(undefined4 **)(iVar5 + 0xc00);
            *(undefined4 *)(iVar5 + 0xc00) = *puVar14;
            puVar14[0x14] = iVar5;
            *(int *)(iVar5 + 0xc0c) = *(int *)(iVar5 + 0xc0c) + 1;
            puVar14[0xe] = 0xffffffff;
            puVar14[0x11] = 0xffffffff;
            puVar14[1] = 0;
            *puVar14 = *(undefined4 *)(local_c + 0x30);
            if (*(int *)(local_c + 0x30) != 0) {
              *(undefined4 **)(*(int *)(local_c + 0x30) + 4) = puVar14;
            }
            *(int *)(local_c + 0x34) = *(int *)(local_c + 0x34) + 1;
            *(undefined4 **)(local_c + 0x30) = puVar14;
          }
          iVar5 = *(int *)(local_30 + 8 + local_2c * 4);
          iVar6 = *(int *)(local_30 + 8 + (9 >> ((char)local_2c * '\x02' & 0x1fU) & 3U) * 4);
          puVar14[3] = iVar6;
          puVar14[4] = iVar5;
          puVar14[2] = iVar15;
          puVar14[0x10] = 0;
          puVar14[0x11] = 0xffffffff;
          *(int *)(iVar15 + 0x30) = *(int *)(iVar15 + 0x30) + 1;
          *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
          *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
          iVar7 = *(int *)(iVar6 + 0x20) - *(int *)(iVar15 + 0x20);
          iVar8 = *(int *)(iVar6 + 0x24) - *(int *)(iVar15 + 0x24);
          iVar9 = *(int *)(iVar6 + 0x28) - *(int *)(iVar15 + 0x28);
          iVar10 = *(int *)(iVar5 + 0x20) - *(int *)(iVar15 + 0x20);
          iVar11 = *(int *)(iVar5 + 0x24) - *(int *)(iVar15 + 0x24);
          iVar5 = *(int *)(iVar5 + 0x28) - *(int *)(iVar15 + 0x28);
          iVar6 = iVar5 * iVar8 - iVar11 * iVar9;
          iVar5 = iVar10 * iVar9 - iVar5 * iVar7;
          puVar14[9] = iVar5;
          local_1c = iVar11 * iVar7 - iVar10 * iVar8;
          puVar14[10] = local_1c;
          puVar14[8] = iVar6;
          puVar14[0xc] = 0;
          puVar14[0xd] = 0;
          if ((local_1c != 0 || iVar5 != 0) || iVar6 != 0) {
            lVar18 = (longlong)iVar6 * (longlong)*(int *)(iVar15 + 0x20) +
                     (longlong)*(int *)(iVar15 + 0x28) * (longlong)local_1c;
            local_24 = (int)((ulonglong)lVar18 >> 0x20);
            lVar18 = lVar18 + (longlong)iVar5 * (longlong)*(int *)(local_14 + 0x24);
            iVar5 = (int)lVar18;
            puVar14[0xc] = -iVar5;
            puVar14[0xd] = -((int)((ulonglong)lVar18 >> 0x20) + (uint)(iVar5 != 0));
            iVar15 = local_14;
          }
          *(int *)(local_30 + 0x14 + local_2c * 4) = (int)puVar14 + 1;
          puVar14[6] = local_2c + local_30;
          piVar4 = puVar14;
          if (local_10 != (undefined4 *)0x0) {
            local_10[5] = (int)puVar14 + 2;
            puVar14[7] = local_10;
            piVar4 = local_8;
          }
        }
        iVar7 = FUN_01082080();
        iVar5 = *(int *)(local_30 + 8 + local_2c * 4);
        iVar6 = *(int *)(local_30 + 8 + (9 >> ((char)local_2c * '\x02' & 0x1fU) & 3U) * 4);
        *(int *)(iVar7 + 0x10) = iVar5;
        *(int *)(iVar7 + 0xc) = iVar6;
        *(int *)(iVar7 + 8) = iVar15;
        *(undefined4 *)(iVar7 + 0x40) = 0;
        *(undefined4 *)(iVar7 + 0x44) = 0xffffffff;
        *(int *)(iVar15 + 0x30) = *(int *)(iVar15 + 0x30) + 1;
        *(int *)(iVar6 + 0x30) = *(int *)(iVar6 + 0x30) + 1;
        *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
        iVar8 = *(int *)(iVar6 + 0x20) - *(int *)(iVar15 + 0x20);
        iVar9 = *(int *)(iVar6 + 0x24) - *(int *)(iVar15 + 0x24);
        iVar6 = *(int *)(iVar6 + 0x28) - *(int *)(iVar15 + 0x28);
        iVar10 = *(int *)(iVar5 + 0x20) - *(int *)(iVar15 + 0x20);
        iVar11 = *(int *)(iVar5 + 0x24) - *(int *)(iVar15 + 0x24);
        iVar5 = *(int *)(iVar5 + 0x28) - *(int *)(iVar15 + 0x28);
        iVar12 = iVar5 * iVar9 - iVar11 * iVar6;
        *(int *)(iVar7 + 0x20) = iVar12;
        iVar6 = iVar10 * iVar6 - iVar5 * iVar8;
        iVar5 = iVar11 * iVar8 - iVar10 * iVar9;
        *(undefined4 *)(iVar7 + 0x30) = 0;
        *(undefined4 *)(iVar7 + 0x34) = 0;
        *(int *)(iVar7 + 0x24) = iVar6;
        *(int *)(iVar7 + 0x28) = iVar5;
        if ((iVar5 != 0 || iVar6 != 0) || iVar12 != 0) {
          lVar18 = (longlong)*(int *)(iVar15 + 0x28) * (longlong)iVar5 +
                   (longlong)iVar6 * (longlong)*(int *)(iVar15 + 0x24) +
                   (longlong)iVar12 * (longlong)*(int *)(iVar15 + 0x20);
          iVar5 = (int)lVar18;
          *(int *)(iVar7 + 0x30) = -iVar5;
          *(uint *)(iVar7 + 0x34) = -((int)((ulonglong)lVar18 >> 0x20) + (uint)(iVar5 != 0));
        }
        *(int *)(local_30 + 0x14 + local_2c * 4) = iVar7 + 1;
        *(uint *)(iVar7 + 0x18) = local_2c + local_30;
        local_10[5] = iVar7 + 2;
        *(undefined4 **)(iVar7 + 0x1c) = local_10;
        *(int *)(iVar7 + 0x14) = (int)local_8 + 2;
        if (local_8 != (undefined4 *)0x0) {
          local_8[7] = iVar7;
        }
        return 1;
      }
      local_8 = (int *)*local_8;
    } while (local_8 != (int *)0x0);
  }
  return 0;
}

// 01084890  FUN_01084890  size=788  [between]
float * __thiscall FUN_01084890(int param_1,float *param_2,int *param_3,float *param_4)

{
  float *pfVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 in_XMM4 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_14 [4];
  
  iVar6 = *(int *)(param_1 + 0x198);
  *param_2 = -3.40282e+38;
  param_2[1] = -3.40282e+38;
  param_2[2] = -3.40282e+38;
  param_2[3] = -3.40282e+38;
  if (iVar6 == 2) {
    puVar3 = *(undefined4 **)(param_1 + 0x20);
    puVar8 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      for (puVar7 = (undefined4 *)*puVar3; puVar7 != (undefined4 *)0x0;
          puVar7 = (undefined4 *)*puVar7) {
        puVar8 = puVar7;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      do {
        puVar7 = puVar3;
        local_40 = (float)*(undefined8 *)(puVar8 + 4);
        fStack_3c = (float)((ulonglong)*(undefined8 *)(puVar8 + 4) >> 0x20);
        fStack_38 = (float)*(undefined8 *)(puVar8 + 6);
        local_30 = (float)*(undefined8 *)(puVar7 + 4);
        fStack_2c = (float)((ulonglong)*(undefined8 *)(puVar7 + 4) >> 0x20);
        fStack_28 = (float)*(undefined8 *)(puVar7 + 6);
        fVar13 = *(float *)(param_1 + 0xd4) * (fStack_28 - fStack_38) -
                 *(float *)(param_1 + 0xd8) * (fStack_2c - fStack_3c);
        fVar15 = *(float *)(param_1 + 0xd8) * (local_30 - local_40) -
                 *(float *)(param_1 + 0xd0) * (fStack_28 - fStack_38);
        fVar17 = *(float *)(param_1 + 0xd0) * (fStack_2c - fStack_3c) -
                 *(float *)(param_1 + 0xd4) * (local_30 - local_40);
        fVar18 = fVar13 * fVar13;
        fVar14 = fVar15 * fVar15;
        fVar16 = fVar17 * fVar17;
        fVar19 = fVar14 + fVar18 + fVar16;
        fVar20 = fVar14 + fVar18 + fVar16;
        fVar21 = fVar14 + fVar18 + fVar16;
        fVar16 = fVar14 + fVar18 + fVar16;
        auVar26._4_4_ = fVar20;
        auVar26._0_4_ = fVar19;
        auVar26._8_4_ = fVar21;
        auVar26._12_4_ = fVar16;
        in_XMM4 = rsqrtps(in_XMM4,auVar26);
        fVar18 = in_XMM4._0_4_;
        fVar14 = in_XMM4._4_4_;
        fVar22 = in_XMM4._8_4_;
        uVar10 = -(uint)(0.0 - fVar19 < 0.0);
        uVar11 = -(uint)(0.0 - fVar20 < 0.0);
        uVar12 = -(uint)(0.0 - fVar21 < 0.0);
        auVar5._4_4_ = uVar11;
        auVar5._0_4_ = uVar10;
        auVar5._8_4_ = uVar12;
        auVar5._12_4_ = -(uint)(0.0 - fVar16 < 0.0);
        iVar6 = movmskps(puVar8,auVar5);
        fVar18 = (float)((uint)((float)(~-(uint)(fVar19 <= 0.0) &
                                       (uint)((3.0 - fVar18 * fVar19 * fVar18) * fVar18 * 0.5)) *
                               fVar13) & uVar10 | ~uVar10 & (uint)fVar13);
        fVar14 = (float)((uint)((float)(~-(uint)(fVar20 <= 0.0) &
                                       (uint)((3.0 - fVar14 * fVar20 * fVar14) * fVar14 * 0.5)) *
                               fVar15) & uVar11 | ~uVar11 & (uint)fVar15);
        fVar16 = (float)((uint)((float)(~-(uint)(fVar21 <= 0.0) &
                                       (uint)((3.0 - fVar22 * fVar21 * fVar22) * fVar22 * 0.5)) *
                               fVar17) & uVar12 | ~uVar12 & (uint)fVar17);
        if (iVar6 != 0) {
          local_40 = fVar18 * local_40;
          in_XMM4._4_4_ = local_40;
          in_XMM4._0_4_ = local_40;
          in_XMM4._8_4_ = local_40;
          in_XMM4._12_4_ = local_40;
          iVar6 = 0;
          fVar13 = 0.0 - (fVar14 * fStack_3c + local_40 + fVar16 * fStack_38);
          if (0 < param_3[1]) {
            iVar9 = 0;
            do {
              pfVar1 = (float *)(*param_3 + iVar9);
              fVar15 = pfVar1[2] * fVar16 + *pfVar1 * fVar18;
              fVar17 = fVar13 + pfVar1[1] * fVar14;
              fVar19 = *pfVar1 * fVar18 + pfVar1[2] * fVar16;
              fVar20 = pfVar1[1] * fVar14 + fVar13;
              fVar21 = fVar17 + fVar15;
              if (*param_2 <= fVar21 && fVar21 != *param_2) {
                *param_2 = fVar21;
                param_2[1] = fVar15 + fVar17;
                param_2[2] = fVar20 + fVar19;
                param_2[3] = fVar19 + fVar20;
                *param_4 = fVar18;
                param_4[1] = fVar14;
                param_4[2] = fVar16;
                param_4[3] = fVar13;
              }
              iVar6 = iVar6 + 1;
              iVar9 = iVar9 + 0x10;
            } while (iVar6 < param_3[1]);
          }
        }
        puVar3 = (undefined4 *)*puVar7;
        puVar8 = puVar7;
      } while ((undefined4 *)*puVar7 != (undefined4 *)0x0);
      return param_2;
    }
  }
  else if (iVar6 == 3) {
    piVar2 = *(int **)(param_1 + 0x30);
    uVar10 = (uint)local_14 & -(uint)(piVar2 != (int *)0x0);
    while (uVar10 != 0) {
      iVar6 = piVar2[2];
      fVar18 = *(float *)(iVar6 + 0x10);
      fVar14 = *(float *)(iVar6 + 0x14);
      fVar16 = *(float *)(iVar6 + 0x18);
      iVar6 = piVar2[4];
      iVar9 = piVar2[3];
      fVar13 = *(float *)(iVar9 + 0x10) - fVar18;
      fVar15 = *(float *)(iVar9 + 0x14) - fVar14;
      fVar17 = *(float *)(iVar9 + 0x18) - fVar16;
      fVar19 = *(float *)(iVar6 + 0x10) - fVar18;
      fVar21 = *(float *)(iVar6 + 0x14) - fVar14;
      fVar22 = *(float *)(iVar6 + 0x18) - fVar16;
      fVar20 = fVar22 * fVar15 - fVar21 * fVar17;
      fVar22 = fVar19 * fVar17 - fVar22 * fVar13;
      fVar19 = fVar21 * fVar13 - fVar19 * fVar15;
      fVar13 = fVar20 * fVar20;
      fVar15 = fVar22 * fVar22;
      fVar17 = fVar19 * fVar19;
      auVar25._4_4_ = fVar13;
      auVar25._0_4_ = fVar13;
      auVar25._8_4_ = fVar13;
      auVar25._12_4_ = fVar13;
      fVar21 = fVar15 + fVar13 + fVar17;
      fVar23 = fVar15 + fVar13 + fVar17;
      fVar24 = fVar15 + fVar13 + fVar17;
      auVar4._4_4_ = fVar23;
      auVar4._0_4_ = fVar21;
      auVar4._8_4_ = fVar24;
      auVar4._12_4_ = fVar15 + fVar13 + fVar17;
      auVar26 = rsqrtps(auVar25,auVar4);
      fVar13 = auVar26._0_4_;
      fVar15 = auVar26._4_4_;
      fVar17 = auVar26._8_4_;
      fVar20 = fVar20 * (float)(~-(uint)(fVar21 <= 0.0) &
                               (uint)((3.0 - fVar13 * fVar21 * fVar13) * fVar13 * 0.5));
      fVar22 = fVar22 * (float)(~-(uint)(fVar23 <= 0.0) &
                               (uint)((3.0 - fVar15 * fVar23 * fVar15) * fVar15 * 0.5));
      fVar19 = fVar19 * (float)(~-(uint)(fVar24 <= 0.0) &
                               (uint)((3.0 - fVar17 * fVar24 * fVar17) * fVar17 * 0.5));
      iVar6 = 0;
      fVar18 = 0.0 - (fVar14 * fVar22 + fVar18 * fVar20 + fVar16 * fVar19);
      if (0 < param_3[1]) {
        iVar9 = 0;
        do {
          pfVar1 = (float *)(*param_3 + iVar9);
          fVar14 = pfVar1[2] * fVar19 + *pfVar1 * fVar20;
          fVar16 = fVar18 + pfVar1[1] * fVar22;
          fVar13 = *pfVar1 * fVar20 + pfVar1[2] * fVar19;
          fVar15 = pfVar1[1] * fVar22 + fVar18;
          fVar17 = fVar16 + fVar14;
          if (*param_2 <= fVar17 && fVar17 != *param_2) {
            *param_2 = fVar17;
            param_2[1] = fVar14 + fVar16;
            param_2[2] = fVar15 + fVar13;
            param_2[3] = fVar13 + fVar15;
            *param_4 = fVar20;
            param_4[1] = fVar22;
            param_4[2] = fVar19;
            param_4[3] = fVar18;
          }
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar6 < param_3[1]);
      }
      piVar2 = (int *)*piVar2;
      uVar10 = (uint)local_14 & -(uint)(piVar2 != (int *)0x0);
    }
    return param_2;
  }
  return param_2;
}

// 01084BB0  FUN_01084bb0  size=712  [between]
float10 __fastcall FUN_01084bb0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_XMM3 [16];
  undefined1 auVar17 [16];
  int *local_24;
  int local_20;
  int local_1c;
  int local_14;
  float local_8;
  
  local_8 = 0.0;
  switch(*(undefined4 *)(param_1 + 0x198)) {
  case 0:
    return (float10)0;
  case 1:
    piVar11 = *(int **)(param_1 + 0x20);
    iVar12 = *piVar11;
    fVar13 = (float)piVar11[4] - *(float *)(iVar12 + 0x10);
    fVar14 = (float)piVar11[5] - *(float *)(iVar12 + 0x14);
    fVar15 = (float)piVar11[6] - *(float *)(iVar12 + 0x18);
    fVar13 = fVar13 * fVar13;
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    fVar16 = fVar14 + fVar13 + fVar15;
    auVar7._4_4_ = fVar14 + fVar13 + fVar15;
    auVar7._0_4_ = fVar16;
    auVar7._8_4_ = fVar14 + fVar13 + fVar15;
    auVar7._12_4_ = fVar14 + fVar13 + fVar15;
    auVar17 = rsqrtps(in_XMM3,auVar7);
    fVar13 = auVar17._0_4_;
    return (float10)(float)(~-(uint)(fVar16 <= 0.0) &
                           (uint)((3.0 - fVar13 * fVar16 * fVar13) * fVar13 * 0.5 * fVar16));
  case 2:
    uVar3 = *(uint *)(param_1 + 0x24);
    local_24 = (int *)0x0;
    local_20 = 0;
    local_1c = -0x80000000;
    iVar12 = 0;
    local_14 = param_1;
    if (0 < (int)uVar3) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_24,((int)uVar3 < 0) - 1 & uVar3,0x10);
      iVar12 = local_20;
    }
    iVar12 = iVar12 + uVar3;
    piVar11 = local_24;
    for (puVar4 = *(undefined4 **)(local_14 + 0x20); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar5 = puVar4[5];
      iVar10 = puVar4[6];
      iVar8 = puVar4[7];
      *piVar11 = puVar4[4];
      piVar11[1] = iVar5;
      piVar11[2] = iVar10;
      piVar11[3] = iVar8;
      piVar11 = piVar11 + 4;
    }
    if (0 < iVar12) {
      iVar5 = 0;
      iVar10 = (iVar12 + -1) * 0x10;
      do {
        iVar8 = iVar5;
        pfVar1 = (float *)(iVar10 + (int)local_24);
        pfVar2 = (float *)(iVar8 + (int)local_24);
        fVar13 = (*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2);
        fVar14 = (pfVar1[1] - pfVar2[1]) * (pfVar1[1] - pfVar2[1]);
        fVar15 = (pfVar1[2] - pfVar2[2]) * (pfVar1[2] - pfVar2[2]);
        fVar16 = fVar14 + fVar13 + fVar15;
        auVar6._4_4_ = fVar14 + fVar13 + fVar15;
        auVar6._0_4_ = fVar16;
        auVar6._8_4_ = fVar14 + fVar13 + fVar15;
        auVar6._12_4_ = fVar14 + fVar13 + fVar15;
        in_XMM3 = rsqrtps(in_XMM3,auVar6);
        fVar13 = in_XMM3._0_4_;
        iVar12 = iVar12 + -1;
        local_8 = local_8 + (float)(~-(uint)(fVar16 <= 0.0) &
                                   (uint)((3.0 - fVar13 * fVar16 * fVar13) * fVar13 * 0.5 * fVar16))
        ;
        iVar5 = iVar8 + 0x10;
        iVar10 = iVar8;
      } while (iVar12 != 0);
    }
    local_20 = 0;
    if (-1 < local_1c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
      return (float10)local_8;
    }
    break;
  case 3:
    local_8 = 0.0;
    for (puVar4 = *(undefined4 **)(param_1 + 0x30); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      piVar11 = puVar4 + 2;
      local_14 = 0;
      do {
        iVar12 = 0;
        piVar9 = (int *)(*piVar11 + 0x20);
        do {
          iVar5 = *(int *)((puVar4[(9 >> ((char)local_14 * '\x02' & 0x1fU) & 3U) + 2] - *piVar11) +
                          (int)piVar9);
          if (*piVar9 < iVar5) break;
          if (iVar5 < *piVar9) {
            if ((piVar11[3] & 0xfffffffcU) != 0) goto LAB_01084e47;
            break;
          }
          iVar12 = iVar12 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar12 < 3);
        if ((puVar4[0xe] == -1) || (puVar4[0xe] != *(int *)((piVar11[3] & 0xfffffffcU) + 0x38))) {
          iVar12 = *piVar11;
          iVar5 = puVar4[(9 >> ((char)local_14 * '\x02' & 0x1fU) & 3U) + 2];
          fVar13 = *(float *)(iVar12 + 0x10) - *(float *)(iVar5 + 0x10);
          fVar14 = *(float *)(iVar12 + 0x14) - *(float *)(iVar5 + 0x14);
          fVar15 = *(float *)(iVar12 + 0x18) - *(float *)(iVar5 + 0x18);
          fVar13 = fVar13 * fVar13;
          fVar14 = fVar14 * fVar14;
          fVar15 = fVar15 * fVar15;
          fVar16 = fVar14 + fVar13 + fVar15;
          auVar17._4_4_ = fVar14 + fVar13 + fVar15;
          auVar17._0_4_ = fVar16;
          auVar17._8_4_ = fVar14 + fVar13 + fVar15;
          auVar17._12_4_ = fVar14 + fVar13 + fVar15;
          in_XMM3 = rsqrtps(in_XMM3,auVar17);
          fVar13 = in_XMM3._0_4_;
          local_8 = local_8 + (float)(~-(uint)(fVar16 <= 0.0) &
                                     (uint)((3.0 - fVar13 * fVar16 * fVar13) * fVar13 * 0.5 * fVar16
                                           ));
        }
LAB_01084e47:
        local_14 = local_14 + 1;
        piVar11 = piVar11 + 1;
      } while (local_14 < 3);
    }
  }
  return (float10)local_8;
}

// 01084EA0  FUN_01084ea0  size=38  [between]
void FUN_01084ea0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01084ED0  FUN_01084ed0  size=49  [between]
int __fastcall FUN_01084ed0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 01084F10  FUN_01084f10  size=17  [between]
int * __fastcall FUN_01084f10(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010837c0();
  }
  return param_1;
}

// 01084F30  FUN_01084f30  size=140  [between]
int * __thiscall FUN_01084f30(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  if (param_2 == 0) {
    return param_1;
  }
  iVar1 = param_1[1];
  iVar2 = *(int *)(param_2 + 8 + (9 >> ((char)iVar1 * '\x02' & 0x1fU) & 3U) * 4);
  iVar5 = 0;
  piVar4 = (int *)(iVar2 + 0x20);
  while( true ) {
    iVar3 = *(int *)((*(int *)(param_2 + 8 + iVar1 * 4) - iVar2) + (int)piVar4);
    if (iVar3 < *piVar4) {
      return param_1;
    }
    if (*piVar4 < iVar3) break;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    if (2 < iVar5) {
      return param_1;
    }
  }
  if ((*(uint *)(*param_1 + 0x14 + iVar1 * 4) & 0xfffffffc) == 0) {
    return param_1;
  }
  FUN_010837c0();
  return param_1;
}

// 01084FC0  FUN_01084fc0  size=3124  [between]
void __fastcall FUN_01084fc0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar41 [16];
  undefined8 uVar42;
  float local_70;
  float fStack_6c;
  float fStack_68;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 (*local_28) [16];
  int local_24;
  undefined1 local_20 [8];
  float fStack_18;
  float fStack_14;
  
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    local_30 = -0x80000000;
    local_3c = 0x80000000;
    iVar11 = *(int *)(param_1 + 0x34);
    local_38 = 0;
    local_34 = 0;
    local_44 = 0;
    local_40 = 0;
    local_24 = param_1;
    if (iVar11 != 0) {
      if (0 < iVar11) {
        FUN_0100a210(&PTR_vftable_018e9b94,&local_38,iVar11,8);
      }
      piVar14 = *(int **)(local_24 + 0x30);
      if (piVar14 != (int *)0x0) {
        _local_20 = ZEXT816(0);
        do {
          iVar13 = local_34 + 1;
          *(int **)(local_38 + local_34 * 8) = piVar14;
          iVar11 = piVar14[2];
          fVar23 = *(float *)(local_24 + 0x100);
          fVar25 = *(float *)(local_24 + 0x104);
          fVar26 = *(float *)(local_24 + 0x108);
          local_28 = (undefined1 (*) [16])(local_38 + local_34 * 8);
          iVar12 = piVar14[3];
          iVar5 = piVar14[4];
          fVar27 = (float)*(int *)(iVar11 + 0x20) * fVar23 + *(float *)(local_24 + 0xe0);
          fVar31 = (float)*(int *)(iVar11 + 0x24) * fVar25 + *(float *)(local_24 + 0xe4);
          fVar32 = (float)*(int *)(iVar11 + 0x28) * fVar26 + *(float *)(local_24 + 0xe8);
          fVar19 = ((float)*(int *)(iVar12 + 0x20) * fVar23 + *(float *)(local_24 + 0xe0)) - fVar27;
          fVar21 = ((float)*(int *)(iVar12 + 0x24) * fVar25 + *(float *)(local_24 + 0xe4)) - fVar31;
          fVar22 = ((float)*(int *)(iVar12 + 0x28) * fVar26 + *(float *)(local_24 + 0xe8)) - fVar32;
          fVar27 = ((float)*(int *)(iVar5 + 0x20) * fVar23 + *(float *)(local_24 + 0xe0)) - fVar27;
          fVar31 = ((float)*(int *)(iVar5 + 0x24) * fVar25 + *(float *)(local_24 + 0xe4)) - fVar31;
          fVar32 = ((float)*(int *)(iVar5 + 0x28) * fVar26 + *(float *)(local_24 + 0xe8)) - fVar32;
          fVar23 = fVar32 * fVar21 - fVar31 * fVar22;
          fVar25 = fVar27 * fVar22 - fVar32 * fVar19;
          fVar26 = fVar31 * fVar19 - fVar27 * fVar21;
          fVar23 = fVar23 * fVar23;
          fVar25 = fVar25 * fVar25;
          fVar26 = fVar26 * fVar26;
          auVar28._4_4_ = fVar23;
          auVar28._0_4_ = fVar23;
          auVar28._8_4_ = fVar23;
          auVar28._12_4_ = fVar23;
          auVar41._0_4_ = fVar25 + fVar23 + fVar26;
          auVar41._4_4_ = fVar25 + fVar23 + fVar26;
          auVar41._8_4_ = fVar25 + fVar23 + fVar26;
          auVar41._12_4_ = fVar25 + fVar23 + fVar26;
          auVar28 = rsqrtps(auVar28,auVar41);
          fVar23 = auVar28._0_4_;
          *(uint *)(*local_28 + 4) =
               ~-(uint)(auVar41._0_4_ <= 0.0) &
               (uint)((3.0 - fVar23 * auVar41._0_4_ * fVar23) * fVar23 * 0.5 * auVar41._0_4_);
          piVar14 = (int *)*piVar14;
          local_34 = iVar13;
        } while (piVar14 != (int *)0x0);
      }
      local_28 = (undefined1 (*) [16])((uint)local_28 & 0xffffff00);
      if (1 < local_34) {
        FUN_0107fae0(local_38,0,local_34 + -1,local_28);
      }
      iVar12 = local_24;
      local_2c = 0;
      FUN_01010c40(&PTR_vftable_018e9b94,*(undefined4 *)(local_24 + 0x34));
      iVar11 = *(int *)(iVar12 + 0x34);
      if ((int)(local_3c & 0x3fffffff) < iVar11) {
        iVar5 = (local_3c & 0x3fffffff) * 2;
        if (iVar5 <= iVar11) {
          iVar5 = iVar11;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,&local_44,iVar5,0x10);
      }
      piVar14 = *(int **)(iVar12 + 0x30);
      local_40 = iVar11;
      if (piVar14 != (int *)0x0) {
        _local_20 = ZEXT816(0);
        local_28 = (undefined1 (*) [16])0x0;
        do {
          FUN_010100a0(&PTR_vftable_018e9b94,piVar14,local_2c);
          iVar11 = piVar14[2];
          iVar5 = piVar14[3];
          fVar23 = *(float *)(iVar12 + 0x100);
          fVar25 = *(float *)(iVar12 + 0x104);
          fVar26 = *(float *)(iVar12 + 0x108);
          iVar13 = piVar14[4];
          fVar31 = (float)*(int *)(iVar11 + 0x20) * fVar23 + *(float *)(iVar12 + 0xe0);
          fVar32 = (float)*(int *)(iVar11 + 0x24) * fVar25 + *(float *)(iVar12 + 0xe4);
          fVar33 = (float)*(int *)(iVar11 + 0x28) * fVar26 + *(float *)(iVar12 + 0xe8);
          fVar19 = ((float)*(int *)(iVar5 + 0x20) * fVar23 + *(float *)(iVar12 + 0xe0)) - fVar31;
          fVar21 = ((float)*(int *)(iVar5 + 0x24) * fVar25 + *(float *)(iVar12 + 0xe4)) - fVar32;
          fVar22 = ((float)*(int *)(iVar5 + 0x28) * fVar26 + *(float *)(iVar12 + 0xe8)) - fVar33;
          fVar23 = ((float)*(int *)(iVar13 + 0x20) * fVar23 + *(float *)(iVar12 + 0xe0)) - fVar31;
          fVar25 = ((float)*(int *)(iVar13 + 0x24) * fVar25 + *(float *)(iVar12 + 0xe4)) - fVar32;
          fVar26 = ((float)*(int *)(iVar13 + 0x28) * fVar26 + *(float *)(iVar12 + 0xe8)) - fVar33;
          fVar27 = fVar26 * fVar21 - fVar25 * fVar22;
          fVar22 = fVar23 * fVar22 - fVar26 * fVar19;
          fVar19 = fVar25 * fVar19 - fVar23 * fVar21;
          fVar23 = fVar27 * fVar27;
          fVar25 = fVar22 * fVar22;
          fVar26 = fVar19 * fVar19;
          auVar34._0_4_ = fVar25 + fVar23 + fVar26;
          auVar34._4_4_ = fVar25 + fVar23 + fVar26;
          auVar34._8_4_ = fVar25 + fVar23 + fVar26;
          auVar34._12_4_ = fVar25 + fVar23 + fVar26;
          fVar23 = local_20._0_4_;
          fVar26 = local_20._4_4_;
          fVar36 = local_20._8_4_;
          uVar15 = -(uint)(fVar23 - auVar34._0_4_ < fVar23);
          uVar16 = -(uint)(fVar26 - auVar34._4_4_ < fVar26);
          uVar17 = -(uint)(fVar36 - auVar34._8_4_ < fVar36);
          auVar41 = rsqrtps(_local_20,auVar34);
          fVar25 = auVar41._0_4_;
          fVar21 = auVar41._4_4_;
          fVar37 = auVar41._8_4_;
          fVar23 = (float)((uint)((float)(~-(uint)(auVar34._0_4_ <= fVar23) &
                                         (uint)((3.0 - fVar25 * auVar34._0_4_ * fVar25) *
                                               fVar25 * 0.5)) * fVar27) & uVar15 |
                          ~uVar15 & (uint)fVar27);
          fVar25 = (float)((uint)((float)(~-(uint)(auVar34._4_4_ <= fVar26) &
                                         (uint)((3.0 - fVar21 * auVar34._4_4_ * fVar21) *
                                               fVar21 * 0.5)) * fVar22) & uVar16 |
                          ~uVar16 & (uint)fVar22);
          fVar26 = (float)((uint)((float)(~-(uint)(auVar34._8_4_ <= fVar36) &
                                         (uint)((3.0 - fVar37 * auVar34._8_4_ * fVar37) *
                                               fVar37 * 0.5)) * fVar19) & uVar17 |
                          ~uVar17 & (uint)fVar19);
          auVar4._4_4_ = fVar25;
          auVar4._0_4_ = fVar23;
          auVar4._8_4_ = fVar26;
          auVar4._12_4_ = -(fVar26 * fVar33 + fVar25 * fVar32 + fVar23 * fVar31);
          *(undefined1 (*) [16])(*local_28 + local_44) = auVar4;
          piVar14[0x11] = local_2c;
          piVar14[0xe] = -1;
          piVar14 = (int *)*piVar14;
          local_2c = local_2c + 1;
          local_28 = local_28 + 1;
        } while (piVar14 != (int *)0x0);
      }
    }
    iVar12 = local_24;
    iVar11 = 0;
    for (puVar9 = *(undefined4 **)(local_24 + 0x20); puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)*puVar9) {
      puVar9[0xd] = iVar11;
      iVar11 = iVar11 + 1;
    }
    iVar11 = *(int *)(local_24 + 0x198);
    *(undefined4 *)(local_24 + 0x4c) = 0;
    if (iVar11 == 3) {
      fVar23 = -0.0;
      stack0xffffffe4 = 0;
      fStack_14 = -0.0;
      local_2c = 0;
      iVar5 = local_24;
      if (0 < local_34) {
        do {
          iVar11 = *(int *)(local_38 + local_2c * 8);
          if (*(int *)(iVar11 + 0x38) == -1) {
            iVar5 = FUN_01010160(iVar11,0xffffffff);
            iVar12 = local_24;
            local_28 = (undefined1 (*) [16])(iVar5 * 0x10 + local_44);
            piVar14 = (int *)(local_24 + 0x48);
            *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(local_24 + 0x4c);
            if (*(uint *)(local_24 + 0x4c) == (*(uint *)(local_24 + 0x50) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar14,0x10);
            }
            *(undefined1 (*) [16])(*(int *)(iVar12 + 0x4c) * 0x10 + *piVar14) = *local_28;
            piVar14 = (int *)(iVar12 + 0x4c);
            *piVar14 = *piVar14 + 1;
            fStack_18 = 0.0;
            uVar15 = *(uint *)(iVar11 + 0x14);
            fVar23 = (float)0;
            if (((uint)fStack_14 & 0x3fffffff) == 0) {
              FUN_0100a290(&PTR_vftable_018e9b94,local_20 + 4,8);
              fVar23 = fStack_18;
            }
            puVar1 = (uint *)(local_20._4_4_ + (int)fVar23 * 8);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar15 & 0xfffffffc;
              puVar1[1] = uVar15 & 3;
              fVar23 = fStack_18;
            }
            fVar23 = (float)((int)fVar23 + 1);
            fStack_18 = fVar23;
            uVar15 = *(uint *)(iVar11 + 0x18);
            if (fVar23 == (float)((uint)fStack_14 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,local_20 + 4,8);
              fVar23 = fStack_18;
            }
            puVar1 = (uint *)(local_20._4_4_ + (int)fVar23 * 8);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar15 & 0xfffffffc;
              puVar1[1] = uVar15 & 3;
              fVar23 = fStack_18;
            }
            fVar23 = (float)((int)fVar23 + 1);
            fStack_18 = fVar23;
            uVar15 = *(uint *)(iVar11 + 0x1c);
            if (fVar23 == (float)((uint)fStack_14 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,local_20 + 4,8);
              fVar23 = fStack_18;
            }
            puVar1 = (uint *)(local_20._4_4_ + (int)fVar23 * 8);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar15 & 0xfffffffc;
              puVar1[1] = uVar15 & 3;
              fVar23 = fStack_18;
            }
            fStack_18 = (float)((int)fVar23 + 1U);
            fVar25 = (float)((int)fVar23 + 1U);
            iVar5 = local_24;
            while (fVar23 = fStack_14, local_24 = iVar5, fVar25 != 0.0) {
              iVar12 = *(int *)(local_20._4_4_ + -8 + (int)fVar25 * 8);
              uVar2 = *(undefined4 *)(local_20._4_4_ + -4 + (int)fVar25 * 8);
              fStack_18 = (float)((int)fVar25 - 1U);
              fVar25 = (float)((int)fVar25 - 1U);
              if (*(int *)(iVar12 + 0x38) == -1) {
                uVar42 = FUN_01010160(iVar12,0xffffffff);
                auVar41 = *(undefined1 (*) [16])((int)uVar42 * 0x10 + local_44);
                fVar23 = auVar41._4_4_;
                fVar26 = auVar41._0_4_;
                fVar19 = auVar41._8_4_;
                auVar20._4_4_ = -(uint)NAN(fVar23);
                auVar20._0_4_ = -(uint)NAN(fVar26);
                auVar20._8_4_ = -(uint)NAN(fVar19);
                auVar20._12_4_ = -(uint)NAN(auVar41._12_4_);
                uVar15 = movmskps((int)((ulonglong)uVar42 >> 0x20),auVar20);
                if ((((uVar15 & 7) != 0) ||
                    (0.0001 <= ABS((fVar19 * fVar19 + fVar23 * fVar23 + fVar26 * fVar26) - 1.0))) ||
                   (fVar25 = fStack_18, iVar5 = local_24,
                   *(float *)(local_24 + 4) <=
                   *(float *)(*local_28 + 8) * fVar19 +
                   *(float *)(*local_28 + 4) * fVar23 + *(float *)*local_28 * fVar26)) {
                  *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar11 + 0x38);
                  bVar10 = (char)uVar2 * '\x02';
                  uVar15 = *(uint *)(iVar12 + 0x14 + (9 >> (bVar10 & 0x1f) & 3U) * 4);
                  if (fStack_18 == (float)((uint)fStack_14 & 0x3fffffff)) {
                    FUN_0100a290(&PTR_vftable_018e9b94,local_20 + 4,8);
                  }
                  puVar1 = (uint *)(local_20._4_4_ + (int)fStack_18 * 8);
                  fVar23 = fStack_18;
                  if (puVar1 != (uint *)0x0) {
                    *puVar1 = uVar15 & 0xfffffffc;
                    puVar1[1] = uVar15 & 3;
                    fVar23 = fStack_18;
                  }
                  fVar23 = (float)((int)fVar23 + 1);
                  fStack_18 = fVar23;
                  uVar15 = *(uint *)(iVar12 + 0x14 + (0x12 >> (bVar10 & 0x1f) & 3U) * 4);
                  if (fVar23 == (float)((uint)fStack_14 & 0x3fffffff)) {
                    FUN_0100a290(&PTR_vftable_018e9b94,local_20 + 4,8);
                    fVar23 = fStack_18;
                  }
                  puVar1 = (uint *)(local_20._4_4_ + (int)fVar23 * 8);
                  if (puVar1 != (uint *)0x0) {
                    *puVar1 = uVar15 & 0xfffffffc;
                    puVar1[1] = uVar15 & 3;
                    fVar23 = fStack_18;
                  }
                  fStack_18 = (float)((int)fVar23 + 1U);
                  fVar25 = (float)((int)fVar23 + 1U);
                  iVar5 = local_24;
                }
              }
            }
          }
          local_2c = local_2c + 1;
        } while (local_2c < local_34);
      }
      auVar28 = _local_20;
      fStack_18 = 0.0;
      auVar41 = _local_20;
      if (-1 < (int)fVar23) {
        local_20._4_4_ = auVar28._4_4_;
        uVar2 = local_20._4_4_;
        _local_20 = auVar41;
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(uVar2,(int)fVar23 * 8);
      }
    }
    else {
      iVar5 = iVar12;
      if (iVar11 == 2) {
        puVar6 = (undefined8 *)FUN_0107f360();
        puVar9 = *(undefined4 **)(iVar12 + 0x20);
        local_70 = (float)*puVar6;
        fStack_6c = (float)((ulonglong)*puVar6 >> 0x20);
        fStack_68 = (float)puVar6[1];
        puVar7 = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          for (puVar3 = (undefined4 *)*puVar9; puVar3 != (undefined4 *)0x0;
              puVar3 = (undefined4 *)*puVar3) {
            puVar7 = puVar3;
          }
        }
        if (puVar9 != (undefined4 *)0x0) {
          _local_20 = ZEXT816(0);
          do {
            fVar21 = (float)(int)puVar7[8] * *(float *)(local_24 + 0x100) +
                     *(float *)(local_24 + 0xe0);
            fVar22 = (float)(int)puVar7[9] * *(float *)(local_24 + 0x104) +
                     *(float *)(local_24 + 0xe4);
            fVar27 = (float)(int)puVar7[10] * *(float *)(local_24 + 0x108) +
                     *(float *)(local_24 + 0xe8);
            fVar23 = ((float)(int)puVar9[8] * *(float *)(local_24 + 0x100) +
                     *(float *)(local_24 + 0xe0)) - fVar21;
            fVar25 = ((float)(int)puVar9[9] * *(float *)(local_24 + 0x104) +
                     *(float *)(local_24 + 0xe4)) - fVar22;
            fVar26 = ((float)(int)puVar9[10] * *(float *)(local_24 + 0x108) +
                     *(float *)(local_24 + 0xe8)) - fVar27;
            fVar19 = (*(float *)(local_24 + 0x10c) * 0.0 + *(float *)(local_24 + 0xec)) -
                     (*(float *)(local_24 + 0x10c) * 0.0 + *(float *)(local_24 + 0xec));
            if (*(uint *)(iVar12 + 0x4c) == (*(uint *)(iVar12 + 0x50) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar12 + 0x48),0x10);
            }
            iVar11 = *(int *)(iVar12 + 0x4c);
            *(int *)(iVar12 + 0x4c) = iVar11 + 1;
            fVar31 = fVar26 * *(float *)(local_24 + 0xd4) - fVar25 * *(float *)(local_24 + 0xd8);
            fVar32 = fVar23 * *(float *)(local_24 + 0xd8) - fVar26 * *(float *)(local_24 + 0xd0);
            fVar33 = fVar25 * *(float *)(local_24 + 0xd0) - fVar23 * *(float *)(local_24 + 0xd4);
            fVar19 = fVar19 * *(float *)(local_24 + 0xdc) - fVar19 * *(float *)(local_24 + 0xdc);
            fVar23 = fVar31 * fVar31;
            fVar25 = fVar32 * fVar32;
            fVar26 = fVar33 * fVar33;
            auVar29._0_4_ = fVar25 + fVar23 + fVar26;
            auVar29._4_4_ = fVar25 + fVar23 + fVar26;
            auVar29._8_4_ = fVar25 + fVar23 + fVar26;
            auVar29._12_4_ = fVar25 + fVar23 + fVar26;
            fVar23 = local_20._0_4_;
            fVar26 = local_20._4_4_;
            fVar37 = local_20._8_4_;
            fVar39 = local_20._12_4_;
            uVar15 = -(uint)(fVar23 - auVar29._0_4_ < fVar23);
            uVar16 = -(uint)(fVar26 - auVar29._4_4_ < fVar26);
            uVar17 = -(uint)(fVar37 - auVar29._8_4_ < fVar37);
            uVar18 = -(uint)(fVar39 - auVar29._12_4_ < fVar39);
            auVar41 = rsqrtps(_local_20,auVar29);
            fVar25 = auVar41._0_4_;
            fVar36 = auVar41._4_4_;
            fVar38 = auVar41._8_4_;
            fVar40 = auVar41._12_4_;
            fVar23 = (float)((uint)((float)(~-(uint)(auVar29._0_4_ <= fVar23) &
                                           (uint)((3.0 - fVar25 * auVar29._0_4_ * fVar25) *
                                                 fVar25 * 0.5)) * fVar31) & uVar15 |
                            ~uVar15 & (uint)fVar31);
            fVar25 = (float)((uint)((float)(~-(uint)(auVar29._4_4_ <= fVar26) &
                                           (uint)((3.0 - fVar36 * auVar29._4_4_ * fVar36) *
                                                 fVar36 * 0.5)) * fVar32) & uVar16 |
                            ~uVar16 & (uint)fVar32);
            fVar26 = (float)((uint)((float)(~-(uint)(auVar29._8_4_ <= fVar37) &
                                           (uint)((3.0 - fVar38 * auVar29._8_4_ * fVar38) *
                                                 fVar38 * 0.5)) * fVar33) & uVar17 |
                            ~uVar17 & (uint)fVar33);
            pfVar8 = (float *)(iVar11 * 0x10 + *(int *)(iVar12 + 0x48));
            *pfVar8 = fVar31;
            pfVar8[1] = fVar32;
            pfVar8[2] = fVar33;
            pfVar8[3] = fVar19;
            *pfVar8 = fVar23;
            pfVar8[1] = fVar25;
            pfVar8[2] = fVar26;
            pfVar8[3] = (float)((uint)((float)(~-(uint)(auVar29._12_4_ <= fVar39) &
                                              (uint)((3.0 - fVar40 * auVar29._12_4_ * fVar40) *
                                                    fVar40 * 0.5)) * fVar19) & uVar18 |
                               ~uVar18 & (uint)fVar19);
            pfVar8[3] = -(fVar26 * fVar27 + fVar25 * fVar22 + fVar23 * fVar21);
            fVar23 = pfVar8[3];
            fVar25 = *pfVar8 * local_70;
            fVar19 = pfVar8[1] * fStack_6c;
            fVar22 = pfVar8[2] * fStack_68;
            fVar26 = fVar22 + fVar25;
            fVar21 = fVar23 + fVar19;
            fVar25 = fVar25 + fVar22;
            fVar19 = fVar19 + fVar23;
            auVar24._0_4_ = fVar21 + fVar26;
            auVar24._4_4_ = fVar26 + fVar21;
            auVar24._8_4_ = fVar19 + fVar25;
            auVar24._12_4_ = fVar25 + fVar19;
            iVar11 = movmskps(local_24,auVar24);
            if (iVar11 == 0) {
              *pfVar8 = -*pfVar8;
              pfVar8[1] = -pfVar8[1];
              pfVar8[2] = -pfVar8[2];
              pfVar8[3] = -fVar23;
            }
            puVar3 = (undefined4 *)*puVar9;
            puVar7 = puVar9;
            iVar5 = local_24;
            puVar9 = puVar3;
          } while (puVar3 != (undefined4 *)0x0);
        }
      }
      else if (iVar11 == 1) {
        puVar9 = *(undefined4 **)(local_24 + 0x20);
        fVar23 = (float)(int)puVar9[8] * *(float *)(local_24 + 0x100) + *(float *)(local_24 + 0xe0);
        fVar25 = (float)(int)puVar9[9] * *(float *)(local_24 + 0x104) + *(float *)(local_24 + 0xe4);
        fVar26 = (float)(int)puVar9[10] * *(float *)(local_24 + 0x108) + *(float *)(local_24 + 0xe8)
        ;
        if (puVar9 != (undefined4 *)0x0) {
          for (puVar7 = (undefined4 *)*puVar9; puVar7 != (undefined4 *)0x0;
              puVar7 = (undefined4 *)*puVar7) {
            puVar9 = puVar7;
          }
        }
        piVar14 = (int *)(local_24 + 0x48);
        fVar27 = (float)(int)puVar9[8] * *(float *)(local_24 + 0x100) + *(float *)(local_24 + 0xe0);
        fVar31 = (float)(int)puVar9[9] * *(float *)(local_24 + 0x104) + *(float *)(local_24 + 0xe4);
        fVar32 = (float)(int)puVar9[10] * *(float *)(local_24 + 0x108) + *(float *)(local_24 + 0xe8)
        ;
        local_20._0_4_ = fVar27 - fVar23;
        local_20._4_4_ = fVar31 - fVar25;
        fStack_18 = fVar32 - fVar26;
        fVar19 = (float)local_20._0_4_ * (float)local_20._0_4_;
        fVar21 = (float)local_20._4_4_ * (float)local_20._4_4_;
        fVar22 = fStack_18 * fStack_18;
        auVar30._0_4_ = fVar21 + fVar19 + fVar22;
        auVar30._4_4_ = fVar21 + fVar19 + fVar22;
        auVar30._8_4_ = fVar21 + fVar19 + fVar22;
        auVar30._12_4_ = fVar21 + fVar19 + fVar22;
        auVar35._0_12_ = ZEXT812(0);
        auVar35._12_4_ = 0;
        auVar41 = rsqrtps(auVar35,auVar30);
        fVar19 = auVar41._0_4_;
        fVar21 = auVar41._4_4_;
        fVar22 = auVar41._8_4_;
        local_20._0_4_ =
             (float)(~-(uint)(auVar30._0_4_ <= 0.0) &
                    (uint)((3.0 - fVar19 * auVar30._0_4_ * fVar19) * fVar19 * 0.5)) *
             (float)local_20._0_4_;
        local_20._4_4_ =
             (float)(~-(uint)(auVar30._4_4_ <= 0.0) &
                    (uint)((3.0 - fVar21 * auVar30._4_4_ * fVar21) * fVar21 * 0.5)) *
             (float)local_20._4_4_;
        fStack_18 = (float)(~-(uint)(auVar30._8_4_ <= 0.0) &
                           (uint)((3.0 - fVar22 * auVar30._8_4_ * fVar22) * fVar22 * 0.5)) *
                    fStack_18;
        fStack_14 = -(fVar31 * (float)local_20._4_4_ + fVar27 * (float)local_20._0_4_ +
                     fVar32 * fStack_18);
        if (*(uint *)(local_24 + 0x4c) == (*(uint *)(local_24 + 0x50) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar14,0x10);
        }
        pfVar8 = (float *)(*(int *)(iVar12 + 0x4c) * 0x10 + *piVar14);
        *pfVar8 = (float)local_20._0_4_;
        pfVar8[1] = (float)local_20._4_4_;
        pfVar8[2] = fStack_18;
        pfVar8[3] = fStack_14;
        *(int *)(iVar12 + 0x4c) = *(int *)(iVar12 + 0x4c) + 1;
        local_20._0_4_ = (float)local_20._0_4_ * -1.0;
        local_20._4_4_ = (float)local_20._4_4_ * -1.0;
        fStack_18 = fStack_18 * -1.0;
        fStack_14 = -(fVar25 * (float)local_20._4_4_ + fVar23 * (float)local_20._0_4_ +
                     fVar26 * fStack_18);
        if (*(uint *)(iVar12 + 0x4c) == (*(uint *)(iVar12 + 0x50) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar14,0x10);
        }
        *(undefined1 (*) [16])(*(int *)(iVar12 + 0x4c) * 0x10 + *piVar14) = _local_20;
        *(int *)(iVar12 + 0x4c) = *(int *)(iVar12 + 0x4c) + 1;
      }
    }
    if (*(char *)(iVar5 + 0xe) != '\0') {
      for (puVar9 = *(undefined4 **)(iVar5 + 0x20); puVar9 != (undefined4 *)0x0;
          puVar9 = (undefined4 *)*puVar9) {
        iVar11 = 0;
        if (0 < *(int *)(iVar5 + 0x4c)) {
          iVar12 = 0;
          do {
            iVar13 = *(int *)(iVar5 + 0x48);
            pfVar8 = (float *)(iVar13 + iVar12);
            fVar23 = pfVar8[2] * (float)puVar9[6] +
                     pfVar8[1] * (float)puVar9[5] + *pfVar8 * (float)puVar9[4] +
                     *(float *)(iVar13 + iVar12 + 0xc);
            if (0.0 < fVar23) {
              *(float *)(iVar13 + iVar12 + 0xc) = *(float *)(iVar13 + iVar12 + 0xc) - fVar23;
            }
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + 0x10;
          } while (iVar11 < *(int *)(iVar5 + 0x4c));
        }
      }
    }
    if (*(int *)(iVar5 + 0x4c) != 0) {
      if (*(int *)(iVar5 + 0x4c) < (int)(*(uint *)(iVar5 + 0x50) & 0x3fffffff)) {
        FUN_0100a320(&PTR_vftable_018e9b94,iVar5 + 0x48,0x10,0,*(int *)(iVar5 + 0x4c));
      }
    }
    *(undefined1 *)(iVar5 + 0x1a6) = 1;
    local_40 = 0;
    if (-1 < (int)local_3c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_44,local_3c << 4);
    }
    local_44 = 0;
    local_3c = 0x80000000;
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
    local_34 = 0;
    if (-1 < local_30) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 8);
    }
  }
  return;
}

// 01085C10  FUN_01085c10  size=1864  [__FILE__]
/* WARNING: Removing unreachable block (ram,0x010861fe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_01085c10(int param_1,int *param_2,int *param_3,char param_4,char param_5)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  char *pcVar17;
  undefined1 local_2d4 [512];
  undefined1 *local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined1 local_c8 [132];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  undefined4 *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint *local_8;
  
  local_c = 0;
  local_34 = param_1;
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_2d4,0x200);
    uVar16 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar17 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar16);
    FUN_01018d00(pcVar17);
    iVar4 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_2d4,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar4 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    hkBaseObject::hkBaseObject_38();
  }
  param_2[1] = 0;
  iVar4 = *(int *)(param_1 + 0x4c);
  if ((int)(param_2[2] & 0x3fffffffU) < iVar4) {
    iVar8 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 < iVar8) {
      iVar4 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar4,4);
  }
  param_3[1] = 0;
  iVar4 = *(int *)(param_1 + 0x24) * 3;
  if ((int)(param_3[2] & 0x3fffffffU) < iVar4) {
    iVar8 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar4 < iVar8) {
      iVar4 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar4,4);
  }
  if (*(int *)(param_1 + 0x198) == 3) {
    uVar5 = *(uint *)(param_1 + 0x34);
    local_18 = 0;
    local_14 = 0;
    local_10 = -0x80000000;
    if (0 < (int)uVar5) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_18,uVar5 & ((int)uVar5 < 0) - 1,4);
    }
    for (puVar6 = *(undefined4 **)(param_1 + 0x30); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)*puVar6) {
      *(undefined4 **)(local_18 + local_14 * 4) = puVar6;
      local_14 = local_14 + 1;
    }
    local_1c = local_1c & 0xffffff00;
    if (1 < (int)local_14) {
      FUN_0107c680(local_18,0,local_14 - 1,local_1c);
    }
    local_1c = 0;
    local_20 = local_14;
    if (0 < (int)local_14) {
      do {
        local_24 = *(undefined4 **)(local_18 + local_1c * 4);
        if (local_24[0xe] == local_c) {
          if ((_DAT_0209a994 & 1) == 0) {
            _DAT_0209a994 = _DAT_0209a994 | 1;
            DAT_0209a98c = (undefined4 *)0x0;
            DAT_0209a990 = 0;
          }
          uVar5 = 0;
          local_8 = local_24 + 5;
          do {
            puVar6 = local_24;
            uVar12 = uVar5;
            if (*(int *)((*local_8 & 0xfffffffc) + 0x38) != local_c) break;
            local_8 = local_8 + 1;
            uVar5 = uVar5 + 1;
            puVar6 = DAT_0209a98c;
            uVar12 = DAT_0209a990;
          } while ((int)uVar5 < 3);
          if (puVar6 != (undefined4 *)0x0) {
            local_30._4_4_ = puVar6[uVar12 + 2];
            local_8 = (uint *)0x0;
            iVar4 = local_c;
            do {
              local_8 = (uint *)((int)local_8 + 1);
              if (param_4 == '\0') {
                local_24 = (undefined4 *)(puVar6[uVar12 + 2] + 0x34);
                if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
                }
                *(undefined4 *)(*param_3 + param_3[1] * 4) = *local_24;
                iVar4 = local_c;
              }
              else {
                local_24 = (undefined4 *)(*(uint *)(puVar6[uVar12 + 2] + 0x1c) & 0xc0ffffff);
                if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
                  iVar4 = local_c;
                }
                *(undefined4 **)(*param_3 + param_3[1] * 4) = local_24;
              }
              param_3[1] = param_3[1] + 1;
              uVar12 = 9 >> ((char)uVar12 * '\x02' & 0x1fU) & 3;
              iVar8 = *(int *)((puVar6[uVar12 + 5] & 0xfffffffc) + 0x38);
              while (iVar8 == iVar4) {
                puVar1 = puVar6 + uVar12 + 5;
                puVar6 = (undefined4 *)(*puVar1 & 0xfffffffc);
                uVar12 = 9 >> ((byte)*puVar1 & 3) * '\x02' & 3;
                iVar8 = *(int *)((puVar6[uVar12 + 5] & 0xfffffffc) + 0x38);
              }
            } while (puVar6[uVar12 + 2] != local_30._4_4_);
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
              iVar4 = local_c;
            }
            *(uint **)(*param_2 + param_2[1] * 4) = local_8;
            param_2[1] = param_2[1] + 1;
            local_c = iVar4 + 1;
          }
        }
        local_1c = local_1c + 1;
      } while ((int)local_1c < (int)local_20);
    }
    local_14 = 0;
    if (-1 < (int)local_10) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 4);
    }
  }
  else if (*(int *)(param_1 + 0x198) == 2) {
    local_20 = *(uint *)(param_1 + 0x24);
    local_c = 1;
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
    }
    *(uint *)(*param_2 + param_2[1] * 4) = local_20;
    param_2[1] = param_2[1] + 1;
    if (param_4 == '\0') {
      _param_4 = (undefined4 *)0x0;
      if (0 < *(int *)(param_1 + 0x24)) {
        do {
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
          }
          *(undefined4 **)(*param_3 + param_3[1] * 4) = _param_4;
          param_3[1] = param_3[1] + 1;
          _param_4 = (undefined4 *)((int)_param_4 + 1);
        } while ((int)_param_4 < *(int *)(param_1 + 0x24));
      }
    }
    else {
      for (puVar6 = *(undefined4 **)(param_1 + 0x20); puVar6 != (undefined4 *)0x0;
          puVar6 = (undefined4 *)*puVar6) {
        uVar5 = puVar6[7];
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
        }
        *(uint *)(*param_3 + param_3[1] * 4) = uVar5 & 0xc0ffffff;
        param_3[1] = param_3[1] + 1;
      }
    }
  }
  iVar4 = local_34;
  if ((param_5 != '\0') && (local_c != 0)) {
    _param_4 = (undefined4 *)*param_3;
    uVar5 = *(uint *)(local_34 + 0x24);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0x80000000;
    if (0 < (int)uVar5) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_18,((int)uVar5 < 0) - 1 & uVar5,4);
    }
    for (puVar6 = *(undefined4 **)(iVar4 + 0x20);
        lVar15 = CONCAT44(local_30._4_4_,(undefined4)local_30), puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)*puVar6) {
      if (local_14 == (local_10 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_18,4);
      }
      *(undefined4 **)(local_18 + local_14 * 4) = puVar6;
      local_14 = local_14 + 1;
    }
    local_8 = (uint *)0x0;
    if (0 < param_2[1]) {
      do {
        iVar4 = *(int *)(*param_2 + (int)local_8 * 4);
        if (2 < iVar4) {
          local_30 = -1;
          param_3 = (int *)0xffffffff;
          local_1c = 0;
          lVar15 = -1;
          if (0 < iVar4) {
            do {
              local_20 = local_1c + 1;
              iVar8 = *(int *)(local_18 + _param_4[(int)(local_1c + 2) % iVar4] * 4);
              iVar11 = *(int *)(local_18 + _param_4[(int)local_20 % iVar4] * 4);
              iVar2 = *(int *)(local_18 + _param_4[local_1c] * 4);
              local_34 = *(int *)(iVar2 + 0x24);
              local_40 = *(int *)(iVar11 + 0x20) - *(int *)(iVar2 + 0x20);
              local_3c = *(int *)(iVar11 + 0x24) - local_34;
              iVar7 = *(int *)(iVar8 + 0x24) - local_34;
              iVar9 = *(int *)(iVar8 + 0x20) - *(int *)(iVar2 + 0x20);
              iVar10 = *(int *)(iVar8 + 0x28) - *(int *)(iVar2 + 0x28);
              local_38 = *(int *)(iVar11 + 0x28) - *(int *)(iVar2 + 0x28);
              iVar8 = iVar7 * local_40 - iVar9 * local_3c;
              local_28 = iVar9 * local_38 - iVar10 * local_40;
              local_44 = iVar8 >> 0x1f;
              iVar11 = iVar10 * local_3c - iVar7 * local_38;
              local_24 = (undefined4 *)(local_28 >> 0x1f);
              lVar13 = __allmul(iVar11,iVar11 >> 0x1f,iVar11,iVar11 >> 0x1f);
              lVar14 = __allmul(local_28,local_24,local_28,local_24);
              lVar15 = __allmul(iVar8,local_44,iVar8,local_44);
              lVar15 = lVar13 + lVar14 + lVar15;
              if (local_30 < lVar15) {
                local_30 = lVar15;
                param_3 = (int *)local_1c;
              }
              local_1c = local_20;
            } while ((int)local_20 < iVar4);
            lVar15 = local_30;
            if (0 < (int)param_3) {
              local_d4 = local_c8;
              local_d0 = 0;
              local_cc = -0x7fffffe0;
              if (0x20 < (int)param_3) {
                uVar5 = 0x40;
                if (0x3f < (int)param_3) {
                  uVar5 = (uint)param_3;
                }
                FUN_0100a210(&PTR_vftable_018e9b94,&local_d4,uVar5,4);
              }
              iVar8 = 0;
              uVar5 = (uint)param_3;
              puVar6 = _param_4;
              if (0 < (int)param_3) {
                do {
                  *(undefined4 *)(local_d4 + iVar8 * 4) = _param_4[iVar8];
                  iVar8 = iVar8 + 1;
                } while (iVar8 < (int)param_3);
              }
              for (; (int)uVar5 < iVar4; uVar5 = uVar5 + 1) {
                *puVar6 = _param_4[uVar5];
                puVar6 = puVar6 + 1;
              }
              iVar8 = 0;
              if (0 < (int)param_3) {
                do {
                  *puVar6 = *(undefined4 *)(local_d4 + iVar8 * 4);
                  iVar8 = iVar8 + 1;
                  puVar6 = puVar6 + 1;
                } while (iVar8 < (int)param_3);
              }
              local_d0 = 0;
              lVar15 = local_30;
              if (-1 < local_cc) {
                (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_d4,local_cc * 4);
                lVar15 = local_30;
              }
            }
          }
        }
        _param_4 = _param_4 + iVar4;
        local_8 = (uint *)((int)local_8 + 1);
      } while ((int)local_8 < param_2[1]);
    }
    local_14 = 0;
    if (-1 < (int)local_10) {
      local_30 = lVar15;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 4);
    }
  }
  return local_c;
}

// 01086370  FUN_01086370  size=197  [between]
void __thiscall FUN_01086370(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= param_3) {
      iVar3 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar3,0xc);
  }
  iVar3 = (param_1[1] - param_3) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*param_1 + param_3 * 0xc + 8 + iVar3 * 0xc);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_3 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 01086440  FUN_01086440  size=1832  [__FILE__]
/* WARNING: Removing unreachable block (ram,0x01086943) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_01086440(int param_1,int *param_2,uint *param_3,char param_4,char param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined1 local_294 [512];
  undefined1 *local_94;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [68];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 local_24;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  piVar6 = (int *)param_3;
  local_8 = 0;
  local_1c = param_1;
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_294,0x200);
    uVar18 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar19 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar18);
    FUN_01018d00(pcVar19);
    iVar7 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_294,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar7 != 0) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    hkBaseObject::hkBaseObject_38();
  }
  param_2[1] = 0;
  iVar7 = *(int *)(param_1 + 0x4c);
  if ((int)(param_2[2] & 0x3fffffffU) < iVar7) {
    iVar11 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar7 < iVar11) {
      iVar7 = iVar11;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar7,1);
  }
  param_3[1] = 0;
  iVar7 = *(int *)(param_1 + 0x24) * 3;
  if ((int)(param_3[2] & 0x3fffffff) < iVar7) {
    iVar11 = (param_3[2] & 0x3fffffff) * 2;
    if (iVar7 < iVar11) {
      iVar7 = iVar11;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar7,2);
  }
  if (*(int *)(param_1 + 0x198) == 3) {
    uVar8 = *(uint *)(param_1 + 0x34);
    local_14 = 0;
    local_10 = 0;
    local_c = -0x80000000;
    if (0 < (int)uVar8) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_14,uVar8 & ((int)uVar8 < 0) - 1,4);
    }
    for (puVar4 = *(undefined4 **)(param_1 + 0x30); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      *(undefined4 **)(local_14 + local_10 * 4) = puVar4;
      local_10 = local_10 + 1;
    }
    param_3 = (uint *)((uint)param_3 & 0xffffff00);
    if (1 < (int)local_10) {
      FUN_0107c680(local_14,0,local_10 + -1,param_3);
    }
    local_18 = 0;
    local_28 = local_10;
    if (0 < (int)local_10) {
      do {
        local_24._4_4_ = *(uint *)(local_14 + local_18 * 4);
        if (*(int *)(local_24._4_4_ + 0x38) == local_8) {
          if ((_DAT_0209a994 & 1) == 0) {
            _DAT_0209a994 = _DAT_0209a994 | 1;
            DAT_0209a98c = 0;
            DAT_0209a990 = 0;
          }
          uVar8 = 0;
          param_3 = (uint *)(local_24._4_4_ + 0x14);
          do {
            uVar10 = local_24._4_4_;
            uVar14 = uVar8;
            if (*(int *)((*param_3 & 0xfffffffc) + 0x38) != local_8) break;
            param_3 = param_3 + 1;
            uVar8 = uVar8 + 1;
            uVar10 = DAT_0209a98c;
            uVar14 = DAT_0209a990;
          } while ((int)uVar8 < 3);
          if (uVar10 != 0) {
            local_2c = *(int *)(uVar10 + 8 + uVar14 * 4);
            cVar1 = '\0';
            iVar7 = local_8;
            do {
              cVar1 = cVar1 + '\x01';
              if (param_4 == '\0') {
                local_24._4_4_ = (uint)*(ushort *)(*(int *)(uVar10 + 8 + uVar14 * 4) + 0x34);
                if (piVar6[1] == (piVar6[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,piVar6,2);
                  iVar7 = local_8;
                }
                puVar9 = (undefined2 *)(*piVar6 + piVar6[1] * 2);
              }
              else {
                local_24._4_4_ = (uint)*(ushort *)(*(int *)(uVar10 + 8 + uVar14 * 4) + 0x1c);
                if (piVar6[1] == (piVar6[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,piVar6,2);
                  iVar7 = local_8;
                }
                puVar9 = (undefined2 *)(*piVar6 + piVar6[1] * 2);
              }
              *puVar9 = local_24._4_2_;
              piVar6[1] = piVar6[1] + 1;
              uVar14 = 9 >> ((char)uVar14 * '\x02' & 0x1fU) & 3;
              iVar11 = *(int *)((*(uint *)(uVar10 + 0x14 + uVar14 * 4) & 0xfffffffc) + 0x38);
              while (iVar11 == iVar7) {
                uVar8 = *(uint *)(uVar10 + 0x14 + uVar14 * 4);
                uVar10 = uVar8 & 0xfffffffc;
                uVar14 = 9 >> ((byte)uVar8 & 3) * '\x02' & 3;
                iVar11 = *(int *)((*(uint *)(uVar10 + 0x14 + uVar14 * 4) & 0xfffffffc) + 0x38);
              }
            } while (*(int *)(uVar10 + 8 + uVar14 * 4) != local_2c);
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_2,1);
              iVar7 = local_8;
            }
            *(char *)(*param_2 + param_2[1]) = cVar1;
            param_2[1] = param_2[1] + 1;
            local_8 = iVar7 + 1;
          }
        }
        local_18 = local_18 + 1;
      } while (local_18 < local_28);
    }
    local_10 = 0;
    param_1 = local_1c;
    if (-1 < (int)local_c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
      param_1 = local_1c;
    }
  }
  else if (*(int *)(param_1 + 0x198) == 2) {
    uVar2 = *(undefined1 *)(param_1 + 0x24);
    local_8 = 1;
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_2,1);
    }
    *(undefined1 *)(*param_2 + param_2[1]) = uVar2;
    param_2[1] = param_2[1] + 1;
    if (param_4 == '\0') {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x24)) {
        do {
          if (param_3[1] == (param_3[2] & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_3,2);
          }
          *(short *)(*param_3 + param_3[1] * 2) = (short)iVar7;
          param_3[1] = param_3[1] + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x24));
      }
    }
    else {
      for (puVar4 = *(undefined4 **)(param_1 + 0x20); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        uVar3 = *(undefined2 *)(puVar4 + 7);
        if (param_3[1] == (param_3[2] & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_3,2);
        }
        *(undefined2 *)(*param_3 + param_3[1] * 2) = uVar3;
        param_3[1] = param_3[1] + 1;
      }
    }
  }
  if ((param_5 != '\0') && (local_8 != 0)) {
    uVar8 = *(uint *)(param_1 + 0x24);
    _param_5 = (undefined2 *)*piVar6;
    local_14 = 0;
    local_10 = 0;
    local_c = 0x80000000;
    if (0 < (int)uVar8) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_14,((int)uVar8 < 0) - 1 & uVar8,4);
    }
    for (puVar4 = *(undefined4 **)(param_1 + 0x20); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      if (local_10 == (local_c & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_14,4);
      }
      *(undefined4 **)(local_14 + local_10 * 4) = puVar4;
      local_10 = local_10 + 1;
    }
    lVar17 = CONCAT44(local_24._4_4_,(undefined4)local_24);
    local_18 = 0;
    if (0 < param_2[1]) {
      do {
        uVar8 = (uint)*(byte *)(*param_2 + local_18);
        if (2 < uVar8) {
          local_24 = -1;
          param_3 = (uint *)0xffffffff;
          local_1c = 0;
          lVar17 = -1;
          if (uVar8 != 0) {
            do {
              local_2c = local_1c + 1;
              iVar7 = *(int *)(local_14 + (uint)(ushort)_param_5[(local_1c + 2) % (int)uVar8] * 4);
              iVar11 = *(int *)(local_14 + (uint)(ushort)_param_5[local_2c % (int)uVar8] * 4);
              iVar12 = *(int *)(local_14 + (uint)(ushort)_param_5[local_1c] * 4);
              local_28 = *(int *)(iVar12 + 0x28);
              local_38 = *(int *)(iVar11 + 0x20) - *(int *)(iVar12 + 0x20);
              local_34 = *(int *)(iVar11 + 0x24) - *(int *)(iVar12 + 0x24);
              local_30 = *(int *)(iVar11 + 0x28) - local_28;
              iVar11 = *(int *)(iVar7 + 0x24) - *(int *)(iVar12 + 0x24);
              iVar12 = *(int *)(iVar7 + 0x20) - *(int *)(iVar12 + 0x20);
              iVar13 = *(int *)(iVar7 + 0x28) - local_28;
              iVar7 = iVar11 * local_38 - iVar12 * local_34;
              local_40 = iVar12 * local_30 - iVar13 * local_38;
              local_44 = iVar7 >> 0x1f;
              iVar11 = iVar13 * local_34 - iVar11 * local_30;
              local_3c = local_40 >> 0x1f;
              lVar15 = __allmul(iVar11,iVar11 >> 0x1f,iVar11,iVar11 >> 0x1f);
              lVar16 = __allmul(local_40,local_3c,local_40,local_3c);
              lVar17 = __allmul(iVar7,local_44,iVar7,local_44);
              lVar17 = lVar15 + lVar16 + lVar17;
              if (local_24 < lVar17) {
                local_24 = lVar17;
                param_3 = (uint *)local_1c;
              }
              local_1c = local_2c;
            } while (local_2c < (int)uVar8);
            lVar17 = local_24;
            if (0 < (int)param_3) {
              local_94 = local_88;
              local_90 = 0;
              local_8c = 0x80000020;
              if (0x20 < (int)param_3) {
                iVar7 = 0x40;
                if (0x3f < (int)param_3) {
                  iVar7 = (int)param_3;
                }
                FUN_0100a210(&PTR_vftable_018e9b94,&local_94,iVar7,2);
              }
              iVar11 = 0;
              iVar7 = (int)param_3;
              puVar9 = _param_5;
              if (0 < (int)param_3) {
                do {
                  *(undefined2 *)(local_94 + iVar11 * 2) = _param_5[iVar11];
                  iVar11 = iVar11 + 1;
                } while (iVar11 < (int)param_3);
              }
              for (; iVar7 < (int)uVar8; iVar7 = iVar7 + 1) {
                *puVar9 = _param_5[iVar7];
                puVar9 = puVar9 + 1;
              }
              iVar7 = 0;
              if (0 < (int)param_3) {
                do {
                  *puVar9 = *(undefined2 *)(local_94 + iVar7 * 2);
                  iVar7 = iVar7 + 1;
                  puVar9 = puVar9 + 1;
                } while (iVar7 < (int)param_3);
              }
              local_90 = 0;
              lVar17 = local_24;
              if (-1 < (int)local_8c) {
                (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_94,(local_8c & 0x3fffffff) * 2);
                lVar17 = local_24;
              }
            }
          }
        }
        local_18 = local_18 + 1;
        _param_5 = _param_5 + uVar8;
      } while (local_18 < param_2[1]);
    }
    local_10 = 0;
    if (-1 < (int)local_c) {
      local_24 = lVar17;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
    }
  }
  return local_8;
}

// 01086B80  hkgpConvexHull::vf00  size=52  [between]
int __thiscall hkgpConvexHull::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_27();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01086BC0  FUN_01086bc0  size=6865  [__FILE__]
/* WARNING: Removing unreachable block (ram,0x010874af) */

char __fastcall FUN_01086bc0(char *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  char *pcVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 local_370 [512];
  int local_170;
  int local_160;
  int local_15c;
  int local_130;
  int iStack_12c;
  int local_128;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined4 *local_b8;
  int local_b4;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_48;
  undefined4 *local_44;
  int local_40;
  int *local_3c;
  undefined4 *local_38;
  char local_31;
  undefined4 *local_30;
  int *local_2c;
  uint local_28;
  undefined8 local_24;
  int *local_1c;
  char *local_18;
  int *local_14;
  
  puVar12 = *(undefined4 **)(param_1 + 0x40);
  local_31 = '\0';
  local_88 = puVar12;
  local_18 = param_1;
  if ((int)puVar12 < 4) {
    hkErrStream::hkErrStream(local_370,0x200);
    FUN_01018d00("Internal error");
    iVar7 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x642cf968,local_370,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x359);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      cVar6 = (*pcVar2)();
      return cVar6;
    }
    hkBaseObject::hkBaseObject_38();
  }
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[0xd4] = '\0';
  param_1[0xd5] = '\0';
  param_1[0xd6] = '\0';
  param_1[0xd7] = '\0';
  param_1[0xd8] = '\0';
  param_1[0xd9] = '\0';
  param_1[0xda] = '\0';
  param_1[0xdb] = '\0';
  param_1[0xdc] = '\0';
  param_1[0xdd] = '\0';
  param_1[0xde] = '\0';
  param_1[0xdf] = '\0';
  local_6c = (undefined4 *)0x0;
  if (0 < (int)puVar12) {
    do {
      iVar7 = (int)local_6c * 0x40 + *(int *)(param_1 + 0x3c);
      local_68 = (undefined4 *)((int)local_6c + 1);
      local_130 = *(int *)(iVar7 + 0x20);
      iStack_12c = *(int *)(iVar7 + 0x24);
      local_128 = *(int *)(iVar7 + 0x28);
      if ((int)local_68 < (int)puVar12) {
        do {
          local_2c = (int *)((int)local_68 * 0x40 + *(int *)(param_1 + 0x3c));
          local_64 = (undefined4 *)((int)local_68 + 1);
          if ((int)local_64 < (int)puVar12) {
            do {
              local_44 = (undefined4 *)local_2c[9];
              local_1c = (int *)local_2c[10];
              local_24 = CONCAT44(local_2c[8],(uint)local_24);
              local_fc = local_2c[8] - local_130;
              iVar7 = (int)local_64 * 0x40 + *(int *)(param_1 + 0x3c);
              local_f4 = (int)local_1c - local_128;
              local_14 = *(int **)(iVar7 + 0x20);
              local_60 = *(undefined4 **)(iVar7 + 0x24);
              local_38 = *(undefined4 **)(iVar7 + 0x28);
              local_f8 = (int)local_44 - iStack_12c;
              local_5c = (undefined4 *)(((int)local_38 - local_128) * local_f8);
              local_170 = (int)local_5c - ((int)local_60 - iStack_12c) * local_f4;
              iVar7 = ((int)local_60 - iStack_12c) * local_fc -
                      ((int)local_14 - local_130) * local_f8;
              puVar12 = (undefined4 *)
                        (((int)local_14 - local_130) * local_f4 -
                        ((int)local_38 - local_128) * local_fc);
              if ((iVar7 != 0 || puVar12 != (undefined4 *)0x0) || local_170 != 0) {
                local_9c = iVar7 >> 0x1f;
                local_b4 = (int)puVar12 >> 0x1f;
                local_c4 = local_170 >> 0x1f;
                local_c8 = local_170;
                local_b8 = puVar12;
                local_a0 = iVar7;
                lVar32 = __allmul(local_130,local_130 >> 0x1f,local_170,local_c4);
                lVar33 = __allmul(iStack_12c,iStack_12c >> 0x1f,local_b8,local_b4);
                lVar34 = __allmul(local_128,local_128 >> 0x1f,local_a0,local_9c);
                lVar34 = lVar32 + lVar33 + lVar34;
                iVar7 = (int)lVar34;
                local_160 = -iVar7;
                local_15c = -((int)((ulonglong)lVar34 >> 0x20) + (uint)(iVar7 != 0));
                if (*local_18 != '\0') {
                  auVar30._0_12_ = ZEXT812(0);
                  auVar30._12_4_ = 0;
                  fVar21 = *(float *)(local_18 + 0x100);
                  fVar23 = *(float *)(local_18 + 0x104);
                  fVar25 = *(float *)(local_18 + 0x108);
                  fVar22 = *(float *)(local_18 + 0xe0);
                  fVar24 = *(float *)(local_18 + 0xe4);
                  fVar26 = *(float *)(local_18 + 0xe8);
                  fVar27 = (float)local_130 * fVar21 + fVar22;
                  fVar28 = (float)iStack_12c * fVar23 + fVar24;
                  fVar29 = (float)local_128 * fVar25 + fVar26;
                  fVar18 = ((float)(int)local_24._4_4_ * fVar21 + fVar22) - fVar27;
                  fVar19 = ((float)(int)local_44 * fVar23 + fVar24) - fVar28;
                  fVar20 = ((float)(int)local_1c * fVar25 + fVar26) - fVar29;
                  fVar21 = ((float)(int)local_14 * fVar21 + fVar22) - fVar27;
                  fVar23 = ((float)(int)local_60 * fVar23 + fVar24) - fVar28;
                  fVar25 = ((float)(int)local_38 * fVar25 + fVar26) - fVar29;
                  fVar22 = fVar25 * fVar19 - fVar23 * fVar20;
                  fVar24 = fVar21 * fVar20 - fVar25 * fVar18;
                  fVar26 = fVar23 * fVar18 - fVar21 * fVar19;
                  fVar21 = fVar22 * fVar22;
                  fVar23 = fVar24 * fVar24;
                  fVar25 = fVar26 * fVar26;
                  fVar18 = fVar23 + fVar21 + fVar25;
                  fVar19 = fVar23 + fVar21 + fVar25;
                  fVar20 = fVar23 + fVar21 + fVar25;
                  auVar31._4_4_ = fVar19;
                  auVar31._0_4_ = fVar18;
                  auVar31._8_4_ = fVar20;
                  auVar31._12_4_ = fVar23 + fVar21 + fVar25;
                  auVar31 = rsqrtps(auVar30,auVar31);
                  fVar21 = auVar31._0_4_;
                  fVar23 = auVar31._4_4_;
                  fVar25 = auVar31._8_4_;
                  fVar22 = fVar22 * (float)(~-(uint)(fVar18 <= 0.0) &
                                           (uint)((3.0 - fVar21 * fVar18 * fVar21) * fVar21 * 0.5));
                  fVar24 = fVar24 * (float)(~-(uint)(fVar19 <= 0.0) &
                                           (uint)((3.0 - fVar23 * fVar19 * fVar23) * fVar23 * 0.5));
                  fVar26 = fVar26 * (float)(~-(uint)(fVar20 <= 0.0) &
                                           (uint)((3.0 - fVar25 * fVar20 * fVar25) * fVar25 * 0.5));
                  if (*(float *)(local_18 + 0xd4) * *(float *)(local_18 + 0xd4) +
                      *(float *)(local_18 + 0xd0) * *(float *)(local_18 + 0xd0) +
                      *(float *)(local_18 + 0xd8) * *(float *)(local_18 + 0xd8) <
                      fVar24 * fVar24 + fVar22 * fVar22 + fVar26 * fVar26) {
                    *(float *)(local_18 + 0xd0) = fVar22;
                    *(float *)(local_18 + 0xd4) = fVar24;
                    *(float *)(local_18 + 0xd8) = fVar26;
                    *(float *)(local_18 + 0xdc) =
                         0.0 - (fVar24 * fVar28 + fVar22 * fVar27 + fVar26 * fVar29);
                  }
                }
                local_44 = (undefined4 *)((int)local_64 + 1);
                if ((int)local_44 < (int)local_88) {
                  do {
                    local_5c = (undefined4 *)((int)local_44 * 0x40);
                    local_1c = (int *)(*(int *)(local_18 + 0x3c) + (int)local_5c);
                    lVar34 = __allmul(local_1c[8],local_1c[8] >> 0x1f,local_c8,local_c4);
                    lVar32 = __allmul(local_1c[9],local_1c[9] >> 0x1f,local_b8,local_b4);
                    lVar33 = __allmul(local_1c[10],local_1c[10] >> 0x1f,local_a0,local_9c);
                    pcVar15 = local_18;
                    local_c0 = lVar34 + lVar32 + lVar33 + CONCAT44(local_15c,local_160);
                    if (local_c0 != 0) {
                      iVar7 = *(int *)(local_18 + 0x1c);
                      if ((iVar7 == 0) || (*(int *)(iVar7 + 0xa00) == 0)) {
                        local_1c = (int *)0x0;
                        iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xa10);
                        if (iVar7 != 0) {
                          iVar10 = 0x1f;
                          piVar17 = (int *)(iVar7 + 0x9b0);
                          do {
                            piVar16 = piVar17;
                            *piVar16 = (int)local_1c;
                            local_24 = CONCAT44(piVar16,(uint)local_24);
                            iVar10 = iVar10 + -1;
                            piVar17 = piVar16 + -0x14;
                            local_1c = piVar16;
                          } while (-1 < iVar10);
                          *(int **)(iVar7 + 0xa00) = piVar16;
                          *(undefined4 *)(iVar7 + 0xa0c) = 0;
                          *(undefined4 *)(iVar7 + 0xa04) = 0;
                          *(undefined4 *)(iVar7 + 0xa08) = *(undefined4 *)(pcVar15 + 0x1c);
                          *(int *)(pcVar15 + 0x1c) = iVar7;
                          if (*(int *)(iVar7 + 0xa08) != 0) {
                            *(int *)(*(int *)(iVar7 + 0xa08) + 0xa04) = iVar7;
                          }
                        }
                      }
                      if (iVar7 == 0) {
                        local_38 = (undefined4 *)0x0;
                      }
                      else {
                        local_38 = *(undefined4 **)(iVar7 + 0xa00);
                        *(undefined4 *)(iVar7 + 0xa00) = *local_38;
                        local_38[0x10] = iVar7;
                        *(int *)(iVar7 + 0xa0c) = *(int *)(iVar7 + 0xa0c) + 1;
                        local_38[0xb] = 0;
                        local_38[0xd] = 0xffffffff;
                        local_38[1] = 0;
                        *local_38 = *(undefined4 *)(pcVar15 + 0x20);
                        if (*(int *)(pcVar15 + 0x20) != 0) {
                          *(undefined4 **)(*(int *)(pcVar15 + 0x20) + 4) = local_38;
                        }
                        *(int *)(pcVar15 + 0x24) = *(int *)(pcVar15 + 0x24) + 1;
                        *(undefined4 **)(pcVar15 + 0x20) = local_38;
                      }
                      iVar7 = *(int *)(pcVar15 + 0x1c);
                      local_58 = local_38;
                      if ((iVar7 == 0) || (*(int *)(iVar7 + 0xa00) == 0)) {
                        local_1c = (int *)0x0;
                        iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xa10);
                        if (iVar7 != 0) {
                          iVar10 = 0x1f;
                          piVar17 = (int *)(iVar7 + 0x9b0);
                          do {
                            piVar16 = piVar17;
                            *piVar16 = (int)local_1c;
                            local_24 = CONCAT44(piVar16,(uint)local_24);
                            iVar10 = iVar10 + -1;
                            piVar17 = piVar16 + -0x14;
                            local_1c = piVar16;
                          } while (-1 < iVar10);
                          *(int **)(iVar7 + 0xa00) = piVar16;
                          *(undefined4 *)(iVar7 + 0xa0c) = 0;
                          *(undefined4 *)(iVar7 + 0xa04) = 0;
                          *(undefined4 *)(iVar7 + 0xa08) = *(undefined4 *)(pcVar15 + 0x1c);
                          *(int *)(pcVar15 + 0x1c) = iVar7;
                          if (*(int *)(iVar7 + 0xa08) != 0) {
                            *(int *)(*(int *)(iVar7 + 0xa08) + 0xa04) = iVar7;
                          }
                        }
                      }
                      if (iVar7 == 0) {
                        local_14 = (undefined4 *)0x0;
                      }
                      else {
                        local_14 = *(int **)(iVar7 + 0xa00);
                        *(int *)(iVar7 + 0xa00) = *local_14;
                        local_14[0x10] = iVar7;
                        *(int *)(iVar7 + 0xa0c) = *(int *)(iVar7 + 0xa0c) + 1;
                        local_14[0xb] = 0;
                        local_14[0xd] = 0xffffffff;
                        local_14[1] = 0;
                        *local_14 = *(undefined4 *)(pcVar15 + 0x20);
                        if (*(int *)(pcVar15 + 0x20) != 0) {
                          *(int **)(*(int *)(pcVar15 + 0x20) + 4) = local_14;
                        }
                        *(int *)(pcVar15 + 0x24) = *(int *)(pcVar15 + 0x24) + 1;
                        *(int **)(pcVar15 + 0x20) = local_14;
                      }
                      iVar7 = *(int *)(pcVar15 + 0x1c);
                      local_54 = local_14;
                      if ((iVar7 == 0) || (*(int *)(iVar7 + 0xa00) == 0)) {
                        iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xa10);
                        if (iVar7 != 0) {
                          iVar10 = 0x1f;
                          piVar17 = (int *)(iVar7 + 0x9b0);
                          piVar16 = (int *)0;
                          do {
                            piVar9 = piVar17;
                            *piVar9 = (int)piVar16;
                            iVar10 = iVar10 + -1;
                            piVar17 = piVar9 + -0x14;
                            piVar16 = piVar9;
                          } while (-1 < iVar10);
                          *(int **)(iVar7 + 0xa00) = piVar9;
                          *(undefined4 *)(iVar7 + 0xa0c) = 0;
                          *(undefined4 *)(iVar7 + 0xa04) = 0;
                          *(undefined4 *)(iVar7 + 0xa08) = *(undefined4 *)(local_18 + 0x1c);
                          *(int *)(local_18 + 0x1c) = iVar7;
                          pcVar15 = local_18;
                          if (*(int *)(iVar7 + 0xa08) != 0) {
                            *(int *)(*(int *)(iVar7 + 0xa08) + 0xa04) = iVar7;
                          }
                        }
                      }
                      if (iVar7 == 0) {
                        local_60 = (undefined4 *)0x0;
                      }
                      else {
                        local_60 = *(undefined4 **)(iVar7 + 0xa00);
                        *(undefined4 *)(iVar7 + 0xa00) = *local_60;
                        local_60[0x10] = iVar7;
                        *(int *)(iVar7 + 0xa0c) = *(int *)(iVar7 + 0xa0c) + 1;
                        local_60[0xb] = 0;
                        local_60[0xd] = 0xffffffff;
                        local_60[1] = 0;
                        *local_60 = *(undefined4 *)(pcVar15 + 0x20);
                        if (*(int *)(pcVar15 + 0x20) != 0) {
                          *(undefined4 **)(*(int *)(pcVar15 + 0x20) + 4) = local_60;
                        }
                        *(int *)(pcVar15 + 0x24) = *(int *)(pcVar15 + 0x24) + 1;
                        *(undefined4 **)(pcVar15 + 0x20) = local_60;
                      }
                      puVar12 = local_60;
                      iVar7 = *(int *)(pcVar15 + 0x1c);
                      if ((iVar7 == 0) || (*(int *)(iVar7 + 0xa00) == 0)) {
                        local_1c = (int *)0x0;
                        iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xa10);
                        if (iVar7 != 0) {
                          iVar10 = 0x1f;
                          piVar17 = (int *)(iVar7 + 0x9b0);
                          do {
                            piVar16 = piVar17;
                            local_24 = CONCAT44(piVar16,(uint)local_24);
                            *piVar16 = (int)local_1c;
                            iVar10 = iVar10 + -1;
                            piVar17 = piVar16 + -0x14;
                            local_1c = piVar16;
                          } while (-1 < iVar10);
                          *(int **)(iVar7 + 0xa00) = piVar16;
                          *(undefined4 *)(iVar7 + 0xa0c) = 0;
                          *(undefined4 *)(iVar7 + 0xa04) = 0;
                          *(undefined4 *)(iVar7 + 0xa08) = *(undefined4 *)(local_18 + 0x1c);
                          *(int *)(local_18 + 0x1c) = iVar7;
                          if (*(int *)(iVar7 + 0xa08) != 0) {
                            *(int *)(*(int *)(iVar7 + 0xa08) + 0xa04) = iVar7;
                          }
                          goto LAB_0108733e;
                        }
LAB_010874c3:
                        puVar13 = (undefined4 *)0x0;
                      }
                      else {
LAB_0108733e:
                        if (iVar7 == 0) goto LAB_010874c3;
                        puVar13 = *(undefined4 **)(iVar7 + 0xa00);
                        *(undefined4 *)(iVar7 + 0xa00) = *puVar13;
                        puVar13[0x10] = iVar7;
                        *(int *)(iVar7 + 0xa0c) = *(int *)(iVar7 + 0xa0c) + 1;
                        puVar13[0xb] = 0;
                        puVar13[0xd] = 0xffffffff;
                        puVar13[1] = 0;
                        *puVar13 = *(undefined4 *)(local_18 + 0x20);
                        if (*(int *)(local_18 + 0x20) != 0) {
                          *(undefined4 **)(*(int *)(local_18 + 0x20) + 4) = puVar13;
                        }
                        *(int *)(local_18 + 0x24) = *(int *)(local_18 + 0x24) + 1;
                        *(undefined4 **)(local_18 + 0x20) = puVar13;
                      }
                      iVar7 = *(int *)(local_18 + 0x3c);
                      local_3c = (int *)((int)local_6c * 0x40);
                      puVar1 = (undefined4 *)(iVar7 + 0x10 + (int)local_3c);
                      uVar3 = puVar1[1];
                      uVar4 = puVar1[2];
                      uVar5 = puVar1[3];
                      local_38[4] = *puVar1;
                      local_38[5] = uVar3;
                      local_38[6] = uVar4;
                      local_38[7] = uVar5;
                      local_38[8] = *(undefined4 *)((int)local_3c + iVar7 + 0x20);
                      local_38[9] = *(undefined4 *)((int)local_3c + iVar7 + 0x24);
                      local_38[10] = *(undefined4 *)((int)local_3c + iVar7 + 0x28);
                      local_38[0xb] = *(undefined4 *)((int)local_3c + iVar7 + 0x2c);
                      local_38[0xc] = *(undefined4 *)((int)local_3c + iVar7 + 0x30);
                      local_38[0xd] = *(undefined4 *)((int)local_3c + iVar7 + 0x34);
                      local_38[0xc] = 0;
                      local_40 = (int)local_68 * 0x40;
                      puVar1 = (undefined4 *)(*(int *)(local_18 + 0x3c) + 0x10 + local_40);
                      uVar3 = puVar1[1];
                      uVar4 = puVar1[2];
                      uVar5 = puVar1[3];
                      iVar7 = *(int *)(local_18 + 0x3c) + local_40;
                      local_14[4] = *puVar1;
                      local_14[5] = uVar3;
                      local_14[6] = uVar4;
                      local_14[7] = uVar5;
                      local_14[8] = *(undefined4 *)(iVar7 + 0x20);
                      local_14[9] = *(undefined4 *)(iVar7 + 0x24);
                      local_14[10] = *(undefined4 *)(iVar7 + 0x28);
                      local_14[0xb] = *(undefined4 *)(iVar7 + 0x2c);
                      local_14[0xc] = *(undefined4 *)(iVar7 + 0x30);
                      local_14[0xd] = *(undefined4 *)(iVar7 + 0x34);
                      local_14[0xc] = 0;
                      iVar7 = *(int *)(local_18 + 0x3c);
                      local_cc = (int)local_64 * 0x40;
                      puVar1 = (undefined4 *)(iVar7 + 0x10 + local_cc);
                      uVar3 = puVar1[1];
                      uVar4 = puVar1[2];
                      uVar5 = puVar1[3];
                      puVar12[4] = *puVar1;
                      puVar12[5] = uVar3;
                      puVar12[6] = uVar4;
                      puVar12[7] = uVar5;
                      iVar7 = iVar7 + local_cc;
                      puVar12[8] = *(undefined4 *)(iVar7 + 0x20);
                      puVar12[9] = *(undefined4 *)(iVar7 + 0x24);
                      puVar12[10] = *(undefined4 *)(iVar7 + 0x28);
                      puVar12[0xb] = *(undefined4 *)(iVar7 + 0x2c);
                      puVar12[0xc] = *(undefined4 *)(iVar7 + 0x30);
                      puVar12[0xd] = *(undefined4 *)(iVar7 + 0x34);
                      puVar12[0xc] = 0;
                      iVar7 = *(int *)(local_18 + 0x3c);
                      uVar3 = *(undefined4 *)((int)local_5c + iVar7 + 0x14);
                      uVar4 = *(undefined4 *)((int)local_5c + iVar7 + 0x18);
                      uVar5 = *(undefined4 *)((int)local_5c + iVar7 + 0x1c);
                      puVar13[4] = *(undefined4 *)((int)local_5c + iVar7 + 0x10);
                      puVar13[5] = uVar3;
                      puVar13[6] = uVar4;
                      puVar13[7] = uVar5;
                      puVar13[8] = *(undefined4 *)((int)local_5c + iVar7 + 0x20);
                      puVar13[9] = *(undefined4 *)((int)local_5c + iVar7 + 0x24);
                      puVar13[10] = *(undefined4 *)((int)local_5c + iVar7 + 0x28);
                      puVar13[0xb] = *(undefined4 *)((int)local_5c + iVar7 + 0x2c);
                      puVar13[0xc] = *(undefined4 *)((int)local_5c + iVar7 + 0x30);
                      puVar13[0xd] = *(undefined4 *)((int)local_5c + iVar7 + 0x34);
                      puVar13[0xc] = 0;
                      if (0 < local_c0) {
                        local_58 = local_14;
                        local_54 = local_38;
                      }
                      iVar7 = *(int *)(local_18 + 0x2c);
                      if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc00) == 0)) {
                        local_1c = (int *)0x0;
                        iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
                        if (iVar7 != 0) {
                          local_14 = (undefined4 *)0x1f;
                          piVar17 = (int *)(iVar7 + 0xba0);
                          do {
                            piVar16 = piVar17;
                            *piVar16 = (int)local_1c;
                            local_14 = (int *)((int)local_14 + -1);
                            local_24 = CONCAT44(piVar16,(uint)local_24);
                            piVar17 = piVar16 + -0x18;
                            local_1c = piVar16;
                          } while (-1 < (int)local_14);
                          *(undefined4 *)(iVar7 + 0xc0c) = 0;
                          *(undefined4 *)(iVar7 + 0xc04) = 0;
                          *(int **)(iVar7 + 0xc00) = piVar16;
                          *(undefined4 *)(iVar7 + 0xc08) = *(undefined4 *)(local_18 + 0x2c);
                          *(int *)(local_18 + 0x2c) = iVar7;
                          if (*(int *)(iVar7 + 0xc08) != 0) {
                            *(int *)(*(int *)(iVar7 + 0xc08) + 0xc04) = iVar7;
                          }
                        }
                      }
                      if (iVar7 == 0) {
                        local_48 = (undefined4 *)0x0;
                      }
                      else {
                        local_48 = *(undefined4 **)(iVar7 + 0xc00);
                        *(undefined4 *)(iVar7 + 0xc00) = *local_48;
                        local_48[0x14] = iVar7;
                        *(int *)(iVar7 + 0xc0c) = *(int *)(iVar7 + 0xc0c) + 1;
                        local_48[0xe] = 0xffffffff;
                        local_48[0x11] = 0xffffffff;
                        local_48[1] = 0;
                        *local_48 = *(undefined4 *)(local_18 + 0x30);
                        if (*(int *)(local_18 + 0x30) != 0) {
                          *(undefined4 **)(*(int *)(local_18 + 0x30) + 4) = local_48;
                        }
                        *(int *)(local_18 + 0x34) = *(int *)(local_18 + 0x34) + 1;
                        *(undefined4 **)(local_18 + 0x30) = local_48;
                        local_38 = local_48;
                      }
                      iVar7 = *(int *)(local_18 + 0x2c);
                      if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc00) == 0)) {
                        local_1c = (int *)0x0;
                        iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
                        if (iVar7 != 0) {
                          local_14 = (undefined4 *)0x1f;
                          piVar17 = (int *)(iVar7 + 0xba0);
                          do {
                            piVar16 = piVar17;
                            *piVar16 = (int)local_1c;
                            local_14 = (int *)((int)local_14 + -1);
                            local_24 = CONCAT44(piVar16,(uint)local_24);
                            piVar17 = piVar16 + -0x18;
                            local_1c = piVar16;
                          } while (-1 < (int)local_14);
                          *(undefined4 *)(iVar7 + 0xc0c) = 0;
                          *(undefined4 *)(iVar7 + 0xc04) = 0;
                          *(int **)(iVar7 + 0xc00) = piVar16;
                          *(undefined4 *)(iVar7 + 0xc08) = *(undefined4 *)(local_18 + 0x2c);
                          *(int *)(local_18 + 0x2c) = iVar7;
                          if (*(int *)(iVar7 + 0xc08) != 0) {
                            *(int *)(*(int *)(iVar7 + 0xc08) + 0xc04) = iVar7;
                          }
                        }
                      }
                      if (iVar7 == 0) {
                        local_38 = (undefined4 *)0x0;
                      }
                      else {
                        local_38 = *(undefined4 **)(iVar7 + 0xc00);
                        *(undefined4 *)(iVar7 + 0xc00) = *local_38;
                        local_38[0x14] = iVar7;
                        *(int *)(iVar7 + 0xc0c) = *(int *)(iVar7 + 0xc0c) + 1;
                        local_38[0xe] = 0xffffffff;
                        local_38[0x11] = 0xffffffff;
                        local_38[1] = 0;
                        *local_38 = *(undefined4 *)(local_18 + 0x30);
                        if (*(int *)(local_18 + 0x30) != 0) {
                          *(undefined4 **)(*(int *)(local_18 + 0x30) + 4) = local_38;
                        }
                        *(int *)(local_18 + 0x34) = *(int *)(local_18 + 0x34) + 1;
                        *(undefined4 **)(local_18 + 0x30) = local_38;
                        local_30 = local_38;
                      }
                      iVar7 = *(int *)(local_18 + 0x2c);
                      if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc00) == 0)) {
                        local_1c = (int *)0x0;
                        iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
                        if (iVar7 != 0) {
                          local_14 = (undefined4 *)0x1f;
                          piVar17 = (int *)(iVar7 + 0xba0);
                          do {
                            piVar16 = piVar17;
                            *piVar16 = (int)local_1c;
                            local_14 = (int *)((int)local_14 + -1);
                            local_24 = CONCAT44(piVar16,(uint)local_24);
                            piVar17 = piVar16 + -0x18;
                            local_1c = piVar16;
                          } while (-1 < (int)local_14);
                          *(undefined4 *)(iVar7 + 0xc0c) = 0;
                          *(undefined4 *)(iVar7 + 0xc04) = 0;
                          *(int **)(iVar7 + 0xc00) = piVar16;
                          *(undefined4 *)(iVar7 + 0xc08) = *(undefined4 *)(local_18 + 0x2c);
                          *(int *)(local_18 + 0x2c) = iVar7;
                          if (*(int *)(iVar7 + 0xc08) != 0) {
                            *(int *)(*(int *)(iVar7 + 0xc08) + 0xc04) = iVar7;
                          }
                        }
                      }
                      if (iVar7 == 0) {
                        local_30 = (undefined4 *)0x0;
                      }
                      else {
                        local_30 = *(undefined4 **)(iVar7 + 0xc00);
                        *(undefined4 *)(iVar7 + 0xc00) = *local_30;
                        local_30[0x14] = iVar7;
                        *(int *)(iVar7 + 0xc0c) = *(int *)(iVar7 + 0xc0c) + 1;
                        local_30[0xe] = 0xffffffff;
                        local_30[0x11] = 0xffffffff;
                        local_30[1] = 0;
                        *local_30 = *(undefined4 *)(local_18 + 0x30);
                        if (*(int *)(local_18 + 0x30) != 0) {
                          *(undefined4 **)(*(int *)(local_18 + 0x30) + 4) = local_30;
                        }
                        *(int *)(local_18 + 0x34) = *(int *)(local_18 + 0x34) + 1;
                        *(undefined4 **)(local_18 + 0x30) = local_30;
                        local_14 = local_30;
                      }
                      iVar7 = *(int *)(local_18 + 0x2c);
                      if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc00) == 0)) {
                        local_1c = (int *)0x0;
                        iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
                        if (iVar7 != 0) {
                          local_14 = (int *)0x1f;
                          piVar17 = (int *)(iVar7 + 0xba0);
                          do {
                            piVar16 = piVar17;
                            *piVar16 = (int)local_1c;
                            local_14 = (int *)((int)local_14 + -1);
                            piVar17 = piVar16 + -0x18;
                            local_1c = piVar16;
                          } while (-1 < (int)local_14);
                          *(undefined4 *)(iVar7 + 0xc0c) = 0;
                          *(undefined4 *)(iVar7 + 0xc04) = 0;
                          *(int **)(iVar7 + 0xc00) = piVar16;
                          *(undefined4 *)(iVar7 + 0xc08) = *(undefined4 *)(local_18 + 0x2c);
                          *(int *)(local_18 + 0x2c) = iVar7;
                          if (*(int *)(iVar7 + 0xc08) != 0) {
                            *(int *)(*(int *)(iVar7 + 0xc08) + 0xc04) = iVar7;
                          }
                        }
                      }
                      if (iVar7 == 0) {
                        local_1c = (undefined4 *)0x0;
                      }
                      else {
                        local_1c = *(int **)(iVar7 + 0xc00);
                        *(int *)(iVar7 + 0xc00) = *local_1c;
                        local_1c[0x14] = iVar7;
                        *(int *)(iVar7 + 0xc0c) = *(int *)(iVar7 + 0xc0c) + 1;
                        local_1c[0xe] = 0xffffffff;
                        local_1c[0x11] = 0xffffffff;
                        local_1c[1] = 0;
                        *local_1c = *(undefined4 *)(local_18 + 0x30);
                        if (*(int *)(local_18 + 0x30) != 0) {
                          *(int **)(*(int *)(local_18 + 0x30) + 4) = local_1c;
                        }
                        *(int *)(local_18 + 0x34) = *(int *)(local_18 + 0x34) + 1;
                        *(int **)(local_18 + 0x30) = local_1c;
                      }
                      local_48[2] = local_58;
                      local_48[3] = local_54;
                      local_48[4] = puVar12;
                      local_48[0x10] = 0;
                      local_48[0x11] = 0xffffffff;
                      local_58[0xc] = local_58[0xc] + 1;
                      local_54[0xc] = local_54[0xc] + 1;
                      puVar12[0xc] = puVar12[0xc] + 1;
                      local_f0 = local_54[8] - local_58[8];
                      local_ec = local_54[9] - local_58[9];
                      local_e8 = local_54[10] - local_58[10];
                      local_e4 = puVar12[8] - local_58[8];
                      local_e0 = puVar12[9] - local_58[9];
                      local_dc = puVar12[10] - local_58[10];
                      iVar7 = local_dc * local_ec - local_e0 * local_e8;
                      local_48[8] = iVar7;
                      iVar11 = local_e4 * local_e8 - local_dc * local_f0;
                      iVar10 = local_e0 * local_f0 - local_e4 * local_ec;
                      local_48[9] = iVar11;
                      local_48[0xc] = 0;
                      local_48[0xd] = 0;
                      local_48[10] = iVar10;
                      if ((iVar10 != 0 || iVar11 != 0) || iVar7 != 0) {
                        lVar34 = (longlong)(int)local_58[8] * (longlong)iVar7 +
                                 (longlong)iVar10 * (longlong)(int)local_58[10] +
                                 (longlong)(int)local_58[9] * (longlong)iVar11;
                        iVar7 = (int)lVar34;
                        local_48[0xc] = -iVar7;
                        local_48[0xd] = -((int)((ulonglong)lVar34 >> 0x20) + (uint)(iVar7 != 0));
                        puVar12 = local_60;
                      }
                      local_38[2] = local_58;
                      local_38[4] = local_54;
                      local_38[3] = puVar13;
                      local_38[0x10] = 0;
                      local_38[0x11] = 0xffffffff;
                      local_58[0xc] = local_58[0xc] + 1;
                      puVar13[0xc] = puVar13[0xc] + 1;
                      local_54[0xc] = local_54[0xc] + 1;
                      local_ac = puVar13[8] - local_58[8];
                      local_a8 = puVar13[9] - local_58[9];
                      local_a4 = puVar13[10] - local_58[10];
                      local_d8 = local_54[8] - local_58[8];
                      local_d4 = local_54[9] - local_58[9];
                      local_d0 = local_54[10] - local_58[10];
                      iVar7 = local_d0 * local_a8 - local_d4 * local_a4;
                      local_38[8] = iVar7;
                      iVar11 = local_d8 * local_a4 - local_d0 * local_ac;
                      iVar10 = local_d4 * local_ac - local_d8 * local_a8;
                      local_38[9] = iVar11;
                      local_38[0xc] = 0;
                      local_38[0xd] = 0;
                      local_38[10] = iVar10;
                      if ((iVar10 != 0 || iVar11 != 0) || iVar7 != 0) {
                        lVar34 = (longlong)(int)local_58[8] * (longlong)iVar7 +
                                 (longlong)iVar10 * (longlong)(int)local_58[10] +
                                 (longlong)(int)local_58[9] * (longlong)iVar11;
                        iVar7 = (int)lVar34;
                        local_38[0xc] = -iVar7;
                        local_38[0xd] = -((int)((ulonglong)lVar34 >> 0x20) + (uint)(iVar7 != 0));
                        puVar12 = local_60;
                      }
                      local_30[2] = local_58;
                      local_30[3] = puVar12;
                      local_30[4] = puVar13;
                      local_30[0x10] = 0;
                      local_30[0x11] = 0xffffffff;
                      local_58[0xc] = local_58[0xc] + 1;
                      puVar12[0xc] = puVar12[0xc] + 1;
                      puVar13[0xc] = puVar13[0xc] + 1;
                      local_94 = puVar12[8] - local_58[8];
                      local_90 = puVar12[9] - local_58[9];
                      local_8c = puVar12[10] - local_58[10];
                      local_84 = puVar13[8] - local_58[8];
                      local_80 = puVar13[9] - local_58[9];
                      local_7c = puVar13[10] - local_58[10];
                      iVar7 = local_7c * local_90 - local_80 * local_8c;
                      local_30[8] = iVar7;
                      iVar11 = local_84 * local_8c - local_7c * local_94;
                      local_30[9] = iVar11;
                      iVar10 = local_80 * local_94 - local_84 * local_90;
                      local_30[10] = iVar10;
                      local_30[0xc] = 0;
                      local_30[0xd] = 0;
                      if ((iVar10 != 0 || iVar11 != 0) || iVar7 != 0) {
                        lVar34 = (longlong)(int)local_58[8] * (longlong)iVar7 +
                                 (longlong)(int)local_58[9] * (longlong)iVar11 +
                                 (longlong)iVar10 * (longlong)(int)local_58[10];
                        iVar10 = (int)lVar34;
                        local_30[0xc] = -iVar10;
                        local_30[0xd] = -((int)((ulonglong)lVar34 >> 0x20) + (uint)(iVar10 != 0));
                        puVar12 = local_60;
                      }
                      local_1c[3] = (int)puVar13;
                      local_1c[2] = (int)local_54;
                      local_1c[4] = (int)puVar12;
                      local_1c[0x10] = 0;
                      local_1c[0x11] = 0xffffffff;
                      local_54[0xc] = local_54[0xc] + 1;
                      puVar13[0xc] = puVar13[0xc] + 1;
                      puVar12[0xc] = puVar12[0xc] + 1;
                      local_78 = puVar13[8] - local_54[8];
                      local_74 = puVar13[9] - local_54[9];
                      uVar14 = local_54[10];
                      local_70 = puVar13[10] - uVar14;
                      local_24 = CONCAT44(iVar7,uVar14);
                      local_100 = puVar12[10] - uVar14;
                      local_104 = puVar12[9] - local_54[9];
                      iVar7 = local_100 * local_74 - local_104 * local_70;
                      piVar17 = (int *)((puVar12[8] - local_54[8]) * local_70 - local_100 * local_78
                                       );
                      local_14 = (int *)(local_104 * local_78 -
                                        (puVar12[8] - local_54[8]) * local_74);
                      local_1c[0xc] = 0;
                      local_1c[0xd] = 0;
                      local_1c[10] = (int)local_14;
                      local_1c[8] = iVar7;
                      local_1c[9] = (int)piVar17;
                      if ((local_14 != (int *)0x0 || piVar17 != (int *)0x0) || iVar7 != 0) {
                        lVar34 = (longlong)(int)piVar17 * (longlong)(int)local_54[9];
                        local_24._4_4_ =
                             (uint)((ulonglong)((longlong)(int)local_54[8] * (longlong)iVar7) >>
                                   0x20);
                        local_24 = CONCAT44(local_24._4_4_,
                                            local_24._4_4_ + (int)((ulonglong)lVar34 >> 0x20) +
                                            (uint)CARRY4(uVar14,(uint)lVar34));
                        lVar34 = (longlong)(int)local_14 * (longlong)(int)local_54[10] +
                                 lVar34 + CONCAT44(local_24._4_4_,uVar14);
                        iVar7 = (int)lVar34;
                        local_1c[0xc] = -iVar7;
                        local_1c[0xd] = -((int)((ulonglong)lVar34 >> 0x20) + (uint)(iVar7 != 0));
                      }
                      local_48[5] = (int)local_38 + 2;
                      local_38[7] = local_48;
                      local_48[6] = (int)local_1c + 2;
                      local_1c[7] = (int)local_48 + 1;
                      local_48[7] = local_30;
                      local_30[5] = (int)local_48 + 2;
                      local_38[5] = (int)local_30 + 2;
                      local_30[7] = local_38;
                      local_30[6] = (int)local_1c + 1;
                      local_1c[6] = (int)local_30 + 1;
                      local_1c[5] = (int)local_38 + 1;
                      local_38[6] = local_1c;
                      *(int *)(local_18 + 0x40) = *(int *)(local_18 + 0x40) + -1;
                      if (*(undefined4 **)(local_18 + 0x40) != local_44) {
                        puVar12 = (undefined4 *)((int)local_5c + *(int *)(local_18 + 0x3c));
                        iVar7 = (*(int *)(local_18 + 0x3c) +
                                (int)*(undefined4 **)(local_18 + 0x40) * 0x40) - (int)puVar12;
                        iVar10 = 8;
                        do {
                          *puVar12 = *(undefined4 *)((int)puVar12 + iVar7);
                          puVar12[1] = *(undefined4 *)((int)puVar12 + iVar7 + 4);
                          puVar12 = puVar12 + 2;
                          iVar10 = iVar10 + -1;
                        } while (iVar10 != 0);
                      }
                      *(int *)(local_18 + 0x40) = *(int *)(local_18 + 0x40) + -1;
                      if (*(undefined4 **)(local_18 + 0x40) != local_64) {
                        puVar12 = (undefined4 *)(local_cc + *(int *)(local_18 + 0x3c));
                        iVar7 = (*(int *)(local_18 + 0x3c) +
                                (int)*(undefined4 **)(local_18 + 0x40) * 0x40) - (int)puVar12;
                        iVar10 = 8;
                        do {
                          *puVar12 = *(undefined4 *)(iVar7 + (int)puVar12);
                          puVar12[1] = *(undefined4 *)(iVar7 + 4 + (int)puVar12);
                          puVar12 = puVar12 + 2;
                          iVar10 = iVar10 + -1;
                        } while (iVar10 != 0);
                      }
                      *(int *)(local_18 + 0x40) = *(int *)(local_18 + 0x40) + -1;
                      if (*(undefined4 **)(local_18 + 0x40) != local_68) {
                        puVar12 = (undefined4 *)(local_40 + *(int *)(local_18 + 0x3c));
                        iVar7 = (*(int *)(local_18 + 0x3c) +
                                (int)*(undefined4 **)(local_18 + 0x40) * 0x40) - (int)puVar12;
                        iVar10 = 8;
                        do {
                          *puVar12 = *(undefined4 *)(iVar7 + (int)puVar12);
                          puVar12[1] = *(undefined4 *)(iVar7 + 4 + (int)puVar12);
                          puVar12 = puVar12 + 2;
                          iVar10 = iVar10 + -1;
                        } while (iVar10 != 0);
                      }
                      *(int *)(local_18 + 0x40) = *(int *)(local_18 + 0x40) + -1;
                      if (*(undefined4 **)(local_18 + 0x40) != local_6c) {
                        puVar12 = (undefined4 *)((int)local_3c + *(int *)(local_18 + 0x3c));
                        iVar7 = (*(int *)(local_18 + 0x3c) +
                                (int)*(undefined4 **)(local_18 + 0x40) * 0x40) - (int)puVar12;
                        iVar10 = 8;
                        do {
                          *puVar12 = *(undefined4 *)(iVar7 + (int)puVar12);
                          puVar12[1] = *(undefined4 *)(iVar7 + 4 + (int)puVar12);
                          puVar12 = puVar12 + 2;
                          iVar10 = iVar10 + -1;
                        } while (iVar10 != 0);
                      }
                      local_64 = local_88;
                      local_68 = local_88;
                      local_6c = local_88;
                      local_31 = '\x01';
                      local_44 = local_88;
                      local_1c = piVar17;
                    }
                    local_44 = (undefined4 *)((int)local_44 + 1);
                  } while ((int)local_44 < (int)local_88);
                }
                if (local_31 == '\0') {
                  return '\0';
                }
              }
              local_64 = (undefined4 *)((int)local_64 + 1);
              puVar12 = local_88;
              param_1 = local_18;
            } while ((int)local_64 < (int)local_88);
          }
          local_68 = (undefined4 *)((int)local_68 + 1);
        } while ((int)local_68 < (int)puVar12);
      }
      local_6c = (undefined4 *)((int)local_6c + 1);
    } while ((int)local_6c < (int)puVar12);
    if (local_31 != '\0') {
      iVar7 = *(int *)(param_1 + 0x40);
      pcVar15 = local_18;
      while (local_18 = pcVar15, 0 < iVar7) {
        local_30 = *(undefined4 **)(pcVar15 + 0x30);
        local_40 = *(int *)(pcVar15 + 0x40) * 0x40 + -0x40 + *(int *)(pcVar15 + 0x3c);
        if (local_30 != (undefined4 *)0x0) {
          local_c8 = *(int *)(local_40 + 0x28);
          local_c4 = local_c8 >> 0x1f;
          local_c0._0_4_ = *(int *)(local_40 + 0x24);
          local_c0._4_4_ = (int)local_c0 >> 0x1f;
          local_a0 = *(int *)(local_40 + 0x20);
          local_9c = local_a0 >> 0x1f;
LAB_01087f71:
          lVar32 = __allmul(local_30[9],(int)local_30[9] >> 0x1f,(int)local_c0,local_c0._4_4_);
          lVar33 = __allmul(local_30[10],(int)local_30[10] >> 0x1f,local_c8,local_c4);
          lVar34 = __allmul(local_30[8],(int)local_30[8] >> 0x1f,local_a0,local_9c);
          pcVar15 = local_18;
          lVar34 = lVar32 + lVar33 + lVar34;
          uVar14 = (uint)lVar34;
          iVar7 = (int)((ulonglong)lVar34 >> 0x20) + local_30[0xd] +
                  (uint)CARRY4(uVar14,local_30[0xc]);
          if ((iVar7 < 1) && ((iVar7 < 0 || (uVar14 + local_30[0xc] == 0)))) goto LAB_01087fe4;
          local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0);
          if (local_30 != (undefined4 *)0x0) {
            iVar7 = *(int *)(local_18 + 0x1c);
            if ((iVar7 != 0) && (*(int *)(iVar7 + 0xa00) != 0)) goto LAB_0108808a;
            local_2c = (int *)0x0;
            iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xa10);
            if (iVar7 == 0) goto LAB_010883f4;
            iVar10 = 0x1f;
            piVar17 = (int *)(iVar7 + 0x9b0);
            do {
              local_3c = piVar17;
              *local_3c = (int)local_2c;
              iVar10 = iVar10 + -1;
              piVar17 = local_3c + -0x14;
              local_2c = local_3c;
            } while (-1 < iVar10);
            *(int **)(iVar7 + 0xa00) = local_3c;
            *(undefined4 *)(iVar7 + 0xa0c) = 0;
            *(undefined4 *)(iVar7 + 0xa04) = 0;
            *(undefined4 *)(iVar7 + 0xa08) = *(undefined4 *)(pcVar15 + 0x1c);
            *(int *)(pcVar15 + 0x1c) = iVar7;
            if (*(int *)(iVar7 + 0xa08) != 0) {
              *(int *)(*(int *)(iVar7 + 0xa08) + 0xa04) = iVar7;
            }
LAB_0108808a:
            if (iVar7 == 0) {
LAB_010883f4:
              local_44 = (undefined4 *)0x0;
            }
            else {
              local_44 = *(undefined4 **)(iVar7 + 0xa00);
              *(undefined4 *)(iVar7 + 0xa00) = *local_44;
              local_44[0x10] = iVar7;
              *(int *)(iVar7 + 0xa0c) = *(int *)(iVar7 + 0xa0c) + 1;
              local_44[0xb] = 0;
              local_44[0xd] = 0xffffffff;
              local_44[1] = 0;
              *local_44 = *(undefined4 *)(pcVar15 + 0x20);
              if (*(int *)(pcVar15 + 0x20) != 0) {
                *(undefined4 **)(*(int *)(pcVar15 + 0x20) + 4) = local_44;
              }
              *(int *)(pcVar15 + 0x24) = *(int *)(pcVar15 + 0x24) + 1;
              *(undefined4 **)(pcVar15 + 0x20) = local_44;
            }
            puVar12 = local_44;
            uVar3 = *(undefined4 *)(local_40 + 0x14);
            uVar4 = *(undefined4 *)(local_40 + 0x18);
            uVar5 = *(undefined4 *)(local_40 + 0x1c);
            local_28 = 0;
            local_24 = (ulonglong)local_24._4_4_ << 0x20;
            local_44[4] = *(undefined4 *)(local_40 + 0x10);
            local_44[5] = uVar3;
            local_44[6] = uVar4;
            local_44[7] = uVar5;
            local_44[8] = *(undefined4 *)(local_40 + 0x20);
            local_44[9] = *(undefined4 *)(local_40 + 0x24);
            local_44[10] = *(undefined4 *)(local_40 + 0x28);
            local_44[0xb] = *(undefined4 *)(local_40 + 0x2c);
            local_44[0xc] = *(undefined4 *)(local_40 + 0x30);
            local_44[0xd] = *(undefined4 *)(local_40 + 0x34);
            local_44[0xc] = 0;
            *(int *)(pcVar15 + 0x19c) = *(int *)(pcVar15 + 0x19c) + 1;
            local_b4 = 0;
            local_b8 = local_30;
            FUN_01081620(local_44,&local_b8,&local_28);
            uVar14 = *(uint *)(local_28 + 0x14 + (uint)local_24 * 4);
            uVar8 = (uint)local_24;
            while ((uVar14 & 0xfffffffc) != 0) {
              uVar8 = 9 >> ((char)uVar8 * '\x02' & 0x1fU) & 3;
              local_24 = local_24 & 0xffffffff00000000;
              uVar14 = *(uint *)(local_28 + 0x14 + uVar8 * 4);
            }
            local_1c = (int *)0x0;
            local_14 = (int *)0x0;
            local_3c = (int *)(uVar8 + local_28);
            piVar16 = local_1c;
            piVar17 = local_14;
            while( true ) {
              local_14 = piVar17;
              local_1c = piVar16;
              pcVar15 = local_18;
              uVar8 = 9 >> ((char)uVar8 * '\x02' & 0x1fU) & 3;
              uVar14 = *(uint *)(local_28 + 0x14 + uVar8 * 4);
              while ((uVar14 & 0xfffffffc) != 0) {
                uVar14 = *(uint *)(local_28 + 0x14 + uVar8 * 4);
                local_28 = uVar14 & 0xfffffffc;
                uVar8 = 9 >> ((byte)uVar14 & 3) * '\x02' & 3;
                uVar14 = *(uint *)(local_28 + 0x14 + uVar8 * 4);
              }
              local_24 = CONCAT44(local_24._4_4_,uVar8);
              if (local_3c == (int *)(uVar8 + local_28)) break;
              iVar7 = *(int *)(local_18 + 0x2c);
              if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc00) == 0)) {
                local_2c = (int *)0x0;
                iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
                if (iVar7 != 0) {
                  iVar10 = 0x1f;
                  piVar17 = (int *)(iVar7 + 0xba0);
                  do {
                    piVar16 = piVar17;
                    *piVar16 = (int)local_2c;
                    iVar10 = iVar10 + -1;
                    piVar17 = piVar16 + -0x18;
                    local_2c = piVar16;
                  } while (-1 < iVar10);
                  *(int **)(iVar7 + 0xc00) = piVar16;
                  *(undefined4 *)(iVar7 + 0xc0c) = 0;
                  *(undefined4 *)(iVar7 + 0xc04) = 0;
                  *(undefined4 *)(iVar7 + 0xc08) = *(undefined4 *)(local_18 + 0x2c);
                  *(int *)(local_18 + 0x2c) = iVar7;
                  if (*(int *)(iVar7 + 0xc08) != 0) {
                    *(int *)(*(int *)(iVar7 + 0xc08) + 0xc04) = iVar7;
                  }
                  goto LAB_0108825d;
                }
LAB_01088400:
                piVar17 = (int *)0x0;
              }
              else {
LAB_0108825d:
                if (iVar7 == 0) goto LAB_01088400;
                piVar17 = *(int **)(iVar7 + 0xc00);
                *(int *)(iVar7 + 0xc00) = *piVar17;
                piVar17[0x14] = iVar7;
                *(int *)(iVar7 + 0xc0c) = *(int *)(iVar7 + 0xc0c) + 1;
                piVar17[0xe] = -1;
                piVar17[0x11] = -1;
                piVar17[1] = 0;
                *piVar17 = *(int *)(local_18 + 0x30);
                if (*(int *)(local_18 + 0x30) != 0) {
                  *(int **)(*(int *)(local_18 + 0x30) + 4) = piVar17;
                }
                *(int *)(local_18 + 0x34) = *(int *)(local_18 + 0x34) + 1;
                *(int **)(local_18 + 0x30) = piVar17;
              }
              iVar7 = *(int *)(local_28 + 8 + (uint)local_24 * 4);
              iVar10 = *(int *)(local_28 + 8 + (9 >> ((char)local_24 * '\x02' & 0x1fU) & 3U) * 4);
              piVar17[4] = iVar7;
              piVar17[3] = iVar10;
              piVar17[2] = (int)puVar12;
              piVar17[0x10] = 0;
              piVar17[0x11] = -1;
              puVar12[0xc] = puVar12[0xc] + 1;
              *(int *)(iVar10 + 0x30) = *(int *)(iVar10 + 0x30) + 1;
              *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + 1;
              local_78 = *(int *)(iVar10 + 0x20) - puVar12[8];
              local_74 = *(int *)(iVar10 + 0x24) - puVar12[9];
              local_70 = *(int *)(iVar10 + 0x28) - puVar12[10];
              local_94 = *(int *)(iVar7 + 0x20) - puVar12[8];
              local_90 = *(int *)(iVar7 + 0x24) - puVar12[9];
              local_8c = *(int *)(iVar7 + 0x28) - puVar12[10];
              iVar7 = local_8c * local_74 - local_90 * local_70;
              piVar17[8] = iVar7;
              iVar10 = local_94 * local_70 - local_8c * local_78;
              local_40 = local_90 * local_78 - local_94 * local_74;
              piVar17[10] = local_40;
              piVar17[9] = iVar10;
              piVar17[0xc] = 0;
              piVar17[0xd] = 0;
              if ((local_40 != 0 || iVar10 != 0) || iVar7 != 0) {
                local_cc = (int)((ulonglong)((longlong)(int)puVar12[10] * (longlong)local_40) >>
                                0x20);
                lVar34 = (longlong)(int)puVar12[10] * (longlong)local_40 +
                         (longlong)(int)puVar12[9] * (longlong)iVar10;
                local_40 = (int)((ulonglong)lVar34 >> 0x20);
                lVar34 = lVar34 + (longlong)(int)local_44[8] * (longlong)iVar7;
                iVar7 = (int)lVar34;
                piVar17[0xc] = -iVar7;
                piVar17[0xd] = -((int)((ulonglong)lVar34 >> 0x20) + (uint)(iVar7 != 0));
                puVar12 = local_44;
              }
              *(int *)(local_28 + 0x14 + (uint)local_24 * 4) = (int)piVar17 + 1;
              piVar17[6] = (uint)local_24 + local_28;
              uVar8 = (uint)local_24;
              piVar16 = piVar17;
              if (local_14 != (int *)0x0) {
                local_14[5] = (int)piVar17 + 2;
                piVar17[7] = (int)local_14;
                piVar16 = local_1c;
              }
            }
            iVar7 = *(int *)(local_18 + 0x2c);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc00) == 0)) {
              local_2c = (int *)0x0;
              iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
              if (iVar7 != 0) {
                iVar10 = 0x1f;
                piVar17 = (int *)(iVar7 + 0xba0);
                do {
                  piVar16 = piVar17;
                  *piVar16 = (int)local_2c;
                  iVar10 = iVar10 + -1;
                  piVar17 = piVar16 + -0x18;
                  local_2c = piVar16;
                } while (-1 < iVar10);
                *(int **)(iVar7 + 0xc00) = piVar16;
                *(undefined4 *)(iVar7 + 0xc0c) = 0;
                *(undefined4 *)(iVar7 + 0xc04) = 0;
                *(undefined4 *)(iVar7 + 0xc08) = *(undefined4 *)(local_18 + 0x2c);
                *(int *)(local_18 + 0x2c) = iVar7;
                pcVar15 = local_18;
                if (*(int *)(iVar7 + 0xc08) != 0) {
                  *(int *)(*(int *)(iVar7 + 0xc08) + 0xc04) = iVar7;
                }
              }
            }
            if (iVar7 == 0) {
              local_5c = (undefined4 *)0x0;
            }
            else {
              local_5c = *(undefined4 **)(iVar7 + 0xc00);
              *(undefined4 *)(iVar7 + 0xc00) = *local_5c;
              local_5c[0x14] = iVar7;
              *(int *)(iVar7 + 0xc0c) = *(int *)(iVar7 + 0xc0c) + 1;
              local_5c[0xe] = 0xffffffff;
              local_5c[0x11] = 0xffffffff;
              local_5c[1] = 0;
              *local_5c = *(undefined4 *)(pcVar15 + 0x30);
              if (*(int *)(pcVar15 + 0x30) != 0) {
                *(undefined4 **)(*(int *)(pcVar15 + 0x30) + 4) = local_5c;
              }
              *(int *)(pcVar15 + 0x34) = *(int *)(pcVar15 + 0x34) + 1;
              *(undefined4 **)(pcVar15 + 0x30) = local_5c;
            }
            iVar7 = *(int *)(local_28 + 8 + (uint)local_24 * 4);
            iVar10 = *(int *)(local_28 + 8 + (9 >> ((char)local_24 * '\x02' & 0x1fU) & 3U) * 4);
            local_5c[4] = iVar7;
            local_5c[3] = iVar10;
            local_5c[2] = puVar12;
            local_5c[0x10] = 0;
            local_5c[0x11] = 0xffffffff;
            puVar12[0xc] = puVar12[0xc] + 1;
            *(int *)(iVar10 + 0x30) = *(int *)(iVar10 + 0x30) + 1;
            *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + 1;
            local_84 = *(int *)(iVar10 + 0x20) - puVar12[8];
            local_80 = *(int *)(iVar10 + 0x24) - puVar12[9];
            local_7c = *(int *)(iVar10 + 0x28) - puVar12[10];
            local_ac = *(int *)(iVar7 + 0x20) - puVar12[8];
            iVar10 = *(int *)(iVar7 + 0x24) - puVar12[9];
            local_a4 = *(int *)(iVar7 + 0x28) - puVar12[10];
            local_2c = (int *)(local_a4 * local_80 - iVar10 * local_7c);
            local_5c[8] = local_2c;
            local_3c = (int *)(local_ac * local_7c);
            iVar11 = (int)local_3c - local_a4 * local_84;
            iVar7 = iVar10 * local_84 - local_ac * local_80;
            local_5c[0xc] = 0;
            local_5c[0xd] = 0;
            local_5c[9] = iVar11;
            local_5c[10] = iVar7;
            if ((iVar7 != 0 || iVar11 != 0) || local_2c != (int *)0x0) {
              lVar34 = (longlong)(int)puVar12[10] * (longlong)iVar7 +
                       (longlong)(int)puVar12[9] * (longlong)iVar11 +
                       (longlong)(int)puVar12[8] * (longlong)(int)local_2c;
              iVar7 = (int)lVar34;
              local_3c = (int *)-((int)((ulonglong)lVar34 >> 0x20) + (uint)(iVar7 != 0));
              local_5c[0xc] = -iVar7;
              local_5c[0xd] = local_3c;
            }
            *(int *)(local_28 + 0x14 + (uint)local_24 * 4) = (int)local_5c + 1;
            local_5c[6] = (uint)local_24 + local_28;
            local_14[5] = (int)local_5c + 2;
            local_5c[7] = local_14;
            local_5c[5] = (int)local_1c + 2;
            local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0);
            if (local_1c != (int *)0x0) {
              local_1c[7] = (int)local_5c;
              local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0);
            }
          }
        }
LAB_01088632:
        *(int *)(local_18 + 0x40) = *(int *)(local_18 + 0x40) + -1;
        pcVar15 = local_18;
        iVar7 = *(int *)(local_18 + 0x40);
      }
      pcVar15[0x40] = '\0';
      pcVar15[0x41] = '\0';
      pcVar15[0x42] = '\0';
      pcVar15[0x43] = '\0';
      if (-1 < *(int *)(pcVar15 + 0x44)) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (*(undefined4 *)(pcVar15 + 0x3c),*(int *)(pcVar15 + 0x44) << 6);
      }
      pcVar15[0x3c] = '\0';
      pcVar15[0x3d] = '\0';
      pcVar15[0x3e] = '\0';
      pcVar15[0x3f] = '\0';
      pcVar15[0x44] = '\0';
      pcVar15[0x45] = '\0';
      pcVar15[0x46] = '\0';
      pcVar15[0x47] = -0x80;
    }
  }
  return local_31;
LAB_01087fe4:
  local_30 = (undefined4 *)*local_30;
  if (local_30 == (undefined4 *)0x0) goto LAB_01088632;
  goto LAB_01087f71;
}

// 010886B0  FUN_010886b0  size=28  [between]
undefined4 __thiscall FUN_010886b0(int param_1,undefined4 param_2)

{
  FUN_01084f30(*(undefined4 *)(param_1 + 0x1c),0);
  return param_2;
}

// 010886D0  FUN_010886d0  size=198  [between]
void __thiscall FUN_010886d0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 010887A0  FUN_010887a0  size=4763  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_010887a0(char *param_1,float *param_2,char *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  char cVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  float *pfVar19;
  float *extraout_ECX;
  char *pcVar20;
  float *extraout_ECX_00;
  int iVar21;
  undefined4 *puVar22;
  float *extraout_ECX_01;
  float *extraout_ECX_02;
  int iVar23;
  float *pfVar24;
  float fVar25;
  float fVar35;
  float fVar36;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar37;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar44;
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  float *pfStack_bc;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_4c;
  char *local_48;
  float local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  float *local_30;
  char local_29;
  float *local_28;
  char local_21;
  float *local_20;
  float *local_1c;
  float *local_18;
  char *local_14;
  
  local_48 = param_1;
  if ((param_3 != (char *)0x0) && (((uint)param_2 & 0xf) != 0)) {
    local_40 = local_40 & 0xffffffff;
    uStack_38._0_4_ = (float *)0x0;
    uStack_38._4_4_ = -0.0;
    if (0 < (int)param_3) {
      FUN_0100a210(&PTR_vftable_018e9b94,(int)&local_40 + 4,((int)param_3 < 0) - 1 & (uint)param_3,
                   0x10);
    }
    uStack_38._0_4_ = (float *)param_3;
    if (0 < (int)param_3) {
      local_48 = param_3;
      pfVar19 = param_2 + 2;
      do {
        fVar36 = *pfVar19;
        fVar49 = pfVar19[1];
        local_48 = local_48 + -1;
        pcVar13 = (char *)((int)pfVar19 + (int)local_40._4_4_ + (-8 - (int)param_2));
        *(undefined8 *)pcVar13 = *(undefined8 *)(pfVar19 + -2);
        *(float *)(pcVar13 + 8) = fVar36;
        *(float *)(pcVar13 + 0xc) = fVar49;
        pfVar19 = pfVar19 + 4;
      } while (local_48 != (char *)0x0);
    }
    uVar12 = FUN_010887a0(local_40._4_4_,param_3,param_4,param_5);
    uVar10 = (uint)uStack_38._4_4_;
    uStack_38 = (ulonglong)(uint)uStack_38._4_4_ << 0x20;
    if (-1 < (int)uVar10) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40._4_4_,uVar10 << 4);
    }
    return uVar12;
  }
  FUN_0107fd00(param_4);
  if ((int)param_3 < 1) {
switchD_01088b85_default:
    if (*(int *)(param_1 + 0x198) != -1) {
      if (param_1[9] != '\0') {
        FUN_01084fc0();
      }
      if (param_1[10] != '\0') {
        FUN_01082990();
      }
    }
    return *(undefined4 *)(param_1 + 0x198);
  }
  if (param_5 == 0) {
    if (param_1[0xc] == '\0') {
      FUN_0107e4b0(param_2,param_3);
    }
    else {
      param_1[0xe0] = '\0';
      param_1[0xe1] = '\0';
      param_1[0xe2] = '\0';
      param_1[0xe3] = '\0';
      param_1[0xe4] = '\0';
      param_1[0xe5] = '\0';
      param_1[0xe6] = '\0';
      param_1[0xe7] = '\0';
      param_1[0xe8] = '\0';
      param_1[0xe9] = '\0';
      param_1[0xea] = '\0';
      param_1[0xeb] = '\0';
      param_1[0xec] = '\0';
      param_1[0xed] = '\0';
      param_1[0xee] = '\0';
      param_1[0xef] = '\0';
      param_1[0xf0] = '\0';
      param_1[0xf1] = '\0';
      param_1[0xf2] = -0x80;
      param_1[0xf3] = '?';
      param_1[0xf4] = '\0';
      param_1[0xf5] = '\0';
      param_1[0xf6] = -0x80;
      param_1[0xf7] = '?';
      param_1[0xf8] = '\0';
      param_1[0xf9] = '\0';
      param_1[0xfa] = -0x80;
      param_1[0xfb] = '?';
      param_1[0xfc] = '\0';
      param_1[0xfd] = '\0';
      param_1[0xfe] = '\0';
      param_1[0xff] = '\0';
      param_1[0x100] = '\0';
      param_1[0x101] = '\0';
      param_1[0x102] = -0x80;
      param_1[0x103] = '?';
      param_1[0x104] = '\0';
      param_1[0x105] = '\0';
      param_1[0x106] = -0x80;
      param_1[0x107] = '?';
      param_1[0x108] = '\0';
      param_1[0x109] = '\0';
      param_1[0x10a] = -0x80;
      param_1[0x10b] = '?';
      param_1[0x10c] = '\0';
      param_1[0x10d] = '\0';
      param_1[0x10e] = '\0';
      param_1[0x10f] = '\0';
    }
  }
  else {
    uVar12 = *(undefined4 *)(param_5 + 0xe4);
    uVar6 = *(undefined4 *)(param_5 + 0xe8);
    uVar7 = *(undefined4 *)(param_5 + 0xec);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_5 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = uVar12;
    *(undefined4 *)(param_1 + 0xe8) = uVar6;
    *(undefined4 *)(param_1 + 0xec) = uVar7;
    uVar12 = *(undefined4 *)(param_5 + 0xf4);
    uVar6 = *(undefined4 *)(param_5 + 0xf8);
    uVar7 = *(undefined4 *)(param_5 + 0xfc);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_5 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = uVar12;
    *(undefined4 *)(param_1 + 0xf8) = uVar6;
    *(undefined4 *)(param_1 + 0xfc) = uVar7;
    uVar12 = *(undefined4 *)(param_5 + 0x104);
    uVar6 = *(undefined4 *)(param_5 + 0x108);
    uVar7 = *(undefined4 *)(param_5 + 0x10c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_5 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = uVar12;
    *(undefined4 *)(param_1 + 0x108) = uVar6;
    *(undefined4 *)(param_1 + 0x10c) = uVar7;
  }
  pcVar13 = param_3 + -1;
  local_21 = '\0';
  if (2 < (int)pcVar13) {
    pcVar13 = (char *)0x3;
  }
  *(char **)(param_1 + 0x198) = pcVar13;
  *(undefined1 (*) [16])(param_1 + 0xc0) = _DAT_01701b10;
  if ((char)param_4 == '\0') {
    pauVar17 = (undefined1 (*) [16])(param_1 + 0xd0);
    *pauVar17 = _DAT_01701b10;
    if (1 < (int)param_3) {
      auVar42._0_4_ = param_2[4] - *param_2;
      auVar42._4_4_ = param_2[5] - param_2[1];
      auVar42._8_4_ = param_2[6] - param_2[2];
      auVar42._12_4_ = param_2[7] - param_2[3];
      *(undefined1 (*) [16])(param_1 + 0xc0) = auVar42;
    }
    if ((int)param_3 < 3) goto LAB_010889c0;
    *(char *)((int)pauVar17 + 0) = '\0';
    *(char *)((int)pauVar17 + 1) = '\0';
    *(char *)((int)pauVar17 + 2) = -0x80;
    *(char *)((int)pauVar17 + 3) = '?';
    param_1[0xd4] = '\0';
    param_1[0xd5] = '\0';
    param_1[0xd6] = '\0';
    param_1[0xd7] = '\0';
    param_1[0xd8] = '\0';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    uVar12 = *(undefined4 *)(param_1 + 0xd4);
    uVar6 = *(undefined4 *)(param_1 + 0xd8);
    uVar2 = *(undefined8 *)param_2;
    *(undefined4 *)*pauVar17 = *(undefined4 *)*pauVar17;
    *(undefined4 *)(param_1 + 0xd4) = uVar12;
    *(undefined4 *)(param_1 + 0xd8) = uVar6;
    *(float *)(param_1 + 0xdc) = 0.0 - (float)uVar2;
    if (param_1[1] == '\0') goto LAB_010889c0;
    FUN_01080340(param_2,param_3,pauVar17);
  }
  else {
    param_1[0x198] = '\x02';
    param_1[0x199] = '\0';
    param_1[0x19a] = '\0';
    param_1[0x19b] = '\0';
  }
  local_21 = '\x01';
LAB_010889c0:
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < (int)param_3) {
    pcVar13 = (char *)((*(uint *)(param_1 + 0x44) & 0x3fffffff) * 2);
    if ((int)pcVar13 <= (int)param_3) {
      pcVar13 = param_3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x3c,pcVar13,0x40);
  }
  pfStack_bc = (float *)(param_3 + -*(int *)(param_1 + 0x40));
  if (0 < (int)pfStack_bc) {
    puVar14 = (undefined4 *)(*(int *)(param_1 + 0x40) * 0x40 + *(int *)(param_1 + 0x3c) + 0x34);
    pfVar19 = pfStack_bc;
    do {
      if (puVar14 != (undefined4 *)0x34) {
        puVar14[-2] = 0;
        *puVar14 = 0xffffffff;
      }
      puVar14 = puVar14 + 0x10;
      pfVar19 = (float *)((int)pfVar19 + -1);
      pfStack_bc = (float *)0x0;
    } while (pfVar19 != (float *)0x0);
  }
  *(char **)(param_1 + 0x40) = param_3;
  local_14 = (char *)0x0;
  if (0 < (int)param_3) {
    local_1c = (float *)0x0;
    pfStack_bc = param_2;
    do {
      uVar2 = *(undefined8 *)pfStack_bc;
      uVar3 = *(undefined8 *)(pfStack_bc + 2);
      local_40._0_4_ = (float)*(undefined8 *)pfStack_bc;
      local_40._4_4_ = (float)((ulonglong)*(undefined8 *)pfStack_bc >> 0x20);
      uStack_38._0_4_ = (float *)*(undefined8 *)(pfStack_bc + 2);
      uStack_38._4_4_ = (float)((ulonglong)*(undefined8 *)(pfStack_bc + 2) >> 0x20);
      local_64 = 0;
      local_5c = 0xffffffff;
      local_40 = CONCAT44((local_40._4_4_ - *(float *)(param_1 + 0xe4)) * *(float *)(param_1 + 0xf4)
                          ,((float)local_40 - *(float *)(param_1 + 0xe0)) *
                           *(float *)(param_1 + 0xf0));
      uStack_38 = CONCAT44((uStack_38._4_4_ - *(float *)(param_1 + 0xec)) *
                           *(float *)(param_1 + 0xfc),
                           ((float)(float *)uStack_38 - *(float *)(param_1 + 0xe8)) *
                           *(float *)(param_1 + 0xf8));
      iVar15 = 0;
      do {
        fVar36 = *(float *)((int)&local_40 + iVar15);
        if (fVar36 <= 8191.0) {
          if (-8192.0 <= fVar36) goto LAB_01088aae;
          fVar36 = -8192.0;
          fVar49 = -0.5;
        }
        else {
          fVar36 = 8191.0;
LAB_01088aae:
          if (0.0 <= fVar36) {
            fVar49 = 0.5;
          }
          else {
            fVar49 = -0.5;
          }
        }
        *(int *)((int)&local_70 + iVar15) = (int)(fVar36 + fVar49);
        iVar15 = iVar15 + 4;
      } while (iVar15 < 0xc);
      iVar15 = *(int *)(param_1 + 0x3c);
      local_80 = (undefined4)uVar2;
      uStack_7c = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_78 = (undefined4)uVar3;
      uStack_74 = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined4 *)((int)local_1c + iVar15 + 0x10) = local_80;
      *(undefined4 *)((int)local_1c + iVar15 + 0x14) = uStack_7c;
      *(undefined4 *)((int)local_1c + iVar15 + 0x18) = uStack_78;
      *(undefined4 *)((int)local_1c + iVar15 + 0x1c) = uStack_74;
      *(int *)((int)local_1c + iVar15 + 0x20) = (int)local_70;
      *(float **)((int)local_1c + iVar15 + 0x24) = local_70._4_4_;
      *(undefined4 *)((int)local_1c + iVar15 + 0x28) = local_68;
      *(undefined4 *)((int)local_1c + iVar15 + 0x30) = local_60;
      pcVar13 = (char *)((int)local_1c + iVar15 + 0x2c);
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13 = (char *)((int)local_1c + iVar15 + 0x34);
      pcVar13[0] = -1;
      pcVar13[1] = -1;
      pcVar13[2] = -1;
      pcVar13[3] = -1;
      if (param_1[8] != '\0') {
        *(uint *)((int)local_1c + *(int *)(param_1 + 0x3c) + 0x1c) = (uint)local_14 | 0x3f000000;
      }
      local_1c = local_1c + 0x10;
      local_14 = local_14 + 1;
      pfStack_bc = pfStack_bc + 4;
      local_28 = pfStack_bc;
    } while ((int)local_14 < (int)param_3);
  }
  if (((char)param_4 == '\0') && (param_1[0xb] != '\0')) {
    local_20 = (float *)((uint)local_20 & 0xffffff00);
    if (1 < *(int *)(param_1 + 0x40)) {
      FUN_0107f790(*(undefined4 *)(param_1 + 0x3c),0,*(int *)(param_1 + 0x40) + -1,local_20);
      pfStack_bc = extraout_ECX;
    }
  }
LAB_01088b72:
  local_29 = '\0';
  switch(*(undefined4 *)(param_1 + 0x198)) {
  case 0:
    iVar23 = FUN_01081fa0();
    iVar15 = *(int *)(param_1 + 0x3c);
    uVar12 = *(undefined4 *)(iVar15 + 0x14);
    uVar6 = *(undefined4 *)(iVar15 + 0x18);
    uVar7 = *(undefined4 *)(iVar15 + 0x1c);
    *(undefined4 *)(iVar23 + 0x10) = *(undefined4 *)(iVar15 + 0x10);
    *(undefined4 *)(iVar23 + 0x14) = uVar12;
    *(undefined4 *)(iVar23 + 0x18) = uVar6;
    *(undefined4 *)(iVar23 + 0x1c) = uVar7;
    *(undefined4 *)(iVar23 + 0x20) = *(undefined4 *)(iVar15 + 0x20);
    *(undefined4 *)(iVar23 + 0x24) = *(undefined4 *)(iVar15 + 0x24);
    *(undefined4 *)(iVar23 + 0x28) = *(undefined4 *)(iVar15 + 0x28);
    *(undefined4 *)(iVar23 + 0x2c) = *(undefined4 *)(iVar15 + 0x2c);
    *(undefined4 *)(iVar23 + 0x30) = *(undefined4 *)(iVar15 + 0x30);
    *(undefined4 *)(iVar23 + 0x34) = *(undefined4 *)(iVar15 + 0x34);
    *(undefined4 *)(iVar23 + 0x30) = 0;
    goto switchD_01088b85_default;
  case 1:
    pcVar13 = (char *)0x0;
    pcVar20 = (char *)0x0;
    local_14 = (char *)0x1;
    if (1 < (int)param_3) {
      fVar36 = *(float *)(param_1 + 0xc0);
      fVar49 = *(float *)(param_1 + 0xc4);
      fVar50 = *(float *)(param_1 + 200);
      local_18 = (float *)0x0;
      local_28 = (float *)0x0;
      local_1c = (float *)&DAT_00000040;
      do {
        iVar15 = *(int *)(param_1 + 0x3c);
        pfVar19 = (float *)(iVar15 + 0x10 + (int)local_1c);
        fVar37 = pfVar19[1] * fVar49 + *pfVar19 * fVar36 + pfVar19[2] * fVar50;
        pfVar19 = (float *)((int)local_28 + iVar15 + 0x10);
        if (fVar37 < pfVar19[1] * fVar49 + *pfVar19 * fVar36 + pfVar19[2] * fVar50) {
          local_28 = local_1c;
          pcVar13 = local_14;
        }
        pfVar19 = (float *)((int)local_18 + iVar15 + 0x10);
        if (pfVar19[1] * fVar49 + *pfVar19 * fVar36 + pfVar19[2] * fVar50 < fVar37) {
          local_18 = local_1c;
          pcVar20 = local_14;
        }
        local_1c = local_1c + 0x10;
        local_14 = local_14 + 1;
      } while ((int)local_14 < (int)param_3);
    }
    iVar15 = *(int *)(param_1 + 0x3c);
    iVar23 = (int)pcVar13 * 0x40;
    uVar2 = *(undefined8 *)(iVar23 + 0x10 + iVar15);
    uVar6 = *(undefined4 *)(iVar23 + 0x28 + iVar15);
    iVar23 = iVar23 + iVar15;
    uVar3 = *(undefined8 *)(iVar23 + 0x18);
    uVar12 = *(undefined4 *)(iVar23 + 0x2c);
    uVar7 = *(undefined4 *)(iVar23 + 0x34);
    uVar4 = *(undefined8 *)(iVar15 + 0x10 + (int)pcVar20 * 0x40);
    iVar15 = iVar15 + (int)pcVar20 * 0x40;
    local_68 = *(undefined4 *)(iVar15 + 0x28);
    local_5c = *(undefined4 *)(iVar15 + 0x34);
    uVar5 = *(undefined8 *)(iVar15 + 0x18);
    local_70 = *(undefined8 *)(iVar15 + 0x20);
    local_64 = *(undefined4 *)(iVar15 + 0x2c);
    local_c0 = (int)*(undefined8 *)(iVar23 + 0x20);
    pfStack_bc = (float *)((ulonglong)*(undefined8 *)(iVar23 + 0x20) >> 0x20);
    if ((local_c0 != (int)local_70) ||
       (local_70._4_4_ = (float *)((ulonglong)local_70 >> 0x20), pfStack_bc != local_70._4_4_)) {
      iVar15 = *(int *)(param_1 + 0x1c);
      if ((iVar15 == 0) || (*(int *)(iVar15 + 0xa00) == 0)) {
        iVar15 = FUN_0107e1b0();
      }
      if (iVar15 == 0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        puVar14 = *(undefined4 **)(iVar15 + 0xa00);
        *(undefined4 *)(iVar15 + 0xa00) = *puVar14;
        puVar14[0x10] = iVar15;
        *(int *)(iVar15 + 0xa0c) = *(int *)(iVar15 + 0xa0c) + 1;
        puVar14[0xb] = 0;
        puVar14[0xd] = 0xffffffff;
        puVar14[1] = 0;
        *puVar14 = *(undefined4 *)(param_1 + 0x20);
        if (*(int *)(param_1 + 0x20) != 0) {
          *(undefined4 **)(*(int *)(param_1 + 0x20) + 4) = puVar14;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(undefined4 **)(param_1 + 0x20) = puVar14;
      }
      iVar15 = *(int *)(param_1 + 0x1c);
      if ((iVar15 == 0) || (*(int *)(iVar15 + 0xa00) == 0)) {
        iVar15 = FUN_0107e1b0();
      }
      if (iVar15 == 0) {
        puVar22 = (undefined4 *)0x0;
      }
      else {
        puVar22 = *(undefined4 **)(iVar15 + 0xa00);
        *(undefined4 *)(iVar15 + 0xa00) = *puVar22;
        puVar22[0x10] = iVar15;
        *(int *)(iVar15 + 0xa0c) = *(int *)(iVar15 + 0xa0c) + 1;
        puVar22[0xb] = 0;
        puVar22[0xd] = 0xffffffff;
        puVar22[1] = 0;
        *puVar22 = *(undefined4 *)(param_1 + 0x20);
        if (*(int *)(param_1 + 0x20) != 0) {
          *(undefined4 **)(*(int *)(param_1 + 0x20) + 4) = puVar22;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(undefined4 **)(param_1 + 0x20) = puVar22;
      }
      local_d0 = (undefined4)uVar2;
      uStack_cc = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_c8 = (undefined4)uVar3;
      uStack_c4 = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar14[4] = local_d0;
      puVar14[5] = uStack_cc;
      puVar14[6] = uStack_c8;
      puVar14[7] = uStack_c4;
      puVar14[9] = pfStack_bc;
      puVar14[8] = local_c0;
      puVar14[10] = uVar6;
      puVar14[0xd] = uVar7;
      puVar14[0xb] = uVar12;
      local_80 = (undefined4)uVar4;
      uStack_7c = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_78 = (undefined4)uVar5;
      uStack_74 = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar14[0xc] = 0;
      puVar22[4] = local_80;
      puVar22[5] = uStack_7c;
      puVar22[6] = uStack_78;
      puVar22[7] = uStack_74;
      puVar22[8] = (int)local_70;
      puVar22[9] = local_70._4_4_;
      puVar22[10] = local_68;
      puVar22[0xb] = local_64;
      puVar22[0xd] = local_5c;
      puVar22[0xc] = 0;
      goto switchD_01088b85_default;
    }
    param_1[0x198] = '\0';
    param_1[0x199] = '\0';
    param_1[0x19a] = '\0';
    param_1[0x19b] = '\0';
    goto LAB_01088b72;
  case 2:
    break;
  case 3:
    cVar11 = FUN_01086bc0();
    if (cVar11 != '\0') goto switchD_01088b85_default;
    if (*param_1 == '\0') {
      param_1[0x198] = -1;
      param_1[0x199] = -1;
      param_1[0x19a] = -1;
      param_1[0x19b] = -1;
      goto switchD_01088b85_default;
    }
    param_1[0x198] = '\x02';
    param_1[0x199] = '\0';
    param_1[0x19a] = '\0';
    param_1[0x19b] = '\0';
    pfStack_bc = extraout_ECX_02;
    goto LAB_01088b72;
  default:
    goto switchD_01088b85_default;
  }
  if (local_21 == '\0') {
    FUN_01080340(param_2,param_3,param_1 + 0xd0);
    local_21 = '\x01';
    pfStack_bc = extraout_ECX_00;
  }
  auVar42 = *(undefined1 (*) [16])(param_1 + 0xd0);
  fVar36 = ABS(auVar42._8_4_);
  auVar40._0_8_ = auVar42._0_8_ & 0x7fffffff7fffffff;
  auVar40._8_4_ = fVar36;
  auVar40._12_4_ = 0xff7fffee;
  auVar26._0_8_ = CONCAT44(0xff7fffee,auVar42._8_4_) & 0xffffffff7fffffff;
  auVar26._8_4_ = ABS(auVar42._0_4_);
  auVar26._12_4_ = ABS(auVar42._4_4_);
  auVar26 = maxps(auVar26,auVar40);
  auVar27._4_4_ = auVar26._0_4_;
  auVar27._0_4_ = auVar26._4_4_;
  auVar27._8_4_ = auVar26._12_4_;
  auVar27._12_4_ = auVar26._8_4_;
  auVar27 = maxps(auVar26,auVar27);
  auVar28._4_4_ = -(uint)(auVar27._4_4_ <= ABS(auVar42._4_4_));
  auVar28._0_4_ = -(uint)(auVar27._0_4_ <= ABS(auVar42._0_4_));
  auVar28._8_4_ = -(uint)(auVar27._8_4_ <= fVar36);
  auVar28._12_4_ = -(uint)(auVar27._12_4_ <= -3.40282e+38);
  iVar15 = movmskps(pfStack_bc,auVar28);
  iVar23 = 0;
  local_40 = local_40 & 0xffffffff;
  uStack_38._0_4_ = (float *)0x0;
  uStack_38._4_4_ = -0.0;
  if ((&DAT_0182bb90)[iVar15] == '\0') {
    if (0 < (int)*(float **)(param_1 + 0x40)) {
      iVar15 = 0;
      local_18 = *(float **)(param_1 + 0x40);
      do {
        local_20 = *(float **)(*(int *)(param_1 + 0x3c) + 0x20 + iVar15);
        iVar16 = *(int *)(param_1 + 0x3c) + iVar15;
        *(undefined4 *)(iVar16 + 0x20) = *(undefined4 *)(iVar16 + 0x28);
        iVar15 = iVar15 + 0x40;
        local_18 = (float *)((int)local_18 + -1);
        *(float **)(iVar16 + 0x28) = local_20;
      } while (local_18 != (float *)0x0);
    }
  }
  else if (((&DAT_0182bb90)[iVar15] == '\x01') && (0 < *(int *)(param_1 + 0x40))) {
    iVar15 = 0;
    local_18 = (float *)*(int *)(param_1 + 0x40);
    do {
      iVar16 = iVar15 + *(int *)(param_1 + 0x3c);
      local_20 = *(float **)(iVar16 + 0x24);
      *(undefined4 *)(iVar16 + 0x24) = *(undefined4 *)(iVar16 + 0x28);
      iVar15 = iVar15 + 0x40;
      local_18 = (float *)((int)local_18 + -1);
      *(float **)(iVar16 + 0x28) = local_20;
    } while (local_18 != (float *)0x0);
    local_18 = (float *)0x0;
  }
  local_4c = local_4c & 0xffffff00;
  if (1 < *(int *)(param_1 + 0x40)) {
    FUN_0107f790(*(undefined4 *)(param_1 + 0x3c),0,*(int *)(param_1 + 0x40) + -1,local_4c);
  }
  iVar15 = (int)param_3 * 2;
  if ((int)((uint)uStack_38._4_4_ & 0x3fffffff) < iVar15) {
    iVar16 = ((uint)uStack_38._4_4_ & 0x3fffffff) * 2;
    if (iVar15 < iVar16) {
      iVar15 = iVar16;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int)&local_40 + 4,iVar15,0x40);
  }
  iVar15 = (int)param_3 * 2 - (int)(float *)uStack_38;
  if (0 < iVar15) {
    puVar14 = (undefined4 *)((int)(float *)uStack_38 * 0x40 + (int)local_40._4_4_ + 0x34);
    do {
      if (puVar14 != (undefined4 *)0x34) {
        puVar14[-2] = 0;
        *puVar14 = 0xffffffff;
      }
      puVar14 = puVar14 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  uStack_38._0_4_ = (float *)((int)param_3 * 2);
  pcVar13 = param_3;
  if (0 < (int)param_3) {
    local_14 = (char *)0x0;
    local_28 = (float *)param_3;
    do {
      if (1 < iVar23) {
        piVar1 = (int *)(param_1 + 0x3c);
        local_20 = *(float **)(local_14 + *piVar1 + 0x20);
        local_18 = (float *)(iVar23 * 0x40 + -0x5c + (int)local_40._4_4_);
        do {
          local_44 = *local_18;
          param_1 = local_48;
          if (0 < ((int)local_18[0xf] - (int)local_18[-1]) *
                  (*(int *)(local_14 + *piVar1 + 0x24) - (int)local_44) -
                  ((int)local_18[0x10] - (int)local_44) * ((int)local_20 - (int)local_18[-1]))
          break;
          iVar23 = iVar23 + -1;
          local_18 = local_18 + -0x10;
        } while (1 < iVar23);
      }
      iVar15 = *(int *)(param_1 + 0x3c);
      pcVar20 = local_14 + 0x40;
      iVar16 = iVar23 * 0x40 + (int)local_40._4_4_;
      iVar23 = iVar23 + 1;
      local_28 = (float *)((int)local_28 + -1);
      *(undefined1 (*) [16])(iVar16 + 0x10) = *(undefined1 (*) [16])(local_14 + iVar15 + 0x10);
      *(undefined4 *)(iVar16 + 0x20) = *(undefined4 *)(local_14 + iVar15 + 0x20);
      *(undefined4 *)(iVar16 + 0x24) = *(undefined4 *)(local_14 + iVar15 + 0x24);
      *(undefined4 *)(iVar16 + 0x28) = *(undefined4 *)(local_14 + iVar15 + 0x28);
      *(undefined4 *)(iVar16 + 0x2c) = *(undefined4 *)(local_14 + iVar15 + 0x2c);
      *(undefined4 *)(iVar16 + 0x30) = *(undefined4 *)(local_14 + iVar15 + 0x30);
      pcVar13 = *(char **)(local_14 + iVar15 + 0x34);
      *(char **)(iVar16 + 0x34) = pcVar13;
      local_14 = pcVar20;
    } while (local_28 != (float *)0x0);
  }
  local_1c = (float *)(param_3 + -2);
  local_28 = (float *)(iVar23 + 1);
  if (-1 < (int)local_1c) {
    pcVar13 = (char *)((int)local_1c * 0x40);
    do {
      if ((int)local_28 <= iVar23) {
        local_20 = *(float **)(pcVar13 + *(int *)(param_1 + 0x3c) + 0x24);
        local_44 = *(float *)(pcVar13 + *(int *)(param_1 + 0x3c) + 0x20);
        local_18 = (float *)(iVar23 * 0x40 + -0x5c + (int)local_40._4_4_);
        do {
          local_30 = (float *)*local_18;
          param_1 = local_48;
          if (0 < ((int)local_18[0xf] - (int)local_18[-1]) * ((int)local_20 - (int)local_30) -
                  ((int)local_18[0x10] - (int)local_30) * ((int)local_44 - (int)local_18[-1]))
          break;
          iVar23 = iVar23 + -1;
          local_18 = local_18 + -0x10;
        } while ((int)local_28 <= iVar23);
      }
      iVar15 = *(int *)(param_1 + 0x3c);
      iVar16 = iVar23 * 0x40 + (int)local_40._4_4_;
      iVar23 = iVar23 + 1;
      *(undefined1 (*) [16])(iVar16 + 0x10) = *(undefined1 (*) [16])(pcVar13 + iVar15 + 0x10);
      *(undefined4 *)(iVar16 + 0x20) = *(undefined4 *)(pcVar13 + iVar15 + 0x20);
      *(undefined4 *)(iVar16 + 0x24) = *(undefined4 *)(pcVar13 + iVar15 + 0x24);
      *(undefined4 *)(iVar16 + 0x28) = *(undefined4 *)(pcVar13 + iVar15 + 0x28);
      *(undefined4 *)(iVar16 + 0x2c) = *(undefined4 *)(pcVar13 + iVar15 + 0x2c);
      *(undefined4 *)(iVar16 + 0x30) = *(undefined4 *)(pcVar13 + iVar15 + 0x30);
      *(undefined4 *)(iVar16 + 0x34) = *(undefined4 *)(pcVar13 + iVar15 + 0x34);
      local_1c = (float *)((int)local_1c + -1);
      pcVar13 = pcVar13 + -0x40;
      local_14 = pcVar13;
    } while (-1 < (int)local_1c);
  }
  if (iVar23 < 4) {
    auVar42 = *(undefined1 (*) [16])(param_1 + 0xd0);
    fVar36 = ABS(auVar42._8_4_);
    auVar43._0_8_ = auVar42._0_8_ & 0x7fffffff7fffffff;
    auVar43._8_4_ = fVar36;
    auVar43._12_4_ = 0xff7fffee;
    auVar33._0_8_ = CONCAT44(0xff7fffee,auVar42._8_4_) & 0xffffffff7fffffff;
    auVar33._8_4_ = ABS(auVar42._0_4_);
    auVar33._12_4_ = ABS(auVar42._4_4_);
    auVar27 = maxps(auVar33,auVar43);
    auVar9._4_4_ = auVar27._0_4_;
    auVar9._0_4_ = auVar27._4_4_;
    auVar9._8_4_ = auVar27._12_4_;
    auVar9._12_4_ = auVar27._8_4_;
    auVar27 = maxps(auVar27,auVar9);
    auVar34._4_4_ = -(uint)(auVar27._4_4_ <= ABS(auVar42._4_4_));
    auVar34._0_4_ = -(uint)(auVar27._0_4_ <= ABS(auVar42._0_4_));
    auVar34._8_4_ = -(uint)(auVar27._8_4_ <= fVar36);
    auVar34._12_4_ = -(uint)(auVar27._12_4_ <= -3.40282e+38);
    pfStack_bc = (float *)movmskps(pcVar13,auVar34);
    if (*(char *)(pfStack_bc + 0x60aee4) == '\0') {
      if (0 < (int)*(float **)(param_1 + 0x40)) {
        pfVar19 = (float *)0x0;
        local_20 = *(float **)(param_1 + 0x40);
        do {
          iVar15 = *(int *)(param_1 + 0x3c);
          uVar12 = *(undefined4 *)(iVar15 + 0x20 + (int)pfVar19);
          pfStack_bc = pfVar19 + 0x10;
          local_20 = (float *)((int)local_20 + -1);
          *(undefined4 *)((int)pfVar19 + iVar15 + 0x20) =
               *(undefined4 *)(iVar15 + 0x28 + (int)pfVar19);
          *(undefined4 *)((int)pfVar19 + iVar15 + 0x28) = uVar12;
          pfVar19 = pfStack_bc;
        } while (local_20 != (float *)0x0);
      }
    }
    else if ((*(char *)(pfStack_bc + 0x60aee4) == '\x01') && (0 < *(int *)(param_1 + 0x40))) {
      pfVar19 = (float *)0x0;
      local_20 = (float *)*(int *)(param_1 + 0x40);
      do {
        iVar15 = *(int *)(param_1 + 0x3c);
        uVar12 = *(undefined4 *)((int)pfVar19 + iVar15 + 0x24);
        pfStack_bc = pfVar19 + 0x10;
        local_20 = (float *)((int)local_20 + -1);
        *(undefined4 *)((int)pfVar19 + iVar15 + 0x24) =
             *(undefined4 *)((int)pfVar19 + iVar15 + 0x28);
        *(undefined4 *)((int)pfVar19 + iVar15 + 0x28) = uVar12;
        pfVar19 = pfStack_bc;
      } while (local_20 != (float *)0x0);
      local_20 = (float *)0x0;
    }
    param_1[0x198] = '\x01';
    param_1[0x199] = '\0';
    param_1[0x19a] = '\0';
    param_1[0x19b] = '\0';
    local_29 = '\x01';
  }
  else {
    FUN_0107be30((int)&local_40 + 4);
    pfVar19 = (float *)(iVar23 + -1);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < (int)pfVar19) {
      pfVar24 = (float *)((*(uint *)(param_1 + 0x44) & 0x3fffffff) * 2);
      if ((int)pfVar24 <= (int)pfVar19) {
        pfVar24 = pfVar19;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x3c,pfVar24,0x40);
    }
    iVar15 = (int)pfVar19 - *(int *)(param_1 + 0x40);
    puVar14 = (undefined4 *)(*(int *)(param_1 + 0x40) * 0x40 + *(int *)(param_1 + 0x3c));
    if (0 < iVar15) {
      puVar14 = puVar14 + 0xd;
      do {
        if (puVar14 != (undefined4 *)0x34) {
          puVar14[-2] = 0;
          *puVar14 = 0xffffffff;
        }
        puVar14 = puVar14 + 0x10;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    fVar36 = 0.0;
    fVar49 = 0.0;
    fVar50 = 0.0;
    *(float **)(param_1 + 0x40) = pfVar19;
    auVar42 = *(undefined1 (*) [16])(param_1 + 0xd0);
    fVar37 = ABS(auVar42._8_4_);
    auVar41._0_8_ = auVar42._0_8_ & 0x7fffffff7fffffff;
    auVar41._8_4_ = fVar37;
    auVar41._12_4_ = 0xff7fffee;
    auVar29._0_8_ = CONCAT44(0xff7fffee,auVar42._8_4_) & 0xffffffff7fffffff;
    auVar29._8_4_ = ABS(auVar42._0_4_);
    auVar29._12_4_ = ABS(auVar42._4_4_);
    auVar27 = maxps(auVar29,auVar41);
    auVar8._4_4_ = auVar27._0_4_;
    auVar8._0_4_ = auVar27._4_4_;
    auVar8._8_4_ = auVar27._12_4_;
    auVar8._12_4_ = auVar27._8_4_;
    auVar27 = maxps(auVar27,auVar8);
    auVar30._4_4_ = -(uint)(auVar27._4_4_ <= ABS(auVar42._4_4_));
    auVar30._0_4_ = -(uint)(auVar27._0_4_ <= ABS(auVar42._0_4_));
    auVar30._8_4_ = -(uint)(auVar27._8_4_ <= fVar37);
    auVar30._12_4_ = -(uint)(auVar27._12_4_ <= -3.40282e+38);
    iVar15 = movmskps(puVar14,auVar30);
    if ((&DAT_0182bb90)[iVar15] == '\0') {
      if (0 < (int)pfVar19) {
        iVar15 = 0;
        local_18 = pfVar19;
        do {
          iVar23 = *(int *)(param_1 + 0x3c);
          puVar14 = (undefined4 *)(iVar23 + 0x28 + iVar15);
          uVar12 = *(undefined4 *)(iVar23 + 0x20 + iVar15);
          iVar23 = iVar23 + iVar15;
          iVar15 = iVar15 + 0x40;
          local_18 = (float *)((int)local_18 + -1);
          *(undefined4 *)(iVar23 + 0x20) = *puVar14;
          *(undefined4 *)(iVar23 + 0x28) = uVar12;
        } while (local_18 != (float *)0x0);
      }
    }
    else if (((&DAT_0182bb90)[iVar15] == '\x01') && (0 < (int)pfVar19)) {
      iVar15 = 0;
      local_18 = pfVar19;
      do {
        iVar16 = iVar15 + 0x28;
        iVar23 = iVar15 + *(int *)(param_1 + 0x3c);
        uVar12 = *(undefined4 *)(iVar23 + 0x24);
        iVar15 = iVar15 + 0x40;
        local_18 = (float *)((int)local_18 + -1);
        *(undefined4 *)(iVar23 + 0x24) = *(undefined4 *)(iVar16 + *(int *)(param_1 + 0x3c));
        *(undefined4 *)(iVar23 + 0x28) = uVar12;
      } while (local_18 != (float *)0x0);
      local_18 = (float *)0x0;
    }
    iVar15 = *(int *)(param_1 + 0x40);
    auVar31._0_4_ = (float)iVar15;
    auVar31._4_4_ = auVar31._0_4_;
    auVar31._8_4_ = auVar31._0_4_;
    auVar31._12_4_ = auVar31._0_4_;
    fVar37 = fVar36;
    fVar47 = fVar49;
    fVar48 = fVar50;
    if (0 < iVar15) {
      pfVar19 = (float *)(*(int *)(param_1 + 0x3c) + 0x10);
      iVar23 = iVar15;
      do {
        fVar37 = fVar37 + *pfVar19;
        fVar47 = fVar47 + pfVar19[1];
        fVar48 = fVar48 + pfVar19[2];
        pfVar19 = pfVar19 + 0x10;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    auVar42 = rcpps(auVar41,auVar31);
    fVar37 = (2.0 - auVar42._0_4_ * auVar31._0_4_) * auVar42._0_4_ * fVar37;
    fVar47 = (2.0 - auVar42._4_4_ * auVar31._0_4_) * auVar42._4_4_ * fVar47;
    fVar48 = (2.0 - auVar42._8_4_ * auVar31._0_4_) * auVar42._8_4_ * fVar48;
    iVar23 = iVar15 + -1;
    if (0 < iVar15) {
      iVar16 = 0;
      iVar21 = iVar23 * 0x40;
      do {
        iVar23 = iVar16;
        pfVar19 = (float *)(iVar21 + 0x10 + *(int *)(param_1 + 0x3c));
        pfVar24 = (float *)(*(int *)(param_1 + 0x3c) + 0x10 + iVar23);
        fVar39 = *pfVar19 - fVar37;
        fVar44 = pfVar19[1] - fVar47;
        fVar45 = pfVar19[2] - fVar48;
        fVar25 = *pfVar24 - fVar37;
        fVar35 = pfVar24[1] - fVar47;
        fVar38 = pfVar24[2] - fVar48;
        fVar46 = fVar44 * fVar38 - fVar45 * fVar35;
        fVar38 = fVar45 * fVar25 - fVar39 * fVar38;
        fVar25 = fVar39 * fVar35 - fVar44 * fVar25;
        if (fVar49 * fVar49 + fVar36 * fVar36 + fVar50 * fVar50 <
            fVar38 * fVar38 + fVar46 * fVar46 + fVar25 * fVar25) {
          fVar36 = fVar46;
          fVar49 = fVar38;
          fVar50 = fVar25;
        }
        iVar15 = iVar15 + -1;
        iVar16 = iVar23 + 0x40;
        iVar21 = iVar23;
      } while (iVar15 != 0);
    }
    fVar36 = fVar36 * *(float *)(param_1 + 0xd0);
    fVar49 = fVar49 * *(float *)(param_1 + 0xd4);
    fVar50 = fVar50 * *(float *)(param_1 + 0xd8);
    auVar32._0_4_ = fVar49 + fVar36 + fVar50;
    auVar32._4_4_ = fVar49 + fVar36 + fVar50;
    auVar32._8_4_ = fVar49 + fVar36 + fVar50;
    auVar32._12_4_ = fVar49 + fVar36 + fVar50;
    iVar15 = movmskps(iVar23,auVar32);
    pfStack_bc = (float *)0x0;
    if (iVar15 != 0) {
      local_20 = *(float **)(param_1 + 0x40);
      local_1c = (float *)uStack_38;
      if ((int)local_20 <= (int)(float *)uStack_38) {
        local_1c = local_20;
      }
      if ((int)((uint)uStack_38._4_4_ & 0x3fffffff) < (int)local_20) {
        pfVar19 = (float *)(((uint)uStack_38._4_4_ & 0x3fffffff) * 2);
        pfVar24 = local_20;
        if ((int)local_20 < (int)pfVar19) {
          pfVar24 = pfVar19;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,(int)&local_40 + 4,pfVar24,0x40);
      }
      iVar15 = *(int *)(param_1 + 0x3c);
      local_44 = local_40._4_4_;
      local_14 = (char *)0x0;
      if (3 < (int)local_1c) {
        puVar14 = (undefined4 *)(iVar15 + 0x60);
        puVar22 = (undefined4 *)((int)local_40._4_4_ + 0x60);
        iVar23 = ((uint)(local_1c + -1) >> 2) + 1;
        local_14 = (char *)(iVar23 * 4);
        do {
          uVar12 = puVar14[-0x13];
          uVar6 = puVar14[-0x12];
          uVar7 = puVar14[-0x11];
          puVar22[-0x14] = puVar14[-0x14];
          puVar22[-0x13] = uVar12;
          puVar22[-0x12] = uVar6;
          puVar22[-0x11] = uVar7;
          puVar22[-0x10] = puVar14[-0x10];
          puVar22[-0xf] = puVar14[-0xf];
          puVar22[-0xe] = puVar14[-0xe];
          puVar22[-0xd] = puVar14[-0xd];
          puVar22[-0xc] = puVar14[-0xc];
          puVar22[-0xb] = puVar14[-0xb];
          uVar12 = puVar14[-3];
          uVar6 = puVar14[-2];
          uVar7 = puVar14[-1];
          puVar22[-4] = puVar14[-4];
          puVar22[-3] = uVar12;
          puVar22[-2] = uVar6;
          puVar22[-1] = uVar7;
          *puVar22 = *puVar14;
          puVar22[1] = puVar14[1];
          puVar22[2] = puVar14[2];
          puVar22[3] = puVar14[3];
          puVar22[4] = puVar14[4];
          puVar22[5] = puVar14[5];
          uVar12 = puVar14[0xd];
          uVar6 = puVar14[0xe];
          uVar7 = puVar14[0xf];
          puVar22[0xc] = puVar14[0xc];
          puVar22[0xd] = uVar12;
          puVar22[0xe] = uVar6;
          puVar22[0xf] = uVar7;
          puVar22[0x10] = puVar14[0x10];
          puVar22[0x11] = puVar14[0x11];
          puVar22[0x12] = puVar14[0x12];
          puVar22[0x13] = puVar14[0x13];
          puVar22[0x14] = puVar14[0x14];
          puVar22[0x15] = puVar14[0x15];
          *(undefined1 (*) [16])(puVar22 + 0x1c) = *(undefined1 (*) [16])(puVar14 + 0x1c);
          puVar22[0x20] = puVar14[0x20];
          puVar22[0x21] = puVar14[0x21];
          puVar22[0x22] = puVar14[0x22];
          puVar22[0x23] = puVar14[0x23];
          puVar22[0x24] = puVar14[0x24];
          puVar22[0x25] = puVar14[0x25];
          puVar14 = puVar14 + 0x40;
          puVar22 = puVar22 + 0x40;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      if ((int)local_14 < (int)local_1c) {
        puVar14 = (undefined4 *)((int)local_14 * 0x40 + 0x24 + iVar15);
        iVar23 = (int)local_1c - (int)local_14;
        pauVar17 = (undefined1 (*) [16])((int)local_14 * 0x40 + 0x10 + (int)local_40._4_4_);
        do {
          *pauVar17 = *(undefined1 (*) [16])((iVar15 - (int)local_40._4_4_) + (int)pauVar17);
          *(undefined4 *)pauVar17[1] = puVar14[-1];
          *(undefined4 *)(pauVar17[1] + 4) = *puVar14;
          *(undefined4 *)(pauVar17[1] + 8) = puVar14[1];
          *(undefined4 *)(pauVar17[1] + 0xc) = puVar14[2];
          *(undefined4 *)pauVar17[2] = puVar14[3];
          *(undefined4 *)(pauVar17[2] + 4) = puVar14[4];
          puVar14 = puVar14 + 0x10;
          pauVar17 = pauVar17 + 4;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      pfVar19 = (float *)(*(int *)(param_1 + 0x3c) + (int)local_1c * 0x40);
      local_28 = (float *)((int)local_1c * 0x40 + (int)local_40._4_4_);
      pfVar24 = (float *)((int)local_20 - (int)local_1c);
      local_14 = (char *)0x0;
      if (3 < (int)pfVar24) {
        local_1c = pfVar19 + 0x1b;
        local_44 = (float)((int)pfVar19 - (int)local_28);
        pfVar18 = local_28 + 0x14;
        local_18 = (float *)(((uint)(pfVar24 + -1) >> 2) + 1);
        local_14 = (char *)((int)local_18 * 4);
        do {
          if (pfVar18 != (float *)0x50) {
            *(undefined8 *)(pfVar18 + -0x10) = *(undefined8 *)(local_1c + -0x17);
            *(undefined8 *)(pfVar18 + -0xe) = *(undefined8 *)(local_1c + -0x15);
            *(undefined8 *)(pfVar18 + -0xc) = *(undefined8 *)(local_1c + -0x13);
            pfVar18[-10] = local_1c[-0x11];
            pfVar18[-9] = local_1c[-0x10];
            pfVar18[-8] = local_1c[-0xf];
            pfVar18[-7] = local_1c[-0xe];
          }
          if (pfVar18 != (float *)0x10) {
            *(undefined8 *)pfVar18 = *(undefined8 *)((int)local_44 + (int)pfVar18);
            *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)((int)local_44 + 8 + (int)pfVar18);
            *(undefined8 *)(pfVar18 + 4) = *(undefined8 *)(local_1c + -3);
            pfVar18[6] = local_1c[-1];
            pfVar18[7] = *local_1c;
            pfVar18[8] = local_1c[1];
            pfVar18[9] = local_1c[2];
          }
          if (pfVar18 != (float *)0xffffffd0) {
            *(undefined8 *)(pfVar18 + 0x10) = *(undefined8 *)(local_1c + 9);
            *(undefined8 *)(pfVar18 + 0x12) = *(undefined8 *)(local_1c + 0xb);
            *(undefined8 *)(pfVar18 + 0x14) = *(undefined8 *)(local_1c + 0xd);
            pfVar18[0x16] = local_1c[0xf];
            pfVar18[0x17] = local_1c[0x10];
            pfVar18[0x18] = local_1c[0x11];
            pfVar18[0x19] = local_1c[0x12];
          }
          if (pfVar18 != (float *)0xffffff90) {
            *(undefined8 *)(pfVar18 + 0x20) = *(undefined8 *)(local_1c + 0x19);
            *(undefined8 *)(pfVar18 + 0x22) = *(undefined8 *)(local_1c + 0x1b);
            *(undefined8 *)(pfVar18 + 0x24) = *(undefined8 *)(local_1c + 0x1d);
            pfVar18[0x26] = local_1c[0x1f];
            pfVar18[0x27] = local_1c[0x20];
            pfVar18[0x28] = local_1c[0x21];
            pfVar18[0x29] = local_1c[0x22];
          }
          pfVar18 = pfVar18 + 0x40;
          local_1c = local_1c + 0x40;
          local_18 = (float *)((int)local_18 + -1);
        } while (local_18 != (float *)0x0);
      }
      pfStack_bc = local_1c;
      local_30 = pfVar24;
      if ((int)local_14 < (int)pfVar24) {
        local_30 = pfVar19 + (int)local_14 * 0x10 + 0xb;
        local_18 = (float *)((int)pfVar24 - (int)local_14);
        pfVar24 = local_28 + (int)local_14 * 0x10 + 4;
        pfStack_bc = local_30;
        do {
          if (pfVar24 != (float *)0x10) {
            *(undefined8 *)pfVar24 = *(undefined8 *)(((int)pfVar19 - (int)local_28) + (int)pfVar24);
            *(undefined8 *)(pfVar24 + 2) =
                 *(undefined8 *)(((int)pfVar19 - (int)local_28) + 8 + (int)pfVar24);
            *(undefined8 *)(pfVar24 + 4) = *(undefined8 *)(pfStack_bc + -3);
            pfVar24[6] = pfStack_bc[-1];
            pfVar24[7] = *pfStack_bc;
            pfVar24[8] = pfStack_bc[1];
            pfVar24[9] = pfStack_bc[2];
          }
          pfVar24 = pfVar24 + 0x10;
          pfStack_bc = pfStack_bc + 0x10;
          local_18 = (float *)((int)local_18 + -1);
        } while (local_18 != (float *)0x0);
      }
      iVar15 = 0;
      uStack_38._0_4_ = local_20;
      local_1c = pfVar19;
      if (0 < (int)local_20) {
        local_14 = (char *)0x0;
        do {
          pfStack_bc = (float *)(local_14 + *(int *)(param_1 + 0x3c));
          local_14 = local_14 + 0x40;
          iVar23 = (int)((int)local_20 + (-1 - iVar15)) * 0x40 + (int)local_40._4_4_;
          iVar15 = iVar15 + 1;
          *(undefined1 (*) [16])(pfStack_bc + 4) = *(undefined1 (*) [16])(iVar23 + 0x10);
          pfStack_bc[8] = *(float *)(iVar23 + 0x20);
          pfStack_bc[9] = *(float *)(iVar23 + 0x24);
          pfStack_bc[10] = *(float *)(iVar23 + 0x28);
          pfStack_bc[0xb] = *(float *)(iVar23 + 0x2c);
          pfStack_bc[0xc] = *(float *)(iVar23 + 0x30);
          pfStack_bc[0xd] = *(float *)(iVar23 + 0x34);
        } while (iVar15 < (int)local_20);
      }
    }
    local_18 = (float *)0x0;
    if (0 < *(int *)(param_1 + 0x40)) {
      local_14 = (char *)0x0;
      do {
        fVar36 = *(float *)(param_1 + 0x1c);
        if ((fVar36 == 0.0) || (*(int *)((int)fVar36 + 0xa00) == 0)) {
          local_20 = (float *)0x0;
          fVar36 = (float)(**(code **)(PTR_vftable_018e9b94 + 4))(0xa10);
          if (fVar36 != 0.0) {
            iVar15 = 0x1f;
            pfVar19 = (float *)((int)fVar36 + 0x9b0);
            do {
              local_30 = pfVar19;
              *local_30 = (float)local_20;
              iVar15 = iVar15 + -1;
              pfVar19 = local_30 + -0x14;
              local_20 = local_30;
            } while (-1 < iVar15);
            *(float **)((int)fVar36 + 0xa00) = local_30;
            *(undefined4 *)((int)fVar36 + 0xa0c) = 0;
            *(undefined4 *)((int)fVar36 + 0xa04) = 0;
            *(undefined4 *)((int)fVar36 + 0xa08) = *(undefined4 *)(param_1 + 0x1c);
            *(float *)(param_1 + 0x1c) = fVar36;
            if (*(int *)((int)fVar36 + 0xa08) != 0) {
              *(float *)(*(int *)((int)fVar36 + 0xa08) + 0xa04) = fVar36;
            }
          }
        }
        if (fVar36 == 0.0) {
          pfStack_bc = (float *)0x0;
        }
        else {
          pfStack_bc = *(float **)((int)fVar36 + 0xa00);
          *(float *)((int)fVar36 + 0xa00) = *pfStack_bc;
          pfStack_bc[0x10] = fVar36;
          *(int *)((int)fVar36 + 0xa0c) = *(int *)((int)fVar36 + 0xa0c) + 1;
          pfStack_bc[0xb] = 0.0;
          pfStack_bc[0xd] = -NAN;
          pfStack_bc[1] = 0.0;
          *pfStack_bc = *(float *)(param_1 + 0x20);
          if (*(int *)(param_1 + 0x20) != 0) {
            *(float **)(*(int *)(param_1 + 0x20) + 4) = pfStack_bc;
          }
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          *(float **)(param_1 + 0x20) = pfStack_bc;
        }
        iVar15 = *(int *)(param_1 + 0x3c);
        pcVar13 = local_14 + 0x40;
        *(undefined1 (*) [16])(pfStack_bc + 4) = *(undefined1 (*) [16])(local_14 + iVar15 + 0x10);
        pfStack_bc[8] = *(float *)(local_14 + iVar15 + 0x20);
        pfStack_bc[9] = *(float *)(local_14 + iVar15 + 0x24);
        pfStack_bc[10] = *(float *)(local_14 + iVar15 + 0x28);
        pfStack_bc[0xb] = *(float *)(local_14 + iVar15 + 0x2c);
        pfStack_bc[0xc] = *(float *)(local_14 + iVar15 + 0x30);
        pfStack_bc[0xd] = *(float *)(local_14 + iVar15 + 0x34);
        local_18 = (float *)((int)local_18 + 1);
        pfStack_bc[0xc] = 0.0;
        local_14 = pcVar13;
      } while ((int)local_18 < *(int *)(param_1 + 0x40));
    }
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
  }
  uVar10 = (uint)uStack_38._4_4_;
  uStack_38 = (ulonglong)(uint)uStack_38._4_4_ << 0x20;
  if (-1 < (int)uVar10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40._4_4_,uVar10 << 6);
    pfStack_bc = extraout_ECX_01;
  }
  local_40 = local_40 & 0xffffffff;
  uStack_38 = CONCAT44(0x80000000,(float *)uStack_38);
  if (local_29 == '\0') goto switchD_01088b85_default;
  goto LAB_01088b72;
}

// 01089A70  FUN_01089a70  size=1462  [__FILE__]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_01089a70(int param_1,undefined1 (*param_2) [16],float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int extraout_ECX;
  int iVar12;
  int extraout_ECX_00;
  int iVar13;
  float10 fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  char *pcVar43;
  undefined1 local_2c0 [512];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [8];
  float fStack_88;
  float fStack_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [8];
  undefined8 uStack_58;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar11 = param_1;
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_2c0,0x200);
    uVar42 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar43 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar42);
    FUN_01018d00(pcVar43);
    iVar11 = (**(code **)(*DAT_01f8fc58 + 0xc))
                       (3,0x79f9d886,local_2c0,
                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                        ,0x167);
    if (iVar11 != 0) {
      pcVar3 = (code *)swi(3);
      fVar14 = (float10)(*pcVar3)();
      return fVar14;
    }
    hkBaseObject::hkBaseObject_38();
    iVar11 = extraout_ECX;
  }
  fVar20 = 3.40282e+38;
  fVar26 = 3.40282e+38;
  _local_a0 = _DAT_01701b10;
  _local_90 = _DAT_01701b10;
  local_1c = 3.40282e+38;
  local_18 = 3.40282e+38;
  local_30 = 3.40282e+38;
  local_2c = 3.40282e+38;
  local_14 = 3.40282e+38;
  if (*(int *)(param_1 + 0x198) == 3) {
    FUN_01084f30(*(undefined4 *)(param_1 + 0x30),0);
    uVar15 = (uint)&local_28 & -(uint)(local_28 != 0);
    fVar20 = local_b0;
    fVar24 = fStack_ac;
    fVar28 = fStack_a8;
    fVar29 = fStack_a4;
    while (fVar26 = local_18, fVar27 = local_1c, uVar15 != 0) {
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
      iVar11 = *(int *)(local_28 + 0x38);
      iVar13 = *(int *)((*(uint *)(local_28 + 0x14 + (int)local_24 * 4) & 0xfffffffc) + 0x38);
      if (iVar11 != iVar13) {
        iVar12 = *(int *)(param_1 + 0x48);
        pfVar1 = (float *)(iVar12 + iVar13 * 0x10);
        fVar26 = *pfVar1;
        fVar27 = pfVar1[1];
        fVar30 = pfVar1[2];
        auVar39 = *param_2;
        fStack_ac = auVar39._0_4_;
        fStack_a8 = auVar39._4_4_;
        local_b0 = auVar39._8_4_;
        fStack_a4 = auVar39._12_4_;
        pfVar2 = (float *)(iVar12 + iVar11 * 0x10);
        fVar31 = *pfVar2;
        fVar32 = pfVar2[1];
        fVar33 = pfVar2[2];
        fVar34 = fVar31 * fStack_ac;
        fVar36 = fVar32 * fStack_a8;
        fVar37 = fVar33 * local_b0;
        fVar19 = fStack_ac * fVar26;
        fVar23 = fStack_a8 * fVar27;
        fVar25 = local_b0 * fVar30;
        auVar38._0_4_ = (fVar36 + fVar34 + fVar37) * (fVar23 + fVar19 + fVar25);
        auVar38._4_4_ = (fVar36 + fVar34 + fVar37) * (fVar23 + fVar19 + fVar25);
        auVar38._8_4_ = (fVar36 + fVar34 + fVar37) * (fVar23 + fVar19 + fVar25);
        auVar38._12_4_ = (fVar36 + fVar34 + fVar37) * (fVar23 + fVar19 + fVar25);
        if (auVar38._0_4_ <= 0.0) {
          fVar20 = fVar32 * fVar30 - fVar33 * fVar27;
          fVar24 = fVar33 * fVar26 - fVar31 * fVar30;
          fVar26 = fVar31 * fVar27 - fVar32 * fVar26;
          fVar27 = pfVar2[3] * pfVar1[3] - pfVar2[3] * pfVar1[3];
          fVar28 = fVar26 * fStack_a8 - fVar24 * local_b0;
          fVar29 = fVar20 * local_b0 - fVar26 * fStack_ac;
          fVar24 = fVar24 * fStack_ac - fVar20 * fStack_a8;
          fVar30 = fVar27 * fStack_a4 - fVar27 * fStack_a4;
          local_80._8_4_ = fStack_ac;
          local_80._0_8_ = auVar39._4_8_;
          local_80._12_4_ = fStack_a4;
          fVar26 = fVar28 * fVar28;
          fVar20 = fVar29 * fVar29;
          fVar27 = fVar24 * fVar24;
          fVar31 = fVar20 + fVar26 + fVar27;
          fVar32 = fVar20 + fVar26 + fVar27;
          fVar33 = fVar20 + fVar26 + fVar27;
          fVar27 = fVar20 + fVar26 + fVar27;
          auVar4._4_4_ = fVar32;
          auVar4._0_4_ = fVar31;
          auVar4._8_4_ = fVar33;
          auVar4._12_4_ = fVar27;
          auVar39 = rsqrtps(auVar38,auVar4);
          auVar35._0_12_ = ZEXT812(0);
          auVar35._12_4_ = 0;
          fVar26 = auVar39._0_4_;
          fVar20 = auVar39._4_4_;
          fVar19 = auVar39._8_4_;
          fVar23 = auVar39._12_4_;
          uVar15 = -(uint)(0.0 - fVar31 < 0.0);
          uVar16 = -(uint)(0.0 - fVar32 < 0.0);
          uVar17 = -(uint)(0.0 - fVar33 < 0.0);
          uVar18 = -(uint)(0.0 - fVar27 < 0.0);
          auVar21._0_4_ =
               (uint)((float)(~-(uint)(fVar31 <= 0.0) &
                             (uint)((3.0 - fVar26 * fVar31 * fVar26) * fVar26 * 0.5)) * fVar28) &
               uVar15;
          auVar21._4_4_ =
               (uint)((float)(~-(uint)(fVar32 <= 0.0) &
                             (uint)((3.0 - fVar20 * fVar32 * fVar20) * fVar20 * 0.5)) * fVar29) &
               uVar16;
          auVar21._8_4_ =
               (uint)((float)(~-(uint)(fVar33 <= 0.0) &
                             (uint)((3.0 - fVar19 * fVar33 * fVar19) * fVar19 * 0.5)) * fVar24) &
               uVar17;
          auVar21._12_4_ =
               (uint)((float)(~-(uint)(fVar27 <= 0.0) &
                             (uint)((3.0 - fVar23 * fVar27 * fVar23) * fVar23 * 0.5)) * fVar30) &
               uVar18;
          auVar8._4_4_ = uVar16;
          auVar8._0_4_ = uVar15;
          auVar8._8_4_ = uVar17;
          auVar8._12_4_ = uVar18;
          iVar11 = movmskps(iVar11 * 2,auVar8);
          auVar5._4_4_ = ~uVar16 & (uint)fVar29;
          auVar5._0_4_ = ~uVar15 & (uint)fVar28;
          auVar5._8_4_ = ~uVar17 & (uint)fVar24;
          auVar5._12_4_ = ~uVar18 & (uint)fVar30;
          _local_60 = auVar21 | auVar5;
          fVar20 = local_b0;
          fVar24 = fStack_ac;
          fVar28 = fStack_a8;
          fVar29 = fStack_a4;
          if (iVar11 != 0) {
            fVar24 = local_60._4_4_ * local_b0 - local_60._8_4_ * fStack_a8;
            fVar28 = local_60._8_4_ * fStack_ac - local_60._0_4_ * local_b0;
            fVar29 = local_60._0_4_ * fStack_a8 - local_60._4_4_ * fStack_ac;
            fVar30 = local_60._12_4_ * fStack_a4 - local_60._12_4_ * fStack_a4;
            fVar26 = fVar24 * fVar24;
            fVar20 = fVar28 * fVar28;
            fVar27 = fVar29 * fVar29;
            fVar31 = fVar20 + fVar26 + fVar27;
            fVar32 = fVar20 + fVar26 + fVar27;
            fVar33 = fVar20 + fVar26 + fVar27;
            fVar27 = fVar20 + fVar26 + fVar27;
            uVar15 = -(uint)(0.0 - fVar31 < 0.0);
            uVar16 = -(uint)(0.0 - fVar32 < 0.0);
            uVar17 = -(uint)(0.0 - fVar33 < 0.0);
            uVar18 = -(uint)(0.0 - fVar27 < 0.0);
            auVar6._4_4_ = fVar32;
            auVar6._0_4_ = fVar31;
            auVar6._8_4_ = fVar33;
            auVar6._12_4_ = fVar27;
            auVar39 = rsqrtps(auVar35,auVar6);
            fVar26 = auVar39._0_4_;
            fVar20 = auVar39._4_4_;
            fVar19 = auVar39._8_4_;
            fVar23 = auVar39._12_4_;
            auVar22._0_4_ =
                 (uint)((float)(~-(uint)(fVar31 <= 0.0) &
                               (uint)((3.0 - fVar26 * fVar31 * fVar26) * fVar26 * 0.5)) * fVar24) &
                 uVar15;
            auVar22._4_4_ =
                 (uint)((float)(~-(uint)(fVar32 <= 0.0) &
                               (uint)((3.0 - fVar20 * fVar32 * fVar20) * fVar20 * 0.5)) * fVar28) &
                 uVar16;
            auVar22._8_4_ =
                 (uint)((float)(~-(uint)(fVar33 <= 0.0) &
                               (uint)((3.0 - fVar19 * fVar33 * fVar19) * fVar19 * 0.5)) * fVar29) &
                 uVar17;
            auVar22._12_4_ =
                 (uint)((float)(~-(uint)(fVar27 <= 0.0) &
                               (uint)((3.0 - fVar23 * fVar27 * fVar23) * fVar23 * 0.5)) * fVar30) &
                 uVar18;
            auVar9._4_4_ = uVar16;
            auVar9._0_4_ = uVar15;
            auVar9._8_4_ = uVar17;
            auVar9._12_4_ = uVar18;
            iVar11 = movmskps(iVar12,auVar9);
            auVar7._4_4_ = ~uVar16 & (uint)fVar28;
            auVar7._0_4_ = ~uVar15 & (uint)fVar24;
            auVar7._8_4_ = ~uVar17 & (uint)fVar29;
            auVar7._12_4_ = ~uVar18 & (uint)fVar30;
            local_70 = auVar22 | auVar7;
            fVar20 = local_b0;
            fVar24 = fStack_ac;
            fVar28 = fStack_a8;
            fVar29 = fStack_a4;
            if (iVar11 != 0) {
              fVar14 = (float10)FUN_01081b40(local_60,&local_3c,&local_38);
              local_34 = (float)fVar14;
              fVar14 = (float10)FUN_01081b40(local_70,&local_44,&local_40);
              local_20 = (float)fVar14;
              fVar20 = local_b0;
              fVar24 = fStack_ac;
              fVar28 = fStack_a8;
              fVar29 = fStack_a4;
              if (local_20 * local_34 < local_14) {
                _local_a0 = _local_60;
                _local_90 = local_70;
                local_1c = (local_38 + local_3c) * 0.5;
                local_18 = (local_40 + local_44) * 0.5;
                local_30 = local_34;
                local_2c = local_20;
                local_14 = local_20 * local_34;
              }
            }
          }
        }
      }
      fStack_a4 = fVar29;
      fStack_a8 = fVar28;
      fStack_ac = fVar24;
      local_b0 = fVar20;
      FUN_010837c0();
      fVar20 = local_b0;
      fVar24 = fStack_ac;
      fVar28 = fStack_a8;
      fVar29 = fStack_a4;
      uVar15 = (uint)&local_28 & -(uint)(local_28 != 0);
    }
  }
  else {
    fVar27 = 3.40282e+38;
    if (*(int *)(param_1 + 0x198) == 2) {
      iVar13 = 0;
      local_20 = 0.0;
      if (0 < *(int *)(param_1 + 0x4c)) {
        local_b0 = 3.0;
        fStack_ac = 3.0;
        fStack_a8 = 3.0;
        fStack_a4 = 3.0;
        local_80 = ZEXT816(0);
        local_c0 = 0.5;
        fStack_bc = 0.5;
        fStack_b8 = 0.5;
        fStack_b4 = 0.5;
        do {
          local_60 = *(undefined1 (*) [8])(*(int *)(param_1 + 0x48) + iVar13);
          uStack_58 = *(undefined8 *)(*(int *)(param_1 + 0x48) + 8 + iVar13);
          auVar38 = _local_60;
          local_60._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
          uStack_58._4_4_ = (float)((ulonglong)uStack_58 >> 0x20);
          fVar29 = *(float *)(*param_2 + 4) * (float)uStack_58 -
                   *(float *)(*param_2 + 8) * (float)local_60._4_4_;
          fVar30 = *(float *)(*param_2 + 8) * (float)local_60._0_4_ -
                   *(float *)*param_2 * (float)uStack_58;
          fVar31 = *(float *)*param_2 * (float)local_60._4_4_ -
                   *(float *)(*param_2 + 4) * (float)local_60._0_4_;
          fVar32 = *(float *)(*param_2 + 0xc) * uStack_58._4_4_ -
                   *(float *)(*param_2 + 0xc) * uStack_58._4_4_;
          fVar27 = fVar29 * fVar29;
          fVar24 = fVar30 * fVar30;
          fVar28 = fVar31 * fVar31;
          fVar33 = fVar24 + fVar27 + fVar28;
          fVar19 = fVar24 + fVar27 + fVar28;
          fVar23 = fVar24 + fVar27 + fVar28;
          fVar28 = fVar24 + fVar27 + fVar28;
          fVar27 = local_80._0_4_;
          fVar25 = local_80._4_4_;
          fVar36 = local_80._8_4_;
          fVar40 = local_80._12_4_;
          uVar15 = -(uint)(fVar27 - fVar33 < fVar27);
          uVar16 = -(uint)(fVar25 - fVar19 < fVar25);
          uVar17 = -(uint)(fVar36 - fVar23 < fVar36);
          uVar18 = -(uint)(fVar40 - fVar28 < fVar40);
          auVar39._4_4_ = fVar19;
          auVar39._0_4_ = fVar33;
          auVar39._8_4_ = fVar23;
          auVar39._12_4_ = fVar28;
          auVar39 = rsqrtps(local_80,auVar39);
          fVar24 = auVar39._0_4_;
          fVar34 = auVar39._4_4_;
          fVar37 = auVar39._8_4_;
          fVar41 = auVar39._12_4_;
          auVar10._4_4_ = uVar16;
          auVar10._0_4_ = uVar15;
          auVar10._8_4_ = uVar17;
          auVar10._12_4_ = uVar18;
          iVar12 = movmskps(iVar11,auVar10);
          local_70._4_4_ =
               (uint)((float)(~-(uint)(fVar19 <= fVar25) &
                             (uint)((fStack_ac - fVar34 * fVar19 * fVar34) * fVar34 * fStack_bc)) *
                     fVar30) & uVar16 | ~uVar16 & (uint)fVar30;
          local_70._0_4_ =
               (uint)((float)(~-(uint)(fVar33 <= fVar27) &
                             (uint)((local_b0 - fVar24 * fVar33 * fVar24) * fVar24 * local_c0)) *
                     fVar29) & uVar15 | ~uVar15 & (uint)fVar29;
          local_70._8_4_ =
               (uint)((float)(~-(uint)(fVar23 <= fVar36) &
                             (uint)((fStack_a8 - fVar37 * fVar23 * fVar37) * fVar37 * fStack_b8)) *
                     fVar31) & uVar17 | ~uVar17 & (uint)fVar31;
          local_70._12_4_ =
               (uint)((float)(~-(uint)(fVar28 <= fVar40) &
                             (uint)((fStack_a4 - fVar41 * fVar28 * fVar41) * fVar41 * fStack_b4)) *
                     fVar32) & uVar18 | ~uVar18 & (uint)fVar32;
          iVar11 = 0;
          if (iVar12 != 0) {
            _local_60 = auVar38;
            fVar14 = (float10)FUN_01081b40(local_60,&local_44,&local_40);
            local_24 = (float)fVar14;
            fVar14 = (float10)FUN_01081b40(local_70,&local_3c,&local_38);
            local_34 = (float)fVar14;
            iVar11 = extraout_ECX_00;
            fVar26 = local_18;
            fVar20 = local_1c;
            if (local_34 * local_24 < local_14) {
              local_1c = (local_40 + local_44) * 0.5;
              local_18 = (local_38 + local_3c) * 0.5;
              _local_a0 = _local_60;
              _local_90 = local_70;
              local_30 = local_24;
              local_2c = local_34;
              local_14 = local_34 * local_24;
              fVar26 = local_18;
              fVar20 = local_1c;
            }
          }
          local_20 = (float)((int)local_20 + 1);
          iVar13 = iVar13 + 0x10;
          fVar27 = fVar20;
        } while ((int)local_20 < *(int *)(param_1 + 0x4c));
      }
    }
  }
  param_4[0xc] = fVar27 * (float)local_a0._0_4_;
  param_4[0xd] = fVar27 * (float)local_a0._4_4_;
  param_4[0xe] = fVar27 * fStack_98;
  param_4[0xf] = fVar27 * fStack_94;
  param_4[0xc] = fVar26 * (float)local_90._0_4_ + param_4[0xc];
  param_4[0xd] = fVar26 * (float)local_90._4_4_ + param_4[0xd];
  param_4[0xe] = fVar26 * fStack_88 + param_4[0xe];
  param_4[0xf] = fVar26 * fStack_84 + param_4[0xf];
  fVar26 = *(float *)(*param_2 + 4);
  fVar20 = *(float *)(*param_2 + 8);
  fVar27 = *(float *)(*param_2 + 0xc);
  param_4[0xc] = param_4[0xc] - fVar27 * *(float *)*param_2;
  param_4[0xd] = param_4[0xd] - fVar27 * fVar26;
  param_4[0xe] = param_4[0xe] - fVar27 * fVar20;
  param_4[0xf] = param_4[0xf] - fVar27 * fVar27;
  *param_4 = (float)local_a0._0_4_;
  param_4[1] = (float)local_a0._4_4_;
  param_4[2] = fStack_98;
  param_4[3] = fStack_94;
  param_4[4] = (float)local_90._0_4_;
  param_4[5] = (float)local_90._4_4_;
  param_4[6] = fStack_88;
  param_4[7] = fStack_84;
  fVar26 = *(float *)(*param_2 + 4);
  fVar20 = *(float *)(*param_2 + 8);
  fVar27 = *(float *)(*param_2 + 0xc);
  param_4[8] = *(float *)*param_2;
  param_4[9] = fVar26;
  param_4[10] = fVar20;
  param_4[0xb] = fVar27;
  *param_3 = local_30 * 0.5;
  param_3[1] = local_2c * 0.5;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  return (float10)local_14;
}

// 0108A030  FUN_0108a030  size=2513  [__FILE__]
uint __thiscall
FUN_0108a030(undefined8 *param_1,float *param_2,int *param_3,int *param_4,float param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  LPVOID pvVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  float *pfVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_2a0 [512];
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  undefined4 uStack_7c;
  float fStack_78;
  int *piStack_74;
  int local_68;
  undefined4 *local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  uint local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_28;
  undefined4 *local_24;
  char local_1e;
  char local_1d;
  int local_1c;
  uint local_18;
  uint local_14;
  
  iVar17 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  local_28 = param_1;
  if (*(int *)(param_1 + 0x33) == 2) {
    piVar15 = *(int **)(param_1 + 4);
    iVar18 = 0;
    if (piVar15 == (int *)0x0) {
      return 0;
    }
    do {
      fVar22 = *param_2;
      fVar24 = param_2[1];
      fVar6 = param_2[2];
      fVar7 = param_2[3];
      fStack_8c = (float)piVar15[6] * fVar6 + (float)piVar15[4] * fVar22;
      fVar23 = fStack_8c + fVar7 + (float)piVar15[5] * fVar24;
      piVar15[0xb] = (int)fVar23;
      fStack_88 = ABS((float)piVar15[5] * fVar24 + fVar7);
      fStack_84 = ABS((float)piVar15[4] * fVar22 + (float)piVar15[6] * fVar6);
      local_90 = ABS(fVar23);
      fStack_8c = ABS(fStack_8c);
      if (param_5 < local_90) {
        if (0.0 <= fVar23) {
          iVar17 = iVar17 + 1;
        }
        else {
          iVar18 = iVar18 + 1;
        }
      }
      else {
        piVar15[0xb] = 0;
      }
      piVar15 = (int *)*piVar15;
    } while (piVar15 != (int *)0x0);
    if (iVar18 != 0) {
      if (iVar17 != 0) {
        puVar19 = *(undefined4 **)(param_1 + 4);
        uVar16 = 0;
        uVar13 = 0;
        local_60._0_4_ = 0.0;
        local_60._4_4_ = 0.0;
        uStack_58 = 0x80000000;
        local_50 = 0;
        local_4c = 0x80000000;
        puVar11 = puVar19;
        if (puVar19 != (undefined4 *)0x0) {
          for (puVar12 = (undefined4 *)*puVar19; puVar12 != (undefined4 *)0x0;
              puVar12 = (undefined4 *)*puVar12) {
            puVar11 = puVar12;
          }
        }
        while (puVar12 = puVar19, puVar12 != (undefined4 *)0x0) {
          local_40 = *(ulonglong *)(puVar12 + 4);
          uVar1 = *(undefined8 *)(puVar12 + 6);
          uStack_38 = uVar1;
          if ((float)puVar12[0xb] * (float)puVar11[0xb] < 0.0) {
            local_40._4_4_ = (float)(local_40 >> 0x20);
            uStack_38._0_4_ = (float)uVar1;
            uStack_38._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            fVar22 = (float)puVar11[0xb] / ((float)puVar11[0xb] - (float)puVar12[0xb]);
            local_90 = fVar22 * ((float)local_40 - (float)puVar11[4]) + (float)puVar11[4];
            fStack_8c = fVar22 * (local_40._4_4_ - (float)puVar11[5]) + (float)puVar11[5];
            fStack_88 = fVar22 * ((float)uStack_38 - (float)puVar11[6]) + (float)puVar11[6];
            fStack_84 = fVar22 * (uStack_38._4_4_ - (float)puVar11[7]) + (float)puVar11[7];
            if (uVar16 == (uVar13 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,&local_60,0x10);
              uVar16 = (uint)local_60._4_4_;
            }
            pfVar20 = (float *)(uVar16 * 0x10 + (int)(float)local_60);
            *pfVar20 = local_90;
            pfVar20[1] = fStack_8c;
            pfVar20[2] = fStack_88;
            pfVar20[3] = fStack_84;
            local_60._4_4_ = (float)((int)local_60._4_4_ + 1);
            if (local_50 == (local_4c & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int)&uStack_58 + 4,0x10);
            }
            pfVar20 = (float *)(local_50 * 0x10 + (int)uStack_58._4_4_);
            *pfVar20 = local_90;
            pfVar20[1] = fStack_8c;
            pfVar20[2] = fStack_88;
            pfVar20[3] = fStack_84;
            local_50 = local_50 + 1;
            uVar16 = (uint)local_60._4_4_;
            uVar13 = (uint)(float)uStack_58;
          }
          if ((float)puVar12[0xb] <= 0.0) {
            if (uVar16 == (uVar13 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,&local_60,0x10);
              uVar16 = (uint)local_60._4_4_;
            }
            puVar19 = (undefined4 *)(uVar16 * 0x10 + (int)(float)local_60);
            *puVar19 = (float)local_40;
            puVar19[1] = local_40._4_4_;
            puVar19[2] = (float)uStack_38;
            puVar19[3] = uStack_38._4_4_;
            uVar16 = (int)local_60._4_4_ + 1;
            uVar13 = (uint)(float)uStack_58;
            local_60._4_4_ = (float)uVar16;
          }
          if (0.0 <= (float)puVar12[0xb]) {
            if (local_50 == (local_4c & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int)&uStack_58 + 4,0x10);
            }
            puVar19 = (undefined4 *)(local_50 * 0x10 + (int)uStack_58._4_4_);
            *puVar19 = (float)local_40;
            puVar19[1] = local_40._4_4_;
            puVar19[2] = (float)uStack_38;
            puVar19[3] = uStack_38._4_4_;
            local_50 = local_50 + 1;
            uVar16 = (uint)local_60._4_4_;
            uVar13 = (uint)(float)uStack_58;
          }
          puVar11 = puVar12;
          puVar19 = (undefined4 *)*puVar12;
        }
        if (param_4 != (int *)0x0) {
          pvVar14 = TlsGetValue(DAT_01f8fc4c);
          iVar17 = (**(code **)(**(int **)((int)pvVar14 + 0x2c) + 4))(0x14);
          *(undefined2 *)(iVar17 + 4) = 0x14;
          iVar17 = hkgpConvexHull::hkgpConvexHull();
          *param_4 = iVar17;
          puVar21 = *(undefined8 **)(iVar17 + 8);
          *puVar21 = *param_1;
          puVar21[1] = param_1[1];
          iVar17 = *(int *)(*param_4 + 8);
          uVar8 = *(undefined4 *)((int)param_1 + 0xd4);
          uVar9 = *(undefined4 *)(param_1 + 0x1b);
          uVar10 = *(undefined4 *)((int)param_1 + 0xdc);
          *(undefined4 *)(iVar17 + 0xd0) = *(undefined4 *)(param_1 + 0x1a);
          *(undefined4 *)(iVar17 + 0xd4) = uVar8;
          *(undefined4 *)(iVar17 + 0xd8) = uVar9;
          *(undefined4 *)(iVar17 + 0xdc) = uVar10;
          iVar17 = FUN_010887a0((float)local_60,local_60._4_4_,1,param_1);
          if (iVar17 != *(int *)(param_1 + 0x33)) {
            if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)*param_4)(1);
            }
            *param_4 = 0;
          }
        }
        if (param_3 != (int *)0x0) {
          pvVar14 = TlsGetValue(DAT_01f8fc4c);
          iVar17 = (**(code **)(**(int **)((int)pvVar14 + 0x2c) + 4))(0x14);
          *(undefined2 *)(iVar17 + 4) = 0x14;
          iVar17 = hkgpConvexHull::hkgpConvexHull();
          *param_3 = iVar17;
          puVar21 = *(undefined8 **)(iVar17 + 8);
          *puVar21 = *param_1;
          puVar21[1] = param_1[1];
          iVar17 = *(int *)(*param_3 + 8);
          uVar8 = *(undefined4 *)((int)param_1 + 0xd4);
          uVar9 = *(undefined4 *)(param_1 + 0x1b);
          uVar10 = *(undefined4 *)((int)param_1 + 0xdc);
          *(undefined4 *)(iVar17 + 0xd0) = *(undefined4 *)(param_1 + 0x1a);
          *(undefined4 *)(iVar17 + 0xd4) = uVar8;
          *(undefined4 *)(iVar17 + 0xd8) = uVar9;
          *(undefined4 *)(iVar17 + 0xdc) = uVar10;
          iVar17 = FUN_010887a0(uStack_58._4_4_,local_50,1,param_1);
          if (iVar17 != *(int *)(param_1 + 0x33)) {
            if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)*param_3)(1);
            }
            *param_3 = 0;
          }
        }
        iVar17 = 1;
        puVar21 = &local_40;
        do {
          *(undefined4 *)(puVar21 + -2) = 0;
          if (-1 < *(int *)((int)puVar21 + -0xc)) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))
                      (*(undefined4 *)((int)puVar21 + -0x14),*(int *)((int)puVar21 + -0xc) << 4);
          }
          iVar17 = iVar17 + -1;
          *(undefined4 *)((int)puVar21 + -0x14) = 0;
          *(undefined4 *)((int)puVar21 + -0xc) = 0x80000000;
          puVar21 = (undefined8 *)((int)puVar21 + -0xc);
        } while (-1 < iVar17);
        return 3;
      }
      return 2;
    }
    if (iVar17 == 0) {
      return 0;
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x33) != 3) {
    hkErrStream::hkErrStream(local_2a0,0x200);
    FUN_01018d00("Current dimension not implemented for that operation");
    iVar17 = (**(code **)(*DAT_01f8fc58 + 0xc))
                       (3,0x3a86e3ef,local_2a0,
                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                        ,0x98b);
    if (iVar17 == 0) {
      hkBaseObject::hkBaseObject_38();
      return 4;
    }
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return uVar13;
  }
  local_68 = 0;
  local_64 = (undefined4 *)0x0;
  iVar17 = FUN_0107da60(param_2,param_5,&local_68,&fStack_78);
  piVar15 = piStack_74;
  fVar22 = fStack_78;
  if (iVar17 != 3) {
    if (local_68 < (int)local_64) {
      return 2;
    }
    return (uint)(local_68 != 0);
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  local_40 = local_40 & 0xffffffff;
  uStack_38._0_4_ = 0.0;
  uStack_38._4_4_ = -0.0;
  fVar24 = ABS((float)piStack_74);
  local_a0 = (ulonglong)(uint)fVar24;
  uStack_98 = 0;
  local_80 = ABS(fStack_78);
  uStack_7c = 0;
  fStack_78 = 0.0;
  piStack_74 = (int *)0x0;
  if (local_80 < fVar24) {
    fVar24 = local_80;
  }
  if (((float)piVar15 - fVar22 <= param_5) || (fVar24 <= param_5)) {
    if ((fVar22 + (float)piVar15) * 0.5 < (float)(undefined *)0x0) {
      return 2;
    }
    return 1;
  }
  uVar13 = ((int)(*(int *)((int)local_28 + 0x24) + (*(int *)((int)local_28 + 0x24) >> 0x1f & 3U)) >>
           2) + local_68;
  if (0 < (int)uVar13) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,uVar13 & ((int)uVar13 < 0) - 1,0x10);
  }
  iVar17 = ((int)(*(int *)((int)local_28 + 0x24) + (*(int *)((int)local_28 + 0x24) >> 0x1f & 3U)) >>
           2) + (int)local_64;
  if ((int)((uint)uStack_38._4_4_ & 0x3fffffff) < iVar17) {
    iVar18 = ((uint)uStack_38._4_4_ & 0x3fffffff) * 2;
    if (iVar17 < iVar18) {
      iVar17 = iVar18;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int)&local_40 + 4,iVar17,0x10);
  }
  for (local_24 = *(undefined4 **)(local_28 + 4); local_24 != (undefined4 *)0x0;
      local_24 = (undefined4 *)*local_24) {
    if ((float)local_24[0xb] == 0.0) {
      if (local_18 == (local_14 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
      }
      uVar8 = local_24[5];
      uVar9 = local_24[6];
      uVar10 = local_24[7];
      puVar19 = (undefined4 *)(local_18 * 0x10 + local_1c);
      *puVar19 = local_24[4];
      puVar19[1] = uVar8;
      puVar19[2] = uVar9;
      puVar19[3] = uVar10;
      local_18 = local_18 + 1;
      if ((float)uStack_38 == (float)((uint)uStack_38._4_4_ & 0x3fffffff)) {
LAB_0108a2d0:
        FUN_0100a290(&PTR_vftable_018e9b94,(int)&local_40 + 4,0x10);
      }
LAB_0108a2e3:
      uVar8 = local_24[5];
      uVar9 = local_24[6];
      uVar10 = local_24[7];
      puVar19 = (undefined4 *)((int)(float)uStack_38 * 0x10 + (int)local_40._4_4_);
      *puVar19 = local_24[4];
      puVar19[1] = uVar8;
      puVar19[2] = uVar9;
      puVar19[3] = uVar10;
      uStack_38._0_4_ = (float)((int)(float)uStack_38 + 1);
    }
    else {
      if ((float)local_24[0xb] <= 0.0) {
        if ((float)uStack_38 == (float)((uint)uStack_38._4_4_ & 0x3fffffff)) goto LAB_0108a2d0;
        goto LAB_0108a2e3;
      }
      if (local_18 == (local_14 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
      }
      uVar8 = local_24[5];
      uVar9 = local_24[6];
      uVar10 = local_24[7];
      puVar19 = (undefined4 *)(local_18 * 0x10 + local_1c);
      *puVar19 = local_24[4];
      puVar19[1] = uVar8;
      puVar19[2] = uVar9;
      puVar19[3] = uVar10;
      local_18 = local_18 + 1;
    }
  }
  local_24 = (undefined4 *)0x0;
  uVar13 = local_18;
  uVar16 = local_14;
  for (local_64 = *(undefined4 **)(local_28 + 6); local_64 != (undefined4 *)0x0;
      local_64 = (undefined4 *)*local_64) {
    piStack_74 = local_64 + 2;
    local_24 = (undefined4 *)0x0;
    do {
      iVar17 = *piStack_74;
      fVar22 = *(float *)(iVar17 + 0x2c);
      if (0.0 < fVar22) {
        iVar18 = local_64[(9 >> ((char)local_24 * '\x02' & 0x1fU) & 3U) + 2];
        if (*(float *)(iVar18 + 0x2c) * fVar22 < 0.0) {
          uVar1 = *(undefined8 *)(iVar17 + 0x10);
          uVar2 = *(undefined8 *)(iVar17 + 0x18);
          uVar3 = *(ulonglong *)(iVar18 + 0x10);
          uVar4 = *(undefined8 *)(iVar18 + 0x18);
          local_60._0_4_ = (float)uVar1;
          local_60._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
          uStack_58._0_4_ = (float)uVar2;
          uStack_58._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          fVar22 = fVar22 / (fVar22 - *(float *)(iVar18 + 0x2c));
          local_a0._0_4_ = (float)uVar3;
          local_a0._4_4_ = (float)(uVar3 >> 0x20);
          uStack_98._0_4_ = (float)uVar4;
          uStack_98._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
          local_90 = fVar22 * ((float)local_a0 - (float)local_60) + (float)local_60;
          fStack_8c = fVar22 * (local_a0._4_4_ - local_60._4_4_) + local_60._4_4_;
          fStack_88 = fVar22 * ((float)uStack_98 - (float)uStack_58) + (float)uStack_58;
          fStack_84 = fVar22 * (uStack_98._4_4_ - uStack_58._4_4_) + uStack_58._4_4_;
          local_a0 = uVar3;
          uStack_98 = uVar4;
          local_60 = uVar1;
          uStack_58 = uVar2;
          if (uVar13 == (uVar16 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
            uVar13 = local_18;
          }
          pfVar20 = (float *)(uVar13 * 0x10 + local_1c);
          *pfVar20 = local_90;
          pfVar20[1] = fStack_8c;
          pfVar20[2] = fStack_88;
          pfVar20[3] = fStack_84;
          local_18 = local_18 + 1;
          if ((float)uStack_38 == (float)((uint)uStack_38._4_4_ & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,(int)&local_40 + 4,0x10);
          }
          pfVar20 = (float *)((int)(float)uStack_38 * 0x10 + (int)local_40._4_4_);
          *pfVar20 = local_90;
          pfVar20[1] = fStack_8c;
          pfVar20[2] = fStack_88;
          pfVar20[3] = fStack_84;
          uStack_38._0_4_ = (float)((int)(float)uStack_38 + 1);
          uVar13 = local_18;
          uVar16 = local_14;
        }
      }
      piStack_74 = piStack_74 + 1;
      local_24 = (undefined4 *)((int)local_24 + 1);
    } while ((int)local_24 < 3);
  }
  if (param_3 != (int *)0x0) {
    pvVar14 = TlsGetValue(DAT_01f8fc4c);
    iVar17 = (**(code **)(**(int **)((int)pvVar14 + 0x2c) + 4))(0x14);
    *(undefined2 *)(iVar17 + 4) = 0x14;
    iVar17 = hkgpConvexHull::hkgpConvexHull();
    *param_3 = iVar17;
    puVar21 = *(undefined8 **)(iVar17 + 8);
    *puVar21 = *local_28;
    puVar21[1] = local_28[1];
    uVar13 = local_18;
    uVar16 = local_14;
  }
  if (param_4 != (int *)0x0) {
    pvVar14 = TlsGetValue(DAT_01f8fc4c);
    iVar17 = (**(code **)(**(int **)((int)pvVar14 + 0x2c) + 4))(0x14);
    *(undefined2 *)(iVar17 + 4) = 0x14;
    iVar17 = hkgpConvexHull::hkgpConvexHull();
    *param_4 = iVar17;
    puVar21 = *(undefined8 **)(iVar17 + 8);
    *puVar21 = *local_28;
    puVar21[1] = local_28[1];
    uVar13 = local_18;
    uVar16 = local_14;
  }
  puVar21 = local_28;
  if (param_3 == (int *)0x0) {
LAB_0108a526:
    local_1e = '\0';
  }
  else {
    iVar17 = FUN_010887a0(local_1c,uVar13,0,local_28);
    local_1e = '\x01';
    uVar16 = local_14;
    if (iVar17 != *(int *)(puVar21 + 0x33)) goto LAB_0108a526;
  }
  puVar21 = local_28;
  if (param_4 != (int *)0x0) {
    iVar17 = FUN_010887a0(local_40._4_4_,(float)uStack_38,0,local_28);
    local_1d = '\x01';
    uVar16 = local_14;
    if (iVar17 == *(int *)(puVar21 + 0x33)) goto LAB_0108a55c;
  }
  local_1d = '\0';
LAB_0108a55c:
  if ((local_1e == '\0') && (param_3 != (int *)0x0)) {
    if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_3)(1);
      uVar16 = local_14;
    }
    *param_3 = 0;
  }
  if ((local_1d == '\0') && (param_4 != (int *)0x0)) {
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_4)(1);
      uVar16 = local_14;
    }
    *param_4 = 0;
  }
  uVar13 = (uint)uStack_38._4_4_;
  uStack_38 = (ulonglong)(uint)uStack_38._4_4_ << 0x20;
  if (-1 < (int)uVar13) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40._4_4_,uVar13 << 4);
    uVar16 = local_14;
  }
  local_40 = local_40 & 0xffffffff;
  uStack_38 = CONCAT44(0x80000000,(float)uStack_38);
  local_18 = 0;
  if ((int)uVar16 < 0) {
    return 3;
  }
  (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,uVar16 << 4);
  return 3;
}

// 0108AA10  FUN_0108aa10  size=1049  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __thiscall FUN_0108aa10(int param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  float fVar29;
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  undefined8 *puStack_2c;
  float fStack_28;
  float fStack_24;
  int local_1c;
  int local_18;
  char local_13;
  char local_12;
  char local_11;
  
  if (*(int *)(param_1 + 0x198) == 3) {
    puStack_2c = (undefined8 *)0x0;
    fStack_24 = -0.0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      local_18 = *(int *)(param_1 + 0x4c) << 4;
      puStack_2c = (undefined8 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_18);
      fStack_24 = (float)((int)(local_18 + (local_18 >> 0x1f & 0xfU)) >> 4);
    }
    iVar15 = *(int *)(param_1 + 0x4c);
    iVar14 = *(int *)(param_1 + 0x48);
    if (0 < iVar15) {
      puVar10 = puStack_2c;
      iVar13 = iVar15;
      do {
        puVar1 = (undefined4 *)((iVar14 - (int)puStack_2c) + (int)puVar10);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        *(undefined4 *)puVar10 = *puVar1;
        *(undefined4 *)((int)puVar10 + 4) = uVar7;
        *(undefined4 *)(puVar10 + 1) = uVar8;
        *(undefined4 *)((int)puVar10 + 0xc) = uVar9;
        puVar10 = puVar10 + 2;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      puVar10 = puStack_2c;
      iVar14 = iVar15;
      if (0 < iVar15) {
        do {
          local_1c = iVar14;
          uVar2 = *puVar10;
          iVar14 = param_3[1];
          uVar3 = puVar10[1];
          auVar17 = ZEXT816(0);
          if (0 < iVar14) {
            pfVar11 = (float *)*param_3;
            local_40._0_4_ = (float)uVar2;
            local_40._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
            uStack_38._0_4_ = (float)uVar3;
            uStack_38._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            do {
              fVar16 = pfVar11[2] * (float)uStack_38 + *pfVar11 * (float)local_40;
              fVar18 = uStack_38._4_4_ + pfVar11[1] * local_40._4_4_;
              fVar19 = *pfVar11 * (float)local_40 + pfVar11[2] * (float)uStack_38;
              fVar20 = pfVar11[1] * local_40._4_4_ + uStack_38._4_4_;
              pfVar11 = pfVar11 + 4;
              iVar14 = iVar14 + -1;
              auVar17._4_4_ = fVar16 + fVar18;
              auVar17._0_4_ = fVar18 + fVar16;
              auVar17._8_4_ = fVar20 + fVar19;
              auVar17._12_4_ = fVar19 + fVar20;
              auVar17 = maxps(_DAT_01701b10,auVar17);
            } while (iVar14 != 0);
          }
          *(undefined4 *)puVar10 = *(undefined4 *)puVar10;
          *(undefined4 *)((int)puVar10 + 4) = *(undefined4 *)((int)puVar10 + 4);
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar10 + 1);
          *(float *)((int)puVar10 + 0xc) = *(float *)((int)puVar10 + 0xc) - auVar17._12_4_;
          puVar10 = puVar10 + 2;
          iVar14 = local_1c + -1;
        } while (local_1c + -1 != 0);
        local_1c = 0;
        local_40 = uVar2;
        uStack_38 = uVar3;
      }
    }
    local_12 = *(char *)(param_1 + 0x1a4);
    local_11 = *(char *)(param_1 + 0x1a6);
    FUN_010798d0(puStack_2c,iVar15,param_1);
    if (local_11 != '\0') {
      FUN_01084fc0();
    }
    if (local_12 != '\0') {
      FUN_01082990();
    }
    *param_2 = 1;
    if (-1 < (int)fStack_24) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_2c,(int)fStack_24 << 4);
    }
    return param_2;
  }
  local_13 = *(char *)(param_1 + 0x1a4);
  local_12 = *(char *)(param_1 + 0x1a6);
  iVar15 = 0;
  local_11 = '\0';
  if (0 < param_3[1] * 2) {
    local_30 = 0.0;
    puStack_2c = (undefined8 *)0x0;
    fStack_28 = 0.0;
    fStack_24 = 0.0;
    do {
      local_40._0_4_ = local_30;
      local_40._4_4_ = (float)puStack_2c;
      uStack_38._0_4_ = fStack_28;
      uStack_38._4_4_ = fStack_24;
      FUN_01084890(&local_50,param_3,&local_40);
      if (ABS(local_50) <= 1e-05) {
LAB_0108adf4:
        if (local_11 == '\0') goto LAB_0108ae1b;
        break;
      }
      puVar1 = *(undefined4 **)(param_1 + 0x20);
      fVar16 = (float)puVar1[5] * -local_40._4_4_ + (float)puVar1[4] * -(float)local_40 +
               (float)puVar1[6] * -(float)uStack_38;
      puVar12 = puVar1;
      for (puVar4 = (undefined4 *)*puVar1; puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        fVar18 = (float)puVar4[5] * -local_40._4_4_ + (float)puVar4[4] * -(float)local_40 +
                 (float)puVar4[6] * -(float)uStack_38;
        if (fVar16 < fVar18) {
          puVar12 = puVar4;
          fVar16 = fVar18;
        }
      }
      fVar16 = (float)puVar12[4];
      fVar18 = (float)puVar12[5];
      fVar19 = (float)puVar12[6];
      fVar20 = fVar19 * (float)uStack_38 + fVar16 * (float)local_40;
      fVar21 = uStack_38._4_4_ + fVar18 * local_40._4_4_;
      fVar23 = fVar16 * (float)local_40 + fVar19 * (float)uStack_38;
      fVar25 = fVar18 * local_40._4_4_ + uStack_38._4_4_;
      fVar26 = fVar21 + fVar20;
      fVar20 = fVar20 + fVar21;
      fVar28 = fVar25 + fVar23;
      fVar29 = uStack_38._4_4_ - (fVar23 + fVar25);
      fVar21 = (fVar16 - fVar26 * (float)local_40) * (float)local_40;
      fVar25 = (fVar18 - fVar20 * local_40._4_4_) * local_40._4_4_;
      fVar24 = (fVar19 - fVar28 * (float)uStack_38) * (float)uStack_38;
      fVar23 = fVar24 + fVar21;
      fVar22 = fVar29 + fVar25;
      fVar21 = fVar21 + fVar24;
      fVar25 = fVar25 + fVar29;
      fVar16 = (fVar16 - (fVar26 - local_50) * (float)local_40) * (float)local_40;
      fVar18 = (fVar18 - (fVar20 - fStack_4c) * local_40._4_4_) * local_40._4_4_;
      fVar19 = (fVar19 - (fVar28 - fStack_48) * (float)uStack_38) * (float)uStack_38;
      auVar27._4_4_ = fVar18;
      auVar27._0_4_ = fVar16;
      auVar27._8_4_ = fVar19;
      auVar27._12_4_ = fVar29;
      fVar20 = fVar22 + fVar23;
      fVar23 = fVar23 + fVar22;
      fVar22 = fVar25 + fVar21;
      if (fVar20 <= 1.1920929e-07) goto LAB_0108adf4;
      auVar6._4_4_ = fVar23;
      auVar6._0_4_ = fVar20;
      auVar6._8_4_ = fVar22;
      auVar6._12_4_ = fVar21 + fVar25;
      auVar17 = rcpps(auVar27,auVar6);
      uVar5 = (uint)&local_1c & -(uint)(puVar1 != (undefined4 *)0x0);
      while (uVar5 != 0) {
        fVar21 = (float)local_40 * (float)puVar1[4];
        fVar25 = local_40._4_4_ * (float)puVar1[5];
        fVar24 = (float)uStack_38 * (float)puVar1[6];
        puVar1[4] = ((float)puVar1[4] - (fVar29 + fVar25 + fVar24 + fVar21) * (float)local_40) +
                    (fVar29 + fVar25 + fVar24 + fVar21) *
                    (2.0 - auVar17._0_4_ * fVar20) * auVar17._0_4_ *
                    (fVar29 + fVar18 + fVar19 + fVar16) * (float)local_40;
        puVar1[5] = ((float)puVar1[5] - (fVar24 + fVar21 + fVar29 + fVar25) * local_40._4_4_) +
                    (fVar24 + fVar21 + fVar29 + fVar25) *
                    (2.0 - auVar17._4_4_ * fVar23) * auVar17._4_4_ *
                    (fVar19 + fVar16 + fVar29 + fVar18) * local_40._4_4_;
        puVar1[6] = ((float)puVar1[6] - (fVar25 + fVar29 + fVar21 + fVar24) * (float)uStack_38) +
                    (fVar25 + fVar29 + fVar21 + fVar24) *
                    (2.0 - auVar17._8_4_ * fVar22) * auVar17._8_4_ *
                    (fVar18 + fVar29 + fVar16 + fVar19) * (float)uStack_38;
        puVar1[7] = puVar1[7];
        puVar1 = (undefined4 *)*puVar1;
        uVar5 = (uint)&local_1c & -(uint)(puVar1 != (undefined4 *)0x0);
      }
      iVar15 = iVar15 + 1;
      local_11 = '\x01';
    } while (iVar15 < param_3[1] * 2);
    FUN_010819b0();
    if (local_12 != '\0') {
      FUN_01084fc0();
    }
    if (local_13 != '\0') {
      FUN_01082990();
    }
  }
LAB_0108ae1b:
  *param_2 = 1;
  return param_2;
}

// 0108AE40  FUN_0108ae40  size=3158  [__FILE__]
char __thiscall FUN_0108ae40(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  sbyte sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined4 *puVar29;
  char *pcVar30;
  undefined1 local_2e0 [512];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint local_88;
  uint local_80;
  uint local_78;
  int *local_6c;
  float local_64;
  undefined1 (*local_60) [16];
  int local_5c;
  int local_58;
  uint local_54;
  float local_50;
  undefined4 *puStack_4c;
  int iStack_48;
  uint uStack_44;
  int *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 *local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  char local_14;
  char local_13;
  char local_12;
  char local_11;
  
  local_11 = *(int *)(param_1 + 0x198) != -1;
  local_60 = (undefined1 (*) [16])0x0;
  local_5c = 0;
  local_58 = -0x80000000;
  local_18 = param_1;
  if (param_3 != '\0') {
    uVar14 = *(uint *)(param_1 + 0x24);
    if (0 < (int)uVar14) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_60,((int)uVar14 < 0) - 1 & uVar14,0x10);
    }
    local_5c = local_5c + uVar14;
    pauVar12 = local_60;
    for (puVar29 = *(undefined4 **)(param_1 + 0x20); puVar29 != (undefined4 *)0x0;
        puVar29 = (undefined4 *)*puVar29) {
      *pauVar12 = *(undefined1 (*) [16])(puVar29 + 4);
      pauVar12 = pauVar12 + 1;
    }
  }
  if (*(int *)(param_1 + 0x198) == 2) {
    if (param_2 < 3) {
      hkErrStream::hkErrStream(local_2e0,0x200);
      pcVar30 = ") is less than 3.";
      FUN_01018d00("The number of vertices requested(");
      FUN_01018dc0(param_2);
      FUN_01018d00(pcVar30);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xc25bdde7,local_2e0,
                 "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                 ,0x70e);
      hkBaseObject::hkBaseObject_38();
      param_2 = 3;
    }
    if (*(int *)(param_1 + 0x24) <= param_2) goto LAB_0108ba75;
    local_13 = *(char *)(param_1 + 0x1a4);
    local_14 = *(char *)(param_1 + 0x1a6);
    local_2c = (undefined4 *)0x0;
    local_24 = 0x80000000;
    do {
      local_28 = 0;
      fVar23 = 3.40282e+38;
      local_20 = (int *)0xffffffff;
      local_50 = 3.40282e+38;
      puStack_4c = (undefined4 *)0x7f7fffee;
      iStack_48 = 0x7f7fffee;
      uStack_44 = 0x7f7fffee;
      uVar14 = (uint)&local_54 & -(uint)(*(undefined4 **)(local_18 + 0x20) != (undefined4 *)0x0);
      puVar29 = *(undefined4 **)(local_18 + 0x20);
      iVar16 = local_18;
      while (local_18 = iVar16, uVar14 != 0) {
        if (local_28 == (local_24 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,4);
          fVar23 = local_50;
        }
        local_2c[local_28] = puVar29;
        local_28 = local_28 + 1;
        puVar17 = (undefined4 *)0x0;
        if (puVar29 != (undefined4 *)0x0) {
          puVar17 = (undefined4 *)*puVar29;
        }
        puVar29 = puVar17;
        iVar16 = local_18;
        uVar14 = (uint)&local_54 & -(uint)(puVar17 != (undefined4 *)0x0);
      }
      local_1c = (int *)(local_28 - 1);
      if (0 < (int)local_28) {
        iVar11 = local_28 * 4 + -8;
        piVar15 = (int *)0x0;
        piVar18 = local_1c;
        do {
          local_1c = piVar15;
          iVar1 = *(int *)(iVar11 + (int)local_2c);
          iVar11 = (int)piVar18 * 4;
          iVar2 = local_2c[(int)piVar18];
          iVar3 = local_2c[(int)local_1c];
          fVar24 = *(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x10);
          fVar26 = *(float *)(iVar3 + 0x14) - *(float *)(iVar1 + 0x14);
          fVar27 = *(float *)(iVar3 + 0x18) - *(float *)(iVar1 + 0x18);
          fVar19 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
          fVar21 = *(float *)(iVar2 + 0x14) - *(float *)(iVar1 + 0x14);
          fVar22 = *(float *)(iVar2 + 0x18) - *(float *)(iVar1 + 0x18);
          auVar28._4_4_ = fVar19;
          auVar28._0_4_ = fVar22;
          auVar28._8_4_ = fVar21;
          auVar28._12_4_ = *(float *)(iVar2 + 0x1c) - *(float *)(iVar1 + 0x1c);
          fVar25 = fVar27 * fVar21 - fVar26 * fVar22;
          fVar22 = fVar24 * fVar22 - fVar27 * fVar19;
          fVar19 = fVar26 * fVar19 - fVar24 * fVar21;
          fVar25 = fVar25 * fVar25;
          fVar22 = fVar22 * fVar22;
          fVar19 = fVar19 * fVar19;
          auVar20._0_4_ = fVar22 + fVar25 + fVar19;
          auVar20._4_4_ = fVar22 + fVar25 + fVar19;
          auVar20._8_4_ = fVar22 + fVar25 + fVar19;
          auVar20._12_4_ = fVar22 + fVar25 + fVar19;
          auVar28 = rsqrtps(auVar28,auVar20);
          fVar19 = auVar28._0_4_;
          fVar19 = (float)(~-(uint)(auVar20._0_4_ <= 0.0) &
                          (uint)((3.0 - fVar19 * auVar20._0_4_ * fVar19) * fVar19 * 0.5 *
                                auVar20._0_4_));
          if (fVar19 < fVar23) {
            fVar23 = fVar19;
            local_20 = piVar18;
          }
          piVar15 = (int *)((int)local_1c + 1);
          piVar18 = local_1c;
        } while ((int)local_1c + 1 < (int)local_28);
      }
      piVar15 = (int *)local_2c[(int)local_20];
      iVar11 = *piVar15;
      piVar18 = (int *)piVar15[1];
      if (iVar11 != 0) {
        *(int **)(iVar11 + 4) = piVar18;
      }
      if (piVar18 == (int *)0x0) {
        *(int *)(iVar16 + 0x20) = iVar11;
      }
      else {
        *piVar18 = iVar11;
      }
      *(int *)(iVar16 + 0x24) = *(int *)(iVar16 + 0x24) + -1;
      iVar11 = piVar15[0x10];
      piVar15 = (int *)(iVar11 + 0xa0c);
      *piVar15 = *piVar15 + -1;
      if (*piVar15 == 0) {
        if (*(int *)(iVar11 + 0xa04) == 0) {
          *(undefined4 *)(iVar16 + 0x1c) = *(undefined4 *)(iVar11 + 0xa08);
        }
        else {
          *(undefined4 *)(*(int *)(iVar11 + 0xa04) + 0xa08) = *(undefined4 *)(iVar11 + 0xa08);
        }
        if (*(int *)(iVar11 + 0xa08) != 0) {
          *(undefined4 *)(*(int *)(iVar11 + 0xa08) + 0xa04) = *(undefined4 *)(iVar11 + 0xa04);
        }
        (**(code **)(PTR_vftable_018e9b94 + 8))(iVar11,0xa10);
      }
      local_28 = 0;
    } while (param_2 < *(int *)(iVar16 + 0x24));
    FUN_010819b0();
    if ((local_11 != '\0') && (param_3 != '\0')) {
      FUN_0108aa10(&local_12,&local_60);
    }
    if (local_14 != '\0') {
      FUN_01084fc0();
    }
    if (local_13 != '\0') {
      FUN_01082990();
    }
    local_28 = 0;
    if ((int)local_24 < 0) goto LAB_0108ba75;
    iVar16 = local_24 * 4;
    puVar29 = local_2c;
  }
  else {
    if (*(int *)(param_1 + 0x198) != 3) goto LAB_0108ba75;
    if (param_2 < 4) {
      hkErrStream::hkErrStream(local_2e0,0x200);
      pcVar30 = ") is less than 4.";
      FUN_01018d00("The number of vertices requested(");
      FUN_01018dc0(param_2);
      FUN_01018d00(pcVar30);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xc25bdde6,local_2e0,
                 "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                 ,0x6c0);
      hkBaseObject::hkBaseObject_38();
      param_2 = 4;
    }
    uVar14 = *(uint *)(param_1 + 0x24);
    if ((int)uVar14 <= param_2) goto LAB_0108ba75;
    local_13 = *(char *)(param_1 + 0x1a6);
    local_14 = *(char *)(param_1 + 0x1a4);
    puStack_4c = (undefined4 *)0x0;
    iStack_48 = 0;
    uStack_44 = 0x80000000;
    if (0 < (int)uVar14) {
      FUN_0100a210(&PTR_vftable_018e9b94,&puStack_4c,uVar14 & ((int)uVar14 < 0) - 1,0x10);
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0x80000000;
    if (0 < *(int *)(param_1 + 0x24)) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_38,*(int *)(param_1 + 0x24),0xc);
    }
    iVar16 = *(int *)(param_1 + 0x24);
    while (param_2 < iVar16) {
      iStack_48 = 0;
      if ((int)(uStack_44 & 0x3fffffff) < iVar16) {
        iVar11 = (uStack_44 & 0x3fffffff) * 2;
        if (iVar11 <= iVar16) {
          iVar11 = iVar16;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,&puStack_4c,iVar11,0x10);
      }
      iStack_48 = iStack_48 + iVar16;
      puVar17 = puStack_4c;
      for (puVar29 = *(undefined4 **)(local_18 + 0x20); puVar29 != (undefined4 *)0x0;
          puVar29 = (undefined4 *)*puVar29) {
        uVar6 = puVar29[5];
        uVar7 = puVar29[6];
        uVar8 = puVar29[7];
        *puVar17 = puVar29[4];
        puVar17[1] = uVar6;
        puVar17[2] = uVar7;
        puVar17[3] = uVar8;
        puVar17 = puVar17 + 4;
      }
      puVar29 = *(undefined4 **)(local_18 + 0x20);
      local_34 = 0;
      for (; puVar29 != (undefined4 *)0x0; puVar29 = (undefined4 *)*puVar29) {
        puVar29[0xb] = 0;
      }
      piVar15 = *(int **)(local_18 + 0x30);
      local_1c = piVar15;
      if (piVar15 != (int *)0x0) {
        do {
          local_40 = piVar15 + 2;
          local_20 = (int *)0x0;
          local_1c = piVar15;
          do {
            if (*(float *)(*local_40 + 0x2c) == 0.0) {
              local_64 = 0.0;
              local_6c = local_20;
LAB_0108b0a4:
              fVar23 = *(float *)(local_18 + 0x100);
              fVar19 = *(float *)(local_18 + 0x104);
              fVar21 = *(float *)(local_18 + 0x108);
              fVar22 = *(float *)(local_18 + 0x10c);
              fVar24 = *(float *)(local_18 + 0xe0);
              fVar25 = *(float *)(local_18 + 0xe4);
              fVar26 = *(float *)(local_18 + 0xe8);
              fVar27 = *(float *)(local_18 + 0xec);
              iVar16 = piVar15[(int)local_6c + 2];
              bVar4 = (char)local_6c * '\x02';
              iVar11 = piVar15[(9 >> (bVar4 & 0x1f) & 3U) + 2];
              uVar14 = 0x12 >> (bVar4 & 0x1f) & 3;
              local_3c = piVar15[uVar14 + 2];
              local_80 = piVar15[(int)local_6c + 5] & 0xfffffffc;
              local_a0 = (float)*(int *)(iVar11 + 0x20) * fVar23 + fVar24;
              fStack_9c = (float)*(int *)(iVar11 + 0x24) * fVar19 + fVar25;
              fStack_98 = (float)*(int *)(iVar11 + 0x28) * fVar21 + fVar26;
              fStack_94 = fVar22 * 0.0 + fVar27;
              local_c0 = ((float)*(int *)(iVar16 + 0x20) * fVar23 + fVar24) - local_a0;
              fStack_bc = ((float)*(int *)(iVar16 + 0x24) * fVar19 + fVar25) - fStack_9c;
              fStack_b8 = ((float)*(int *)(iVar16 + 0x28) * fVar21 + fVar26) - fStack_98;
              fStack_b4 = (fVar22 * 0.0 + fVar27) - fStack_94;
              iVar16 = *(int *)(local_80 + 8 +
                               (0x12 >> ((byte)piVar15[(int)local_6c + 5] & 3) * '\x02' & 3U) * 4);
              local_b0 = ((float)*(int *)(local_3c + 0x20) * fVar23 + fVar24) - local_a0;
              fStack_ac = ((float)*(int *)(local_3c + 0x24) * fVar19 + fVar25) - fStack_9c;
              fStack_a8 = ((float)*(int *)(local_3c + 0x28) * fVar21 + fVar26) - fStack_98;
              fStack_a4 = (fVar22 * 0.0 + fVar27) - fStack_94;
              local_a0 = ((float)*(int *)(iVar16 + 0x20) * fVar23 + fVar24) - local_a0;
              fStack_9c = ((float)*(int *)(iVar16 + 0x24) * fVar19 + fVar25) - fStack_9c;
              fStack_98 = ((float)*(int *)(iVar16 + 0x28) * fVar21 + fVar26) - fStack_98;
              fStack_94 = (fVar22 * 0.0 + fVar27) - fStack_94;
              pfVar9 = (float *)FUN_010141c0(local_d0);
              local_64 = *pfVar9 + local_64;
              local_6c = (int *)(piVar15[uVar14 + 5] & 3);
              piVar15 = (int *)(piVar15[uVar14 + 5] & 0xfffffffc);
              if (piVar15 != (int *)0x0) goto code_r0x0108b1f8;
              uVar14 = local_40[3];
              bVar4 = (byte)uVar14;
              while (uVar14 = uVar14 & 0xfffffffc, uVar14 != 0) {
                uVar13 = 9 >> (bVar4 & 3) * '\x02' & 3;
                fVar23 = *(float *)(local_18 + 0x100);
                fVar19 = *(float *)(local_18 + 0x104);
                fVar21 = *(float *)(local_18 + 0x108);
                fVar22 = *(float *)(local_18 + 0x10c);
                fVar24 = *(float *)(local_18 + 0xe0);
                fVar25 = *(float *)(local_18 + 0xe4);
                fVar26 = *(float *)(local_18 + 0xe8);
                fVar27 = *(float *)(local_18 + 0xec);
                iVar16 = *(int *)(uVar14 + 8 + uVar13 * 4);
                sVar5 = (char)uVar13 * '\x02';
                iVar11 = *(int *)(uVar14 + 8 + (9 >> sVar5 & 3U) * 4);
                local_3c = *(int *)(uVar14 + 8 + (0x12 >> sVar5 & 3U) * 4);
                uVar10 = *(uint *)(uVar14 + 0x14 + uVar13 * 4);
                local_88 = uVar10 & 0xfffffffc;
                iVar1 = *(int *)(local_88 + 8 + (0x12 >> ((byte)uVar10 & 3) * '\x02' & 3U) * 4);
                local_a0 = (float)*(int *)(iVar11 + 0x20) * fVar23 + fVar24;
                fStack_9c = (float)*(int *)(iVar11 + 0x24) * fVar19 + fVar25;
                fStack_98 = (float)*(int *)(iVar11 + 0x28) * fVar21 + fVar26;
                fStack_94 = fVar22 * 0.0 + fVar27;
                local_c0 = ((float)*(int *)(iVar16 + 0x20) * fVar23 + fVar24) - local_a0;
                fStack_bc = ((float)*(int *)(iVar16 + 0x24) * fVar19 + fVar25) - fStack_9c;
                fStack_b8 = ((float)*(int *)(iVar16 + 0x28) * fVar21 + fVar26) - fStack_98;
                fStack_b4 = (fVar22 * 0.0 + fVar27) - fStack_94;
                local_b0 = ((float)*(int *)(local_3c + 0x20) * fVar23 + fVar24) - local_a0;
                fStack_ac = ((float)*(int *)(local_3c + 0x24) * fVar19 + fVar25) - fStack_9c;
                fStack_a8 = ((float)*(int *)(local_3c + 0x28) * fVar21 + fVar26) - fStack_98;
                fStack_a4 = (fVar22 * 0.0 + fVar27) - fStack_94;
                local_a0 = ((float)*(int *)(iVar1 + 0x20) * fVar23 + fVar24) - local_a0;
                fStack_9c = ((float)*(int *)(iVar1 + 0x24) * fVar19 + fVar25) - fStack_9c;
                fStack_98 = ((float)*(int *)(iVar1 + 0x28) * fVar21 + fVar26) - fStack_98;
                fStack_94 = (fVar22 * 0.0 + fVar27) - fStack_94;
                pfVar9 = (float *)FUN_010141c0(local_e0);
                uVar14 = *(uint *)(uVar14 + 0x14 + uVar13 * 4);
                local_64 = *pfVar9 + local_64;
                bVar4 = (byte)uVar14;
              }
LAB_0108b392:
              if (local_34 == (local_30 & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,&local_38,0xc);
              }
              puVar29 = (undefined4 *)(local_38 + local_34 * 0xc);
              *puVar29 = local_1c;
              puVar29[2] = local_64;
              puVar29[1] = local_20;
              *(undefined4 *)(*local_40 + 0x2c) = 0x3f800000;
              piVar15 = local_1c;
              local_34 = local_34 + 1;
            }
            local_40 = local_40 + 1;
            local_20 = (int *)((int)local_20 + 1);
          } while ((int)local_20 < 3);
          piVar15 = (int *)*piVar15;
        } while (piVar15 != (int *)0x0);
        local_1c = (int *)0x0;
      }
      iVar16 = local_18;
      for (puVar29 = *(undefined4 **)(local_18 + 0x20); puVar29 != (undefined4 *)0x0;
          puVar29 = (undefined4 *)*puVar29) {
        puVar29[0xb] = 0;
      }
      local_54 = local_54 & 0xffffff00;
      if (1 < (int)local_34) {
        FUN_0107f9c0(local_38,0,local_34 - 1,local_54);
      }
      iVar11 = local_18;
      local_3c = *(int *)(iVar16 + 0x24) - param_2;
      local_20 = (int *)0x0;
      if (0 < local_3c) {
        local_1c = (int *)0x0;
        do {
          iVar16 = *(int *)(*(int *)((int)local_1c + local_38) + 8 +
                           *(int *)((int)local_1c + local_38 + 4) * 4);
          *(float *)(iVar16 + 0x2c) = *(float *)(iVar16 + 0x2c) + 1.0;
          local_78 = *(uint *)((int)local_1c + local_38);
          uVar14 = *(uint *)((int)local_1c + local_38 + 4);
          local_12 = '\0';
          uVar13 = uVar14;
          uVar10 = local_78;
LAB_0108b4a9:
          bVar4 = (char)uVar13 * '\x02';
          iVar16 = *(int *)(uVar10 + 8 + (9 >> (bVar4 & 0x1f) & 3U) * 4);
          fVar23 = *(float *)(iVar16 + 0x2c) + 1.0;
          *(float *)(iVar16 + 0x2c) = fVar23;
          if (1.0 < fVar23) {
            local_12 = '\x01';
          }
          uVar10 = *(uint *)(uVar10 + 0x14 + (0x12 >> (bVar4 & 0x1f) & 3U) * 4);
          uVar13 = uVar10 & 3;
          uVar10 = uVar10 & 0xfffffffc;
          if (uVar10 != 0) goto code_r0x0108b4ea;
          uVar14 = *(uint *)(local_78 + 0x14 + uVar14 * 4);
          bVar4 = (byte)uVar14;
          while (uVar14 = uVar14 & 0xfffffffc, uVar14 != 0) {
            uVar10 = 9 >> (bVar4 & 3) * '\x02' & 3;
            iVar16 = *(int *)(uVar14 + 8 + (9 >> (char)uVar10 * '\x02' & 3U) * 4);
            fVar23 = *(float *)(iVar16 + 0x2c) + 1.0;
            *(float *)(iVar16 + 0x2c) = fVar23;
            if (1.0 < fVar23) {
              local_12 = '\x01';
            }
            uVar14 = *(uint *)(uVar14 + 0x14 + uVar10 * 4);
            bVar4 = (byte)uVar14;
          }
LAB_0108b556:
          if (local_12 != '\0') break;
          local_1c = local_1c + 3;
          local_20 = (int *)((int)local_20 + 1);
        } while ((int)local_20 < local_3c);
        if (0 < (int)local_20) {
          iVar16 = 0;
          local_1c = local_20;
          do {
            piVar15 = *(int **)(*(int *)(iVar16 + local_38) + 8 +
                               *(int *)(iVar16 + 4 + local_38) * 4);
            iVar1 = *piVar15;
            piVar18 = (int *)piVar15[1];
            if (iVar1 != 0) {
              *(int **)(iVar1 + 4) = piVar18;
            }
            if (piVar18 == (int *)0x0) {
              *(int *)(iVar11 + 0x20) = iVar1;
            }
            else {
              *piVar18 = iVar1;
            }
            *(int *)(iVar11 + 0x24) = *(int *)(iVar11 + 0x24) + -1;
            iVar1 = piVar15[0x10];
            piVar15 = (int *)(iVar1 + 0xa0c);
            *piVar15 = *piVar15 + -1;
            if (*piVar15 == 0) {
              if (*(int *)(iVar1 + 0xa04) == 0) {
                *(undefined4 *)(iVar11 + 0x1c) = *(undefined4 *)(iVar1 + 0xa08);
              }
              else {
                *(undefined4 *)(*(int *)(iVar1 + 0xa04) + 0xa08) = *(undefined4 *)(iVar1 + 0xa08);
              }
              if (*(int *)(iVar1 + 0xa08) != 0) {
                *(undefined4 *)(*(int *)(iVar1 + 0xa08) + 0xa04) = *(undefined4 *)(iVar1 + 0xa04);
              }
              (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xa10);
            }
            iVar16 = iVar16 + 0xc;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
      }
      iVar16 = local_18;
      uVar14 = *(uint *)(local_18 + 0x24);
      local_2c = (undefined4 *)0x0;
      local_28 = 0;
      local_24 = 0x80000000;
      if (0 < (int)uVar14) {
        FUN_0100a210(&PTR_vftable_018e9b94,&local_2c,((int)uVar14 < 0) - 1 & uVar14,0x10);
      }
      local_28 = local_28 + uVar14;
      puVar17 = local_2c;
      for (puVar29 = *(undefined4 **)(iVar16 + 0x20); puVar29 != (undefined4 *)0x0;
          puVar29 = (undefined4 *)*puVar29) {
        uVar6 = puVar29[5];
        uVar7 = puVar29[6];
        uVar8 = puVar29[7];
        *puVar17 = puVar29[4];
        puVar17[1] = uVar6;
        puVar17[2] = uVar7;
        puVar17[3] = uVar8;
        puVar17 = puVar17 + 4;
      }
      iVar11 = FUN_010887a0(local_2c,local_28,0,0);
      if (iVar11 == -1) {
        FUN_010887a0(puStack_4c,iStack_48,0,0);
        local_11 = '\0';
        local_28 = 0;
        if (-1 < (int)local_24) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 << 4);
        }
        goto LAB_0108b6df;
      }
      local_28 = 0;
      if (-1 < (int)local_24) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 << 4);
      }
      iVar16 = *(int *)(iVar16 + 0x24);
      local_2c = (undefined4 *)0x0;
      local_24 = 0x80000000;
    }
    if ((local_11 != '\0') && (param_3 != '\0')) {
      FUN_0108aa10(&local_12,&local_60);
    }
LAB_0108b6df:
    if (local_13 != '\0') {
      FUN_01084fc0();
    }
    if (local_14 != '\0') {
      FUN_01082990();
    }
    local_34 = 0;
    if (-1 < (int)local_30) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,(local_30 & 0x3fffffff) * 0xc);
    }
    local_38 = 0;
    iStack_48 = 0;
    local_30 = 0x80000000;
    if ((int)uStack_44 < 0) goto LAB_0108ba75;
    iVar16 = uStack_44 << 4;
    puVar29 = puStack_4c;
  }
  (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar29,iVar16);
LAB_0108ba75:
  local_5c = 0;
  if (-1 < local_58) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_60,local_58 << 4);
  }
  return local_11;
code_r0x0108b1f8:
  if ((int)piVar15 + (int)local_6c == (int)local_20 + (int)local_1c) goto LAB_0108b392;
  goto LAB_0108b0a4;
code_r0x0108b4ea:
  if (uVar10 + uVar13 == local_78 + uVar14) goto LAB_0108b556;
  goto LAB_0108b4a9;
}

// 0108BAB0  FUN_0108bab0  size=886  [__FILE__]
void __thiscall FUN_0108bab0(int param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined1 local_228 [524];
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  piVar8 = param_2;
  local_14 = param_1;
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_228,0x200);
    uVar9 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar10 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar9);
    FUN_01018d00(pcVar10);
    iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_228,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  uVar6 = *(uint *)(param_1 + 0x24);
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  if (0 < (int)uVar6) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_10,((int)uVar6 < 0) - 1 & uVar6,0xc);
  }
  iVar3 = (local_c - uVar6) + -1;
  if (-1 < iVar3) {
    piVar7 = (int *)(local_10 + uVar6 * 0xc + 8 + iVar3 * 0xc);
    do {
      piVar7[-1] = 0;
      if (-1 < *piVar7) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar7[-2],*piVar7 * 4);
      }
      piVar7[-2] = 0;
      *piVar7 = -0x80000000;
      piVar7 = piVar7 + -3;
      iVar3 = iVar3 + -1;
      param_1 = local_14;
    } while (-1 < iVar3);
  }
  iVar3 = uVar6 - local_c;
  puVar4 = (undefined4 *)(local_10 + local_c * 0xc);
  if (0 < iVar3) {
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0x80000000;
      }
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_c = uVar6;
  iVar3 = local_14;
  for (puVar4 = *(undefined4 **)(param_1 + 0x30); local_18 = puVar4, local_14 = iVar3,
      puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
    local_1c = puVar4 + 2;
    iVar3 = 0;
    do {
      piVar7 = (int *)(local_10 + *(int *)(*local_1c + 0x34) * 0xc);
      iVar5 = puVar4[(9 >> ((char)iVar3 * '\x02' & 0x1fU) & 3U) + 2];
      if (piVar7[1] == (piVar7[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar7,4);
        puVar4 = local_18;
      }
      local_1c = local_1c + 1;
      *(undefined4 *)(*piVar7 + piVar7[1] * 4) = *(undefined4 *)(iVar5 + 0x34);
      piVar7[1] = piVar7[1] + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    iVar3 = local_14;
  }
  param_2[1] = 0;
  iVar5 = *(int *)(iVar3 + 0x34) * 3 + *(int *)(iVar3 + 0x24);
  if ((int)(param_2[2] & 0x3fffffffU) < iVar5) {
    iVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar5,4);
  }
  iVar3 = *(int *)(iVar3 + 0x24);
  if ((int)(param_3[2] & 0x3fffffffU) < iVar3) {
    iVar5 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar3) {
      iVar5 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar5,4);
  }
  param_3[1] = iVar3;
  local_14 = 0;
  param_2 = (int *)0x0;
  if (0 < (int)local_c) {
    iVar3 = 0;
    do {
      uVar9 = *(undefined4 *)(iVar3 + 4 + local_10);
      if (piVar8[1] == (piVar8[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar8,4);
      }
      *(undefined4 *)(*piVar8 + piVar8[1] * 4) = uVar9;
      piVar8[1] = piVar8[1] + 1;
      uVar6 = piVar8[1];
      iVar5 = 0;
      if (0 < *(int *)(iVar3 + 4 + local_10)) {
        do {
          local_18 = (undefined4 *)(*(int *)(iVar3 + local_10) + iVar5 * 4);
          if (uVar6 == (piVar8[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar8,4);
          }
          *(undefined4 *)(*piVar8 + piVar8[1] * 4) = *local_18;
          piVar8[1] = piVar8[1] + 1;
          uVar6 = piVar8[1];
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar3 + 4 + local_10));
      }
      *(int **)(*param_3 + local_14 * 4) = param_2;
      local_14 = local_14 + 1;
      param_2 = (int *)((int)param_2 + 1 + *(int *)(iVar3 + 4 + local_10));
      iVar3 = iVar3 + 0xc;
    } while (local_14 < (int)local_c);
  }
  iVar3 = local_c - 1;
  if (-1 < iVar3) {
    piVar8 = (int *)(local_10 + 8 + iVar3 * 0xc);
    do {
      piVar8[-1] = 0;
      if (-1 < *piVar8) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar8[-2],*piVar8 * 4);
      }
      piVar8[-2] = 0;
      *piVar8 = -0x80000000;
      iVar3 = iVar3 + -1;
      piVar8 = piVar8 + -3;
    } while (-1 < iVar3);
  }
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,(local_8 & 0x3fffffff) * 0xc);
  }
  return;
}

// 0108BE40  FUN_0108be40  size=448  [__FILE__]
void __thiscall FUN_0108be40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 local_280 [512];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x198) < 3) {
    FUN_01089a70(param_1 + 0xd0,param_2,param_3);
    return;
  }
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    hkErrStream::hkErrStream(local_280,0x200);
    uVar5 = *(undefined4 *)(param_1 + 0x1a0);
    pcVar6 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
    FUN_01018d00("No index available (");
    FUN_01018e10(uVar5);
    FUN_01018d00(pcVar6);
    iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x79f9d886,local_280,
                       "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                       ,0x167);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  iVar3 = 0;
  local_1c = 3.40282e+38;
  local_14 = 3.40282e+38;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      fVar4 = (float10)FUN_01081b40(*(int *)(param_1 + 0x48) + iVar3,&local_24,&local_20);
      local_30 = (float)fVar4;
      if (fVar4 < (float10)local_1c) {
        fVar4 = (float10)FUN_01089a70(*(int *)(param_1 + 0x48) + iVar3,&local_40,&local_80);
        fVar4 = ((float10)local_20 - (float10)local_24) * fVar4;
        local_2c = (float)fVar4;
        if (fVar4 < (float10)local_14) {
          *param_2 = local_40;
          param_2[1] = uStack_3c;
          param_2[2] = uStack_38;
          param_2[3] = uStack_34;
          param_2[2] = local_30;
          local_1c = local_30;
          *param_3 = local_80;
          param_3[1] = uStack_7c;
          param_3[2] = uStack_78;
          param_3[3] = uStack_74;
          param_3[4] = local_70;
          param_3[5] = uStack_6c;
          param_3[6] = uStack_68;
          param_3[7] = uStack_64;
          param_3[8] = local_60;
          param_3[9] = uStack_5c;
          param_3[10] = uStack_58;
          param_3[0xb] = uStack_54;
          param_3[0xc] = local_50;
          param_3[0xd] = uStack_4c;
          param_3[0xe] = uStack_48;
          param_3[0xf] = uStack_44;
          local_14 = local_2c;
        }
      }
      local_18 = local_18 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_18 < *(int *)(param_1 + 0x4c));
  }
  param_2[2] = (float)param_2[2] * 0.5;
  fVar2 = (float)param_2[2];
  param_3[0xc] = (0.0 - fVar2) * (float)param_3[8] + (float)param_3[0xc];
  param_3[0xd] = (0.0 - fVar2) * (float)param_3[9] + (float)param_3[0xd];
  param_3[0xe] = (0.0 - fVar2) * (float)param_3[10] + (float)param_3[0xe];
  param_3[0xf] = (0.0 - fVar2) * (float)param_3[0xb] + (float)param_3[0xf];
  return;
}

// 0108C000  FUN_0108c000  size=1859  [__FILE__]
void __thiscall FUN_0108c000(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  char *pcVar28;
  undefined1 local_264 [512];
  int local_64;
  int local_60;
  float local_5c;
  int local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  int *local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  char local_26;
  char local_25;
  undefined4 *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  bool local_5;
  
  local_25 = *(char *)(param_1 + 0x1a6);
  local_26 = *(char *)(param_1 + 0x1a4);
  local_5 = *(char *)((int)param_2 + 0x11) != '\0';
  iVar10 = *(int *)(param_1 + 0x198);
  local_18 = param_1;
  if (iVar10 < 0) {
LAB_0108c6e9:
    hkErrStream::hkErrStream(local_264,0x200);
    FUN_01018d00("Operation not implemented for that dimension");
    iVar10 = (**(code **)(*DAT_01f8fc58 + 0xc))
                       (3,0x3e0abbab,local_264,
                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                        ,0x5fc);
    if (iVar10 == 0) {
      hkBaseObject::hkBaseObject_38();
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (2 < iVar10) {
    if (iVar10 != 3) goto LAB_0108c6e9;
    if (3 < *param_2) {
      iVar10 = *(int *)(param_1 + 0x24);
      FUN_0108ae40(*param_2,(char)param_2[1] != '\0');
      local_5 = *(int *)(param_1 + 0x24) != iVar10;
    }
    if (0.0 < (float)param_2[2]) {
      local_5c = (float)param_2[2] * 2.0;
      do {
        iVar10 = local_18;
        piVar8 = *(int **)(local_18 + 0x30);
        piVar16 = (int *)0x0;
        fVar18 = local_5c;
        if (piVar8 == (int *)0x0) break;
        do {
          iVar12 = piVar8[2];
          iVar11 = piVar8[3];
          iVar1 = piVar8[4];
          fVar21 = *(float *)(iVar1 + 0x10) - *(float *)(iVar12 + 0x10);
          fVar23 = *(float *)(iVar1 + 0x14) - *(float *)(iVar12 + 0x14);
          fVar24 = *(float *)(iVar1 + 0x18) - *(float *)(iVar12 + 0x18);
          fVar17 = *(float *)(iVar11 + 0x10) - *(float *)(iVar12 + 0x10);
          fVar19 = *(float *)(iVar11 + 0x14) - *(float *)(iVar12 + 0x14);
          fVar20 = *(float *)(iVar11 + 0x18) - *(float *)(iVar12 + 0x18);
          auVar25._4_4_ = fVar17;
          auVar25._0_4_ = fVar20;
          auVar25._8_4_ = fVar19;
          auVar25._12_4_ = *(float *)(iVar11 + 0x1c) - *(float *)(iVar12 + 0x1c);
          fVar22 = fVar24 * fVar19 - fVar23 * fVar20;
          fVar20 = fVar21 * fVar20 - fVar24 * fVar17;
          fVar19 = fVar23 * fVar17 - fVar21 * fVar19;
          fVar22 = fVar22 * fVar22;
          fVar20 = fVar20 * fVar20;
          fVar19 = fVar19 * fVar19;
          fVar17 = fVar20 + fVar22 + fVar19;
          auVar26._4_4_ = fVar20 + fVar22 + fVar19;
          auVar26._0_4_ = fVar17;
          auVar26._8_4_ = fVar20 + fVar22 + fVar19;
          auVar26._12_4_ = fVar20 + fVar22 + fVar19;
          auVar26 = rsqrtps(auVar25,auVar26);
          fVar19 = auVar26._0_4_;
          fVar17 = (float)(~-(uint)(fVar17 <= 0.0) &
                          (uint)((3.0 - fVar19 * fVar17 * fVar19) * fVar19 * 0.5 * fVar17));
          if (fVar17 < fVar18) {
            piVar16 = piVar8;
            fVar18 = fVar17;
          }
          piVar8 = (int *)*piVar8;
        } while (piVar8 != (int *)0x0);
        local_54 = piVar16;
        if (piVar16 == (int *)0x0) break;
        local_64 = piVar16[3];
        local_44 = piVar16 + 3;
        local_60 = piVar16[2];
        fVar18 = *(float *)(local_60 + 0x10) - *(float *)(local_64 + 0x10);
        fVar17 = *(float *)(local_60 + 0x14) - *(float *)(local_64 + 0x14);
        fVar19 = *(float *)(local_60 + 0x18) - *(float *)(local_64 + 0x18);
        fVar18 = fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19;
        iVar12 = 1;
        local_58 = 0;
        do {
          iVar11 = piVar16[(iVar12 + 1) % 3 + 2];
          iVar1 = *local_44;
          fVar17 = *(float *)(iVar1 + 0x10) - *(float *)(iVar11 + 0x10);
          fVar19 = *(float *)(iVar1 + 0x14) - *(float *)(iVar11 + 0x14);
          fVar20 = *(float *)(iVar1 + 0x18) - *(float *)(iVar11 + 0x18);
          fVar17 = fVar20 * fVar20 + fVar19 * fVar19 + fVar17 * fVar17;
          if (fVar18 < fVar17) {
            fVar18 = fVar17;
            local_58 = iVar12;
          }
          local_44 = local_44 + 1;
          iVar12 = iVar12 + 1;
        } while (iVar12 < 3);
        if (local_58 == 0) {
          *(undefined4 *)(piVar16[4] + 0x34) = 0xffffffff;
        }
        else if (local_58 == 1) {
          *(undefined4 *)(local_60 + 0x34) = 0xffffffff;
        }
        else {
          *(undefined4 *)(local_64 + 0x34) = 0xffffffff;
        }
        uVar13 = *(uint *)(local_18 + 0x24);
        local_14 = 0;
        local_10 = 0;
        local_c = 0x80000000;
        if (0 < (int)uVar13) {
          FUN_0100a210(&PTR_vftable_018e9b94,&local_14,uVar13 & ((int)uVar13 < 0) - 1,0x10);
        }
        uVar13 = local_c;
        for (puVar2 = *(undefined4 **)(iVar10 + 0x20); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          if (puVar2[0xd] != -1) {
            if (local_10 == (uVar13 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,&local_14,0x10);
            }
            uVar27 = puVar2[5];
            uVar4 = puVar2[6];
            uVar5 = puVar2[7];
            puVar9 = (undefined4 *)(local_10 * 0x10 + local_14);
            *puVar9 = puVar2[4];
            puVar9[1] = uVar27;
            puVar9[2] = uVar4;
            puVar9[3] = uVar5;
            local_10 = local_10 + 1;
            uVar13 = local_c;
          }
        }
        iVar12 = FUN_010887a0(local_14,local_10,0,0);
        if (iVar12 == 3) {
          FUN_01084fc0();
        }
        local_5 = true;
        local_10 = 0;
        if (-1 < (int)local_c) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c << 4);
        }
        local_14 = 0;
        local_c = 0x80000000;
      } while (*(int *)(iVar10 + 0x198) == 3);
    }
    iVar10 = local_18;
    if (((char)param_2[4] != '\0') && (*(int *)(local_18 + 0x198) == 3)) {
      if (*(char *)(local_18 + 0x1a6) == '\0') {
        hkErrStream::hkErrStream(local_264,0x200);
        uVar27 = *(undefined4 *)(iVar10 + 0x1a0);
        pcVar28 = ") hkgpConvexHull::buildIndices need to be called before this operation.";
        FUN_01018d00("No index available (");
        FUN_01018e10(uVar27);
        FUN_01018d00(pcVar28);
        iVar10 = (**(code **)(*DAT_01f8fc58 + 0xc))
                           (3,0x79f9d886,local_264,
                            "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                            ,0x167);
        if (iVar10 != 0) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        hkBaseObject::hkBaseObject_38();
      }
      local_50 = 0;
      local_48 = 0x80000000;
      local_24 = (undefined4 *)0x0;
      local_1c = 0x80000000;
      local_14 = 0;
      local_c = 0x80000000;
      do {
        local_4c = 0;
        local_20 = 0;
        local_10 = 0;
        FUN_01085c10(&local_50,&local_24,0,0);
        iVar12 = 0;
        uVar13 = local_10;
        iVar10 = local_14;
        if (0 < local_20) {
          do {
            iVar11 = 0;
            if (0 < (int)uVar13) {
              do {
                if (*(int *)(iVar10 + iVar11 * 4) == local_24[iVar12]) {
                  if (iVar11 != -1) goto LAB_0108c42c;
                  break;
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < (int)uVar13);
            }
            puVar2 = local_24 + iVar12;
            if (uVar13 == (local_c & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,&local_14,4);
              uVar13 = local_10;
            }
            *(undefined4 *)(local_14 + uVar13 * 4) = *puVar2;
            uVar13 = local_10 + 1;
            iVar10 = local_14;
            local_10 = uVar13;
LAB_0108c42c:
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_20);
        }
        uVar15 = *(uint *)(local_18 + 0x24);
        if ((int)uVar15 <= (int)uVar13) break;
        local_5 = true;
        local_34 = (int *)0x0;
        local_30 = 0;
        local_2c = 0x80000000;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0x80000000;
        if (0 < (int)uVar15) {
          FUN_0100a210(&PTR_vftable_018e9b94,&local_34,((int)uVar15 < 0) - 1 & uVar15,0x10);
          uVar13 = local_10;
        }
        local_30 = local_30 + uVar15;
        piVar8 = local_34;
        for (puVar2 = *(undefined4 **)(local_18 + 0x20); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          iVar10 = puVar2[5];
          iVar12 = puVar2[6];
          iVar11 = puVar2[7];
          *piVar8 = puVar2[4];
          piVar8[1] = iVar10;
          piVar8[2] = iVar12;
          piVar8[3] = iVar11;
          piVar8 = piVar8 + 4;
          uVar13 = local_10;
        }
        uVar15 = uVar13;
        if ((int)(local_38 & 0x3fffffff) < (int)uVar13) {
          uVar15 = (local_38 & 0x3fffffff) * 2;
          uVar14 = uVar13;
          if ((int)uVar13 < (int)uVar15) {
            uVar14 = uVar15;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,&local_40,uVar14,0x10);
          uVar15 = local_10;
        }
        iVar10 = local_18;
        iVar12 = 0;
        if (0 < (int)uVar15) {
          iVar11 = 0;
          do {
            piVar8 = local_34 + *(int *)(local_14 + iVar12 * 4) * 4;
            iVar1 = piVar8[1];
            iVar6 = piVar8[2];
            iVar7 = piVar8[3];
            piVar16 = (int *)(local_40 + iVar11);
            *piVar16 = *piVar8;
            piVar16[1] = iVar1;
            piVar16[2] = iVar6;
            piVar16[3] = iVar7;
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 0x10;
          } while (iVar12 < (int)local_10);
        }
        local_3c = uVar13;
        iVar12 = FUN_010887a0(local_40,uVar13,0,0);
        if (iVar12 == 3) {
          FUN_01084fc0();
        }
        local_3c = 0;
        if ((local_38 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40,local_38 << 4);
        }
        local_40 = 0;
        local_38 = 0x80000000;
        local_30 = 0;
        if ((local_2c & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c << 4);
        }
        local_34 = (int *)0x0;
        local_2c = 0x80000000;
      } while (*(int *)(iVar10 + 0x198) == 3);
      local_10 = 0;
      if ((local_c & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
      }
      local_14 = 0;
      local_c = 0x80000000;
      local_20 = 0;
      if ((local_1c & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 4);
      }
      local_24 = (undefined4 *)0x0;
      local_1c = 0x80000000;
      local_4c = 0;
      if ((local_48 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,local_48 * 4);
      }
    }
    iVar10 = local_18;
    if ((local_5 != false) && (*(int *)(local_18 + 0x198) == 3)) {
      uVar13 = *(uint *)(local_18 + 0x24);
      local_24 = (undefined4 *)0x0;
      local_20 = 0;
      local_1c = -0x80000000;
      if (0 < (int)uVar13) {
        FUN_0100a210(&PTR_vftable_018e9b94,&local_24,((int)uVar13 < 0) - 1 & uVar13,0x10);
      }
      local_20 = local_20 + uVar13;
      puVar9 = local_24;
      for (puVar2 = *(undefined4 **)(iVar10 + 0x20); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        uVar27 = puVar2[5];
        uVar4 = puVar2[6];
        uVar5 = puVar2[7];
        *puVar9 = puVar2[4];
        puVar9[1] = uVar27;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9 = puVar9 + 4;
      }
      FUN_010887a0(local_24,local_20,0,0);
      if (local_25 != '\0') {
        FUN_01084fc0();
      }
      if (local_26 != '\0') {
        FUN_01082990();
      }
      local_20 = 0;
      if (-1 < (int)local_1c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
      }
    }
  }
  return;
}

