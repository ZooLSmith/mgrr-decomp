// src/unsorted/unit_009CEFE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CEFE0..009CF290, 14 functions

#include "mgrr.h"

// 009CEFE0  thunk_FUN_00f4ba30  size=5  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00f4ba30(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_01ee6550 != 0) {
    EspReadWriteLock::enterWrite();
    piVar3 = DAT_018d72ac;
    if (DAT_018d72ac != DAT_018d72ac + DAT_018d72b4) {
      do {
        FUN_009e02a0(*(undefined4 *)(*piVar3 + 4));
        uVar1 = *(uint *)(*piVar3 + 4);
        *(undefined2 *)(uVar1 + 0x48) = 0;
        *(undefined4 *)(uVar1 + 0x3c) = 0;
        *(undefined4 *)(uVar1 + 0x40) = 0;
        *(undefined4 *)(uVar1 + 0x44) = 0;
        *(undefined1 *)(uVar1 + 0x2c) = 0;
        *(undefined4 *)(uVar1 + 8) = 0xfff;
        FUN_00f4ace0();
        FUN_00f4ae70();
        if (((DAT_018d72d8 != 0) && (DAT_018d72d8 <= uVar1)) &&
           (uVar1 < DAT_018d72dc * 0x58 + DAT_018d72d8)) {
          cXml::cXml_8();
          FUN_00f4c880(uVar1);
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != DAT_018d72ac + DAT_018d72b4);
    }
    FUN_00f4dbf0();
    if (DAT_018d72ac != (int *)0x0) {
      DAT_018d72b4 = 0;
      if (DAT_018d72b8 != 0) {
        FUN_00dd48d0(DAT_018d72ac,0);
        DAT_018d72b8 = 0;
      }
      DAT_018d72ac = (int *)0x0;
      DAT_018d72b0 = 0;
    }
    if ((DAT_018d7298 != 0) && (DAT_018d72a0 != 0)) {
      FUN_00dd3d90(DAT_018d7298,0);
    }
    _DAT_018d7288 = 0;
    _DAT_018d728c = 0;
    _DAT_018d7290 = 0;
    DAT_018d72a0 = 0;
    DAT_018d7298 = 0;
    DAT_018d729c = 0;
    if ((DAT_018d72d8 != 0) && (DAT_018d72e0 != 0)) {
      FUN_00dd3d90(DAT_018d72d8,0);
    }
    _DAT_018d72c8 = 0;
    _DAT_018d72cc = 0;
    DAT_018d72d0 = 0;
    DAT_018d72e0 = 0;
    DAT_018d72d8 = 0;
    DAT_018d72dc = 0;
    FUN_00f4b8a0();
    FUN_00f4a9c0();
    iVar2 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
    FUN_00a2a170();
    if ((*(int *)(iVar2 + 0x18) != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      FUN_00dd3d90(*(int *)(iVar2 + 0x18),0);
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    iVar2 = Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_3();
    FUN_00f3b960();
    if ((*(int *)(iVar2 + 0x18) != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      FUN_00dd3d90(*(int *)(iVar2 + 0x18),0);
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    _DAT_01ee542c = 0;
    FUN_00eaac50();
    FUN_00dd7270();
    FUN_00dd7270();
    return;
  }
  return;
}

// 009CF030  FUN_009cf030  size=10  [run]
void FUN_009cf030(void)

{
  FUN_00f40ea0();
  return;
}

// 009CF060  FUN_009cf060  size=30  [run]
void FUN_009cf060(void)

{
  if (DAT_01b7886c == 1) {
    FUN_00f43b80();
    DAT_01b7886c = 2;
  }
  return;
}

// 009CF080  FUN_009cf080  size=9  [run]
void FUN_009cf080(void)

{
  DAT_01ee5424 = 0;
  return;
}

// 009CF090  FUN_009cf090  size=58  [run]
/* WARNING: Removing unreachable block (ram,0x009cf0b5) */

undefined4 FUN_009cf090(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01b78868;
  LOCK();
  DAT_01b78868 = param_1;
  UNLOCK();
  return uVar1;
}

// 009CF0D0  FUN_009cf0d0  size=11  [run]
void FUN_009cf0d0(void)

{
  FUN_00f43000();
  return;
}

// 009CF0E0  FUN_009cf0e0  size=6  [run]
undefined4 FUN_009cf0e0(void)

{
  return DAT_01b78870;
}

// 009CF0F0  FUN_009cf0f0  size=20  [run]
void FUN_009cf0f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00f4c3a0();
  if (iVar1 != 0) {
    FUN_00f40ea0();
    return;
  }
  return;
}

// 009CF120  FUN_009cf120  size=92  [run]
void FUN_009cf120(LONG param_1,int param_2)

{
  LONG LVar1;
  
  if (DAT_01b78860 <= param_2) {
    do {
      LVar1 = InterlockedCompareExchange(&DAT_01b78864,param_1,DAT_01b78864);
    } while (LVar1 != DAT_01b78864);
    do {
      LVar1 = InterlockedCompareExchange(&DAT_01b78860,param_2,DAT_01b78860);
    } while (LVar1 != DAT_01b78860);
  }
  return;
}

// 009CF200  FUN_009cf200  size=30  [run]
int * __fastcall FUN_009cf200(int *param_1)

{
  if (*param_1 != 2) {
    FUN_00dd5650(&DAT_01659600);
    return &DAT_01b78880;
  }
  return param_1 + 4;
}

// 009CF220  FUN_009cf220  size=30  [run]
int * __fastcall FUN_009cf220(int *param_1)

{
  if (*param_1 != 2) {
    FUN_00dd5650(&DAT_01659600);
    return &DAT_01b78880;
  }
  return param_1 + 8;
}

// 009CF240  FUN_009cf240  size=25  [run]
undefined4 __fastcall FUN_009cf240(int *param_1)

{
  if (*param_1 != 2) {
    FUN_00dd5650(&DAT_01659600);
  }
  return 0;
}

// 009CF270  FUN_009cf270  size=24  [run]
void __fastcall FUN_009cf270(int param_1)

{
  FUN_00910a40(*(undefined4 *)(param_1 + 0x30));
  FUN_00916480(param_1);
  return;
}

// 009CF290  FUN_009cf290  size=67  [run]
void __fastcall FUN_009cf290(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_008f7780(*(undefined4 *)(param_1 + 0x30));
  if (iVar2 == 0) {
    return;
  }
  FUN_00910a40(*(undefined4 *)(param_1 + 0x30));
  sVar1 = FUN_00916480();
  FUN_00a12210((int)sVar1);
  return;
}

