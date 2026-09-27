// src/unsorted/unit_005E87B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E87B0..005E88C0, 2 functions

#include "types.h"

// 005E87B0  FUN_005e87b0  size=13  [run]
void __thiscall FUN_005e87b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x90c) = param_2;
  return;
}

// 005E88C0  FUN_005e88c0  size=257  [run]
void __fastcall FUN_005e88c0(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  
  param_1[0x234] = 0;
  fVar6 = (float10)FUN_00dde300(*(undefined4 *)(param_1[0x248] + 0xc),
                                *(undefined4 *)(param_1[0x248] + 8));
  param_1[0x232] = (int)(float)fVar6;
  param_1[0x233] = 0;
  if (param_1[0x243] == 0) {
    fVar6 = (float10)FUN_00dde300(((undefined4 *)param_1[0x248])[1],*(undefined4 *)param_1[0x248]);
    param_1[0x234] = (int)(float)fVar6;
  }
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
  if (iVar3 == 0) {
    fVar6 = (float10)FUN_00dde300(0xc3340000,0x43340000);
  }
  else {
    pfVar4 = (float *)FUN_00a7c8b0();
    pfVar5 = (float *)(**(code **)(*param_1 + 0x68))();
    fVar6 = (float10)fpatan((float10)*pfVar5 - (float10)*pfVar4,
                            (float10)pfVar5[2] - (float10)pfVar4[2]);
    fVar6 = fVar6 * (float10)57.29578;
  }
  param_1[0x230] = (int)(float)fVar6;
  *(undefined2 *)(param_1 + 0x242) = 0x100;
  param_1[0x247] = 0;
  param_1[0x235] = 0;
  fVar1 = *(float *)(param_1[0x21c] + 8);
  param_1[0x186] = 0;
  param_1[0x231] = (int)(fVar1 * 0.017453292);
  return;
}

