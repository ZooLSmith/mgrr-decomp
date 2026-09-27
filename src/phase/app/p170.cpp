// src/phase/app/p170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47F60..00D70200, 7 functions

#include "types.h"

// 00D47F60  P170::vf18  size=1  [class]
void P170::vf18(void)

{
  return;
}

// 00D47F70  P170::vf1C  size=3  [class]
void P170::vf1C(void)

{
  return;
}

// 00D47F80  P170::vf0C  size=1  [class]
void P170::vf0C(void)

{
  return;
}

// 00D47F90  P170::vf08  size=1  [class]
void P170::vf08(void)

{
  return;
}

// 00D47FA0  P170::vf10  size=1  [class]
void P170::vf10(void)

{
  return;
}

// 00D523F0  P170::vf14  size=337  [class]
void P170::vf14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  DAT_01bea094 = DAT_01bea094 & 0xffffffbf;
  iVar1 = FUN_00fdbbd0(param_2,"P170_START");
  if (iVar1 == 0) {
    iVar1 = FUN_00fdbbd0(param_2,"P170_MOVIE");
    if (iVar1 != 0) {
      FUN_009c4b00(0);
      return;
    }
    iVar1 = FUN_00fdbbd0(param_2,"P170_MISTRAL01");
    if ((iVar1 == 0) && (iVar1 = FUN_00fdbbd0(param_2,"P170_MISTRAL02"), iVar1 == 0)) {
      iVar1 = FUN_00fdbbd0(param_2,"P170_MIST_RESULT");
      if (iVar1 != 0) {
        FUN_009c6930();
        return;
      }
      iVar1 = FUN_00fdbbd0(param_2,"P170_MISTRAL03");
      if (iVar1 == 0) {
        iVar1 = FUN_00fdbbd0(param_2,"P170_END");
        if (iVar1 == 0) {
          return;
        }
      }
      else {
        DAT_01bea094 = DAT_01bea094 | 0x40;
      }
      piVar2 = (int *)FUN_00c18350();
      (**(code **)(*piVar2 + 0x60))(0x162);
      piVar2 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar2 + 0x58))(0x162,1);
      return;
    }
    DAT_01bea094 = DAT_01bea094 | 0x40;
    piVar2 = (int *)FUN_00c18350();
    (**(code **)(*piVar2 + 0x5c))(0x162);
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x58))(0x162,0);
    uVar4 = 0xf0064;
    uVar3 = FUN_00e03ea0("pipestage",0xf0064);
    iVar1 = FUN_00a18d70(uVar3,uVar4);
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x1c))();
      return;
    }
  }
  return;
}

// 00D70200  P170::vf00  size=54  [class]
undefined4 * __thiscall P170::vf00(undefined4 *param_1,byte param_2)

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

