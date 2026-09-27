// src/unsorted/unit_00B28190.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B28190..00B28270, 2 functions

#include "types.h"

// 00B28190  FUN_00b28190  size=217  [run]
void __fastcall FUN_00b28190(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0x920) <= 0.0)) {
    if (*(int *)(param_1 + 0x4a0) == 5) {
      if ((*(uint *)(param_1 + 0x1124) & 0x80000) != 0) {
        if (*(int *)(param_1 + 0xa84) != 0) {
          iVar3 = FUN_00a8cab0();
          if (iVar3 == 0xb7) {
            *(undefined4 *)(param_1 + 0x1440) = 0x42a00000;
          }
        }
        FUN_00b26690();
        return;
      }
      iVar3 = FUN_00b0b740();
      if ((iVar3 != 0) &&
         (fVar1 = *(float *)(param_1 + 0x40) - *(float *)(iVar3 + 0x40),
         fVar2 = *(float *)(param_1 + 0x48) - *(float *)(iVar3 + 0x48),
         25.0 <= fVar2 * fVar2 + fVar1 * fVar1)) {
        iVar3 = FUN_004b5e90();
        if (iVar3 != 0) {
          FUN_00b10f60(0x7f);
          return;
        }
      }
    }
    else {
      iVar3 = FUN_00b236c0();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x1690) = 0;
        *(undefined4 *)(param_1 + 0x1694) = 0;
        *(undefined4 *)(param_1 + 0x1698) = 0;
        *(undefined4 *)(param_1 + 0x169c) = 0;
        if ((*(int *)(param_1 + 0x764) != 0) && (*(int *)(param_1 + 0x940) == 0)) {
          FUN_008e0d30((undefined4 *)(param_1 + 0x1690));
        }
      }
    }
  }
  return;
}

// 00B28270  FUN_00b28270  size=429  [run]
void __fastcall FUN_00b28270(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  
  if (((((DAT_01bea060 & 0x2000000) == 0) &&
       (fVar1 = *(float *)(param_1 + 0x15a4), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0))) &&
      ((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0)) && (DAT_01bea740 == 0)) {
    iVar4 = FUN_00b0b7d0();
    if (iVar4 != 0) {
      FUN_00b26900();
      return;
    }
    iVar4 = FUN_00b11a70();
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x95c) == 0) {
        *(undefined4 *)(param_1 + 0x95c) = 1;
        iVar4 = FUN_00b17c50();
        if (iVar4 != 0) {
          return;
        }
      }
      if ((*(uint *)(param_1 + 0x1124) & 0x80000) != 0) {
        FUN_00b26690();
        return;
      }
      if (*(int *)(param_1 + 0x61c) == 1) {
        *(float *)(param_1 + 0x920) =
             *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x920);
        iVar4 = FUN_00b07f00();
        if (((iVar4 != 0) && ((float10)*(float *)(param_1 + 0x924) * (float10)0.1 <= extraout_ST0))
           && (iVar4 = FUN_00b0b740(), iVar4 != 0)) {
          if ((*(int *)(param_1 + 0x1138) == 2) && (iVar5 = FUN_00b07ca0(0), iVar5 != -1)) {
            FUN_00b10f60(iVar5);
            return;
          }
          fVar1 = *(float *)(param_1 + 0x40) - *(float *)(iVar4 + 0x40);
          fVar2 = *(float *)(param_1 + 0x48) - *(float *)(iVar4 + 0x48);
          if ((25.0 <= fVar2 * fVar2 + fVar1 * fVar1) && (iVar4 = FUN_004b5e90(), iVar4 != 0)) {
            FUN_00b10f60(0x7f);
            return;
          }
          if (((*(int *)(param_1 + 0x618) == 0x7e) && (sVar3 = FUN_00dde2d0(0,9), sVar3 == 0)) &&
             (*(float *)(param_1 + 0xa90) <= 25.0)) {
            FUN_00b10f60(0x2b);
          }
          if ((*(float *)(param_1 + 0x1440) <= 0.0) &&
             ((*(uint *)(param_1 + 0x1124) & 0x2000000) != 0)) {
            FUN_00b236c0();
            return;
          }
        }
      }
    }
  }
  return;
}

