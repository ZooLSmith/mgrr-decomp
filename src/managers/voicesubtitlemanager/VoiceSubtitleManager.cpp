// src/managers/voicesubtitlemanager/VoiceSubtitleManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C13960..00C67570, 2 functions

#include "mgrr.h"
#include "VoiceSubtitleManager.h"

// 00C13960  VoiceSubtitleManager::vf1C  size=31  [class]
undefined4 * __thiscall VoiceSubtitleManager::vf1C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C67570  VoiceSubtitleManager::VoiceSubtitleManager  size=160  [class]
void __fastcall VoiceSubtitleManager::VoiceSubtitleManager(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  *param_1 = VoiceSubtitleManagerImplement::vftable;
  if (iVar1 != 0) {
    FUN_00c208b0();
    FUN_00dd4920(iVar1);
    param_1[3] = 0;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 4))(1);
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    FUN_00dd4920(iVar1);
    param_1[4] = 0;
  }
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 4))(1);
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    FUN_00dd4920(iVar1);
    param_1[5] = 0;
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 4))(1);
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    FUN_00dd4920(iVar1);
    param_1[2] = 0;
  }
  *param_1 = vftable;
  return;
}

