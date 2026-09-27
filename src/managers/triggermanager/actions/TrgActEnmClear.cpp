// src/managers/triggermanager/actions/TrgActEnmClear.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EDA0..00C7EE00, 2 functions

#include "mgrr.h"

// 00C7EDA0  Trigger::Act::ENM_CLEAR  size=81  [class]
undefined4 __fastcall Trigger::Act::ENM_CLEAR(int param_1)

{
  char *_Str2;
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa80c);
    return 0;
  }
  _Str2 = (char *)(*(int *)(param_1 + 4) + 8);
  iVar1 = __stricmp("all",_Str2);
  if (iVar1 == 0) {
    FUN_00c193b0();
    return 1;
  }
  FUN_00c19430(_Str2);
  return 1;
}

// 00C7EE00  Trigger::Act::ENM_CLEAR_2  size=78  [class]
undefined4 __fastcall Trigger::Act::ENM_CLEAR_2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa80c);
    return 0;
  }
  if (*(int *)(iVar1 + 0xc) == -1) {
    FUN_00c193e0(*(undefined4 *)(iVar1 + 8));
    return 1;
  }
  FUN_00c19400(*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0xc));
  return 1;
}

