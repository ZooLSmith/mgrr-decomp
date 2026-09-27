// src/unsorted/unit_00775ED0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00775ED0..00775FB0, 2 functions

#include "mgrr.h"

// 00775ED0  FUN_00775ed0  size=217  [run]
void __fastcall FUN_00775ed0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0x920) <= 0.0)) {
    if (*(int *)(param_1 + 0x4a0) == 5) {
      if ((*(uint *)(param_1 + 0x11f4) & 0x80000) != 0) {
        if (*(int *)(param_1 + 0xa84) != 0) {
          iVar3 = FUN_00a8cab0();
          if (iVar3 == 0x10001e) {
            *(undefined4 *)(param_1 + 0x1510) = 0x42a00000;
          }
        }
        FUN_007749f0();
        return;
      }
      iVar3 = FUN_0075a510();
      if ((iVar3 != 0) &&
         (fVar1 = *(float *)(param_1 + 0x40) - *(float *)(iVar3 + 0x40),
         fVar2 = *(float *)(param_1 + 0x48) - *(float *)(iVar3 + 0x48),
         25.0 <= fVar2 * fVar2 + fVar1 * fVar1)) {
        iVar3 = FUN_004b5e90();
        if (iVar3 != 0) {
          FUN_0075fad0(0x7f);
          return;
        }
      }
    }
    else {
      iVar3 = FUN_00771a90();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x1760) = 0;
        *(undefined4 *)(param_1 + 0x1764) = 0;
        *(undefined4 *)(param_1 + 0x1768) = 0;
        *(undefined4 *)(param_1 + 0x176c) = 0;
        if ((*(int *)(param_1 + 0x764) != 0) && (*(int *)(param_1 + 0x940) == 0)) {
          FUN_008e0d30((undefined4 *)(param_1 + 0x1760));
        }
      }
    }
  }
  return;
}

// 00775FB0  FUN_00775fb0  size=429  [run]
void __fastcall FUN_00775fb0(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  
  if (((((DAT_01bea060 & 0x2000000) == 0) &&
       (fVar1 = *(float *)(param_1 + 0x1674), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0))) &&
      ((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0)) && (DAT_01bea740 == 0)) {
    iVar4 = FUN_0075a5a0();
    if (iVar4 != 0) {
      FUN_00774c60();
      return;
    }
    iVar4 = FUN_007605e0();
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x95c) == 0) {
        *(undefined4 *)(param_1 + 0x95c) = 1;
        iVar4 = FUN_00766580();
        if (iVar4 != 0) {
          return;
        }
      }
      if ((*(uint *)(param_1 + 0x11f4) & 0x80000) != 0) {
        FUN_007749f0();
        return;
      }
      if (*(int *)(param_1 + 0x61c) == 1) {
        *(float *)(param_1 + 0x920) =
             *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x920);
        iVar4 = FUN_00756c90();
        if (((iVar4 != 0) && ((float10)*(float *)(param_1 + 0x924) * (float10)0.1 <= extraout_ST0))
           && (iVar4 = FUN_0075a510(), iVar4 != 0)) {
          if ((*(int *)(param_1 + 0x1208) == 2) && (iVar5 = FUN_00756a30(0), iVar5 != -1)) {
            FUN_0075fad0(iVar5);
            return;
          }
          fVar1 = *(float *)(param_1 + 0x40) - *(float *)(iVar4 + 0x40);
          fVar2 = *(float *)(param_1 + 0x48) - *(float *)(iVar4 + 0x48);
          if ((25.0 <= fVar2 * fVar2 + fVar1 * fVar1) && (iVar4 = FUN_004b5e90(), iVar4 != 0)) {
            FUN_0075fad0(0x7f);
            return;
          }
          if (((*(int *)(param_1 + 0x618) == 0x7e) && (sVar3 = FUN_00dde2d0(0,9), sVar3 == 0)) &&
             (*(float *)(param_1 + 0xa90) <= 25.0)) {
            FUN_0075fad0(0x2b);
          }
          if ((*(float *)(param_1 + 0x1510) <= 0.0) &&
             ((*(uint *)(param_1 + 0x11f4) & 0x2000000) != 0)) {
            FUN_00771a90();
            return;
          }
        }
      }
    }
  }
  return;
}

