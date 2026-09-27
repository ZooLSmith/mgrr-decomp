// src/unsorted/unit_00EF79A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EF79A0..00EF7AA0, 2 functions

#include "mgrr.h"

// 00EF79A0  FUN_00ef79a0  size=247  [run]
undefined4 __fastcall FUN_00ef79a0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 0x120) != 0) &&
     (fVar1 = (float)*(int *)(param_1 + 0x120),
     fVar1 < *(float *)(param_1 + 0x118) != (fVar1 == *(float *)(param_1 + 0x118)))) {
LAB_00ef79c5:
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return 0;
  }
  if (((*(uint *)(param_1 + 0x30) & 0x2000) == 0) &&
     (((*(byte *)(param_1 + 0x3f) & 1) == 0 || ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0)))) {
    fVar2 = (float10)*(float *)(param_1 + 0x110);
  }
  else {
    fVar2 = (float10)FUN_009d59c0(param_1);
  }
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x118);
  *(float *)(param_1 + 0x118) = (float)fVar2 + *(float *)(param_1 + 0x118);
  if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
    fVar2 = (float10)FUN_009d59c0(param_1);
    if (0.0 < *(float *)(param_1 + 0x94)) {
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
      *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - (float)fVar2;
      return 1;
    }
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) - (float)fVar2;
    if (*(float *)(param_1 + 0x9c) <= 0.0) goto LAB_00ef79c5;
  }
  return 1;
}

// 00EF7AA0  FUN_00ef7aa0  size=179  [run]
void __fastcall FUN_00ef7aa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x430) != 0) && (uVar3 = 0, *(int *)(*(int *)(param_1 + 0x430) + 4) != 0))
  {
    do {
      FUN_00f59e40();
      FUN_00f5a050(uVar3);
      iVar1 = FUN_00f5a080(uVar3);
      if ((iVar1 == 0) || ((uint *)(iVar1 + 0x20) == (uint *)0x0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 0x20);
        if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
          uVar2 = FUN_00f59ed0(2);
          FUN_00dd5650(&DAT_016597b4,uVar2);
        }
      }
      if (*(int *)(param_1 + 0x120) < (int)(uint)*(ushort *)(uVar4 + 8)) {
        *(uint *)(param_1 + 0x120) = *(ushort *)(uVar4 + 8) + 2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x430) + 4));
  }
  return;
}

