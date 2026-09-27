// src/enemy/em0190/Em0190Debris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004FB9D0..00AB8530, 13 functions

#include "mgrr.h"
#include "Em0190Debris.h"

// 004FB9D0  Em0190Debris::vf114  size=35  [class]
void __thiscall Em0190Debris::vf114(int *param_1,int param_2)

{
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  return;
}

// 004FBA40  Em0190Debris::vf1B8  size=91  [class]
void Em0190Debris::vf1B8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    do {
      puVar1 = *(undefined4 **)(param_2 + iVar3 * 4);
      *puVar1 = 0;
      iVar2 = FUN_00a10040(0);
      if ((iVar2 == 2) && ((iVar2 = FUN_00a10040(1), iVar2 == 2 || (iVar2 == 1)))) {
        *puVar1 = 1;
      }
      *param_1 = 0x4200e;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 3;
    } while (iVar3 < param_3);
  }
  return;
}

// 004FBAA0  Em0190Debris::vf30  size=5  [class]
void __fastcall Em0190Debris::vf30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x674) = 1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x3c) == 0) {
      puVar3 = (undefined4 *)FUN_009f8b60();
      iVar1 = *(int *)(param_1 + 0x588);
      uVar2 = *puVar3;
      *(undefined4 *)(iVar1 + 0x3c) = 1;
      *(undefined4 *)(iVar1 + 0x40) = uVar2;
      return;
    }
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  }
  return;
}

// 005009E0  Em0190Debris::vf44  size=84  [class]
void __fastcall Em0190Debris::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int *)(param_1 + 0x874) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x874);
  }
  Behavior::vf44();
  return;
}

// 00500A40  FUN_00500a40  size=192  [between]
void __fastcall FUN_00500a40(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  
  FUN_009dbcf0();
  FUN_009d18a0(*(undefined4 *)(param_1 + 0x4bc));
  if (*(int *)(param_1 + 0x7b4) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
  }
  else {
    puVar1 = (undefined4 *)FUN_00916d50(local_70);
  }
  local_60 = *puVar1;
  local_5c = puVar1[1];
  local_58 = puVar1[2];
  local_54 = puVar1[3];
  local_40 = *(undefined4 *)(param_1 + 0x4f0);
  local_34 = 0x400;
  local_50 = 0;
  local_4c = 0x3f800000;
  local_48 = 0;
  local_44 = local_64;
  EffectAttrSystem::RequestCall(&local_60);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091acf0(0);
  }
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  return;
}

// 00500B00  FUN_00500b00  size=362  [between]
float * __thiscall FUN_00500b00(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  fVar3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x330);
  *param_2 = 0.0;
  iVar6 = 0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (0 < *(int *)(iVar2 + 0xc4)) {
    fVar1 = param_2[3];
    pfVar5 = (float *)(*(int *)(iVar2 + 0xc0) + 0x18);
    fVar4 = fVar3;
    do {
      iVar6 = iVar6 + 1;
      *param_2 = pfVar5[-2] + *param_2;
      fVar4 = pfVar5[-1] + fVar4;
      param_2[1] = fVar4;
      fVar3 = *pfVar5 + fVar3;
      param_2[2] = fVar3;
      fVar1 = pfVar5[1] + fVar1;
      param_2[3] = fVar1;
      pfVar5 = pfVar5 + 0x1c;
    } while (iVar6 < *(int *)(iVar2 + 0xc4));
  }
  if (*(int *)(iVar2 + 0xc4) != 0) {
    fVar3 = (float)*(int *)(iVar2 + 0xc4);
    *param_2 = *param_2 / fVar3;
    param_2[1] = param_2[1] / fVar3;
    param_2[2] = param_2[2] / fVar3;
    param_2[3] = param_2[3] / fVar3;
  }
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    return param_2;
  }
  fVar3 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(param_2,param_2);
    return param_2;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_2 = 0.0;
  param_2[1] = 1.0;
  param_2[2] = 0.0;
  return param_2;
}

// 00500C70  Em0190Debris::vf1BC  size=296  [class]
void __thiscall Em0190Debris::vf1BC(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  
  Bh0064::vf1BC(param_2);
  if (param_2 != (int *)0x0) {
    puVar3 = &DAT_01b34f20;
    (**(code **)(*param_2 + 4))(&DAT_01b34f20);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 == 0) {
      puVar3 = &DAT_01b34f24;
      (**(code **)(*param_2 + 4))(&DAT_01b34f24);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        param_1[0x21f] = param_2[0x21f];
        param_1[0x224] = param_2[0x224];
        param_1[0x225] = param_2[0x225];
        param_1[0x226] = param_2[0x226];
        param_1[0x227] = param_2[0x227];
        param_1[0x228] = param_2[0x228];
        param_1[0x229] = param_2[0x229];
      }
    }
    else {
      iVar2 = FUN_009f8b40();
      param_1[0x21f] = iVar2;
      param_1[0x224] = param_2[0x10];
      param_1[0x225] = param_2[0x11];
      param_1[0x226] = param_2[0x12];
      param_1[0x227] = param_2[0x13];
      pcVar1 = *(code **)(*param_1 + 0x84);
      param_1[0x229] = param_2[0x3ec];
      iVar2 = (*pcVar1)();
      param_1[0x228] = *(int *)(iVar2 + 4);
    }
  }
  if (param_1[0x1ed] != 0) {
    FUN_0091c760(param_1[0x21f]);
  }
  if (param_1[0x21d] != 0) {
    FUN_0091a980();
    return;
  }
  return;
}

// 0050DB60  Em0190Debris::vf4C  size=1337  [class]
/* WARNING: Removing unreachable block (ram,0x0050df9e) */

void __fastcall Em0190Debris::vf4C(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  float fStack_68;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [80];
  
  Behavior::vf4C();
  FUN_00a92fb0();
  fVar4 = (float10)FUN_00e049b0();
  local_84 = (float)fVar4;
  piVar1 = (int *)FUN_00c13920();
  fVar7 = 0.0;
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      piVar1 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar1);
    }
  }
  uVar3 = FUN_00a8cab0();
  switch(uVar3) {
  case 0:
    param_1[0x186] = param_1[0x186] + 1;
    param_1[0x220] = 0;
    return;
  case 1:
    iVar2 = FUN_00a8e520();
    if (iVar2 == 0) {
      if (param_1[0x21d] != 0) {
        FUN_00915e60(0x3f800000);
        FUN_00915ea0(0x3e800000);
      }
      param_1[0x22b] = 0;
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 2:
    if ((piVar1 == (int *)0x0) || (param_1[0x1ed] == 0)) {
      (**(code **)(*param_1 + 0x20))();
      FUN_009fdde0();
    }
    else {
      iVar2 = FUN_00a12210(0xf00);
      if (iVar2 != 0) {
        local_84 = *(float *)(iVar2 + 0x40) - (float)param_1[0x224];
        fStack_80 = *(float *)(iVar2 + 0x44) - (float)param_1[0x225];
        fStack_7c = *(float *)(iVar2 + 0x48) - (float)param_1[0x226];
        fStack_78 = *(float *)(iVar2 + 0x4c) - (float)param_1[0x227];
        FUN_00911dc0(&fStack_a4);
        fStack_a4 = fStack_a4 - (float)param_1[0x224];
        fStack_a0 = fStack_a0 - (float)param_1[0x225];
        fStack_9c = fStack_9c - (float)param_1[0x226];
        fStack_98 = fStack_98 - (float)param_1[0x227];
        if (param_1[0x21d] != 0) {
          fStack_88 = *(float *)(iVar2 + 0x94);
          iVar2 = (**(code **)(*piVar1 + 0x84))();
          fVar4 = (float10)FUN_00ddba30(*(float *)(iVar2 + 4) + fStack_88);
          fVar4 = (float10)FUN_00ddba30((float)(fVar4 - ((float10)(float)param_1[0x228] +
                                                        (float10)3.1415927)));
          fStack_88 = (float)fVar4;
          fVar6 = (float)fVar4;
          D3DXMatrixRotationY(auStack_54,fVar6);
          D3DXVec3TransformNormal(&stack0xffffff54,&stack0xffffff54,auStack_5c);
          fStack_98 = fStack_98 + fVar6;
          fStack_94 = fVar7 + fStack_94;
          fStack_90 = unaff_EDI + fStack_90;
          fStack_8c = unaff_ESI + fStack_8c;
          FUN_00912300(&fStack_98);
          fStack_78 = 0.0;
          afStack_74[0] = fStack_9c;
          afStack_74[1] = 0.0;
          FUN_00915580(&fStack_78);
          param_1[0x186] = param_1[0x186] + 1;
          return;
        }
      }
    }
    param_1[0x186] = param_1[0x186] + 1;
    return;
  case 3:
    fVar7 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar7 + fStack_88);
    if ((80.0 < fVar7 + fStack_88) ||
       ((piVar1 != (int *)0x0 && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)))) {
      if (param_1[0x21d] == 0) {
        param_1[0x186] = param_1[0x186] + 1;
        return;
      }
      FUN_00915e60(0x41f00000);
      FUN_00500b00(&fStack_a4);
      fVar4 = (float10)FUN_00916de0();
      local_84 = (float)((float10)7.5 * fVar4);
      fStack_80 = (float)(fVar4 * (float10)-20.0);
      fStack_7c = (float)((float10)7.5 * fVar4);
      if ((piVar1 != (int *)0x0) && (iVar2 = FUN_00a12210(0xf00), iVar2 != 0)) {
        FUN_00916d50(afStack_74);
        fStack_a4 = afStack_74[0] - *(float *)(iVar2 + 0x40);
        fStack_9c = afStack_74[2] - *(float *)(iVar2 + 0x48);
        fStack_98 = fStack_68 - *(float *)(iVar2 + 0x4c);
      }
      fStack_a0 = 1.0;
      fVar7 = fStack_9c * fStack_9c + fStack_a4 * fStack_a4 + 1.0;
      if (fVar7 < 0.0 == (fVar7 == 0.0)) {
        FUN_00ddf460(&fStack_a4,&fStack_a4);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_9c = 0.0;
        fStack_a4 = 0.0;
        fStack_a0 = 1.0;
      }
      fStack_a4 = fStack_a4 * local_84;
      fStack_a0 = fStack_a0 * fStack_80;
      fStack_9c = fStack_9c * fStack_7c;
      fStack_98 = fStack_78 * fStack_98;
      FUN_0091a7e0(&fStack_a4);
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 4:
    fVar4 = (float10)FUN_00dde300(0,0x42200000);
    param_1[0x186] = param_1[0x186] + 1;
    param_1[0x220] = (int)(float)(fVar4 + (float10)10.0);
    return;
  case 5:
    fVar7 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar7 - fStack_88);
    if (fVar7 - fStack_88 < 0.0) {
      param_1[0x220] = 0;
      fVar4 = (float10)FUN_00a13390();
      if ((float10)2.0 <= fVar4) {
        FUN_00500a40();
        (**(code **)(*param_1 + 0x20))();
        param_1[0x186] = param_1[0x186] + 1;
        return;
      }
      if (param_1[0x1ed] != 0) {
        FUN_0091acf0(0);
      }
      (**(code **)(*param_1 + 0x20))();
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 6:
    fVar7 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar7 + fStack_88);
    if (600.0 < fVar7 + fStack_88) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00512B40  Em0190Debris::vf54  size=513  [class]
void __fastcall Em0190Debris::vf54(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 local_90 [16];
  undefined1 local_50 [76];
  
  Behavior::vf54();
  if (*(int *)(param_1 + 0x870) == 0) {
    if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x878) != 0)) {
      FUN_0091e980(param_1);
      switchD_0080dbae::default();
    }
    return;
  }
  if (*(int *)(param_1 + 0x874) != 0) {
    FUN_00919ec0(local_50);
    iVar3 = FUN_00912680(0);
    iVar4 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar4 = param_1;
    }
    if (((-1 < iVar3) && (iVar3 < *(short *)(iVar4 + 0x358))) &&
       (iVar4 = iVar3 * 0xb0 + *(int *)(iVar4 + 0x350), iVar4 != 0)) {
      *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 4;
      FUN_01005140(local_90);
      puVar1 = (undefined4 *)(iVar4 + 0x10);
      puVar5 = local_90;
      puVar6 = puVar1;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_00ddd140(local_90,param_1 + 0x70);
      D3DXMatrixMultiply(puVar1,local_90,puVar1);
      iVar4 = *(int *)(param_1 + 0x360);
      if (*(int *)(param_1 + 0x360) == 0) {
        iVar4 = param_1;
      }
      if (0 < *(short *)(iVar4 + 0x358)) {
        *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
        FUN_01005140(local_90);
        puVar1 = (undefined4 *)(param_1 + 0x10);
        puVar5 = local_90;
        puVar6 = puVar1;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        D3DXMatrixMultiply(puVar1,param_1 + 0x8b0,puVar1);
      }
    }
  }
  if (*(int *)(param_1 + 0x8ac) != 0) {
    FUN_00a92fb0();
    fVar7 = (float10)FUN_00e049b0();
    fVar2 = (float)fVar7;
    iVar4 = FUN_00a12210(1);
    if (iVar4 != 0) {
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      fVar2 = *(float *)(param_1 + 0x8a4) * 0.017453292 * fVar2 + *(float *)(param_1 + 0x8a8);
      *(float *)(param_1 + 0x8a8) = fVar2;
      D3DXMatrixRotationY(local_90,fVar2);
      D3DXMatrixMultiply(iVar4 + 0x10,&stack0xffffff68,iVar4 + 0x10);
    }
    fVar7 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x8a4) = (float)(fVar7 * (float10)*(float *)(param_1 + 0x8a4));
  }
  switchD_0080dbae::default();
  FUN_0091ea00(param_1);
  return;
}

// 00515AA0  Em0190Debris::vf40  size=1327  [class]
undefined4 __fastcall Em0190Debris::vf40(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  void *local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  undefined1 auStack_144 [4];
  float local_140;
  float local_13c;
  float local_138 [2];
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_e0 [36];
  float local_50;
  undefined1 local_2c;
  
  iVar5 = Behavior::startup();
  if (iVar5 != 0) {
    local_1ac = 0.0;
    local_1a8 = 0.0;
    local_1b0 = 1.4013e-45;
    iVar5 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_1b0);
    if (iVar5 != 0) {
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      FUN_009fd240();
      uVar12 = 3;
      FUN_00a92fb0(3);
      FUN_00e08640(uVar12);
      iVar5 = FUN_009f8d30();
      if (iVar5 != 0) {
        iVar5 = FUN_00dd3500(0x3080,&DAT_01b7bd48);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = lib::StaticArray<RigidBodyList::ConnectMap,256>::
                  StaticArray<RigidBodyList::ConnectMap,256>();
        }
        *(int *)(param_1 + 0x7b4) = iVar5;
        if (iVar5 == 0) {
          FUN_00dd5650(&DAT_01640b60);
LAB_00515b5a:
          FUN_00a805f0();
          return 1;
        }
        FUN_009fdd80(iVar5);
        iVar5 = FUN_00923ff0(param_1);
        if (iVar5 == 0) {
          FUN_00dd5650(&DAT_01640b54);
          iVar5 = *(int *)(param_1 + 0x7b4);
          if (iVar5 != 0) {
            lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
            FUN_00dd4920(iVar5);
            *(undefined4 *)(param_1 + 0x7b4) = 0;
            return 1;
          }
        }
        else {
          fVar9 = (float10)FUN_00916de0();
          if ((float10)0 == fVar9) goto LAB_00515b5a;
          FUN_0091c3e0(6,1);
          fVar9 = (float10)FUN_00a13390();
          if (fVar9 < (float10)1.0 != (fVar9 == (float10)1.0)) {
            FUN_0091adf0(8);
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
            *(undefined4 *)(param_1 + 0x460) = 0x3f333333;
          }
          FUN_0091adf0(0x20);
          FUN_0091afb0(0x80);
          FUN_0091adf0(0x200000);
          FUN_0091c130(0);
          *(undefined4 *)(param_1 + 0x878) = 1;
          FUN_0091ea00(param_1);
          fVar9 = (float10)FUN_00916de0();
          fVar10 = fVar9 * (float10)-1.0;
          local_1b0 = (float)fVar10;
          local_1ac = (float)((float10)0.2 * fVar10);
          local_1a8 = (float)fVar10;
          pfVar6 = (float *)FUN_00500b00(&local_170);
          fVar2 = pfVar6[1];
          fVar3 = pfVar6[2];
          fVar4 = pfVar6[3];
          if (((*pfVar6 == 0.0) && (fVar2 == 0.0)) && (fVar3 == 0.0)) {
            fVar2 = 1.0;
          }
          pfVar1 = (float *)(param_1 + 0x8f0);
          *pfVar1 = local_1b0 * *pfVar6;
          *(float *)(param_1 + 0x8f4) = local_1ac * fVar2;
          *(float *)(param_1 + 0x8f8) = fVar3 * local_1a8;
          *(float *)(param_1 + 0x8fc) = fVar4 * local_1a4;
          *pfVar1 = *pfVar1 * 3.0;
          *(float *)(param_1 + 0x8f4) = *(float *)(param_1 + 0x8f4) * 3.0;
          *(float *)(param_1 + 0x8f8) = *(float *)(param_1 + 0x8f8) * 3.0;
          *(float *)(param_1 + 0x8fc) = *(float *)(param_1 + 0x8fc) * 3.0;
          FUN_00917560();
          FUN_00912890(DAT_01885d20);
          iVar7 = FUN_00912680(0);
          iVar5 = *(int *)(param_1 + 0x360);
          if (*(int *)(param_1 + 0x360) == 0) {
            iVar5 = param_1;
          }
          if (((-1 < iVar7) && (iVar7 < *(short *)(iVar5 + 0x358))) &&
             (iVar5 = iVar7 * 0xb0 + *(int *)(iVar5 + 0x350), iVar5 != 0)) {
            local_174 = (void *)(iVar5 + 0x10);
            FID_conflict__memcpy(&local_160,local_174,0x40);
            local_190 = local_130;
            local_18c = (float)local_12c;
            local_188 = (float)local_128;
            local_184 = (float)local_124;
            local_1b0 = SQRT(local_158 * local_158 + local_160 * local_160 + local_15c * local_15c);
            local_1ac = SQRT(local_148 * local_148 + local_150 * local_150 + local_14c * local_14c);
            local_194 = SQRT(local_138[0] * local_138[0] +
                             local_140 * local_140 + local_13c * local_13c);
            fVar10 = (float10)FUN_00ddbaa0(-(local_158 / local_194));
            fVar11 = (float10)fpatan((float10)local_148 / (float10)local_194,
                                     (float10)local_138[0] / (float10)local_194);
            local_170 = (float)fVar11;
            local_16c = (float)fVar10;
            fVar10 = (float10)fpatan((float10)local_15c / (float10)local_1ac,
                                     (float10)local_160 / (float10)local_1b0);
            local_168 = (float)fVar10;
            FUN_0118f7b0();
            local_2c = 1;
            local_50 = (float)fVar9;
            uVar12 = FUN_009f8b40(0,0,0);
            local_e0[0] = FUN_00410130(0x1f,uVar12);
            piVar8 = (int *)FUN_00910da0();
            iVar5 = *piVar8;
            fVar9 = (float10)FUN_00a13390(1);
            uVar12 = (**(code **)(iVar5 + 8))
                               (&local_194,local_e0,&local_190,&local_170,
                                (float)(fVar9 * (float10)0.5));
            FUN_00910ab0(uVar12);
            *(undefined4 *)(param_1 + 0x870) = 1;
            D3DXMatrixInverse(local_138,0,local_18c);
            iVar5 = param_1 + 0x8b0;
            D3DXMatrixMultiply(iVar5,param_1 + 0x10,auStack_144);
            D3DXMatrixInverse(iVar5,0,iVar5);
          }
          FUN_004066f0();
          FUN_0091a800(pfVar1);
          local_190 = *pfVar1 * 0.1;
          local_18c = *(float *)(param_1 + 0x8f4) * 0.1;
          local_188 = *(float *)(param_1 + 0x8f8) * 0.1;
          local_184 = *(float *)(param_1 + 0x8fc) * 0.1;
          FUN_0091a840(&local_190);
          FUN_00406760();
          iVar5 = FUN_00a12210(1);
          if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0x8ac) = 1;
            *(undefined4 *)(param_1 + 0x8a8) = 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

// 00AA6BE0  Em0190Debris::Em0190Debris  size=28  [class]
undefined4 * __fastcall Em0190Debris::Em0190Debris(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x21d] = 0;
  return param_1;
}

// 00AA6C00  Em0190Debris::vf04  size=6  [class]
undefined * Em0190Debris::vf04(void)

{
  return &DAT_01b34f24;
}

// 00AB8530  Em0190Debris::vf00  size=105  [class]
undefined4 * __thiscall Em0190Debris::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

