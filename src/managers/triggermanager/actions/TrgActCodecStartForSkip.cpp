// src/managers/triggermanager/actions/TrgActCodecStartForSkip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81420..00C81420, 1 functions

#include "mgrr.h"

// 00C81420  Trigger::Act::CODEC_START_FOR_SKIP  size=126  [class]
undefined4 __fastcall Trigger::Act::CODEC_START_FOR_SKIP(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016abe50);
    return 0;
  }
  uVar3 = 0;
  pcVar5 = (char *)(iVar2 + 0x1c);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 != (char *)(iVar2 + 0x1d)) {
    uVar3 = FUN_00e03ea0((char *)(iVar2 + 0x1c));
  }
  iVar4 = FUN_0093b4a0(iVar2 + 8,*(undefined4 *)(iVar2 + 0x18),uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016abe00,iVar2 + 8);
    return 0;
  }
  return 1;
}

