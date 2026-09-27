// src/enemy/em00a0/Em00a0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0049F740..00AB7EE0, 15 functions

#include "types.h"

// 0049F740  Em00a0::vf268  size=5  [class]
undefined4 Em00a0::vf268(void)

{
  return 0;
}

// 0049F750  FUN_0049f750  size=165  [between]
void __fastcall FUN_0049f750(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  iVar4 = FUN_00a7f600(0xf0107);
  if (iVar4 != 0) {
    FUN_00a7c8a0();
    FUN_00a7c8a0();
    iVar4 = FUN_00a7c8a0();
    fVar1 = (float)param_1[0x10] - *(float *)(iVar4 + 0x40);
    fVar3 = (float)param_1[0x11] - *(float *)(iVar4 + 0x44);
    fVar2 = (float)param_1[0x12] - *(float *)(iVar4 + 0x48);
    local_18 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = 0.2;
    if ((0.2 < local_18) || (fVar1 = -0.2, local_18 < -0.2)) {
      local_18 = fVar1;
    }
    local_20 = 0;
    local_1c = 0;
    (**(code **)(*param_1 + 0x70))(&local_20);
  }
  return;
}

// 0049F800  FUN_0049f800  size=38  [between]
void __fastcall FUN_0049f800(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xdd0) == 0) {
    uVar1 = FUN_00e5e0c0("Em00a0_se_mov_hovering",param_1,0xffffffff,0);
    *(undefined4 *)(param_1 + 0xdd0) = uVar1;
  }
  return;
}

// 0049F830  FUN_0049f830  size=44  [between]
void __fastcall FUN_0049f830(int param_1)

{
  if (*(int *)(param_1 + 0xdd0) != 0) {
    FUN_00e5ca30(*(int *)(param_1 + 0xdd0),0x40400000);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
  }
  return;
}

// 0049F870  Em00a0::vf44  size=108  [class]
void __fastcall Em00a0::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  FUN_00a97d20();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0xdd0) != 0) {
    FUN_00e5ca30(*(int *)(param_1 + 0xdd0),0x40400000);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
  }
  BehaviorEmBase::vf44();
  return;
}

// 0049F8E0  Em00a0::thunk_vf48  size=5  [class]
void __fastcall Em00a0::thunk_vf48(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar1 = FUN_00c13920();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
  }
  param_1[0x2a2] = iVar1;
  param_1[0x2a1] = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01be9c24;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c24);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    param_1[0x2a1] = uVar3;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar4 = FUN_00a92fb0();
    FUN_00e08600(uVar4);
  }
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar5;
  param_1[0x361] = 0;
  iVar1 = FUN_00a8c760(0x15);
  if (iVar1 != 0) {
    FUN_00a8d280();
  }
  (**(code **)(*param_1 + 0x32c))();
  if (param_1[0x2fc] != 0) {
    uVar4 = FUN_00a8eea0();
    *(undefined4 *)(param_1[0x2fc] + 0x44) = uVar4;
  }
  iVar1 = FUN_00a8c760(0x18);
  if ((iVar1 == 0) && (param_1[0x21e] != 0)) {
    Behavior::updateGroundSupportForParts
              (param_1 + 0x297,param_1 + 0x16c,param_1 + 0x165,param_1 + 0x17c,param_1[0x21f]);
    Behavior::updateGroundSupportForParts
              (param_1 + 0x298,param_1 + 0x170,param_1 + 0x166,param_1 + 0x17d,param_1[0x220]);
  }
  FUN_00c3dac0(param_1 + 0x10,param_1 + 0x365);
  BehaviorAppBase::vf48();
  return;
}

// 0049F8F0  Em00a0::vf50  size=39  [class]
void __fastcall Em00a0::vf50(int param_1)

{
  BehaviorEmBase::vf50();
  FUN_00a93170();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf128();
  return;
}

// 0049F920  FUN_0049f920  size=107  [between]
void __fastcall FUN_0049f920(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00a12210(0xb);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xdc4) + *(float *)(param_1 + 0xdc0));
    *(float *)(param_1 + 0xdc4) = (float)fVar2;
    *(float *)(iVar1 + 0x94) = (float)fVar2;
  }
  iVar1 = FUN_00a12210(0x17);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xdc4) + *(float *)(param_1 + 0xdc0));
    *(float *)(param_1 + 0xdc4) = (float)fVar2;
    *(float *)(iVar1 + 0x94) = (float)fVar2;
  }
  return;
}

// 0049F9A0  FUN_0049f9a0  size=364  [between]
void __fastcall FUN_0049f9a0(int *param_1)

{
  char cVar1;
  int iVar2;
  float unaff_ESI;
  float unaff_EDI;
  float fVar3;
  float afStack_88 [2];
  undefined4 uStack_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_0049f9d9;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_0049f9d9:
  local_7c = 0;
  local_78 = 0.0;
  local_74 = 0;
  FUN_00a8d790(&local_7c);
  if (param_1[0x202] != 0) {
    cVar1 = FUN_00c9db20(0);
    iVar2 = FUN_00a97e60(0x3fc00000,0);
    if ((iVar2 != 0) && (cVar1 != '\0')) {
      FUN_009fdde0();
      return;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_60 = local_7c;
  local_5c = local_78;
  local_58 = local_74;
  local_54 = 0x3f800000;
  FUN_00a8e880(&local_60);
  fVar3 = 0.0;
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35);
  uStack_80 = 0;
  local_7c = 0;
  local_78 = (float)param_1[0x37a] * 0.3;
  D3DXMatrixRotationY(&local_60,param_1[0x25]);
  D3DXVec3TransformNormal(afStack_88,afStack_88,auStack_68);
  param_1[0x14] = (int)((float)param_1[0x14] + fVar3);
  param_1[0x15] = (int)((float)param_1[0x15] + unaff_EDI);
  param_1[0x16] = (int)((float)param_1[0x16] + unaff_ESI);
  param_1[0x17] = (int)((float)param_1[0x17] + afStack_88[0]);
  return;
}

// 0049FB20  Em00a0::vf264  size=233  [class]
undefined4 __thiscall Em00a0::vf264(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0040ac60(param_2);
  if (*(int *)(param_1 + 0x4b0) == 0x200a1) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xe78),*(undefined4 *)(param_1 + 0xf0c));
    FUN_0040ac60(param_2);
    if (0 < *(int *)(param_1 + 0xe90)) {
      *(int *)(param_1 + 0xde8) = *(int *)(param_1 + 0xe90);
    }
    *(undefined4 *)(param_1 + 0x4a0) = 2;
    return 1;
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xe78),*(undefined4 *)(param_1 + 0xf0c));
    if (*(int *)(param_1 + 0xdd0) == 0) {
      uVar1 = FUN_00e5e0c0("Em00a0_se_mov_hovering",param_1,0xffffffff,0);
      *(undefined4 *)(param_1 + 0xdd0) = uVar1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x4a0) != 2) {
      return 1;
    }
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xe78),*(undefined4 *)(param_1 + 0xf0c));
  }
  FUN_0040ac60(param_2);
  if (0 < *(int *)(param_1 + 0xe90)) {
    *(int *)(param_1 + 0xde8) = *(int *)(param_1 + 0xe90);
  }
  return 1;
}

// 0049FC10  Em00a0::vf40  size=256  [class]
void __fastcall Em00a0::vf40(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar3 = BehaviorEmBase::vf40();
  if (iVar3 == 0) {
    return;
  }
  FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar7) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pbVar6 = &DAT_0163e8dc;
        do {
          bVar2 = *pbVar4;
          bVar8 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_0049fc98:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0049fc9d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar8 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_0049fc98;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_0049fc9d:
        if (iVar5 == 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar7);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  *(undefined4 *)(param_1 + 0xdc0) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0xde8) = 1;
  *(undefined4 *)(param_1 + 0xdc4) = 0;
  *(undefined4 *)(param_1 + 0xdc8) = 0x43c80000;
  *(undefined4 *)(param_1 + 0xdcc) = 0;
  if (*(int *)(param_1 + 0x4b0) != 0x200a1) {
    *(undefined4 *)(param_1 + 0xf40) = 0;
    return;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0xf40) = 1;
  return;
}

// 0049FD10  Em00a0::vf4C  size=54  [class]
void __fastcall Em00a0::vf4C(int param_1)

{
  BehaviorEmBase::vf4C();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((*(int *)(param_1 + 0x4a0) == 1) || (*(int *)(param_1 + 0x4a0) == 2)) {
    FUN_0049f9a0();
  }
  FUN_0049f920();
  return;
}

// 00AAF450  Em00a0::Em00a0  size=40  [class]
undefined4 * __fastcall Em00a0::Em00a0(undefined4 *param_1)

{
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_004ec5c0();
  return param_1;
}

// 00AAF480  Em00a0::vf04  size=6  [class]
undefined * Em00a0::vf04(void)

{
  return &DAT_01b34da4;
}

// 00AB7EE0  Em00a0::vf00  size=30  [class]
undefined4 __thiscall Em00a0::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

