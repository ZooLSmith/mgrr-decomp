// src/unsorted/unit_00F16B60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F16B60..00F16B60, 1 functions

#include "types.h"

// 00F16B60  FUN_00f16b60  size=798  [run]
void __thiscall FUN_00f16b60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 unaff_EBX;
  float10 fVar5;
  undefined4 *puStack_ac;
  undefined8 *puStack_a8;
  int *local_a4;
  double dStack_98;
  undefined1 auStack_94 [4];
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60 [13];
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_94;
  dStack_98 = (double)CONCAT44(auStack_94,unaff_EBX);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x488);
  piVar1 = (int *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(param_1 + 0x48c) = 0;
  puStack_a8 = (undefined8 *)0xf16bd4;
  local_a4 = piVar1;
  FUN_00edfc20();
  puStack_a8 = (undefined8 *)0xf16bdc;
  local_a4 = piVar1;
  FUN_00f0b530();
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  puStack_a8 = (undefined8 *)0xf16bf8;
  local_a4 = piVar1;
  FUN_00efb130();
  puStack_a8 = (undefined8 *)0xf16c00;
  local_a4 = piVar1;
  FUN_00efbd40();
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0x1cc);
  local_a4 = *(int **)(param_1 + 0x110);
  puStack_a8 = (undefined8 *)0xf16c51;
  FUN_00ec9530();
  iVar2 = *(int *)(param_1 + 0x480);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x1c8) =
         *(float *)(param_1 + 0x1c8) - *(float *)(*(int *)(param_2 + 0xc) + 8);
    pfVar3 = *(float **)(param_2 + 8);
    pfVar4 = *(float **)(param_2 + 4);
    local_70 = *pfVar3 - *pfVar4;
    local_6c = pfVar3[1] - pfVar4[1];
    local_68 = pfVar3[2] - pfVar4[2];
    local_80 = (double)local_6c;
    local_90 = local_70 * local_70 + local_68 * local_68;
    local_a4 = (int *)0xf16cd0;
    fVar5 = (float10)FUN_00fdef70();
    local_90 = (float)fVar5;
    local_a4 = (int *)0xf16ce1;
    fVar5 = (float10)FUN_00fdecda();
    local_90 = (float)fVar5;
    local_a4 = (int *)0xf16cee;
    fVar5 = (float10)FUN_00fdee60();
    local_90 = ABS((float)fVar5);
    if (0.6 < local_90) {
      if (1.0 < local_90) {
        local_90 = 1.0;
      }
      local_90 = (local_90 - 0.6) / 0.39999998;
      if (0.0 < local_90) {
        if (1.0 < local_90) {
          local_90 = 1.0;
        }
      }
      else {
        local_90 = 0.0;
      }
      *(float *)(param_1 + 0x25c) = (1.0 - local_90) * *(float *)(param_1 + 0x25c);
    }
  }
  if (iVar2 != 2) {
    dStack_98 = (double)CONCAT44(auStack_94,0xf16e78);
    __security_check_cookie(local_14 ^ (uint)auStack_94);
    return;
  }
  local_8c = 0x3f800000;
  puStack_a8 = &local_80;
  local_78 = 0x3f800000;
  puStack_ac = local_60;
  local_6c = 1.0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0.0;
  local_70 = 0.0;
  local_68 = 0.0;
  local_a4 = *(int **)(param_1 + 0x494);
  FUN_00ddcfe0();
  local_a4 = local_60;
  puStack_ac = &local_8c;
  puStack_a8 = (undefined8 *)puStack_ac;
  D3DXVec3TransformNormal();
  FUN_00ddcfe0(&local_6c,(int)&local_80 + 4,
               *(float *)(*(int *)(param_2 + 0xc) + 4) - *(float *)(param_1 + 0x490));
  D3DXVec3TransformNormal(&stack0xffffff68,&stack0xffffff68,&local_6c);
  dStack_98 = (double)*(float *)(param_1 + 0x1c8);
  fVar5 = (float10)FUN_00fdecda();
  puStack_a8 = (undefined8 *)(float)fVar5;
  *(float *)(param_1 + 0x1c8) = (float)dStack_98 - (float)puStack_a8;
  __security_check_cookie(uStack_2c ^ (uint)&puStack_ac);
  return;
}

