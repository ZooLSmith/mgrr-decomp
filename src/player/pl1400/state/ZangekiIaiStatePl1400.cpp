// src/player/pl1400/state/ZangekiIaiStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085FE50..0089E6F0, 9 functions

#include "types.h"

// 0085FE50  ZangekiIaiStatePl1400::vf14  size=5  [class]
undefined4 __thiscall ZangekiIaiStatePl1400::vf14(int param_1,undefined4 param_2)

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

// 0085FE60  ZangekiIaiStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiIaiStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 0085FE70  ZangekiIaiStatePl1400::vf24  size=19  [class]
bool ZangekiIaiStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 0085FEB0  ZangekiIaiStatePl1400::vf00  size=6  [class]
undefined * ZangekiIaiStatePl1400::vf00(void)

{
  return &DAT_01b35b54;
}

// 00868C50  ZangekiIaiStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiIaiStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0088A350  ZangekiIaiStatePl1400::vf08  size=261  [class]
undefined4 __thiscall ZangekiIaiStatePl1400::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(uVar5 + 0x40c8) = 2;
  *(undefined4 *)(uVar5 + 0x4058) = 0;
  iVar2 = FUN_00876530(param_2);
  iVar2 = (iVar2 != 0) + 10;
  uVar3 = (*(code *)**(undefined4 **)param_2[1])(iVar2,param_2);
  FUN_00d82bf0(uVar3,iVar2);
  *(undefined4 *)(uVar5 + 0x40c8) = 0x15;
  FUN_00a7c950();
  *(undefined4 *)(uVar4 + 0x618) = 0;
  *(undefined4 *)(uVar4 + 0x610) = 0xffffffff;
  *(undefined4 *)(uVar4 + 0x614) = 0xffffffff;
  *(undefined4 *)(uVar4 + 0x61c) = 0;
  FUN_00e25500(0);
  *(undefined4 *)(uVar4 + 0x5ec) = 0;
  *(undefined4 *)(uVar4 + 0x5e8) = 0;
  return 1;
}

// 0088A460  ZangekiIaiStatePl1400::vf0C  size=74  [class]
void __thiscall ZangekiIaiStatePl1400::vf0C(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00877160(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    FUN_00877430(param_2);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 0088A4B0  ZangekiIaiStatePl1400::vf20  size=494  [class]
undefined4 __thiscall ZangekiIaiStatePl1400::vf20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  iVar1 = StateMachineNode::vf20(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar2 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  piVar3[0x1032] = 0;
  piVar3[0xd07] = 0;
  piVar3[0x1016] = 0;
  FUN_00877940(param_2,param_1);
  FUN_00a7c950();
  *(undefined4 *)(uVar2 + 0x618) = 0;
  *(undefined4 *)(uVar2 + 0x610) = 0xffffffff;
  *(undefined4 *)(uVar2 + 0x614) = 0xffffffff;
  *(undefined4 *)(uVar2 + 0x61c) = 0;
  if (piVar3[0xf86] == 0) {
    piVar3[0xf86] = 1;
  }
  if (piVar3[0xf87] == 0) {
    piVar3[0xf87] = 1;
  }
  if (*(int *)(uVar2 + 0x628) != 0) {
    local_20 = 0;
    fVar4 = (float10)fpatan((float10)*(float *)(uVar2 + 0x640) - (float10)*(float *)(uVar2 + 0x630),
                            (float10)*(float *)(uVar2 + 0x648) - (float10)*(float *)(uVar2 + 0x638))
    ;
    local_1c = (float)fVar4;
    local_18 = 0;
    (**(code **)(*piVar3 + 0x88))(&local_20);
    *(undefined4 *)(uVar2 + 0x628) = 0;
    *(undefined4 *)(uVar2 + 0x630) = 0;
    *(undefined4 *)(uVar2 + 0x634) = 0;
    *(undefined4 *)(uVar2 + 0x638) = 0;
    *(undefined4 *)(uVar2 + 0x63c) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x64c) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x640) = 0;
    *(undefined4 *)(uVar2 + 0x644) = 0;
    *(undefined4 *)(uVar2 + 0x648) = 0;
    *(undefined4 *)(uVar2 + 0x688) = 0;
    *(undefined4 *)(uVar2 + 0x684) = 0;
    *(undefined4 *)(uVar2 + 0x680) = 0;
    *(undefined4 *)(uVar2 + 0x67c) = 0;
    *(undefined4 *)(uVar2 + 0x674) = 0;
    *(undefined4 *)(uVar2 + 0x670) = 0;
    *(undefined4 *)(uVar2 + 0x66c) = 0;
    *(undefined4 *)(uVar2 + 0x668) = 0;
    *(undefined4 *)(uVar2 + 0x660) = 0;
    *(undefined4 *)(uVar2 + 0x65c) = 0;
    *(undefined4 *)(uVar2 + 0x658) = 0;
    *(undefined4 *)(uVar2 + 0x654) = 0;
    *(undefined4 *)(uVar2 + 0x68c) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x678) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x664) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x650) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x690) = 0;
    return 1;
  }
  return 1;
}

// 0089E6F0  ZangekiIaiStatePl1400::vf10  size=1228  [class]
void __thiscall ZangekiIaiStatePl1400::vf10(float param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  float fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fStack_160;
  float *pfStack_15c;
  float *pfStack_158;
  undefined4 *puStack_154;
  undefined4 uStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_88 [5];
  undefined1 auStack_74 [112];
  
  piVar8 = (int *)0x0;
  local_134 = param_1;
  if (param_2 == (undefined4 *)0x0) {
    local_138 = 0.0;
  }
  else {
    puStack_154 = (undefined4 *)&DAT_01b35b78;
    pfStack_158 = (float *)0x89e71f;
    (**(code **)*param_2)();
    pfStack_158 = (float *)0x89e726;
    iVar6 = FUN_00dd6d80();
    local_138 = (float)(-(uint)(iVar6 != 0) & (uint)param_2);
  }
  piVar4 = *(int **)((int)local_138 + 0x5e0);
  if (piVar4 != (int *)0x0) {
    puStack_154 = (undefined4 *)&DAT_01b35b20;
    pfStack_158 = (float *)0x89e74c;
    (**(code **)(*piVar4 + 4))();
    pfStack_158 = (float *)0x89e753;
    iVar6 = FUN_00dd6d80();
    piVar8 = (int *)(-(uint)(iVar6 != 0) & (uint)piVar4);
  }
  fVar9 = local_134;
  if (((((DAT_01bea060 & 0x40000000) != 0) && ((DAT_01bea060 & 0x40) != 0)) &&
      ((DAT_01bea064 & 0x8000000) != 0)) && ((DAT_01bea070 & 0x200000) != 0)) {
    if (param_2 != (undefined4 *)0x0) {
      puStack_154 = (undefined4 *)&DAT_01b35b78;
      pfStack_158 = (float *)0x89e798;
      (**(code **)*param_2)();
      pfStack_158 = (float *)0x89e79f;
      FUN_00dd6d80();
    }
    puStack_154 = (undefined4 *)0x89e7ac;
    FUN_00b83e50();
    fVar9 = local_134;
    puStack_154 = (undefined4 *)0x64;
    pfStack_158 = (float *)0x1;
    pfStack_15c = (float *)0x89e7bb;
    FUN_00d82510();
  }
  puStack_154 = (undefined4 *)0x16;
  pfStack_158 = (float *)0x89e7ca;
  iVar6 = FUN_00a8c760();
  if (iVar6 != 0) {
    pfStack_158 = (float *)(uint)(0.0 < *(float *)((int)fVar9 + 0x30));
    puStack_154 = (undefined4 *)0x0;
    pfStack_15c = (float *)0x64;
    fStack_160 = fVar9;
    iVar6 = FUN_0089c390(param_2);
    if (iVar6 != 0) {
      puStack_154 = (undefined4 *)0x89e7fd;
      FUN_00b7aa80();
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puStack_154 = (undefined4 *)&DAT_01b35b78;
    pfStack_158 = (float *)0x89e812;
    (**(code **)*param_2)();
    pfStack_158 = (float *)0x89e819;
    iVar6 = FUN_00dd6d80();
    uVar7 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar7 + 0x2f4) == 0) {
    puStack_154 = param_2;
    pfStack_158 = (float *)0x89e82e;
    FUN_00876030();
  }
  puStack_154 = param_2;
  pfStack_158 = (float *)0x89e837;
  FUN_008774a0();
  fVar12 = local_138;
  if ((*(float *)((int)fVar9 + 0x30) == 0.0) && ((*(byte *)(piVar8 + 0x33f) & 0x20) != 0)) {
    *(undefined4 *)((int)fVar9 + 0x30) = 0x41a00000;
  }
  fVar5 = *(float *)((int)fVar9 + 0x30) - (float)piVar8[0x244];
  *(float *)((int)fVar9 + 0x30) = fVar5;
  if (fVar5 < 0.0) {
    *(undefined4 *)((int)fVar9 + 0x30) = 0;
  }
  if (*(int *)((int)local_138 + 0x628) != 0) {
    afStack_88[0] = 0.0;
    fVar9 = (float)((int)local_138 + 0x650);
    fStack_8c = 0.0;
    fStack_90 = 0.0;
    pfStack_15c = &fStack_120;
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    fStack_a8 = 0.0;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b8 = 0;
    uStack_bc = 0;
    afStack_88[1] = 1.0;
    uStack_98 = 0x3f800000;
    fStack_ac = 1.0;
    uStack_c0 = 0x3f800000;
    uStack_124 = 0x3f800000;
    uStack_e4 = 0x3f800000;
    fStack_f4 = 1.0;
    fStack_11c = 1.0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    fStack_120 = 0.0;
    fStack_118 = 0.0;
    fStack_160 = 1.266515e-38;
    pfStack_158 = pfStack_15c;
    puStack_154 = (undefined4 *)fVar9;
    D3DXVec3TransformNormal();
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    uStack_e4 = 0x3f800000;
    fStack_160 = fVar9;
    D3DXVec3TransformNormal(&fStack_ec,&fStack_ec);
    afStack_88[0] = 1.0;
    afStack_88[1] = 0.0;
    afStack_88[2] = 0.0;
    D3DXVec3TransformNormal(afStack_88,afStack_88,fVar9);
    puStack_154 = *(undefined4 **)((int)fVar12 + 0x680);
    uVar1 = *(undefined4 *)((int)fVar12 + 0x684);
    uVar2 = *(undefined4 *)((int)fVar12 + 0x688);
    uVar3 = *(undefined4 *)((int)fVar12 + 0x68c);
    local_134 = fStack_104;
    uStack_130 = uStack_100;
    uStack_12c = uStack_fc;
    uStack_128 = uStack_f8;
    fVar10 = (float10)FUN_00b8bc30();
    FUN_00ddcfe0(auStack_74,&uStack_144,(float)fVar10);
    D3DXVec3TransformNormal(&local_134,&local_134,auStack_74);
    fStack_120 = fStack_140 + fStack_160;
    fStack_11c = fStack_13c + (float)pfStack_15c;
    fStack_118 = local_138 + (float)pfStack_158;
    fStack_114 = local_134 + (float)puStack_154;
    uStack_124 = uStack_144;
    uStack_130 = uVar1;
    uStack_12c = uVar2;
    uStack_128 = uVar3;
    FUN_00db6410(&fStack_f0,&fStack_160,&fStack_120,&uStack_130);
    fStack_ac = SQRT(fStack_e8 * fStack_e8 + fStack_f0 * fStack_f0 + fStack_ec * fStack_ec);
    fStack_a8 = SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc);
    fVar9 = SQRT(fStack_c8 * fStack_c8 + fStack_d0 * fStack_d0 + fStack_cc * fStack_cc);
    fVar12 = fStack_d8 / fVar9;
    fStack_f4 = fStack_c8 / fVar9;
    fVar10 = (float10)FUN_00ddbaa0(-(fStack_e8 / fVar9));
    fVar11 = (float10)fpatan((float10)fVar12,(float10)fStack_f4);
    fStack_90 = (float)fVar11;
    fStack_8c = (float)fVar10;
    fVar10 = (float10)fpatan((float10)fStack_ec / (float10)fStack_a8,
                             (float10)fStack_f0 / (float10)fStack_ac);
    afStack_88[0] = (float)fVar10;
    (**(code **)(*piVar8 + 0x88))(&fStack_90);
    FUN_00da8810(0x41a00000);
    FUN_00db3e80(0x41a00000,1,&DAT_01bea1d0);
    StateMachineNode::vf10(param_2);
    return;
  }
  puStack_154 = param_2;
  pfStack_158 = (float *)0x89ebb3;
  StateMachineNode::vf10();
  return;
}

