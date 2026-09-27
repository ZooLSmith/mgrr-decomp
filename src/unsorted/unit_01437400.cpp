// src/unsorted/unit_01437400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01437400..014376E0, 6 functions

#include "types.h"

// 01437400  FUN_01437400  size=16  [run]
void FUN_01437400(undefined4 param_1)

{
  FUN_00de5180(param_1);
  return;
}

// 01437410  FUN_01437410  size=18  [run]
void FUN_01437410(undefined4 param_1)

{
  FUN_00de5b30(param_1,0);
  return;
}

// 01437430  FUN_01437430  size=10  [run]
void FUN_01437430(void)

{
  FUN_00da3940();
  return;
}

// 0143743A  FUN_0143743a  size=335  [run]
void FUN_0143743a(void)

{
  ushort uVar1;
  float in_XMM0_Da;
  
  uVar1 = ((ushort)((uint)in_XMM0_Da >> 0x10) & 0x7fff) - 0x80;
  if (uVar1 < 0x4580) {
    return;
  }
  if ((short)uVar1 < 0x4580) {
    return;
  }
  if (((uint)in_XMM0_Da & 0x7f800000) != 0x7f800000) {
    FUN_00fdee20((double)in_XMM0_Da,&stack0x00000000);
    return;
  }
  return;
}

// 01437589  FUN_01437589  size=343  [run]
void FUN_01437589(void)

{
  ushort uVar1;
  float in_XMM0_Da;
  
  uVar1 = ((ushort)((uint)in_XMM0_Da >> 0x10) & 0x7fff) - 0x80;
  if (uVar1 < 0x4580) {
    return;
  }
  if ((short)uVar1 < 0x4580) {
    return;
  }
  if (((uint)in_XMM0_Da & 0x7f800000) != 0x7f800000) {
    FUN_00fdecf0((double)in_XMM0_Da,&stack0x00000000);
    return;
  }
  return;
}

// 014376E0  FUN_014376e0  size=989  [run]
ulonglong FUN_014376e0(void)

{
  uint uVar1;
  float fVar2;
  float in_XMM0_Da;
  
  fVar2 = ABS(in_XMM0_Da);
  if ((undefined *)((int)fVar2 + 0xc2800000U) < &DAT_01ddb3d7) {
    return CONCAT44((int)fVar2 + 0xc2800000U >> 0x10,in_XMM0_Da) & 0x1fe80000000;
  }
  uVar1 = (int)in_XMM0_Da >> 0x1f;
  if ((int)fVar2 + 0xc0a24c29U < 0x204c29) {
    fVar2 = (float)((uint)in_XMM0_Da & 0xfffff000);
    return CONCAT44(((uint)SQRT((1.0 - fVar2 * fVar2) - (in_XMM0_Da + fVar2) * (in_XMM0_Da - fVar2))
                    >> 0x10) - 0x3d80,-((uVar1 & 8) >> 3)) & 0xfffe80000000;
  }
  if ((int)fVar2 + 0xc8800000U < 0x6000000) {
    return CONCAT44(0xbd99999a,in_XMM0_Da);
  }
  if ((int)fVar2 + 0xc0820000U < 0x20000) {
    return CONCAT44(0xbd36db6e,uVar1 & 0x80000000 ^ 0x80000000);
  }
  if ((uint)fVar2 < 0x37800000) {
    return CONCAT44(in_XMM0_Da,in_XMM0_Da) & 0x7fffffffffffffff;
  }
  if (fVar2 != 1.0) {
    if ((uint)fVar2 < 0x7f800001) {
      return CONCAT44(0x7f800000,in_XMM0_Da);
    }
    return CONCAT44(in_XMM0_Da,in_XMM0_Da) & 0x7fffffffffffffff;
  }
  return CONCAT44(in_XMM0_Da,uVar1) & 0x7fffffffffffffff;
}

