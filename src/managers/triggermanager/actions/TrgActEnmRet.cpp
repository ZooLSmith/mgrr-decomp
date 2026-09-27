// src/managers/triggermanager/actions/TrgActEnmRet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7ED10..00C7ED70, 2 functions

#include "mgrr.h"

// 00C7ED10  Trigger::Act::ENM_RET  size=92  [class]
undefined4 __fastcall Trigger::Act::ENM_RET(int param_1)

{
  char *_Str2;
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa7e0);
    return 0;
  }
  _Str2 = (char *)(*(int *)(param_1 + 4) + 8);
  iVar1 = __stricmp("all",_Str2);
  if (iVar1 == 0) {
    FUN_00c19210();
    return 1;
  }
  uVar2 = FUN_00c18740(_Str2);
  FUN_00c192d0(uVar2);
  return 1;
}

// 00C7ED70  Trigger::Act::ENM_RET_2  size=47  [class]
undefined4 __fastcall Trigger::Act::ENM_RET_2(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa7e0);
    return 0;
  }
  FUN_00c192d0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

