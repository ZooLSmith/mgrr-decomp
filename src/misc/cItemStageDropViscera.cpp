// src/misc/cItemStageDropViscera.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094D3C0..00950420, 9 functions

#include "mgrr.h"
#include "cItemStageDropViscera.h"

// 0094D3C0  cItemStageDropViscera::cItemStageDropViscera  size=85  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemStageDropViscera::cItemStageDropViscera(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = cItemStageDrop::vftable;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = &DAT_01b37438;
  param_1[0x16] = _DAT_01b37448;
  uVar1 = _DAT_01b37444;
  param_1[1] = 0x1100;
  param_1[0x17] = uVar1;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x24] = 0;
  *param_1 = vftable;
  param_1[0x28] = 0xffffffff;
  return;
}

// 0094D420  cItemStageDropViscera::vf00  size=6  [class]
char * cItemStageDropViscera::vf00(void)

{
  return "cItemStageDropViscera";
}

// 0094D430  cItemStageDropViscera::vf10  size=6  [class]
char * cItemStageDropViscera::vf10(void)

{
  return "cItemStageDropInstant";
}

// 0094D440  cItemStageDropViscera::vf2C  size=3  [class]
void cItemStageDropViscera::vf2C(void)

{
  return;
}

// 0094D480  cItemStageDropViscera::vf0C  size=130  [class]
void __fastcall cItemStageDropViscera::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(int *)(param_1 + 0x50) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01b35390;
    (**(code **)(*piVar1 + 4))(&DAT_01b35390);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_009f8ae0(*(undefined4 *)(param_1 + 0x80));
      iVar2 = (**(code **)(*piVar1 + 0x300))();
      if (iVar2 == 1) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
      }
      else {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
      }
    }
  }
  iVar2 = FUN_00a7c8b0();
  if (*(float *)(iVar2 + 4) <= -1000.0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

// 0094D510  cItemStageDropViscera::vf24  size=68  [class]
void __fastcall cItemStageDropViscera::vf24(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01b353c0;
        (**(code **)(*piVar2 + 4))(&DAT_01b353c0);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          FUN_005eb860();
          return;
        }
      }
    }
  }
  return;
}

// 0094D560  cItemStageDropViscera::vf28  size=105  [class]
void __fastcall cItemStageDropViscera::vf28(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  if ((*(int *)(param_1 + 0x50) != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01b353c0;
    (**(code **)(*piVar2 + 4))(&DAT_01b353c0);
    iVar3 = FUN_00dd6d80(puVar5);
    if ((iVar3 != 0) && (iVar3 = FUN_005e9460(), iVar3 == 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      FUN_00a7c8a0();
      uVar4 = FUN_0094aa20(uVar1,0xf00);
      FUN_00cbb410((int)((ulonglong)uVar4 >> 0x20),0xffffffff,(int)uVar4);
    }
  }
  return;
}

// 009503E0  cItemStageDropViscera::vf04  size=57  [class]
undefined4 * __thiscall cItemStageDropViscera::vf04(undefined4 *param_1,byte param_2)

{
  param_1[0x18] = 0;
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00950420  cItemStageDropViscera::vf1C  size=83  [class]
void __fastcall cItemStageDropViscera::vf1C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (((*(int *)(param_1 + 0x50) != 0) && (iVar1 = FUN_00a7c7e0(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b353c0;
    (**(code **)(*piVar2 + 4))(&DAT_01b353c0);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_005e9430();
      FUN_0094f090(*(undefined4 *)(param_1 + 0x10));
    }
  }
  return;
}

