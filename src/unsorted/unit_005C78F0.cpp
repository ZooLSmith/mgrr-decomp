// src/unsorted/unit_005C78F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C78F0..005C78F0, 1 functions

#include "types.h"

// 005C78F0  FUN_005c78f0  size=567  [run]
void __fastcall FUN_005c78f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float unaff_ESI;
  float unaff_EDI;
  undefined1 *puVar4;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  float fStack_108;
  undefined1 auStack_104 [4];
  int iStack_100;
  int aiStack_fc [19];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int iStack_78;
  undefined4 uStack_68;
  undefined4 auStack_64 [2];
  undefined1 auStack_5c [88];
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x40a00000;
  local_a4 = 0x3f800000;
  iVar1 = FUN_00a12210(1);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
  uStack_110 = *puVar2;
  fStack_10c = (float)puVar2[1];
  fStack_108 = (float)puVar2[2];
  iStack_100 = param_1[0x419];
  aiStack_fc[0] = param_1[0x418];
  if (iVar1 != 0) {
    uStack_110 = *(undefined4 *)(iVar1 + 0x40);
    fStack_10c = *(float *)(iVar1 + 0x44);
    fStack_108 = *(float *)(iVar1 + 0x48);
  }
  uStack_a0 = 0x3f800000;
  uStack_9c = 0x3f800000;
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  uVar3 = (**(code **)(*param_1 + 0x84))();
  thunk_FUN_00ddc1d0(auStack_90,uVar3,5);
  FUN_00ddd140(aiStack_fc + 3,&uStack_a0);
  puVar4 = auStack_90;
  D3DXMatrixMultiply(puVar4,aiStack_fc + 3);
  uStack_68 = uStack_118;
  auStack_64[0] = uStack_114;
  aiStack_fc[0xe] = 0;
  aiStack_fc[0xd] = 0;
  aiStack_fc[0xc] = 0;
  aiStack_fc[0xb] = 0;
  aiStack_fc[9] = 0;
  aiStack_fc[8] = 0;
  aiStack_fc[7] = 0;
  aiStack_fc[6] = 0;
  aiStack_fc[4] = 0;
  aiStack_fc[3] = 0;
  aiStack_fc[2] = 0;
  aiStack_fc[1] = 0;
  aiStack_fc[0xf] = 0x3f800000;
  aiStack_fc[10] = 0x3f800000;
  aiStack_fc[5] = 0x3f800000;
  aiStack_fc[0] = 0x3f800000;
  if (fStack_108 != 0.0) {
    D3DXMatrixRotationY(auStack_5c,fStack_108);
    D3DXMatrixMultiply(auStack_104,auStack_64,auStack_104);
  }
  if (fStack_10c != 0.0) {
    D3DXMatrixRotationX(auStack_5c,fStack_10c);
    D3DXMatrixMultiply(auStack_104,auStack_64,auStack_104);
  }
  D3DXMatrixMultiply(&uStack_9c,aiStack_fc,&uStack_9c);
  D3DXVec3TransformNormal(&uStack_118,aiStack_fc + 0xd,&local_a8);
  param_1[0x424] = (int)(fStack_84 + (float)puVar4);
  param_1[0x425] = (int)(fStack_80 + unaff_EDI);
  param_1[0x426] = (int)(fStack_7c + unaff_ESI);
  param_1[0x427] = iStack_78;
  return;
}

