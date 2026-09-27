// src/unsorted/unit_00D54B00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D54B00..00D54B00, 1 functions

#include "types.h"

// 00D54B00  FUN_00d54b00  size=283  [run]
undefined4 __fastcall FUN_00d54b00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00407d90(1);
      fVar3 = (float10)FUN_00a95680(0);
      fVar4 = (float10)FUN_00408420();
      *(float *)(param_1 + 0x31c) = (float)fVar4;
      fVar4 = (float10)FUN_00408430();
      fVar3 = (float10)*(float *)(param_1 + 0x31c) /
              ((float10)(float)fVar3 + fVar4 * (float10)(float)fVar3);
      *(float *)(param_1 + 400) = (float)fVar3;
      *(float *)(param_1 + 0x194) = (float)fVar3;
      *(float *)(param_1 + 0x150) = (float)fVar3;
      *(float *)(param_1 + 0x154) = (float)fVar3;
      fVar3 = (float10)FUN_004084a0();
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x324) = 0;
      *(undefined4 *)(param_1 + 0x344) = 0;
      *(float *)(param_1 + 0x198) = (float)fVar3;
      *(float *)(param_1 + 800) = (float)fVar3;
      *(undefined4 *)(param_1 + 0x328) = 0x40000000;
      puVar2 = (undefined4 *)FUN_00dd2bc0();
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2[1] = 0;
      *puVar2 = 10;
      puVar2 = (undefined4 *)FUN_00dd2bc0();
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2[1] = 0;
      *puVar2 = 0xb;
      *(undefined4 *)(param_1 + 0x310) = 0;
      *(undefined4 *)(param_1 + 0x314) = 0;
      *(undefined4 *)(param_1 + 0x318) = 0;
      *(undefined4 *)(param_1 + 0x32c) = 0;
      return 1;
    }
  }
  return 0;
}

