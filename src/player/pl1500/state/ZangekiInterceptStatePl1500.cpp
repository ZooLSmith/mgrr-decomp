// src/player/pl1500/state/ZangekiInterceptStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4790..008CBC10, 9 functions

#include "types.h"

// 008A4790  ZangekiInterceptStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiInterceptStatePl1500::vf14(int param_1,undefined4 param_2)

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

// 008A47A0  ZangekiInterceptStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiInterceptStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A47B0  ZangekiInterceptStatePl1500::vf24  size=19  [class]
bool ZangekiInterceptStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A47F0  ZangekiInterceptStatePl1500::vf00  size=6  [class]
undefined * ZangekiInterceptStatePl1500::vf00(void)

{
  return &DAT_01b35bc0;
}

// 008AA200  ZangekiInterceptStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiInterceptStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B3F20  ZangekiInterceptStatePl1500::vf20  size=262  [class]
undefined4 __thiscall ZangekiInterceptStatePl1500::vf20(int param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
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
      FUN_005edcb0(0x40400000);
    }
    if (*(int *)(uVar4 + 0x390) != 0) {
      FUN_005edcb0(0x40400000);
    }
  }
  return 1;
}

// 008BD3C0  ZangekiInterceptStatePl1500::vf08  size=290  [class]
undefined4 __thiscall ZangekiInterceptStatePl1500::vf08(int param_1,undefined4 *param_2)

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
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar3 + 0x40c8) = 0x14;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar3 + 0x4c4) != 1) {
    FUN_008aa950(param_2);
    *(undefined4 *)(uVar3 + 0x4c4) = 1;
    FUN_00e5e1b0("bgm_Zangeki_SP_Enter");
  }
  FUN_008b8470(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
  FUN_008b8630(param_2);
  uVar6 = 0xf;
  uVar4 = (*(code *)**(undefined4 **)param_2[1])(0xf,param_2);
  FUN_00d82bf0(uVar4,uVar6);
  *(undefined4 *)(uVar5 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x43960000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}

// 008BD4F0  ZangekiInterceptStatePl1500::vf0C  size=558  [class]
void __thiscall ZangekiInterceptStatePl1500::vf0C(int param_1,undefined4 *param_2)

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
      puVar9 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar5 = FUN_00dd6d80(puVar9);
      uVar8 = -(uint)(iVar5 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar8 + 0x5e0);
    if (piVar1 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar9 = &DAT_01b35b90;
      (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
      iVar5 = FUN_00dd6d80(puVar9);
      uVar7 = -(uint)(iVar5 != 0) & (uint)piVar1;
    }
    iVar5 = FUN_00a7f600(0x201a0);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      if (*(int *)(uVar8 + 0x38c) != 0) {
        FUN_005edcb0(0x40a00000);
      }
      if (*(int *)(uVar8 + 0x390) != 0) {
        FUN_005edcb0(0x40a00000);
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
        FUN_005edcb0(fVar2);
      }
      if (*(int *)(uVar8 + 0x390) != 0) {
        FUN_005edcb0(fVar2);
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
    FUN_00a8c8b0(0x11500,auStack_160);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 008CBC10  ZangekiInterceptStatePl1500::vf10  size=1324  [class]
void __thiscall ZangekiInterceptStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  uint uVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined *puVar9;
  int *local_28;
  undefined1 local_24 [4];
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar9);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  local_28 = *(int **)(uVar4 + 0x5e0);
  if (local_28 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar9 = &DAT_01b35b90;
    (**(code **)(*local_28 + 4))(&DAT_01b35b90);
    iVar1 = FUN_00dd6d80(puVar9);
    piVar5 = (int *)(-(uint)(iVar1 != 0) & (uint)local_28);
  }
  fVar6 = (float10)FUN_00bda020();
  if ((float10)0 == fVar6) {
    if (param_2 != (undefined4 *)0x0) {
      puVar9 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      FUN_00dd6d80(puVar9);
    }
    FUN_00b83e50();
    FUN_00d82510(1,100);
  }
  if ((100.0 < ABS((float)piVar5[0xef5])) || (100.0 < ABS((float)piVar5[0xef6]))) {
    *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  }
  if (*(float *)(param_1 + 0x34) == 0.0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
        thunk_FUN_00dde510(&local_28,local_24,iVar1 + 0x40,piVar5 + 0x10);
        FUN_00b8bb40(-(float)local_28);
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
        *(undefined4 *)(uVar4 + 0x580) = *(undefined4 *)(iVar1 + 0x40);
        *(undefined4 *)(uVar4 + 0x584) = *(undefined4 *)(iVar1 + 0x44);
        *(undefined4 *)(uVar4 + 0x588) = *(undefined4 *)(iVar1 + 0x48);
        *(undefined4 *)(uVar4 + 0x58c) = *(undefined4 *)(iVar1 + 0x4c);
        goto LAB_008cbefe;
      }
    }
    *(undefined4 *)(uVar4 + 0x5c4) = 0;
    local_28 = (int *)piVar5[0x13c];
    fVar8 = *(float *)(uVar4 + 0x574) * 1.2 * 30.0;
    uVar7 = 0x3f490fdb;
    iVar1 = (**(code **)(*piVar5 + 0x84))(0x3f490fdb,fVar8);
    FUN_00c58e90(uVar4 + 0x5b8,local_28,*(undefined4 *)(iVar1 + 4),uVar7,fVar8);
    if (*(int *)(uVar4 + 0x5c4) < 1) {
      if (((*(float *)(uVar4 + 0x580) == 0.0) && (*(float *)(uVar4 + 0x584) == 0.0)) &&
         (*(float *)(uVar4 + 0x588) == 0.0)) {
        FUN_00b8bb40(0xbe32b8c2);
        if ((DAT_01d61924 == 0) &&
           (fVar8 = *(float *)(param_1 + 0x30) - (float)piVar5[0x244],
           *(float *)(param_1 + 0x30) = fVar8, fVar8 < 0.0)) {
          *(undefined4 *)(uVar4 + 0x2fc) = 0;
        }
      }
      else {
        FUN_00c15010(uVar4 + 0x580);
        thunk_FUN_00dde510(&local_28,local_24,uVar4 + 0x580,piVar5 + 0x10);
        FUN_00b8bb40(-(float)local_28);
      }
    }
    else {
      FUN_00c15010(&local_20);
      thunk_FUN_00dde510(&local_28,local_24,&local_20,piVar5 + 0x10);
      FUN_00b8bb40(-(float)local_28);
      *(float *)(uVar4 + 0x580) = local_20;
      *(float *)(uVar4 + 0x584) = fStack_1c;
      *(float *)(uVar4 + 0x588) = fStack_18;
      *(undefined4 *)(uVar4 + 0x58c) = uStack_14;
    }
  }
LAB_008cbefe:
  iVar1 = FUN_00a7f600(0x2070a);
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar9 = &DAT_01b35260;
      (**(code **)(*piVar5 + 4))(&DAT_01b35260);
      iVar1 = FUN_00dd6d80(puVar9);
      if (iVar1 != 0) {
        FUN_005ca330(0x407d70a4);
      }
    }
    goto LAB_008cc0b2;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
LAB_008cc060:
    if (0 < *(int *)(uVar4 + 0x5c4)) {
      FUN_00c15010(&local_20);
      goto LAB_008cc002;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 == 0) || (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) ||
       (iVar1 = FUN_00860b50(iVar1), iVar1 == 0)) goto LAB_008cc0b2;
    fVar8 = 1.0;
  }
  else {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) goto LAB_008cc060;
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x68))();
    local_20 = *pfVar3;
    fStack_1c = pfVar3[1];
    fStack_18 = pfVar3[2];
LAB_008cc002:
    iVar1 = FUN_00a81330();
    if (((iVar1 == 0) || (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) ||
       (iVar1 = FUN_00860b50(iVar1), iVar1 == 0)) goto LAB_008cc0b2;
    fVar8 = SQRT((fStack_18 - (float)piVar5[0x12]) * (fStack_18 - (float)piVar5[0x12]) +
                 (fStack_1c - (float)piVar5[0x11]) * (fStack_1c - (float)piVar5[0x11]) +
                 (local_20 - (float)piVar5[0x10]) * (local_20 - (float)piVar5[0x10])) * 0.33;
  }
  FUN_005ca330(fVar8);
LAB_008cc0b2:
  FUN_00c5bbb0(0x10);
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar9);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar4 + 0x2f4) == 0) {
    FUN_008b7300(param_2);
  }
  FUN_008c2610(param_2,0x420c0000,0xc2700000,0,0);
  FUN_008b86a0(param_2);
  FUN_008b83c0(param_2,0x3f800000);
  StateMachineNode::vf10(param_2);
  return;
}

