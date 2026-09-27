// src/unsorted/unit_00AA4E40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA4E40..00AA4E40, 1 functions

#include "mgrr.h"

// 00AA4E40  FUN_00aa4e40  size=897  [run]
void __fastcall FUN_00aa4e40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 auStack_ac [4];
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c [5];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x660) != 0) {
    if ((*(int *)(param_1 + 0x8e0) != 0) &&
       (iVar4 = *(int *)(param_1 + 0x8e0) + -1, *(int *)(param_1 + 0x8e0) = iVar4, iVar4 == 0)) {
      FUN_009f8b10();
    }
    if (*(int *)(param_1 + 0x664) == 0) {
      FUN_00aa1a10(1);
    }
    else {
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c910();
      }
      fVar5 = (float10)FUN_00e049b0();
      local_a8 = (float)fVar5;
      local_bc = 0.0;
      fVar6 = (float10)FUN_00fdc1f0();
      fVar5 = ((float10)*(float *)(param_1 + 0x8c0) - (float10)*(float *)(param_1 + 0x40)) * fVar6;
      local_c0 = (float)fVar5;
      fVar6 = ((float10)*(float *)(param_1 + 0x8c8) - (float10)*(float *)(param_1 + 0x48)) * fVar6;
      local_b8 = (float)fVar6;
      fVar7 = (float10)local_a8 * (float10)0.5;
      local_a4 = (float)fVar7;
      fVar8 = fVar5 * fVar5 + fVar6 * fVar6;
      if (fVar7 * fVar7 <= fVar8) {
        if (fVar8 <= (float10)0) {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar5 = (float10)0;
          fVar7 = (float10)1;
          fVar6 = fVar5;
        }
        else {
          FUN_00ddf460(&local_c0,&local_c0);
          fVar7 = (float10)local_bc;
          fVar5 = (float10)local_c0;
          fVar6 = (float10)local_b8;
        }
        fVar8 = (float10)local_a4;
        fVar5 = fVar8 * fVar5;
        local_c0 = (float)fVar5;
        local_bc = (float)(fVar7 * fVar8);
        fVar6 = fVar8 * fVar6;
        local_b8 = (float)fVar6;
        local_b4 = (float)(fVar8 * (float10)local_b4);
      }
      *(float *)(param_1 + 0x8d0) = (float)fVar5;
      *(float *)(param_1 + 0x8d8) = (float)fVar6;
      local_6c[1] = 0.0;
      local_6c[0] = 0.0;
      local_70 = 0.0;
      local_74 = 0.0;
      local_7c = 0;
      local_80 = 0;
      local_84 = 0;
      local_88 = 0;
      local_90 = 0;
      local_94 = 0;
      local_98 = 0;
      local_9c = 0;
      local_6c[2] = 1.0;
      local_78 = 1.0;
      local_8c = 0x3f800000;
      local_a0 = 0x3f800000;
      if (*(float *)(param_1 + 0x98) != 0.0) {
        D3DXMatrixRotationZ(local_50,*(undefined4 *)(param_1 + 0x98));
        D3DXMatrixMultiply(&local_a8,auStack_58,&local_a8);
      }
      if (*(float *)(param_1 + 0x94) != 0.0) {
        D3DXMatrixRotationY(local_50,*(undefined4 *)(param_1 + 0x94));
        D3DXMatrixMultiply(&local_a8,auStack_58,&local_a8);
      }
      if (*(float *)(param_1 + 0x90) != 0.0) {
        D3DXMatrixRotationX(local_50,*(undefined4 *)(param_1 + 0x90));
        D3DXMatrixMultiply(&local_a8,auStack_58,&local_a8);
      }
      D3DXMatrixMultiply(&local_a0,&local_a0,param_1 + 0xb0);
      D3DXVec3TransformNormal(local_6c,(float *)(param_1 + 0x8d0),auStack_ac);
      *(float *)(param_1 + 0x50) = local_78 * local_c0 + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = local_74 * local_c0 + *(float *)(param_1 + 0x54);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + local_70 * local_c0;
      *(float *)(param_1 + 0x5c) = local_6c[0] * local_c0 + *(float *)(param_1 + 0x5c);
      *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) & 0xfffb;
      if ((*(ushort *)(param_1 + 0xa2) & 0x8004) == 0) {
        FUN_00a15310();
      }
      fVar1 = *(float *)(param_1 + 0x8c0) - *(float *)(param_1 + 0x50);
      fVar3 = *(float *)(param_1 + 0x8c4) - *(float *)(param_1 + 0x54);
      fVar2 = *(float *)(param_1 + 0x8c8) - *(float *)(param_1 + 0x58);
      if (1.0 <= fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
        FUN_00aa1a10(0);
        return;
      }
      *(undefined4 *)(param_1 + 0x660) = 0;
      *(undefined4 *)(param_1 + 0x664) = 0;
      if (*(int *)(param_1 + 0x884) != 0) {
        FUN_0092ba60(0,4);
        return;
      }
    }
  }
  return;
}

