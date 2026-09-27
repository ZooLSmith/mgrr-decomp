// src/managers/triggermanager/actions/TrgActScene.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F250..00C7F250, 1 functions

#include "mgrr.h"

// 00C7F250  Trigger::Act::SCENE  size=145  [class]
undefined4 __fastcall Trigger::Act::SCENE(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aaad0,param_1);
    return 0;
  }
  iVar3 = *(int *)(iVar2 + 8);
  if ((iVar3 == 0xf06) && ((DAT_018b9174 & 0xf00) == 0xe00)) {
    uVar4 = FUN_00a4ac40(0xf30,iVar2 + 0xc,0xffffffff);
    return uVar4;
  }
  pcVar5 = (char *)(iVar2 + 0xc);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 != (char *)(iVar2 + 0xd)) {
    uVar4 = FUN_00a4ac40(iVar3,(char *)(iVar2 + 0xc),0xffffffff);
    return uVar4;
  }
  uVar4 = FUN_00a4ac40(iVar3,0,0xffffffff);
  return uVar4;
}

