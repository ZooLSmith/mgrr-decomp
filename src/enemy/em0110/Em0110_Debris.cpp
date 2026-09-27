// src/enemy/em0110/Em0110_Debris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B7570..00AB8920, 13 functions

#include "mgrr.h"
#include "Em0110_Debris.h"

// 004B7570  Em0110_Debris::vf44  size=61  [class]
void __fastcall Em0110_Debris::vf44(int param_1)

{
  int iVar1;
  
  FUN_00a8c820();
  FUN_00a9d8a0();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 004B75B0  Em0110_Debris::vf48  size=1  [class]
void Em0110_Debris::vf48(void)

{
  return;
}

// 004B75C0  Em0110_Debris::vf4C  size=397  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em0110_Debris::vf4C(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  Behavior::vf4C();
  iVar2 = FUN_00a8e520();
  if ((iVar2 == 0) && (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0)) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  piVar3 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  iVar2 = FUN_00a8cab0();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x97c) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x980) = 0x3dcccccd;
  }
  else if (iVar2 == 1) {
    iVar2 = FUN_00a8e520();
    if (iVar2 != 0) goto LAB_004b76f1;
    if (*(int *)(param_1 + 0x7b4) != 0) {
      FUN_009166f0(0x3d0f5c29);
      FUN_00916830(0x3c23d70a);
    }
  }
  else {
    if ((iVar2 != 2) || (iVar2 = FUN_00a8c760(0xb), iVar2 == 0)) goto LAB_004b76f1;
    if (*(int *)(param_1 + 0x7b4) != 0) {
      uStack_24 = 0;
      uStack_20 = 0xbd4ccccd;
      uStack_1c = 0;
      FUN_0091ab40(&uStack_24);
      FUN_009166f0(0x40a00000);
      FUN_00916830(0x40a00000);
    }
  }
  *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
LAB_004b76f1:
  iVar2 = FUN_00a8e520();
  if ((iVar2 == 0) && (2 < *(int *)(param_1 + 0x618))) {
    fVar1 = *(float *)(param_1 + 0x97c) - _DAT_01be942c;
    *(float *)(param_1 + 0x97c) = fVar1;
    if ((*(int *)(param_1 + 0x7b4) != 0) && (0.0 < fVar1)) {
      FUN_009126e0();
      *(undefined4 *)(param_1 + 0x970) = 0;
      return;
    }
  }
  *(int *)(param_1 + 0x970) = iVar2;
  return;
}

// 004B7750  Em0110_Debris::vf50  size=27  [class]
void __fastcall Em0110_Debris::vf50(int param_1)

{
  Behavior::vf50();
  if (*(int *)(param_1 + 0x974) == 0) {
    FUN_00a93170();
    return;
  }
  return;
}

// 004B7770  Em0110_Debris::vf54  size=43  [class]
void __fastcall Em0110_Debris::vf54(int param_1)

{
  Behavior::vf54();
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x974) != 0)) {
    FUN_0091e980(param_1);
    switchD_0080dbae::default();
    return;
  }
  return;
}

// 004B77A0  Em0110_Debris::thunk_vf114  size=5  [class]
void Em0110_Debris::thunk_vf114(void)

{
  return;
}

// 004B77C0  Em0110_Debris::vf1B8  size=31  [class]
void Em0110_Debris::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42114;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 004B77E0  Em0110_Debris::vf30  size=5  [class]
void __fastcall Em0110_Debris::vf30(int param_1)

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

// 004B77F0  Em0110_Debris::vf1BC  size=62  [class]
void __thiscall Em0110_Debris::vf1BC(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  Bh0064::vf1BC(param_2);
  uVar1 = FUN_009f8b40();
  FUN_009f8ae0(uVar1);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    uVar1 = FUN_009f8b40();
    FUN_0091c760(uVar1);
  }
  return;
}

// 004D8DD0  Em0110_Debris::vf40  size=1016  [class]
undefined4 __fastcall Em0110_Debris::vf40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  iVar5 = Behavior::startup();
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x928) = 1;
    local_2c = 0.0;
    local_28 = 0.0;
    local_30 = 1.4013e-45;
    iVar5 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_30);
    if (iVar5 != 0) {
      uVar9 = 3;
      FUN_00a92fb0(3);
      FUN_00e08640(uVar9);
      fVar8 = (float10)FUN_00a13390();
      puVar4 = *(undefined4 **)(param_1 + 0x370);
      if (fVar8 < (float10)0.5 == (fVar8 == (float10)0.5)) {
        if (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) < 10) {
          if (puVar4 != (undefined4 *)0x0) {
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
            *puVar4 = 0;
          }
          FUN_009fd240();
        }
        else if (puVar4 != (undefined4 *)0x0) {
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
          *puVar4 = 1;
        }
      }
      else if (puVar4 != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
        *puVar4 = 1;
      }
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
        if (iVar5 != 0) {
          FUN_009fdd80(iVar5);
          iVar5 = FUN_00923ff0(param_1);
          if (iVar5 == 0) {
            FUN_00dd5650(&DAT_0163f3ec);
          }
          else {
            fVar8 = (float10)FUN_00916de0();
            if ((float10)0 != fVar8) {
              FUN_0091c3e0(6,1);
              fVar8 = (float10)FUN_00a13390();
              if (fVar8 < (float10)1.0 != (fVar8 == (float10)1.0)) {
                FUN_0091adf0(8);
                *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
                *(undefined4 *)(param_1 + 0x460) = 0x3f333333;
              }
              FUN_0091adf0(0x20);
              FUN_0091afb0(0x80);
              *(undefined4 *)(param_1 + 0x974) = 1;
              FUN_0091caf0();
              if (*(int *)(*(int *)(param_1 + 0x330) + 0xc4) == 0) {
                *(undefined4 *)(param_1 + 0x990) = 0;
                *(undefined4 *)(param_1 + 0x994) = 0xbf800000;
                *(undefined4 *)(param_1 + 0x998) = 0;
              }
              else {
                fVar8 = (float10)FUN_00916de0();
                fVar8 = fVar8 * (float10)-0.4;
                local_30 = (float)fVar8;
                local_2c = (float)((float10)0.1 * fVar8);
                local_28 = (float)fVar8;
                pfVar6 = (float *)FUN_004bdc40(local_20);
                fVar1 = pfVar6[1];
                fVar2 = pfVar6[2];
                fVar3 = pfVar6[3];
                if (((*pfVar6 == 0.0) && (fVar1 == 0.0)) && (fVar2 == 0.0)) {
                  fVar1 = 1.0;
                }
                *(float *)(param_1 + 0x990) = local_30 * *pfVar6;
                *(float *)(param_1 + 0x994) = local_2c * fVar1;
                *(float *)(param_1 + 0x998) = fVar2 * local_28;
                *(float *)(param_1 + 0x99c) = fVar3 * local_24;
              }
              pfVar7 = (float *)(param_1 + 0x990);
              pfVar6 = (float *)FUN_00a8b8a0(local_20,0xbe19999a);
              *pfVar7 = *pfVar6 + *pfVar7;
              *(float *)(param_1 + 0x994) = pfVar6[1] + *(float *)(param_1 + 0x994);
              *(float *)(param_1 + 0x998) = pfVar6[2] + *(float *)(param_1 + 0x998);
              *(float *)(param_1 + 0x99c) = pfVar6[3] + *(float *)(param_1 + 0x99c);
              iVar5 = FUN_00a8e520();
              if (iVar5 == 0) {
                local_30 = *pfVar7 * 0.5;
                local_2c = *(float *)(param_1 + 0x994) * 0.5;
                local_28 = *(float *)(param_1 + 0x998) * 0.5;
                local_24 = *(float *)(param_1 + 0x99c) * 0.5;
                FUN_0091ab40(&local_30);
                local_30 = *pfVar7 * 0.1;
                local_2c = *(float *)(param_1 + 0x994) * 0.1;
                local_28 = *(float *)(param_1 + 0x998) * 0.1;
                local_24 = *(float *)(param_1 + 0x99c) * 0.1;
                FUN_0091ac60(&local_30);
                *(undefined4 *)(param_1 + 0x618) = 3;
                *(undefined4 *)(param_1 + 0x97c) = 0x42f00000;
              }
              else if (*(int *)(param_1 + 0x7b4) != 0) {
                FUN_0091ab40(pfVar7);
                local_30 = *pfVar7 * 0.1;
                local_2c = *(float *)(param_1 + 0x994) * 0.1;
                local_28 = *(float *)(param_1 + 0x998) * 0.1;
                local_24 = *(float *)(param_1 + 0x99c) * 0.1;
                FUN_0091ac60(&local_30);
                FUN_009166f0(0x3f000000);
                FUN_00916830(0x3d4ccccd);
              }
              FUN_00912890(DAT_01885d20);
              goto LAB_004d91ab;
            }
          }
          FUN_00a805f0();
          return 1;
        }
      }
LAB_004d91ab:
      *(undefined4 *)(param_1 + 0x97c) = 0;
      uVar9 = FUN_00a8e520();
      *(undefined4 *)(param_1 + 0x970) = uVar9;
      return 1;
    }
  }
  return 0;
}

// 00AAFD20  Em0110_Debris::Em0110_Debris  size=18  [class]
undefined4 * __fastcall Em0110_Debris::Em0110_Debris(undefined4 *param_1)

{
  BehaviorDebrisBase::BehaviorDebrisBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00AAFD40  Em0110_Debris::vf04  size=6  [class]
undefined * Em0110_Debris::vf04(void)

{
  return &DAT_01b34e9c;
}

// 00AB8920  Em0110_Debris::vf00  size=105  [class]
undefined4 * __thiscall Em0110_Debris::vf00(undefined4 *param_1,byte param_2)

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

