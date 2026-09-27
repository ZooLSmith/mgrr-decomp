// src/system/InputXmlArchive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E914E0..00E94050, 18 functions

#include "types.h"

// 00E914E0  sys::InputXmlArchive::vf10  size=162  [class]
undefined4 __thiscall sys::InputXmlArchive::vf10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    iVar4 = FUN_00e91f50(&param_2);
LAB_00e91531:
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x78) = iVar4;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      pcVar5 = (char *)FUN_00e09460();
      pcVar2 = pcVar5;
      do {
        pcVar6 = pcVar2;
        pcVar2 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(char **)(param_1 + 0x88) = pcVar5;
      *(char **)(param_1 + 0x90) = pcVar5;
      *(char **)(param_1 + 0x8c) = pcVar6;
      *(undefined1 *)(param_1 + 0x94) = 0;
      return 1;
    }
  }
  else {
    iVar4 = FUN_00e04220();
    uVar1 = param_2;
    while (iVar4 != 0) {
      cVar3 = FUN_00e05b60(uVar1);
      if (cVar3 != '\0') goto LAB_00e91531;
      iVar4 = FUN_00e04220();
    }
  }
  return 0;
}

// 00E91590  sys::InputXmlArchive::vf14  size=84  [class]
undefined4 __fastcall sys::InputXmlArchive::vf14(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
  uVar2 = FUN_00e04210();
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  pcVar3 = (char *)FUN_00e09460();
  pcVar1 = pcVar3;
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(char **)(param_1 + 0x88) = pcVar3;
  *(char **)(param_1 + 0x90) = pcVar3;
  *(char **)(param_1 + 0x8c) = pcVar4;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return 1;
}

// 00E92970  sys::InputXmlArchive::vf04  size=3  [class]
undefined1 sys::InputXmlArchive::vf04(void)

{
  return 0;
}

// 00E92980  sys::InputXmlArchive::vf0C  size=3  [class]
undefined1 sys::InputXmlArchive::vf0C(void)

{
  return 0;
}

// 00E92990  sys::InputXmlArchive::vf74  size=10  [class]
void __fastcall sys::InputXmlArchive::vf74(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x74))();
  return;
}

// 00E92A30  sys::InputXmlArchive::vf40  size=10  [class]
void __fastcall sys::InputXmlArchive::vf40(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x40))();
  return;
}

// 00E92A40  sys::InputXmlArchive::vf34  size=10  [class]
void __fastcall sys::InputXmlArchive::vf34(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x34))();
  return;
}

// 00E92A50  sys::InputXmlArchive::vf30  size=10  [class]
void __fastcall sys::InputXmlArchive::vf30(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x30))();
  return;
}

// 00E92A60  sys::InputXmlArchive::vf2C  size=10  [class]
void __fastcall sys::InputXmlArchive::vf2C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x2c))();
  return;
}

// 00E92A70  sys::InputXmlArchive::vf28  size=10  [class]
void __fastcall sys::InputXmlArchive::vf28(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x28))();
  return;
}

// 00E92A80  sys::InputXmlArchive::vf24  size=10  [class]
void __fastcall sys::InputXmlArchive::vf24(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x24))();
  return;
}

// 00E92A90  sys::InputXmlArchive::vf20  size=10  [class]
void __fastcall sys::InputXmlArchive::vf20(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x20))();
  return;
}

// 00E92AA0  sys::InputXmlArchive::vf1C  size=10  [class]
void __fastcall sys::InputXmlArchive::vf1C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x1c))();
  return;
}

// 00E92AB0  sys::InputXmlArchive::vf18  size=10  [class]
void __fastcall sys::InputXmlArchive::vf18(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e92ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x80) + 0x18))();
  return;
}

// 00E93EA0  sys::InputXmlArchive::vf3C  size=44  [class]
undefined4 __fastcall sys::InputXmlArchive::vf3C(int param_1)

{
  char cVar1;
  undefined1 *unaff_retaddr;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x80) + 0x2c))();
  if (cVar1 != '\0') {
    *unaff_retaddr = 0xfc;
    return 1;
  }
  return 0;
}

// 00E93ED0  sys::InputXmlArchive::vf38  size=44  [class]
undefined4 __fastcall sys::InputXmlArchive::vf38(int param_1)

{
  char cVar1;
  undefined1 *unaff_retaddr;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x80) + 0x2c))();
  if (cVar1 != '\0') {
    *unaff_retaddr = 0xfc;
    return 1;
  }
  return 0;
}

// 00E93FC0  FUN_00e93fc0  size=118  [between]
void __fastcall FUN_00e93fc0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = param_1[3];
  cVar1 = *(char *)(iVar2 + 0xd);
  while (cVar1 == '\0') {
    (**(code **)(*param_1 + 4))(iVar2);
    iVar2 = param_1[3];
    cVar1 = *(char *)(iVar2 + 0xd);
  }
  puVar3 = (undefined4 *)param_1[1];
  piVar4 = param_1 + 1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    if (*(char *)(puVar3[1] + 0xd) == '\0') {
      FUN_00e91de0(puVar3[1]);
    }
    if (*(char *)(puVar3[2] + 0xd) == '\0') {
      FUN_00e91de0(puVar3[2]);
    }
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    param_1[3] = (int)piVar4;
    param_1[2] = (int)piVar4;
    *piVar4 = (int)piVar4;
    *(undefined2 *)(param_1 + 4) = 0x100;
  }
  return;
}

// 00E94050  sys::InputXmlArchive::vf78  size=55  [class]
undefined4 * __thiscall sys::InputXmlArchive::vf78(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[0x20] = lib::Archive::vftable;
  FUN_00e09a00();
  *param_1 = lib::Archive::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

