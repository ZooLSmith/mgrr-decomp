// src/unsorted/unit_00CB3F90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3F90..00CB3F90, 1 functions

#include "mgrr.h"

// 00CB3F90  FUN_00cb3f90  size=567  [run]
int __thiscall FUN_00cb3f90(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_94;
  float local_74;
  float local_70;
  float local_6c;
  float local_68 [26];
  
  fVar6 = (float10)param_3;
  fVar7 = (float10)param_4;
  fVar14 = (float10)fpatan(fVar6 / fVar7,(float10)1);
  fVar1 = (float)((float10)1.5707964 - fVar14);
  if (*(int *)(param_1 + 0xc) == 0) {
    local_94 = 0.5;
  }
  else {
    local_94 = -0.5;
  }
  fVar2 = (float)(fVar6 * (float10)0.5);
  fVar3 = (float)((float10)0.5 * fVar7);
  fVar8 = ((float10)1.5707964 - fVar14) * (float10)(float)(undefined *)0x0 + fVar14;
  local_74 = (float)fVar8;
  local_70 = param_3;
  fVar9 = -fVar7;
  local_6c = (float)fVar9;
  fVar10 = (float10)param_5;
  fVar11 = (float10)fptan(fVar10);
  local_68[0] = (float)(fVar11 * fVar7);
  local_68[1] = (float)fVar9;
  local_68[2] = (float)fVar8;
  fVar8 = (float10)fVar1;
  fVar8 = fVar8 + fVar8;
  fVar12 = fVar8 + fVar14;
  local_68[3] = (float)fVar12;
  local_68[4] = param_3;
  local_68[6] = param_3;
  local_68[5] = param_4;
  fVar13 = (float10)fptan(fVar10 - (float10)1.5707964);
  local_68[7] = (float)(fVar13 * fVar6);
  local_68[8] = (float)fVar12;
  fVar8 = fVar14 * (float10)3.0 + fVar8;
  local_68[9] = (float)fVar8;
  fVar12 = -fVar6;
  local_68[10] = (float)fVar12;
  local_68[0xb] = param_4;
  fVar13 = (float10)fptan(fVar10 - (float10)3.1415927);
  local_68[0xc] = (float)-(fVar13 * fVar7);
  local_68[0xd] = param_4;
  local_68[0xe] = (float)fVar8;
  fVar8 = (float10)fVar1 * (float10)4.0;
  fVar13 = (float10)(float)(fVar14 * (float10)3.0) + fVar8;
  local_68[0xf] = (float)fVar13;
  local_68[0x10] = (float)fVar12;
  local_68[0x12] = (float)fVar12;
  local_68[0x11] = (float)fVar9;
  fVar12 = (float10)fptan(fVar10 - (float10)4.712389);
  iVar4 = 0;
  local_68[0x13] = (float)-(fVar12 * fVar6);
  local_68[0x14] = (float)fVar13;
  local_68[0x15] = (float)(fVar14 * (float10)5.0 + fVar8);
  local_68[0x16] = param_3;
  local_68[0x17] = (float)fVar9;
  local_68[0x18] = (float)(fVar11 * fVar7);
  local_68[0x19] = (float)fVar9;
  pfVar5 = &local_74;
  while ((fVar10 <= (float10)pfVar5[-1] ||
         (fVar10 < (float10)*pfVar5 == (fVar10 == (float10)*pfVar5)))) {
    iVar4 = iVar4 + 1;
    *(float *)(param_2 + -8 + iVar4 * 8) = pfVar5[1] * local_94 + fVar2;
    *(float *)(param_2 + -4 + iVar4 * 8) = pfVar5[2] * 0.5 + fVar3;
    pfVar5 = pfVar5 + 6;
    if (4 < iVar4) {
      return 0;
    }
  }
  *(float *)(param_2 + iVar4 * 8) = local_68[iVar4 * 6] * local_94 + fVar2;
  *(float *)(param_2 + 4 + iVar4 * 8) = local_68[iVar4 * 6 + 1] * 0.5 + fVar3;
  return iVar4 + 1;
}

