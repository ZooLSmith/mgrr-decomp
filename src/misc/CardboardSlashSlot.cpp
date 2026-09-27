// src/misc/CardboardSlashSlot.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B2F240..00B4D9A0, 5 functions

#include "types.h"

// 00B2F240  CardboardSlashSlot::vf10  size=1  [class]
void CardboardSlashSlot::vf10(void)

{
  return;
}

// 00B2F250  CardboardSlashSlot::vf14  size=13  [class]
void __fastcall CardboardSlashSlot::vf14(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}

// 00B356D0  CardboardSlashSlot::vf00  size=31  [class]
undefined4 * __thiscall CardboardSlashSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B3B6F0  CardboardSlashSlot::CardboardSlashSlot  size=495  [class]
void __fastcall CardboardSlashSlot::CardboardSlashSlot(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 auStack_94 [4];
  undefined1 local_90 [8];
  undefined4 local_88;
  
  FUN_00a8edf0(1);
  *(undefined4 *)(param_1 + 0x19ac) = 1;
  *(undefined4 *)(param_1 + 0x19b0) = 0;
  *(undefined4 *)(param_1 + 0x19b4) = 0;
  *(undefined4 *)(param_1 + 0x19c4) = 1;
  FUN_00ac8e10(1);
  FUN_00a934c0();
  FUN_00ac94e0(&DAT_016a0e40);
  FUN_00ac8b20(0);
  FUN_0040b190();
  local_88 = 1;
  iVar1 = FUN_00a82090("Em0010_Box",0x21000,local_90);
  if (iVar1 != 0) {
    FUN_00ac8ad0(1,*(undefined4 *)(param_1 + 0x4f0),iVar1,0,0xffffffff,0xffffffff);
    iVar1 = FUN_00a7c8a0();
    *(undefined4 *)(iVar1 + 0x7c8) = 1;
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar7 = &DAT_01b351dc;
      (**(code **)(*piVar2 + 4))(&DAT_01b351dc);
      iVar1 = FUN_00dd6d80(puVar7);
      if (iVar1 != 0) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c940(uVar3);
        FUN_00a7c960(auStack_94);
      }
    }
  }
  puVar4 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = vftable;
    puVar4[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0x19bc) = puVar4;
  FUN_00d89ec0(0x16,puVar4);
  puVar4 = (undefined4 *)FUN_009f8b60();
  FUN_00a7c800(*puVar4);
  FUN_009f8ae0();
  FUN_00a934c0();
  FUN_00c4d1a0(*(undefined4 *)(param_1 + 0x4f0),0);
  FUN_00ac9420("hand_mac");
  FUN_00ac94e0("hand_gun");
  if (*(int *)(param_1 + 0x764) != 0) {
    CharacterControl::setHeight(0x3f800000);
    FUN_008e3c10();
  }
  *(undefined4 *)(param_1 + 0x19c0) = 0;
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    iVar1 = FUN_00ac89d0();
    iVar6 = 0;
    iVar5 = 0;
    if (0 < *(short *)(iVar1 + 0x32c)) {
      do {
        *(undefined4 *)(iVar6 + 0x460 + *(int *)(iVar1 + 0x328)) = 0;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x560;
      } while (iVar5 < *(short *)(iVar1 + 0x32c));
    }
  }
  FUN_00b39f00(0xc0000,0,0,0);
  return;
}

// 00B4D9A0  CardboardSlashSlot::vf18  size=106  [class]
void CardboardSlashSlot::vf18(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar4 = &DAT_01dc53d8;
    (**(code **)*param_2)(&DAT_01dc53d8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (((iVar1 != 0) && (param_1 == 0x16)) && (iVar1 = param_2[2], iVar1 != 0)) {
      iVar2 = FUN_00ac8c70(iVar1);
      if (iVar2 != 0) {
        FUN_00ac8b80(iVar1);
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0xd8))(1);
        FUN_00b3b8f0();
      }
    }
  }
  return;
}

