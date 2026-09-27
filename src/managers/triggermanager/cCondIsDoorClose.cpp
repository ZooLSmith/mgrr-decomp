// src/managers/triggermanager/cCondIsDoorClose.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7AA10..00C85850, 5 functions

#include "mgrr.h"

// 00C7AA10  Trigger::cCondIsDoorClose::cCondIsDoorClose  size=39  [class]
void __fastcall Trigger::cCondIsDoorClose::cCondIsDoorClose(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7AA50  Trigger::cCondIsDoorClose::vf10  size=1  [class]
void Trigger::cCondIsDoorClose::vf10(void)

{
  return;
}

// 00C7AA60  Trigger::cCondIsDoorClose::vf14  size=51  [class]
undefined4 __fastcall Trigger::cCondIsDoorClose::vf14(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = (char *)(param_1 + 0x10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != (char *)(param_1 + 0x11)) {
    uVar2 = FUN_00e03ea0((char *)(param_1 + 0x10));
    uVar2 = FUN_00c47c30(uVar2);
  }
  return uVar2;
}

// 00C7AAA0  Trigger::cCondIsDoorClose::vf1C  size=32  [class]
void __thiscall Trigger::cCondIsDoorClose::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    _strcpy_s((char *)(param_1 + 0x10),0x10,(char *)(param_2 + 8));
  }
  return;
}

// 00C85850  Trigger::cCondIsDoorClose::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsDoorClose::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

