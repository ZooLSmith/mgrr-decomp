// src/misc/KamaitatiObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085EE70..00AB9CD0, 18 functions

#include "types.h"

// 0085EE70  KamaitatiObj::vf44  size=75  [class]
void __fastcall KamaitatiObj::vf44(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xa00) + 8))(0x3f800000,0,0);
  FUN_00a8c820();
  FUN_00a9d8a0();
  RayCastManager::getWork(param_1 + 0xab0);
  Behavior::vf44();
  return;
}

// 0085EEC0  KamaitatiObj::vf48  size=29  [class]
void __fastcall KamaitatiObj::vf48(int param_1)

{
  float10 fVar1;
  
  FUN_00a92fb0();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar1;
  BehaviorAppBase::vf48();
  return;
}

// 0085EEE0  KamaitatiObj::vf54  size=1  [class]
void KamaitatiObj::vf54(void)

{
  return;
}

// 0085EF10  KamaitatiObj::vf1A4  size=71  [class]
void __fastcall KamaitatiObj::vf1A4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a81330();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
  }
  *(undefined4 *)(param_1 + 0xaf0) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x220))(0x42700000);
  }
  return;
}

// 00867680  KamaitatiObj::vf40  size=216  [class]
undefined4 __fastcall KamaitatiObj::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0x640) = 1;
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
  FUN_00a8d280();
  uVar2 = 1;
  FUN_00a92fb0(1);
  FUN_00e08640(uVar2);
  local_c = 1;
  local_8 = 1;
  local_4 = 1;
  iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0x874) = 10;
  *(undefined4 *)(param_1 + 0x870) = 10;
  FUN_00a8caf0(1,0,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  *(undefined4 *)(param_1 + 0xaf4) = 0;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(uVar2,0x2070c);
  switchD_0080dbae::default();
  *(undefined4 *)(param_1 + 0xad0) = 1;
  return 1;
}

// 00867760  FUN_00867760  size=77  [callgraph]
uint FUN_00867760(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 00870310  KamaitatiObj::vf130  size=508  [class]
int KamaitatiObj::vf130(ushort *param_1)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  uint uVar8;
  uint *puVar9;
  undefined1 uStack_9;
  
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  uVar8 = 0;
  if (iVar3 == 0) {
LAB_0087033e:
    FUN_00dd5650(&DAT_01649464);
    return 0;
  }
  iVar3 = CollisionAttackData::CollisionAttackData_3();
  if (iVar3 == 0) goto LAB_0087033e;
  puVar2 = *(uint **)(iVar3 + 8);
  iVar4 = FUN_00c13920();
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    uVar6 = (**(code **)(*piVar5 + 0x28))(0);
  }
  puVar2[5] = uVar6;
  uVar7 = FUN_00a7c7f0();
  FUN_00a7c960(uVar7);
  *puVar2 = (uint)*param_1;
  puVar2[0x24] = puVar2[0x24] | 0xa00;
  uVar1 = *param_1;
  uStack_9 = 0;
  uVar6 = 10;
  if (uVar1 == 4) {
    *(undefined1 *)((int)puVar2 + 0x11) = 10;
    *puVar2 = 0x19a;
    iVar4 = FUN_00867760();
    if (iVar4 == 0) goto LAB_008704ea;
    uVar7 = 0x16;
    FUN_00867760(0x16);
    uVar8 = FUN_00b7ed30(uVar7);
    iVar4 = FUN_00867760();
    (**(code **)(**(int **)(iVar4 + 0x754) + 0x10))(0x16);
    iVar4 = FUN_00867760();
    (**(code **)(**(int **)(iVar4 + 0x754) + 0x20))(0x16);
    iVar4 = FUN_00867760();
    uVar6 = (**(code **)(**(int **)(iVar4 + 0x754) + 0x18))(0x16);
    *puVar2 = 0x16;
    uStack_9 = extraout_var_00;
  }
  else {
    if (uVar1 == 0x16) {
      iVar4 = FUN_00867760();
      if (iVar4 == 0) goto LAB_008704ea;
      uVar1 = *param_1;
    }
    else {
      if (uVar1 != 0x17) goto LAB_008704ea;
      iVar4 = FUN_00867760();
      if (iVar4 == 0) goto LAB_008704ea;
      uVar1 = *param_1;
    }
    uVar6 = (uint)uVar1;
    uVar8 = uVar6;
    FUN_00867760(uVar6);
    uVar8 = FUN_00b7ed30(uVar8);
    iVar4 = FUN_00867760();
    (**(code **)(**(int **)(iVar4 + 0x754) + 0x10))(uVar6);
    iVar4 = FUN_00867760();
    (**(code **)(**(int **)(iVar4 + 0x754) + 0x20))(uVar6);
    iVar4 = FUN_00867760();
    uVar6 = (**(code **)(**(int **)(iVar4 + 0x754) + 0x18))(uVar6);
    uStack_9 = extraout_var;
  }
  iVar4 = FUN_00867760();
  if (iVar4 != 0) {
    puVar9 = puVar2;
    FUN_00867760(puVar2);
    FUN_00a9a1c0(puVar9);
  }
  *puVar2 = 0x1b6;
LAB_008704ea:
  puVar2[1] = uVar8;
  puVar2[2] = uVar6;
  puVar2[3] = 10;
  *(undefined1 *)(puVar2 + 4) = uStack_9;
  return iVar3;
}

// 00870510  FUN_00870510  size=301  [between]
void __fastcall FUN_00870510(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_00a9f3c0(param_1 + 0x125,1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_00867760();
    if (iVar2 != 0) {
      iVar2 = FUN_00867760();
      param_1[0x1d8] = *(int *)(iVar2 + 0x760);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a952e0(0,0x41f00000);
  if (iVar2 != 0) {
    param_1[0x2b4] = 0;
    iVar2 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0;
    *(undefined4 *)(iVar2 + 0xe8) = 0;
    *(undefined4 *)(iVar2 + 0xec) = 0;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x20);
  param_1[0x2b6] = 0x41f00000;
  param_1[0x186] = 0;
  param_1[0x2b5] = 1;
  (*pcVar1)();
  FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x0087063b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 00870640  KamaitatiObj::vf19C  size=167  [class]
void __thiscall KamaitatiObj::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FID_conflict__memcpy(local_50,(void *)(param_2 + 0x40),0x40);
  local_20 = uVar1;
  local_1c = uVar2;
  local_18 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_50);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 008706F0  FUN_008706f0  size=397  [callgraph]
undefined4 __thiscall FUN_008706f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((*(int *)(param_1 + 0xad0) != 0) && (*(int *)(param_1 + 0x4e4) == 0)) &&
     (local_24 = param_1, iVar4 = FUN_00907640(param_1 + 0xab0,&local_2c,&local_20), iVar4 != 0)) {
    FUN_0112bcf0();
    local_28 = 0;
    if (0 < *(int *)(local_2c + 0x14)) {
      local_30 = 0;
      do {
        puVar8 = (undefined4 *)(*(int *)(local_2c + 0x10) + local_30);
        iVar4 = puVar8[10];
        if ((*(char *)(iVar4 + 0x18) == '\x01') &&
           (iVar4 = *(char *)(iVar4 + 0x10) + iVar4, iVar4 != 0)) {
          FUN_004066f0();
          uVar6 = *(uint *)(iVar4 + 0xc);
          if (uVar6 != 0) {
            uVar5 = *(uint *)((-(uint)(uVar6 != 0) & uVar6) + 8);
          }
          else {
            uVar5 = 0;
          }
          if (uVar6 != 0) {
            uVar6 = *(uint *)((-(uint)(uVar6 != 0) & uVar6) + 0x30);
          }
          else {
            uVar6 = 0;
          }
          if (((uVar6 & 0x100) == 0) || ((uVar5 & 0x400000) != 0)) {
            FUN_00406760();
            local_20 = *puVar8;
            local_1c = puVar8[1];
            local_18 = puVar8[2];
            uVar1 = puVar8[4];
            uVar2 = puVar8[5];
            uVar3 = puVar8[6];
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = local_20;
              param_2[1] = local_1c;
              param_2[2] = local_18;
              param_2[3] = local_14;
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = uVar1;
              param_3[1] = uVar2;
              param_3[2] = uVar3;
              param_3[3] = local_14;
            }
            piVar7 = (int *)FUN_00c206d0();
            (**(code **)(*piVar7 + 4))(4,*(undefined4 *)(local_24 + 0x4f0),&local_20);
            return 1;
          }
          FUN_00406760();
        }
        local_30 = local_30 + 0x30;
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(local_2c + 0x14));
    }
  }
  return 0;
}

// 00887300  KamaitatiObj::vf4C  size=362  [class]
void __fastcall KamaitatiObj::vf4C(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1[0x2b5] == 0) {
    Behavior::vf4C();
    if (param_1[0x186] == 1) {
      FUN_00870510();
    }
    iVar3 = FUN_00a12210(0);
    param_1[0x2b0] = *(int *)(iVar3 + 0x40);
    param_1[0x2b1] = *(int *)(iVar3 + 0x44);
    param_1[0x2b2] = *(int *)(iVar3 + 0x48);
    param_1[0x2b3] = *(int *)(iVar3 + 0x4c);
    (**(code **)(*param_1 + 100))();
    switchD_0080dbae::default();
    iVar3 = FUN_00a12210(0);
    fStack_20 = *(float *)(iVar3 + 0x40) - (float)param_1[0x2b0];
    fStack_1c = *(float *)(iVar3 + 0x44) - (float)param_1[0x2b1];
    fStack_18 = *(float *)(iVar3 + 0x48) - (float)param_1[0x2b2];
    fStack_14 = *(float *)(iVar3 + 0x4c) - (float)param_1[0x2b3];
    iVar3 = FUN_009f8b40();
    if (param_1[0x2b4] != 0) {
      FUN_0090fa30(param_1 + 0x2ac,0,param_1 + 0x2b0,0x3d4ccccd,&fStack_20,iVar3 << 0x10 | 5,
                   "Kamaitati");
      return;
    }
  }
  else {
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x139] = 1;
    (*pcVar2)();
    (**(code **)(*param_1 + 100))();
    fVar1 = (float)param_1[0x2b6];
    param_1[0x2b6] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x2a6] == 0)) {
      (**(code **)(param_1[0x280] + 8))(0x3f800000,0,0);
      param_1[0x2b5] = 0;
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00887470  FUN_00887470  size=74  [between]
void __thiscall FUN_00887470(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 008874C0  FUN_008874c0  size=176  [between]
void __thiscall FUN_008874c0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = *(uint *)(param_1 + 0x4b0);
  if (uVar2 == 0x7c0000) {
    uVar2 = 0;
  }
  else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar2);
  }
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  if (param_4 != 0) {
    FUN_00dffb20(param_4);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  FUN_00a8c930(uVar2,local_160);
  return;
}

// 00887570  KamaitatiObj::vf128  size=2138  [class]
void __fastcall KamaitatiObj::vf128(int *param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  float *pfVar12;
  int *piVar13;
  undefined4 *puVar14;
  float *pfVar15;
  bool bVar16;
  float10 fVar17;
  int **ppiVar18;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  float local_608;
  int *piStack_5f0;
  ushort *local_5ec;
  int *piStack_5e8;
  int local_5e4 [3];
  float afStack_5d8 [6];
  float local_5c0 [17];
  undefined4 uStack_57c;
  undefined4 uStack_578;
  int local_574;
  float local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  int aiStack_544 [9];
  undefined1 local_520 [36];
  undefined1 auStack_4fc [8];
  undefined1 auStack_4f4 [84];
  int local_4a0 [16];
  int local_460 [16];
  undefined **local_420;
  int *local_41c;
  int local_418;
  undefined4 local_414;
  int local_410 [259];
  
  Behavior::setSeqAtk();
  iVar4 = FUN_00a96130();
  local_41c = local_410;
  local_418 = 0;
  local_414 = 0x100;
  local_420 = lib::StaticArray<Collision*,256>::vftable;
  local_574 = iVar4;
  FUN_00a9d9a0();
  local_5e4[0] = 0;
  if (0 < iVar4) {
    do {
      puVar11 = (ushort *)local_460[local_5e4[0]];
      if ((char)puVar11[1] != '\x03') goto LAB_00887dbb;
      local_5ec = puVar11;
      FID_conflict__memcpy(local_4a0,param_1 + 4,0x40);
      FID_conflict__memcpy(local_520,param_1 + 4,0x40);
      FUN_00a92f90();
      iVar4 = FUN_00e3a1e0();
      bVar16 = iVar4 != 0;
      local_608 = (float)(uint)bVar16;
      uVar3 = puVar11[3];
      if (bVar16) {
        uVar3 = FUN_00a96170();
      }
      piVar5 = param_1;
      if (uVar3 != 0xffff) {
        piVar5 = (int *)FUN_00a12210();
      }
      if (piVar5 != (int *)0x0) {
        piVar5 = piVar5 + 4;
        piVar9 = local_4a0;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar9 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar9 = piVar9 + 1;
        }
      }
      local_570 = *(float *)(puVar11 + 6);
      local_56c = *(undefined4 *)(puVar11 + 8);
      local_568 = *(undefined4 *)(puVar11 + 10);
      fVar1 = *(float *)(puVar11 + 0xc);
      fVar2 = *(float *)(puVar11 + 0xe);
      if (bVar16) {
        fVar2 = fVar2 * -1.0;
        local_570 = local_570 * -1.0;
      }
      local_5c0[0xe] = 0.0;
      local_5c0[0xd] = 0.0;
      local_5c0[0xc] = 0.0;
      local_5c0[0xb] = 0.0;
      local_5c0[9] = 0.0;
      local_5c0[8] = 0.0;
      local_5c0[7] = 0.0;
      local_5c0[6] = 0.0;
      local_5c0[4] = 0.0;
      local_5c0[3] = 0.0;
      local_5c0[2] = 0.0;
      local_5c0[1] = 0.0;
      local_5c0[0xf] = 1.0;
      local_5c0[10] = 1.0;
      local_5c0[5] = 1.0;
      local_5c0[0] = 1.0;
      if (*(float *)(puVar11 + 0x10) != 0.0) {
        D3DXMatrixRotationZ();
        D3DXMatrixMultiply();
      }
      if (fVar2 != 0.0) {
        D3DXMatrixRotationY();
        D3DXMatrixMultiply();
      }
      if (fVar1 != 0.0) {
        D3DXMatrixRotationX();
        D3DXMatrixMultiply();
      }
      piVar5 = local_4a0;
      local_5c0[0xc] = local_570;
      local_5c0[0xd] = (float)local_56c;
      local_5c0[0xe] = (float)local_568;
      D3DXMatrixMultiply();
      piStack_5e8 = *(int **)(puVar11 + 0x14);
      local_5ec = (ushort *)0x0;
      local_5e4[0] = 0;
      afStack_5d8[0] = -*(float *)(puVar11 + 0x14);
      local_5e4[2] = 0;
      afStack_5d8[1] = 0.0;
      D3DXVec3TransformNormal(&local_5ec);
      ppiVar18 = &piStack_5e8;
      fVar1 = (float)piStack_5f0 + local_5c0[8];
      D3DXVec3TransformNormal(ppiVar18,ppiVar18,afStack_5d8);
      piStack_5f0 = (int *)(fVar1 + local_5c0[4]);
      local_5ec = (ushort *)((float)local_5ec + local_5c0[5]);
      switch(*(undefined1 *)((int)puVar11 + 3)) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 8:
        goto LAB_00887a3e;
      case 9:
LAB_00887a3e:
        piVar9 = local_5e4;
        piVar13 = aiStack_544;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar13 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar13 = piVar13 + 1;
        }
        break;
      case 10:
      case 7:
        goto LAB_00887a3e;
      case 0xb:
        piVar9 = local_5e4;
        piVar13 = aiStack_544;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar13 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar13 = piVar13 + 1;
        }
        break;
      case 0xc:
        piVar9 = local_5e4;
        piVar13 = aiStack_544;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar13 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar13 = piVar13 + 1;
        }
      }
      D3DXVec3TransformNormal(&stack0xfffff9bc,&stack0xfffff9bc,aiStack_544);
      piVar5 = (int *)(**(code **)(*piVar5 + 0x130))(puVar11);
      puVar11 = local_5ec;
      piStack_5e8 = piVar5;
      if (piVar5 == (int *)0x0) {
        FUN_00dd5650();
      }
      else {
        iVar4 = piVar5[2];
        *(ushort *)(iVar4 + 0x80) = local_5ec[4];
        *(ushort *)(iVar4 + 0x82) = local_5ec[2];
        *(int ***)(iVar4 + 0x20) = ppiVar18;
        *(undefined4 *)(iVar4 + 0x24) = uStack_61c;
        *(undefined4 *)(iVar4 + 0x28) = uStack_618;
        *(undefined4 *)(iVar4 + 0x2c) = uStack_614;
        fVar17 = (float10)fpatan((float10)(float)piStack_5f0,(float10)local_608);
        *(float *)(iVar4 + 0x30) = (float)fVar17;
        iVar6 = FUN_00a12210();
        if (iVar6 == 0) {
          aiStack_544[7] = 0;
          aiStack_544[6] = 0;
          aiStack_544[5] = 0;
          aiStack_544[4] = 0;
          aiStack_544[2] = 0;
          aiStack_544[1] = 0;
          aiStack_544[0] = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          uStack_554 = 0;
          uStack_558 = 0;
          uStack_55c = 0;
          aiStack_544[8] = 0x3f800000;
          aiStack_544[3] = 0x3f800000;
          uStack_54c = 0x3f800000;
          local_560 = 0x3f800000;
          D3DXMatrixRotationZ();
          D3DXMatrixMultiply();
          D3DXMatrixRotationX(auStack_4f4,0x40490fdb);
          D3DXMatrixMultiply(&uStack_57c,auStack_4fc,&uStack_57c);
          D3DXMatrixMultiply(iVar4 + 0x40,local_5c0 + 0xe,&piStack_5e8);
        }
        else {
          puVar10 = (undefined4 *)(iVar6 + 0x10);
          puVar14 = (undefined4 *)(iVar4 + 0x40);
          for (iVar8 = 0x10; puVar11 = local_5ec, piVar5 = piStack_5e8, iVar8 != 0;
              iVar8 = iVar8 + -1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
        }
        if (*puVar11 < 4) {
          *(uint *)(iVar4 + 0x34) = (uint)puVar11[2];
        }
        local_608 = (float)(uint)*puVar11;
        if (3 < (uint)local_608) {
          local_608 = 5.60519e-45;
        }
        if ((char)puVar11[1] == '\x03') {
          piStack_5f0 = local_41c;
          piVar9 = local_41c;
          if (local_41c != local_41c + local_418) {
            do {
              if (*(int *)(*piStack_5f0 + 0x378) != 0) {
                iVar4 = *(int *)(*(int *)(*piStack_5f0 + 0x378) + 8);
                uStack_578 = *(undefined4 *)(local_5ec + 0x12);
                uStack_57c = *(undefined4 *)(local_5ec + 0x14);
                uVar7 = (**(code **)(*param_1 + 0x270))();
                iVar6 = param_1[0x1d8];
                *(undefined4 *)(iVar4 + 0x94) = 1;
                pfVar12 = local_5c0;
                pfVar15 = (float *)(iVar4 + 0xa0);
                for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *pfVar15 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  pfVar15 = pfVar15 + 1;
                }
                *(undefined4 *)(iVar4 + 0xe0) = uStack_578;
                *(undefined4 *)(iVar4 + 0xe4) = uStack_57c;
                *(undefined4 *)(iVar4 + 0xe8) = uVar7;
                *(undefined4 *)(iVar4 + 0xec) = 0;
                *(int *)(iVar4 + 0xf0) = iVar6 + (int)local_608;
                piVar9 = local_41c;
                piVar5 = piStack_5e8;
              }
              piStack_5f0 = piStack_5f0 + 1;
            } while (piStack_5f0 != piVar9 + local_418);
          }
        }
        else if (local_418 != 0) {
          piVar9 = local_41c;
          while ((piVar9 != local_41c + local_418 &&
                 (((*(int *)(*piVar9 + 0x378) == 0 ||
                   (iVar4 = *(int *)(*(int *)(*piVar9 + 0x378) + 8),
                   *(ushort *)(iVar4 + 0x80) != puVar11[4])) ||
                  (*(ushort *)(iVar4 + 0x82) != puVar11[2]))))) {
            piVar9 = piVar9 + 1;
          }
        }
        (**(code **)(*piVar5 + 4))();
      }
LAB_00887dbb:
      local_5e4[0] = local_5e4[0] + 1;
    } while (local_5e4[0] < local_574);
  }
  return;
}

// 00894770  KamaitatiObj::vf50  size=175  [class]
void __fastcall KamaitatiObj::vf50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_20 [28];
  
  switchD_0080dbae::default();
  BehaviorAppBase::vf50();
  iVar2 = FUN_008706f0(local_20,0);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x2b6] = 0x42f00000;
    param_1[0x186] = 0;
    param_1[0x2b5] = 1;
    (*pcVar1)();
    FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 100))();
    FUN_008874c0(0xb,local_20,0);
  }
  (**(code **)(*param_1 + 0x128))();
  return;
}

// 00AB1BB0  KamaitatiObj::vf04  size=6  [class]
undefined * KamaitatiObj::vf04(void)

{
  return &DAT_01b35b24;
}

// 00AB1BC0  KamaitatiObj::vf94  size=6  [class]
undefined4 KamaitatiObj::vf94(void)

{
  return 2;
}

// 00AB9CD0  KamaitatiObj::vf00  size=30  [class]
undefined4 __thiscall KamaitatiObj::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_9();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

