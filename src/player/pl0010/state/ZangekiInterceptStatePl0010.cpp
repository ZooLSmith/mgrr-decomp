// src/player/pl0010/state/ZangekiInterceptStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83520..00BFF980, 9 functions

#include "types.h"

// 00B83520  ZangekiInterceptStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiInterceptStatePl0010::vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 00B83530  ZangekiInterceptStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiInterceptStatePl0010::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 00B83540  ZangekiInterceptStatePl0010::vf24  size=19  [class]
bool ZangekiInterceptStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83580  ZangekiInterceptStatePl0010::vf00  size=6  [class]
undefined * ZangekiInterceptStatePl0010::vf00(void)

{
  return &DAT_01be9ed0;
}

// 00B91830  ZangekiInterceptStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiInterceptStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB6B30  ZangekiInterceptStatePl0010::vf20  size=259  [class]
undefined4 __thiscall ZangekiInterceptStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = StateMachineNode::vf20(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  *(undefined4 *)(uVar2 + 0x40c8) = 0;
  *(undefined4 *)(uVar2 + 0x341c) = 0;
  *(undefined4 *)(uVar4 + 0x2fc) = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar5 = &DAT_01b35260;
      (**(code **)(*piVar3 + 4))(&DAT_01b35260);
      iVar1 = FUN_00dd6d80(puVar5);
      if (iVar1 != 0) {
        FUN_005ca330(0x3f800000);
      }
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(uVar4 + 0x38c) != 0) {
      FUN_005edc60(0x40400000);
    }
    if (*(int *)(uVar4 + 0x390) != 0) {
      FUN_005edc60(0x40400000);
    }
  }
  return 1;
}

// 00BCFB70  ZangekiInterceptStatePl0010::vf08  size=287  [class]
undefined4 __thiscall ZangekiInterceptStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar3 + 0x40c8) = 0x14;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar3 + 0x4c4) != 1) {
    FUN_00b92d70(param_2);
    *(undefined4 *)(uVar3 + 0x4c4) = 1;
    FUN_00e5e1b0("bgm_Zangeki_SP_Enter");
  }
  FUN_00bbc0e0(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
  FUN_00bbc2a0(param_2);
  uVar6 = 0x43;
  uVar4 = (*(code *)**(undefined4 **)param_2[1])(0x43,param_2);
  FUN_00d82bf0(uVar4,uVar6);
  *(undefined4 *)(uVar5 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x43960000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}

// 00BCFC90  ZangekiInterceptStatePl0010::vf0C  size=555  [class]
void __thiscall ZangekiInterceptStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  float local_170;
  float local_16c;
  float local_168;
  undefined1 auStack_160 [348];
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar9 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar5 = FUN_00dd6d80(puVar9);
      uVar8 = -(uint)(iVar5 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar8 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar9 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar5 = FUN_00dd6d80(puVar9);
      uVar7 = -(uint)(iVar5 != 0) & (uint)piVar1;
    }
    iVar5 = FUN_00a7f600(0x201a0);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      if (*(int *)(uVar8 + 0x38c) != 0) {
        FUN_005edc60(0x40a00000);
      }
      if (*(int *)(uVar8 + 0x390) != 0) {
        FUN_005edc60(0x40a00000);
      }
    }
    iVar5 = FUN_00a7f600(0x20020);
    if (iVar5 != 0) {
      pfVar6 = (float *)FUN_00a925a0(&local_170);
      local_170 = *(float *)(uVar7 + 0x40) + *pfVar6 * 3.0;
      local_16c = *(float *)(uVar7 + 0x44) + pfVar6[1] * 3.0;
      local_168 = pfVar6[2] * 3.0 + *(float *)(uVar7 + 0x48);
      iVar5 = FUN_00a7c8a0();
      fVar2 = local_170;
      fVar3 = local_168;
      fVar4 = local_16c;
      if (iVar5 != 0) {
        fVar2 = *(float *)(iVar5 + 0x40);
        fVar3 = *(float *)(iVar5 + 0x48);
        fVar4 = *(float *)(iVar5 + 0x44);
      }
      *(undefined4 *)(param_1 + 0x38) = 1;
      fVar2 = fVar2 - *(float *)(uVar7 + 0x40);
      fVar4 = fVar4 - *(float *)(uVar7 + 0x44);
      fVar3 = fVar3 - *(float *)(uVar7 + 0x48);
      fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) * 0.9;
      if (*(int *)(uVar8 + 0x38c) != 0) {
        FUN_005edc60(fVar2);
      }
      if (*(int *)(uVar8 + 0x390) != 0) {
        FUN_005edc60(fVar2);
      }
    }
    (**(code **)(*(int *)(uVar8 + 400) + 8))(0,0,0);
    FUN_004039a0(1,uVar7,0);
    FUN_00dffb30(uVar8 + 400);
    FUN_00e03080(*(undefined4 *)(uVar7 + 0x4f0),0);
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00e03080(iVar5,1);
    }
    FUN_00a8c8b0(0x10010,auStack_160);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BFF980  ZangekiInterceptStatePl0010::vf10  size=1437  [class]
void __thiscall ZangekiInterceptStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  float fVar8;
  undefined *puVar9;
  int *local_28;
  undefined1 local_24 [4];
  float local_20;
  float local_1c;
  float local_18;
  undefined4 uStack_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar9);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  local_28 = *(int **)(uVar5 + 0xc);
  if (local_28 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*local_28 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar9);
    piVar6 = (int *)(-(uint)(iVar2 != 0) & (uint)local_28);
  }
  fVar8 = 0.0;
  if ((DAT_01bea090 & 0x80000000) == 0) {
    iVar1 = piVar6[0xe08];
    iVar2 = iVar1 + piVar6[0xe0a] * 0x18;
    for (; iVar1 != iVar2; iVar1 = iVar1 + 0x18) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        fVar8 = fVar8 + *(float *)(iVar1 + 4);
      }
    }
  }
  else {
    fVar8 = (float)piVar6[0xe0c];
  }
  if (fVar8 == 0.0) {
    FUN_00b92be0(param_2,param_1,100,1);
  }
  if ((100.0 < ABS((float)piVar6[0xef5])) || (100.0 < ABS((float)piVar6[0xef6]))) {
    *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  }
  if (*(float *)(param_1 + 0x34) == 0.0) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        thunk_FUN_00dde510(&local_28,local_24,iVar2 + 0x40,piVar6 + 0x10);
        FUN_00b8bb40(-(float)local_28);
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        *(undefined4 *)(uVar5 + 0x580) = *(undefined4 *)(iVar2 + 0x40);
        *(undefined4 *)(uVar5 + 0x584) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(uVar5 + 0x588) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(uVar5 + 0x58c) = *(undefined4 *)(iVar2 + 0x4c);
        goto LAB_00bffc82;
      }
    }
    *(undefined4 *)(uVar5 + 0x5c4) = 0;
    local_28 = (int *)piVar6[0x13c];
    fVar8 = *(float *)(uVar5 + 0x574) * 1.2 * 30.0;
    uVar7 = 0x3f490fdb;
    iVar2 = (**(code **)(*piVar6 + 0x84))(0x3f490fdb,fVar8);
    FUN_00c58e90(uVar5 + 0x5b8,local_28,*(undefined4 *)(iVar2 + 4),uVar7,fVar8);
    if (*(int *)(uVar5 + 0x5c4) < 1) {
      if (((*(float *)(uVar5 + 0x580) == 0.0) && (*(float *)(uVar5 + 0x584) == 0.0)) &&
         (*(float *)(uVar5 + 0x588) == 0.0)) {
        FUN_00b8bb40(0xbe32b8c2);
        if ((DAT_01d61924 == 0) &&
           (fVar8 = *(float *)(param_1 + 0x30) - (float)piVar6[0x244],
           *(float *)(param_1 + 0x30) = fVar8, fVar8 < 0.0)) {
          *(undefined4 *)(uVar5 + 0x2fc) = 0;
        }
      }
      else {
        FUN_00c15010(uVar5 + 0x580);
        thunk_FUN_00dde510(&local_28,local_24,uVar5 + 0x580,piVar6 + 0x10);
        FUN_00b8bb40(-(float)local_28);
      }
    }
    else {
      FUN_00c15010(&local_20);
      thunk_FUN_00dde510(&local_28,local_24,&local_20,piVar6 + 0x10);
      FUN_00b8bb40(-(float)local_28);
      *(float *)(uVar5 + 0x580) = local_20;
      *(float *)(uVar5 + 0x584) = local_1c;
      *(float *)(uVar5 + 0x588) = local_18;
      *(undefined4 *)(uVar5 + 0x58c) = uStack_14;
    }
  }
LAB_00bffc82:
  iVar2 = FUN_00a7f600(0x2070a);
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
      puVar9 = &DAT_01b35260;
      (**(code **)(*piVar6 + 4))(&DAT_01b35260);
      iVar2 = FUN_00dd6d80(puVar9);
      if (iVar2 != 0) {
        FUN_005ca330(0x407d70a4);
      }
    }
    goto LAB_00bffe93;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
LAB_00bffded:
    if (*(int *)(uVar5 + 0x5c4) < 1) {
      iVar2 = FUN_00a81330();
      if (((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) ||
         (iVar2 = FUN_00860b50(iVar2), iVar2 == 0)) goto LAB_00bffe93;
      fVar8 = 1.0;
    }
    else {
      FUN_00c15010(&local_20);
      iVar2 = FUN_00a81330();
      if (((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) ||
         (iVar2 = FUN_00860b50(iVar2), iVar2 == 0)) goto LAB_00bffe93;
      fVar8 = SQRT((local_18 - (float)piVar6[0x12]) * (local_18 - (float)piVar6[0x12]) +
                   (local_1c - (float)piVar6[0x11]) * (local_1c - (float)piVar6[0x11]) +
                   (local_20 - (float)piVar6[0x10]) * (local_20 - (float)piVar6[0x10])) * 0.33;
    }
  }
  else {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 == 0) goto LAB_00bffded;
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x68))();
    local_20 = *pfVar4;
    local_1c = pfVar4[1];
    local_18 = pfVar4[2];
    iVar2 = FUN_00a81330();
    if (((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) ||
       (iVar2 = FUN_00860b50(iVar2), iVar2 == 0)) goto LAB_00bffe93;
    fVar8 = SQRT((local_20 - (float)piVar6[0x10]) * (local_20 - (float)piVar6[0x10]) +
                 (local_1c - (float)piVar6[0x11]) * (local_1c - (float)piVar6[0x11]) +
                 (local_18 - (float)piVar6[0x12]) * (local_18 - (float)piVar6[0x12])) * 0.33;
  }
  FUN_005ca330(fVar8);
LAB_00bffe93:
  FUN_00c5bbb0(0x10);
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar9);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar5 + 0x2f4) == 0) {
    FUN_00bbb050(param_2);
  }
  FUN_00bd5f40(param_2,0x420c0000,0xc2700000,0,0);
  FUN_00bbc310(param_2);
  FUN_00bf24f0(param_2,0x3f800000);
  StateMachineNode::vf10(param_2);
  return;
}

