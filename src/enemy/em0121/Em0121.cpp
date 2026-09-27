// src/enemy/em0121/Em0121.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004EC060..004F1010, 20 functions

#include "types.h"

// 004EC060  FUN_004ec060  size=574  [callgraph]
undefined4 __thiscall
FUN_004ec060(int param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fStack_98;
  float *pfStack_94;
  float *pfStack_90;
  undefined1 *puStack_8c;
  float *pfStack_88;
  float local_84;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [3];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  *(undefined4 *)(param_1 + 0xf84) = 0;
  local_84 = 1.4013e-45;
  local_70 = *param_2 + *param_3 * param_4;
  local_6c = param_3[1] * param_4 + param_2[1];
  local_68 = param_3[2] * param_4 + param_2[2];
  local_64[0] = param_3[3] * param_4 + param_2[3];
  pfStack_88 = (float *)0x4ec0ba;
  iVar5 = FUN_00ac4640();
  if (iVar5 != 0) {
    local_84 = 1.4013e-45;
    pfStack_88 = &local_70;
    puStack_8c = (undefined1 *)0x4ec0d0;
    iVar5 = FUN_00ac4670();
    if (iVar5 == 0) {
      local_84 = 1.4013e-45;
      local_70 = *param_2 + *param_3 * param_4 * 0.25;
      local_6c = param_3[1] * param_4 * 0.25 + param_2[1];
      local_68 = param_3[2] * param_4 * 0.25 + param_2[2];
      local_64[0] = param_3[3] * param_4 * 0.25 + param_2[3];
      pfStack_88 = (float *)0x4ec12a;
      iVar5 = FUN_00ac4640();
      if (iVar5 != 0) {
        local_84 = 1.4013e-45;
        pfStack_88 = &local_70;
        puStack_8c = (undefined1 *)0x4ec140;
        iVar5 = FUN_00ac4670();
        if (iVar5 == 0) {
          pfStack_88 = (float *)local_50;
          local_84 = param_5;
          puStack_8c = (undefined1 *)0x4ec159;
          D3DXMatrixRotationY();
          puStack_8c = auStack_58;
          pfStack_90 = param_3;
          pfStack_94 = &local_68;
          fStack_98 = 7.232551e-39;
          D3DXVec3TransformNormal();
          fStack_98 = 1.4013e-45;
          fVar4 = local_70 * param_4;
          fVar3 = local_6c * param_4;
          local_84 = *param_2 + fStack_74 * param_4 * 0.25;
          fVar1 = param_2[1];
          fVar2 = param_2[2];
          iVar5 = FUN_00ac4640();
          if (iVar5 != 0) {
            fStack_98 = 1.4013e-45;
            iVar5 = FUN_00ac4670(&local_84);
            if (iVar5 == 0) {
              fStack_98 = -param_5;
              D3DXMatrixRotationY(local_64);
              D3DXVec3TransformNormal(&stack0xffffff84,param_3,&local_6c);
              fStack_98 = *param_2 + (float)pfStack_88 * param_4 * 0.25;
              pfStack_94 = (float *)(local_84 * param_4 * 0.25 + param_2[1]);
              pfStack_90 = (float *)((fVar4 * 0.25 + fVar1) * param_4 * 0.25 + param_2[2]);
              puStack_8c = (undefined1 *)((fVar3 * 0.25 + fVar2) * param_4 * 0.25 + param_2[3]);
              iVar5 = FUN_00ac4640(1);
              if (iVar5 != 0) {
                iVar5 = FUN_00ac4670(&fStack_98,1);
                if (iVar5 == 0) {
                  return 0;
                }
              }
            }
          }
          *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) + param_5;
          *(float *)(param_1 + 0xf84) = param_5;
        }
      }
    }
  }
  return 1;
}

// 004EC2A0  FUN_004ec2a0  size=70  [callgraph]
undefined4 __fastcall FUN_004ec2a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
  if (iVar1 != 0) {
    iVar1 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98),0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 004EC310  Em0121::vf44  size=85  [class]
void __fastcall Em0121::vf44(int param_1)

{
  FUN_00a8c9b0(0,0,0,0);
  FUN_008e3c10();
  FUN_008e1c60();
  RayCastManager::getWork(param_1 + 0xdc0);
  FUN_00a9d8a0();
  FUN_00a97d20();
  BehaviorEmBase::vf44();
  return;
}

// 004EC720  FUN_004ec720  size=197  [callgraph]
undefined4 __fastcall FUN_004ec720(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_00c13920();
  (**(code **)(*piVar3 + 0x28))(0);
  iVar4 = FUN_00a7c8a0();
  fVar1 = *(float *)(iVar4 + 0x40);
  fVar2 = *(float *)(iVar4 + 0x48);
  iVar4 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
  if (iVar4 != 0) {
    iVar4 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98),0);
    if (iVar4 == 0) {
      iVar4 = FUN_00c19c00(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98),0);
      if (iVar4 != 0) {
        iVar4 = FUN_00a7c8a0();
        fVar1 = *(float *)(iVar4 + 0x40) - fVar1;
        fVar2 = *(float *)(iVar4 + 0x48) - fVar2;
        fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
        if (fVar1 < 10.0 != (fVar1 == 10.0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 004EC7F0  FUN_004ec7f0  size=763  [callgraph]
/* WARNING: Removing unreachable block (ram,0x004ec952) */

undefined4 __fastcall FUN_004ec7f0(int param_1)

{
  float fVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  
  if ((*(byte *)(param_1 + 0x4a8) & 1) != 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      fStack_34 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x40);
      fStack_2c = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
      fStack_28 = *(float *)(iVar4 + 0x4c) - *(float *)(param_1 + 0x4c);
      FUN_00a926c0(&fStack_44);
      pfVar5 = (float *)FUN_00a926c0(auStack_24);
      fStack_64 = *pfVar5 * -1.0;
      fStack_60 = pfVar5[1] * -1.0;
      fStack_5c = pfVar5[2] * -1.0;
      fStack_58 = pfVar5[3] * -1.0;
      fStack_54 = fStack_34;
      fStack_4c = fStack_2c;
      fStack_48 = fStack_28;
      fStack_50 = fStack_40;
      if (((fStack_34 != 0.0) || (fStack_40 != 0.0)) || (fStack_2c != 0.0)) {
        fVar1 = fStack_2c * fStack_2c + fStack_40 * fStack_40 + fStack_34 * fStack_34;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&fStack_54,&fStack_54);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_54 = 0.0;
          fStack_50 = 1.0;
          fStack_4c = 0.0;
        }
      }
      bVar6 = fStack_3c * fStack_4c + fStack_50 * fStack_40 + fStack_54 * fStack_44 <= 0.0;
      if (bVar6) {
        fStack_58 = fStack_38;
      }
      else {
        fStack_44 = fStack_44 * -1.0;
        fStack_40 = fStack_40 * -1.0;
        fStack_3c = fStack_3c * -1.0;
        fStack_58 = fStack_38 * -1.0;
      }
      fVar1 = fStack_3c * fStack_2c + fStack_40 * fStack_40 + fStack_44 * fStack_34;
      fStack_64 = fStack_44;
      fStack_60 = fStack_40;
      fStack_5c = fStack_3c;
      iVar4 = FUN_004ec060((float *)(param_1 + 0x40),&fStack_64,fVar1,0x3e860a92);
      if ((iVar4 != 0) && (5.0 < ABS(fVar1))) {
        *(uint *)(param_1 + 0xf80) = (uint)bVar6;
        *(undefined4 *)(param_1 + 0xf24) = 1;
        *(undefined4 *)(param_1 + 0xf28) = 1;
        *(undefined4 *)(param_1 + 0xf40) = 0;
        *(undefined4 *)(param_1 + 0xf44) = 0;
        *(undefined4 *)(param_1 + 0xf48) = 0;
        *(undefined4 *)(param_1 + 0xf4c) = uStack_18;
        sVar2 = FUN_00dde2d0(0,10);
        fVar1 = (float)(int)sVar2 - 5.0;
        *(float *)(param_1 + 0xf50) = fStack_64 * fVar1;
        *(float *)(param_1 + 0xf54) = fVar1 * fStack_60;
        *(float *)(param_1 + 0xf58) = fStack_5c * fVar1;
        *(float *)(param_1 + 0xf5c) = fStack_58 * fVar1;
        return 1;
      }
    }
  }
  return 0;
}

// 004ECAF0  Em0121::vf50  size=862  [class]
void __fastcall Em0121::vf50(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((*(int *)(param_1 + 0x4a0) == 0) || (*(int *)(param_1 + 0x4a0) == 2)) {
    FUN_00a84720();
    switchD_0080dbae::default();
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xee0) = 0x3dcccccd;
      fVar4 = (float10)FUN_00dde300(0,0x3e99999a);
      *(float *)(param_1 + 0xed0) = (float)(fVar4 - (float10)0.15);
      fVar4 = (float10)FUN_00dde300(0,0x3f000000);
      *(float *)(param_1 + 0xed4) = (float)(fVar4 * (float10)-1.0);
      fVar4 = (float10)FUN_00dde300(0,0x3e99999a);
      *(float *)(param_1 + 0xed8) = (float)(fVar4 - (float10)0.15);
      iVar3 = FUN_00a12210(0x503);
      fStack_40 = *(float *)(iVar3 + 0x40);
      uVar5 = 5;
      fStack_3c = *(float *)(iVar3 + 0x44);
      fStack_38 = *(float *)(iVar3 + 0x48);
      fStack_34 = *(float *)(iVar3 + 0x4c);
      FUN_00a7c8a0(5);
      iVar3 = FUN_00a12210(uVar5);
      fStack_30 = *(float *)(iVar3 + 0x40);
      fStack_2c = *(float *)(iVar3 + 0x44);
      fStack_28 = *(float *)(iVar3 + 0x48);
      fStack_24 = *(float *)(iVar3 + 0x4c);
      iVar3 = FUN_004ec720();
      fVar1 = fStack_2c;
      if (iVar3 != 0) {
        fVar1 = fStack_2c + 1.25;
      }
      *(float *)(param_1 + 0xef0) =
           ((*(float *)(param_1 + 0xf00) + *(float *)(param_1 + 0xed0) + *(float *)(param_1 + 0xeb0)
            + fStack_30) - *(float *)(param_1 + 0xef0)) * 0.1 + *(float *)(param_1 + 0xef0);
      *(float *)(param_1 + 0xef4) =
           ((*(float *)(param_1 + 0xf04) + *(float *)(param_1 + 0xed4) + *(float *)(param_1 + 0xeb4)
            + fVar1) - *(float *)(param_1 + 0xef4)) * 0.1 + *(float *)(param_1 + 0xef4);
      *(float *)(param_1 + 0xef8) =
           ((*(float *)(param_1 + 0xf08) + *(float *)(param_1 + 0xed8) + *(float *)(param_1 + 0xeb8)
            + fStack_28) - *(float *)(param_1 + 0xef8)) * 0.1 + *(float *)(param_1 + 0xef8);
      *(float *)(param_1 + 0xefc) =
           ((*(float *)(param_1 + 0xedc) + *(float *)(param_1 + 0xebc) + *(float *)(param_1 + 0xf0c)
            + fStack_24) - *(float *)(param_1 + 0xefc)) * 0.1 + *(float *)(param_1 + 0xefc);
      fStack_50 = *(float *)(param_1 + 0xef0) - fStack_40;
      fStack_4c = *(float *)(param_1 + 0xef4) - fStack_3c;
      fStack_48 = *(float *)(param_1 + 0xef8) - fStack_38;
      fStack_44 = *(float *)(param_1 + 0xefc) - fStack_34;
      if (((fStack_50 != 0.0) || (fStack_4c != 0.0)) || (fStack_48 != 0.0)) {
        fVar1 = fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&fStack_50,&fStack_50);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_48 = 0.0;
          fStack_50 = 0.0;
          fStack_4c = 1.0;
        }
      }
      fStack_50 = fStack_50 * -1.0;
      fStack_4c = fStack_4c * -1.0;
      fStack_48 = fStack_48 * -1.0;
      fStack_20 = fStack_40 + fStack_50;
      fStack_1c = fStack_3c + fStack_4c;
      fStack_18 = fStack_48 + fStack_38;
      fStack_14 = fStack_44 + fStack_34;
      FUN_00a84780(&fStack_20,1,1,0,0,0x3f800000);
    }
  }
  FUN_00a93170();
  BehaviorEmBase::vf50();
  return;
}

// 004ECE50  Em0121::vf264  size=24  [class]
undefined4 Em0121::vf264(undefined4 param_1)

{
  FUN_0040ac60(param_1);
  return 1;
}

// 004ED940  FUN_004ed940  size=696  [callgraph]
void __fastcall FUN_004ed940(int param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_00a8cad0();
  switch(uVar3) {
  case 0:
    sVar2 = FUN_00dde2d0(0,2);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    *(undefined4 *)(param_1 + 0xf20) = 0;
    *(float *)(param_1 + 0xf1c) = (float)(int)sVar2 * 0.5 + 2.0;
  case 1:
    if (((DAT_01bea060 & 0x20000) == 0) && (*(int *)(param_1 + 0xdc4) == 0)) {
      return;
    }
    if (*(int *)(param_1 + 0xf14) != 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xf1c) - *(float *)(param_1 + 0x910) * 0.016666668;
    *(float *)(param_1 + 0xf1c) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    sVar2 = FUN_00dde2d0(0,2);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    *(float *)(param_1 + 0xf1c) = (float)(int)sVar2 * 0.5 + 2.0;
    return;
  case 2:
    FUN_00aa4080(0x8a,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    return;
  case 3:
    iVar4 = FUN_00a95630(0x8a,0x28);
    if (iVar4 != 0) {
      FUN_004ed390(*(uint *)(param_1 + 0x4a8) >> 2 & 1);
      FUN_004ed390(*(uint *)(param_1 + 0x4a8) >> 2 & 1);
    }
    uVar3 = 0x2d;
    break;
  case 4:
    iVar4 = FUN_00a95630(0x8a,0x28);
    if (iVar4 != 0) {
      FUN_004ed390(*(uint *)(param_1 + 0x4a8) >> 2 & 1);
      FUN_004ed390(*(uint *)(param_1 + 0x4a8) >> 2 & 1);
    }
    uVar3 = 0x32;
    break;
  case 5:
    iVar4 = FUN_00a95630(0x8a,0x28);
    if (iVar4 != 0) {
      FUN_004ed390(*(uint *)(param_1 + 0x4a8) >> 2 & 1);
      FUN_004ed390(*(uint *)(param_1 + 0x4a8) >> 2 & 1);
    }
    goto LAB_004edbb1;
  default:
    goto switchD_004ed952_default;
  }
  iVar4 = FUN_00a95630(0x8a,uVar3);
  if (iVar4 != 0) {
    iVar4 = FUN_004ec6b0();
    if (((iVar4 == 0) || ((*(byte *)(param_1 + 0x4a8) & 4) != 0)) ||
       (iVar4 = FUN_004ec2a0(), iVar4 == 0)) {
      FUN_00aa4080(0x7d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a8cb70(1);
    }
    else {
      FUN_00aa4080(0x8a,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    }
  }
LAB_004edbb1:
  iVar4 = FUN_00a94db0(0x8a);
  if (iVar4 != 0) {
    FUN_00aa4080(0x7d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8cb70(1);
  }
switchD_004ed952_default:
  return;
}

// 004EDC10  FUN_004edc10  size=5040  [callgraph]
void __fastcall FUN_004edc10(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  uint uStack_334;
  undefined1 local_330 [4];
  undefined4 local_32c;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  uint local_294;
  uint local_290;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 uStack_1bc;
  short sStack_1ba;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  
  uVar4 = FUN_00a8cad0();
  switch(uVar4) {
  case 0:
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    *(undefined4 *)(param_1 + 0xf1c) = 0;
  case 1:
    fVar1 = *(float *)(param_1 + 0xf1c) - *(float *)(param_1 + 0x910) * 0.016666668;
    *(float *)(param_1 + 0xf1c) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0xf1c) = 0x3e4ccccd;
      if ((DAT_01bea060 & 0x40000000) == 0) {
        iVar5 = FUN_004ec720();
        if (iVar5 == 0) {
          sVar3 = (ushort)(*(int *)(param_1 + 0xeac) != 0) * 4 + 0xf;
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          local_21c = 0x24;
          local_32c = 0x30361;
          local_220 = 0x65;
          puVar6 = (undefined4 *)FUN_009f8b60();
          local_1c0 = *puVar6;
          local_290 = local_290 | 0x400000;
          local_30c = *(undefined4 *)(param_1 + 0x4f0);
          local_294 = local_294 | 0xc0;
          local_320 = 0x141;
          local_31c = 100;
          local_314 = 0x14;
          local_318 = 100;
          local_310 = 0x500;
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          piVar7 = (int *)FUN_00c13920();
          local_1c0 = (**(code **)(*piVar7 + 0x28))(0);
          uStack_1b4 = 0;
          uStack_334 = uStack_334 | 0x20;
          uStack_1b0 = 0x3dcccccd;
          uStack_1ac = 0;
          uStack_1bc = 0xffff;
          uStack_1a8 = uStack_348;
          iVar5 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
          if ((iVar5 != 0) &&
             (iVar5 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98)
                                   ,0), iVar5 == 0)) {
            uStack_334 = uStack_334 & 0xffffff9f | 0x80;
          }
          uStack_334 = uStack_334 | 4;
          sStack_1ba = sVar3;
          iVar5 = FUN_00a12210(sVar3);
          fStack_364 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                            *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                            *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
          fStack_360 = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                            *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                            *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
          fVar2 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                       *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                       *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
          fStack_368 = *(float *)(iVar5 + 0x28) / fVar2;
          fVar1 = *(float *)(iVar5 + 0x38);
          fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar2));
          fVar9 = (float10)fpatan((float10)fStack_368,(float10)(fVar1 / fVar2));
          fStack_354 = (float)fVar9;
          fStack_350 = (float)fVar8;
          fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)fStack_360,
                                  (float10)*(float *)(iVar5 + 0x10) / (float10)fStack_364);
          fStack_34c = (float)fVar8;
          uStack_344 = *(undefined4 *)(iVar5 + 0x40);
          uStack_340 = *(undefined4 *)(iVar5 + 0x44);
          uStack_33c = *(undefined4 *)(iVar5 + 0x48);
          uStack_338 = *(undefined4 *)(iVar5 + 0x4c);
          piVar7 = (int *)FUN_00c13920();
          (**(code **)(*piVar7 + 0x28))(0);
          iVar5 = FUN_00a7c8a0();
          fStack_360 = *(float *)(iVar5 + 0x40);
          uStack_35c = *(undefined4 *)(iVar5 + 0x44);
          uStack_358 = *(undefined4 *)(iVar5 + 0x48);
          fStack_354 = *(float *)(iVar5 + 0x4c);
          FUN_0043fe30(&uStack_340,&fStack_360,&fStack_350,0x3f4ccccd,0x43480000);
          fStack_350 = 3.0;
          fStack_34c = 0.0;
          uStack_348 = 0x3f800000;
          uStack_340 = 0xc0400000;
          uStack_33c = 0;
          uStack_338 = 0xbf800000;
          FUN_004db1a0(&uStack_340,&fStack_350);
          FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
          *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) ^ 1;
        }
        if (((DAT_01bea060 & 0x40000000) == 0) && (iVar5 = FUN_004ec720(), iVar5 == 0)) {
          sVar3 = (ushort)(*(int *)(param_1 + 0xeac) != 0) * 4 + 0xf;
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          local_21c = 0x24;
          local_32c = 0x30361;
          local_220 = 0x65;
          puVar6 = (undefined4 *)FUN_009f8b60();
          local_1c0 = *puVar6;
          local_30c = *(undefined4 *)(param_1 + 0x4f0);
          local_290 = local_290 | 0x400000;
          local_294 = local_294 | 0xc0;
          local_320 = 0x141;
          local_31c = 100;
          local_314 = 0x14;
          local_318 = 100;
          local_310 = 0x500;
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          piVar7 = (int *)FUN_00c13920();
          local_1c0 = (**(code **)(*piVar7 + 0x28))(0);
          uStack_1b4 = 0;
          uStack_334 = uStack_334 | 0x20;
          uStack_1b0 = 0x3dcccccd;
          uStack_1ac = 0;
          uStack_1bc = 0xffff;
          uStack_1a8 = uStack_348;
          iVar5 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
          if ((iVar5 != 0) &&
             (iVar5 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98)
                                   ,0), iVar5 == 0)) {
            uStack_334 = uStack_334 & 0xffffff9f | 0x80;
          }
          uStack_334 = uStack_334 | 4;
          sStack_1ba = sVar3;
          iVar5 = FUN_00a12210(sVar3);
          fStack_364 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                            *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                            *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
          fStack_360 = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                            *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                            *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
          fVar2 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                       *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                       *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
          fStack_368 = *(float *)(iVar5 + 0x28) / fVar2;
          fVar1 = *(float *)(iVar5 + 0x38);
          fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar2));
          fVar9 = (float10)fpatan((float10)fStack_368,(float10)(fVar1 / fVar2));
          fStack_354 = (float)fVar9;
          fStack_350 = (float)fVar8;
          fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)fStack_360,
                                  (float10)*(float *)(iVar5 + 0x10) / (float10)fStack_364);
          fStack_34c = (float)fVar8;
          fStack_364 = *(float *)(iVar5 + 0x40);
          fStack_360 = *(float *)(iVar5 + 0x44);
          uStack_35c = *(undefined4 *)(iVar5 + 0x48);
          uStack_358 = *(undefined4 *)(iVar5 + 0x4c);
          piVar7 = (int *)FUN_00c13920();
          (**(code **)(*piVar7 + 0x28))(0);
          iVar5 = FUN_00a7c8a0();
          uStack_348 = *(undefined4 *)(iVar5 + 0x40);
          uStack_344 = *(undefined4 *)(iVar5 + 0x44);
          uStack_340 = *(undefined4 *)(iVar5 + 0x48);
          uStack_33c = *(undefined4 *)(iVar5 + 0x4c);
          FUN_0043fe30(&fStack_368,&uStack_348,&uStack_358,0x3f4ccccd,0x43480000);
          uStack_358 = 0x40400000;
          fStack_354 = 0.0;
          fStack_350 = 1.0;
          uStack_348 = 0xc0400000;
          uStack_344 = 0;
          uStack_340 = 0xbf800000;
          FUN_004db1a0(&uStack_348,&uStack_358);
          FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),&uStack_338);
          *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) ^ 1;
        }
      }
      *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
      return;
    }
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0xf1c) - *(float *)(param_1 + 0x910) * 0.016666668;
    *(float *)(param_1 + 0xf1c) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0xf1c) = 0x3e99999a;
      if ((DAT_01bea060 & 0x40000000) == 0) {
        iVar5 = FUN_004ec720();
        if (iVar5 == 0) {
          sVar3 = (ushort)(*(int *)(param_1 + 0xeac) != 0) * 4 + 0xf;
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          local_21c = 0x24;
          local_32c = 0x30361;
          local_220 = 0x65;
          puVar6 = (undefined4 *)FUN_009f8b60();
          local_1c0 = *puVar6;
          local_30c = *(undefined4 *)(param_1 + 0x4f0);
          local_290 = local_290 | 0x400000;
          local_294 = local_294 | 0xc0;
          local_320 = 0x141;
          local_31c = 100;
          local_314 = 0x14;
          local_318 = 100;
          local_310 = 0x500;
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          piVar7 = (int *)FUN_00c13920();
          local_1c0 = (**(code **)(*piVar7 + 0x28))(0);
          uStack_1b4 = 0;
          uStack_334 = uStack_334 | 0x20;
          uStack_1b0 = 0x3dcccccd;
          uStack_1ac = 0;
          uStack_1bc = 0xffff;
          uStack_1a8 = uStack_348;
          iVar5 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
          if ((iVar5 != 0) &&
             (iVar5 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98)
                                   ,0), iVar5 == 0)) {
            uStack_334 = uStack_334 & 0xffffff9f | 0x80;
          }
          uStack_334 = uStack_334 | 4;
          sStack_1ba = sVar3;
          iVar5 = FUN_00a12210(sVar3);
          fStack_364 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                            *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                            *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
          fStack_360 = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                            *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                            *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
          fVar2 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                       *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                       *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
          fStack_368 = *(float *)(iVar5 + 0x28) / fVar2;
          fVar1 = *(float *)(iVar5 + 0x38);
          fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar2));
          fVar9 = (float10)fpatan((float10)fStack_368,(float10)(fVar1 / fVar2));
          fStack_354 = (float)fVar9;
          fStack_350 = (float)fVar8;
          fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)fStack_360,
                                  (float10)*(float *)(iVar5 + 0x10) / (float10)fStack_364);
          fStack_34c = (float)fVar8;
          fStack_364 = *(float *)(iVar5 + 0x40);
          fStack_360 = *(float *)(iVar5 + 0x44);
          uStack_35c = *(undefined4 *)(iVar5 + 0x48);
          uStack_358 = *(undefined4 *)(iVar5 + 0x4c);
          piVar7 = (int *)FUN_00c13920();
          (**(code **)(*piVar7 + 0x28))(0);
          iVar5 = FUN_00a7c8a0();
          uStack_340 = *(undefined4 *)(iVar5 + 0x40);
          uStack_33c = *(undefined4 *)(iVar5 + 0x44);
          uStack_338 = *(undefined4 *)(iVar5 + 0x48);
          uStack_334 = *(uint *)(iVar5 + 0x4c);
          FUN_0043fe30(&fStack_360,&uStack_340,&fStack_350,0x3f4ccccd,0x43480000);
          fStack_350 = 3.0;
          fStack_34c = 0.0;
          uStack_348 = 0x3f800000;
          uStack_340 = 0xc0400000;
          uStack_33c = 0;
          uStack_338 = 0xbf800000;
          FUN_004db1a0(&uStack_340,&fStack_350);
          FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
          *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) ^ 1;
        }
        if (((DAT_01bea060 & 0x40000000) == 0) && (iVar5 = FUN_004ec720(), iVar5 == 0)) {
          sVar3 = (ushort)(*(int *)(param_1 + 0xeac) != 0) * 4 + 0xf;
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          local_21c = 0x24;
          local_32c = 0x30361;
          local_220 = 0x65;
          puVar6 = (undefined4 *)FUN_009f8b60();
          local_1c0 = *puVar6;
          local_30c = *(undefined4 *)(param_1 + 0x4f0);
          local_290 = local_290 | 0x400000;
          local_294 = local_294 | 0xc0;
          local_320 = 0x141;
          local_31c = 100;
          local_314 = 0x14;
          local_318 = 100;
          local_310 = 0x500;
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          piVar7 = (int *)FUN_00c13920();
          local_1c0 = (**(code **)(*piVar7 + 0x28))(0);
          uStack_1b4 = 0;
          uStack_334 = uStack_334 | 0x20;
          uStack_1b0 = 0x3dcccccd;
          uStack_1ac = 0;
          uStack_1bc = 0xffff;
          uStack_1a8 = uStack_348;
          iVar5 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
          if ((iVar5 != 0) &&
             (iVar5 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98)
                                   ,0), iVar5 == 0)) {
            uStack_334 = uStack_334 & 0xffffff9f | 0x80;
          }
          uStack_334 = uStack_334 | 4;
          sStack_1ba = sVar3;
          iVar5 = FUN_00a12210(sVar3);
          fStack_364 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                            *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                            *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
          fStack_360 = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                            *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                            *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
          fVar2 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                       *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                       *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
          fStack_368 = *(float *)(iVar5 + 0x28) / fVar2;
          fVar1 = *(float *)(iVar5 + 0x38);
          fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar2));
          fVar9 = (float10)fpatan((float10)fStack_368,(float10)(fVar1 / fVar2));
          fStack_354 = (float)fVar9;
          fStack_350 = (float)fVar8;
          fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)fStack_360,
                                  (float10)*(float *)(iVar5 + 0x10) / (float10)fStack_364);
          fStack_34c = (float)fVar8;
          fStack_364 = *(float *)(iVar5 + 0x40);
          fStack_360 = *(float *)(iVar5 + 0x44);
          uStack_35c = *(undefined4 *)(iVar5 + 0x48);
          uStack_358 = *(undefined4 *)(iVar5 + 0x4c);
          piVar7 = (int *)FUN_00c13920();
          (**(code **)(*piVar7 + 0x28))(0);
          iVar5 = FUN_00a7c8a0();
          uStack_340 = *(undefined4 *)(iVar5 + 0x40);
          uStack_33c = *(undefined4 *)(iVar5 + 0x44);
          uStack_338 = *(undefined4 *)(iVar5 + 0x48);
          uStack_334 = *(uint *)(iVar5 + 0x4c);
          FUN_0043fe30(&fStack_360,&uStack_340,&fStack_350,0x3f4ccccd,0x43480000);
          fStack_350 = 3.0;
          fStack_34c = 0.0;
          uStack_348 = 0x3f800000;
          uStack_340 = 0xc0400000;
          uStack_33c = 0;
          uStack_338 = 0xbf800000;
          FUN_004db1a0(&uStack_340,&fStack_350);
          FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
          *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) ^ 1;
        }
      }
      *(undefined4 *)(param_1 + 0xf1c) = 0x3f800000;
      FUN_00a8cb70(1);
      return;
    }
    break;
  case 3:
    fVar1 = *(float *)(param_1 + 0xf1c) - *(float *)(param_1 + 0x910) * 0.016666668;
    *(float *)(param_1 + 0xf1c) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0xf1c) = 0x3f800000;
      if ((DAT_01bea060 & 0x40000000) == 0) {
        iVar5 = FUN_004ec720();
        if (iVar5 == 0) {
          sVar3 = (ushort)(*(int *)(param_1 + 0xeac) != 0) * 4 + 0xf;
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          local_21c = 0x24;
          local_32c = 0x30361;
          local_220 = 0x65;
          puVar6 = (undefined4 *)FUN_009f8b60();
          local_1c0 = *puVar6;
          local_30c = *(undefined4 *)(param_1 + 0x4f0);
          local_290 = local_290 | 0x400000;
          local_294 = local_294 | 0xc0;
          local_320 = 0x141;
          local_31c = 100;
          local_314 = 0x14;
          local_318 = 100;
          local_310 = 0x500;
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          piVar7 = (int *)FUN_00c13920();
          local_1c0 = (**(code **)(*piVar7 + 0x28))(0);
          uStack_1b4 = 0;
          uStack_334 = uStack_334 | 0x20;
          uStack_1b0 = 0x3dcccccd;
          uStack_1ac = 0;
          uStack_1bc = 0xffff;
          uStack_1a8 = uStack_348;
          iVar5 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
          if ((iVar5 != 0) &&
             (iVar5 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98)
                                   ,0), iVar5 == 0)) {
            uStack_334 = uStack_334 & 0xffffff9f | 0x80;
          }
          uStack_334 = uStack_334 | 4;
          sStack_1ba = sVar3;
          iVar5 = FUN_00a12210(sVar3);
          fStack_364 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                            *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                            *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
          fStack_360 = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                            *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                            *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
          fVar2 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                       *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                       *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
          fStack_368 = *(float *)(iVar5 + 0x28) / fVar2;
          fVar1 = *(float *)(iVar5 + 0x38);
          fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar2));
          fVar9 = (float10)fpatan((float10)fStack_368,(float10)(fVar1 / fVar2));
          fStack_354 = (float)fVar9;
          fStack_350 = (float)fVar8;
          fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)fStack_360,
                                  (float10)*(float *)(iVar5 + 0x10) / (float10)fStack_364);
          fStack_34c = (float)fVar8;
          fStack_364 = *(float *)(iVar5 + 0x40);
          fStack_360 = *(float *)(iVar5 + 0x44);
          uStack_35c = *(undefined4 *)(iVar5 + 0x48);
          uStack_358 = *(undefined4 *)(iVar5 + 0x4c);
          piVar7 = (int *)FUN_00c13920();
          (**(code **)(*piVar7 + 0x28))(0);
          iVar5 = FUN_00a7c8a0();
          uStack_340 = *(undefined4 *)(iVar5 + 0x40);
          uStack_33c = *(undefined4 *)(iVar5 + 0x44);
          uStack_338 = *(undefined4 *)(iVar5 + 0x48);
          uStack_334 = *(uint *)(iVar5 + 0x4c);
          FUN_0043fe30(&fStack_360,&uStack_340,&fStack_350,0x3f4ccccd,0x43480000);
          fStack_350 = 3.0;
          fStack_34c = 0.0;
          uStack_348 = 0x3f800000;
          uStack_340 = 0xc0400000;
          uStack_33c = 0;
          uStack_338 = 0xbf800000;
          FUN_004db1a0(&uStack_340,&fStack_350);
          FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
          *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) ^ 1;
        }
        if (((DAT_01bea060 & 0x40000000) == 0) && (iVar5 = FUN_004ec720(), iVar5 == 0)) {
          sVar3 = (ushort)(*(int *)(param_1 + 0xeac) != 0) * 4 + 0xf;
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          local_21c = 0x24;
          local_32c = 0x30361;
          local_220 = 0x65;
          puVar6 = (undefined4 *)FUN_009f8b60();
          local_1c0 = *puVar6;
          local_30c = *(undefined4 *)(param_1 + 0x4f0);
          local_290 = local_290 | 0x400000;
          local_294 = local_294 | 0xc0;
          local_320 = 0x141;
          local_31c = 100;
          local_314 = 0x14;
          local_318 = 100;
          local_310 = 0x500;
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          piVar7 = (int *)FUN_00c13920();
          local_1c0 = (**(code **)(*piVar7 + 0x28))(0);
          uStack_1b4 = 0;
          uStack_334 = uStack_334 | 0x20;
          uStack_1b0 = 0x3dcccccd;
          uStack_1ac = 0;
          uStack_1bc = 0xffff;
          uStack_1a8 = uStack_348;
          iVar5 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
          if ((iVar5 != 0) &&
             (iVar5 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98)
                                   ,0), iVar5 == 0)) {
            uStack_334 = uStack_334 & 0xffffff9f | 0x80;
          }
          uStack_334 = uStack_334 | 4;
          sStack_1ba = sVar3;
          iVar5 = FUN_00a12210(sVar3);
          fStack_364 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                            *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                            *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
          fStack_360 = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                            *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                            *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
          fVar2 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                       *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                       *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
          fStack_368 = *(float *)(iVar5 + 0x28) / fVar2;
          fVar1 = *(float *)(iVar5 + 0x38);
          fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar2));
          fVar9 = (float10)fpatan((float10)fStack_368,(float10)(fVar1 / fVar2));
          fStack_354 = (float)fVar9;
          fStack_350 = (float)fVar8;
          fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)fStack_360,
                                  (float10)*(float *)(iVar5 + 0x10) / (float10)fStack_364);
          fStack_34c = (float)fVar8;
          fStack_364 = *(float *)(iVar5 + 0x40);
          fStack_360 = *(float *)(iVar5 + 0x44);
          uStack_35c = *(undefined4 *)(iVar5 + 0x48);
          uStack_358 = *(undefined4 *)(iVar5 + 0x4c);
          piVar7 = (int *)FUN_00c13920();
          (**(code **)(*piVar7 + 0x28))(0);
          iVar5 = FUN_00a7c8a0();
          uStack_340 = *(undefined4 *)(iVar5 + 0x40);
          uStack_33c = *(undefined4 *)(iVar5 + 0x44);
          uStack_338 = *(undefined4 *)(iVar5 + 0x48);
          uStack_334 = *(uint *)(iVar5 + 0x4c);
          FUN_0043fe30(&fStack_360,&uStack_340,&fStack_350,0x3f4ccccd,0x43480000);
          fStack_350 = 3.0;
          fStack_34c = 0.0;
          uStack_348 = 0x3f800000;
          uStack_340 = 0xc0400000;
          uStack_33c = 0;
          uStack_338 = 0xbf800000;
          FUN_004db1a0(&uStack_340,&fStack_350);
          FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
          *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) ^ 1;
        }
      }
      FUN_00a8cb70(1);
      return;
    }
  }
  return;
}

// 004EF030  Em0121::vf04  size=6  [class]
undefined * Em0121::vf04(void)

{
  return &DAT_01b34ed0;
}

// 004EF040  FUN_004ef040  size=22  [between]
void FUN_004ef040(void)

{
  FUN_00905ce0();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 004EF060  Em0121::vf00  size=43  [class]
undefined4 __thiscall Em0121::vf00(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004EF090  FUN_004ef090  size=977  [callgraph]
void __fastcall FUN_004ef090(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  float *pfVar19;
  int iVar20;
  float10 fVar21;
  int local_74;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  iVar16 = FUN_00a8cac0();
  iVar20 = 0;
  if (iVar16 == 0) {
    local_74 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar16 = *(int *)(param_1 + 800);
        iVar17 = *(int *)(*(int *)(iVar16 + 0x60 + iVar20) + 0x40);
        if ((iVar17 != 0) && (iVar17 = FUN_00fdbbd0(iVar17,&DAT_0163f64c), iVar17 != 0)) {
          puVar1 = (uint *)(iVar16 + 0x38 + iVar20);
          *puVar1 = *puVar1 | 1;
        }
        local_74 = local_74 + 1;
        iVar20 = iVar20 + 0x70;
      } while (local_74 < *(short *)(param_1 + 0x324));
    }
    FUN_00aa4120(0x7d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    sVar15 = FUN_00dde2d0(0,2);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xea8) = 0;
    *(float *)(param_1 + 0xea4) = (float)(int)sVar15 + 1.0;
  }
  else if (iVar16 != 1) {
    if ((iVar16 == 2) &&
       (fVar2 = *(float *)(param_1 + 0xea0) - *(float *)(param_1 + 0x910) * 0.016666668,
       *(float *)(param_1 + 0xea0) = fVar2, fVar2 <= 0.0)) {
      *(int *)(param_1 + 0xea8) = *(int *)(param_1 + 0xea8) + -1;
      if (*(int *)(param_1 + 0xea8) < 1) {
        FUN_00a8cb60(1);
      }
      fVar21 = (float10)FUN_00dde300(0,0x3d4ccccd);
      *(float *)(param_1 + 0xea0) = (float)(fVar21 + (float10)0.1);
      iVar16 = FUN_004ecf30();
      if (iVar16 != 0) {
        FUN_004ed190();
      }
    }
    goto LAB_004ef404;
  }
  if ((((DAT_01bea060 & 0x20000) != 0) || (*(int *)(param_1 + 0xdc4) != 0)) &&
     (fVar2 = *(float *)(param_1 + 0xea4) - *(float *)(param_1 + 0x910) * 0.016666668,
     *(float *)(param_1 + 0xea4) = fVar2, fVar2 <= 0.0)) {
    piVar18 = (int *)FUN_00c13920();
    iVar16 = (**(code **)(*piVar18 + 0x28))(0);
    if (iVar16 != 0) {
      *(undefined4 *)(param_1 + 0xea0) = 0;
      if (*(int *)(param_1 + 0xf14) == 0) {
        fVar21 = (float10)FUN_00dde300(0,0x3f800000);
        *(float *)(param_1 + 0xea4) = (float)fVar21;
        sVar15 = FUN_00dde2d0(8,0xf);
        *(int *)(param_1 + 0xea8) = sVar15 * 2;
      }
      else {
        sVar15 = FUN_00dde2d0(0,2);
        *(undefined4 *)(param_1 + 0xea8) = 10;
        *(float *)(param_1 + 0xea4) = (float)(int)sVar15 + 1.0;
      }
      iVar16 = FUN_004ec720();
      if (iVar16 == 0) {
        *(undefined4 *)(param_1 + 0xf00) = 0;
        *(undefined4 *)(param_1 + 0xf04) = 0;
        *(undefined4 *)(param_1 + 0xf08) = 0;
        *(undefined4 *)(param_1 + 0xf0c) = 0;
      }
      else {
        iVar16 = FUN_00a7c8a0();
        pfVar19 = (float *)FUN_00a92640(auStack_50);
        fVar2 = *pfVar19;
        fVar3 = pfVar19[1];
        fVar4 = pfVar19[2];
        fVar5 = *(float *)(iVar16 + 0x40);
        fVar6 = *(float *)(iVar16 + 0x44);
        fVar7 = *(float *)(iVar16 + 0x48);
        pfVar19 = (float *)FUN_00a92640(auStack_40);
        fVar8 = *pfVar19;
        fVar9 = *(float *)(iVar16 + 0x40);
        fVar10 = pfVar19[1];
        fVar11 = *(float *)(iVar16 + 0x44);
        fVar12 = pfVar19[2];
        fVar13 = *(float *)(iVar16 + 0x48);
        pfVar19 = (float *)FUN_00a92640(auStack_30);
        *(float *)(param_1 + 0xf00) = *pfVar19 * 3.0;
        iVar16 = FUN_00a92640(auStack_20);
        *(float *)(param_1 + 0xf08) = *(float *)(iVar16 + 8) * 3.0;
        fVar2 = (fVar2 * -1.0 + fVar5) - *(float *)(param_1 + 0x40);
        fVar14 = (fVar3 * -1.0 + fVar6) - *(float *)(param_1 + 0x44);
        fVar6 = (fVar4 * -1.0 + fVar7) - *(float *)(param_1 + 0x48);
        fVar4 = (fVar8 + fVar9) - *(float *)(param_1 + 0x40);
        fVar5 = (fVar10 + fVar11) - *(float *)(param_1 + 0x44);
        fVar3 = (fVar12 + fVar13) - *(float *)(param_1 + 0x48);
        if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) <
            SQRT(fVar14 * fVar14 + fVar2 * fVar2 + fVar6 * fVar6)) {
          *(float *)(param_1 + 0xf00) = *(float *)(param_1 + 0xf00) * -1.0;
          *(float *)(param_1 + 0xf08) = *(float *)(param_1 + 0xf08) * -1.0;
        }
      }
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
LAB_004ef404:
  if (*(int *)(param_1 + 0x4a0) != 0) {
    FUN_004ed940();
  }
  iVar16 = FUN_00a94d60(&DAT_0164019c);
  if (((iVar16 != 0) || (iVar16 = FUN_00a94d60(&DAT_01640194), iVar16 != 0)) ||
     ((iVar16 = FUN_00a94d60(&DAT_0164018c), iVar16 != 0 ||
      (iVar16 = FUN_00a94d60(&DAT_01640184), iVar16 != 0)))) {
    FUN_00a8cb60(0);
  }
  return;
}

// 004EF470  FUN_004ef470  size=2146  [callgraph]
void __fastcall FUN_004ef470(int *param_1)

{
  bool bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 uVar7;
  float unaff_EBX;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  float *pfVar16;
  char *pcStack_148;
  float fStack_144;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int aiStack_114 [3];
  float fStack_108;
  int iStack_104;
  float fStack_100;
  int iStack_fc;
  int iStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 auStack_ac [2];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_94;
  float fStack_90;
  float afStack_8c [2];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [8];
  char acStack_64 [12];
  undefined1 auStack_58 [84];
  
  bVar1 = false;
  fStack_144 = 7.25089e-39;
  piVar3 = (int *)FUN_00c13920();
  fStack_144 = 0.0;
  pcStack_148 = (char *)0x4ef492;
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  if (iVar4 != 0) {
    pcStack_148 = (char *)0x4ef49d;
    iVar4 = FUN_00a7c8a0();
    if ((float)param_1[0x11] - 5.0 <= *(float *)(iVar4 + 0x44)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  pcStack_148 = (char *)0x4ef4c0;
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    piVar3 = param_1 + 0x2c;
    fStack_124 = 1.0;
    pfVar16 = &fStack_a4;
    fStack_120 = 0.0;
    fStack_11c = 0.0;
    iStack_104 = param_1[0x14];
    fStack_100 = (float)param_1[0x15];
    iStack_fc = param_1[0x16];
    iStack_f8 = param_1[0x17];
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x3b] = 0x3f800000;
    param_1[0x36] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    *piVar3 = 0x3f800000;
    pcStack_148 = (char *)0x3fc90fdb;
    D3DXMatrixRotationY(pfVar16);
    puVar14 = auStack_ac;
    piVar13 = piVar3;
    piVar15 = piVar3;
    D3DXMatrixMultiply(piVar3,puVar14,piVar3);
    D3DXMatrixRotationX(auStack_b8,0x40060a92);
    D3DXMatrixMultiply(piVar3,&uStack_c0,piVar3);
    D3DXMatrixInverse(param_1 + 0x3c,0,piVar3);
    piVar3 = (int *)FUN_009f8b60();
    iVar4 = *piVar3;
    pfVar6 = (float *)FUN_00a925a0(auStack_58);
    fVar9 = *pfVar6 * 100.0;
    fVar10 = pfVar6[1] * 100.0;
    fVar11 = pfVar6[2] * 100.0;
    fVar12 = pfVar6[3] * 100.0;
    pfVar6 = (float *)(**(code **)(*param_1 + 0x68))();
    pcStack_148 = (char *)(*pfVar6 + fVar9);
    fStack_144 = pfVar6[1] + fVar10;
    uVar5 = (**(code **)(*param_1 + 0x68))(&pcStack_148,iVar4 << 0x10 | 0x1e,0,0,0,"Stage4_3",0);
    FUN_00445d40(uVar5,fVar11,fVar12,piVar13,puVar14,piVar15,pfVar16);
    pcStack_148 = acStack_64;
    RayCastSingleHitWork::RayCastSingleHitWork_2(&iStack_104,&fStack_124,0,0);
    pcStack_148 = "em0120_d011.mot";
    uVar5 = FUN_00de4500();
    pcStack_148 = "em0120_d011_0_seq.bxm";
    uVar7 = FUN_00de4500();
    pcStack_148 = (char *)0x3f800000;
    FUN_00a9f180(uVar5,uVar7,&DAT_016401a8,0,0,0x3f800000,0,0xbf800000);
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[600] = iStack_104;
    param_1[0x259] = (int)fStack_100;
    param_1[0x25a] = iStack_fc;
    param_1[0x25b] = iStack_f8;
    param_1[0x24a] = (int)(fStack_100 - 8.0);
    fStack_f4 = fStack_11c - fStack_120 * 0.0;
    fStack_f0 = fStack_124 * 0.0 - fStack_11c * 0.0;
    fStack_ec = fStack_120 * 0.0 - fStack_124;
    if (0.001 < fStack_f0 * fStack_f0 + fStack_f4 * fStack_f4 + fStack_ec * fStack_ec) {
      uStack_b4 = 0;
      uStack_b0 = 0x3f800000;
      auStack_ac[0] = 0;
      pcStack_148 = (char *)0x40490fdb;
      FUN_00de2bc0(&fStack_a4,&uStack_b4,&fStack_124,&fStack_f4,0x3f800000);
      fVar9 = fStack_a0 * fStack_a0;
      fVar10 = fStack_a4 * fStack_a4;
      pcStack_148 = (char *)-(fStack_9c /
                             SQRT(fStack_7c * fStack_7c +
                                  fStack_84 * fStack_84 + fStack_80 * fStack_80));
      FUN_00ddbaa0();
      fVar8 = (float10)fpatan((float10)fStack_a0 /
                              (float10)SQRT(afStack_8c[0] * afStack_8c[0] +
                                            fStack_94 * fStack_94 + fStack_90 * fStack_90),
                              (float10)fStack_a4 /
                              (float10)SQRT(fStack_9c * fStack_9c + fVar10 + fVar9));
      param_1[0x248] = (int)(float)-fVar8;
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    pcStack_148 = (char *)((float)param_1[0x244] * 0.15);
    FUN_00a8dd20();
    if (SQRT(((float)param_1[0x14] - (float)param_1[600]) *
             ((float)param_1[0x14] - (float)param_1[600]) +
             ((float)param_1[0x15] - (float)param_1[0x259]) *
             ((float)param_1[0x15] - (float)param_1[0x259]) +
             ((float)param_1[0x16] - (float)param_1[0x25a]) *
             ((float)param_1[0x16] - (float)param_1[0x25a])) < 3.0) {
      fVar9 = SQRT((float)param_1[0x36] * (float)param_1[0x36] +
                   (float)param_1[0x35] * (float)param_1[0x35] +
                   (float)param_1[0x34] * (float)param_1[0x34]);
      fStack_d8 = (float)param_1[0x32] / fVar9;
      fStack_dc = (float)param_1[0x36] / fVar9;
      pcStack_148 = (char *)-((float)param_1[0x2e] / fVar9);
      FUN_00ddbaa0();
      param_1[0x187] = param_1[0x187] + 1;
      fVar8 = (float10)fpatan((float10)fStack_d8,(float10)fStack_dc);
      param_1[0x249] = (int)(float)fVar8;
    }
    break;
  case 2:
    pcStack_148 = (char *)((float)param_1[0x244] * 0.1);
    FUN_00a8dd20();
    fStack_124 = (float)param_1[0x249];
    pcStack_148 = (char *)0x5;
    fStack_120 = 0.0;
    fStack_11c = 0.0;
    aiStack_114[0] = param_1[0x248];
    aiStack_114[1] = 0;
    aiStack_114[2] = 0;
    FUN_00ddefe0(&fStack_124,aiStack_114,&fStack_124,0x3dcccccd);
    piVar3 = param_1 + 0x2c;
    fStack_f4 = fStack_124;
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x3b] = 0x3f800000;
    param_1[0x36] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    *piVar3 = 0x3f800000;
    pcStack_148 = (char *)0x3fc90fdb;
    D3DXMatrixRotationY(acStack_64);
    D3DXMatrixMultiply(piVar3,auStack_6c,piVar3);
    if (fStack_108 != 0.0) {
      D3DXMatrixRotationX(auStack_78,fStack_108);
      D3DXMatrixMultiply(piVar3,&fStack_80,piVar3);
    }
    fVar8 = (float10)FUN_00ddba30(fStack_128 - unaff_EBX);
    param_1[0x249] = (int)unaff_EBX;
    if (((float10)0.08726646 < fVar8) || (fVar8 < (float10)-0.08726646)) {
      D3DXMatrixInverse(param_1 + 0x3c,0,piVar3);
    }
    else {
      param_1[0x24b] = 0x3f800000;
      param_1[0x249] = param_1[0x248];
      param_1[0x24a] = 0x3fc90fdb;
      param_1[0x24c] = 0;
      fStack_108 = (float)param_1[0x248];
      param_1[0x3a] = 0;
      param_1[0x39] = 0;
      param_1[0x38] = 0;
      param_1[0x37] = 0;
      param_1[0x35] = 0;
      param_1[0x34] = 0;
      param_1[0x33] = 0;
      param_1[0x32] = 0;
      param_1[0x30] = 0;
      param_1[0x2f] = 0;
      param_1[0x2e] = 0;
      param_1[0x2d] = 0;
      param_1[0x3b] = 0x3f800000;
      param_1[0x36] = 0x3f800000;
      param_1[0x31] = 0x3f800000;
      *piVar3 = 0x3f800000;
      D3DXMatrixRotationY(auStack_78,0x3fc90fdb);
      D3DXMatrixMultiply(piVar3,&fStack_80,piVar3);
      if (fStack_11c == 0.0) {
        param_1[0x187] = param_1[0x187] + 1;
        D3DXMatrixInverse(param_1 + 0x3c,0,piVar3);
      }
      else {
        D3DXMatrixRotationX(afStack_8c,fStack_11c);
        D3DXMatrixMultiply(piVar3,&fStack_94,piVar3);
        param_1[0x187] = param_1[0x187] + 1;
        D3DXMatrixInverse(param_1 + 0x3c,0,piVar3);
      }
    }
    break;
  case 3:
    pcStack_148 = (char *)((float)param_1[0x244] * 0.1 * (float)param_1[0x24b]);
    FUN_00a8dd20();
    fVar9 = (float)param_1[0x24b];
    param_1[0x24b] = (int)(fVar9 * 1.1);
    if (3.0 < fVar9 * 1.1) {
      param_1[0x24b] = 0x40400000;
    }
    fVar9 = (float)param_1[0x24c];
    param_1[0x24c] = (int)((float)param_1[0x244] + fVar9);
    if (65.0 < (float)param_1[0x244] + fVar9) {
      pcStack_148 = (char *)0x1;
      sVar2 = FUN_00dde2d0(0);
      if (sVar2 == 0) {
        pcStack_148 = (char *)0x5;
        FUN_00a8cb60();
      }
      else {
        pcStack_148 = (char *)0x4;
        FUN_00a8cb60();
      }
    }
    break;
  case 4:
    pcStack_148 = (char *)((float)param_1[0x244] * 0.15 * (float)param_1[0x24b]);
    FUN_00a8dd20();
    uStack_d4 = 0xbf490fdb;
    puVar14 = &uStack_d4;
    uStack_d0 = 0;
    uStack_cc = 0x3f490fdb;
    goto LAB_004efc76;
  case 5:
    pcStack_148 = (char *)((float)param_1[0x244] * 0.15 * (float)param_1[0x24b]);
    FUN_00a8dd20();
    uStack_c4 = 0xbf490fdb;
    puVar14 = &uStack_c4;
    uStack_c0 = 0;
    uStack_bc = 0xbf490fdb;
LAB_004efc76:
    pcStack_148 = (char *)0x5;
    FUN_00ddefe0(param_1 + 0x24,param_1 + 0x24,puVar14,0x3d4ccccd);
  }
  if (bVar1) {
    pcStack_148 = (char *)0x4efc91;
    FUN_004edc10();
  }
  pcStack_148 = (char *)0x4efc96;
  piVar3 = (int *)FUN_00c13920();
  pcStack_148 = (char *)0x0;
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  if (((iVar4 != 0) && (iVar4 = FUN_00a8cac0(), 3 < iVar4)) &&
     (iVar4 = FUN_00a84000(param_1,0xffffffff), iVar4 == 0)) {
    FUN_00a805f0();
  }
  return;
}

// 004EFE70  FUN_004efe70  size=275  [callgraph]
void __fastcall FUN_004efe70(int param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  int local_164;
  
  if ((*(int *)(param_1 + 0x4a0) != 1) && ((*(byte *)(param_1 + 0x4a8) & 2) != 0)) {
    uVar3 = FUN_004039a0(5,param_1,0);
    FUN_00a963e0(uVar3);
  }
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 0:
    FUN_00a8caf0(0,0,0,0);
    return;
  case 1:
    FUN_00a8caf0(1,0,0,0);
    return;
  case 2:
    FUN_00a8caf0(2,0,0,0);
    return;
  case 3:
    iVar7 = 0;
    local_164 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        pbVar4 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar7) + 0x40);
        if (pbVar4 != (byte *)0x0) {
          pbVar6 = &DAT_0163f64c;
          do {
            bVar2 = *pbVar4;
            bVar8 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_004eff48:
              iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_004eff4d;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar8 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_004eff48;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_004eff4d:
          if (iVar5 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        local_164 = local_164 + 1;
        iVar7 = iVar7 + 0x70;
      } while (local_164 < *(short *)(param_1 + 0x324));
    }
    FUN_00a8caf0(5,0,0,0);
  }
  return;
}

// 004EFFA0  Em0121::vf40  size=851  [class]
undefined4 __fastcall Em0121::vf40(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  
  iVar2 = BehaviorEmBase::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
  }
  local_16c = 0x3f666666;
  local_168 = 0x3f99999a;
  local_164 = 0x3f8ccccd;
  local_180 = 0x3e4ccccd;
  local_17c = 0x40400000;
  local_178 = 0x40000000;
  FUN_00a8e4d0(&local_180,&local_16c);
  uVar4 = *(undefined4 *)(param_1 + 0x4b4);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(uVar4,0x20120);
  iVar2 = FUN_00a92f90();
  *(uint *)(iVar2 + 0x90) = *(uint *)(iVar2 + 0x90) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0xeac) = 0;
  *(undefined4 *)(param_1 + 0xf24) = 0;
  *(undefined4 *)(param_1 + 0xf28) = 0;
  *(undefined4 *)(param_1 + 0xf50) = 0;
  *(undefined4 *)(param_1 + 0xf54) = 0;
  *(undefined4 *)(param_1 + 0xf58) = 0;
  *(undefined4 *)(param_1 + 0xf5c) = local_174;
  *(undefined4 *)(param_1 + 0xf80) = 2;
  *(undefined4 *)(param_1 + 0xf40) = 0;
  *(undefined4 *)(param_1 + 0xf44) = 0;
  *(undefined4 *)(param_1 + 0xf48) = 0;
  *(undefined4 *)(param_1 + 0xf4c) = local_174;
  *(undefined4 *)(param_1 + 0xf2c) = 0;
  *(undefined4 *)(param_1 + 0xdc4) = 0;
  *(undefined4 *)(param_1 + 0xf10) = 0;
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0x503,0xffffffff);
  *(uint *)(param_1 + 0xdd0) = *(uint *)(param_1 + 0xdd0) | 2;
  FUN_00a82870(0x3fb2b8c2,0xbfb2b8c2,0x3f000000,0x3ae4c388,0x3e0efa35);
  FUN_00a82840(0x3f860a92,0xbeb2b8c2,0x3f000000,0x3ae4c388,0x3e0efa35);
  *(undefined4 *)(param_1 + 0xee0) = 0;
  *(undefined4 *)(param_1 + 0xed0) = 0;
  *(undefined4 *)(param_1 + 0xed4) = 0;
  *(undefined4 *)(param_1 + 0xed8) = 0;
  *(undefined4 *)(param_1 + 0xedc) = 0;
  sVar1 = FUN_00dde2d0(0,10);
  *(float *)(param_1 + 0xeb0) = (float)(sVar1 + -5) * 0.05;
  sVar1 = FUN_00dde2d0(0,10);
  *(float *)(param_1 + 0xeb4) = (float)(sVar1 + -5) * 0.05;
  sVar1 = FUN_00dde2d0(0,10);
  *(float *)(param_1 + 0xeb8) = (float)(sVar1 + -5) * 0.05;
  piVar3 = (int *)FUN_00c13920();
  (**(code **)(*piVar3 + 0x28))(0);
  iVar2 = FUN_00a7c8a0();
  *(undefined4 *)(param_1 + 0xef0) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0xef4) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(param_1 + 0xef8) = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(param_1 + 0xefc) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0xf00) = 0;
  *(undefined4 *)(param_1 + 0xf04) = 0;
  *(undefined4 *)(param_1 + 0xf08) = 0;
  *(undefined4 *)(param_1 + 0xf0c) = 0;
  uVar4 = FUN_008ec660(param_1,0x3f000000,0x3e4ccccd,0x41a00000,0x41a00000,0x78,7,0);
  *(undefined4 *)(param_1 + 0x764) = uVar4;
  FUN_008e6d00();
  iVar2 = *(int *)(param_1 + 0x764);
  if (*(int *)(iVar2 + 0x104) != 1) {
    *(undefined4 *)(iVar2 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
  }
  uVar4 = FUN_004039a0(0,param_1,0);
  FUN_00a963e0(uVar4);
  FUN_004efe70();
  return 1;
}

// 004F0300  FUN_004f0300  size=1595  [between]
void __fastcall FUN_004f0300(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float local_68;
  float local_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_20 [28];
  
  uVar10 = FUN_00a8cac0();
  switch(uVar10) {
  case 0:
    param_1[0x3d8] = param_1[0x25];
    param_1[0x3cb] = (int)-(float)param_1[0x3e3];
    if (param_1[0x3e0] == 0) {
      param_1[0x3cb] = param_1[0x3e3];
    }
    fVar1 = (float)param_1[0x2c];
    fVar2 = (float)param_1[0x2d];
    fVar3 = (float)param_1[0x2e];
    fVar4 = (float)param_1[0x30];
    fVar5 = (float)param_1[0x31];
    fVar6 = (float)param_1[0x32];
    fVar9 = SQRT((float)param_1[0x36] * (float)param_1[0x36] +
                 (float)param_1[0x35] * (float)param_1[0x35] +
                 (float)param_1[0x34] * (float)param_1[0x34]);
    fVar7 = (float)param_1[0x32];
    fVar8 = (float)param_1[0x36];
    fVar17 = (float10)FUN_00ddbaa0(-((float)param_1[0x2e] / fVar9));
    fVar18 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
    param_1[0x3d0] = (int)(float)fVar18;
    param_1[0x3d1] = (int)(float)fVar17;
    fVar17 = (float10)fpatan((float10)(float)param_1[0x2d] /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)(float)param_1[0x2c] /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    param_1[0x3d2] = (int)(float)fVar17;
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_004f044d;
  case 1:
LAB_004f044d:
    local_40 = 0;
    local_3c = 0;
    local_38 = param_1[0x3cb];
    fVar17 = (float10)(**(code **)(*param_1 + 0x24))(5);
    FUN_00ddefe0(param_1 + 0x3d0,&local_40,param_1 + 0x3d0,(float)(fVar17 * (float10)0.2));
    fVar17 = (float10)FUN_00ddba30((float)param_1[0x3d2] - (float)param_1[0x3cb]);
    if (ABS(fVar17) < (float10)0.17453292 != (ABS(fVar17) == (float10)0.17453292)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x3d2] = param_1[0x3cb];
      param_1[0x3ca] = 0;
    }
    D3DXMatrixRotationZ(param_1 + 0x2c,param_1[0x3d2]);
    D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
    break;
  case 2:
    FUN_00a926c0(&local_50);
    if (param_1[0x3e0] == 1) {
      pfVar11 = (float *)FUN_00a926c0(local_20);
      local_50 = *pfVar11 * -1.0;
      local_4c = pfVar11[1] * -1.0;
      local_48 = pfVar11[2] * -1.0;
      local_44 = pfVar11[3] * -1.0;
    }
    piVar12 = (int *)FUN_00c13920();
    (**(code **)(*piVar12 + 0x28))(0);
    iVar13 = FUN_00a7c8a0();
    pfVar11 = (float *)(param_1 + 0x10);
    fVar4 = (((float)param_1[0x3d4] + *(float *)(iVar13 + 0x40)) - *pfVar11) * fStack_54 +
            (((float)param_1[0x3d5] + *(float *)(iVar13 + 0x44)) - (float)param_1[0x11]) * local_50
            + ((*(float *)(iVar13 + 0x48) + (float)param_1[0x3d6]) - (float)param_1[0x12]) *
              local_4c;
    fVar5 = local_50 * fVar4;
    fVar6 = local_4c * fVar4;
    fVar4 = fVar4 * local_48;
    fVar1 = (float)param_1[0x11];
    fVar2 = (float)param_1[0x12];
    fVar3 = (float)param_1[0x13];
    fVar14 = (float10)(**(code **)(*param_1 + 0x24))();
    fVar14 = fVar14 * (float10)0.2;
    fVar17 = (((float10)(fVar5 + fVar1) - (float10)*pfVar11) * fVar14 + (float10)*pfVar11) -
             (float10)*pfVar11;
    fVar18 = (((float10)(fVar6 + fVar2) - (float10)(float)param_1[0x11]) * fVar14 +
             (float10)(float)param_1[0x11]) - (float10)(float)param_1[0x11];
    fVar15 = (((float10)(fVar4 + fVar3) - (float10)(float)param_1[0x12]) * fVar14 +
             (float10)(float)param_1[0x12]) - (float10)(float)param_1[0x12];
    fVar16 = (((float10)fStack_54 - (float10)(float)param_1[0x13]) * fVar14 +
             (float10)(float)param_1[0x13]) - (float10)(float)param_1[0x13];
    fVar14 = (float10)0.1;
    if (SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar18 * fVar18) <= fVar14) {
      fVar17 = fVar17 + (float10)(float)param_1[0x14];
      fVar18 = (float10)(float)param_1[0x15] + fVar18;
      fVar15 = fVar15 + (float10)(float)param_1[0x16];
      fVar16 = fVar16 + (float10)(float)param_1[0x17];
    }
    else {
      fVar17 = (float10)*pfVar11 + fVar17 * fVar14;
      fVar18 = fVar18 * fVar14 + (float10)(float)param_1[0x11];
      fVar15 = fVar15 * fVar14 + (float10)(float)param_1[0x12];
      fVar16 = fVar14 * fVar16 + (float10)(float)param_1[0x13];
    }
    fStack_58 = (float)fVar15;
    local_5c = (float)fVar18;
    local_60 = (float)fVar17;
    iVar13 = FUN_004ec060(pfVar11,&local_50,local_68,0x3e860a92);
    if ((iVar13 == 0) || (local_68 <= 0.1)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      param_1[0x14] = (int)local_60;
      param_1[0x15] = (int)local_5c;
      param_1[0x16] = (int)fStack_58;
      param_1[0x17] = (int)(float)fVar16;
    }
    break;
  case 3:
    param_1[0x3cb] = 0;
    fVar1 = (float)param_1[0x2c];
    fVar2 = (float)param_1[0x2d];
    fVar3 = (float)param_1[0x2e];
    fVar4 = (float)param_1[0x30];
    fVar5 = (float)param_1[0x31];
    fVar6 = (float)param_1[0x32];
    fVar9 = SQRT((float)param_1[0x36] * (float)param_1[0x36] +
                 (float)param_1[0x35] * (float)param_1[0x35] +
                 (float)param_1[0x34] * (float)param_1[0x34]);
    fVar7 = (float)param_1[0x32];
    fVar8 = (float)param_1[0x36];
    fVar17 = (float10)FUN_00ddbaa0(-((float)param_1[0x2e] / fVar9));
    fVar18 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
    param_1[0x3d0] = (int)(float)fVar18;
    param_1[0x3d1] = (int)(float)fVar17;
    fVar17 = (float10)fpatan((float10)(float)param_1[0x2d] /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)(float)param_1[0x2c] /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    param_1[0x3d2] = (int)(float)fVar17;
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    local_30 = 0;
    local_2c = 0;
    local_28 = param_1[0x3cb];
    fVar17 = (float10)(**(code **)(*param_1 + 0x24))(5);
    FUN_00ddefe0(param_1 + 0x3d0,&local_30,param_1 + 0x3d0,(float)(fVar17 * (float10)0.2));
    piVar12 = param_1 + 0x2c;
    D3DXMatrixRotationZ(piVar12,param_1[0x3d2]);
    D3DXMatrixInverse(param_1 + 0x3c,0,piVar12);
    fVar17 = (float10)FUN_00ddba30((float)param_1[0x3d2] - (float)param_1[0x3cb]);
    if (ABS(fVar17) < (float10)0.17453292 != (ABS(fVar17) == (float10)0.17453292)) {
      param_1[0x3ca] = 0;
      param_1[0x3cb] = 0;
      param_1[0x3a] = 0;
      param_1[0x39] = 0;
      param_1[0x38] = 0;
      param_1[0x37] = 0;
      param_1[0x35] = 0;
      param_1[0x34] = 0;
      param_1[0x33] = 0;
      param_1[0x32] = 0;
      param_1[0x30] = 0;
      param_1[0x2f] = 0;
      param_1[0x2e] = 0;
      param_1[0x2d] = 0;
      param_1[0x3b] = 0x3f800000;
      param_1[0x36] = 0x3f800000;
      param_1[0x31] = 0x3f800000;
      *piVar12 = 0x3f800000;
      param_1[0x4b] = 0x3f800000;
      param_1[0x46] = 0x3f800000;
      param_1[0x41] = 0x3f800000;
      param_1[0x3c] = 0x3f800000;
      param_1[0x4a] = 0;
      param_1[0x49] = 0;
      param_1[0x48] = 0;
      param_1[0x47] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x43] = 0;
      param_1[0x42] = 0;
      param_1[0x40] = 0;
      param_1[0x3f] = 0;
      param_1[0x3e] = 0;
      param_1[0x3d] = 0;
      param_1[0x25] = param_1[0x3d8];
      FUN_004efe70();
    }
  }
  if (param_1[0x3c9] != 0) {
    FUN_004ed940();
  }
  return;
}

// 004F0950  FUN_004f0950  size=1623  [between]
void __fastcall FUN_004f0950(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar9;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [44];
  
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    if (param_1[0x3e0] == 1) {
      fVar1 = (float)param_1[0x25] - (float)param_1[0x3e4];
    }
    else {
      fVar1 = (float)param_1[0x3e4] + (float)param_1[0x25];
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3cb] = (int)(fVar1 + (float)param_1[0x3e1]);
    param_1[0x3cc] = param_1[0x25];
    param_1[0x3d9] = 0;
    param_1[0x3da] = 0x3f800000;
  case 1:
    fVar9 = (float10)(**(code **)(*param_1 + 0x24))();
    fVar9 = fVar9 * (float10)0.016666668 + (float10)(float)param_1[0x3d9];
    param_1[0x3d9] = (int)(float)fVar9;
    if ((float10)1 < fVar9) {
      param_1[0x3d9] = (int)(float)(float10)1;
    }
    uStack_60 = 0;
    iStack_5c = param_1[0x3cb];
    uStack_58 = 0;
    FUN_00ddefe0(param_1 + 0x24,&uStack_60,param_1 + 0x24,param_1[0x3d9],5);
    fVar1 = (float)param_1[0x3d9];
    if (!NAN(fVar1) && 0.5 < fVar1 != (fVar1 == 0.5)) {
      param_1[0x25] = param_1[0x3cb];
      FUN_00aa4080(0x8b,0,0x3e4ccccd,0x3f800000,0x80,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    piVar6 = (int *)FUN_00c13920();
    (**(code **)(*piVar6 + 0x28))(0);
    iVar7 = FUN_00a7c8a0();
    fStack_a4 = ((float)param_1[0x3d4] + *(float *)(iVar7 + 0x40)) - (float)param_1[0x10];
    fStack_a0 = (*(float *)(iVar7 + 0x44) + (float)param_1[0x3d5]) - (float)param_1[0x11];
    fStack_9c = (*(float *)(iVar7 + 0x48) + (float)param_1[0x3d6]) - (float)param_1[0x12];
    pfVar8 = (float *)FUN_00a92620(auStack_44);
    fStack_b8 = pfVar8[2] * fStack_9c + *pfVar8 * fStack_a4 + pfVar8[1] * fStack_a0;
    pfVar8 = (float *)FUN_00a92620(auStack_34);
    fStack_78 = (float)param_1[0x3da] * 0.1;
    fStack_74 = (float)param_1[0x10] + *pfVar8 * fStack_b8 + (float)param_1[0x3d4];
    fStack_70 = pfVar8[1] * fStack_b8 + (float)param_1[0x3d5] + (float)param_1[0x11];
    fStack_6c = pfVar8[2] * fStack_b8 + (float)param_1[0x3d6] + (float)param_1[0x12];
    fStack_68 = (float)param_1[0x3d7] + pfVar8[3] * fStack_b8 + (float)param_1[0x13];
    fVar9 = (float10)(**(code **)(*param_1 + 0x24))();
    fVar9 = fVar9 * (float10)0.1;
    fStack_d4 = (float)((((float10)fStack_74 - (float10)(float)param_1[0x10]) * fVar9 +
                        (float10)(float)param_1[0x10]) - (float10)(float)param_1[0x10]);
    fStack_d0 = (float)((((float10)fStack_70 - (float10)(float)param_1[0x11]) * fVar9 +
                        (float10)(float)param_1[0x11]) - (float10)(float)param_1[0x11]);
    fStack_cc = (float)((((float10)fStack_6c - (float10)(float)param_1[0x12]) * fVar9 +
                        (float10)(float)param_1[0x12]) - (float10)(float)param_1[0x12]);
    fStack_c8 = (float)((((float10)fStack_68 - (float10)(float)param_1[0x13]) * fVar9 +
                        (float10)(float)param_1[0x13]) - (float10)(float)param_1[0x13]);
    D3DXVec3TransformNormal(&fStack_d4,&fStack_d4,param_1 + 0x3c);
    fVar1 = unaff_EDI + (float)param_1[0x48];
    fVar2 = (float)param_1[0x49] + unaff_ESI;
    fVar3 = (float)param_1[0x4a] + fStack_d8;
    fStack_b4 = fStack_d4;
    fStack_c0 = fVar1;
    fStack_bc = fVar2;
    fStack_b8 = fVar3;
    if (((fVar1 != 0.0) || (fVar2 != 0.0)) || (fVar3 != 0.0)) {
      fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        FUN_00ddf460(&fStack_c0,&fStack_c0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_c0 = 0.0;
        fStack_bc = 1.0;
        fStack_b8 = 0.0;
      }
    }
    fStack_94 = fStack_d4;
    if (fStack_84 < SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3)) {
      fVar1 = fStack_c0 * fStack_84;
      fVar2 = fStack_bc * fStack_84;
      fVar3 = fStack_b8 * fStack_84;
      fStack_94 = fStack_b4 * fStack_84;
    }
    fStack_a0 = fVar1 + (float)param_1[0x14];
    fStack_9c = fVar2 + (float)param_1[0x15];
    fStack_98 = fVar3 + (float)param_1[0x16];
    fStack_94 = fStack_94 + (float)param_1[0x17];
    iVar7 = FUN_00ac4640(1);
    if ((iVar7 != 0) && (iVar7 = FUN_00ac4670(&fStack_a0,1), iVar7 == 0)) {
      FUN_00aa3f60(0x7d);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x3cb] = param_1[0x3cc];
      param_1[0x3c9] = 0;
      param_1[0x3d9] = 0;
      return;
    }
    param_1[0x14] = (int)fStack_a0;
    param_1[0x15] = (int)fStack_9c;
    param_1[0x16] = (int)fStack_98;
    param_1[0x17] = (int)fStack_94;
    if (5.0 < fStack_c4) {
      fVar9 = (float10)(**(code **)(*param_1 + 0x24))();
      fVar9 = fVar9 * (float10)0.025 + (float10)(float)param_1[0x3da];
    }
    else {
      fVar9 = (float10)(**(code **)(*param_1 + 0x24))();
      fVar9 = (float10)(float)param_1[0x3da] - fVar9 * (float10)0.025;
    }
    param_1[0x3da] = (int)(float)fVar9;
    if ((float)param_1[0x3da] <= 1.0) {
      param_1[0x3da] = 0x3f800000;
    }
    fVar1 = (float)param_1[0x3da];
    if (!NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0)) {
      param_1[0x3da] = 0x40a00000;
    }
    pfVar8 = (float *)FUN_00a92620(auStack_30);
    if ((ABS(fStack_c4) < 0.1) ||
       (pfVar8[2] * fStack_a8 + *pfVar8 * fStack_b0 + pfVar8[1] * fStack_ac < 0.0)) {
      FUN_00aa3f60(0x7d);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x3cb] = param_1[0x3cc];
      param_1[0x3c9] = 0;
      param_1[0x3d9] = 0;
      return;
    }
    break;
  case 3:
    fVar9 = (float10)(**(code **)(*param_1 + 0x24))();
    fVar9 = fVar9 * (float10)0.016666668 + (float10)(float)param_1[0x3d9];
    param_1[0x3d9] = (int)(float)fVar9;
    if ((float10)1 < fVar9) {
      param_1[0x3d9] = (int)(float)(float10)1;
    }
    uStack_50 = 0;
    iStack_4c = param_1[0x3cb];
    uStack_48 = 0;
    FUN_00ddefe0(param_1 + 0x24,&uStack_50,param_1 + 0x24,param_1[0x3d9],5);
    fVar1 = (float)param_1[0x3d9];
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      param_1[0x25] = param_1[0x3cb];
      param_1[0x3ca] = 0;
      param_1[0x3c9] = 0;
      FUN_004efe70();
    }
  }
  return;
}

// 004F0FC0  FUN_004f0fc0  size=54  [between]
void FUN_004f0fc0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
    FUN_004ef090();
    return;
  case 3:
    FUN_004f0300();
    return;
  case 4:
    FUN_004f0950();
    return;
  case 5:
    FUN_004ef470();
    return;
  default:
    return;
  }
}

// 004F1010  Em0121::vf4C  size=726  [class]
/* WARNING: Removing unreachable block (ram,0x004f113e) */

void __fastcall Em0121::vf4C(int *param_1)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  int *piStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  char *pcStack_170;
  
  (**(code **)(*param_1 + 0x318))();
  FUN_00a92fb0();
  fVar7 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar7;
  BehaviorEmBase::vf4C();
  piVar3 = (int *)FUN_009f8b60();
  iVar5 = *piVar3;
  piVar3 = (int *)FUN_00c13920();
  uVar8 = 0;
  (**(code **)(*piVar3 + 0x28))(0,5);
  FUN_00a7c8a0();
  iVar4 = FUN_00a12210(uVar8);
  fStack_194 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
  fStack_190 = *(float *)(iVar4 + 0x44) - (float)param_1[0x11];
  fStack_18c = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
  fStack_188 = *(float *)(iVar4 + 0x4c) - (float)param_1[0x13];
  iStack_1a4 = param_1[0x10];
  piStack_1b4 = param_1 + 0x370;
  iStack_1a0 = param_1[0x11];
  iStack_19c = param_1[0x12];
  uStack_1b0 = 5;
  iStack_198 = param_1[0x13];
  uStack_17c = 0;
  uStack_178 = 0xc;
  uStack_174 = 0;
  pcStack_170 = "MissileMuzzle";
  uStack_184 = 0x3e99999a;
  uStack_180 = iVar5 << 0x10 | 0x15;
  FUN_0090fb00(&piStack_1b4);
  if (param_1[0x370] != 0) {
    uVar6 = param_1[0x371];
    iVar5 = FUN_00907640(param_1 + 0x370,0,0);
    uVar1 = (uint)(iVar5 == 0);
    param_1[0x371] = uVar1;
    if (uVar6 != uVar1) {
      if (uVar1 == 0) {
        FUN_00a8c9b0(0,5,0,0);
      }
      else if ((param_1[0x128] != 1) && ((*(byte *)(param_1 + 0x12a) & 2) != 0)) {
        uVar8 = FUN_004039a0(5,param_1,0);
        FUN_00a963e0(uVar8);
      }
    }
  }
  fVar2 = (float)param_1[0x3c4] - (float)param_1[0x244] * 0.016666668;
  param_1[0x3c4] = (int)fVar2;
  if (fVar2 <= 0.0) {
    iVar5 = lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_6();
    param_1[0x3c4] = 0x40400000;
    param_1[0x3c5] = iVar5;
  }
  iVar5 = FUN_00ac4770();
  if ((iVar5 == 0) && (uVar6 = FUN_00a8cab0(), uVar6 < 3)) {
    FUN_004ecef0();
  }
  uVar8 = FUN_00a8cab0();
  switch(uVar8) {
  case 0:
  case 1:
  case 2:
    FUN_004ef090();
    break;
  case 3:
    FUN_004f0300();
    break;
  case 4:
    FUN_004f0950();
    break;
  case 5:
    FUN_004ef470();
  }
  if ((DAT_01bea060 & 0x40000000) == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  iVar5 = FUN_00c81c60(0x50);
  iVar4 = 0;
  if (iVar5 == 0) {
    iVar5 = 0;
    if (0 < (short)param_1[0xcb]) {
      iVar4 = 0;
      do {
        *(undefined4 *)(iVar4 + 0x460 + param_1[0xca]) = 2;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x560;
      } while (iVar5 < (short)param_1[0xcb]);
    }
  }
  else {
    iVar5 = 0;
    if (0 < (short)param_1[0xcb]) {
      do {
        *(undefined4 *)(iVar4 + 0x460 + param_1[0xca]) = 0;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x560;
      } while (iVar5 < (short)param_1[0xcb]);
      return;
    }
  }
  return;
}

