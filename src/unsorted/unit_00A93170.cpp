// src/unsorted/unit_00A93170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A93170..00A93220, 3 functions

#include "types.h"

// 00A93170  FUN_00a93170  size=55  [run]
void __fastcall FUN_00a93170(int param_1)

{
  if ((((*(int *)(param_1 + 0x764) == 0) && (*(int *)(param_1 + 0x7b0) == 0)) &&
      (*(int *)(param_1 + 0x76c) == 0)) &&
     ((*(int *)(param_1 + 0x770) == 0 && (*(int *)(param_1 + 0x65c) == 0)))) {
    FUN_00a17aa0();
    return;
  }
  switchD_0080dbae::default();
  return;
}

// 00A931B0  FUN_00a931b0  size=101  [run]
void __fastcall FUN_00a931b0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x7d4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7d4) + 4))(1);
    *(undefined4 *)(param_1 + 0x7d4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7cc);
  if (iVar1 != 0) {
    FUN_00d82650();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7cc) = 0;
  }
  if (*(int **)(param_1 + 2000) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 2000) + 4))(1);
    *(undefined4 *)(param_1 + 2000) = 0;
  }
  return;
}

// 00A93220  FUN_00a93220  size=448  [run]
void __thiscall
FUN_00a93220(int param_1,int *param_2,undefined4 param_3,float param_4,float param_5,float param_6,
            uint param_7)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  int iStack_30;
  int local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  local_2c = 0;
  local_28 = (float)FUN_00a7c8a0();
  if (local_28 != 0.0) {
    local_24 = param_6 * param_6;
    piVar6 = (int *)FUN_00d773c0();
    (**(code **)(*piVar6 + 0x20))(*(undefined4 *)(param_1 + 0x7b8));
    piVar6 = *(int **)(*(int *)(param_1 + 0x7b8) + 4);
    if (piVar6 != piVar6 + *(int *)(*(int *)(param_1 + 0x7b8) + 8)) {
      do {
        iVar1 = *piVar6;
        iVar7 = *(int *)(iVar1 + 0x360);
        if ((((iVar7 != 1) && (iVar7 < 4)) && (iVar7 == 0)) &&
           ((iStack_30 = *(int *)(iVar1 + 0x3f4), iStack_30 != 0 &&
            (iVar7 = FUN_00a7c8a0(), iVar7 != param_1)))) {
          iVar7 = *(int *)(iVar1 + 0x368);
          local_24 = *(float *)(iVar7 + 0x80);
          fStack_20 = *(float *)(iVar7 + 0x84);
          fStack_1c = *(float *)(iVar7 + 0x88);
          uStack_18 = *(undefined4 *)(iVar7 + 0x8c);
          if (*(int *)(iVar1 + 0x378) != 0) {
            piVar2 = *(int **)(*(int *)(iVar1 + 0x378) + 8);
            iVar1 = *piVar2;
            if (((((iVar1 != 0) && (iVar1 != 1)) &&
                 ((iVar1 != 2 && ((iVar1 != 0x1b0 && (iVar1 != 0x147)))))) &&
                ((param_7 == 0 ||
                 ((piVar2[(param_7 >> 5) + 0x23] & 0x80000000U >> ((byte)param_7 & 0x1f)) != 0))))
               && (fVar3 = local_24 - *(float *)(local_2c + 0x40),
                  fVar5 = fStack_20 - *(float *)(local_2c + 0x44),
                  fVar4 = fStack_1c - *(float *)(local_2c + 0x48),
                  fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4 <= local_28)) {
              fVar8 = (float10)FUN_009f8c60(&local_24);
              fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)param_4));
              if (ABS(fVar8) <= (float10)param_5) {
                (**(code **)(*param_2 + 8))(&iStack_30);
              }
            }
          }
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != (int *)(*(int *)(*(int *)(param_1 + 0x7b8) + 4) +
                                *(int *)(*(int *)(param_1 + 0x7b8) + 8) * 4));
    }
  }
  return;
}

