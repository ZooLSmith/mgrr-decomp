// src/unsorted/unit_005BD630.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005BD630..005BD7E0, 2 functions

#include "types.h"

// 005BD630  FUN_005bd630  size=432  [run]
void __thiscall FUN_005bd630(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar7;
  undefined *puVar8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x40000000;
  D3DXVec3TransformNormal(&local_b0,&local_b0,param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  FUN_0040b190();
  uStack_40 = *(undefined4 *)(param_1 + 0x90);
  fStack_3c = *(float *)(param_1 + 0x94);
  uStack_38 = *(undefined4 *)(param_1 + 0x98);
  fStack_4c = fVar1 + unaff_ESI;
  fStack_48 = fVar2 + unaff_EBX;
  fStack_44 = fVar3 + fStack_b4;
  fVar7 = (float10)FUN_00ddba30(fStack_3c + param_2);
  fStack_3c = (float)fVar7;
  uStack_98 = param_3;
  iStack_9c = 0;
  if (*(int *)(param_1 + 0x618) == 0x2000c) {
    iStack_9c = 2;
  }
  if (*(int *)(param_1 + 0x618) == 0x2000d) {
    iStack_9c = 4;
  }
  iVar4 = FUN_00a82090("PowerGaizer",0x2070c,&iStack_9c);
  if (iVar4 != 0) {
    uStack_a0 = *(undefined4 *)(param_1 + 0x4f0);
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar8 = &DAT_01b351c8;
      (**(code **)(*piVar5 + 4))(&DAT_01b351c8);
      FUN_00dd6d80(puVar8);
    }
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    if (iStack_9c == 4) {
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 == (int *)0x0) {
        uRam00000ad8 = 1;
        return;
      }
      puVar8 = &DAT_01b351c8;
      (**(code **)(*piVar5 + 4))(&DAT_01b351c8);
      iVar4 = FUN_00dd6d80(puVar8);
      *(undefined4 *)((-(uint)(iVar4 != 0) & (uint)piVar5) + 0xad8) = 1;
    }
  }
  return;
}

// 005BD7E0  FUN_005bd7e0  size=180  [run]
void FUN_005bd7e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_98 [2];
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_98[0] = 0xe0140;
  local_98[1] = 0xe0141;
  FUN_0040b190();
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  local_34 = *param_2;
  local_30 = param_2[1];
  local_2c = param_2[2];
  puVar4 = local_90;
  sVar1 = FUN_00dde2d0(0,1);
  iVar2 = FUN_00a82090("LandingBomb",local_98[sVar1],puVar4);
  if (iVar2 != 0) {
    FUN_00a7c8a0();
    FUN_00ad3730(param_3,param_4);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  return;
}

