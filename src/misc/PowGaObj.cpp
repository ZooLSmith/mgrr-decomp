// src/misc/PowGaObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B0900..00AB7660, 16 functions

#include "mgrr.h"
#include "PowGaObj.h"

// 005B0900  PowGaObj::vf44  size=58  [class]
void __fastcall PowGaObj::vf44(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xa00) + 8))(0x3f800000,0,0);
  FUN_00a8c820();
  FUN_00a9d8a0();
  Behavior::vf44();
  return;
}

// 005B0940  PowGaObj::vf48  size=29  [class]
void __fastcall PowGaObj::vf48(int param_1)

{
  float10 fVar1;
  
  FUN_00a92fb0();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar1;
  BehaviorAppBase::vf48();
  return;
}

// 005B7320  PowGaObj::startup  size=325  [class]
undefined4 __fastcall PowGaObj::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorAppBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0x640) = 2;
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
  FUN_00a8d280();
  uVar2 = 2;
  FUN_00a92fb0(2);
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
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00a8caf0(2,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 2) {
    FUN_00a8caf0(3,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 3) {
    FUN_00a8caf0(4,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 4) {
    FUN_00a8caf0(5,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 5) {
    FUN_00a8caf0(6,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 6) {
    FUN_00a8caf0(7,0,0,0);
  }
  *(undefined4 *)(param_1 + 0xad4) = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  return 1;
}

// 005B7470  PowGaObj::vf50  size=39  [class]
void __fastcall PowGaObj::vf50(int *param_1)

{
  switchD_0080dbae::default();
  BehaviorAppBase::vf50();
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005b7493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))();
    return;
  }
  return;
}

// 005B74A0  FUN_005b74a0  size=188  [between]
void __fastcall FUN_005b74a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_00a9f3c0(param_1 + 0x125,1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x2ad] = 0x42700000;
    param_1[0x186] = 0;
    param_1[0x2ac] = 1;
    (*pcVar1)();
    FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  }
  return;
}

// 005B7560  FUN_005b7560  size=77  [between]
uint FUN_005b7560(void)

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
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 005B75B0  FUN_005b75b0  size=63  [between]
uint FUN_005b75b0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b351c0;
  (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 005B75F0  PowGaObj::vf1A4  size=243  [class]
void __fastcall PowGaObj::vf1A4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
  }
  *(undefined4 *)(param_1 + 0xad4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x220))(0x42700000);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return;
  }
  puVar4 = &DAT_01b351c0;
  (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
  iVar1 = FUN_00dd6d80(puVar4);
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 == 0) || (piVar2 = (int *)FUN_00a7c8a0(), piVar2 == (int *)0x0)) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b351c0;
      (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    iVar1 = *(int *)(param_1 + 0x4a4);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          *(undefined4 *)(uVar3 + 0x16ac) = 1;
        }
        return;
      }
      *(undefined4 *)(uVar3 + 0x16a8) = 1;
      return;
    }
    *(undefined4 *)(uVar3 + 0x16a4) = 1;
    return;
  }
  return;
}

// 005BD8A0  PowGaObj::getAttackInfo  size=576  [class]
int __thiscall PowGaObj::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint local_8;
  
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if ((iVar3 == 0) || (iVar3 = CollisionAttackData::CollisionAttackData(), iVar3 == 0)) {
    FUN_00dd5650(&DAT_016432a8);
    return 0;
  }
  puVar1 = *(uint **)(iVar3 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  *puVar1 = (uint)*param_2;
  *(undefined2 *)(puVar1 + 0x21) = 0x5502;
  uVar6 = 0;
  uVar2 = 0;
  local_8 = 10;
  switch(*param_2) {
  case 4:
    *puVar1 = 0x182;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20001000;
    goto LAB_005bd94d;
  case 5:
    *puVar1 = 0x182;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x401000;
LAB_005bd94d:
    iVar5 = FUN_005b75b0();
    if (iVar5 == 0) goto switchD_005bd933_default;
    uVar4 = 0x1e;
    FUN_005b75b0(0x1e);
    uVar6 = FUN_00ac8520(uVar4);
    iVar5 = FUN_005b75b0();
    (**(code **)(**(int **)(iVar5 + 0x754) + 0x10))(0x1e);
    iVar5 = FUN_005b75b0();
    uVar2 = (**(code **)(**(int **)(iVar5 + 0x754) + 0x20))(0x1e);
    iVar5 = FUN_005b75b0();
    uVar4 = 0x1e;
    break;
  case 6:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *puVar1 = 0x183;
    puVar1[0x23] = puVar1[0x23] | 0x20001000;
    uVar6 = 0x50;
    uVar2 = 1;
    iVar5 = FUN_005b75b0();
    if (iVar5 == 0) goto switchD_005bd933_default;
    uVar4 = 0x34;
    FUN_005b75b0(0x34);
    uVar6 = FUN_00ac8520(uVar4);
    iVar5 = FUN_005b75b0();
    (**(code **)(**(int **)(iVar5 + 0x754) + 0x10))(0x34);
    iVar5 = FUN_005b75b0();
    uVar2 = (**(code **)(**(int **)(iVar5 + 0x754) + 0x20))(0x34);
    iVar5 = FUN_005b75b0();
    uVar4 = 0x34;
    break;
  case 7:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *puVar1 = 0x184;
    puVar1[0x23] = puVar1[0x23] | 0x20001000;
    uVar6 = 200;
    uVar2 = 1;
    iVar5 = FUN_005b75b0();
    if (iVar5 == 0) goto switchD_005bd933_default;
    uVar4 = 0x36;
    FUN_005b75b0(0x36);
    uVar6 = FUN_00ac8520(uVar4);
    iVar5 = FUN_005b75b0();
    (**(code **)(**(int **)(iVar5 + 0x754) + 0x10))(0x36);
    iVar5 = FUN_005b75b0();
    uVar2 = (**(code **)(**(int **)(iVar5 + 0x754) + 0x20))(0x36);
    iVar5 = FUN_005b75b0();
    uVar4 = 0x36;
    break;
  default:
    goto switchD_005bd933_default;
  }
  local_8 = (**(code **)(**(int **)(iVar5 + 0x754) + 0x18))(uVar4);
switchD_005bd933_default:
  puVar1[1] = uVar6;
  puVar1[3] = 10;
  *(undefined1 *)(puVar1 + 4) = uVar2;
  puVar1[2] = local_8;
  return iVar3;
}

// 005BDAF0  FUN_005bdaf0  size=298  [between]
void __fastcall FUN_005bdaf0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_1 + 0x40);
  local_8c = *(undefined4 *)(param_1 + 0x4a4);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_38 = *(undefined4 *)(param_1 + 0x48);
  local_90 = 1;
  local_34 = *(undefined4 *)(param_1 + 0x90);
  local_30 = *(undefined4 *)(param_1 + 0x94);
  local_2c = *(undefined4 *)(param_1 + 0x98);
  if (*(int *)(param_1 + 0x4a0) == 2) {
    local_90 = 3;
  }
  if (*(int *)(param_1 + 0x4a0) == 4) {
    local_90 = 5;
  }
  iVar1 = FUN_00a82090("PowerGaizer",0x2070c,&local_90);
  if (((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b351c0;
    (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      FUN_005b75b0();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b351c8;
        (**(code **)(*piVar2 + 4))(&DAT_01b351c8);
        FUN_00dd6d80(puVar4);
      }
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  return;
}

// 005BDC20  FUN_005bdc20  size=259  [between]
void __fastcall FUN_005bdc20(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_90 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_1 + 0x40);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_38 = *(undefined4 *)(param_1 + 0x48);
  local_34 = *(undefined4 *)(param_1 + 0x90);
  local_90[0] = 6;
  local_30 = *(undefined4 *)(param_1 + 0x94);
  local_2c = *(undefined4 *)(param_1 + 0x98);
  iVar1 = FUN_00a82090("PowerGaizer",0x2070c,local_90);
  if (((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b351c0;
    (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      FUN_005b75b0();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b351c8;
        (**(code **)(*piVar2 + 4))(&DAT_01b351c8);
        FUN_00dd6d80(puVar4);
      }
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  return;
}

// 005BDD30  FUN_005bdd30  size=277  [between]
void __thiscall FUN_005bdd30(int param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined4 local_90 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_1 + 0x40);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_90[0] = 4;
  local_38 = *(undefined4 *)(param_1 + 0x48);
  local_34 = *(undefined4 *)(param_1 + 0x90);
  local_30 = *(float *)(param_1 + 0x94);
  local_2c = *(undefined4 *)(param_1 + 0x98);
  fVar4 = (float10)FUN_00ddba30(local_30 + param_2);
  local_30 = (float)fVar4;
  iVar1 = FUN_00a82090("PowerGaizer",0x2070c,local_90);
  if (((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01b351c0;
    (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
    iVar1 = FUN_00dd6d80(puVar5);
    if (iVar1 != 0) {
      FUN_005b75b0();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar5 = &DAT_01b351c8;
        (**(code **)(*piVar2 + 4))(&DAT_01b351c8);
        FUN_00dd6d80(puVar5);
      }
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  return;
}

// 005BDE50  PowGaObj::vf19C  size=179  [class]
void __thiscall PowGaObj::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 005C6450  PowGaObj::vf4C  size=224  [class]
void __fastcall PowGaObj::vf4C(int *param_1)

{
  float fVar1;
  
  if (param_1[0x2ac] == 0) {
    Behavior::vf4C();
    switch(param_1[0x186]) {
    case 1:
      FUN_005c41f0();
      break;
    case 2:
      FUN_005b74a0();
      break;
    case 3:
      FUN_005c1d50();
      break;
    case 4:
      FUN_005c4540();
      break;
    case 5:
      FUN_005c2100();
      break;
    case 6:
      FUN_005c47a0();
      break;
    case 7:
      FUN_005c4960();
    }
                    /* WARNING: Could not recover jumptable at 0x005c652a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  }
  (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 100))();
  fVar1 = (float)param_1[0x2ad];
  param_1[0x2ad] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x2a6] == 0)) {
    (**(code **)(param_1[0x280] + 8))(0x3f800000,0,0);
    param_1[0x2ac] = 0;
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  return;
}

// 00AAE950  PowGaObj::vf04  size=6  [class]
undefined * PowGaObj::vf04(void)

{
  return &DAT_01b351c8;
}

// 00AB7660  PowGaObj::destruct  size=30  [class]
undefined4 __thiscall PowGaObj::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

