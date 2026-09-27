// src/managers/triggermanager/cCondIsDifficulty.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7DCB0..00C86AD0, 4 functions

#include "mgrr.h"

// 00C7DCB0  Trigger::cCondIsDifficulty::vf10  size=1  [class]
void Trigger::cCondIsDifficulty::vf10(void)

{
  return;
}

// 00C7DCC0  Trigger::cCondIsDifficulty::vf14  size=83  [class]
bool __fastcall Trigger::cCondIsDifficulty::vf14(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_009c4bf0();
  bVar1 = false;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    return iVar2 < *(int *)(param_1 + 0x14);
  case 2:
    return iVar2 <= *(int *)(param_1 + 0x14);
  case 3:
    return iVar2 == *(int *)(param_1 + 0x14);
  case 4:
    return *(int *)(param_1 + 0x14) < iVar2;
  case 5:
    bVar1 = *(int *)(param_1 + 0x14) <= iVar2;
  }
  return bVar1;
}

// 00C7DD30  Trigger::cCondIsDifficulty::vf1C  size=22  [class]
void __thiscall Trigger::cCondIsDifficulty::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C86AD0  Trigger::cCondIsDifficulty::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsDifficulty::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

