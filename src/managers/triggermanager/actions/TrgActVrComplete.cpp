// src/managers/triggermanager/actions/TrgActVrComplete.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81090..00C81090, 1 functions

#include "mgrr.h"

// 00C81090  Trigger::Act::VR_COMPLETE  size=68  [class]
bool __fastcall Trigger::Act::VR_COMPLETE(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abb74);
    return false;
  }
  iVar2 = FUN_0095bfa0();
  if (iVar2 != 0) {
    FUN_0095bfa0();
    FUN_0095c080(*(undefined4 *)(iVar1 + 8));
  }
  return iVar2 != 0;
}

