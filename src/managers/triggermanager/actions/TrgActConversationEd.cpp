// src/managers/triggermanager/actions/TrgActConversationEd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F650..00C7F650, 1 functions

#include "mgrr.h"

// 00C7F650  Trigger::Act::CONVERSATION_ED  size=32  [class]
undefined4 __fastcall Trigger::Act::CONVERSATION_ED(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aad50);
    return 0;
  }
  return 1;
}

