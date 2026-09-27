// src/misc/esp130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0860..009F5840, 6 functions

#include "mgrr.h"
#include "esp130.h"

// 009D0860  esp130::esp130  size=18  [class]
undefined4 * __fastcall esp130::esp130(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 009D0890  esp130::addOtTransList  size=1  [class]
void esp130::addOtTransList(void)

{
  return;
}

// 009DA780  esp130::vf00  size=36  [class]
undefined4 * __thiscall esp130::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009DA7B0  esp130::vf14  size=21  [class]
void __fastcall esp130::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x450) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x120) = 1;
  }
  return;
}

// 009EA560  esp130::vf08  size=523  [class]
void __fastcall esp130::vf08(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  int local_20 [7];
  
  esp39::vf08();
  pfVar1 = (float *)(param_1 + 0x460);
  pfVar2 = (float *)(param_1 + 400);
  iVar9 = FUN_00f41120();
  if ((iVar9 == 0) &&
     (fVar8 = *(float *)(param_1 + 0x464) - *(float *)(param_1 + 0x194),
     fVar7 = *(float *)(param_1 + 0x468) - *(float *)(param_1 + 0x198),
     0.0 < fVar7 * fVar7 + fVar8 * fVar8 + (*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2))) {
    local_50[0] = 2;
    iVar9 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (local_40,local_30,local_20,0,pfVar1,pfVar2,0x15,"EffectHitSystemProxy");
    if (iVar9 != 0) {
      FUN_00c76f00();
      if (local_50[0] == 2) {
        puVar10 = local_40;
      }
      else {
        FUN_00dd5650(&DAT_01659600);
        puVar10 = &DAT_01b78880;
      }
      local_80 = *puVar10;
      local_7c = puVar10[1];
      local_78 = puVar10[2];
      local_74 = puVar10[3];
      if (local_50[0] == 2) {
        puVar10 = local_30;
      }
      else {
        FUN_00dd5650(&DAT_01659600);
        puVar10 = &DAT_01b78880;
      }
      local_70 = *puVar10;
      local_6c = puVar10[1];
      local_68 = puVar10[2];
      local_64 = puVar10[3];
      iVar9 = FUN_008f7780(local_20[0]);
      local_60 = 0;
      if (iVar9 != 0) {
        local_60 = *(undefined4 *)(iVar9 + 0x4f0);
      }
      local_5c = FUN_009cf290();
      if ((local_20[0] == 0) || (uVar6 = *(uint *)(local_20[0] + 0xc), uVar6 == 0)) {
        local_58 = 0;
      }
      else {
        local_58 = *(undefined4 *)((-(uint)(uVar6 != 0) & uVar6) + 0x2c);
      }
      local_54 = *(undefined4 *)(param_1 + 0x474);
      FUN_00c76db0(&local_80);
      FUN_009e7810(local_50);
      *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x120) = 2;
      *(undefined4 *)(param_1 + 0x450) = 0;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      return;
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x154);
  uVar4 = *(undefined4 *)(param_1 + 0x158);
  uVar5 = *(undefined4 *)(param_1 + 0x15c);
  iVar9 = *(int *)(param_1 + 0x450);
  *(undefined4 *)(iVar9 + 0xd0) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(iVar9 + 0xd4) = uVar3;
  *(undefined4 *)(iVar9 + 0xd8) = uVar4;
  *(undefined4 *)(iVar9 + 0xdc) = uVar5;
  *pfVar1 = *pfVar2;
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x19c);
  return;
}

// 009F5840  esp130::preTrans  size=931  [class]
/* WARNING: Removing unreachable block (ram,0x009f5945) */
/* WARNING: Removing unreachable block (ram,0x009f58f2) */
/* WARNING: Removing unreachable block (ram,0x009f5983) */

undefined4 __thiscall
esp130::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  short *psVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 auStack_cc [3];
  undefined1 local_c0 [36];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_8c [3];
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar2 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x120) < 1) {
      FUN_009cca90(param_1,&DAT_0165bac8);
    }
    else {
      iVar2 = EspControllerBullet::EspControllerBullet_3();
      *(int *)(param_1 + 0x450) = iVar2;
      if (iVar2 != 0) {
        psVar3 = (short *)FUN_009d4a80();
        if (psVar3 != (short *)0x0) {
          *(int *)(param_1 + 0x474) = (int)*psVar3;
          *(int *)(param_1 + 0x470) = (int)psVar3[1];
        }
        pfVar4 = (float *)FUN_009d4ac0();
        if (pfVar4 != (float *)0x0) {
          uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar5;
          fVar1 = *pfVar4;
          uVar6 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar6;
          local_f0 = (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) * fVar1 * 0.017453292;
          fVar1 = pfVar4[1];
          uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar5;
          local_ec = fVar1 * 0.017453292 * (1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0);
          local_e8 = (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) * pfVar4[2] * 0.017453292;
          local_e4 = 0x3f800000;
          FUN_00ddc1d0(local_c0,&local_f0,5);
          D3DXVec3TransformNormal(param_1 + 0x150,param_1 + 0x150,local_c0);
        }
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
        if (*(int *)(param_1 + 0x50) != 0) {
          FUN_00efc610(param_1 + 0x3a0);
        }
        if (*(int *)(param_1 + 0x470) == 0) {
          FUN_00efcb90();
          local_f0 = 0.0;
          local_ec = 0.0;
          local_e8 = 0.0;
          local_e4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          thunk_FUN_00dde510(&local_f0,&local_ec,param_1 + 0x150,&uStack_e0);
          local_f0 = local_f0 * -1.0;
          uStack_d0 = 0x3f800000;
          auStack_cc[0] = 0x3f800000;
          auStack_cc[1] = 0x3f800000;
          auStack_cc[2] = 0x3f800000;
          thunk_FUN_00ddc1d0(local_c0,&local_f0,5);
          FUN_00ddd140(auStack_80,&uStack_d0);
          D3DXMatrixMultiply(local_c0,auStack_80,local_c0);
          uStack_9c = *(undefined4 *)(param_1 + 400);
          uStack_98 = *(undefined4 *)(param_1 + 0x194);
          uStack_94 = *(undefined4 *)(param_1 + 0x198);
          FUN_00c76e60();
          uStack_6c = *(undefined4 *)(param_1 + 0x474);
          iVar2 = FUN_00a7c990(&DAT_01ee11f4);
          if (iVar2 == 0) {
            uStack_68 = FUN_00a81330();
          }
          else {
            uStack_68 = 0;
          }
          uStack_60 = 0xffff;
          uStack_64 = 0;
          uStack_5c = 0;
          FUN_00c765b0();
          FUN_00c770c0(auStack_8c,&stack0xffffff00);
          FUN_00c76ea0();
          FUN_00c76620();
          puVar7 = auStack_cc;
          puVar8 = auStack_8c;
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          uStack_3c = *(undefined4 *)(param_1 + 0x474);
          iVar2 = FUN_00a7c990(&DAT_01ee11f4);
          if (iVar2 == 0) {
            uStack_38 = FUN_00a81330();
          }
          else {
            uStack_38 = 0;
          }
          uStack_34 = *(undefined4 *)(param_1 + 0x450);
          FUN_00c771b0(auStack_8c,&stack0xffffff00);
        }
        *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 400);
        *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x194);
        *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x198);
        *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x19c);
        return 1;
      }
    }
  }
  return 0;
}

