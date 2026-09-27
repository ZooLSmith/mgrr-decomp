// src/unsorted/unit_00905B30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00905B30..00905B30, 1 functions

#include "mgrr.h"

// 00905B30  FUN_00905b30  size=189  [run]
void __thiscall FUN_00905b30(int *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fStack_24;
  
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(param_1 + 0x18);
  }
  if (param_3 != (float *)0x0) {
    iVar6 = (**(code **)(*param_1 + 0xc))();
    if (iVar6 != 0) {
      iVar6 = param_1[0x10];
      fVar3 = *(float *)(iVar6 + 0xd0);
      fVar4 = *(float *)(iVar6 + 0xd4);
      fVar5 = *(float *)(iVar6 + 0xd8);
      fVar1 = (float)param_1[0xd];
      fVar2 = (float)param_1[0xe];
      fStack_24 = *(float *)(param_1[0x1c] + 0x1c);
      if (fStack_24 == 0.0) {
        fStack_24 = 0.001;
      }
      *param_3 = (((float)param_1[0xc] + fVar3) - fVar3) * fStack_24 + fVar3;
      param_3[1] = ((fVar1 + fVar4) - fVar4) * fStack_24 + fVar4;
      param_3[2] = ((fVar2 + fVar5) - fVar5) * fStack_24 + fVar5;
    }
  }
  return;
}

