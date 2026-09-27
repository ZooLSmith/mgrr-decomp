// src/object/bh0244/Bh0244.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004100B0..00410490, 11 functions

#include "mgrr.h"
#include "Bh0244.h"

// 004100B0  Bh0244::vf44  size=61  [class]
void __fastcall Bh0244::vf44(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0xc10);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  Bh0056::vf44();
  return;
}

// 004100F0  Bh0244::vf48  size=5  [class]
void __fastcall Bh0244::vf48(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x29e] & 0x4000000U) == 0) {
    BehaviorBgBase::vf48();
    if ((param_1[0x29e] & 0x8000000U) != 0) {
      (**(code **)(param_1[0x2d4] + 8))(0x3f800000,0,0);
      param_1[0x29e] = param_1[0x29e] & 0xf7ffffff;
      param_1[0x29e] = param_1[0x29e] | 0x4000000;
      (**(code **)(*param_1 + 0x20))();
      iVar1 = FUN_00e01c40(param_1,10);
      if (iVar1 != 0) {
        FUN_00e02cd0(param_1,10);
        param_1[0x29c] = 0x40800000;
      }
      if ((param_1[0x29e] & 0x20000000U) != 0) {
        FUN_0040b190();
        FUN_00a7c8b0();
        FUN_00a7c8d0();
        FUN_00a7c8f0();
        FUN_00a82090(0,param_1[0x2a0],&stack0xffffff64);
      }
    }
  }
  return;
}

// 00410100  Bh0244::thunk_vf4C  size=5  [class]
void __fastcall Bh0244::thunk_vf4C(int param_1)

{
  float10 fVar1;
  
  BehaviorBgBase::vf4C();
  if (((*(uint *)(param_1 + 0xa78) & 0x4000000) != 0) ||
     ((*(uint *)(param_1 + 0x4c0) & 0x200000) != 0)) {
    fVar1 = (float10)FUN_00a93060();
    fVar1 = (float10)*(float *)(param_1 + 0xa70) - fVar1;
    *(float *)(param_1 + 0xa70) = (float)fVar1;
    if (fVar1 < (float10)0) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 00410110  Bh0244::thunk_vf50  size=5  [class]
void __fastcall Bh0244::thunk_vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_4 [4];
  
  if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0xb38) == 0)) {
    if (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
    }
    *(undefined4 *)(param_1 + 0xa84) = 0;
  }
  BehaviorBgBase::vf50();
  if (((*(uint *)(param_1 + 0xa78) & 0x2000000) != 0) && (*(int *)(param_1 + 0xa84) == 0)) {
    FUN_004066f0();
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(auStack_4,0);
    iVar2 = FUN_009165d0();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x14) < 1)) {
      *(undefined4 *)(param_1 + 0xa90) = 0;
    }
    else {
      *(int *)(param_1 + 0xa90) = *(int *)(param_1 + 0xa90) + 1;
      if (5 < *(int *)(param_1 + 0xa90)) {
        FUN_00ad3850();
      }
    }
    fVar3 = (float10)FUN_00a93060();
    fVar3 = (float10)*(float *)(param_1 + 0xa94) - fVar3;
    *(float *)(param_1 + 0xa94) = (float)fVar3;
    if (fVar3 < (float10)0) {
      FUN_00ad3850();
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 00410130  FUN_00410130  size=52  [between]
uint FUN_00410130(uint param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  return (((param_2 * 2 | param_5 & 1) << 5 | param_4 & 0x1f) << 5 | param_3 & 0x1f) << 5 |
         param_1 & 0x1f;
}

// 004101A0  Bh0244::vf40  size=412  [class]
/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall Bh0244::vf40(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float afStack_160 [8];
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [52];
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_50;
  undefined1 local_2c;
  
  iVar1 = Bh0140::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1[300] == 0xe0244) {
    FUN_0118f7b0();
    local_50 = 0;
    local_2c = 5;
    local_e0 = 0x1b;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_130 = *puVar2;
    uStack_12c = puVar2[1];
    uStack_128 = puVar2[2];
    uStack_124 = puVar2[3];
    if (param_1[0x1ec] != 0) {
      puVar2 = &uStack_130;
      (**(code **)(*(int *)param_1[0x1ec] + 0x14))(auStack_134,0,puVar2);
      FUN_00911e50(puVar2);
      FUN_008f1600(0x20);
    }
    afStack_160[4] = 0.0;
    afStack_160[5] = 1.25;
    afStack_160[6] = 0.0;
    uVar3 = (**(code **)(*param_1 + 0x84))();
    FUN_00ddc1d0(auStack_120,uVar3,5);
    D3DXVec3TransformNormal(afStack_160,afStack_160 + 4,auStack_120);
    fStack_16c = (float)param_1[0x10] + fStack_16c;
    fStack_168 = (float)param_1[0x11] + fStack_168;
    fStack_164 = (float)param_1[0x12] + fStack_164;
    afStack_160[0] = (float)param_1[0x13] + afStack_160[0];
    piVar4 = (int *)FUN_00910da0();
    afStack_160[1] = 0.0;
    afStack_160[2] = 0.0;
    afStack_160[3] = 0.0;
    uVar3 = (**(code **)(*piVar4 + 8))
                      (auStack_140,auStack_ec,&fStack_16c,afStack_160 + 1,0x3fe00000,1);
    FUN_00910ab0(uVar3);
    FUN_00917bd0(param_1[0x304],0x800);
    FUN_00917bd0(param_1[0x304],0x2000000);
  }
  return 1;
}

// 00410340  Bh0244::vf54  size=222  [class]
void __fastcall Bh0244::vf54(int *param_1)

{
  undefined4 *puVar1;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [76];
  
  Bh0140::vf54();
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_70 = *puVar1;
  uStack_6c = puVar1[1];
  uStack_68 = puVar1[2];
  uStack_64 = puVar1[3];
  if (param_1[0x1ec] != 0) {
    puVar1 = &uStack_70;
    (**(code **)(*(int *)param_1[0x1ec] + 0x14))(&fStack_84,0,puVar1);
    FUN_00911e50(puVar1);
  }
  uStack_60 = 0;
  uStack_5c = 0x3fa00000;
  uStack_58 = 0;
  FUN_00ddc1d0(auStack_50,&uStack_70,5);
  D3DXVec3TransformNormal(afStack_80,&uStack_60,auStack_50);
  fStack_8c = (float)param_1[0x10] + fStack_8c;
  fStack_88 = (float)param_1[0x11] + fStack_88;
  fStack_84 = (float)param_1[0x12] + fStack_84;
  afStack_80[0] = (float)param_1[0x13] + afStack_80[0];
  FUN_00912060(&fStack_8c);
  return;
}

// 00410420  Bh0244::Bh0244_2  size=61  [class]
void __fastcall Bh0244::Bh0244_2(undefined4 *param_1)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  return;
}

// 00410460  Bh0244::vf04  size=6  [class]
undefined * Bh0244::vf04(void)

{
  return &DAT_01b34b74;
}

// 00410470  Bh0244::Bh0244  size=28  [class]
undefined4 * __fastcall Bh0244::Bh0244(undefined4 *param_1)

{
  BehaviorBh::BehaviorBh();
  *param_1 = vftable;
  param_1[0x304] = 0;
  return param_1;
}

// 00410490  Bh0244::vf00  size=82  [class]
undefined4 * __thiscall Bh0244::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

