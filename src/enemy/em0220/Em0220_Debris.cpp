// src/enemy/em0220/Em0220_Debris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0055CBF0..00AB8610, 14 functions

#include "mgrr.h"
#include "Em0220_Debris.h"

// 0055CBF0  Em0220_Debris::vf48  size=1  [class]
void Em0220_Debris::vf48(void)

{
  return;
}

// 0055CC00  Em0220_Debris::thunk_vf50  size=5  [class]
void __fastcall Em0220_Debris::thunk_vf50(int param_1)

{
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  return;
}

// 0055CC10  Em0220_Debris::vf114  size=35  [class]
void __thiscall Em0220_Debris::vf114(int *param_1,int param_2)

{
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  return;
}

// 0055CC50  Em0220_Debris::vf1B8  size=31  [class]
void Em0220_Debris::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42220;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0055CC70  Em0220_Debris::thunk_vf30  size=5  [class]
void __fastcall Em0220_Debris::thunk_vf30(int param_1)

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

// 0056D0C0  Em0220_Debris::vf44  size=91  [class]
void __fastcall Em0220_Debris::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00a8c820();
  FUN_00a9d8a0();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int *)(param_1 + 0x970) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x970);
  }
  Behavior::vf44();
  return;
}

// 0056D120  Em0220_Debris::vf4C  size=533  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em0220_Debris::vf4C(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  Behavior::vf4C();
  if (*(int *)(param_1 + 0x978) != 0) {
    return;
  }
  fVar5 = (float10)FUN_00a92ff0();
  if (*(int *)(param_1 + 0x618) == 0) {
    iVar3 = FUN_00a8e520();
    if ((iVar3 != 0) ||
       (fVar2 = *(float *)(param_1 + 0x97c) + _DAT_01be942c, *(float *)(param_1 + 0x97c) = fVar2,
       fVar2 <= 5.0)) goto LAB_0056d277;
    if (*(int *)(param_1 + 0x7b4) == 0) {
      if (*(int *)(param_1 + 0x970) != 0) {
        uStack_20 = 0;
        uStack_1c = 0xbf800000;
        uStack_18 = 0;
        FUN_0091a7e0(&uStack_20);
      }
    }
    else {
      uStack_20 = 0;
      uStack_1c = 0xbf800000;
      uStack_18 = 0;
      FUN_0091ab40(&uStack_20);
    }
    *(undefined4 *)(param_1 + 0x97c) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x618) != 1) goto LAB_0056d277;
    fVar2 = *(float *)(param_1 + 0x97c) + _DAT_01be942c;
    *(float *)(param_1 + 0x97c) = fVar2;
    if (fVar2 < 20.0) {
      if (*(int *)(param_1 + 0x7b4) == 0) {
        if (*(int *)(param_1 + 0x970) != 0) {
          FUN_004066f0();
          FUN_0118fe70();
          FUN_00406760();
        }
      }
      else {
        FUN_009126e0();
      }
      goto LAB_0056d277;
    }
    if (*(int *)(param_1 + 0x970) != 0) {
      FUN_00915ea0(0);
    }
  }
  *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
LAB_0056d277:
  iVar3 = FUN_0093db40(*(undefined4 *)(param_1 + 0x83c));
  if ((iVar3 == 0) || ((*(int *)(param_1 + 0x7b4) == 0 && (*(int *)(param_1 + 0x970) == 0)))) {
    fVar2 = *(float *)(param_1 + 0x974) - (float)fVar5 * 0.05;
    *(float *)(param_1 + 0x974) = fVar2;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(param_1 + 0x974) = 0;
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 0x978) = 1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x974);
    iVar4 = 0;
    iVar3 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        *(undefined4 *)(iVar4 + 0x1c + *(int *)(param_1 + 800)) = uVar1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
    }
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
      **(undefined4 **)(param_1 + 0x370) = 1;
    }
  }
  return;
}

// 0056D340  FUN_0056d340  size=362  [between]
float * __thiscall FUN_0056d340(int param_1,float *param_2)

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

// 0056D4B0  Em0220_Debris::vf1BC  size=136  [class]
void __thiscall Em0220_Debris::vf1BC(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  Bh0064::vf1BC(param_2);
  if (param_2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  puVar1 = (undefined4 *)FUN_009f8b60();
  uVar4 = *puVar1;
  if (uVar3 != 0) {
    iVar2 = FUN_00acdea0();
    if (iVar2 != 0) {
      puVar1 = (undefined4 *)FUN_009f8b60();
      uVar4 = *puVar1;
    }
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091c760(uVar4);
  }
  if (*(int *)(param_1 + 0x970) != 0) {
    FUN_0091a980(uVar4);
  }
  FUN_009f8ae0(uVar4);
  return;
}

// 00577D20  Em0220_Debris::vf54  size=163  [class]
void __fastcall Em0220_Debris::vf54(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_50 [19];
  
  Behavior::vf54();
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091e980(param_1);
    switchD_0080dbae::default();
    return;
  }
  if (*(int *)(param_1 + 0x970) != 0) {
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

// 0057AEF0  Em0220_Debris::vf40  size=1831  [class]
undefined4 __fastcall Em0220_Debris::vf40(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  float10 fVar9;
  float10 fVar10;
  float *local_168;
  float *local_164;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float fStack_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
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
  
  local_164 = (float *)0x57af06;
  iVar3 = Behavior::startup();
  if (iVar3 != 0) {
    local_164 = &local_150;
    local_14c = 0.0;
    local_148 = 0.0;
    local_150 = 1.4013e-45;
    local_168 = (float *)0x57af31;
    iVar3 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>();
    if (iVar3 != 0) {
      local_164 = (float *)0x3;
      local_168 = (float *)0x57af3e;
      FUN_00a92fb0();
      local_168 = (float *)0x57af45;
      FUN_00e08640();
      local_164 = (float *)0x57af4c;
      FUN_009fd240();
      if ((*(float *)(*(int *)(param_1 + 0x330) + 0x30) <= 0.5) &&
         (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0)) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
        **(undefined4 **)(param_1 + 0x370) = 1;
      }
      local_164 = (float *)0x57af83;
      iVar3 = FUN_009f8d30();
      if (iVar3 == 0) {
        local_164 = (float *)0x0;
        local_168 = (float *)0x57b2ab;
        iVar3 = FUN_00a12210();
        if (iVar3 != 0) {
          local_164 = (float *)0x57b2c1;
          FUN_0118f7b0();
          local_50 = 0x42480000;
          local_2c = 1;
          local_164 = (float *)0x57b2dd;
          iVar6 = FUN_009f8b40();
          local_110 = *(undefined4 *)(iVar3 + 0x40);
          local_10c = *(undefined4 *)(iVar3 + 0x44);
          local_e0[0] = iVar6 << 0x10 | 7;
          local_108 = *(undefined4 *)(iVar3 + 0x48);
          local_104 = *(undefined4 *)(iVar3 + 0x4c);
          local_150 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                           *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                           *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
          local_14c = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                           *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                           *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
          fVar1 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                       *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                       *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
          local_134 = *(float *)(iVar3 + 0x28) / fVar1;
          local_138 = *(float *)(iVar3 + 0x38) / fVar1;
          local_164 = (float *)-(*(float *)(iVar3 + 0x18) / fVar1);
          local_168 = (float *)0x57b391;
          fVar9 = (float10)FUN_00ddbaa0();
          fVar10 = (float10)fpatan((float10)local_134,(float10)local_138);
          local_100 = (float)fVar10;
          local_fc = (float)fVar9;
          fVar9 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_14c,
                                  (float10)*(float *)(iVar3 + 0x10) / (float10)local_150);
          local_f8 = (float)fVar9;
          local_164 = (float *)0x57b3bf;
          piVar5 = (int *)FUN_00910da0();
          iVar3 = *piVar5;
          local_164 = (float *)0x1;
          local_168 = (float *)0x57b3cc;
          fVar9 = (float10)FUN_00a13390();
          local_168 = (float *)(float)(fVar9 * (float10)0.5);
          uVar7 = (**(code **)(iVar3 + 8))(&local_134,local_e0,&local_110,&local_100);
          FUN_00910ab0(uVar7);
          iVar3 = *(int *)(param_1 + 0x970);
          if (iVar3 != 0) {
            FUN_004066f0();
            uVar2 = *(uint *)(iVar3 + 0xc);
            puVar8 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
            *puVar8 = *puVar8 | 0x40;
            puVar8[8] = 1;
            if (DAT_01885d68 != 1) {
              piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
              *piVar5 = *piVar5 + -1;
              if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
            }
            if (*(int *)(*(int *)(param_1 + 0x330) + 0xc4) != 0) {
              local_148 = fStack_68 * -1.0;
              local_144 = local_148 * 0.2;
              fStack_140 = local_148;
              pfVar4 = (float *)FUN_0056d340(&local_108);
              fVar1 = pfVar4[1];
              if (((*pfVar4 == 0.0) && (fVar1 == 0.0)) && (pfVar4[2] == 0.0)) {
                fVar1 = 1.0;
              }
              local_168 = (float *)(local_148 * *pfVar4);
              local_164 = (float *)(local_144 * fVar1);
              fVar1 = pfVar4[2] * fStack_140;
              iVar3 = FUN_00a8e520();
              if (iVar3 != 0) {
                piVar5 = (int *)FUN_00c13920();
                iVar3 = (**(code **)(*piVar5 + 0x28))(0);
                if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
                  pfVar4 = (float *)FUN_00a8b8a0(&local_108,
                                                 SQRT(fVar1 * fVar1 +
                                                      (float)local_164 * (float)local_164 +
                                                      (float)local_168 * (float)local_168) * 3.0);
                  local_168 = (float *)(((float)local_168 + *pfVar4) * 0.5);
                  local_164 = (float *)((pfVar4[1] + (float)local_164) * 0.5);
                }
              }
              FUN_0091a7e0(&local_168);
              FUN_00915ea0(0x3dcccccd);
            }
          }
        }
      }
      else {
        local_164 = (float *)&DAT_01b7bd48;
        local_168 = (float *)0x3080;
        iVar3 = FUN_00dd3500();
        if (iVar3 == 0) {
          local_164 = (float *)0x0;
        }
        else {
          local_164 = (float *)0x57afa8;
          local_164 = (float *)lib::StaticArray<RigidBodyList::ConnectMap,256>::
                               StaticArray<RigidBodyList::ConnectMap,256>();
        }
        *(float **)(param_1 + 0x7b4) = local_164;
        if (local_164 != (float *)0x0) {
          local_168 = (float *)0x57afc2;
          FUN_009fdd80();
          local_168 = (float *)0x57afce;
          local_164 = (float *)param_1;
          iVar3 = FUN_00923ff0();
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x7b4);
            if (iVar3 != 0) {
              local_164 = (float *)0x57afe7;
              lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
              local_168 = (float *)0x57afed;
              local_164 = (float *)iVar3;
              FUN_00dd4920();
              *(undefined4 *)(param_1 + 0x7b4) = 0;
            }
          }
          else {
            local_164 = (float *)0x57b006;
            fVar9 = (float10)FUN_00916de0();
            if ((float10)0 == fVar9) {
              local_164 = (float *)0x57b01c;
              FUN_00a805f0();
              return 1;
            }
            local_164 = (float *)0x1;
            local_168 = (float *)0x6;
            FUN_0091c3e0();
            local_164 = (float *)0x57b03e;
            fVar9 = (float10)FUN_00a13390();
            if (fVar9 < (float10)1.0 != (fVar9 == (float10)1.0)) {
              local_164 = (float *)0x8;
              local_168 = (float *)0x57b058;
              FUN_0091adf0();
              *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
              *(undefined4 *)(param_1 + 0x460) = 0x3f333333;
            }
            local_164 = (float *)0x20;
            local_168 = (float *)0x57b07b;
            FUN_0091adf0();
            local_164 = (float *)0x80;
            local_168 = (float *)0x57b08b;
            FUN_0091afb0();
            local_164 = (float *)0x57b096;
            FUN_0091caf0();
            local_164 = (float *)DAT_01885d20;
            local_168 = (float *)0x57b0a8;
            FUN_00912890();
            if (*(int *)(*(int *)(param_1 + 0x330) + 0xc4) == 0) {
              local_164 = (float *)&local_110;
              local_110 = 0;
              local_10c = 0xbf800000;
              local_108 = 0;
              local_168 = (float *)0x57b29e;
              FUN_0091ab40();
            }
            else {
              local_164 = (float *)0x57b0c5;
              fVar9 = (float10)FUN_00916de0();
              local_138 = (float)(fVar9 * (float10)10.0);
              local_164 = (float *)(float)(fVar9 * (float10)10.0);
              local_168 = (float *)0x57b0de;
              FUN_00921130();
              local_164 = &local_100;
              local_130 = local_138 * -1.0;
              local_12c = local_130 * 0.2;
              local_168 = (float *)0x57b108;
              local_128 = local_130;
              pfVar4 = (float *)FUN_0056d340();
              local_14c = pfVar4[1];
              if (((*pfVar4 == 0.0) && (local_14c == 0.0)) && (pfVar4[2] == 0.0)) {
                local_14c = 1.0;
              }
              local_150 = local_130 * *pfVar4;
              local_14c = local_12c * local_14c;
              local_148 = pfVar4[2] * local_128;
              local_144 = pfVar4[3] * local_124;
              local_164 = (float *)0x57b185;
              iVar3 = FUN_00a8e520();
              if (iVar3 != 0) {
                local_164 = (float *)0x57b192;
                piVar5 = (int *)FUN_00c13920();
                local_164 = (float *)0x0;
                local_168 = (float *)0x57b19c;
                iVar3 = (**(code **)(*piVar5 + 0x28))();
                if (iVar3 != 0) {
                  local_164 = (float *)0x57b1ab;
                  iVar3 = FUN_00a7c8a0();
                  if (iVar3 != 0) {
                    local_168 = &local_100;
                    local_164 = (float *)(SQRT(local_148 * local_148 +
                                               local_14c * local_14c + local_150 * local_150) * 3.0)
                    ;
                    pfVar4 = (float *)FUN_00a8b8a0();
                    local_150 = (local_150 + *pfVar4) * 0.5;
                    local_14c = (pfVar4[1] + local_14c) * 0.5;
                    local_148 = (pfVar4[2] + local_148) * 0.5;
                    local_144 = (pfVar4[3] + local_144) * 0.5;
                  }
                }
              }
              local_164 = &local_150;
              local_168 = (float *)0x57b236;
              FUN_0091ab40();
              local_130 = local_150 * 0.25;
              local_164 = &local_130;
              local_12c = local_14c * 0.25;
              local_128 = local_148 * 0.25;
              local_124 = local_144 * 0.25;
              local_168 = (float *)0x57b274;
              FUN_0091ac60();
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0x978) = 0;
      *(undefined4 *)(param_1 + 0x974) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x97c) = 0;
      return 1;
    }
  }
  return 0;
}

// 00AAF930  Em0220_Debris::Em0220_Debris  size=28  [class]
undefined4 * __fastcall Em0220_Debris::Em0220_Debris(undefined4 *param_1)

{
  BehaviorDebrisBase::BehaviorDebrisBase_4();
  *param_1 = vftable;
  param_1[0x25c] = 0;
  return param_1;
}

// 00AAF950  Em0220_Debris::vf04  size=6  [class]
undefined * Em0220_Debris::vf04(void)

{
  return &DAT_01b3500c;
}

// 00AB8610  Em0220_Debris::vf00  size=105  [class]
undefined4 * __thiscall Em0220_Debris::vf00(undefined4 *param_1,byte param_2)

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

