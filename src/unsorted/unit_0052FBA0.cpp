// src/unsorted/unit_0052FBA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0052FBA0..0052FC70, 2 functions

#include "types.h"

// 0052FBA0  FUN_0052fba0  size=196  [run]
void FUN_0052fba0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_a0 [4];
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_a0[0] = 0xe00d4;
  local_a0[2] = 0xe00d4;
  local_a0[1] = 0xe0040;
  local_a0[3] = 0xe0040;
  FUN_0040b190();
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  local_34 = *param_2;
  local_30 = param_2[1];
  local_2c = param_2[2];
  puVar4 = local_90;
  sVar1 = FUN_00dde2d0(0,3);
  iVar2 = FUN_00a82090("LandingBomb",local_a0[sVar1],puVar4);
  if (iVar2 != 0) {
    FUN_00a7c8a0();
    FUN_00ad3730(param_3,param_4);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  return;
}

// 0052FC70  FUN_0052fc70  size=510  [run]
undefined4 FUN_0052fc70(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_6c;
  float local_68;
  float local_60;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_80 = param_2[0xc];
  local_7c = param_2[0xd];
  local_78 = param_2[0xe];
  local_6c = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
  local_68 = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]);
  fVar2 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
  local_c8 = param_2[6] / fVar2;
  fVar1 = param_2[10];
  fVar3 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar2));
  local_c4 = (float)fVar3;
  fVar4 = (float10)fpatan((float10)local_c8,(float10)(fVar1 / fVar2));
  local_60 = (float)fVar4;
  fVar5 = (float10)fpatan((float10)param_2[1] / (float10)local_68,
                          (float10)*param_2 / (float10)local_6c);
  fVar4 = (float10)0;
  local_88 = (float)fVar4;
  local_8c = (float)fVar4;
  local_90 = (float)fVar4;
  local_94 = (float)fVar4;
  local_9c = (float)fVar4;
  local_a0 = (float)fVar4;
  local_a4 = (float)fVar4;
  local_a8 = (float)fVar4;
  local_b0 = (float)fVar4;
  local_b4 = (float)fVar4;
  local_b8 = (float)fVar4;
  local_bc = (float)fVar4;
  local_84 = 0x3f800000;
  local_98 = 0x3f800000;
  local_ac = 0x3f800000;
  local_c0 = 0x3f800000;
  if (fVar4 != fVar5) {
    D3DXMatrixRotationZ(local_50,(float)fVar5);
    D3DXMatrixMultiply(&local_c8,auStack_58,&local_c8);
    fVar3 = (float10)local_c4;
  }
  if ((float10)0 != fVar3) {
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXMatrixMultiply(&local_c8,auStack_58,&local_c8);
  }
  if (local_60 != 0.0) {
    D3DXMatrixRotationX(local_50,local_60);
    D3DXMatrixMultiply(&local_c8,auStack_58,&local_c8);
  }
  local_90 = local_80;
  local_8c = local_7c;
  local_88 = local_78;
  FUN_01005190(&local_c0);
  return param_1;
}

