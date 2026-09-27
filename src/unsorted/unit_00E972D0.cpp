// src/unsorted/unit_00E972D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E972D0..00E972D0, 1 functions

#include "types.h"

// 00E972D0  FUN_00e972d0  size=648  [run]
void FUN_00e972d0(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBP;
  int unaff_ESI;
  int iStack_114;
  undefined1 auStack_110 [256];
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_114;
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)*param_1)();
    if (cVar1 == '\0') {
      iStack_114 = param_2[2];
      cVar1 = (**(code **)(*param_1 + 0x10))(&DAT_016a7b8c,7);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x58))(&stack0xfffffee0);
        (**(code **)(*param_1 + 0x14))(&DAT_016a7b8c,7);
      }
      iVar3 = param_2[1];
      if (iVar3 != iVar3 + param_2[2] * 0xc) {
        do {
          cVar1 = FUN_00c6e9c0(param_1,"value",iVar3);
          if (cVar1 == '\0') break;
          iVar3 = iVar3 + 0xc;
        } while (iVar3 != param_2[1] + param_2[2] * 0xc);
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x10))(&DAT_016a7b8c,8);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x28))(&stack0xfffffee4);
        (**(code **)(*param_1 + 0x14))(&DAT_016a7b8c,8);
      }
      if (param_2[1] != 0) {
        param_2[2] = 0;
      }
      (**(code **)(*param_2 + 0x14))(unaff_EBP);
      for (; unaff_ESI != 0; unaff_ESI = unaff_ESI + -1) {
        FUN_00c6e9c0(param_1,"value",&stack0xfffffee4);
        (**(code **)(*param_2 + 8))(&stack0xfffffee4);
      }
    }
  }
  else {
    iVar3 = 0;
    cVar1 = (**(code **)*param_1)();
    if (cVar1 == '\0') {
      iStack_114 = param_2[2];
      cVar1 = (**(code **)(*param_1 + 0x10))(&DAT_016a7b8c,7);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x58))(&stack0xfffffee0);
        (**(code **)(*param_1 + 0x14))(&DAT_016a7b8c,7);
      }
      iVar3 = param_2[1];
      if (iVar3 != iVar3 + param_2[2] * 0xc) {
        iVar4 = 0;
        do {
          uVar2 = FUN_00e93b30(auStack_110,&DAT_016d18b0,iVar4);
          iVar4 = iVar4 + 1;
          cVar1 = FUN_00c6e9c0(param_1,uVar2,iVar3);
          if (cVar1 == '\0') break;
          iVar3 = iVar3 + 0xc;
        } while (iVar3 != param_2[1] + param_2[2] * 0xc);
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x10))(&DAT_016a7b8c,8);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x28))(&stack0xfffffee4);
        (**(code **)(*param_1 + 0x14))(&DAT_016a7b8c,8);
      }
      if (param_2[1] != 0) {
        param_2[2] = 0;
      }
      (**(code **)(*param_2 + 0x14))(unaff_EBP);
      for (; unaff_ESI != 0; unaff_ESI = unaff_ESI + -1) {
        uVar2 = FUN_00e93b30(auStack_110,&DAT_016d18b0,iVar3);
        iVar3 = iVar3 + 1;
        FUN_00c6e9c0(param_1,uVar2,&stack0xfffffee4);
        (**(code **)(*param_2 + 8))(&stack0xfffffee4);
      }
    }
  }
  __security_check_cookie(uStack_10 ^ (uint)&stack0xfffffee0);
  return;
}

