// src/player/pl0010/state/ZangekiEventQteStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B82F10..00C05F10, 14 functions

#include "types.h"

// 00B82F10  ZangekiEventQteStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiEventQteStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B82F20  ZangekiEventQteStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiEventQteStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82F30  ZangekiEventQteStatePl0010::vf24  size=19  [class]
bool ZangekiEventQteStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B82F50  ZangekiEventQteStatePl0010::ZangekiEventQteStatePl0010  size=55  [class]
undefined4 * __thiscall
ZangekiEventQteStatePl0010::ZangekiEventQteStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a831e0();
  FUN_00a7c930();
  return param_1;
}

// 00B82F90  ZangekiEventQteStatePl0010::vf00  size=6  [class]
undefined * ZangekiEventQteStatePl0010::vf00(void)

{
  return &DAT_01be9ea8;
}

// 00B91610  ZangekiEventQteStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiEventQteStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BCDBC0  ZangekiEventQteStatePl0010::vf08  size=3366  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ZangekiEventQteStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 local_160 [348];
  
  iVar4 = StateMachineNode::vf08(param_2);
  if (iVar4 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar11 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar11);
    uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar6 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar11 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar11);
    uVar7 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar6 + 0xd8) = 0;
  *(undefined4 *)(uVar6 + 0xdc) = 0;
  *(undefined4 *)(uVar6 + 0xe0) = 0;
  *(undefined4 *)(uVar6 + 0xe4) = 0;
  *(undefined4 *)(uVar6 + 0xe8) = 0;
  *(undefined4 *)(uVar6 + 0xec) = 0;
  *(undefined4 *)(uVar6 + 0xf0) = 0;
  *(undefined4 *)(uVar6 + 0x334) = 0;
  *(undefined4 *)(uVar7 + 0x40c8) = 8;
  *(undefined4 *)(uVar6 + 0x330) = 0x26;
  iVar4 = FUN_00a8cab0();
  if (iVar4 != 0x46) goto LAB_00bce0be;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  switch(*(undefined4 *)(uVar7 + 0x3df0)) {
  case 1:
    uVar10 = 0;
    *(undefined4 *)(uVar6 + 0x330) = 1;
    uVar9 = 0;
    FUN_00a92f90(0,0);
    FUN_00546e40(uVar9,uVar10);
    *(undefined4 *)(uVar6 + 0xdc) = 1;
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    *(undefined4 *)(uVar6 + 0xec) = 1;
    break;
  default:
    *(undefined4 *)(uVar6 + 0x330) = 0x25;
    goto LAB_00bcde0d;
  case 3:
    *(undefined4 *)(uVar6 + 0x330) = 3;
    *(undefined4 *)(param_1 + 0x44) = 3;
    FUN_00bbc2a0(param_2);
    uVar10 = 0;
    uVar9 = 0;
    FUN_00a92f90(0,0);
    FUN_00546e40(uVar9,uVar10);
    goto LAB_00bcdda8;
  case 4:
    *(undefined4 *)(uVar6 + 0x330) = 4;
    *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = 2;
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(iVar4 + 0x83c);
    }
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    *(undefined4 *)(uVar6 + 0xf0) = 1;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00bbc2a0(param_2);
    break;
  case 5:
    *(undefined4 *)(uVar6 + 0x330) = 5;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00bbc2a0(param_2);
LAB_00bcdda8:
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    *(undefined4 *)(uVar6 + 0xf0) = 1;
    break;
  case 6:
    *(undefined4 *)(uVar6 + 0x330) = 6;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    goto LAB_00bcde97;
  case 7:
    *(undefined4 *)(uVar6 + 0x330) = 7;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00bbc2a0(param_2);
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00860b50(iVar4), iVar4 != 0)) {
      FUN_005ca330(0x40000000);
    }
    break;
  case 8:
    *(undefined4 *)(uVar6 + 0x330) = 8;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00bbc2a0(param_2);
    uVar10 = 0x3f800000;
    uVar9 = 0;
    FUN_00a92f90(0,0x3f800000);
    FUN_00546e40(uVar9,uVar10);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(uVar7 + 0x44);
    FUN_00aa4080(0x2ab,6,0,0x3f800000,0x10,0xbf800000,0x3f800000);
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00860b50(iVar4), iVar4 != 0)) {
      FUN_005ca330(0x3f266666);
    }
    FUN_004039a0(0xe,uVar7,0);
    FUN_00a8c8b0(0x10010,local_160);
    goto LAB_00bcde46;
  case 9:
    *(undefined4 *)(uVar6 + 0x330) = 9;
    FUN_00b85350(0x43340000,*(undefined4 *)(uVar7 + 0x4068),*(undefined4 *)(uVar7 + 0x406c),1,0,
                 0x3dcccccd);
    FUN_00bbc2a0(param_2);
    *(undefined4 *)(uVar6 + 0xdc) = 1;
    break;
  case 10:
    *(undefined4 *)(uVar6 + 0x330) = 10;
    goto LAB_00bce1e2;
  case 0xb:
    *(undefined4 *)(uVar6 + 0x330) = 0xb;
    goto LAB_00bce099;
  case 0xc:
    *(undefined4 *)(uVar6 + 0x330) = 0xc;
    *(undefined4 *)(uVar6 + 0xf0) = 0;
    goto LAB_00bce10c;
  case 0xd:
    *(undefined4 *)(uVar6 + 0x330) = 0xd;
    goto LAB_00bce099;
  case 0xe:
    *(undefined4 *)(uVar6 + 0x330) = 0xe;
    goto LAB_00bce099;
  case 0xf:
    *(undefined4 *)(uVar6 + 0x330) = 0xf;
    goto LAB_00bce154;
  case 0x10:
    *(undefined4 *)(uVar6 + 0x330) = 0x10;
    goto LAB_00bce099;
  case 0x11:
    *(undefined4 *)(uVar6 + 0x330) = 0x11;
    *(undefined4 *)(uVar6 + 0xf0) = 1;
LAB_00bce10c:
    *(undefined4 *)(uVar6 + 0xdc) = 1;
    *(undefined4 *)(uVar6 + 0xe4) = 1;
    *(undefined4 *)(uVar6 + 0xec) = 1;
    *(undefined4 *)(uVar6 + 0xd8) = 1;
    *(undefined4 *)(uVar6 + 0xe8) = 1;
    break;
  case 0x12:
    *(undefined4 *)(uVar6 + 0x330) = 0x12;
    *(undefined4 *)(uVar7 + 0x341c) = 0x3f800000;
    FUN_00b85350(0x43340000,*(undefined4 *)(uVar7 + 0x4070),*(undefined4 *)(uVar7 + 0x40a0),1,0,
                 0x3dcccccd);
    *(undefined4 *)(uVar7 + 0x3428) = 0;
    FUN_00bbc2a0(param_2);
    *(undefined4 *)(uVar6 + 0xe4) = 1;
    *(undefined4 *)(uVar6 + 0xe8) = 1;
    *(undefined4 *)(uVar6 + 0xf0) = 1;
    break;
  case 0x13:
    *(undefined4 *)(uVar6 + 0x330) = 0x13;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
LAB_00bcde97:
    FUN_00bbc2a0(param_2);
    *(undefined4 *)(uVar6 + 0xe4) = 1;
    *(undefined4 *)(uVar6 + 0xe8) = 1;
    break;
  case 0x14:
    *(undefined4 *)(uVar6 + 0x330) = 0x14;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    goto LAB_00bce367;
  case 0x15:
    *(undefined4 *)(uVar6 + 0x330) = 0x15;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
LAB_00bce367:
    FUN_00bbc2a0(param_2);
    *(undefined4 *)(uVar6 + 0xf0) = 1;
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    break;
  case 0x16:
    *(undefined4 *)(uVar6 + 0x330) = 0x16;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00bbc2a0(param_2);
    *(undefined4 *)(uVar6 + 0xf0) = 1;
    *(undefined4 *)(uVar6 + 0xdc) = 1;
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    break;
  case 0x17:
    *(undefined4 *)(uVar6 + 0x330) = 0x17;
    goto LAB_00bce099;
  case 0x18:
    *(undefined4 *)(uVar6 + 0x330) = 0x18;
LAB_00bce099:
    *(undefined4 *)(uVar6 + 0xdc) = 1;
    *(undefined4 *)(uVar6 + 0xf0) = 1;
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    *(undefined4 *)(uVar6 + 0xec) = 1;
    *(undefined4 *)(uVar6 + 0xd8) = 1;
    break;
  case 0x19:
    *(undefined4 *)(uVar6 + 0x330) = 0x19;
    goto LAB_00bce3ea;
  case 0x1a:
    *(undefined4 *)(uVar6 + 0x330) = 0x1a;
LAB_00bce1e2:
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
LAB_00bce185:
    FUN_00bbc2a0(param_2);
    *(undefined4 *)(uVar6 + 0xf0) = 1;
LAB_00bce195:
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    *(undefined4 *)(uVar6 + 0xdc) = 1;
    *(undefined4 *)(uVar6 + 0xec) = 1;
    break;
  case 0x1b:
    *(undefined4 *)(uVar6 + 0x330) = 0x1b;
LAB_00bce3ea:
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    goto LAB_00bce185;
  case 0x1c:
    *(undefined4 *)(uVar6 + 0x330) = 0x1c;
LAB_00bce154:
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    goto LAB_00bce185;
  case 0x1d:
    *(undefined4 *)(uVar6 + 0x330) = 0x1d;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    goto LAB_00bce4dc;
  case 0x1e:
    *(undefined4 *)(uVar6 + 0x330) = 0x1e;
    *(undefined4 *)(uVar7 + 0x341c) = 0x3f800000;
    FUN_00b85350(0x43340000,*(undefined4 *)(uVar7 + 0x4070),*(undefined4 *)(uVar7 + 0x40a0),1,0,
                 0x3dcccccd);
    *(undefined4 *)(uVar7 + 0x3428) = 0;
    FUN_00bbc2a0(param_2);
    goto LAB_00bce4e4;
  case 0x1f:
    *(undefined4 *)(uVar6 + 0x330) = 0x1f;
    *(undefined4 *)(uVar7 + 0x341c) = 0x3f800000;
    FUN_00b85350(0x43340000,*(undefined4 *)(uVar7 + 0x4070),*(undefined4 *)(uVar7 + 0x40a0),1,0,
                 0x3dcccccd);
    *(undefined4 *)(uVar7 + 0x3428) = 0;
    FUN_00bbc2a0(param_2);
    goto LAB_00bce4e4;
  case 0x20:
    *(undefined4 *)(uVar6 + 0x330) = 0x20;
    *(undefined4 *)(uVar7 + 0x341c) = 0x3f800000;
    FUN_00b85350(0x43340000,*(undefined4 *)(uVar7 + 0x4070),*(undefined4 *)(uVar7 + 0x40a0),1,0,
                 0x3dcccccd);
    *(undefined4 *)(uVar7 + 0x3428) = 0;
    FUN_00bbc2a0(param_2);
    goto LAB_00bce4ef;
  case 0x21:
    *(undefined4 *)(uVar6 + 0x330) = 0x21;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
LAB_00bce4dc:
    FUN_00bbc2a0(param_2);
LAB_00bce4e4:
    *(undefined4 *)(uVar6 + 0xf0) = 1;
LAB_00bce4ef:
    *(undefined4 *)(uVar6 + 0xe4) = 1;
    *(undefined4 *)(uVar6 + 0xe8) = 1;
    *(undefined4 *)(uVar6 + 0xdc) = 1;
    *(undefined4 *)(uVar6 + 0xec) = 1;
    break;
  case 0x22:
    *(undefined4 *)(uVar6 + 0x330) = 0x22;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    goto LAB_00bcde3e;
  case 0x23:
    *(undefined4 *)(uVar6 + 0x330) = 0x23;
LAB_00bcde0d:
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
LAB_00bcde3e:
    FUN_00bbc2a0(param_2);
LAB_00bcde46:
    *(undefined4 *)(uVar6 + 0xdc) = 1;
    *(undefined4 *)(uVar6 + 0xe0) = 1;
    break;
  case 0x24:
    *(undefined4 *)(uVar6 + 0x330) = 0x24;
    FUN_00bbc0e0(param_2,0x3e99999a,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00bbc2a0(param_2);
    *(undefined4 *)(uVar6 + 0xf0) = 0;
    goto LAB_00bce195;
  }
LAB_00bce0be:
  fVar3 = *(float *)(uVar6 + 0x374) * 57.29578;
  if (fVar3 <= 30.0) {
    if (-30.0 <= fVar3) {
      fVar8 = -(float10)_DAT_01bea3b0;
    }
    else {
      fVar8 = (float10)FUN_00ddba30(0xbf060a92);
    }
  }
  else {
    fVar8 = (float10)FUN_00ddba30(0x3f060a92);
  }
  FUN_00b8bb40((float)fVar8);
  fVar3 = _DAT_01bea3b4 + 3.1415927;
  puVar2 = *(undefined4 **)(uVar7 + 2000);
  if (puVar2 != (undefined4 *)0x0) {
    puVar11 = &DAT_01be9ef4;
    (**(code **)*puVar2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar11);
    if (iVar4 != 0) {
      puVar2[0xde] = fVar3 - 0.17453292;
    }
  }
  if (*(int *)(uVar6 + 0xd8) != 0) goto LAB_00bce7ac;
  iVar4 = *(int *)(uVar6 + 0x330);
  if ((iVar4 == 5) || (iVar4 == 4)) {
    uVar9 = 0x3d;
LAB_00bce79b:
    pcVar5 = (code *)**(undefined4 **)param_2[1];
  }
  else {
    if (iVar4 == 0x1d) {
      uVar9 = 0x3c;
      goto LAB_00bce79b;
    }
    if (((*(int *)(uVar6 + 0xf0) != 0) && (iVar4 != 10)) && (iVar4 != 3)) {
      uVar9 = 0x36;
      goto LAB_00bce79b;
    }
    iVar4 = FUN_00b93090(param_2);
    pcVar5 = (code *)**(undefined4 **)param_2[1];
    if (iVar4 == 0) {
      uVar9 = 0x43;
    }
    else {
      uVar9 = 0x3d;
    }
  }
  uVar9 = (*pcVar5)(uVar9,param_2);
  FUN_00d82bf0(uVar9,param_2);
LAB_00bce7ac:
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_00a82610(*(undefined4 *)(uVar7 + 0x4f0),0,0xffffffff);
  *(undefined4 *)(param_1 + 0x1a4) = 0x3fc90fdb;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  FUN_00a83270(&uStack_170,0,0x3f060a92);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 1;
  DAT_01bea060 = DAT_01bea060 | 0x400;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 1;
  *(undefined4 *)(uVar7 + 0x3e70) = *(undefined4 *)(uVar7 + 0x40);
  *(undefined4 *)(uVar7 + 0x3e74) = *(undefined4 *)(uVar7 + 0x44);
  *(undefined4 *)(uVar7 + 0x3e78) = *(undefined4 *)(uVar7 + 0x48);
  *(undefined4 *)(uVar7 + 0x3e7c) = *(undefined4 *)(uVar7 + 0x4c);
  FUN_00a7c960(uVar6 + 0x4bc);
  return 1;
}

// 00BCE980  ZangekiEventQteStatePl0010::vf20  size=987  [class]
undefined4 ZangekiEventQteStatePl0010::vf20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined *puVar8;
  int iStack_30;
  int local_28;
  int *local_24;
  undefined4 uStack_20;
  float fStack_1c;
  
  iVar1 = StateMachineNode::vf20(param_1);
  if (iVar1 != 0) {
    if (param_1 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_1)(&DAT_01be9ef4);
      iVar1 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar1 != 0) & (uint)param_1;
    }
    local_24 = *(int **)(uVar7 + 0xc);
    if (local_24 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*local_24 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar8);
      piVar6 = (int *)(-(uint)(iVar1 != 0) & (uint)local_24);
    }
    *(undefined4 *)(uVar7 + 0xd8) = 0;
    *(undefined4 *)(uVar7 + 0xdc) = 0;
    *(undefined4 *)(uVar7 + 0xe0) = 0;
    *(undefined4 *)(uVar7 + 0xe4) = 0;
    *(undefined4 *)(uVar7 + 0xec) = 0;
    *(undefined4 *)(uVar7 + 0xf0) = 0;
    *(undefined4 *)(uVar7 + 0xe8) = 1;
    *(undefined4 *)(uVar7 + 0xf4) = 0;
    *(undefined4 *)(uVar7 + 0xf8) = 0;
    *(undefined4 *)(uVar7 + 0xfc) = 0;
    *(undefined4 *)(uVar7 + 0x100) = 0;
    piVar6[0x1032] = 0;
    *(undefined4 *)(uVar7 + 0x330) = 0x26;
    if (param_1 != (undefined4 *)0x0) {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_1)(&DAT_01be9ef4);
      FUN_00dd6d80(puVar8);
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (*(int *)(local_28 + 0x30) != 0)) {
      FUN_00a7c950();
      FUN_009fdde0();
    }
    DAT_01dc08d4 = 0;
    FUN_00a8ca50(0xe,0x3f800000,0);
    FUN_00bbc7f0(param_1,local_28);
    FUN_00a83990();
    iVar1 = FUN_00a9f6b0(6);
    if (iVar1 != 0) {
      FUN_00a94bc0(6,0);
    }
    FUN_00a94bc0(2,0x3c888889);
    if (param_1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_1)(&DAT_01be9ef4);
      iVar1 = FUN_00dd6d80(puVar8);
      uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
    }
    iVar1 = local_28;
    *(undefined4 *)(uVar2 + 0x500) = 0;
    DAT_01bea060 = DAT_01bea060 & 0xfffffbff;
    if (((*(float *)(local_28 + 0x1c0) != 0.0) || (*(float *)(local_28 + 0x1c4) != 0.0)) ||
       (*(float *)(local_28 + 0x1c8) != 0.0)) {
      (**(code **)(*piVar6 + 0x88))(local_28 + 0x1c0);
      FUN_00da0d70();
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
       ((iVar3 = FUN_00a7c8a0(), iVar3 != 0 && (iVar3 = FUN_00860b50(iVar3), iVar3 != 0)))) {
      FUN_005ca330(0x3f800000);
      FUN_00b83ea0(0x40400000);
    }
    if ((*(int *)(uVar7 + 0x5dc) == 0) && (*(int *)(local_28 + 0x200) == 0)) {
      local_24 = (int *)*piVar6;
      piVar5 = (int *)(local_28 + 0x1f0);
      uVar4 = (**(code **)((int)local_24 + 0x84))();
      (**(code **)((int)local_24 + 0x7c))(piVar5,uVar4);
      FUN_008e6d00();
      FUN_008e5c50(6);
      CharacterControl::setHeight(0x3ff33333);
      local_24 = (int *)(*(float *)(local_28 + 500) + 0.1);
      uStack_20 = *(undefined4 *)(local_28 + 0x1f8);
      fStack_1c = *(float *)(local_28 + 0x1fc) + fStack_1c;
      local_28 = *piVar5;
      FUN_008e4580(&local_28,1);
      FUN_008e5ac0(0x20);
      *(undefined4 *)(uVar7 + 0x32c) = 1;
      (**(code **)(*piVar6 + 0x314))();
      if (*(int *)(piVar6[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(piVar6[0x1d9] + 0x104) = 0;
      }
      iVar3 = FUN_00a81330();
      if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
         (iVar3 = FUN_00860b50(iVar3), iVar3 != 0)) {
        FUN_005ca330(0x3f800000);
      }
      FUN_00a8ca50(0xe,0x3f800000,0);
      *(undefined4 *)(iStack_30 + 0x1c0) = 0;
      *(undefined4 *)(iStack_30 + 0x1c4) = 0;
      *(undefined4 *)(iStack_30 + 0x1c8) = 0;
      *(undefined4 *)(iStack_30 + 0x1cc) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x1fc) = 0x3f800000;
      *piVar5 = 0;
      *(undefined4 *)(iVar1 + 500) = 0;
      *(undefined4 *)(iVar1 + 0x1f8) = 0;
      *(undefined4 *)(iStack_30 + 0x200) = 1;
    }
    DAT_01bea060 = DAT_01bea060 & 0xfffffff7;
    return 1;
  }
  return 0;
}

// 00BCED60  FUN_00bced60  size=468  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00bced60(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = FUN_00a12210(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 + 0x4c);
    }
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(uVar3 + 0x540);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(uVar3 + 0x544);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(uVar3 + 0x548);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(uVar3 + 0x54c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x7c);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  _DAT_01bea9a0 = 1;
  FUN_00da8810(0x41000000);
  FUN_00db3e80(0x41000000,0,&DAT_01bea1d0);
  FUN_008e6d00();
  FUN_008e5c50(6);
  FUN_008e0b70(0);
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar3 + 0x4c4) != 1) {
    FUN_00b92d70(param_2);
    *(undefined4 *)(uVar3 + 0x4c4) = 1;
    FUN_00e5e1b0("bgm_Zangeki_SP_Enter");
  }
  return;
}

// 00BCEF40  FUN_00bcef40  size=185  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00bcef40(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  _DAT_01bea9a0 = 1;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar3 + 0x4c4) != 1) {
    FUN_00b92d70(param_2);
    *(undefined4 *)(uVar3 + 0x4c4) = 1;
    FUN_00e5e1b0("bgm_Zangeki_SP_Enter");
  }
  return;
}

// 00BCF000  FUN_00bcf000  size=686  [callgraph]
void __thiscall FUN_00bcf000(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  undefined *puVar13;
  undefined4 *local_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 == (undefined4 *)0x0) {
    local_44 = param_2;
  }
  else {
    puVar13 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar13);
    local_44 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_2);
  }
  piVar9 = (int *)local_44[3];
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    puVar13 = &DAT_01be9db8;
    (**(code **)(*piVar9 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar13);
    piVar9 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar9);
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    uVar5 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar5;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
  }
  pbVar10 = &DAT_016a27e0;
  pbVar6 = (byte *)FUN_00a95df0(0);
  do {
    bVar2 = *pbVar6;
    bVar12 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_00bcf0d0:
      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00bcf0d5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar12 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_00bcf0d0;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00bcf0d5:
  if (iVar4 == 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        uVar5 = *(undefined4 *)(iVar4 + 0x40);
        uVar1 = *(undefined4 *)(iVar4 + 0x48);
        iVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0x68))();
        uStack_2c = *(undefined4 *)(iVar4 + 4);
        uStack_30 = uVar5;
        uStack_28 = uVar1;
        (**(code **)(**(int **)(param_1 + 0x30) + 0x6c))(&uStack_30);
        uStack_24 = 0;
        uStack_20 = 0xbf000000;
        uStack_1c = 0;
        (**(code **)(**(int **)(param_1 + 0x30) + 0x70))(&uStack_24);
      }
    }
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    piVar7 = (int *)FUN_00a7c8a0();
    if (piVar7 != (int *)0x0) {
      puVar13 = &DAT_01b35260;
      (**(code **)(*piVar7 + 4))(&DAT_01b35260);
      iVar4 = FUN_00dd6d80(puVar13);
      if (iVar4 != 0) {
        FUN_005ca330(0x40000000);
      }
    }
  }
  (**(code **)(*piVar9 + 0x318))();
  iVar4 = piVar9[0x1d9];
  if (*(int *)(iVar4 + 0x104) != 1) {
    *(undefined4 *)(iVar4 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 4) = 0;
  }
  FUN_008e59c0(0x20);
  FUN_008e5c50(0x1f);
  if (param_2 == (undefined4 *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar13 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar13);
    uVar11 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar11 + 0x4c4) != 0) {
    FUN_00b92d70(param_2);
    *(undefined4 *)(uVar11 + 0x4c4) = 0;
    FUN_00e5e1b0("bgm_Zangeki_Enter");
  }
  piVar9[0xf98] = piVar9[0x10];
  piVar9[0xf99] = piVar9[0x11];
  piVar9[0xf9a] = piVar9[0x12];
  piVar9[0xf9b] = piVar9[0x13];
  pcVar3 = *(code **)(*piVar9 + 0x84);
  piVar9[0x9b5] = 0;
  puVar8 = (undefined4 *)(*pcVar3)();
  *(undefined4 *)(param_1 + 0x1c0) = *puVar8;
  *(undefined4 *)(param_1 + 0x1c4) = puVar8[1];
  *(undefined4 *)(param_1 + 0x1c8) = puVar8[2];
  *(undefined4 *)(param_1 + 0x1cc) = puVar8[3];
  *(undefined4 *)(param_1 + 0x200) = 0;
  DAT_01bea060 = DAT_01bea060 | 8;
  return;
}

// 00BCF2B0  FUN_00bcf2b0  size=304  [callgraph]
void __thiscall FUN_00bcf2b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
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
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  FUN_008e0b70(0);
  iVar1 = (**(code **)(*piVar3 + 0x84))();
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar1 + 4);
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar4 + 0x4c4) != 1) {
    FUN_00b92d70(param_2);
    *(undefined4 *)(uVar4 + 0x4c4) = 1;
    FUN_00e5e1b0("bgm_Zangeki_SP_Enter");
  }
  piVar3[0x43d] = 0;
  return;
}

// 00BE2090  ZangekiEventQteStatePl0010::vf0C  size=744  [class]
void __thiscall ZangekiEventQteStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  uint local_168;
  undefined4 *local_164;
  undefined1 auStack_160 [348];
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      local_164 = param_2;
    }
    else {
      puVar3 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar3);
      local_164 = (undefined4 *)(-(uint)(iVar2 != 0) & (uint)param_2);
    }
    piVar1 = (int *)local_164[3];
    if (piVar1 == (int *)0x0) {
      local_168 = 0;
    }
    else {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar3);
      local_168 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    FUN_00b8bb40(0);
    switch(local_164[0xcc]) {
    case 1:
      FUN_00bb35c0(param_2);
      break;
    default:
      FUN_00bb55e0(param_2);
      break;
    case 3:
      FUN_00bced60(param_2);
      break;
    case 4:
      FUN_00bcef40(param_2);
      break;
    case 5:
      FUN_00bb3640(param_2);
      break;
    case 6:
      FUN_00bb37c0(param_2);
      break;
    case 7:
      FUN_00bb38d0(param_2);
      break;
    case 8:
      FUN_00bcf000(param_2);
      break;
    case 9:
      FUN_00bb39d0(param_2);
      break;
    case 10:
      FUN_00bb3a90(param_2);
      break;
    case 0xb:
      ZANGEKI_QTE_EM0010DIVE::updateOnce(param_2);
      break;
    case 0xc:
      ZANGEKI_QTE_EM0010DIVE::updateOnce_2(param_2);
      break;
    case 0xd:
      ZANGEKI_QTE_EM0070DIVE::updateOnce(param_2);
      break;
    case 0xe:
      ZANGEKI_QTE_STEALTH::updateOnce(param_2);
      break;
    case 0xf:
      FUN_00bcf2b0(param_2);
      break;
    case 0x10:
      ZANGEKI_QTE_EM0070DIVE::updateOnce_2(param_2);
      break;
    case 0x11:
      ZANGEKI_QTE_STEALTH::updateOnce_2(param_2);
      break;
    case 0x12:
      FUN_00bb43b0(param_2);
      break;
    case 0x13:
      FUN_00bb4470(param_2);
      break;
    case 0x14:
      FUN_00bb4560(param_2);
      break;
    case 0x15:
      FUN_00bb4630(param_2);
      break;
    case 0x16:
      FUN_00bb5300(param_2);
      break;
    case 0x17:
      ZANGEKI_QTE_EM0100DIVE::updateOnce(param_2);
      break;
    case 0x18:
      ZANGEKI_QTE_EM0100BACK::updateOnce(param_2);
      break;
    case 0x19:
      FUN_00bb49c0(param_2);
      break;
    case 0x1a:
      FUN_00bb4ba0(param_2);
      break;
    case 0x1b:
    case 0x1c:
      FUN_00bb4c70(param_2);
      break;
    case 0x1d:
      FUN_00bb4d80(param_2);
      break;
    case 0x1e:
      FUN_00bb4f80(param_2);
      break;
    case 0x1f:
      FUN_00bb50e0(param_2);
      break;
    case 0x20:
      FUN_00bb5240(param_2);
      break;
    case 0x21:
      FUN_00bb53d0(param_2);
      break;
    case 0x22:
      FUN_00bb5510(param_2);
      break;
    case 0x23:
      FUN_00bb3700(param_2);
      break;
    case 0x24:
      FUN_00bb4a90(param_2);
    }
    iVar2 = local_164[0xcc];
    if ((((iVar2 == 0x1d) || (iVar2 == 0x1c)) || (iVar2 == 0x1b)) || (iVar2 == 0x21)) {
      (**(code **)(local_164[100] + 8))(0,0,0);
      FUN_004039a0(1,local_168,0);
      FUN_00dffb30(local_164 + 100);
      FUN_00e03080(*(undefined4 *)(local_168 + 0x4f0),0);
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00e03080(iVar2,1);
      }
      FUN_00a8c8b0(0x10010,auStack_160);
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00C05F10  ZangekiEventQteStatePl0010::vf10  size=1041  [class]
void __thiscall ZangekiEventQteStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    local_48 = param_2;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    local_48 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_2);
  }
  piVar2 = (int *)local_48[3];
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(uVar3 + 0x3e24) = 0;
  *(undefined4 *)(uVar3 + 0x3e30) = 0;
  *(undefined4 *)(uVar3 + 0x3e34) = 0;
  *(undefined4 *)(uVar3 + 0x3e38) = 0;
  *(undefined4 *)(uVar3 + 0x3e3c) = 0x3f800000;
  *(undefined4 *)(uVar3 + 0x3e40) = 0;
  *(undefined4 *)(uVar3 + 0x3e50) = 0;
  *(undefined4 *)(uVar3 + 0x3e54) = 0;
  *(undefined4 *)(uVar3 + 0x3e58) = 0;
  *(undefined4 *)(uVar3 + 0x3e5c) = 0x3f800000;
  if (param_2 != (undefined4 *)0x0) {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    FUN_00dd6d80(puVar6);
  }
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (*(int *)(param_1 + 0x30) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x30) + 0x878) != 0)) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar6 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar4 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    *(undefined4 *)(uVar3 + 0x500) = 1;
  }
  switch(local_48[0xcc]) {
  case 1:
    FUN_00bb56a0(param_2);
    break;
  default:
    FUN_00bff6b0(param_2);
    break;
  case 3:
    FUN_00bf8bd0(param_2);
    break;
  case 4:
    FUN_00bf8e60(param_2);
    break;
  case 5:
    FUN_00bf90c0(param_2);
    break;
  case 6:
    FUN_00bf9460(param_2);
    break;
  case 7:
    Pl0000::em0080Qte2SafeCheck(param_2);
    break;
  case 8:
    FUN_00bf9c40(param_2);
    break;
  case 9:
    FUN_00bfa4f0(param_2);
    break;
  case 10:
    FUN_00bfa7c0(param_2);
    break;
  case 0xb:
    FUN_00bfaac0(param_2);
    break;
  case 0xc:
    FUN_00bfae40(param_2);
    break;
  case 0xd:
    FUN_00bfb220(param_2);
    break;
  case 0xe:
    FUN_00bfb5a0(param_2);
    break;
  case 0xf:
    FUN_00bfb920(param_2);
    break;
  case 0x10:
    FUN_00bfbd60(param_2);
    break;
  case 0x11:
    FUN_00bfc0c0(param_2);
    break;
  case 0x12:
    FUN_00bfc480(param_2);
    break;
  case 0x13:
    FUN_00bfc7b0(param_2);
    break;
  case 0x14:
    FUN_00bfca80(param_2);
    break;
  case 0x15:
    FUN_00bfce20(param_2);
    break;
  case 0x16:
    FUN_00bff080(param_2);
    break;
  case 0x17:
    FUN_00bfd0e0(param_2);
    break;
  case 0x18:
    FUN_00bfd4b0(param_2);
    break;
  case 0x19:
    FUN_00bfd870(param_2);
    break;
  case 0x1a:
    FUN_00bfdf60(param_2);
    break;
  case 0x1b:
  case 0x1c:
    FUN_00bfe2d0(param_2);
    break;
  case 0x1d:
    FUN_00bf0c10(param_2);
    break;
  case 0x1e:
    FUN_00bfe5e0(param_2);
    break;
  case 0x1f:
    FUN_00bfe970(param_2);
    break;
  case 0x20:
    FUN_00bfed00(param_2);
    break;
  case 0x21:
    FUN_00bff3b0(param_2);
    break;
  case 0x24:
    FUN_00bfdbd0(param_2);
  }
  if (0.0 < (float)local_48[0x43]) {
    uVar1 = local_48[0x43];
    if (local_48[0xe3] != 0) {
      FUN_005edc60(uVar1);
    }
    if (local_48[0xe4] != 0) {
      FUN_005edc60(uVar1);
    }
  }
  if (((local_48[0xbd] == 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
     ((iVar4 = FUN_00a12210(0), iVar4 != 0 && (iVar5 = FUN_00a12210(1), iVar5 != 0)))) {
    local_30 = *(float *)(iVar4 + 0x40);
    local_2c = *(float *)(iVar4 + 0x44);
    local_28 = *(float *)(iVar4 + 0x48);
    local_24 = *(float *)(iVar4 + 0x4c);
    local_40 = *(float *)(iVar5 + 0x40);
    local_3c = *(float *)(iVar5 + 0x44);
    local_38 = *(float *)(iVar5 + 0x48);
    local_34 = *(float *)(iVar5 + 0x4c);
    FUN_00b7da60(&local_40);
    local_20 = local_40 - local_30;
    local_1c = local_3c - local_2c;
    local_18 = local_38 - local_28;
    local_14 = local_34 - local_24;
    FUN_00b7dab0(&local_20);
  }
  StateMachineNode::vf10(param_2);
  return;
}

