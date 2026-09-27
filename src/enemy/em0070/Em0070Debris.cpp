// src/enemy/em0070/Em0070Debris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00467E90..00AB85A0, 14 functions

#include "mgrr.h"
#include "Em0070Debris.h"

// 00467E90  Em0070Debris::thunk_vf50  size=5  [class]
void __fastcall Em0070Debris::thunk_vf50(int param_1)

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

// 00467EA0  Em0070Debris::vf114  size=35  [class]
void __thiscall Em0070Debris::vf114(int *param_1,int param_2)

{
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  return;
}

// 00467ED0  Em0070Debris::vf30  size=209  [class]
void __fastcall Em0070Debris::vf30(int param_1)

{
  int iVar1;
  
  Bh0064::vf30();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x34) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x38) = *(undefined4 *)(param_1 + 0x87c);
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x890);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x894);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x898);
    *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x89c);
  }
  iVar1 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_1 + 0x694);
  *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(param_1 + 0x698);
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(param_1 + 0x69c);
  *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xd0) = *(undefined4 *)(param_1 + 0x6a0);
  iVar1 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_1 + 0x6a4);
  *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0x6a8);
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(param_1 + 0x6ac);
  *(undefined1 *)(*(int *)(param_1 + 0x588) + 0xe0) = *(undefined1 *)(param_1 + 0x6b0);
  return;
}

// 00467FB0  Em0070Debris::setCutCrerateInfo  size=31  [class]
void Em0070Debris::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42070;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0046F580  Em0070Debris::vf44  size=54  [class]
void __fastcall Em0070Debris::vf44(int param_1)

{
  int iVar1;
  
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 0046F5C0  Em0070Debris::vf48  size=55  [class]
void __fastcall Em0070Debris::vf48(int param_1)

{
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x878) != 0)) {
    FUN_00912890(DAT_01885d20);
    *(undefined4 *)(param_1 + 0x870) = 1;
    *(undefined4 *)(param_1 + 0x878) = 0;
  }
  return;
}

// 0046F600  FUN_0046f600  size=192  [callgraph]
void __fastcall FUN_0046f600(int param_1)

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

// 0046F6C0  FUN_0046f6c0  size=362  [callgraph]
float * __thiscall FUN_0046f6c0(int param_1,float *param_2)

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

// 00476350  Em0070Debris::vf4C  size=1041  [class]
void __fastcall Em0070Debris::vf4C(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  undefined *puVar8;
  float fStack_58;
  float local_54;
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
  float afStack_24 [2];
  float fStack_1c;
  float fStack_18;
  
  Behavior::vf4C();
  FUN_00a92fb0();
  fVar7 = (float10)FUN_00e049b0();
  local_54 = (float)fVar7;
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar8);
      uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
    }
  }
  uVar5 = FUN_00a8cab0();
  switch(uVar5) {
  case 0:
    param_1[0x186] = param_1[0x186] + 1;
    param_1[0x220] = 0;
    return;
  case 1:
    if (DAT_01bea740 != 0) {
      if (param_1[0x1ed] != 0) {
        FUN_009166f0(0x3f800000);
      }
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 2:
    if (((uVar4 != 0) && (param_1[0x1ed] != 0)) && (iVar3 = FUN_00a12210(0xf00), iVar3 != 0)) {
      fStack_44 = *(float *)(iVar3 + 0x40) - (float)param_1[0x224];
      iVar6 = 0;
      fStack_40 = *(float *)(iVar3 + 0x44) - (float)param_1[0x225];
      fStack_3c = *(float *)(iVar3 + 0x48) - (float)param_1[0x226];
      fStack_38 = *(float *)(iVar3 + 0x4c) - (float)param_1[0x227];
      if (0 < *(int *)(param_1[0x1ed] + 0xc)) {
        do {
          FUN_00912660(&fStack_58,iVar6);
          if (fStack_58 != 0.0) {
            FUN_00912300(&fStack_44);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1[0x1ed] + 0xc));
      }
    }
    param_1[0x186] = param_1[0x186] + 1;
    return;
  case 3:
    fVar1 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar1 + fStack_58);
    if ((80.0 < fVar1 + fStack_58) || ((uVar4 != 0 && (iVar3 = FUN_00a8c760(0xb), iVar3 != 0)))) {
      if (param_1[0x1ed] != 0) {
        FUN_009166f0(0x41f00000);
        FUN_0046f6c0(&local_54);
        fVar7 = (float10)FUN_00916de0();
        fStack_44 = (float)((float10)7.5 * fVar7);
        fStack_40 = (float)(fVar7 * (float10)-20.0);
        fStack_3c = (float)((float10)7.5 * fVar7);
        if ((uVar4 != 0) && (iVar3 = FUN_00a12210(0xf00), iVar3 != 0)) {
          FUN_00916d50(afStack_24);
          local_54 = afStack_24[0] - *(float *)(iVar3 + 0x40);
          fStack_4c = fStack_1c - *(float *)(iVar3 + 0x48);
          fStack_48 = fStack_18 - *(float *)(iVar3 + 0x4c);
        }
        fStack_50 = 1.0;
        fVar1 = fStack_4c * fStack_4c + local_54 * local_54 + 1.0;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_54,&local_54);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_4c = 0.0;
          local_54 = 0.0;
          fStack_50 = 1.0;
        }
        local_54 = local_54 * fStack_44;
        fStack_50 = fStack_50 * fStack_40;
        fStack_4c = fStack_4c * fStack_3c;
        fStack_48 = fStack_38 * fStack_48;
        FUN_0091ab40(&local_54);
        fStack_34 = local_54 * 0.25;
        fStack_30 = fStack_50 * 0.25;
        fStack_2c = fStack_4c * 0.25;
        fStack_28 = fStack_48 * 0.25;
        FUN_0091ac60(&fStack_34);
      }
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 4:
    fVar7 = (float10)FUN_00dde300(0,0x425c0000);
    param_1[0x186] = param_1[0x186] + 1;
    param_1[0x220] = (int)(float)(fVar7 + (float10)25.0);
    return;
  case 5:
    fVar1 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar1 - fStack_58);
    if (fVar1 - fStack_58 < 0.0) {
      param_1[0x220] = 0;
      fVar7 = (float10)FUN_00a13390();
      if ((float10)2.0 <= fVar7) {
        FUN_0046f600();
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
    fVar1 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar1 + fStack_58);
    if (600.0 < fVar1 + fStack_58) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00476790  Em0070Debris::vf54  size=440  [class]
void __fastcall Em0070Debris::vf54(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float10 fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  Behavior::vf54();
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x870) != 0)) {
    FUN_0091e980(param_1);
    switchD_0080dbae::default();
  }
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x870) == 0)) {
    FUN_004066f0();
    FUN_009174c0();
    *(undefined4 *)(param_1 + 0x874) = 1;
    if (*(int *)(param_1 + 0x7b4) != 0) {
      *(undefined4 *)(param_1 + 0x878) = 1;
    }
    fVar3 = (float10)FUN_00916de0();
    fVar3 = fVar3 * (float10)-1.0;
    local_30 = (float)fVar3;
    local_2c = (float)((float10)0.2 * fVar3);
    local_28 = (float)fVar3;
    pfVar2 = (float *)FUN_0046f6c0(local_20);
    local_3c = pfVar2[1];
    if (((*pfVar2 == 0.0) && (local_3c == 0.0)) && (pfVar2[2] == 0.0)) {
      local_3c = 1.0;
    }
    local_40 = local_30 * *pfVar2;
    local_3c = local_2c * local_3c;
    local_38 = pfVar2[2] * local_28;
    local_34 = pfVar2[3] * local_24;
    FUN_0091ab40(&local_40);
    local_30 = local_40 * 0.1;
    local_2c = local_3c * 0.1;
    local_28 = local_38 * 0.1;
    local_24 = local_34 * 0.1;
    FUN_0091ac60(&local_30);
    *(undefined4 *)(param_1 + 0x870) = 1;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 0047B5B0  Em0070Debris::startup  size=665  [class]
undefined4 __fastcall Em0070Debris::startup(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    local_8 = 0;
    local_4 = 0;
    local_c = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      uVar3 = 3;
      *(undefined4 *)(param_1 + 0x878) = 0;
      FUN_00a92fb0(3);
      FUN_00e08640(uVar3);
      iVar1 = FUN_009f8d30();
      if (iVar1 == 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      else {
        iVar1 = FUN_00dd3500(0x3080,&DAT_01b7bd48);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = lib::StaticArray<RigidBodyList::ConnectMap,256>::
                  StaticArray<RigidBodyList::ConnectMap,256>();
        }
        *(undefined4 *)(param_1 + 0x7b4) = uVar3;
        FUN_009fdd80(uVar3);
        FUN_00923ff0(param_1);
        fVar2 = (float10)FUN_00916de0();
        if ((float10)0 == fVar2) {
          FUN_00a805f0();
          return 1;
        }
        FUN_0091c3e0(6,1);
        fVar2 = (float10)FUN_00a13390();
        if (fVar2 < (float10)1.0 != (fVar2 == (float10)1.0)) {
          FUN_0091adf0(8);
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
          *(undefined4 *)(param_1 + 0x460) = 0x3f333333;
        }
        FUN_0091adf0(0x20);
        FUN_0091afb0(0x80);
        FUN_0091adf0(0x200000);
        FUN_0091c130(0);
        iVar1 = *(int *)(param_1 + 0x588);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x34) != 0) {
            FUN_0091c760(*(undefined4 *)(iVar1 + 0x38));
            iVar1 = *(int *)(param_1 + 0x588);
            *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(iVar1 + 0x38);
          }
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(iVar1 + 0x50);
            *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(iVar1 + 0x54);
            *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(iVar1 + 0x58);
            *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(iVar1 + 0x5c);
          }
        }
        iVar1 = *(int *)(param_1 + 0x588);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x98) != 0)) {
          FUN_0091c550(0x21,*(undefined4 *)(iVar1 + 0x9c));
          FUN_0091c550(0x22,*(undefined4 *)(*(int *)(param_1 + 0x588) + 0x9c));
        }
        iVar1 = *(int *)(param_1 + 0x588);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(iVar1 + 0xc4);
          *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(iVar1 + 200);
          *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(iVar1 + 0xcc);
          iVar1 = *(int *)(param_1 + 0x588);
          *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(iVar1 + 0xd0);
          *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(iVar1 + 0xd4);
          *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(iVar1 + 0xd8);
          *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(iVar1 + 0xdc);
          *(undefined1 *)(param_1 + 0x6b0) = *(undefined1 *)(*(int *)(param_1 + 0x588) + 0xe0);
          return 1;
        }
      }
      return 1;
    }
  }
  return 0;
}

// 00AA6C10  Em0070Debris::Em0070Debris  size=18  [class]
undefined4 * __fastcall Em0070Debris::Em0070Debris(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA6C30  Em0070Debris::vf04  size=6  [class]
undefined * Em0070Debris::vf04(void)

{
  return &DAT_01b34d58;
}

// 00AB85A0  Em0070Debris::destruct  size=105  [class]
undefined4 * __thiscall Em0070Debris::destruct(undefined4 *param_1,byte param_2)

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
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

