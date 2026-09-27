// src/unsorted/unit_00ED6290.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED6290..00ED6290, 1 functions

#include "types.h"

// 00ED6290  FUN_00ed6290  size=562  [run]
/* WARNING: Removing unreachable block (ram,0x00ed6375) */
/* WARNING: Removing unreachable block (ram,0x00ed62cc) */
/* WARNING: Removing unreachable block (ram,0x00ed632e) */
/* WARNING: Removing unreachable block (ram,0x00ed63be) */

void FUN_00ed6290(float *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  int local_c;
  
  FUN_00ddbbb0();
  FUN_00ddbbd0(param_3);
  uVar3 = local_c * 0x19660d + 0x3c6ef35f;
  uVar4 = uVar3 * 0x19660d + 0x3c6ef35f;
  *param_1 = (1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_2 + 0xd8) +
             *(float *)(param_2 + 200);
  uVar3 = uVar4 * 0x19660d + 0x3c6ef35f;
  param_1[1] = (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_2 + 0xdc) +
               *(float *)(param_2 + 0xcc);
  param_1[2] = (1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_2 + 0xe0) +
               *(float *)(param_2 + 0xd0);
  param_1[3] = (1.0 - (float)(uVar3 * 0x19660d + 0x3c6ef35f >> 8) * 5.960465e-08 * 2.0) *
               *(float *)(param_2 + 0xe4) + *(float *)(param_2 + 0xd4);
  if (*(char *)(param_2 + 0x79) == '\0') {
    fVar1 = *(float *)(param_2 + 0xf8);
    fVar2 = *(float *)(param_2 + 0xfc);
    fVar5 = (float10)FUN_00dde300(0,0x3f800000);
    param_1[4] = (float)((float10)fVar1 - fVar5 * (float10)fVar2);
  }
  else if (*(char *)(param_2 + 0x79) == '\x01') {
    if (*(char *)(param_2 + 0x13e) != '\0') {
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      param_1[5] = (float)*(byte *)(param_2 + 0x13e) * 0.01 * (float)fVar5;
    }
    fVar5 = (float10)FUN_00dde300(0,0x3f800000);
    param_1[6] = *(float *)(param_2 + 0x144) * (float)fVar5;
    FUN_00ddbbc0();
    return;
  }
  FUN_00ddbbc0();
  return;
}

