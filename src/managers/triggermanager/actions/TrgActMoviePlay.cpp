// src/managers/triggermanager/actions/TrgActMoviePlay.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FED0..00C7FED0, 1 functions

#include "mgrr.h"

// 00C7FED0  Trigger::Act::MOVIE_PLAY  size=77  [class]
undefined4 __fastcall Trigger::Act::MOVIE_PLAY(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab188);
    return 0;
  }
  if (*(char *)(iVar1 + 0xc) == '\0') {
    FUN_00c1d5b0(*(undefined4 *)(iVar1 + 8),0);
    return 1;
  }
  FUN_00c1d5b0(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc);
  return 1;
}

