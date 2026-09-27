// src/phase/app/p210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48070..00D6CDD0, 9 functions

#include "mgrr.h"
#include "P210.h"

// 00D48070  P210::vf20  size=3  [class]
void P210::vf20(void)

{
  return;
}

// 00D48080  P210::vf28  size=3  [class]
void P210::vf28(void)

{
  return;
}

// 00D48090  P210::vf14  size=3  [class]
void P210::vf14(void)

{
  return;
}

// 00D480A0  P210::vf1C  size=3  [class]
void P210::vf1C(void)

{
  return;
}

// 00D480B0  P210::vf18  size=1  [class]
void P210::vf18(void)

{
  return;
}

// 00D480C0  P210::vf08  size=50  [class]
void P210::vf08(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00c14bb0();
  iVar3 = *piVar1;
  uVar2 = FUN_00e03ea0(&DAT_016bc564);
  iVar3 = (**(code **)(iVar3 + 0x2c))(uVar2);
  if (iVar3 != 0) {
    FUN_00917c50(iVar3,8);
  }
  return;
}

// 00D48100  P210::vf0C  size=1  [class]
void P210::vf0C(void)

{
  return;
}

// 00D48110  P210::vf10  size=1  [class]
void P210::vf10(void)

{
  return;
}

// 00D6CDD0  P210::vf00  size=54  [class]
undefined4 * __thiscall P210::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

