// src/unsorted/unit_00C785D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C785D0..00C789D0, 6 functions

#include "mgrr.h"

// 00C785D0  FUN_00c785d0  size=90  [run]
undefined4 FUN_00c785d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00fdc7b0(param_1,0x26);
  if (iVar1 != param_1) {
    iVar1 = FUN_00fdc7b0(param_1,0x40);
    if (iVar1 != param_1) {
      *param_2 = 0;
      goto LAB_00c78614;
    }
  }
  *param_2 = 1;
LAB_00c78614:
  uVar2 = FUN_00e03ea0(param_1);
  param_2[1] = uVar2;
  return 1;
}

// 00C78800  FUN_00c78800  size=53  [run]
void __fastcall FUN_00c78800(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  return;
}

// 00C78840  FUN_00c78840  size=71  [run]
void __fastcall FUN_00c78840(int param_1)

{
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    }
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0xc))();
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x30) + 4))(1);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00C78890  FUN_00c78890  size=51  [run]
void __fastcall FUN_00c78890(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 1;
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = 4;
    }
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c788c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}

// 00C788D0  FUN_00c788d0  size=256  [run]
void __fastcall FUN_00c788d0(undefined4 *param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  if ((param_1[1] == 1) || (param_1[1] == 2)) {
    if ((int *)param_1[0xb] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xb] + 0x10))();
    }
    if ((int *)param_1[0xc] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xc] + 0x14))();
    }
    if (param_1[1] == 2) {
      fVar5 = (float10)FUN_00e03a90(0);
      fVar1 = (float)param_1[5];
      param_1[5] = (float)((float10)fVar1 - fVar5);
      if ((float10)0 < (float10)fVar1 - fVar5) {
        return;
      }
      param_1[1] = 3;
      if (((DAT_01bea070 & 0x800) == 0) && ((int)param_1[0xd] < 1)) {
        FUN_00dd5650(&DAT_016a8a40,*param_1);
      }
    }
    else {
      if ((int *)param_1[0xb] == (int *)0x0) {
        return;
      }
      uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x14))();
      if (param_1[10] == 1) {
        uVar2 = uVar2 ^ 1;
      }
      if (uVar2 != 1) {
        *(undefined4 *)(param_1[0xb] + 0xc) = 0;
        return;
      }
      *(undefined4 *)(param_1[0xb] + 0xc) = 1;
      if (0.0 < (float)param_1[4]) {
        param_1[5] = param_1[4];
        param_1[1] = 2;
        return;
      }
      param_1[1] = 3;
    }
    if ((int *)param_1[0xc] != (int *)0x0) {
      iVar4 = *(int *)param_1[0xc];
      uVar3 = (**(code **)(*(int *)param_1[0xb] + 0x18))();
      iVar4 = (**(code **)(iVar4 + 0x18))(uVar3);
      if (iVar4 == 0) {
        param_1[1] = 4;
      }
    }
  }
  return;
}

// 00C789D0  FUN_00c789d0  size=348  [run]
void __fastcall FUN_00c789d0(undefined4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0x10))();
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 0x14))();
  }
  iVar3 = param_1[1];
  if ((iVar3 == 1) || (iVar3 == 5)) {
    if (param_1[0xb] == 0) {
      return;
    }
    *(undefined4 *)(param_1[0xb] + 8) = 0;
    uVar4 = (**(code **)(*(int *)param_1[0xb] + 0x14))();
    if (param_1[10] == 1) {
      uVar4 = uVar4 ^ 1;
    }
    if (uVar4 != 1) {
      *(undefined4 *)(param_1[0xb] + 0xc) = 0;
      return;
    }
    *(undefined4 *)(param_1[0xb] + 8) = 1;
    *(undefined4 *)(param_1[0xb] + 0xc) = 1;
    if (0.0 < (float)param_1[4]) {
      param_1[5] = param_1[4];
      param_1[1] = 2;
      return;
    }
    param_1[1] = 3;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        return;
      }
      if ((param_1[2] != -1) && ((int)param_1[2] <= (int)param_1[3])) {
        return;
      }
      *(undefined4 *)(param_1[0xb] + 8) = 2;
      if ((int *)param_1[0xb] == (int *)0x0) {
        return;
      }
      uVar4 = (**(code **)(*(int *)param_1[0xb] + 0x14))();
      if (param_1[10] == 1) {
        uVar4 = uVar4 ^ 1;
      }
      if (uVar4 != 0) {
        return;
      }
      param_1[1] = 1;
      (**(code **)(*(int *)param_1[0xb] + 0x20))();
      *(undefined4 *)(param_1[0xb] + 8) = 0;
      return;
    }
    fVar5 = (float10)FUN_00e03a90(0);
    fVar1 = (float)param_1[5];
    param_1[5] = (float)((float10)fVar1 - fVar5);
    if ((float10)0 < (float10)fVar1 - fVar5) {
      return;
    }
    param_1[1] = 3;
    if (((DAT_01bea070 & 0x800) == 0) && ((int)param_1[0xd] < 1)) {
      FUN_00dd5650(&DAT_016a8a40,*param_1);
    }
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    iVar3 = *(int *)param_1[0xc];
    uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x18))();
    iVar3 = (**(code **)(iVar3 + 0x18))(uVar2);
    if (iVar3 == 0) {
      param_1[1] = 5;
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}

