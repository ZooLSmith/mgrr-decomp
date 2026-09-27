// src/managers/triggermanager/cCondIsDoorOpen.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79B00..00C84DF0, 5 functions

#include "mgrr.h"

// 00C79B00  Trigger::cCondIsDoorOpen::cCondIsDoorOpen  size=39  [class]
void __fastcall Trigger::cCondIsDoorOpen::cCondIsDoorOpen(undefined4 *param_1)

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

// 00C79B40  Trigger::cCondIsDoorOpen::vf10  size=1  [class]
void Trigger::cCondIsDoorOpen::vf10(void)

{
  return;
}

// 00C79B50  Trigger::cCondIsDoorOpen::vf14  size=56  [class]
uint __fastcall Trigger::cCondIsDoorOpen::vf14(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)(param_1 + 0x10);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 != (char *)(param_1 + 0x11)) {
    uVar3 = FUN_00e03ea0((char *)(param_1 + 0x10));
    uVar2 = FUN_00c47c30(uVar3);
    uVar2 = ~uVar2 & 1;
  }
  return uVar2;
}

// 00C79B90  Trigger::cCondIsDoorOpen::vf1C  size=32  [class]
void __thiscall Trigger::cCondIsDoorOpen::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    _strcpy_s((char *)(param_1 + 0x10),0x10,(char *)(param_2 + 8));
  }
  return;
}

// 00C84DF0  Trigger::cCondIsDoorOpen::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsDoorOpen::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

