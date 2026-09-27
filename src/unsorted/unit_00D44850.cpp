// src/unsorted/unit_00D44850.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D44850..00D44EB0, 8 functions

#include "mgrr.h"

// 00D44850  FUN_00d44850  size=6  [run]
undefined4 FUN_00d44850(void)

{
  return DAT_01dc51c0;
}

// 00D448D0  FUN_00d448d0  size=28  [run]
void __fastcall FUN_00d448d0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00D44940  FUN_00d44940  size=44  [run]
void FUN_00d44940(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d44968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x20))();
    return;
  }
  return;
}

// 00D449A0  FUN_00d449a0  size=31  [run]
void FUN_00d449a0(void)

{
  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::
  InputBinaryArchive<unsigned_char_const*,unsigned_char>_3(&DAT_018b92f0);
  cXmlBinary::cXmlBinary_105(&DAT_018b92f0);
  return;
}

// 00D44A00  FUN_00d44a00  size=386  [run]
void FUN_00d44a00(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  EffectResourceManager::GetNameFromPhaseNo(param_1,&DAT_018b92f0);
  iVar1 = FUN_00de4550("_sca.bxm",0);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a6e640();
    (**(code **)(*piVar2 + 0x10))(1,iVar1,&DAT_01b7bd48);
  }
  iVar1 = FUN_00de4550("_sca_em.bxm",0);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a6e640();
    (**(code **)(*piVar2 + 0x10))(0,iVar1,&DAT_01b7bd48);
  }
  iVar1 = FUN_00de4550("_psca.bxm",0);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a6e640();
    (**(code **)(*piVar2 + 0x10))(2,iVar1,&DAT_01b7bd48);
  }
  iVar1 = FUN_00de4550("_territory.bxm",0);
  if (iVar1 != 0) {
    cXmlBinary::cXmlBinary_69(iVar1);
  }
  piVar2 = (int *)FUN_00c18350();
  (**(code **)(*piVar2 + 0x24))(param_1,&DAT_018b917c);
  piVar2 = (int *)FUN_008dfc70();
  (**(code **)(*piVar2 + 8))();
  FUN_00c9d510(param_1);
  FUN_00c42300(param_1);
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x14))(param_1);
  FUN_00956f80(param_1);
  FUN_00c1cf50();
  FUN_00c46540();
  FUN_00949150(param_1);
  cXmlBinary::cXmlBinary_90(&DAT_018b92f0,param_1);
  FUN_009363c0(param_1);
  FUN_0093bc60(param_1);
  FUN_00958440(param_1);
  FUN_00c2d9b0(param_1);
  FUN_00c314a0(param_1);
  FUN_00e51d80(&DAT_018b92f0,3);
  FUN_00dc6bc0();
  FUN_00cc11d0();
  return;
}

// 00D44B90  FUN_00d44b90  size=308  [run]
void FUN_00d44b90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00c1e3a0();
  thunk_FUN_00c1c060();
  FUN_009584d0();
  FUN_0093ba00();
  FUN_009364d0();
  piVar1 = (int *)FUN_00a6e640();
  uVar4 = 1;
  (**(code **)(*piVar1 + 0x14))(1);
  piVar1 = (int *)FUN_00a6e640();
  (**(code **)(*piVar1 + 0x14))(0);
  piVar1 = (int *)FUN_00a6e640();
  (**(code **)(*piVar1 + 0x14))(2);
  FUN_00c49c10();
  thunk_FUN_00948fd0();
  uVar3 = uVar4;
  FUN_00c1cf50(uVar4);
  FUN_00c1cf60(uVar3);
  FUN_00c9bf20();
  FUN_0095d480(uVar4);
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x18))(uVar4);
  FUN_00c686a0();
  FUN_00c18480();
  thunk_FUN_00c1ac30();
  FUN_00956770(uVar4);
  piVar1 = (int *)FUN_008dfc70();
  (**(code **)(*piVar1 + 0x10))();
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x28))(uVar4,&DAT_018b917c);
  iVar2 = (**(code **)(*DAT_01dc51c0 + 0x14))();
  if (iVar2 != 0) {
    FUN_00e00ae0(uVar4,&DAT_018b92f0);
  }
  iVar2 = (**(code **)(*DAT_01dc51c0 + 0x14))();
  if (iVar2 != 0) {
    FUN_00e51db0(&DAT_018b92f0,3);
  }
  return;
}

// 00D44E70  FUN_00d44e70  size=42  [run]
void __fastcall FUN_00d44e70(int param_1)

{
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

// 00D44EB0  FUN_00d44eb0  size=37  [run]
int * FUN_00d44eb0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_018b8ca0;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    uVar2 = uVar2 + 8;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x480);
  return (int *)&DAT_018b9118;
}

