// lib/havok/unit_0091F310.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0091F310..0091F310, 1 functions

#include "types.h"

// 0091F310  hkpEntityListener::hkpEntityListener_4  size=194  [run]
undefined4 * __thiscall
hkpEntityListener::hkpEntityListener_4(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  
  param_1[1] = vftable;
  *param_1 = RigidBodyListener::vftable;
  param_1[1] = RigidBodyListener::vftable;
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  param_1[0x16] = 0;
  FUN_004066f0();
  FUN_0118fe00(param_1);
  *(undefined2 *)(param_1[0xe] + 0xa6) = 0;
  FUN_01190090(param_1 + 1);
  FUN_00dd7240();
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return param_1;
}

