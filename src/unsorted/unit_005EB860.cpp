// src/unsorted/unit_005EB860.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EB860..005EB9E0, 2 functions

#include "mgrr.h"

// 005EB860  FUN_005eb860  size=330  [run]
void __fastcall FUN_005eb860(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined *puVar8;
  
  piVar4 = (int *)FUN_00c13920();
  iVar5 = (**(code **)(*piVar4 + 0x28))(0);
  if (iVar5 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar5 = FUN_00dd6d80(puVar8);
      if ((iVar5 != 0) && (piVar4[0x300] != 0)) {
        fVar1 = (float)piVar4[0x308];
        fVar2 = (float)piVar4[0x30a];
        sVar3 = FUN_00dde2d0(0,1);
        fVar6 = (float10)fVar1;
        if (sVar3 == 1) {
          fVar6 = fVar6 * (float10)-1.0;
          fVar7 = (float10)-1.0 * (float10)fVar2;
        }
        else {
          fVar7 = (float10)fVar2;
        }
        fVar6 = (float10)fpatan(-fVar6,-fVar7);
        fVar6 = fVar6 * (float10)57.29578;
        goto LAB_005eb920;
      }
    }
  }
  fVar6 = (float10)FUN_00dde300(0xc3340000,0x43340000);
LAB_005eb920:
  *(float *)(param_1 + 0x8c0) = (float)fVar6;
  fVar6 = (float10)FUN_00dde300(*(undefined4 *)(*(int *)(param_1 + 0x930) + 0x10),
                                *(undefined4 *)(*(int *)(param_1 + 0x930) + 0xc));
  *(float *)(param_1 + 0x8d0) = (float)fVar6;
  fVar6 = (float10)FUN_00dde300(*(undefined4 *)(*(int *)(param_1 + 0x930) + 0x18),
                                *(undefined4 *)(*(int *)(param_1 + 0x930) + 0x18));
  *(float *)(param_1 + 0x8c8) = (float)fVar6;
  *(undefined4 *)(param_1 + 0x8cc) = 0;
  FUN_00a8caf0(1,0,0,0);
  *(undefined4 *)(param_1 + 0x8d4) = 0;
  *(undefined2 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x910) = 0;
  return;
}

// 005EB9E0  FUN_005eb9e0  size=60  [run]
void __thiscall FUN_005eb9e0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

