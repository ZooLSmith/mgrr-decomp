// src/phase/app/p520.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4A9D0..00D70510, 7 functions

#include "mgrr.h"
#include "P520.h"

// 00D4A9D0  P520::vf1C  size=3  [class]
void P520::vf1C(void)

{
  return;
}

// 00D4A9E0  P520::vf18  size=47  [class]
void P520::vf18(void)

{
  int iVar1;
  
  iVar1 = FUN_00c81e00(0x3a);
  if (iVar1 != 0) {
    iVar1 = FUN_00a5f640(5,1);
    if (iVar1 != 0) {
      FUN_00c81e40(0x3a);
    }
  }
  return;
}

// 00D4AA10  P520::vf08  size=1  [class]
void P520::vf08(void)

{
  return;
}

// 00D4AA20  P520::vf0C  size=1  [class]
void P520::vf0C(void)

{
  return;
}

// 00D4AA30  P520::vf10  size=1  [class]
void P520::vf10(void)

{
  return;
}

// 00D55050  P520::vf14  size=62  [class]
void P520::vf14(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = "P520_STREET";
  uVar3 = 1;
  uVar1 = FUN_00e03ea0("P520_STREET",1,"P520_STREET");
  iVar2 = FUN_00d4f0b0(uVar1,uVar3,pcVar4);
  if (iVar2 == 0) {
    FUN_00c81e90(0x3a);
    FUN_00c81e90(0x5a);
  }
  return;
}

// 00D70510  P520::vf00  size=54  [class]
undefined4 * __thiscall P520::vf00(undefined4 *param_1,byte param_2)

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

