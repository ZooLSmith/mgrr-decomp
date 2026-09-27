// src/unsorted/unit_009318C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009318C0..00931A20, 7 functions

#include "types.h"

// 009318C0  FUN_009318c0  size=21  [run]
void FUN_009318c0(undefined4 param_1,undefined4 param_2)

{
  EffectAreaScrSystem::SetEffectAreaEnable(param_1,param_2,1);
  return;
}

// 009318E0  FUN_009318e0  size=21  [run]
void FUN_009318e0(undefined4 param_1,undefined4 param_2)

{
  EffectAreaScrSystem::SetEffectAreaEnable(param_1,param_2,0);
  return;
}

// 00931970  FUN_00931970  size=23  [run]
void FUN_00931970(void)

{
  DAT_01bea060 = DAT_01bea060 | 0x40000000;
  FUN_00cad200(1);
  return;
}

// 00931990  FUN_00931990  size=23  [run]
void FUN_00931990(void)

{
  DAT_01bea060 = DAT_01bea060 & 0xbfffffff;
  FUN_00cad200(0);
  return;
}

// 009319B0  FUN_009319b0  size=84  [run]
void FUN_009319b0(int param_1)

{
  if (param_1 != 0) {
    FUN_00ddafc0(&DAT_01b7b9d0);
    FUN_00ddafc0(&DAT_01b7ba00);
    FUN_00ddafc0(&DAT_01b7ba30);
    FUN_00ddafc0(&DAT_01b7ba60);
    FUN_00cad200(0);
    DAT_01bea060 = DAT_01bea060 & 0xbfffffff;
    return;
  }
  DAT_01bea060 = DAT_01bea060 | 0x40000000;
  return;
}

// 00931A10  FUN_00931a10  size=1  [run]
void FUN_00931a10(void)

{
  return;
}

// 00931A20  FUN_00931a20  size=26  [run]
undefined4 * FUN_00931a20(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (((param_2 == 0) || (param_2 == 1)) || (puVar1 = (undefined4 *)&DAT_01b7c060, param_2 != 2)) {
    puVar1 = &DAT_01b7bcf0;
  }
  return puVar1;
}

