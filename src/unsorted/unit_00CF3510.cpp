// src/unsorted/unit_00CF3510.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF3510..00CF3510, 1 functions

#include "mgrr.h"

// 00CF3510  FUN_00cf3510  size=468  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00cf3510(int param_1)

{
  int iVar1;
  float10 fVar2;
  float *pfVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  int iVar7;
  float local_80;
  float local_7c;
  float local_78 [6];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [40];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  if (DAT_01dc1374 < 2) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
  }
  else {
    local_78[2] = DAT_018b5764;
    local_78[3] = DAT_018b5768;
    fVar2 = (float10)0;
    local_78[4] = (float)fVar2;
    local_60 = _DAT_018b576c;
    local_5c = _DAT_018b5770;
    local_58 = (float)fVar2;
    fVar6 = (float10)_DAT_018b576c - (float10)DAT_018b5764;
    local_80 = (float)fVar6;
    fVar5 = (float10)_DAT_018b5770 - (float10)DAT_018b5768;
    local_7c = (float)fVar5;
    local_78[0] = (float)fVar2;
    local_78[1] = local_54 - local_78[5];
    if ((fVar2 != fVar6) || (fVar2 != fVar5)) {
      fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
      if (fVar5 < fVar2 == (fVar5 == fVar2)) {
        FUN_00ddf460(&local_80,&local_80);
        fVar5 = (float10)local_7c;
        fVar6 = (float10)local_80;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar6 = (float10)0;
        local_80 = (float)fVar6;
        fVar5 = (float10)1;
        local_7c = (float)fVar5;
        local_78[0] = (float)fVar6;
      }
    }
    fVar5 = (float10)fpatan(fVar5,fVar6);
    D3DXMatrixRotationZ(local_50,(float)fVar5);
    FUN_00cc1890(local_78,local_78 + 4,0x3f800000);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 1;
    piVar4 = (int *)(param_1 + 8);
    pfVar3 = local_78 + 2;
    iVar7 = 2;
    do {
      iVar1 = *piVar4;
      fStack_28 = pfVar3[-2];
      fStack_24 = pfVar3[-1];
      fStack_20 = *pfVar3;
      if (*(int *)(iVar1 + 0x18) != 0) {
        FID_conflict__memcpy((void *)(iVar1 + 0x50),&local_58,0x40);
        *(undefined4 *)(iVar1 + 0xb0) = 1;
      }
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      pfVar3 = pfVar3 + 4;
      iVar7 = iVar7 + -1;
      *(undefined4 *)(iVar1 + 4) = 1;
    } while (iVar7 != 0);
  }
  DAT_018b5768 = -1.0;
  DAT_018b5764 = -1.0;
  DAT_01dc1374 = 0;
  _DAT_018b5770 = -1.0;
  _DAT_018b576c = -1.0;
  return;
}

