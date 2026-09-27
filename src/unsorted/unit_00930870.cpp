// src/unsorted/unit_00930870.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00930870..00930870, 1 functions

#include "mgrr.h"

// 00930870  FUN_00930870  size=813  [run]
void FUN_00930870(float *param_1,float *param_2)

{
  float fVar1;
  float unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float *unaff_retaddr;
  float *pfVar4;
  float *pfStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  undefined4 *puStack_c;
  float fStack_8;
  float *pfStack_4;
  
  pfVar4 = param_2;
  fVar1 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    param_2 = (float *)param_2[2];
  }
  else {
    pfStack_38 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_24 = 0.0;
    local_20 = 1.0;
    local_1c = 0.0;
  }
  pfStack_38 = pfVar4;
  D3DXVec3Normalize();
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    unaff_retaddr = (float *)param_1[2];
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_38 = (float *)0x0;
    unaff_ESI = 1.0;
    fStack_30 = 0.0;
  }
  pfVar4 = param_1;
  D3DXVec3Normalize(&pfStack_38);
  fVar1 = fStack_2c * (float)pfStack_38 + fStack_30 * (float)&local_24 + unaff_ESI * (float)pfVar4;
  if (NAN(fVar1) || 0.9999999 < fVar1 == (fVar1 == 0.9999999)) {
    fVar2 = (float10)FUN_00fdc4e0();
    fVar3 = fVar2 * (float10)(float)param_1;
    pfStack_4 = (float *)(float)fVar3;
    if ((float10)(float)param_2 < fVar3) {
      pfStack_4 = param_2;
      fVar3 = (float10)(float)param_2;
    }
    if ((float10)0.0009 <= fVar3) {
      if (fVar2 <= (float10)3.1315928) {
        local_1c = fStack_30 * (float)pfStack_38 - fStack_2c * (float)&local_24;
        fStack_18 = fStack_2c * (float)pfVar4 - unaff_ESI * (float)pfStack_38;
        fStack_14 = fStack_30 * (float)pfVar4;
      }
      else {
        fVar1 = unaff_retaddr[2] * unaff_retaddr[2] +
                *unaff_retaddr * *unaff_retaddr + unaff_retaddr[1] * unaff_retaddr[1];
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          fStack_8 = unaff_retaddr[2];
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_28 = 0.0;
          local_24 = 1.0;
          local_20 = 0.0;
        }
        D3DXVec3Normalize(&fStack_28,unaff_retaddr);
        local_1c = (float)pfStack_38 * local_24 - (float)&local_24 * local_20;
        fStack_18 = (float)pfVar4 * local_20 - fStack_28 * (float)pfStack_38;
        fStack_14 = (float)pfVar4 * local_24;
        unaff_ESI = fStack_28;
      }
      fStack_14 = unaff_ESI * (float)&local_24 - fStack_14;
      if (ABS(fStack_14) + ABS(local_1c) + ABS(fStack_18) != 0.0) {
        D3DXQuaternionRotationAxis(puStack_c + 4,&local_1c,pfStack_4);
      }
      return;
    }
  }
  *puStack_c = 0;
  puStack_c[1] = 0;
  puStack_c[2] = 0;
  puStack_c[6] = 0;
  puStack_c[5] = 0;
  puStack_c[4] = 0;
  puStack_c[7] = 0x3f800000;
  puStack_c[8] = 0;
  puStack_c[9] = 0;
  puStack_c[10] = 0;
  return;
}

