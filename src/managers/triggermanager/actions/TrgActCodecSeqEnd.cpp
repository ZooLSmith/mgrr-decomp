// src/managers/triggermanager/actions/TrgActCodecSeqEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80BB0..00C80BB0, 1 functions

#include "mgrr.h"

// 00C80BB0  Trigger::Act::CODEC_SEQ_END  size=47  [class]
undefined4 __fastcall Trigger::Act::CODEC_SEQ_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab90c);
    return 0;
  }
  FUN_0093a210(*(int *)(param_1 + 4) + 8);
  return 1;
}

