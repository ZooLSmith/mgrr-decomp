// src/misc/PowGaObjDLC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008439A0..00ABA050, 16 functions

#include "mgrr.h"
#include "PowGaObjDLC.h"

// 008439A0  PowGaObjDLC::vf44  size=58  [class]
void __fastcall PowGaObjDLC::vf44(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xa00) + 8))(0x3f800000,0,0);
  FUN_00a8c820();
  FUN_00a9d8a0();
  Behavior::vf44();
  return;
}

// 008439E0  PowGaObjDLC::vf48  size=29  [class]
void __fastcall PowGaObjDLC::vf48(int param_1)

{
  float10 fVar1;
  
  FUN_00a92fb0();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar1;
  BehaviorAppBase::vf48();
  return;
}

// 008477B0  PowGaObjDLC::vf40  size=361  [class]
undefined4 __fastcall PowGaObjDLC::vf40(int param_1)

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
  uVar2 = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0xad4) = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(uVar2,0x2070c);
  return 1;
}

// 00847920  PowGaObjDLC::vf50  size=39  [class]
void __fastcall PowGaObjDLC::vf50(int *param_1)

{
  switchD_0080dbae::default();
  BehaviorAppBase::vf50();
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00847943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))();
    return;
  }
  return;
}

// 00847950  FUN_00847950  size=188  [between]
void __fastcall FUN_00847950(int *param_1)

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

// 00847A10  FUN_00847a10  size=77  [between]
uint FUN_00847a10(void)

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

// 00847A60  FUN_00847a60  size=63  [between]
uint FUN_00847a60(void)

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
  puVar3 = &DAT_01b35ab8;
  (**(code **)(*piVar2 + 4))(&DAT_01b35ab8);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00847AA0  PowGaObjDLC::vf1A4  size=243  [class]
void __fastcall PowGaObjDLC::vf1A4(int param_1)

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
  puVar4 = &DAT_01b35ab8;
  (**(code **)(*piVar2 + 4))(&DAT_01b35ab8);
  iVar1 = FUN_00dd6d80(puVar4);
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 == 0) || (piVar2 = (int *)FUN_00a7c8a0(), piVar2 == (int *)0x0)) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b35ab8;
      (**(code **)(*piVar2 + 4))(&DAT_01b35ab8);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    iVar1 = *(int *)(param_1 + 0x4a4);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          *(undefined4 *)(uVar3 + 0x1798) = 1;
        }
        return;
      }
      *(undefined4 *)(uVar3 + 0x1794) = 1;
      return;
    }
    *(undefined4 *)(uVar3 + 0x1790) = 1;
    return;
  }
  return;
}

// 0084E160  PowGaObjDLC::getAttackInfo  size=676  [class]
int __thiscall PowGaObjDLC::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined *puVar8;
  uint local_8;
  
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if ((iVar3 == 0) || (iVar3 = CollisionAttackData::CollisionAttackData_3(), iVar3 == 0)) {
    FUN_00dd5650(&DAT_01648c34);
    return 0;
  }
  puVar1 = *(uint **)(iVar3 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  *puVar1 = (uint)*param_2;
  *(undefined2 *)(puVar1 + 0x21) = 0x5502;
  uVar7 = 0;
  uVar2 = 0;
  local_8 = 10;
  switch(*param_2) {
  case 4:
    *puVar1 = 0x182;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20001000;
    goto LAB_0084e211;
  case 5:
    *puVar1 = 0x182;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x401000;
LAB_0084e211:
    iVar5 = FUN_00847a60();
    if (iVar5 == 0) goto switchD_0084e1f7_default;
    uVar4 = 0x1e;
    FUN_00847a60(0x1e);
    uVar7 = FUN_00ac8520(uVar4);
    iVar5 = FUN_00847a60();
    (**(code **)(**(int **)(iVar5 + 0x754) + 0x10))(0x1e);
    iVar5 = FUN_00847a60();
    uVar2 = (**(code **)(**(int **)(iVar5 + 0x754) + 0x20))(0x1e);
    iVar5 = FUN_00847a60();
    uVar4 = 0x1e;
    break;
  case 6:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *puVar1 = 0x183;
    puVar1[0x23] = puVar1[0x23] | 0x20001000;
    uVar7 = 0x50;
    uVar2 = 1;
    iVar5 = FUN_00847a60();
    if (iVar5 == 0) goto switchD_0084e1f7_default;
    uVar4 = 0x34;
    FUN_00847a60(0x34);
    uVar7 = FUN_00ac8520(uVar4);
    iVar5 = FUN_00847a60();
    (**(code **)(**(int **)(iVar5 + 0x754) + 0x10))(0x34);
    iVar5 = FUN_00847a60();
    uVar2 = (**(code **)(**(int **)(iVar5 + 0x754) + 0x20))(0x34);
    iVar5 = FUN_00847a60();
    uVar4 = 0x34;
    break;
  case 7:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *puVar1 = 0x184;
    puVar1[0x23] = puVar1[0x23] | 0x20001000;
    uVar7 = 200;
    uVar2 = 1;
    iVar5 = FUN_00847a60();
    if (iVar5 == 0) goto switchD_0084e1f7_default;
    uVar4 = 0x36;
    FUN_00847a60(0x36);
    uVar7 = FUN_00ac8520(uVar4);
    iVar5 = FUN_00847a60();
    (**(code **)(**(int **)(iVar5 + 0x754) + 0x10))(0x36);
    iVar5 = FUN_00847a60();
    uVar2 = (**(code **)(**(int **)(iVar5 + 0x754) + 0x20))(0x36);
    iVar5 = FUN_00847a60();
    uVar4 = 0x36;
    break;
  default:
    goto switchD_0084e1f7_default;
  }
  local_8 = (**(code **)(**(int **)(iVar5 + 0x754) + 0x18))(uVar4);
switchD_0084e1f7_default:
  iVar5 = FUN_00a81330();
  if ((iVar5 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
    puVar8 = &DAT_01b35ab8;
    (**(code **)(*piVar6 + 4))(&DAT_01b35ab8);
    iVar5 = FUN_00dd6d80(puVar8);
    if (iVar5 != 0) {
      FUN_00847a60();
      FUN_00aa28e0();
      uVar7 = FUN_00fdbc60();
    }
  }
  puVar1[1] = uVar7;
  *(undefined1 *)(puVar1 + 4) = uVar2;
  puVar1[3] = 10;
  puVar1[2] = local_8;
  return iVar3;
}

// 0084E420  FUN_0084e420  size=298  [between]
void __fastcall FUN_0084e420(int param_1)

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
  iVar1 = FUN_00a82090("PowerGaizer",0x2c70c,&local_90);
  if (((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b35ab8;
    (**(code **)(*piVar2 + 4))(&DAT_01b35ab8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      FUN_00847a60();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b35abc;
        (**(code **)(*piVar2 + 4))(&DAT_01b35abc);
        FUN_00dd6d80(puVar4);
      }
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  return;
}

// 0084E550  FUN_0084e550  size=259  [between]
void __fastcall FUN_0084e550(int param_1)

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
  iVar1 = FUN_00a82090("PowerGaizer",0x2c70c,local_90);
  if (((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b35ab8;
    (**(code **)(*piVar2 + 4))(&DAT_01b35ab8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      FUN_00847a60();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b35abc;
        (**(code **)(*piVar2 + 4))(&DAT_01b35abc);
        FUN_00dd6d80(puVar4);
      }
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  return;
}

// 0084E660  FUN_0084e660  size=277  [between]
void __thiscall FUN_0084e660(int param_1,float param_2)

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
  iVar1 = FUN_00a82090("PowerGaizer",0x2c70c,local_90);
  if (((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01b35ab8;
    (**(code **)(*piVar2 + 4))(&DAT_01b35ab8);
    iVar1 = FUN_00dd6d80(puVar5);
    if (iVar1 != 0) {
      FUN_00847a60();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar5 = &DAT_01b35abc;
        (**(code **)(*piVar2 + 4))(&DAT_01b35abc);
        FUN_00dd6d80(puVar5);
      }
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  return;
}

// 0084E780  PowGaObjDLC::vf19C  size=179  [class]
void __thiscall PowGaObjDLC::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00859000  PowGaObjDLC::vf4C  size=224  [class]
void __fastcall PowGaObjDLC::vf4C(int *param_1)

{
  float fVar1;
  
  if (param_1[0x2ac] == 0) {
    Behavior::vf4C();
    switch(param_1[0x186]) {
    case 1:
      FUN_00855ba0();
      break;
    case 2:
      FUN_00847950();
      break;
    case 3:
      FUN_00853a60();
      break;
    case 4:
      FUN_00855ef0();
      break;
    case 5:
      FUN_00853e10();
      break;
    case 6:
      FUN_00856150();
      break;
    case 7:
      FUN_00856310();
    }
                    /* WARNING: Could not recover jumptable at 0x008590da. Too many branches */
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
    FUN_009fdde0();
    return;
  }
  return;
}

// 00AB3EA0  PowGaObjDLC::vf04  size=6  [class]
undefined * PowGaObjDLC::vf04(void)

{
  return &DAT_01b35abc;
}

// 00ABA050  PowGaObjDLC::vf00  size=30  [class]
undefined4 __thiscall PowGaObjDLC::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

