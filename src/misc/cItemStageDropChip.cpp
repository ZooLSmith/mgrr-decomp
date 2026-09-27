// src/misc/cItemStageDropChip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949650..009546D0, 10 functions

#include "types.h"

// 00949650  cItemStageDropChip::vf20  size=3  [class]
void cItemStageDropChip::vf20(void)

{
  return;
}

// 00949660  cItemStageDropChip::vf18  size=42  [class]
void __thiscall cItemStageDropChip::vf18(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_2[1];
  *(undefined4 *)(param_1 + 0xa8) = param_2[2];
  *(undefined4 *)(param_1 + 0xac) = param_2[3];
  return;
}

// 0094CE10  cItemStageDropChip::vf2C  size=3  [class]
void cItemStageDropChip::vf2C(void)

{
  return;
}

// 0094D380  cItemStageDropChip::vf1C  size=63  [class]
void __fastcall cItemStageDropChip::vf1C(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    return;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    FUN_005e8a00();
    return;
  }
  puVar2 = &DAT_01b3539c;
  (**(code **)(*piVar1 + 4))(&DAT_01b3539c);
  FUN_00dd6d80(puVar2);
  FUN_005e8a00();
  return;
}

// 009502C0  cItemStageDropChip::vf0C  size=279  [class]
void __fastcall cItemStageDropChip::vf0C(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0040b190();
    local_40 = *(undefined4 *)(param_1 + 0xa0);
    local_3c = *(undefined4 *)(param_1 + 0xa4);
    local_38 = *(undefined4 *)(param_1 + 0xa8);
    iVar1 = FUN_00a82090("InfoChip",*(undefined4 *)(param_1 + 0x14),local_90);
    *(int *)(param_1 + 0x50) = iVar1;
    if ((iVar1 != 0) && (*(char *)(param_1 + 0xb0) != '\0')) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b3539c;
        (**(code **)(*piVar2 + 4))(&DAT_01b3539c);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          FUN_005e8a40(*(undefined4 *)(param_1 + 0xb4));
          return;
        }
      }
    }
  }
  else {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      return;
    }
    piVar3 = (int *)FUN_00a7c8a0();
    piVar2 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b3539c;
      (**(code **)(*piVar3 + 4))(&DAT_01b3539c);
      iVar1 = FUN_00dd6d80(puVar4);
      piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
    }
    iVar1 = (**(code **)(*piVar2 + 0x300))();
    if (iVar1 == 1) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
      return;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
  }
  return;
}

// 00953340  cItemStageDropChip::vf00  size=6  [class]
char * cItemStageDropChip::vf00(void)

{
  return "cItemStageDropChip";
}

// 00953350  cItemStageDropChip::vf10  size=6  [class]
char * cItemStageDropChip::vf10(void)

{
  return "cItemBase";
}

// 00953360  cItemStageDropChip::vf28  size=3  [class]
void cItemStageDropChip::vf28(void)

{
  return;
}

// 00953370  cItemStageDropChip::vf14  size=1  [class]
void cItemStageDropChip::vf14(void)

{
  return;
}

// 009546D0  cItemStageDropChip::vf04  size=95  [class]
undefined4 * __thiscall cItemStageDropChip::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[0x2e] = lib::Array<Entity*>::vftable;
  if (param_1[0x2f] != 0) {
    param_1[0x30] = 0;
  }
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
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

