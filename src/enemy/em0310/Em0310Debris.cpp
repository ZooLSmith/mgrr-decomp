// src/enemy/em0310/Em0310Debris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057F470..00AB8840, 9 functions

#include "types.h"

// 0057F470  Em0310Debris::thunk_vf44  size=5  [class]
void __fastcall Em0310Debris::thunk_vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x93c) != 0) {
    FUN_00d8b4a0(param_1);
  }
  if (*(int *)(param_1 + 0x904) != 0) {
    FUN_00d8a1d0(0x1e,*(int *)(param_1 + 0x904));
    if (*(undefined4 **)(param_1 + 0x904) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x904))(1);
      *(undefined4 *)(param_1 + 0x904) = 0;
    }
  }
  if (*(int *)(param_1 + 0x908) != 0) {
    FUN_00d8a1d0(0x1f,*(int *)(param_1 + 0x908));
    if (*(undefined4 **)(param_1 + 0x908) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x908))(1);
      *(undefined4 *)(param_1 + 0x908) = 0;
    }
  }
  FUN_00900ca0();
  FUN_00a8c820();
  FUN_00a944d0();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 0057F480  Em0310Debris::vf1BC  size=62  [class]
void __thiscall Em0310Debris::vf1BC(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  BehaviorDebrisBase::vf1BC(param_2);
  uVar1 = FUN_009f8b40();
  FUN_009f8ae0(uVar1);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    uVar1 = FUN_009f8b40();
    FUN_0091c760(uVar1);
  }
  return;
}

// 0057F4D0  Em0310Debris::vf1B8  size=31  [class]
void Em0310Debris::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42310;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00588530  Em0310Debris::vf4C  size=1502  [class]
/* WARNING: Removing unreachable block (ram,0x005889ae) */
/* WARNING: Removing unreachable block (ram,0x005889db) */

void __fastcall Em0310Debris::vf4C(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float unaff_EDI;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int iStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [80];
  
  BehaviorDebrisBase::vf4C();
  FUN_00a92fb0();
  fVar9 = (float10)FUN_00e049b0();
  local_84 = (float)fVar9;
  iVar7 = 0;
  local_8c = 0.0;
  iVar8 = 0;
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if ((iVar3 != 0) && (iVar7 = FUN_00a7c8a0(), iStack_90 = iVar7, iVar7 != 0)) {
    iVar8 = FUN_00a12210(0);
  }
  uVar4 = FUN_00a8cab0();
  switch(uVar4) {
  case 0:
    iVar3 = FUN_00a8e520();
    if (((iVar3 == 0) && (*(int *)(param_1 + 0x330) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 1)) {
      *(undefined4 *)(param_1 + 0x618) = 3;
      goto switchD_005885a4_default;
    }
    break;
  case 1:
    iVar3 = FUN_00a8e520();
    if (iVar3 != 0) goto switchD_005885a4_default;
    if (*(int *)(param_1 + 0x7b4) == 0) {
      if (*(int *)(param_1 + 0x974) != 0) {
        FUN_00915e60(0x3d0f5c29);
        FUN_00915ea0(0x3c23d70a);
      }
    }
    else {
      FUN_009166f0(0x3d0f5c29);
      FUN_00916830(0x3c23d70a);
    }
    break;
  case 2:
    iVar3 = FUN_00a8c760(0xb);
    if (iVar3 == 0) goto switchD_005885a4_default;
    break;
  case 3:
    if (iVar8 != 0) {
      if (*(int *)(param_1 + 0x7b4) == 0) {
        if (*(int *)(param_1 + 0x974) != 0) {
          pfVar5 = (float *)FUN_00911d10(auStack_64);
          local_84 = *pfVar5 - *(float *)(iVar8 + 0x40);
          fStack_80 = pfVar5[1] - *(float *)(iVar8 + 0x44);
          fStack_7c = pfVar5[2] - *(float *)(iVar8 + 0x48);
          fStack_78 = pfVar5[3] - *(float *)(iVar8 + 0x4c);
          fVar9 = (float10)FUN_00916030();
          fVar9 = fVar9 * (float10)5.0;
          local_8c = (float)fVar9;
          if (((local_84 == 0.0) && (fStack_80 == 0.0)) && (fStack_7c == 0.0)) {
            fVar12 = (float10)*(float *)(iStack_90 + 0x30);
            fVar11 = (float10)*(float *)(iStack_90 + 0x34);
            fVar10 = (float10)*(float *)(iStack_90 + 0x38);
            fStack_78 = *(float *)(iStack_90 + 0x3c);
          }
          else {
            fVar1 = fStack_7c * fStack_7c + local_84 * local_84 + fStack_80 * fStack_80;
            if (fVar1 < 0.0 == (fVar1 == 0.0)) {
              FUN_00ddf460(&local_84,&local_84);
              fVar10 = (float10)fStack_7c;
              fVar11 = (float10)fStack_80;
              fVar9 = (float10)local_8c;
              fVar12 = (float10)local_84;
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              fVar10 = (float10)0;
              fVar11 = (float10)1;
              fVar9 = (float10)local_8c;
              fVar12 = fVar10;
            }
          }
          local_84 = (float)(fVar12 * fVar9);
          fStack_80 = (float)(fVar11 * fVar9);
          uVar6 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
          fStack_7c = (float)(fVar10 * fVar9);
          fStack_78 = (float)(fVar9 * (float10)fStack_78);
          fVar1 = (float)(uVar6 >> 8) * 5.960465e-08;
          DAT_01dd0814 = uVar6 * 0x19660d + 0x3c6ef35f;
          local_8c = (float)(DAT_01dd0814 >> 8) * 5.960465e-08;
          D3DXMatrixRotationY(auStack_54,(1.0 - (fVar1 + fVar1)) * 0.2617994);
          D3DXVec3TransformNormal(&local_8c,&local_8c,auStack_5c);
          D3DXMatrixRotationX(&fStack_68,(1.0 - (unaff_EDI + unaff_EDI)) * 0.2617994);
          D3DXVec3TransformNormal(&stack0xffffff60,&stack0xffffff60,&fStack_70);
          FUN_00915e60(0x41a00000);
          FUN_00915ea0(0x41a00000);
          FUN_0091a7e0(&local_84);
        }
      }
      else {
        FUN_00916d50(&fStack_74);
        local_84 = fStack_74 - *(float *)(iVar8 + 0x40);
        fStack_80 = fStack_70 - *(float *)(iVar8 + 0x44);
        fStack_7c = fStack_6c - *(float *)(iVar8 + 0x48);
        fStack_78 = fStack_68 - *(float *)(iVar8 + 0x4c);
        fVar9 = (float10)FUN_00916de0();
        fVar9 = fVar9 * (float10)5.0;
        if (((local_84 == 0.0) && (fStack_80 == 0.0)) && (fStack_7c == 0.0)) {
          fVar12 = (float10)*(float *)(iVar7 + 0x30);
          fVar11 = (float10)*(float *)(iVar7 + 0x34);
          fVar10 = (float10)*(float *)(iVar7 + 0x38);
          fStack_78 = *(float *)(iVar7 + 0x3c);
        }
        else {
          fVar1 = fStack_7c * fStack_7c + local_84 * local_84 + fStack_80 * fStack_80;
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            FUN_00ddf460(&local_84,&local_84);
            fVar10 = (float10)fStack_7c;
            fVar11 = (float10)fStack_80;
            fVar9 = (float10)(float)fVar9;
            fVar12 = (float10)local_84;
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fVar10 = (float10)0;
            fVar11 = (float10)1;
            fVar9 = (float10)(float)fVar9;
            fVar12 = fVar10;
          }
        }
        local_84 = (float)(fVar12 * fVar9);
        fStack_80 = (float)(fVar11 * fVar9);
        fStack_7c = (float)(fVar10 * fVar9);
        fStack_78 = (float)(fVar9 * (float10)fStack_78);
        FUN_009126e0();
        FUN_009166f0(0x41a00000);
        FUN_00916830(0x41a00000);
        FUN_0091ab40(&local_84);
      }
    }
    break;
  default:
    goto switchD_005885a4_default;
  }
  *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
switchD_005885a4_default:
  if (0.0 < *(float *)(param_1 + 0x970)) {
    if ((*(int *)(param_1 + 0x7b4) == 0) || (*(int *)(param_1 + 0x880) == 0)) {
      if (*(int *)(param_1 + 0x974) != 0) {
        FUN_00915460(1);
      }
    }
    else {
      FUN_009126e0();
    }
    iVar3 = FUN_00a8e520();
    if ((iVar3 == 0) && (2 < *(int *)(param_1 + 0x618))) {
      *(float *)(param_1 + 0x970) = *(float *)(param_1 + 0x970) - fStack_88;
    }
  }
  return;
}

// 00592BA0  Em0310Debris::vf40  size=1034  [class]
undefined4 __fastcall Em0310Debris::vf40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  uint *puVar13;
  float *pfVar14;
  float10 fVar15;
  float10 fVar16;
  float local_158;
  float local_154;
  float local_12c;
  float local_128;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  uint local_e0 [30];
  float fStack_68;
  undefined4 local_50;
  undefined1 local_2c;
  
  local_154 = 8.18904e-39;
  iVar9 = BehaviorDebrisBase::vf40();
  if (iVar9 != 0) {
    local_154 = 8.189065e-39;
    fVar15 = (float10)FUN_00a13390();
    if (fVar15 <= (float10)0.25) {
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
        **(undefined4 **)(param_1 + 0x370) = 1;
      }
    }
    else {
      local_154 = 8.189093e-39;
      FUN_009fd240();
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    *(undefined4 *)(param_1 + 0x970) = 0x42c80000;
    *(undefined4 *)(param_1 + 0x928) = 1;
    if (*(int *)(param_1 + 0x7b4) == 0) {
      local_154 = 0.0;
      local_158 = 8.189272e-39;
      iVar9 = FUN_00a12210();
      if (iVar9 != 0) {
        local_154 = 8.189299e-39;
        FUN_0118f7b0();
        local_50 = 0x42480000;
        local_2c = 1;
        local_154 = 8.189338e-39;
        iVar10 = FUN_009f8b40();
        local_110 = *(undefined4 *)(iVar9 + 0x40);
        local_10c = *(undefined4 *)(iVar9 + 0x44);
        local_e0[0] = iVar10 << 0x10 | 0x1f;
        local_108 = *(undefined4 *)(iVar9 + 0x48);
        local_104 = *(undefined4 *)(iVar9 + 0x4c);
        fVar1 = *(float *)(iVar9 + 0x10);
        fVar2 = *(float *)(iVar9 + 0x14);
        fVar3 = *(float *)(iVar9 + 0x18);
        fVar4 = *(float *)(iVar9 + 0x20);
        fVar5 = *(float *)(iVar9 + 0x24);
        fVar6 = *(float *)(iVar9 + 0x28);
        fVar8 = SQRT(*(float *)(iVar9 + 0x38) * *(float *)(iVar9 + 0x38) +
                     *(float *)(iVar9 + 0x34) * *(float *)(iVar9 + 0x34) +
                     *(float *)(iVar9 + 0x30) * *(float *)(iVar9 + 0x30));
        local_12c = *(float *)(iVar9 + 0x28) / fVar8;
        local_128 = *(float *)(iVar9 + 0x38) / fVar8;
        local_154 = -(*(float *)(iVar9 + 0x18) / fVar8);
        local_158 = 8.189586e-39;
        fVar15 = (float10)FUN_00ddbaa0();
        fVar16 = (float10)fpatan((float10)local_12c,(float10)local_128);
        local_100 = (float)fVar16;
        local_fc = (float)fVar15;
        fVar15 = (float10)fpatan((float10)*(float *)(iVar9 + 0x14) /
                                 (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                                 (float10)*(float *)(iVar9 + 0x10) /
                                 (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
        local_f8 = (float)fVar15;
        local_154 = 8.18965e-39;
        piVar11 = (int *)FUN_00910da0();
        iVar9 = *piVar11;
        local_154 = 1.4013e-45;
        local_158 = 8.189669e-39;
        fVar15 = (float10)FUN_00a13390();
        local_158 = (float)(fVar15 * (float10)0.5);
        uVar12 = (**(code **)(iVar9 + 8))(&local_12c,local_e0,&local_110,&local_100);
        FUN_00910ab0(uVar12);
        iVar9 = *(int *)(param_1 + 0x974);
        if (iVar9 != 0) {
          FUN_004066f0();
          uVar7 = *(uint *)(iVar9 + 0xc);
          puVar13 = (uint *)(-(uint)(uVar7 != 0) & uVar7);
          *puVar13 = *puVar13 | 0x40;
          puVar13[8] = 1;
          if (DAT_01885d68 != 1) {
            piVar11 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar11 = *piVar11 + -1;
            if (((*piVar11 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          if (*(int *)(*(int *)(param_1 + 0x330) + 0xc4) != 0) {
            fVar1 = fStack_68 * -1.0;
            pfVar14 = (float *)FUN_005d95e0(&local_108);
            local_154 = pfVar14[1];
            if (((*pfVar14 == 0.0) && (local_154 == 0.0)) && (pfVar14[2] == 0.0)) {
              local_154 = 1.0;
            }
            local_158 = fVar1 * *pfVar14;
            local_154 = fVar1 * 0.2 * local_154;
            fVar1 = pfVar14[2] * fVar1;
            iVar9 = FUN_00a8e520();
            if (iVar9 != 0) {
              piVar11 = (int *)FUN_00c13920();
              iVar9 = (**(code **)(*piVar11 + 0x28))(0);
              if ((iVar9 != 0) && (iVar9 = FUN_00a7c8a0(), iVar9 != 0)) {
                pfVar14 = (float *)FUN_00a8b8a0(&local_108,
                                                SQRT(fVar1 * fVar1 +
                                                     local_154 * local_154 + local_158 * local_158)
                                                * 3.0);
                local_158 = (*pfVar14 + local_158) * 0.5;
                local_154 = (pfVar14[1] + local_154) * 0.5;
              }
            }
            FUN_0091a7e0(&local_158);
            FUN_00915ea0(0x3dcccccd);
          }
        }
      }
    }
    return 1;
  }
  return 0;
}

// 00592FB0  Em0310Debris::vf54  size=142  [class]
void __fastcall Em0310Debris::vf54(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_50 [19];
  
  BehaviorDebrisBase::vf54();
  if ((*(int *)(param_1 + 0x7b4) == 0) && (*(int *)(param_1 + 0x974) != 0)) {
    iVar1 = FUN_00a12210(0);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
      FUN_01005140(local_50);
      puVar3 = local_50;
      puVar4 = (undefined4 *)(iVar1 + 0x10);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x4c);
      switchD_0080dbae::default();
    }
  }
  return;
}

// 00AAFC00  Em0310Debris::Em0310Debris  size=28  [class]
undefined4 * __fastcall Em0310Debris::Em0310Debris(undefined4 *param_1)

{
  BehaviorDebrisBase::BehaviorDebrisBase_4();
  *param_1 = vftable;
  param_1[0x25d] = 0;
  return param_1;
}

// 00AAFC20  Em0310Debris::vf04  size=6  [class]
undefined * Em0310Debris::vf04(void)

{
  return &DAT_01b35160;
}

// 00AB8840  Em0310Debris::vf00  size=105  [class]
undefined4 * __thiscall Em0310Debris::vf00(undefined4 *param_1,byte param_2)

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

