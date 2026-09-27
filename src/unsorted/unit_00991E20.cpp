// src/unsorted/unit_00991E20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00991E20..00991ED0, 3 functions

#include "types.h"

// 00991E20  FUN_00991e20  size=79  [run]
undefined4 FUN_00991e20(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_01b391f8 + -1;
  if (param_1 == 0) {
    DAT_01b391f8 = iVar1;
  }
  if (-1 < iVar1) {
    if (DAT_01b391f4 == 0) {
      return *(undefined4 *)(&DAT_01655424 + iVar1 * 0xc);
    }
    if (DAT_01b391f4 == 1) {
      return (&DAT_0165561c)[iVar1 * 3];
    }
    if (DAT_01b391f4 == 2) {
      return *(undefined4 *)(&DAT_016556ac + iVar1 * 0xc);
    }
  }
  return 0xffffffff;
}

// 00991E70  FUN_00991e70  size=90  [run]
undefined4 FUN_00991e70(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_01b391f8 + 1;
  if (param_1 == 0) {
    DAT_01b391f8 = uVar1;
  }
  if (DAT_01b391f4 == 0) {
    if (uVar1 < 0x27) {
      return *(undefined4 *)(&DAT_01655424 + uVar1 * 0xc);
    }
  }
  else if (DAT_01b391f4 == 1) {
    if (uVar1 < 6) {
      return (&DAT_0165561c)[uVar1 * 3];
    }
  }
  else if ((DAT_01b391f4 == 2) && (uVar1 < 5)) {
    return *(undefined4 *)(&DAT_016556ac + uVar1 * 0xc);
  }
  return 0xffffffff;
}

// 00991ED0  FUN_00991ed0  size=77  [run]
undefined4 FUN_00991ed0(void)

{
  if (DAT_01b391f4 == 0) {
    if (DAT_01b391f8 < 0x27) {
      return *(undefined4 *)(&DAT_01655424 + DAT_01b391f8 * 0xc);
    }
  }
  else if (DAT_01b391f4 == 1) {
    if (DAT_01b391f8 < 6) {
      return (&DAT_0165561c)[DAT_01b391f8 * 3];
    }
  }
  else if ((DAT_01b391f4 == 2) && (DAT_01b391f8 < 5)) {
    return *(undefined4 *)(&DAT_016556ac + DAT_01b391f8 * 0xc);
  }
  return 0xffffffff;
}

