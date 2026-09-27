// src/enemy/em01a0/Em01a0Line.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051AE70..00AB74C0, 7 functions

#include "mgrr.h"
#include "Em01a0Line.h"

// 0051AE70  Em01a0Line::startup  size=95  [class]
undefined4 __fastcall Em01a0Line::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    local_c = 1;
    local_8 = 1;
    local_4 = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      uVar2 = 2;
      FUN_00a92fb0(2);
      FUN_00e08640(uVar2);
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
      return 1;
    }
  }
  return 0;
}

// 0051AED0  Em01a0Line::vf44  size=5  [class]
void __fastcall Em01a0Line::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(undefined4 **)(param_1 + 0x774) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x774))(1);
    *(undefined4 *)(param_1 + 0x774) = 0;
  }
  if (*(int *)(param_1 + 0x75c) != 0) {
    piVar2 = (int *)FUN_008d7570();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x75c) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    piVar2 = (int *)FUN_00d72970();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (*(int *)(param_1 + 0x584) != 0) {
    (**(code **)(*DAT_01be9bf4 + 0x10))(*(int *)(param_1 + 0x584),*(undefined4 *)(param_1 + 0x588));
  }
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  if (*(int *)(param_1 + 0x808) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x808));
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7d8);
  if (iVar1 != 0) {
    FUN_00c730c0();
    FUN_00905ce0();
    FUN_00905ce0();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7d8) = 0;
  }
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_00dd7270();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 != 0) {
    FUN_00dd7270();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x63c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x63c))(1);
    *(undefined4 *)(param_1 + 0x63c) = 0;
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x770);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x770) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x76c);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}

// 0051AEE0  Em01a0Line::thunk_vf4C  size=5  [class]
void __fastcall Em01a0Line::thunk_vf4C(int *param_1)

{
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  return;
}

// 0051AEF0  Em01a0Line::vf50  size=424  [class]
void __fastcall Em01a0Line::vf50(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar2 = FUN_00a12210(*(undefined4 *)(param_1 + 0x874));
      iVar3 = FUN_00a12210(0);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        D3DXVec3TransformNormal(&local_20,param_1 + 0x880,iVar2 + 0x10);
        local_20 = *(float *)(iVar2 + 0x40) + local_20;
        fStack_1c = *(float *)(iVar2 + 0x44) + fStack_1c;
        fVar1 = *(float *)(iVar2 + 0x48);
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x80;
        fStack_18 = fVar1 + fStack_18;
        *(float *)(iVar3 + 0x40) = local_20;
        *(float *)(iVar3 + 0x44) = fStack_1c;
        *(float *)(iVar3 + 0x48) = fStack_18;
      }
    }
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar2 = FUN_00a12210(*(undefined4 *)(param_1 + 0x894));
      iVar3 = FUN_00a12210(5);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        D3DXVec3TransformNormal(&fStack_30,param_1 + 0x8a0,iVar2 + 0x10);
        fStack_30 = *(float *)(iVar2 + 0x40) + fStack_30;
        fStack_2c = *(float *)(iVar2 + 0x44) + fStack_2c;
        fVar1 = *(float *)(iVar2 + 0x48);
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x80;
        fStack_28 = fVar1 + fStack_28;
        *(float *)(iVar3 + 0x40) = fStack_30;
        *(float *)(iVar3 + 0x44) = fStack_2c;
        *(float *)(iVar3 + 0x48) = fStack_28;
      }
    }
  }
  iStack_34 = 1;
  do {
    iVar2 = FUN_00a12210(iStack_34);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 0x80;
      fVar1 = (float)iStack_34;
      *(float *)(iVar2 + 0x40) = (fStack_30 - local_20) * 0.16666667 * fVar1 + local_20;
      *(float *)(iVar2 + 0x44) = (fStack_2c - fStack_1c) * 0.16666667 * fVar1 + fStack_1c;
      *(float *)(iVar2 + 0x48) = fVar1 * (fStack_28 - fStack_18) * 0.16666667 + fStack_18;
    }
    iStack_34 = iStack_34 + 1;
  } while (iStack_34 < 5);
  Behavior::vf50();
  return;
}

// 00AA6620  Em01a0Line::Em01a0Line  size=51  [class]
undefined4 * __fastcall Em01a0Line::Em01a0Line(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  cEspControler::cEspControler();
  return param_1;
}

// 00AA6660  Em01a0Line::vf04  size=6  [class]
undefined * Em01a0Line::vf04(void)

{
  return &DAT_01b34f54;
}

// 00AB74C0  Em01a0Line::destruct  size=30  [class]
undefined4 __thiscall Em01a0Line::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

