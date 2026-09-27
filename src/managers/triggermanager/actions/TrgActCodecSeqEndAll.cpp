// src/managers/triggermanager/actions/TrgActCodecSeqEndAll.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81270..00C81270, 1 functions

#include "mgrr.h"

// 00C81270  Trigger::Act::CODEC_SEQ_END_ALL  size=42  [class]
undefined4 __fastcall Trigger::Act::CODEC_SEQ_END_ALL(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abcd4);
    return 0;
  }
  FUN_00939bc0();
  return 1;
}

