// src/unsorted/unit_00CC1890.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1890..00CC1890, 1 functions

#include "types.h"

// 00CC1890  FUN_00cc1890  size=635  [run]
void __thiscall FUN_00cc1890(int param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float local_f8;
  float local_f4;
  undefined4 uStack_f0;
  float afStack_ec [23];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (param_4 == 0.0) {
      *(float *)(param_1 + 0x1f0) = *param_2;
      *(float *)(param_1 + 500) = param_2[1];
      *(float *)(param_1 + 0x1f8) = param_2[2];
      *(float *)(param_1 + 0x1fc) = param_2[3];
      *(float *)(param_1 + 0x200) = *param_3;
      *(float *)(param_1 + 0x204) = param_3[1];
      *(float *)(param_1 + 0x208) = param_3[2];
      *(float *)(param_1 + 0x20c) = param_3[3];
      return;
    }
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_54 = 0x3f800000;
    local_68 = 0x3f800000;
    local_7c = 0x3f800000;
    local_90 = 0x3f800000;
    local_f8 = (float)((float10)*param_3 - (float10)*param_2);
    puVar4 = &local_90;
    local_f4 = (float)((float10)param_3[1] - (float10)param_2[1]);
    fVar2 = (float10)fpatan((float10)param_3[1] - (float10)param_2[1],
                            (float10)*param_3 - (float10)*param_2);
    afStack_ec[2] = (float)fVar2;
    D3DXMatrixRotationZ(puVar4,(float)fVar2);
    uStack_f0 = 0;
    D3DXMatrixRotationZ(&local_58,-afStack_ec[0]);
    D3DXVec3TransformNormal(&stack0xffffff00,&stack0xffffff00,&local_60);
    afStack_ec[0xe] = 0.0;
    afStack_ec[0xd] = 0.0;
    afStack_ec[0xc] = 0.0;
    afStack_ec[0xb] = 0.0;
    afStack_ec[9] = 0.0;
    afStack_ec[8] = 0.0;
    afStack_ec[7] = 0.0;
    afStack_ec[6] = 0.0;
    afStack_ec[4] = 0.0;
    afStack_ec[3] = 0.0;
    afStack_ec[2] = 0.0;
    afStack_ec[1] = 0.0;
    afStack_ec[0xf] = 1.0;
    afStack_ec[10] = 1.0;
    afStack_ec[5] = 1.0;
    afStack_ec[0] = 1.0;
    local_f8 = 1.0;
    local_f4 = 1.0;
    FUN_00ddd140(&local_6c,&stack0xffffff04);
    pfVar3 = afStack_ec;
    D3DXMatrixMultiply(pfVar3,&local_6c,pfVar3);
    D3DXMatrixMultiply(param_1 + 0x50,&local_f8);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    *(float *)(param_1 + 0x80) = *param_2;
    *(float *)(param_1 + 0x84) = param_2[1];
    *(float *)(param_1 + 0x1f0) = *param_2;
    *(float *)(param_1 + 500) = param_2[1];
    *(float *)(param_1 + 0x1f8) = param_2[2];
    *(float *)(param_1 + 0x1fc) = param_2[3];
    fVar1 = param_2[1];
    *(float *)(param_1 + 0x200) = (float)(afStack_ec + 0xd) * param_4 + *param_2;
    *(float *)(param_1 + 0x204) = (float)pfVar3 * param_4 + fVar1;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 **)(param_1 + 0x20c) = puVar4;
  }
  return;
}

