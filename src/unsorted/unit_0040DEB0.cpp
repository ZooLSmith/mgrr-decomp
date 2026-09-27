// src/unsorted/unit_0040DEB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040DEB0..0040DF80, 2 functions

#include "mgrr.h"

// 0040DEB0  FUN_0040deb0  size=194  [run]
void FUN_0040deb0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float10 fVar12;
  float10 fVar13;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar11 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
  fVar7 = param_2[6];
  fVar8 = param_2[10];
  fVar12 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar11));
  fVar9 = param_2[1];
  fVar10 = *param_2;
  fVar13 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
  *param_1 = (float)fVar13;
  param_1[1] = (float)fVar12;
  fVar12 = (float10)fpatan((float10)fVar9 /
                           (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                           (float10)fVar10 /
                           (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
  param_1[2] = (float)fVar12;
  return;
}

// 0040DF80  FUN_0040df80  size=194  [run]
void FUN_0040df80(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float10 fVar12;
  float10 fVar13;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar11 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
  fVar7 = param_2[6];
  fVar8 = param_2[10];
  fVar12 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar11));
  fVar9 = param_2[1];
  fVar10 = *param_2;
  fVar13 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
  *param_1 = (float)fVar13;
  param_1[1] = (float)fVar12;
  fVar12 = (float10)fpatan((float10)fVar9 /
                           (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                           (float10)fVar10 /
                           (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
  param_1[2] = (float)fVar12;
  return;
}

