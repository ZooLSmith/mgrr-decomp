// src/unsorted/unit_008F7810.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F7810..008F7A50, 6 functions

#include "mgrr.h"

// 008F7810  FUN_008f7810  size=25  [run]
void __fastcall FUN_008f7810(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}

// 008F7830  FUN_008f7830  size=25  [run]
void __fastcall FUN_008f7830(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}

// 008F7850  FUN_008f7850  size=8  [run]
void __fastcall FUN_008f7850(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}

// 008F7860  FUN_008f7860  size=8  [run]
void __fastcall FUN_008f7860(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

// 008F7A10  FUN_008f7a10  size=35  [run]
float10 FUN_008f7a10(float param_1)

{
  return (float10)ABS(param_1);
}

// 008F7A50  FUN_008f7a50  size=76  [run]
float10 FUN_008f7a50(float param_1)

{
  float10 fVar1;
  float fVar2;
  
  fVar2 = ABS(param_1);
  if (NAN(fVar2) || 1.0 < fVar2 == (fVar2 == 1.0)) {
    fVar1 = (float10)FUN_00fdc4e0(fVar2,0,0,0);
  }
  else {
    fVar1 = (float10)0;
    if ((float10)param_1 <= fVar1) {
      return (float10)3.1415927;
    }
  }
  return fVar1;
}

