// src/unsorted/unit_0099A6AD.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099A6AD..0099A6AD, 1 functions

#include "mgrr.h"

// 0099A6AD  FUN_0099a6ad  size=193  [run]
void __thiscall FUN_0099a6ad(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char unaff_BL;
  int iVar3;
  int iVar4;
  char in_stack_00000054;
  char in_stack_00000058;
  char *_Format;
  
  FUN_00de3530();
  iVar3 = (int)in_stack_00000054;
  iVar4 = (char)(unaff_BL - 1U & 10) + iVar3;
  uVar1 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x54 + iVar4 * 4));
  uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0xa4 + iVar4 * 4));
  FUN_00de3540(uVar1,uVar2);
  if (in_stack_00000058 == '\0') {
    _Format = "ui_chapter_pre_%02d.wtb";
  }
  else {
    _Format = "ui_chapter_%02d.wtb";
  }
  _sprintf_s(&stack0x00000010,0x40,_Format,iVar3);
  uVar1 = FUN_00de4550(&stack0x00000010,0);
  FUN_00fa25d0(uVar1);
  *(int *)(param_1 + 0x28) = param_1 + 0x38;
  if (*(int *)(param_1 + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  iVar3 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(1);
  FUN_00ccde60(uVar1,iVar3);
  return;
}

