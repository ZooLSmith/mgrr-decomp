// src/managers/triggermanager/actions/TrgActCamFocus.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C87200..00C87200, 1 functions

#include "mgrr.h"

// 00C87200  Trigger::Act::CAM_FOCUS  size=207  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::CAM_FOCUS(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac670);
    return 0;
  }
  iVar2 = FUN_00c78580(*(undefined4 *)(iVar1 + 8),&local_20);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ac64c,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  _DAT_01dbd870 = _DAT_01dbd870 | 4;
  _DAT_01dbd898 = 0;
  _DAT_01dbd880 = local_20;
  _DAT_01dbd884 = local_1c;
  _DAT_01dbd888 = local_18;
  _DAT_01dbd88c = 0x3f800000;
  _DAT_01dbd890 = *(float *)(iVar1 + 0x10) * -1.0;
  _DAT_01dbd894 = *(float *)(iVar1 + 0xc) * -1.0;
  return 1;
}

