// src/misc/cItemStageDropPassCordDlc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094C020..00952390, 6 functions

#include "mgrr.h"
#include "cItemStageDropPassCordDlc.h"

// 0094C020  cItemStageDropPassCordDlc::vf2C  size=3  [class]
void cItemStageDropPassCordDlc::vf2C(void)

{
  return;
}

// 0094F360  cItemStageDropPassCordDlc::vf00  size=6  [class]
char * cItemStageDropPassCordDlc::vf00(void)

{
  return "cItemStageDropPassCordDlc";
}

// 0094F370  cItemStageDropPassCordDlc::vf10  size=6  [class]
char * cItemStageDropPassCordDlc::vf10(void)

{
  return "cItemStageDropInstant";
}

// 0094F410  cItemStageDropPassCordDlc::vf0C  size=76  [class]
void __fastcall cItemStageDropPassCordDlc::vf0C(int param_1)

{
  int iVar1;
  
  cItemStageDropInstant::vf0C();
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    iVar1 = FUN_00d46780();
    if (iVar1 != 0) {
      FUN_0094abb0(param_1);
    }
    iVar1 = FUN_00d467a0();
    if (((iVar1 != 0) && (DAT_01b3736c != 0)) && (DAT_01b3736c == param_1)) {
      DAT_01b3736c = 0;
    }
  }
  return;
}

// 00952370  cItemStageDropPassCordDlc::vf04  size=30  [class]
undefined4 __thiscall cItemStageDropPassCordDlc::vf04(undefined4 param_1,byte param_2)

{
  cItemBase::cItemBase_7();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00952390  cItemStageDropPassCordDlc::vf1C  size=266  [class]
void __fastcall cItemStageDropPassCordDlc::vf1C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0x1e2eeb96) {
      uVar3 = 3;
    }
    else if (iVar1 == 0x18ba9938) {
      uVar3 = 2;
    }
    else {
      if (iVar1 != 0x53e64a9d) goto LAB_009523cd;
      uVar3 = 1;
    }
    FUN_00c82240(uVar3);
  }
LAB_009523cd:
  iVar1 = FUN_00d467a0();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x10) == 0x6929db00)) {
    if (DAT_018b9174 == 0xd30) {
      uVar3 = 2;
    }
    else {
      if (DAT_018b9174 != 0xd50) goto LAB_00952407;
      uVar3 = 4;
    }
    FUN_00c82240(uVar3);
  }
LAB_00952407:
  uVar3 = FUN_0094aa20(*(undefined4 *)(param_1 + 0x10),0);
  FUN_00cbac80(0xffffffff,uVar3);
  FUN_00e5e050("core_se_sys_item_get",0);
  if (*(int *)(param_1 + 0x50) != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
    FUN_0094e3e0(*(undefined4 *)(param_1 + 0x68));
  }
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    FUN_0094abb0(param_1);
  }
  iVar1 = FUN_00d467a0();
  if (((iVar1 != 0) && (DAT_01b3736c != 0)) && (DAT_01b3736c == param_1)) {
    DAT_01b3736c = 0;
  }
  return;
}

