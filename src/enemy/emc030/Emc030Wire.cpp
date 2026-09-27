// src/enemy/emc030/Emc030Wire.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 007407D0..00AB9DA0, 14 functions

#include "types.h"

// 007407D0  Emc030Wire::vf44  size=16  [class]
void Emc030Wire::vf44(void)

{
  FUN_00a933e0();
  Behavior::vf44();
  return;
}

// 007407E0  Emc030Wire::vf50  size=28  [class]
void __fastcall Emc030Wire::vf50(int *param_1)

{
  FUN_00a93170();
  BehaviorAppBase::vf50();
                    /* WARNING: Could not recover jumptable at 0x007407fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}

// 00740800  Emc030Wire::vf14C  size=57  [class]
bool Emc030Wire::vf14C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_00a7c8a0();
  }
  if ((param_1 != 0x32) && (param_1 != 0x33)) {
    return false;
  }
  iVar1 = FUN_00a81330();
  return iVar1 != 0;
}

// 00740840  Emc030Wire::vf150  size=98  [class]
void Emc030Wire::vf150(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_1 == 0x32) {
      FUN_00a8caf0(2,0,0,0);
      return;
    }
    if (param_1 == 0x33) {
      FUN_00a8caf0(3,0,0,0);
    }
  }
  return;
}

// 007408B0  Emc030Wire::vf94  size=31  [class]
undefined4 Emc030Wire::vf94(void)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if ((DAT_018b9174 & 0xf00) == 0xd00) {
    uVar1 = 3;
  }
  return uVar1;
}

// 007408D0  Emc030Wire::vf98  size=6  [class]
undefined4 Emc030Wire::vf98(void)

{
  return 0x3030b;
}

// 00744DB0  Emc030Wire::vf40  size=194  [class]
undefined4 __fastcall Emc030Wire::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar2);
  *(undefined4 *)(param_1 + 0x640) = 2;
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(1);
  local_18 = 0x3f666666;
  local_14 = 0x3f99999a;
  local_10 = 0x3f8ccccd;
  local_c = 0x3e4ccccd;
  local_8 = 0x40400000;
  local_4 = 0x40000000;
  FUN_00a8e4d0(&local_c,&local_18);
  FUN_00a8caf0(0,0,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x4b0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(uVar2,0x3030b);
  return 1;
}

// 00744E80  Emc030Wire::vf130  size=260  [class]
int __thiscall Emc030Wire::vf130(int param_1,short *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *puVar7;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        iVar4 = FUN_00a7c8a0();
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_00a7c8a0();
          if (piVar5 != (int *)0x0) {
            puVar7 = &DAT_01b357d0;
            (**(code **)(*piVar5 + 4))(&DAT_01b357d0);
            iVar4 = FUN_00dd6d80(puVar7);
            if (iVar4 != 0) {
              puVar1 = *(undefined4 **)(iVar2 + 8);
              if (*param_2 == 0x16) {
                *puVar1 = 200;
                puVar1[1] = 1;
                puVar1[3] = 1;
                *(undefined1 *)(puVar1 + 4) = 0;
                puVar1[2] = 1;
                puVar1[0x23] = puVar1[0x23] | 0x2000;
                *(undefined1 *)((int)puVar1 + 0x11) = 3;
                puVar1[5] = *(undefined4 *)(param_1 + 0x4f0);
                uVar6 = FUN_00a7c7f0();
                FUN_00a7c960(uVar6);
              }
              else if (*param_2 == 0x17) {
                *puVar1 = 0xc9;
                puVar1[0x23] = puVar1[0x23] | 0x20000000;
                puVar1[0x24] = puVar1[0x24] | 0x2000000;
                puVar1[0x23] = puVar1[0x23] | 0x40000;
                puVar1[5] = iVar3;
                *(undefined1 *)((int)puVar1 + 0x11) = 7;
                return iVar2;
              }
              return iVar2;
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

// 00744F90  Emc030Wire::vf1A0  size=259  [class]
undefined4 Emc030Wire::vf1A0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  
  piVar4 = (int *)0x0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar6 = &DAT_01b357d0;
        (**(code **)(*piVar3 + 4))(&DAT_01b357d0);
        iVar2 = FUN_00dd6d80(puVar6);
        piVar4 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
      }
    }
  }
  piVar3 = (int *)FUN_00a7c8a0();
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  if (*param_1 == 200) {
    iVar2 = (**(code **)(*piVar3 + 0x14c))(0x32,iVar1);
    if ((iVar2 != 0) && (piVar4 != (int *)0x0)) {
      piVar5 = (int *)0x32;
      iVar2 = (**(code **)(*piVar4 + 0x14c))(0x32,param_2);
      if (iVar2 != 0) {
        (**(code **)(*piVar3 + 0x150))(0x32,iVar1);
        (**(code **)(*piVar4 + 0x150))(0x32,param_2);
        (**(code **)(*piVar5 + 0x150))(0x32,param_2);
        return 1;
      }
    }
  }
  return 0;
}

// 007450A0  FUN_007450a0  size=304  [callgraph]
void __fastcall FUN_007450a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if (((iVar1 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
     (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar4 = &DAT_01b357d0;
    (**(code **)(*piVar3 + 4))(&DAT_01b357d0);
    FUN_00dd6d80(puVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00ac4c70(1);
    FUN_00aa45f0(0x3030b,0x176,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac4c70(0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00ac4c70(1);
    FUN_00aa45f0(0x3030b,0x177,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac4c70(0);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  default:
    goto switchD_00745103_default;
  }
  (**(code **)(*param_1 + 100))();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00745103_default:
  return;
}

// 007451E0  FUN_007451e0  size=627  [callgraph]
void __fastcall FUN_007451e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  float fVar8;
  
  uVar4 = 0;
  iVar1 = FUN_00a81330();
  if (((iVar1 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
     (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar6 = &DAT_01b357d0;
    (**(code **)(*piVar3 + 4))(&DAT_01b357d0);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00ac4c70(1);
    FUN_00aa45f0(0x3030b,0x17f,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac4c70(0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    if (uVar4 != 0) {
      uVar7 = 0;
      FUN_00a92f90(0);
      fVar5 = (float10)FUN_00407b40(uVar7);
      fVar8 = (float)fVar5;
      uVar7 = 0;
      FUN_00a92f90(0,fVar8);
      FUN_00407b10(uVar7,fVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x007452c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  case 2:
    FUN_00ac4c70(1);
    FUN_00aa45f0(0x3030b,0x181,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac4c70(0);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    if (uVar4 != 0) {
      uVar7 = 0;
      FUN_00a92f90(0);
      fVar5 = (float10)FUN_00407b40(uVar7);
      fVar8 = (float)fVar5;
      uVar7 = 0;
      FUN_00a92f90(0,fVar8);
      FUN_00407b10(uVar7,fVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00745347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  case 4:
    FUN_00ac4c70(1);
    FUN_00aa45f0(0x3030b,0x182,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac4c70(0);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    if (uVar4 != 0) {
      uVar7 = 0;
      FUN_00a92f90(0);
      fVar5 = (float10)FUN_00407b40(uVar7);
      fVar8 = (float)fVar5;
      uVar7 = 0;
      FUN_00a92f90(0,fVar8);
      FUN_00407b10(uVar7,fVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x007453ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  case 6:
    FUN_00ac4c70(1);
    FUN_00aa45f0(0x3030b,0x183,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac4c70(0);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    if (uVar4 != 0) {
      uVar7 = 0;
      FUN_00a92f90(0);
      fVar5 = (float10)FUN_00407b40(uVar7);
      fVar8 = (float)fVar5;
      uVar7 = 0;
      FUN_00a92f90(0,fVar8);
      FUN_00407b10(uVar7,fVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x0074544d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  default:
    return;
  }
}

// 0074D630  Emc030Wire::vf4C  size=58  [class]
void __fastcall Emc030Wire::vf4C(int param_1)

{
  float10 fVar1;
  
  FUN_00a92fb0();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0xa04) = (float)fVar1;
  Behavior::vf4C();
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_007450a0();
    return;
  }
  if (*(int *)(param_1 + 0x618) == 2) {
    FUN_007451e0();
    return;
  }
  return;
}

// 00AB23C0  Emc030Wire::vf04  size=6  [class]
undefined * Emc030Wire::vf04(void)

{
  return &DAT_01b357d4;
}

// 00AB9DA0  Emc030Wire::vf00  size=105  [class]
undefined4 * __thiscall Emc030Wire::vf00(undefined4 *param_1,byte param_2)

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

