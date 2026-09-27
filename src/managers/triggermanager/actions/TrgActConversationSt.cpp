// src/managers/triggermanager/actions/TrgActConversationSt.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F630..00C7F630, 1 functions

#include "mgrr.h"

// 00C7F630  Trigger::Act::CONVERSATION_ST  size=32  [class]
undefined4 __fastcall Trigger::Act::CONVERSATION_ST(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aad1c);
    return 0;
  }
  return 1;
}

