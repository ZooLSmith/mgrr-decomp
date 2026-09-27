// src/player/pl0010/state/ZangekiOnPartsStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83760..00BFFF20, 12 functions

#include "types.h"

// 00B83760  ZangekiOnPartsStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiOnPartsStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B83770  ZangekiOnPartsStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiOnPartsStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B83780  ZangekiOnPartsStatePl0010::vf24  size=19  [class]
bool ZangekiOnPartsStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B837A0  ZangekiOnPartsStatePl0010::ZangekiOnPartsStatePl0010  size=36  [class]
undefined4 * __thiscall
ZangekiOnPartsStatePl0010::ZangekiOnPartsStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a603a0();
  return param_1;
}

// 00B837D0  ZangekiOnPartsStatePl0010::vf00  size=6  [class]
undefined * ZangekiOnPartsStatePl0010::vf00(void)

{
  return &DAT_01be9ee0;
}

// 00B918B0  ZangekiOnPartsStatePl0010::vf04  size=42  [class]
undefined4 * __thiscall ZangekiOnPartsStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  cXml::cXml_7();
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB75F0  ZangekiOnPartsStatePl0010::vf08  size=1077  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ZangekiOnPartsStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
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
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  DAT_01bea060 = DAT_01bea060 | 0x400;
  *(undefined4 *)(uVar5 + 0x40c8) = 0xf;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(uVar4 + 0x2fc) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  _DAT_01d61a90 = 0;
  _DAT_01d61a94 = 0;
  _DAT_01d61a98 = 0;
  _DAT_01d61a9c = 0x3f800000;
  _DAT_01d61aac = 0x3f800000;
  _DAT_01d61aa0 = 0;
  _DAT_01d61aa4 = 0;
  _DAT_01d61aa8 = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0xd8) = _DAT_01d61ab0;
  if (*(float *)(param_1 + 0xd8) == 0.0) {
    *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  }
  FUN_00b85350(0x43340000,0x3f800000,0x3f800000,0,0,0x3dcccccd);
  FUN_00b7aa80();
  FUN_008e6d00();
  FUN_008e5c50(6);
  FUN_008e0b70(0);
  *(undefined4 *)(uVar5 + 0x3e18) = 0;
  *(undefined4 *)(uVar5 + 0x3e1c) = 0;
  *(undefined4 *)(uVar5 + 0x3e20) = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar6 = &DAT_01b35260;
    (**(code **)(*piVar3 + 4))(&DAT_01b35260);
    iVar2 = FUN_00dd6d80(puVar6);
    if (iVar2 != 0) {
      FUN_005ca330(0x3f800000);
    }
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    iVar1 = *(int *)(uVar4 + 0x408);
    if (iVar1 < 0x3b) {
      if (iVar1 == 0x3a) {
        *(undefined4 *)(param_1 + 0x38) = 8;
      }
      else {
        switch(iVar1) {
        case 6:
          *(undefined4 *)(param_1 + 0x38) = 1;
          break;
        case 0xe:
          *(undefined4 *)(param_1 + 0x38) = 0xd;
          break;
        case 0x18:
          *(undefined4 *)(param_1 + 0x38) = 0xe;
          break;
        case 0x20:
          *(undefined4 *)(param_1 + 0x38) = 6;
          break;
        case 0x26:
          *(undefined4 *)(param_1 + 0x38) = 5;
          break;
        case 0x2b:
          *(undefined4 *)(param_1 + 0x38) = 4;
          break;
        case -1:
          *(undefined4 *)(param_1 + 0x38) = 0xc;
        }
      }
    }
    else if (iVar1 < 0x40a) {
      if (iVar1 == 0x409) {
        *(undefined4 *)(param_1 + 0x38) = 0xf;
      }
      else {
        switch(iVar1) {
        case 0x110:
          if (*(int *)(iVar2 + 0x4b0) == 0x20200) {
            *(undefined4 *)(param_1 + 0x38) = 3;
          }
          if (*(int *)(iVar2 + 0x4b0) == 0x2020a) {
            *(undefined4 *)(param_1 + 0x38) = 0xb;
          }
          break;
        case 0x111:
          if (*(int *)(iVar2 + 0x4b0) == 0x20200) {
            *(undefined4 *)(param_1 + 0x38) = 2;
          }
          if (*(int *)(iVar2 + 0x4b0) == 0x2020a) {
            *(undefined4 *)(param_1 + 0x38) = 10;
          }
          break;
        case 0x112:
          *(undefined4 *)(param_1 + 0x38) = 7;
          break;
        case 0x114:
          *(undefined4 *)(param_1 + 0x38) = 9;
        }
      }
    }
    else if ((iVar1 == 0x509) || (iVar1 == 0x609)) {
      *(undefined4 *)(param_1 + 0x38) = 0x10;
    }
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0x3f800000;
  DAT_01d61a88 = 1;
  *(undefined4 *)(uVar4 + 0x4a0) = 0;
  if (((((DAT_01bea090 & 0x80000000) != 0) && (0 < *(int *)(param_1 + 0x38))) &&
      (*(int *)(param_1 + 0x38) < 0xc)) && (iVar2 = FUN_009c4bf0(), iVar2 < 3)) {
    _DAT_01d61384 = 0x10;
    _DAT_01d61388 = 0;
    _DAT_01d6138c = 1;
  }
  return 1;
}

// 00BCFF40  ZangekiOnPartsStatePl0010::vf0C  size=1606  [class]
void __thiscall ZangekiOnPartsStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  code *pcVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float *local_248;
  undefined4 *local_244;
  float local_230;
  int *local_22c;
  undefined4 local_228;
  float fStack_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float fStack_210;
  float local_20c;
  float *local_208;
  float local_204;
  undefined1 local_200 [12];
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined1 auStack_1dc [4];
  undefined4 uStack_1d8;
  int local_1d4;
  undefined1 auStack_1cc [4];
  undefined1 auStack_1c8 [8];
  float local_1c0;
  float local_1bc;
  float local_1b8 [3];
  undefined1 auStack_1ac [12];
  undefined1 local_1a0 [64];
  undefined1 auStack_160 [348];
  
  if (*(int *)(param_1 + 0x20) != 0) goto LAB_00bd0572;
  if (param_2 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    local_244 = (undefined4 *)&DAT_01be9ef4;
    local_248 = (float *)0xbcff73;
    (**(code **)*param_2)();
    local_248 = (float *)0xbcff7a;
    iVar8 = FUN_00dd6d80();
    uVar10 = -(uint)(iVar8 != 0) & (uint)param_2;
  }
  piVar5 = *(int **)(uVar10 + 0xc);
  if (piVar5 == (int *)0x0) {
    local_208 = (float *)0x0;
  }
  else {
    local_244 = (undefined4 *)&DAT_01be9db8;
    local_248 = (float *)0xbcff9d;
    (**(code **)(*piVar5 + 4))();
    local_248 = (float *)0xbcffa4;
    iVar8 = FUN_00dd6d80();
    local_208 = (float *)(-(uint)(iVar8 != 0) & (uint)piVar5);
  }
  local_244 = (undefined4 *)0xbcffb9;
  local_1d4 = FUN_00a81330();
  if (local_1d4 != 0) {
    local_244 = (undefined4 *)0xbcffcc;
    iVar8 = FUN_00a7c8a0();
    if (iVar8 != 0) {
      local_244 = *(undefined4 **)(uVar10 + 0x408);
      local_248 = (float *)0xbcffe2;
      iVar8 = FUN_00a12210();
      if (iVar8 != 0) {
        local_220 = *(float *)(iVar8 + 0x40);
        local_21c = *(float *)(iVar8 + 0x44);
        local_218 = *(float *)(iVar8 + 0x48);
        local_214 = *(float *)(iVar8 + 0x4c);
        local_230 = SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                         *(float *)(iVar8 + 0x10) * *(float *)(iVar8 + 0x10) +
                         *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
        local_22c = (int *)SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                                *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                                *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
        fVar1 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
                     *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
                     *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
        local_20c = *(float *)(iVar8 + 0x28) / fVar1;
        local_204 = *(float *)(iVar8 + 0x38) / fVar1;
        local_244 = (undefined4 *)-(*(float *)(iVar8 + 0x18) / fVar1);
        local_248 = (float *)0xbd0093;
        fVar12 = (float10)FUN_00ddbaa0();
        local_248 = (float *)0x5;
        fVar13 = (float10)fpatan((float10)local_20c,(float10)local_204);
        local_1c0 = (float)fVar13;
        local_1bc = (float)fVar12;
        fVar12 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)(float)local_22c,
                                 (float10)*(float *)(iVar8 + 0x10) / (float10)local_230);
        local_1b8[0] = (float)fVar12;
        local_230 = 0.0;
        local_22c = (int *)0x0;
        local_228 = 0x3f800000;
        FUN_00ddc1d0(local_1a0,&local_1c0);
        local_244 = (undefined4 *)local_1a0;
        local_248 = &local_230;
        D3DXVec3TransformNormal(local_200);
        FUN_00ddc1d0(auStack_1ac,auStack_1cc,5);
        D3DXVec3TransformNormal(auStack_1dc,&stack0xfffffdc4,auStack_1ac);
        local_248 = (float *)0x0;
        local_244 = (undefined4 *)0x3f800000;
        FUN_00ddc1d0(local_1b8,&uStack_1d8,5);
        D3DXVec3TransformNormal(&local_208,&local_248,local_1b8);
        *(undefined4 **)(param_1 + 0x60) = local_244;
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        fVar1 = *(float *)(uVar10 + 0x450);
        fVar2 = *(float *)(uVar10 + 0x458);
        local_248 = (float *)(fVar2 * local_218 + fStack_1e8 * fVar1 + 0.0);
        fVar3 = *(float *)(uVar10 + 0x454);
        *(float *)(param_1 + 0xb0) =
             local_214 * fVar3 + fStack_224 * fVar2 + fStack_1f4 * fVar1 + (float)local_244;
        *(float *)(param_1 + 0xb4) =
             fStack_210 * fVar3 + local_220 * fVar2 + fStack_1f0 * fVar1 + 0.0;
        *(float *)(param_1 + 0xb8) =
             local_20c * fVar3 + local_21c * fVar2 + fStack_1ec * fVar1 + 1.0;
        *(float *)(param_1 + 0xbc) = fVar3 * (float)local_208 + (float)local_248;
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(uVar10 + 0x430);
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(uVar10 + 0x434);
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(uVar10 + 0x438);
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(uVar10 + 0x43c);
        fVar1 = *(float *)(uVar10 + 0x410);
        fVar2 = *(float *)(uVar10 + 0x418);
        fVar4 = *(float *)(uVar10 + 0x414);
        *(float *)(param_1 + 0x70) =
             local_214 * fVar4 + fStack_224 * fVar2 + fVar1 * fStack_1f4 + (float)local_244;
        *(float *)(param_1 + 0x74) =
             fStack_210 * fVar4 + local_220 * fVar2 + fStack_1f0 * fVar1 + 0.0;
        *(float *)(param_1 + 0x78) =
             local_20c * fVar4 + local_21c * fVar2 + fStack_1ec * fVar1 + 1.0;
        *(float *)(param_1 + 0x7c) =
             (float)local_208 * fVar4 + local_218 * fVar2 + fStack_1e8 * fVar1 + 0.0;
        local_244 = (undefined4 *)(local_214 * fVar3);
        thunk_FUN_00dde510(auStack_1cc,auStack_1c8,(float *)(param_1 + 0x60),
                           (float *)(param_1 + 0x70));
        *(undefined4 *)(param_1 + 0xa0) = 0;
        fVar12 = (float10)fpatan((float10)*(float *)(param_1 + 0x60) -
                                 (float10)*(float *)(param_1 + 0x70),
                                 (float10)*(float *)(param_1 + 0x68) -
                                 (float10)*(float *)(param_1 + 0x78));
        *(float *)(param_1 + 0xa4) = (float)fVar12;
        iVar8 = *local_22c;
        *(undefined4 *)(param_1 + 0x80) = 0;
        pcVar6 = *(code **)(iVar8 + 0x84);
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(float *)(param_1 + 0x84) = (float)fVar12;
        *(undefined4 *)(param_1 + 0x8c) = uStack_1d8;
        *(int *)(param_1 + 0x40) = local_22c[0x10];
        *(int *)(param_1 + 0x44) = local_22c[0x11];
        *(int *)(param_1 + 0x48) = local_22c[0x12];
        *(int *)(param_1 + 0x4c) = local_22c[0x13];
        puVar9 = (undefined4 *)(*pcVar6)();
        *(undefined4 *)(param_1 + 0x50) = *puVar9;
        *(undefined4 *)(param_1 + 0x54) = puVar9[1];
        *(undefined4 *)(param_1 + 0x58) = puVar9[2];
        *(undefined4 *)(param_1 + 0x5c) = puVar9[3];
        *(float *)(param_1 + 0xdc) =
             SQRT(*(float *)(uVar10 + 0x418) * *(float *)(uVar10 + 0x418) +
                  *(float *)(uVar10 + 0x410) * *(float *)(uVar10 + 0x410) +
                  *(float *)(uVar10 + 0x414) * *(float *)(uVar10 + 0x414));
        if (*(int *)(local_1d4 + 0x24) == 0x20200) {
          if (param_2 == (undefined4 *)0x0) {
            uVar11 = 0;
          }
          else {
            local_244 = (undefined4 *)&DAT_01be9ef4;
            local_248 = (float *)0xbd0453;
            (**(code **)*param_2)();
            local_248 = (float *)0xbd045a;
            iVar8 = FUN_00dd6d80();
            uVar11 = -(uint)(iVar8 != 0) & (uint)param_2;
          }
          if (*(int *)(uVar11 + 0x4c4) != 2) {
            local_244 = param_2;
            local_248 = (float *)0xbd0475;
            FUN_00b92d70();
            *(undefined4 *)(uVar11 + 0x4c4) = 2;
            local_248 = (float *)0x16495a4;
LAB_00bd04d4:
            FUN_00e5e1b0();
          }
        }
        else if (*(int *)(local_1d4 + 0x24) == 0x2020a) {
          if (param_2 == (undefined4 *)0x0) {
            uVar11 = 0;
          }
          else {
            local_244 = (undefined4 *)&DAT_01be9ef4;
            local_248 = (float *)0xbd04a3;
            (**(code **)*param_2)();
            local_248 = (float *)0xbd04aa;
            iVar8 = FUN_00dd6d80();
            uVar11 = -(uint)(iVar8 != 0) & (uint)param_2;
          }
          if (*(int *)(uVar11 + 0x4c4) != 3) {
            local_244 = param_2;
            local_248 = (float *)0xbd04c5;
            FUN_00b92d70();
            *(undefined4 *)(uVar11 + 0x4c4) = 3;
            local_248 = (float *)0x1649588;
            goto LAB_00bd04d4;
          }
        }
      }
    }
  }
  local_244 = (undefined4 *)0x0;
  local_248 = (float *)0x0;
  (**(code **)(*(int *)(uVar10 + 400) + 8))(0);
  pfVar7 = local_208;
  local_244 = (undefined4 *)0x0;
  local_248 = local_208;
  FUN_004039a0(1);
  local_248 = (float *)0xbd051f;
  local_244 = (undefined4 *)(uVar10 + 400);
  FUN_00dffb30();
  local_248 = (float *)pfVar7[0x13c];
  local_244 = (undefined4 *)0x0;
  FUN_00e03080();
  local_244 = (undefined4 *)0xbd053f;
  local_248 = (float *)FUN_00a81330();
  if (local_248 != (float *)0x0) {
    local_244 = (undefined4 *)0x1;
    FUN_00e03080();
  }
  local_244 = (undefined4 *)auStack_160;
  local_248 = (float *)0x10010;
  FUN_00a8c8b0();
  *(undefined4 *)(param_1 + 0x160) = 0x420c0000;
LAB_00bd0572:
  local_244 = param_2;
  local_248 = (float *)0xbd057d;
  StateMachineNode::vf0C();
  return;
}

// 00BD0590  ZangekiOnPartsStatePl0010::vf20  size=362  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ZangekiOnPartsStatePl0010::vf20(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar3 + 0x40c8) = 0;
  FUN_00b7aa80();
  DAT_01dc08bc = 0;
  DAT_01dc08d4 = 0;
  *(undefined4 *)(uVar4 + 0x2fc) = 0;
  if (*(int *)(uVar4 + 0x300) != 0) {
    *(undefined4 *)(uVar4 + 0x300) = 0;
  }
  DAT_01bea060 = DAT_01bea060 & 0xfffffbff;
  _DAT_01d61a90 = 0;
  _DAT_01d61a94 = 0;
  _DAT_01d61a98 = 0;
  _DAT_01d61a9c = 0x3f800000;
  _DAT_01d61ab0 = 0;
  FUN_008e6d00();
  FUN_008e5c50(6);
  FUN_008e6c60(1);
  FUN_008e0b70(1);
  DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  FUN_00a7c950();
  _DAT_01d61384 = 0xffffffff;
  FUN_00bbc7f0(param_2,param_1);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c950();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_009fdde0();
    }
  }
  DAT_01d61a88 = 0;
  *(undefined4 *)(uVar4 + 0x4a0) = 0;
  return 1;
}

// 00BD0700  FUN_00bd0700  size=5691  [callgraph]
void __thiscall FUN_00bd0700(int param_1,float ***param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 **ppuVar9;
  undefined4 **ppuVar10;
  float **ppfVar11;
  float **ppfVar12;
  undefined4 **ppuVar13;
  undefined4 ***pppuVar14;
  int iVar15;
  uint uVar16;
  float10 fVar17;
  float10 fVar18;
  float ****ppppfStack_190;
  undefined1 *puStack_18c;
  float *pfStack_188;
  float ***pppfStack_184;
  undefined1 *puStack_180;
  float *pfStack_17c;
  float ***pppfStack_178;
  undefined4 **ppuStack_174;
  undefined4 **ppuStack_170;
  undefined4 ***pppuStack_16c;
  undefined4 ***pppuStack_168;
  undefined4 ***pppuStack_164;
  float **ppfStack_160;
  float **ppfStack_15c;
  float *pfStack_158;
  float *pfStack_154;
  float **ppfStack_150;
  float *pfStack_14c;
  float *pfStack_148;
  float *local_144;
  float fStack_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 **ppuStack_124;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  undefined4 ***local_c8;
  undefined4 **local_c4;
  float fStack_c0;
  float **ppfStack_bc;
  float local_b8;
  float local_b4;
  float **ppfStack_b0;
  float **ppfStack_ac;
  undefined4 ***pppuStack_a8;
  float fStack_a4;
  float **local_a0;
  float local_9c;
  undefined1 auStack_98 [4];
  float *apfStack_94 [2];
  undefined1 auStack_8c [4];
  float *pfStack_88;
  int local_84;
  float fStack_80;
  float fStack_7c;
  float *pfStack_78;
  undefined4 **ppuStack_74;
  float local_70;
  float local_6c;
  undefined4 *local_68 [2];
  float local_60;
  undefined4 *local_5c;
  float local_58;
  undefined4 *local_50 [19];
  
  if (param_2 == (float ***)0x0) {
    uVar16 = 0;
  }
  else {
    local_144 = (float *)&DAT_01be9ef4;
    pfStack_148 = (float *)0xbd0729;
    (*(code *)**param_2)();
    pfStack_148 = (float *)0xbd0730;
    iVar15 = FUN_00dd6d80();
    uVar16 = -(uint)(iVar15 != 0) & (uint)param_2;
  }
  piVar7 = *(int **)(uVar16 + 0xc);
  if (piVar7 == (int *)0x0) {
    local_b4 = 0.0;
  }
  else {
    local_144 = (float *)&DAT_01be9db8;
    pfStack_148 = (float *)0xbd0756;
    (**(code **)(*piVar7 + 4))();
    pfStack_148 = (float *)0xbd075d;
    iVar15 = FUN_00dd6d80();
    local_b4 = (float)(-(uint)(iVar15 != 0) & (uint)piVar7);
  }
  if (*(int *)(uVar16 + 0x484) == 0) {
    local_144 = (float *)0xbd0782;
    iVar15 = FUN_00a81330();
    if (iVar15 == 0) {
      return;
    }
    local_144 = (float *)0xbd0791;
    iVar15 = FUN_00a7c8a0();
    if (iVar15 == 0) {
      return;
    }
    local_144 = *(float **)(uVar16 + 0x408);
    pfStack_148 = (float *)0xbd07a7;
    iVar15 = FUN_00a12210();
    if (iVar15 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0xc) {
      return;
    }
    local_100 = *(float *)(iVar15 + 0x40);
    local_fc = *(float *)(iVar15 + 0x44);
    local_f8 = *(float *)(iVar15 + 0x48);
    local_f4 = *(float *)(iVar15 + 0x4c);
    local_a0 = (float **)
               SQRT(*(float *)(iVar15 + 0x14) * *(float *)(iVar15 + 0x14) +
                    *(float *)(iVar15 + 0x10) * *(float *)(iVar15 + 0x10) +
                    *(float *)(iVar15 + 0x18) * *(float *)(iVar15 + 0x18));
    local_9c = SQRT(*(float *)(iVar15 + 0x20) * *(float *)(iVar15 + 0x20) +
                    *(float *)(iVar15 + 0x24) * *(float *)(iVar15 + 0x24) +
                    *(float *)(iVar15 + 0x28) * *(float *)(iVar15 + 0x28));
    fVar1 = SQRT(*(float *)(iVar15 + 0x38) * *(float *)(iVar15 + 0x38) +
                 *(float *)(iVar15 + 0x34) * *(float *)(iVar15 + 0x34) +
                 *(float *)(iVar15 + 0x30) * *(float *)(iVar15 + 0x30));
    local_104 = *(float *)(iVar15 + 0x28) / fVar1;
    local_b8 = *(float *)(iVar15 + 0x38) / fVar1;
    local_144 = (float *)-(*(float *)(iVar15 + 0x18) / fVar1);
    pfStack_148 = (float *)0xbd0871;
    fVar17 = (float10)FUN_00ddbaa0();
    pfStack_148 = (float *)0x5;
    fVar18 = (float10)fpatan((float10)local_104,(float10)local_b8);
    pfStack_14c = &local_60;
    local_60 = (float)fVar18;
    local_5c = (undefined4 *)(float)fVar17;
    fVar17 = (float10)fpatan((float10)*(float *)(iVar15 + 0x14) / (float10)local_9c,
                             (float10)*(float *)(iVar15 + 0x10) / (float10)(float)local_a0);
    local_58 = (float)fVar17;
    local_130 = 0.0;
    local_12c = 0.0;
    local_128 = 1.0;
    ppfStack_150 = (float **)local_50;
    pfStack_154 = (float *)0xbd08d0;
    FUN_00ddc1d0();
    local_144 = (float *)local_50;
    pfStack_148 = &local_130;
    pfStack_14c = &local_f0;
    ppfStack_150 = (float **)0xbd08ea;
    D3DXVec3TransformNormal();
    ppfStack_150 = (float **)0x5;
    pfStack_154 = &local_6c;
    pfStack_158 = (float *)&local_5c;
    fStack_134 = 0.0;
    ppfStack_15c = (float **)0xbd0911;
    FUN_00ddc1d0();
    ppfStack_150 = (float **)&local_5c;
    pfStack_154 = (float *)&stack0xfffffec4;
    pfStack_158 = &fStack_dc;
    ppfStack_15c = (float **)0xbd092b;
    D3DXVec3TransformNormal();
    pfStack_148 = (float *)0x0;
    ppfStack_15c = (float **)0x5;
    ppfStack_160 = &pfStack_78;
    local_144 = (float *)0x3f800000;
    pppuStack_164 = (undefined4 ***)local_68;
    pppuStack_168 = (float ***)0xbd0952;
    FUN_00ddc1d0();
    ppfStack_15c = (float **)local_68;
    ppfStack_160 = &pfStack_148;
    pppuStack_164 = (undefined4 ***)&local_f8;
    pppuStack_168 = (float ***)0xbd096c;
    D3DXVec3TransformNormal();
    *(undefined4 ***)(param_1 + 0x60) = ppuStack_124;
    *(undefined4 **)(param_1 + 100) = puStack_120;
    *(undefined4 **)(param_1 + 0x68) = puStack_11c;
    *(undefined4 **)(param_1 + 0x6c) = puStack_118;
    fVar1 = *(float *)(uVar16 + 0x450);
    fVar2 = *(float *)(uVar16 + 0x458);
    ppuVar13 = (undefined4 **)((float)puStack_120 + fVar1 * local_f0 + fStack_110 * fVar2);
    ppuVar10 = (undefined4 **)(fStack_10c * fVar2 + (float)puStack_11c + fVar1 * fStack_ec);
    ppuVar9 = (undefined4 **)(fVar2 * fStack_108 + fVar1 * fStack_e8 + (float)puStack_118);
    fVar3 = *(float *)(uVar16 + 0x454);
    pfStack_154 = (float *)(local_104 * fVar3);
    ppfStack_150 = (float **)(local_100 * fVar3);
    *(float *)(param_1 + 0xb0) =
         (float)pfStack_154 + fStack_114 * fVar2 + local_f4 * fVar1 + (float)ppuStack_124;
    *(float *)(param_1 + 0xb4) = (float)ppuVar13 + (float)ppfStack_150;
    *(float *)(param_1 + 0xb8) = local_fc * fVar3 + (float)ppuVar10;
    *(float *)(param_1 + 0xbc) = fVar3 * local_f8 + (float)ppuVar9;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(uVar16 + 0x430);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(uVar16 + 0x434);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(uVar16 + 0x438);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(uVar16 + 0x43c);
    if (*(int *)(uVar16 + 0x47c) == 0) {
      if (*(int *)(uVar16 + 0x480) != 0) {
        fVar3 = *(float *)((int)fStack_d8 + 0x341c) / *(float *)(param_1 + 0xd8);
        fVar2 = 1.0 - fVar3;
        pfStack_14c = (float *)(*(float *)(uVar16 + 0x418) * fVar3);
        fVar1 = fVar3 * *(float *)(uVar16 + 0x410) + fVar2 * *(float *)(uVar16 + 0x420);
        fVar3 = *(float *)(uVar16 + 0x414) * fVar3 + *(float *)(uVar16 + 0x424) * fVar2;
        fVar2 = (float)pfStack_14c + *(float *)(uVar16 + 0x428) * fVar2;
        pfStack_154 = (float *)(local_f4 * fVar1);
        ppfStack_150 = (float **)(fStack_110 * fVar2);
        *(float *)(param_1 + 0x70) =
             fStack_114 * fVar2 + (float)pfStack_154 + (float)ppuStack_124 + local_104 * fVar3;
        *(float *)(param_1 + 0x74) =
             fVar3 * local_100 + (float)puStack_120 + fVar1 * local_f0 + (float)ppfStack_150;
        *(float *)(param_1 + 0x78) =
             (float)puStack_11c + fVar1 * fStack_ec + fStack_10c * fVar2 + fVar3 * local_fc;
        *(float *)(param_1 + 0x7c) =
             fVar2 * fStack_108 + (float)puStack_118 + fVar1 * fStack_e8 + fVar3 * local_f8;
        ppuVar13 = (undefined4 **)(*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60));
        ppuVar10 = (undefined4 **)(*(float *)(param_1 + 0x74) - *(float *)(param_1 + 100));
        ppuVar9 = (undefined4 **)(*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68));
        puStack_118 = (undefined4 *)(*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x6c));
        ppuStack_124 = ppuVar13;
        puStack_120 = ppuVar10;
        puStack_11c = ppuVar9;
        if ((((float)ppuVar13 != 0.0) || ((float)ppuVar10 != 0.0)) || ((float)ppuVar9 != 0.0)) {
          fVar1 = (float)ppuVar9 * (float)ppuVar9 +
                  (float)ppuVar13 * (float)ppuVar13 + (float)ppuVar10 * (float)ppuVar10;
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            pppuStack_16c = &ppuStack_124;
            ppuStack_170 = (undefined4 **)0xbd0d79;
            pppuStack_168 = pppuStack_16c;
            FUN_00ddf460();
            ppuVar9 = (undefined4 **)puStack_11c;
            ppuVar10 = (undefined4 **)puStack_120;
            ppuVar13 = ppuStack_124;
          }
          else {
            pppuStack_168 = (undefined4 ***)&DAT_0163d0ac;
            pppuStack_16c = (undefined4 ***)0xbd0d9a;
            FUN_00dd5650();
            ppuVar9 = (undefined4 **)0x0;
            ppuVar13 = (undefined4 **)0x0;
            ppuVar10 = (undefined4 **)0x3f800000;
          }
        }
        fVar4 = *(float *)(param_1 + 0xdc);
        fVar2 = (float)ppuVar13 * fVar4;
        fVar1 = fVar4 * (float)ppuVar10;
        fVar6 = fVar4 * (float)ppuVar9;
        fVar4 = fVar4 * (float)puStack_118;
        goto LAB_00bd1d01;
      }
      fVar3 = *(float *)(uVar16 + 0x410);
      fVar4 = *(float *)(uVar16 + 0x418);
      fVar5 = *(float *)(uVar16 + 0x414);
      fVar2 = (float)ppuStack_124 + local_f4 * fVar3 + fStack_114 * fVar4 + local_104 * fVar5;
      fVar1 = fVar5 * local_100 + fVar4 * fStack_110 + fVar3 * local_f0 + (float)puStack_120;
      fVar6 = (float)puStack_11c + fVar3 * fStack_ec + fVar4 * fStack_10c + fVar5 * local_fc;
      fVar4 = (float)puStack_118 + fVar3 * fStack_e8 + fVar4 * fStack_108 + fVar5 * local_f8;
      puStack_120 = ppuVar13;
      puStack_11c = ppuVar10;
      puStack_118 = ppuVar9;
LAB_00bd1d13:
      *(float *)(param_1 + 0x70) = fVar2;
      *(float *)(param_1 + 0x74) = fVar1;
    }
    else {
      fVar3 = *(float *)((int)fStack_d8 + 0x341c) / *(float *)(param_1 + 0xd8);
      fVar1 = 1.0 - fVar3;
      fVar2 = *(float *)(uVar16 + 0x410) * fVar3 + *(float *)(uVar16 + 0x420) * fVar1;
      fVar5 = *(float *)(uVar16 + 0x414) * fVar3 + *(float *)(uVar16 + 0x424) * fVar1;
      fVar1 = *(float *)(uVar16 + 0x418) * fVar3 + *(float *)(uVar16 + 0x428) * fVar1;
      pfStack_154 = (float *)(local_f4 * fVar2);
      ppfStack_150 = (float **)(fStack_110 * fVar1);
      pfStack_14c = (float *)(local_fc * fVar5);
      fVar6 = (float)puStack_11c + fStack_ec * fVar2 + fStack_10c * fVar1 + (float)pfStack_14c;
      fVar4 = (float)puStack_118 + fStack_e8 * fVar2 + fStack_108 * fVar1 + local_f8 * fVar5;
      *(float *)(param_1 + 0x70) =
           local_104 * fVar5 + fStack_114 * fVar1 + (float)pfStack_154 + (float)ppuStack_124;
      *(float *)(param_1 + 0x74) =
           local_100 * fVar5 + (float)puStack_120 + local_f0 * fVar2 + (float)ppfStack_150;
      puStack_120 = ppuVar13;
      puStack_11c = ppuVar10;
      puStack_118 = ppuVar9;
    }
  }
  else {
    local_144 = (float *)0xbd0e52;
    iVar15 = FUN_00a81330();
    if (iVar15 == 0) {
      return;
    }
    local_144 = (float *)0xbd0e61;
    local_104 = (float)FUN_00a7c8a0();
    if (local_104 == 0.0) {
      return;
    }
    local_144 = *(float **)(uVar16 + 0x408);
    pfStack_148 = (float *)0xbd0e7b;
    iVar15 = FUN_00a12210();
    local_144 = *(float **)(uVar16 + 0x40c);
    pfStack_148 = (float *)0xbd0e8d;
    local_84 = FUN_00a12210();
    if (iVar15 == 0) {
      return;
    }
    if (local_84 == 0) {
      return;
    }
    local_d0 = *(float *)(iVar15 + 0x40);
    local_cc = *(float *)(iVar15 + 0x44);
    local_c8 = *(undefined4 ****)(iVar15 + 0x48);
    local_c4 = *(undefined4 ***)(iVar15 + 0x4c);
    local_a0 = (float **)
               SQRT(*(float *)(iVar15 + 0x14) * *(float *)(iVar15 + 0x14) +
                    *(float *)(iVar15 + 0x10) * *(float *)(iVar15 + 0x10) +
                    *(float *)(iVar15 + 0x18) * *(float *)(iVar15 + 0x18));
    local_9c = SQRT(*(float *)(iVar15 + 0x20) * *(float *)(iVar15 + 0x20) +
                    *(float *)(iVar15 + 0x24) * *(float *)(iVar15 + 0x24) +
                    *(float *)(iVar15 + 0x28) * *(float *)(iVar15 + 0x28));
    fVar1 = SQRT(*(float *)(iVar15 + 0x38) * *(float *)(iVar15 + 0x38) +
                 *(float *)(iVar15 + 0x34) * *(float *)(iVar15 + 0x34) +
                 *(float *)(iVar15 + 0x30) * *(float *)(iVar15 + 0x30));
    local_104 = *(float *)(iVar15 + 0x28) / fVar1;
    local_b8 = *(float *)(iVar15 + 0x38) / fVar1;
    local_144 = (float *)-(*(float *)(iVar15 + 0x18) / fVar1);
    pfStack_148 = (float *)0xbd0f5d;
    fVar17 = (float10)FUN_00ddbaa0();
    pfStack_148 = (float *)0x5;
    fVar18 = (float10)fpatan((float10)local_104,(float10)local_b8);
    pfStack_14c = &local_70;
    local_70 = (float)fVar18;
    local_6c = (float)fVar17;
    fVar17 = (float10)fpatan((float10)*(float *)(iVar15 + 0x14) / (float10)local_9c,
                             (float10)*(float *)(iVar15 + 0x10) / (float10)(float)local_a0);
    local_68[0] = (undefined4 *)(float)fVar17;
    local_130 = 0.0;
    local_12c = 0.0;
    local_128 = 1.0;
    ppfStack_150 = (float **)local_50;
    pfStack_154 = (float *)0xbd0fbc;
    FUN_00ddc1d0();
    local_144 = (float *)local_50;
    pfStack_148 = &local_130;
    pfStack_14c = &local_f0;
    ppfStack_150 = (float **)0xbd0fd6;
    D3DXVec3TransformNormal();
    ppfStack_150 = (float **)0x5;
    pfStack_154 = &fStack_7c;
    pfStack_158 = (float *)&local_5c;
    fStack_134 = 0.0;
    ppfStack_15c = (float **)0xbd0ffd;
    FUN_00ddc1d0();
    ppfStack_150 = (float **)&local_5c;
    pfStack_154 = (float *)&stack0xfffffec4;
    pfStack_158 = &fStack_ec;
    ppfStack_15c = (float **)0xbd1017;
    D3DXVec3TransformNormal();
    pfStack_148 = (float *)0x0;
    ppfStack_15c = (float **)0x5;
    ppfStack_160 = &pfStack_88;
    local_144 = (float *)0x3f800000;
    pppuStack_164 = (undefined4 ***)local_68;
    pppuStack_168 = (float ***)0xbd103e;
    FUN_00ddc1d0();
    ppfStack_15c = (float **)local_68;
    ppfStack_160 = &pfStack_148;
    pppuStack_164 = &local_c8;
    pppuStack_168 = (float ***)0xbd105b;
    D3DXVec3TransformNormal();
    pppuVar14 = pppuStack_a8;
    fVar1 = *(float *)(uVar16 + 0x454);
    pfStack_154 = (float *)(fStack_d4 * fVar1 + local_f4);
    ppfStack_150 = (float **)(fVar1 * local_d0 + local_f0);
    pfStack_14c = (float *)(fVar1 * local_cc + fStack_ec);
    pfStack_148 = (float *)(fVar1 * (float)local_c8 + fStack_e8);
    ppuStack_124 = pppuStack_a8[0x10];
    puStack_120 = pppuStack_a8[0x11];
    puStack_11c = pppuStack_a8[0x12];
    puStack_118 = pppuStack_a8[0x13];
    local_c4 = (undefined4 **)
               SQRT((float)pppuStack_a8[5] * (float)pppuStack_a8[5] +
                    (float)pppuStack_a8[4] * (float)pppuStack_a8[4] +
                    (float)pppuStack_a8[6] * (float)pppuStack_a8[6]);
    fStack_c0 = SQRT((float)pppuStack_a8[8] * (float)pppuStack_a8[8] +
                     (float)pppuStack_a8[9] * (float)pppuStack_a8[9] +
                     (float)pppuStack_a8[10] * (float)pppuStack_a8[10]);
    fVar1 = SQRT((float)pppuStack_a8[0xe] * (float)pppuStack_a8[0xe] +
                 (float)pppuStack_a8[0xd] * (float)pppuStack_a8[0xd] +
                 (float)pppuStack_a8[0xc] * (float)pppuStack_a8[0xc]);
    local_128 = (float)pppuStack_a8[0xe] / fVar1;
    pppuStack_168 = (undefined4 ***)-((float)pppuStack_a8[6] / fVar1);
    pppuStack_16c = (undefined4 ***)0xbd1166;
    pppuStack_a8 = (undefined4 ***)((float)pppuStack_a8[10] / fVar1);
    fVar17 = (float10)FUN_00ddbaa0();
    pppuStack_16c = (undefined4 ***)0x5;
    fVar18 = (float10)fpatan((float10)(float)pppuStack_a8,(float10)local_128);
    ppuStack_170 = (undefined4 **)&fStack_a4;
    ppuStack_174 = &ppuStack_74;
    fStack_a4 = (float)fVar18;
    local_a0 = (float **)(float)fVar17;
    fVar17 = (float10)fpatan((float10)(float)pppuVar14[5] / (float10)fStack_c0,
                             (float10)(float)pppuVar14[4] / (float10)(float)local_c4);
    local_9c = (float)fVar17;
    local_144 = (float *)0x0;
    pppfStack_178 = (float ***)0xbd11c5;
    FUN_00ddc1d0();
    pppuStack_168 = &ppuStack_74;
    pppuStack_16c = (undefined4 ***)&local_144;
    ppuStack_170 = (undefined4 **)&fStack_114;
    ppuStack_174 = (undefined4 **)0xbd11df;
    D3DXVec3TransformNormal();
    ppfStack_150 = (float **)0x3f800000;
    ppuStack_174 = (undefined4 **)0x5;
    pppfStack_178 = &ppfStack_b0;
    pfStack_14c = (float *)0x0;
    pfStack_17c = &fStack_80;
    pfStack_148 = (float *)0x0;
    puStack_180 = (undefined1 *)0xbd1206;
    FUN_00ddc1d0();
    ppuStack_174 = (undefined4 **)&fStack_80;
    pppfStack_178 = &ppfStack_150;
    pfStack_17c = &fStack_110;
    puStack_180 = (undefined1 *)0xbd1220;
    D3DXVec3TransformNormal();
    ppfStack_15c = (float **)0x0;
    puStack_180 = (undefined1 *)0x5;
    pppfStack_184 = &ppfStack_bc;
    pfStack_158 = (float *)0x3f800000;
    pfStack_188 = (float *)auStack_8c;
    pfStack_154 = (float *)0x0;
    puStack_18c = (undefined1 *)0xbd1247;
    FUN_00ddc1d0();
    puStack_180 = auStack_8c;
    pppfStack_184 = &ppfStack_15c;
    pfStack_188 = &fStack_ec;
    puStack_18c = (undefined1 *)0xbd1264;
    D3DXVec3TransformNormal();
    fVar1 = *(float *)(uVar16 + 0x454);
    fVar2 = 0.0;
    if (0.0 < *(float *)(param_1 + 0xd8)) {
      fVar2 = *(float *)((int)local_fc + 0x341c) / *(float *)(param_1 + 0xd8);
    }
    local_fc = 1.0 - fVar2;
    fStack_e8 = (float)puStack_118 * fVar2;
    fStack_e4 = fVar2 * fStack_114;
    fStack_e0 = fVar2 * fStack_110;
    fStack_dc = fVar2 * fStack_10c;
    *(float *)(param_1 + 0x60) = fStack_e8 + (float)pfStack_148 * local_fc;
    *(float *)(param_1 + 100) = fStack_e4 + (float)local_144 * local_fc;
    *(float *)(param_1 + 0x68) = fStack_e0 + local_fc * 0.0;
    *(float *)(param_1 + 0x6c) = fStack_dc + local_fc * 1.0;
    pppuStack_168 = (undefined4 ***)((float)pppfStack_178 * fVar2);
    pppuStack_164 = (undefined4 ***)(fVar2 * (float)ppuStack_174);
    ppfStack_160 = (float **)(fVar2 * (float)ppuStack_170);
    ppfStack_15c = (float **)(fVar2 * (float)pppuStack_16c);
    *(float *)(param_1 + 0xb0) =
         (float)pppuStack_168 + ((float)pfStack_148 + local_f8 * fVar1) * local_fc;
    *(float *)(param_1 + 0xb4) =
         (float)pppuStack_164 + (fVar1 * local_f4 + (float)local_144) * local_fc;
    *(float *)(param_1 + 0xb8) = (fVar1 * local_f0 + 0.0) * local_fc + (float)ppfStack_160;
    *(float *)(param_1 + 0xbc) = (float)ppfStack_15c + (fVar1 * fStack_ec + 1.0) * local_fc;
    fVar1 = *(float *)(uVar16 + 0x444);
    fVar3 = *(float *)(uVar16 + 0x448);
    fVar4 = *(float *)(uVar16 + 0x44c);
    fVar6 = *(float *)(uVar16 + 0x434);
    puStack_18c = (undefined1 *)0x5;
    ppppfStack_190 = (float ****)&pppuStack_a8;
    fVar5 = *(float *)(uVar16 + 0x438);
    pppuStack_16c = (undefined4 ***)(*(float *)(uVar16 + 0x43c) * fVar2);
    *(float *)(param_1 + 0xc0) =
         fVar2 * *(float *)(uVar16 + 0x430) + local_fc * *(float *)(uVar16 + 0x440);
    *(float *)(param_1 + 0xc4) = fVar6 * fVar2 + fVar1 * local_fc;
    *(float *)(param_1 + 200) = fVar3 * local_fc + fVar5 * fVar2;
    *(float *)(param_1 + 0xcc) = (float)pppuStack_16c + fVar4 * local_fc;
    pppuStack_a8 = (undefined4 ***)(local_b8 * fVar2 + (float)local_c8 * local_fc);
    fStack_a4 = fVar2 * local_b4 + (float)local_c4 * local_fc;
    local_a0 = (float **)(fStack_c0 * local_fc + fVar2 * (float)ppfStack_b0);
    local_9c = fVar2 * (float)ppfStack_ac + (float)ppfStack_bc * local_fc;
    pppfStack_178 = (float ***)0x0;
    ppuStack_174 = (undefined4 **)0x0;
    ppuStack_170 = (undefined4 **)0x3f800000;
    FUN_00ddc1d0(auStack_98);
    puStack_18c = auStack_98;
    ppppfStack_190 = &pppfStack_178;
    D3DXVec3TransformNormal(&stack0xfffffec8);
    pppfStack_184 = (float ***)0x3f800000;
    puStack_180 = (undefined1 *)0x0;
    pfStack_17c = (float *)0x0;
    FUN_00ddc1d0(&fStack_a4,&local_b4,5);
    D3DXVec3TransformNormal(&fStack_134,&pppfStack_184,&fStack_a4);
    ppppfStack_190 = (float ****)0x0;
    puStack_18c = (undefined1 *)0x3f800000;
    pfStack_188 = (float *)0x0;
    FUN_00ddc1d0(&ppfStack_b0,&fStack_c0,5);
    D3DXVec3TransformNormal(&fStack_110,&ppppfStack_190,&ppfStack_b0);
    if (*(int *)(uVar16 + 0x47c) == 0) {
      if (*(int *)(uVar16 + 0x480) == 0) goto LAB_00bd1d23;
      pppuStack_168 = (float ***)0x5;
      pfStack_154 = (float *)0x0;
      pppuStack_16c = (undefined4 ***)apfStack_94;
      ppfStack_150 = (float **)0x0;
      ppuStack_170 = &ppuStack_74;
      pfStack_14c = (float *)0x3f800000;
      ppuStack_174 = (undefined4 **)0xbd1906;
      FUN_00ddc1d0();
      pppuStack_168 = &ppuStack_74;
      pppuStack_16c = (undefined4 ***)&pfStack_154;
      ppuStack_170 = (undefined4 **)&fStack_114;
      ppuStack_174 = (undefined4 **)0xbd1920;
      D3DXVec3TransformNormal();
      ppfStack_160 = (float **)0x3f800000;
      ppuStack_174 = (undefined4 **)0x5;
      pppfStack_178 = &local_a0;
      ppfStack_15c = (float **)0x0;
      pfStack_17c = &fStack_80;
      pfStack_158 = (float *)0x0;
      puStack_180 = (undefined1 *)0xbd1947;
      FUN_00ddc1d0();
      ppuStack_174 = (undefined4 **)&fStack_80;
      pppfStack_178 = &ppfStack_160;
      pfStack_17c = &fStack_110;
      puStack_180 = (undefined1 *)0xbd1961;
      D3DXVec3TransformNormal();
      pppuStack_16c = (undefined4 ***)0x0;
      puStack_180 = (undefined1 *)0x5;
      pppfStack_184 = &ppfStack_ac;
      pppuStack_168 = (float ***)0x3f800000;
      pfStack_188 = (float *)auStack_8c;
      pppuStack_164 = (undefined4 ***)0x0;
      puStack_18c = (undefined1 *)0xbd1988;
      FUN_00ddc1d0();
      puStack_180 = auStack_8c;
      pppfStack_184 = (float ***)&pppuStack_16c;
      pfStack_188 = &fStack_ec;
      puStack_18c = (undefined1 *)0xbd19a5;
      D3DXVec3TransformNormal();
      fVar1 = *(float *)(uVar16 + 0x410);
      fVar2 = *(float *)(uVar16 + 0x418);
      puStack_18c = (undefined1 *)0x5;
      ppppfStack_190 = (float ****)&local_c8;
      fVar3 = *(float *)(uVar16 + 0x414);
      pppfStack_178 =
           (float ***)(local_f8 * fVar3 + fVar2 * 0.0 + (float)puStack_118 + local_128 * fVar1);
      ppuStack_174 = (undefined4 **)
                     (fVar3 * local_f4 +
                     fVar2 * fStack_134 + fVar1 * (float)ppuStack_124 + fStack_114);
      ppuStack_170 = (undefined4 **)
                     (fVar3 * local_f0 + fVar2 * local_130 + fVar1 * (float)puStack_120 + fStack_110
                     );
      pppuStack_16c =
           (undefined4 ***)
           (fVar3 * fStack_ec + fVar2 * local_12c + fVar1 * (float)puStack_11c + fStack_10c);
      pppuStack_168 = (float ***)0x0;
      pppuStack_164 = (undefined4 ***)0x0;
      ppfStack_160 = (float **)0x3f800000;
      FUN_00ddc1d0(auStack_98);
      puStack_18c = auStack_98;
      ppppfStack_190 = (float ****)&pppuStack_168;
      D3DXVec3TransformNormal(&stack0xfffffec8);
      ppuStack_174 = (undefined4 **)0x3f800000;
      ppuStack_170 = (undefined4 **)0x0;
      pppuStack_16c = (undefined4 ***)0x0;
      FUN_00ddc1d0(&fStack_a4,&fStack_d4,5);
      D3DXVec3TransformNormal(&fStack_134,&ppuStack_174,&fStack_a4);
      puStack_180 = (undefined1 *)0x0;
      pfStack_17c = (float *)0x3f800000;
      pppfStack_178 = (float ***)0x0;
      FUN_00ddc1d0(&ppfStack_b0,&fStack_e0,5);
      D3DXVec3TransformNormal(&fStack_110,&puStack_180,&ppfStack_b0);
      fVar1 = *(float *)(uVar16 + 0x420);
      fVar2 = *(float *)(uVar16 + 0x428);
      fVar3 = *(float *)(uVar16 + 0x424);
      pfVar8 = (float *)((fVar3 * (float)local_c8 +
                         fVar2 * fStack_108 + fVar1 * local_f8 + (float)puStack_118) -
                        (float)pfStack_148);
      *(float *)(param_1 + 0x70) =
           ((fStack_d4 * fVar3 + fStack_114 * fVar2 + (float)ppuStack_124 + local_104 * fVar1) -
           (float)pfStack_154) * fStack_d8 + (float)pfStack_154;
      *(float *)(param_1 + 0x74) =
           (float)ppfStack_150 +
           ((fVar3 * local_d0 + fVar2 * fStack_110 + fVar1 * local_100 + (float)puStack_120) -
           (float)ppfStack_150) * fStack_d8;
      *(float *)(param_1 + 0x78) =
           ((fVar3 * local_cc + fVar2 * fStack_10c + fVar1 * local_fc + (float)puStack_11c) -
           (float)pfStack_14c) * fStack_d8 + (float)pfStack_14c;
      *(float *)(param_1 + 0x7c) = (float)pfVar8 * fStack_d8 + (float)pfStack_148;
      ppfVar12 = (float **)(*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60));
      fVar1 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 100);
      ppfVar11 = (float **)(*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68));
      local_b8 = *(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x6c);
      pfStack_148 = pfVar8;
      local_c4 = ppfVar12;
      fStack_c0 = fVar1;
      ppfStack_bc = ppfVar11;
      if ((((float)ppfVar12 != 0.0) || (fVar1 != 0.0)) || ((float)ppfVar11 != 0.0)) {
        fVar1 = (float)ppfVar11 * (float)ppfVar11 +
                (float)ppfVar12 * (float)ppfVar12 + fVar1 * fVar1;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          pppuStack_16c = &local_c4;
          ppuStack_170 = (undefined4 **)0xbd1cb3;
          pppuStack_168 = pppuStack_16c;
          FUN_00ddf460();
          fVar1 = fStack_c0;
          ppfVar11 = ppfStack_bc;
          ppfVar12 = (float **)local_c4;
        }
        else {
          pppuStack_168 = (undefined4 ***)&DAT_0163d0ac;
          pppuStack_16c = (undefined4 ***)0xbd1cdd;
          FUN_00dd5650();
          ppfVar11 = (float **)0x0;
          ppfVar12 = (float **)0x0;
          fVar1 = 1.0;
        }
      }
      fVar4 = *(float *)(param_1 + 0xdc);
      fVar2 = (float)ppfVar12 * fVar4;
      fVar1 = fVar4 * fVar1;
      fVar6 = fVar4 * (float)ppfVar11;
      fVar4 = fVar4 * local_b8;
LAB_00bd1d01:
      fVar2 = *(float *)(param_1 + 0x60) + fVar2;
      fVar1 = *(float *)(param_1 + 100) + fVar1;
      fVar6 = *(float *)(param_1 + 0x68) + fVar6;
      fVar4 = fVar4 + *(float *)(param_1 + 0x6c);
      goto LAB_00bd1d13;
    }
    pppuStack_168 = (float ***)0x5;
    pfStack_154 = (float *)0x0;
    pppuStack_16c = (undefined4 ***)apfStack_94;
    ppfStack_150 = (float **)0x0;
    ppuStack_170 = &ppuStack_74;
    pfStack_14c = (float *)0x3f800000;
    ppuStack_174 = (undefined4 **)0xbd15d3;
    FUN_00ddc1d0();
    pppuStack_168 = &ppuStack_74;
    pppuStack_16c = (undefined4 ***)&pfStack_154;
    ppuStack_170 = (undefined4 **)&fStack_114;
    ppuStack_174 = (undefined4 **)0xbd15ed;
    D3DXVec3TransformNormal();
    ppfStack_160 = (float **)0x3f800000;
    ppuStack_174 = (undefined4 **)0x5;
    pppfStack_178 = &local_a0;
    ppfStack_15c = (float **)0x0;
    pfStack_17c = &fStack_80;
    pfStack_158 = (float *)0x0;
    puStack_180 = (undefined1 *)0xbd1614;
    FUN_00ddc1d0();
    ppuStack_174 = (undefined4 **)&fStack_80;
    pppfStack_178 = &ppfStack_160;
    pfStack_17c = &fStack_110;
    puStack_180 = (undefined1 *)0xbd162e;
    D3DXVec3TransformNormal();
    pppuStack_16c = (undefined4 ***)0x0;
    puStack_180 = (undefined1 *)0x5;
    pppfStack_184 = &ppfStack_ac;
    pppuStack_168 = (float ***)0x3f800000;
    pfStack_188 = (float *)auStack_8c;
    pppuStack_164 = (undefined4 ***)0x0;
    puStack_18c = (undefined1 *)0xbd1655;
    FUN_00ddc1d0();
    puStack_180 = auStack_8c;
    pppfStack_184 = (float ***)&pppuStack_16c;
    pfStack_188 = &fStack_ec;
    puStack_18c = (undefined1 *)0xbd1672;
    D3DXVec3TransformNormal();
    fVar1 = *(float *)(uVar16 + 0x410);
    fVar2 = *(float *)(uVar16 + 0x418);
    puStack_18c = (undefined1 *)0x5;
    ppppfStack_190 = (float ****)&local_c8;
    fVar3 = *(float *)(uVar16 + 0x414);
    pppfStack_178 =
         (float ***)(local_f8 * fVar3 + fVar2 * 0.0 + local_128 * fVar1 + (float)puStack_118);
    ppuStack_174 = (undefined4 **)
                   (fVar3 * local_f4 + fVar2 * fStack_134 + fVar1 * (float)ppuStack_124 + fStack_114
                   );
    ppuStack_170 = (undefined4 **)
                   (fVar3 * local_f0 + fVar2 * local_130 + fVar1 * (float)puStack_120 + fStack_110);
    pppuStack_16c =
         (undefined4 ***)
         (fVar3 * fStack_ec + fVar2 * local_12c + fVar1 * (float)puStack_11c + fStack_10c);
    pppuStack_168 = (float ***)0x0;
    pppuStack_164 = (undefined4 ***)0x0;
    ppfStack_160 = (float **)0x3f800000;
    FUN_00ddc1d0(auStack_98);
    puStack_18c = auStack_98;
    ppppfStack_190 = (float ****)&pppuStack_168;
    D3DXVec3TransformNormal(&stack0xfffffec8);
    ppuStack_174 = (undefined4 **)0x3f800000;
    ppuStack_170 = (undefined4 **)0x0;
    pppuStack_16c = (undefined4 ***)0x0;
    FUN_00ddc1d0(&fStack_a4,&fStack_d4,5);
    D3DXVec3TransformNormal(&fStack_134,&ppuStack_174,&fStack_a4);
    puStack_180 = (undefined1 *)0x0;
    pfStack_17c = (float *)0x3f800000;
    pppfStack_178 = (float ***)0x0;
    FUN_00ddc1d0(&ppfStack_b0,&fStack_e0,5);
    D3DXVec3TransformNormal(&fStack_110,&puStack_180,&ppfStack_b0);
    fVar1 = *(float *)(uVar16 + 0x420);
    fVar2 = *(float *)(uVar16 + 0x428);
    fVar3 = *(float *)(uVar16 + 0x424);
    pfVar8 = (float *)((fVar3 * (float)local_c8 +
                       fVar2 * fStack_108 + fVar1 * local_f8 + (float)puStack_118) -
                      (float)pfStack_148);
    fVar6 = (float)pfStack_14c +
            ((fVar3 * local_cc + fVar2 * fStack_10c + fVar1 * local_fc + (float)puStack_11c) -
            (float)pfStack_14c) * fStack_d8;
    fVar4 = (float)pfVar8 * fStack_d8 + (float)pfStack_148;
    *(float *)(param_1 + 0x70) =
         (float)pfStack_154 +
         ((fStack_d4 * fVar3 + fStack_114 * fVar2 + (float)ppuStack_124 + local_104 * fVar1) -
         (float)pfStack_154) * fStack_d8;
    *(float *)(param_1 + 0x74) =
         (float)ppfStack_150 +
         ((fVar3 * local_d0 + fVar2 * fStack_110 + fVar1 * local_100 + (float)puStack_120) -
         (float)ppfStack_150) * fStack_d8;
    pfStack_148 = pfVar8;
  }
  *(float *)(param_1 + 0x78) = fVar6;
  *(float *)(param_1 + 0x7c) = fVar4;
LAB_00bd1d23:
  pppuStack_168 = param_2;
  pppuStack_16c = (undefined4 ***)0xbd1d2e;
  FUN_00bb7a90();
  return;
}

// 00BD1D40  FUN_00bd1d40  size=1816  [callgraph]
void __thiscall
FUN_00bd1d40(int param_1,float *param_2,int param_3,int param_4,float param_5,float param_6)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  undefined1 *puVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  undefined4 *puStack_188;
  undefined4 *puStack_184;
  float *pfStack_180;
  float *pfStack_17c;
  float **ppfStack_178;
  float *pfStack_174;
  float fStack_158;
  float *pfStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float *pfStack_130;
  float *pfStack_12c;
  float *local_128;
  float *pfStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auStack_10c [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [112];
  
  if (param_2 == (float *)0x0) {
    uVar9 = 0;
  }
  else {
    pfStack_174 = (float *)&DAT_01be9ef4;
    ppfStack_178 = (float **)0xbd1d69;
    (**(code **)*param_2)();
    ppfStack_178 = (float **)0xbd1d70;
    iVar7 = FUN_00dd6d80();
    uVar9 = -(uint)(iVar7 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar9 + 0xc);
  piVar8 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    pfStack_174 = (float *)&DAT_01be9db8;
    ppfStack_178 = (float **)0xbd1d8d;
    (**(code **)(*piVar1 + 4))();
    ppfStack_178 = (float **)0xbd1d94;
    iVar7 = FUN_00dd6d80();
    piVar8 = (int *)(-(uint)(iVar7 != 0) & (uint)piVar1);
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    pfStack_174 = param_2;
    ppfStack_178 = &local_128;
    pfStack_17c = (float *)0xbd1dbb;
    FUN_00bbcb90();
    pfStack_154 = local_128;
    fStack_158 = (float)pfStack_124;
    if (*(int *)(uVar9 + 0x330) == 0xf) {
      pfStack_154 = (float *)((float)local_128 * -1.0);
      fStack_158 = (float)pfStack_124 * -1.0;
    }
    pfStack_174 = (float *)0xbd1df8;
    fVar10 = (float10)FUN_00da7570();
    pfStack_174 = (float *)0xbd1e05;
    fVar11 = (float10)FUN_00da7500();
    fVar13 = (float10)*(float *)(param_1 + 0xf4) -
             (float10)(float)(fVar10 * (float10)(float)pfStack_154) * (float10)2e-05;
    *(float *)(param_1 + 0xf4) = (float)fVar13;
    fVar11 = (float10)*(float *)(param_1 + 0xf8) - fVar11 * (float10)fStack_158 * (float10)2e-05;
    *(float *)(param_1 + 0xf8) = (float)fVar11;
    fVar10 = (float10)0;
    if (fVar10 < (float10)param_5) {
      fVar12 = (float10)param_5 * (float10)0.017453292;
      if (fVar12 < fVar11) {
        *(float *)(param_1 + 0xf8) = (float)fVar12;
      }
      if ((float10)*(float *)(param_1 + 0xf8) < -fVar12) {
        *(float *)(param_1 + 0xf8) = (float)-fVar12;
      }
    }
    if (fVar10 < (float10)param_6) {
      fVar11 = (float10)param_6 * (float10)0.017453292;
      if (fVar11 < fVar13) {
        *(float *)(param_1 + 0xf4) = (float)fVar11;
      }
      if ((float10)*(float *)(param_1 + 0xf4) < -fVar11) {
        *(float *)(param_1 + 0xf4) = (float)-fVar11;
      }
    }
    if (param_3 == 0) {
      *(float *)(param_1 + 0xf4) = (float)fVar10;
    }
    if (param_4 == 0) {
      *(float *)(param_1 + 0xf8) = (float)fVar10;
    }
    if (fVar10 == (float10)*(float *)(param_1 + 0xf4)) {
      *(undefined4 *)(param_1 + 0xf4) = 0x38d1b717;
    }
    if ((float10)*(float *)(param_1 + 0xf8) == fVar10) {
      *(undefined4 *)(param_1 + 0xf8) = 0x38d1b717;
    }
    pfStack_174 = (float *)0x0;
    ppfStack_178 = (float **)0xbd1f10;
    iVar7 = FUN_00a12210();
    fStack_120 = *(float *)(iVar7 + 0x40);
    pfVar18 = (float *)(iVar7 + 0x10);
    fStack_11c = *(float *)(iVar7 + 0x44);
    fStack_118 = *(float *)(iVar7 + 0x48);
    fStack_114 = *(float *)(iVar7 + 0x4c);
    fStack_dc = SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) + *pfVar18 * *pfVar18 +
                     *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
    fStack_d8 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                     *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                     *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
    fVar14 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
                  *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
                  *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
    fVar2 = *(float *)(iVar7 + 0x28) / fVar14;
    fVar3 = *(float *)(iVar7 + 0x38) / fVar14;
    pfStack_174 = (float *)-(*(float *)(iVar7 + 0x18) / fVar14);
    ppfStack_178 = (float **)0xbd1fbf;
    fVar10 = (float10)FUN_00ddbaa0();
    local_128 = (float *)(float)fVar10;
    fVar10 = (float10)fpatan((float10)fVar2,(float10)fVar3);
    fVar14 = (float)fVar10;
    fVar10 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)fStack_d8,
                             (float10)*pfVar18 / (float10)fStack_dc);
    fStack_138 = (float)fVar10;
    afStack_d0[0] = 0.0;
    afStack_d0[1] = 1.0;
    pfStack_17c = afStack_d0;
    afStack_d0[2] = 0.0;
    pfStack_180 = (float *)0xbd2017;
    ppfStack_178 = (float **)pfStack_17c;
    pfStack_174 = pfVar18;
    D3DXVec3TransformNormal();
    uStack_bc = 0x3f800000;
    puStack_188 = &uStack_bc;
    fStack_b8 = 0.0;
    fStack_b4 = 0.0;
    puStack_184 = puStack_188;
    pfStack_180 = pfVar18;
    D3DXVec3TransformNormal();
    fStack_b8 = 0.0;
    pfVar16 = &fStack_b8;
    fStack_b4 = 0.0;
    fStack_b0 = 1.0;
    pfVar17 = pfVar16;
    D3DXVec3TransformNormal(pfVar16,pfVar16,pfVar18);
    fStack_134 = fStack_f4 * 1.5 + fStack_144;
    pfStack_130 = (float *)(fStack_f0 * 1.5 + fVar14);
    pfStack_12c = (float *)(fStack_ec * 1.5 + fStack_13c);
    local_128 = (float *)(fStack_e8 * 1.5 + fStack_138);
    pfStack_174 = (float *)(fStack_144 - fStack_134);
    fVar5 = fVar14 - (float)pfStack_130;
    fVar4 = fStack_138 - (float)local_128;
    FUN_00ddcfe0(auStack_74,&fStack_d4,-*(float *)(param_1 + 0xf8));
    puVar15 = auStack_74;
    D3DXVec3TransformNormal(&pfStack_174,&pfStack_174,puVar15);
    fStack_120 = (float)pfStack_180 * -1.0;
    fStack_11c = (float)pfStack_17c * -1.0;
    fStack_118 = (float)ppfStack_178 * -1.0;
    fStack_114 = (float)pfStack_174 * -1.0;
    fVar6 = fStack_118 * fStack_118 + fStack_11c * fStack_11c + fStack_120 * fStack_120;
    fStack_f0 = fVar5;
    fStack_ec = fVar2;
    fStack_e8 = fVar4;
    if (fVar6 < 0.0 == (fVar6 == 0.0)) {
      FUN_00ddf460(&fStack_120,&fStack_120);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_120 = 0.0;
      fStack_11c = 1.0;
      fStack_118 = 0.0;
    }
    pfStack_130 = pfStack_180;
    pfStack_12c = pfStack_17c;
    local_128 = (float *)ppfStack_178;
    pfStack_124 = pfStack_174;
    FUN_00ddcfe0(auStack_80,auStack_e0,0xbfc90fdb);
    D3DXVec3TransformNormal(&pfStack_130,&pfStack_130,auStack_80);
    FUN_00ddcfe0(auStack_8c,&pfStack_12c,*(undefined4 *)(param_1 + 0xf4));
    D3DXVec3TransformNormal(&fStack_13c,&fStack_13c,auStack_8c);
    puStack_188 = (undefined4 *)((float)puVar15 + fVar2 + fStack_148);
    puStack_184 = (undefined4 *)((float)pfVar16 + fVar3 + fStack_144);
    pfStack_180 = (float *)((float)pfVar17 + fStack_150 + fVar14);
    pfStack_17c = (float *)((float)pfVar18 + fStack_14c + fStack_13c);
    FUN_00db6410(&fStack_d8,&stack0xfffffe98,&puStack_188,&fStack_138);
    pfStack_124 = (float *)SQRT(afStack_d0[0] * afStack_d0[0] +
                                fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
    fStack_120 = SQRT(fStack_c0 * fStack_c0 +
                      afStack_d0[2] * afStack_d0[2] + afStack_d0[3] * afStack_d0[3]);
    fVar4 = SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
    fVar14 = fStack_b0 / fVar4;
    fVar10 = (float10)FUN_00ddbaa0(-(afStack_d0[0] / fVar4));
    fVar11 = (float10)fpatan((float10)(fStack_c0 / fVar4),(float10)fVar14);
    fStack_108 = (float)fVar11;
    fStack_104 = (float)fVar10;
    fVar10 = (float10)fpatan((float10)fStack_d4 / (float10)fStack_120,
                             (float10)fStack_d8 / (float10)(float)pfStack_124);
    fStack_100 = (float)fVar10;
    puStack_188 = (undefined4 *)((float)puVar15 + fVar2);
    puStack_184 = (undefined4 *)((float)pfVar16 + fVar3);
    pfStack_180 = (float *)((float)pfVar17 + fStack_150);
    pfStack_17c = (float *)((float)pfVar18 + fStack_14c);
    (**(code **)(*piVar8 + 0x6c))(&puStack_188);
    (**(code **)(*piVar8 + 0x88))(auStack_10c);
  }
  return;
}

// 00BFFF20  ZangekiOnPartsStatePl0010::vf10  size=9928  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiOnPartsStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int *piVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  undefined4 *puVar18;
  float *pfVar19;
  float *pfVar20;
  undefined1 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  char *pcVar25;
  float fVar26;
  float fStack_4c4;
  float local_4bc;
  float *local_4b8;
  int *local_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  undefined4 local_494;
  float *local_490;
  float *local_48c;
  undefined4 *local_488;
  float local_484;
  float local_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float local_470;
  float local_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  undefined4 local_450;
  float local_44c;
  undefined4 local_448;
  float local_440;
  float local_43c;
  float fStack_438;
  float fStack_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float local_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  undefined4 local_400;
  float local_3fc;
  undefined4 local_3f8;
  undefined1 local_3f0 [48];
  float local_3c0;
  float local_3b8;
  undefined4 local_3b0;
  float local_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_380;
  float fStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_370;
  float fStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_360;
  int iStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  float afStack_350 [3];
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 auStack_338 [8];
  undefined4 uStack_330;
  float afStack_32c [3];
  undefined1 local_320 [52];
  undefined1 auStack_2ec [744];
  
  if (param_2 == (undefined4 *)0x0) {
    fVar4 = 0.0;
  }
  else {
    (**(code **)*param_2)();
    iVar11 = FUN_00dd6d80();
    fVar4 = (float)(-(uint)(iVar11 != 0) & (uint)param_2);
  }
  piVar13 = *(int **)((int)fVar4 + 0xc);
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    (**(code **)(*piVar13 + 4))();
    iVar11 = FUN_00dd6d80();
    piVar13 = (int *)(-(uint)(iVar11 != 0) & (uint)piVar13);
  }
  FUN_0093dc50();
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    FUN_00bc6e00(param_1 + 0xfc,param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x15c) = 0;
    local_4b8 = (float *)FUN_00a82090("Et000d",0x4000d);
    if ((local_4b8 == (float *)0x0) || (piVar7 = (int *)FUN_00a7c8a0(), piVar7 == (int *)0x0))
    break;
    FUN_00a7c7f0();
    FUN_00a7c960();
    iVar11 = (**(code **)(*piVar13 + 0x84))();
    uStack_38c = *(undefined4 *)(iVar11 + 4);
    uStack_390 = 0;
    uStack_388 = 0;
    (**(code **)(*piVar7 + 0x7c))(piVar13 + 0x10);
    switch(*(undefined4 *)(param_1 + 0x38)) {
    case 1:
      uVar9 = 0x25;
      break;
    case 2:
      uVar9 = 0x26;
      break;
    case 3:
      uVar9 = 0x27;
      break;
    case 4:
      uVar9 = 0x28;
      break;
    case 5:
      uVar9 = 0x29;
      break;
    case 6:
      uVar9 = 0x2a;
      break;
    case 7:
      uVar9 = 0x2b;
      break;
    case 8:
      uVar9 = 0x2c;
      break;
    case 9:
      uVar9 = 0x2d;
      break;
    case 10:
      uVar9 = 0x2e;
      break;
    case 0xb:
      uVar9 = 0x2f;
      break;
    case 0xc:
      uVar9 = 0x30;
      break;
    case 0xd:
      uVar9 = 0x31;
      break;
    case 0xe:
      uVar9 = 0x32;
      break;
    case 0xf:
      uVar9 = 0x33;
      break;
    case 0x10:
      uVar9 = 0x34;
      break;
    default:
      goto switchD_00c0006b_default;
    }
    FUN_00a8caf0(uVar9,0,0);
    *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
switchD_00c0006b_default:
    iVar11 = FUN_00a81330();
    if ((iVar11 != 0) && (piVar13 = (int *)FUN_00a7c8a0(), piVar13 != (int *)0x0)) {
      local_4bc = (float)FUN_00a12210();
      local_4b4 = (int *)*piVar7;
      (**(code **)(*piVar13 + 0x84))();
      (*(code *)local_4b4[0x1f])((int)local_4bc + 0x40);
    }
    *(int **)(param_1 + 0x1d0) = piVar7;
    break;
  case 1:
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar11 = FUN_00a7f600();
      if (iVar11 == 0) {
        uVar9 = 0x52e;
        iVar11 = (**(code **)(*piVar13 + 800))();
        if (iVar11 == 0) {
          uVar9 = 0x52f;
        }
        FUN_00aa4080(uVar9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000);
      }
      else {
        FUN_00aa4520(0xdc,iVar11,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000);
      }
      FUN_00da8810();
      FUN_00db3e80(0x41a00000,1);
      puVar5 = (undefined4 *)(**(code **)(*piVar13 + 0x84))();
      *(undefined4 *)(param_1 + 0x1a0) = *puVar5;
      *(undefined4 *)(param_1 + 0x1a4) = puVar5[1];
      *(undefined4 *)(param_1 + 0x1a8) = puVar5[2];
      *(undefined4 *)(param_1 + 0x1ac) = puVar5[3];
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x1a4);
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1a8);
      *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1ac);
      piVar13[0x9b5] = 0;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00c002e0:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10();
      iVar11 = FUN_00a94ce0();
      if (iVar11 == 0) {
        iVar11 = FUN_00a94e10(0,0);
        if (iVar11 == 0) {
          (**(code **)(*piVar13 + 0x88))();
        }
        else {
          local_490 = *(float **)(param_1 + 0x1a0);
          local_48c = *(float **)(param_1 + 0x1a4);
          local_488 = *(undefined4 **)(param_1 + 0x1a8);
          local_484 = *(float *)(param_1 + 0x1ac);
          local_470 = (float)piVar13[0x10];
          local_468 = (float)piVar13[0x12];
          local_480 = *(float *)(param_1 + 0x70);
          local_478 = *(float *)(param_1 + 0x78);
          iVar11 = FUN_00a81330();
          if (((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) &&
             (iVar11 = FUN_00a12210(), iVar11 != 0)) {
            local_480 = *(float *)(iVar11 + 0x40);
            local_478 = *(float *)(iVar11 + 0x48);
          }
          if (((*(int *)(param_1 + 0x38) == 0xe) || (*(int *)(param_1 + 0x38) == 0xd)) &&
             ((iVar11 = FUN_00a81330(), iVar11 != 0 && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)))) {
            local_480 = *(float *)(iVar11 + 0x40);
            local_478 = *(float *)(iVar11 + 0x48);
          }
          fpatan((float10)local_480 - (float10)local_470,(float10)local_478 - (float10)local_468);
          fVar14 = (float10)FUN_00ddba30();
          local_3b0 = 0;
          local_3a8 = 0;
          local_3ac = (float)fVar14;
          local_4bc = (float)FUN_00a959f0(0);
          FUN_00ddefe0(&local_490,&local_490,&local_3b0,(float)(int)local_4bc * 0.033333335);
          (**(code **)(*piVar13 + 0x88))();
          *(float **)(param_1 + 0x1b0) = local_490;
          *(float **)(param_1 + 0x1b4) = local_48c;
          *(undefined4 **)(param_1 + 0x1b8) = local_488;
          *(float *)(param_1 + 0x1bc) = local_484;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x30) = 4;
        *(undefined4 *)(param_1 + 0x34) = 0;
        FUN_008e3c10();
        FUN_008e5c50();
        *(undefined4 *)((int)fVar4 + 0x4a0) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x34) == 1) goto LAB_00c002e0;
    local_4bc = (float)((int)fVar4 + 0x534);
    piVar13[0xd07] = *(int *)(param_1 + 0xd8);
    iVar11 = FUN_00a81330();
    if ((((iVar11 != 0) && (puVar5 = (undefined4 *)FUN_00a7c8a0(), puVar5 != (undefined4 *)0x0)) &&
        (iVar11 = FUN_00a81330(), iVar11 != 0)) &&
       (piVar13 = (int *)FUN_00a7c8a0(), piVar13 != (int *)0x0)) {
      local_4b4 = (int *)FUN_00a12210();
      local_4b8 = (float *)*puVar5;
      (**(code **)(*piVar13 + 0x84))();
      (*(code *)local_4b8[0x1f])(local_4b4 + 0x10);
    }
    iVar11 = *(int *)(param_1 + 0x38);
    if ((((iVar11 == 0xc) || (iVar11 == 0xd)) || (iVar11 == 0xe)) &&
       ((iVar11 = FUN_00a81330(), iVar11 != 0 &&
        (pfVar12 = (float *)FUN_00a7c8a0(), local_4b8 = pfVar12, pfVar12 != (float *)0x0)))) {
      local_4b4 = (int *)0xffffffff;
      iVar11 = FUN_00a81330();
      if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
        local_4b4 = (int *)FUN_009f8b40();
      }
      iVar11 = FUN_00a81330();
      if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), pfVar12 = local_4b8, iVar11 != 0)) {
        iVar11 = FUN_00a12210();
        iVar8 = FUN_00a12210();
        fStack_4b0 = *(float *)(iVar8 + 0x40) - *(float *)(iVar11 + 0x40);
        fStack_4ac = *(float *)(iVar8 + 0x44) - *(float *)(iVar11 + 0x44);
        fStack_4a8 = *(float *)(iVar8 + 0x48) - *(float *)(iVar11 + 0x48);
        fStack_4a4 = *(float *)(iVar8 + 0x4c) - *(float *)(iVar11 + 0x4c);
        pfVar12 = local_4b8;
      }
      if (((local_4a0 != 0.0) || (local_49c != 0.0)) || (local_498 != 0.0)) {
        fVar26 = fStack_4a8 * fStack_4a8 + fStack_4ac * fStack_4ac + fStack_4b0 * fStack_4b0;
        if (fVar26 < 0.0 == (fVar26 == 0.0)) {
          FUN_00ddf460(&local_4a0);
        }
        else {
          FUN_00dd5650();
          local_4a0 = 0.0;
          local_49c = 1.0;
          local_498 = 0.0;
        }
      }
      iVar11 = FUN_00a12210();
      local_480 = *(float *)(iVar11 + 0x40);
      fStack_47c = *(float *)(iVar11 + 0x44);
      pcVar25 = "zangekiOnPartsStartPosCheck";
      uVar24 = 0;
      local_478 = *(float *)(iVar11 + 0x48);
      uVar23 = 0x60;
      uVar22 = 0;
      fStack_474 = *(float *)(iVar11 + 0x4c);
      local_470 = local_480 + fStack_4b0;
      local_46c = fStack_47c + fStack_4ac;
      local_468 = local_478 + fStack_4a8;
      fStack_464 = fStack_474 + fStack_4a4;
      uVar9 = FUN_00410130(6,local_4b4,0,0,0,0,0x60,0,"zangekiOnPartsStartPosCheck");
      FUN_00445d40(&local_480,&local_470,uVar9,uVar22,uVar23,uVar24,pcVar25);
      iVar11 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_460,&local_490,0,0);
      if (((iVar11 != 0) && (iVar11 = FUN_00a81330(), iVar11 != 0)) &&
         (pfVar10 = (float *)FUN_00a7c8a0(), pfVar10 != (float *)0x0)) {
        local_440 = (fStack_460 - fStack_4b0) + (float)local_490 * 0.5;
        local_43c = (fStack_45c - fStack_4ac) + (float)local_48c * 0.5;
        fStack_438 = (float)local_488 * 0.5 + (fStack_458 - fStack_4a8);
        fStack_434 = local_484 * 0.5 + (fStack_454 - fStack_4a4);
        local_4bc = *pfVar10;
        (**(code **)((int)*pfVar12 + 0x84))();
        (**(code **)((int)local_4bc + 0x7c))(&local_440);
      }
    }
    break;
  default:
    break;
  case 4:
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar8 = FUN_00a7f600();
      iVar6 = FUN_00a7f600();
      iVar11 = *(int *)(param_1 + 0x38);
      if (((iVar11 == 0xf) || (iVar11 == 0x10)) && (iVar8 != 0)) {
        FUN_00aa4520(0xdd,iVar8,0,0,0x3f800000,0x8000000,0xbf800000);
      }
      else if (((iVar11 == 0xe) || (iVar11 == 0xd)) && (iVar6 != 0)) {
        FUN_00aa4520(0x100,iVar6,0,0,0x3f800000,0x8000000,0xbf800000);
      }
      else {
        FUN_00aa4080(0x52c,0,0,0x3f800000,0x8000000,0xbf800000);
      }
      pcVar1 = *(code **)(*piVar13 + 0x6c);
      piVar13[0xf88] = 1;
      (*pcVar1)();
      uStack_3a4 = 0;
      uStack_3a0 = *(undefined4 *)(param_1 + 0x84);
      uStack_39c = 0;
      (**(code **)(*piVar13 + 0x88))(&uStack_3a4);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00c009a1:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10();
      iVar11 = FUN_00a94ce0();
      if (iVar11 != 0) {
        *(undefined4 *)(param_1 + 0x30) = 6;
        *(undefined4 *)(param_1 + 0x34) = 0;
        FUN_00da8810();
        FUN_00db3e80(0x42700000,1);
      }
      iVar11 = FUN_00a8c760();
      if (iVar11 != 0) {
        FUN_00b85350(0x437a0000,piVar13[0x101a],piVar13[0x101b],0,0);
        FUN_00bbc2a0();
        _DAT_01d61ab0 = piVar13[0xd07];
        *(int *)(param_1 + 0xd8) = _DAT_01d61ab0;
        FUN_00bd9360(param_2);
      }
    }
    else if (*(int *)(param_1 + 0x34) == 1) goto LAB_00c009a1;
    piVar13[0xd07] = *(int *)(param_1 + 0xd8);
    iVar11 = FUN_00a81330();
    if ((iVar11 != 0) && (local_4b8 = (float *)FUN_00a7c8a0(), local_4b8 != (float *)0x0)) {
      iVar11 = FUN_00a81330();
      if ((iVar11 != 0) && (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) {
        local_4bc = (float)FUN_00a12210();
        local_4b4 = (int *)*local_4b8;
        (**(code **)(*piVar7 + 0x84))();
        (*(code *)local_4b4[0x1f])((int)local_4bc + 0x40);
      }
      iVar11 = *(int *)(param_1 + 0x38);
      if ((((iVar11 == 0xc) || (iVar11 == 0xd)) || (iVar11 == 0xe)) &&
         ((iVar11 = FUN_00a81330(), iVar11 != 0 &&
          (local_4b4 = (int *)FUN_00a7c8a0(), local_4b4 != (int *)0x0)))) {
        local_4bc = -NAN;
        iVar11 = FUN_00a81330();
        if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
          local_4bc = (float)FUN_009f8b40();
        }
        iVar11 = FUN_00a12210();
        iVar8 = FUN_00a12210();
        fStack_4b0 = *(float *)(iVar8 + 0x40) - *(float *)(iVar11 + 0x40);
        fStack_4ac = *(float *)(iVar8 + 0x44) - *(float *)(iVar11 + 0x44);
        fStack_4a8 = *(float *)(iVar8 + 0x48) - *(float *)(iVar11 + 0x48);
        fStack_4a4 = *(float *)(iVar8 + 0x4c) - *(float *)(iVar11 + 0x4c);
        if (((local_4a0 != 0.0) || (local_49c != 0.0)) || (local_498 != 0.0)) {
          fVar26 = fStack_4a8 * fStack_4a8 + fStack_4b0 * fStack_4b0 + fStack_4ac * fStack_4ac;
          if (fVar26 < 0.0 == (fVar26 == 0.0)) {
            FUN_00ddf460(&local_4a0);
          }
          else {
            FUN_00dd5650();
            local_4a0 = 0.0;
            local_49c = 1.0;
            local_498 = 0.0;
          }
        }
        piVar7 = local_4b4;
        iVar11 = FUN_00a12210();
        local_480 = *(float *)(iVar11 + 0x40);
        fStack_47c = *(float *)(iVar11 + 0x44);
        pcVar25 = "zangekiOnPartsStartPosCheck";
        uVar24 = 0;
        local_478 = *(float *)(iVar11 + 0x48);
        uVar23 = 0x60;
        uVar22 = 0;
        fStack_474 = *(float *)(iVar11 + 0x4c);
        local_470 = local_480 + fStack_4b0;
        local_46c = fStack_47c + fStack_4ac;
        local_468 = local_478 + fStack_4a8;
        fStack_464 = fStack_474 + fStack_4a4;
        uVar9 = FUN_00410130(6,local_4bc,0,0,0,0,0x60,0,"zangekiOnPartsStartPosCheck");
        FUN_00445d40(&local_480,&local_470,uVar9,uVar22,uVar23,uVar24,pcVar25);
        iVar11 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_460,&local_490,0,0);
        if (iVar11 != 0) {
          fStack_420 = (fStack_460 - fStack_4b0) + (float)local_490 * 0.5;
          fStack_41c = (fStack_45c - fStack_4ac) + (float)local_48c * 0.5;
          fStack_418 = (float)local_488 * 0.5 + (fStack_458 - fStack_4a8);
          fStack_414 = local_484 * 0.5 + (fStack_454 - fStack_4a4);
          local_4bc = *local_4b8;
          (**(code **)(*piVar7 + 0x84))();
          (**(code **)((int)local_4bc + 0x7c))(&fStack_420);
        }
      }
      (**(code **)(*piVar13 + 0x6c))();
      (**(code **)(*piVar13 + 0x88))(param_1 + 0x80);
    }
    break;
  case 6:
    if (*(int *)(param_1 + 0x34) == 0) {
      FUN_008e3c10();
      FUN_008e5c50();
      FUN_008e6c60();
      uVar9 = (*(code *)**(undefined4 **)param_2[1])(0x3d);
      FUN_00d82bf0(uVar9);
      if (*(int *)((int)fVar4 + 0x480) != 0) {
        fVar26 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60);
        fVar3 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 100);
        fVar2 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68);
        *(float *)(param_1 + 0xdc) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar26 * fVar26);
      }
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00da8810();
        FUN_00dc1270(0x42700000);
        piVar13[0x1032] = 0xf;
        _DAT_01bea9a0 = 1;
      }
      iVar11 = FUN_00a81330();
      if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
        FUN_00a8cb60();
      }
      piVar13[0x1032] = 0xf;
      DAT_01d61a88 = 0;
      iVar11 = *(int *)(param_1 + 0x38);
      if ((iVar11 == 0xe) || (iVar11 == 0xd)) {
        *(undefined4 *)(param_1 + 0xf8) = 0xbe860a92;
      }
      if (iVar11 == 0xc) {
        *(undefined4 *)(param_1 + 0xf8) = 0xbf060a92;
        *(undefined4 *)(param_1 + 0xf4) = 0xbeb2b8c2;
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    iVar11 = FUN_00a81330();
    if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
      *(int *)(param_1 + 0x1d0) = iVar11;
    }
    if ((*(int *)(param_1 + 0x1d0) == 0) || (*(int *)(*(int *)(param_1 + 0x1d0) + 0x87c) != 0)) {
      if ((*(float *)((int)fVar4 + 0x490) == 0.0) &&
         ((*(float *)((int)fVar4 + 0x494) == 0.0 && (*(float *)((int)fVar4 + 0x498) == 0.0)))) {
        piVar13[0xf86] = 1;
        *(undefined4 *)(param_1 + 0x30) = 0xc;
        FUN_00b92ea0();
        pfVar12 = (float *)(piVar13 + 0x10);
        (**(code **)(*piVar13 + 0x6c))();
        uStack_344 = 0;
        uStack_340 = *(undefined4 *)(param_1 + 0x54);
        uStack_33c = 0;
        (**(code **)(*piVar13 + 0x88))(&uStack_344);
        iVar11 = FUN_00a81330();
        if ((iVar11 != 0) && (local_4bc = (float)FUN_00a7c8a0(), local_4bc != 0.0)) {
          iVar11 = FUN_00a12210();
          if (iVar11 != 0) {
            local_470 = *pfVar12;
            local_468 = (float)piVar13[0x12];
            pfVar10 = (float *)FUN_00a925a0();
            local_4a0 = *pfVar10 * 5.0 + local_470;
            local_498 = pfVar10[2] * 5.0 + local_468;
            (**(code **)(*piVar13 + 0x6c))();
            uStack_354 = 0;
            fVar14 = (float10)fpatan((float10)fStack_4a4 - (float10)fStack_474,
                                     (float10)local_49c - (float10)local_46c);
            afStack_350[0] = (float)fVar14;
            afStack_350[1] = 0.0;
            (**(code **)(*piVar13 + 0x88))(&uStack_354);
          }
          FUN_009f8b40();
        }
        pfVar10 = (float *)FUN_00a926e0();
        local_470 = *pfVar12 + *pfVar10 * 1.5;
        local_46c = pfVar10[1] * 1.5 + (float)piVar13[0x11];
        local_468 = (float)piVar13[0x12] + pfVar10[2] * 1.5;
        fStack_464 = pfVar10[3] * 1.5 + (float)piVar13[0x13];
        local_4a0 = *(float *)(param_1 + 0x40);
        local_49c = *(float *)(param_1 + 0x44);
        local_498 = *(float *)(param_1 + 0x48);
        local_494 = *(undefined4 *)(param_1 + 0x4c);
        local_4bc = (float)FUN_00410130(6,0xffffffff,0,0);
        FUN_00445d40(&local_470,&local_4a0,local_4bc,0,0x60,0,"partsZanEndForward");
        FUN_00445d40(&local_4a0,&local_470,local_4bc,0,0x60,0,"partsZanEndReturn");
        iVar11 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_480,&local_490,0,0);
        if (((iVar11 != 0) ||
            (iVar11 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_480,&local_490,0,0),
            iVar11 != 0)) &&
           (fVar26 = local_480 - *(float *)(param_1 + 0x40),
           fVar3 = fStack_47c - *(float *)(param_1 + 0x44),
           fVar2 = local_478 - *(float *)(param_1 + 0x48),
           0.1 < SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar26 * fVar26))) {
          if (*(int *)(param_1 + 0x38) == 0xc) {
            uStack_370 = 0;
            fVar14 = (float10)fpatan((float10)*pfVar12 - (float10)*(float *)(param_1 + 0x40),
                                     (float10)(float)piVar13[0x12] -
                                     (float10)*(float *)(param_1 + 0x48));
            fStack_36c = (float)fVar14;
            uStack_368 = 0;
            uStack_360 = *(undefined4 *)(param_1 + 0x40);
            iStack_35c = piVar13[0x11];
            uStack_358 = *(undefined4 *)(param_1 + 0x48);
            (**(code **)(*piVar13 + 0x7c))(&uStack_360);
          }
          else {
            uStack_330 = 0;
            fVar14 = (float10)fpatan((float10)*pfVar12 - (float10)*(float *)(param_1 + 0x40),
                                     (float10)(float)piVar13[0x12] -
                                     (float10)*(float *)(param_1 + 0x48));
            afStack_32c[0] = (float)fVar14;
            afStack_32c[1] = 0.0;
            (**(code **)(*piVar13 + 0x7c))((float *)(param_1 + 0x40));
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x30) = 9;
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)((int)fVar4 + 0x56c) = 1;
      FUN_00e25500();
      DAT_01d61a88 = 1;
      _DAT_01bea9a0 = 0;
    }
    else {
      FUN_00bd7600(param_2);
      FUN_00bf24f0(param_2);
      if (*(int *)(param_1 + 0x38) == 0xc) {
        uVar9 = 0x42480000;
      }
      else {
        uVar9 = 0x41f00000;
      }
      FUN_00bd1d40(param_2,1,1,uVar9);
      *(int *)(param_1 + 0x1c0) = piVar13[0x10];
      *(int *)(param_1 + 0x1c4) = piVar13[0x11];
      *(int *)(param_1 + 0x1c8) = piVar13[0x12];
      *(int *)(param_1 + 0x1cc) = piVar13[0x13];
      iVar11 = FUN_00a81330();
      if (((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) &&
         (iVar11 = FUN_00860b50(), iVar11 != 0)) {
        FUN_005ca330();
      }
      FUN_00b83ea0();
      if (*(int *)(param_1 + 0x38) == 0xc) {
        FUN_00b83ea0();
      }
      FUN_00b8bb40();
      FUN_00b8bbb0();
      FUN_00bbc310();
      FUN_00bd7600(param_2,param_1);
      FUN_00c5bbb0();
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x34) == 0) {
      FUN_00aa4080(0x75,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000);
      FUN_008e6d00();
      FUN_008e4580(piVar13 + 0x10);
      if (*(int *)(piVar13[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(piVar13[0x1d9] + 0x104) = 0;
      }
      FUN_008e6c60();
      FUN_008e5c50();
      piVar13[0x225] = -0x40800000;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      *(undefined4 *)(param_1 + 0x198) = 0;
    }
    else if (*(int *)(param_1 + 0x34) != 1) break;
    iVar11 = FUN_00a81330();
    if (((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) &&
       (iVar11 = FUN_00a92f90(), iVar11 != 0)) {
      FUN_00a92f90();
      FUN_00404b90();
    }
    fVar14 = (float10)FUN_00a93060();
    fVar14 = fVar14 + (float10)*(float *)(param_1 + 0x198);
    *(float *)(param_1 + 0x198) = (float)fVar14;
    if ((float10)0.5 < fVar14) {
      *(undefined4 *)(param_1 + 0x30) = 8;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    break;
  case 8:
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar11 = FUN_00a7f600();
      if (iVar11 == 0) {
        FUN_00aa4080(0x52d,0,0,0x3f800000,0x8000000,0x3d888889);
        (**(code **)(*piVar13 + 0x6c))();
        iVar11 = FUN_00a81330();
        if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
          uStack_380 = 0;
          fVar14 = (float10)fpatan((float10)*(float *)(iVar11 + 0x40) -
                                   (float10)*(float *)((int)fVar4 + 0x490),
                                   (float10)*(float *)(iVar11 + 0x48) -
                                   (float10)*(float *)((int)fVar4 + 0x498));
          fStack_37c = (float)fVar14;
          uStack_378 = 0;
          (**(code **)(*piVar13 + 0x88))();
        }
        FUN_008e6d00();
        FUN_008e4580((float *)((int)fVar4 + 0x490));
        if (*(int *)(piVar13[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(piVar13[0x1d9] + 0x104) = 0;
        }
        FUN_008e6c60();
        FUN_008e5c50();
      }
      else {
        FUN_00aa4520(0xdf,iVar11,0,0,0x3f800000,0x8000000,0x3d888889);
        pfVar12 = (float *)(**(code **)(*piVar13 + 0x84))();
        local_410 = *pfVar12 + 3.1415927;
        fStack_40c = pfVar12[1] + 3.1415927;
        fStack_408 = pfVar12[2] + 3.1415927;
        fStack_404 = pfVar12[3] + 3.1415927;
        (**(code **)(*piVar13 + 0x7c))((int)fVar4 + 0x490);
        if (*(int *)(param_1 + 0x38) == 0x10) {
          FUN_00a92f90();
          Animation::Motion::Unit::setCameraNo(0);
        }
      }
      FUN_00dc1270(0);
      _DAT_01bea940 = (float *)0x0;
      FUN_00da8810();
      FUN_00db3e80(0,0);
      piVar13[0xf86] = 1;
      piVar13[0xf87] = 1;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
    else if (*(int *)(param_1 + 0x34) != 1) break;
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10();
    FUN_00dc1270(0);
    _DAT_01bea940 = (float *)0x0;
    FUN_00da8810();
    FUN_00db3e80(0,0);
    iVar11 = FUN_00a7f600();
    if (iVar11 == 0) {
      iVar11 = FUN_00a81330();
      if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
        local_450 = 0;
        fVar14 = (float10)fpatan((float10)*(float *)(iVar11 + 0x40) -
                                 (float10)*(float *)((int)fVar4 + 0x490),
                                 (float10)*(float *)(iVar11 + 0x48) -
                                 (float10)*(float *)((int)fVar4 + 0x498));
        local_44c = (float)fVar14;
        local_448 = 0;
        (**(code **)(*piVar13 + 0x88))();
      }
    }
    else {
      FUN_00a7c8a0();
      iVar11 = FUN_00a12210();
      FID_conflict__memcpy(local_3f0,(void *)(iVar11 + 0x10),0x40);
      local_400 = 0;
      fVar14 = (float10)fpatan((float10)local_3c0 - (float10)*(float *)((int)fVar4 + 0x490),
                               (float10)local_3b8 - (float10)*(float *)((int)fVar4 + 0x498));
      local_3fc = (float)fVar14;
      local_3f8 = 0;
      (**(code **)(*piVar13 + 0x7c))((float *)((int)fVar4 + 0x490));
    }
    iVar11 = FUN_00a94ce0();
    if (iVar11 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0xc;
      *(undefined4 *)(param_1 + 0x34) = 0;
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a7c970();
      }
    }
    break;
  case 9:
    if (*(int *)(param_1 + 0x34) == 0) {
      FUN_00aa4080(0x530,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000);
      FUN_00da8810();
      FUN_00dc1270(0x41700000);
      FUN_00db3e80(0x41700000,1);
      _DAT_01bea9a0 = 0;
      FUN_00b92ea0();
      *(int *)(param_1 + 0x210) = piVar13[0x10];
      *(int *)(param_1 + 0x214) = piVar13[0x11];
      *(int *)(param_1 + 0x218) = piVar13[0x12];
      *(int *)(param_1 + 0x21c) = piVar13[0x13];
      iVar11 = FUN_00a81330();
      if (((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) &&
         (*(int *)(iVar11 + 0x4b0) == 0x2020a)) {
        FUN_00b92d70();
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
    else if (*(int *)(param_1 + 0x34) != 1) break;
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10();
    iVar11 = FUN_00a94ce0();
    if (iVar11 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 10;
      *(undefined4 *)(param_1 + 0x34) = 0;
      iVar11 = FUN_00a12210();
      if (iVar11 != 0) {
        local_4a0 = *(float *)(iVar11 + 0x40);
        local_49c = *(float *)(iVar11 + 0x44);
        local_498 = *(float *)(iVar11 + 0x48);
        local_494 = *(undefined4 *)(iVar11 + 0x4c);
        FUN_004039a0(0x45,piVar13);
        FUN_0041cdb0();
        FUN_00a8c930(0);
        FUN_00e5e080("core_se_hit_kick_mg",&local_4a0,0,0xffffffff);
        if ((*(int *)(param_1 + 0x38) == 0xf) || (*(int *)(param_1 + 0x38) == 0x10)) {
          FUN_004039a0(0x14d,piVar13);
          FUN_0041cdb0();
          FUN_00a8c930(0);
        }
      }
      piVar13[0xf86] = 1;
      FUN_00b7aa80();
    }
    iVar11 = FUN_00a952e0(0);
    if (iVar11 != 0) {
      FUN_00b7ab80(0x41f00000);
    }
    iVar11 = FUN_00a959f0();
    local_4bc = (float)iVar11 * 0.04347826;
    pfVar12 = (float *)FUN_00a925a0();
    local_430 = local_4bc * *pfVar12 + *(float *)(param_1 + 0x210);
    local_42c = pfVar12[1] * local_4bc + *(float *)(param_1 + 0x214);
    local_428 = pfVar12[2] * local_4bc + *(float *)(param_1 + 0x218);
    local_424 = pfVar12[3] * local_4bc + *(float *)(param_1 + 0x21c);
    (**(code **)(*piVar13 + 0x6c))();
    break;
  case 10:
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar11 = FUN_00a7f600();
      if (((*(int *)(param_1 + 0x38) == 0xf) || (*(int *)(param_1 + 0x38) == 0x10)) && (iVar11 != 0)
         ) {
        FUN_00aa4520(0xde,iVar11,0,0,0x3f800000,0x8000000,0xbf800000);
        if (*(int *)(param_1 + 0x38) == 0x10) {
          FUN_00a92f90();
          Animation::Motion::Unit::setCameraNo(0);
        }
      }
      else {
        FUN_00aa4080(0x531,0,0,0x3f800000,0x8000000,0xbf800000);
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
    else if (*(int *)(param_1 + 0x34) != 1) break;
    if ((piVar13 != (int *)0x0) && (iVar11 = FUN_00a92f90(), iVar11 != 0)) {
      FUN_00a92f90();
      FUN_00404b90();
    }
    iVar11 = FUN_00a94ce0();
    if (iVar11 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 8;
      *(undefined4 *)(param_1 + 0x34) = 0;
      _DAT_01bea9a0 = 0;
      FUN_00b7aa80();
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x34) == 0) {
      FUN_00aa4080(0x3c1,0,0x3e2aaaab,0x3f800000,0x8000000,0x3d888889);
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a7c970();
        FUN_00da8810();
        FUN_00dc1270(0x41200000);
      }
      _DAT_01bea9a0 = 0;
      FUN_00b92ea0();
      FUN_00b7aa80();
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
    else if (*(int *)(param_1 + 0x34) != 1) break;
    iVar11 = FUN_00a81330();
    if (((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) &&
       (iVar11 = FUN_00a92f90(), iVar11 != 0)) {
      FUN_00a92f90();
      FUN_00404b90();
    }
    iVar11 = FUN_00a94ce0();
    if (iVar11 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 7;
      *(undefined4 *)(param_1 + 0x34) = 0;
      _DAT_01bea9a0 = 0;
    }
    break;
  case 0xc:
    FUN_00b7aa80();
    FUN_008e6d00();
    pfVar12 = (float *)((int)fVar4 + 0x490);
    FUN_008e4580(pfVar12);
    if (*(int *)(piVar13[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(piVar13[0x1d9] + 0x104) = 0;
    }
    FUN_008e6c60();
    FUN_008e5c50();
    pfVar10 = pfVar12;
    if (((*pfVar12 == 0.0) && (*(float *)((int)fVar4 + 0x494) == 0.0)) &&
       (*(float *)((int)fVar4 + 0x498) == 0.0)) {
      pfVar10 = (float *)(piVar13 + 0x10);
    }
    FUN_008e4580(pfVar10);
    if (*(int *)(param_1 + 0x38) == 0xf) {
LAB_00c01eb3:
      (**(code **)(*piVar13 + 0x6c))();
    }
    else {
      if (*(int *)(param_1 + 0x38) == 0x10) {
        FUN_00a92f90();
        Animation::Motion::Unit::setCameraNo(0);
        goto LAB_00c01eb3;
      }
      FUN_00da8ea0();
    }
    uVar9 = 0x41c80000;
    local_4b8 = (float *)0x41c80000;
    if (*(int *)(param_1 + 0x38) == 0xc) {
      uVar9 = 0x40a00000;
      local_4b8 = (float *)0x40a00000;
    }
    FUN_00dc1270(uVar9);
    _DAT_01bea940 = local_4b8;
    FUN_00da8810();
    FUN_00db3e80(local_4b8,1);
    if (((*pfVar12 == 0.0) && (*(float *)((int)fVar4 + 0x494) == 0.0)) &&
       (*(float *)((int)fVar4 + 0x498) == 0.0)) {
      *(undefined4 *)((int)fVar4 + 0x3ec) = 0xb;
    }
    else {
      *(undefined4 *)((int)fVar4 + 0x3ec) = 0;
    }
    FUN_00d82510(0xb);
    piVar13[0xf87] = 1;
  }
  iVar11 = FUN_00a81330();
  if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
    iVar11 = FUN_00a12210();
    local_4a0 = *(float *)(iVar11 + 0x40);
    local_49c = *(float *)(iVar11 + 0x44);
    local_498 = *(float *)(iVar11 + 0x48);
    local_494 = *(undefined4 *)(iVar11 + 0x4c);
    local_440 = SQRT(*(float *)(iVar11 + 0x14) * *(float *)(iVar11 + 0x14) +
                     *(float *)(iVar11 + 0x10) * *(float *)(iVar11 + 0x10) +
                     *(float *)(iVar11 + 0x18) * *(float *)(iVar11 + 0x18));
    local_43c = SQRT(*(float *)(iVar11 + 0x20) * *(float *)(iVar11 + 0x20) +
                     *(float *)(iVar11 + 0x24) * *(float *)(iVar11 + 0x24) +
                     *(float *)(iVar11 + 0x28) * *(float *)(iVar11 + 0x28));
    fVar26 = SQRT(*(float *)(iVar11 + 0x38) * *(float *)(iVar11 + 0x38) +
                  *(float *)(iVar11 + 0x34) * *(float *)(iVar11 + 0x34) +
                  *(float *)(iVar11 + 0x30) * *(float *)(iVar11 + 0x30));
    local_4bc = *(float *)(iVar11 + 0x28) / fVar26;
    local_4b4 = (int *)(*(float *)(iVar11 + 0x38) / fVar26);
    fVar14 = (float10)FUN_00ddbaa0();
    fVar17 = (float10)fpatan((float10)local_4bc,(float10)(float)local_4b4);
    local_470 = (float)fVar17;
    local_46c = (float)fVar14;
    fVar14 = (float10)fpatan((float10)*(float *)(iVar11 + 0x14) / (float10)local_43c,
                             (float10)*(float *)(iVar11 + 0x10) / (float10)local_440);
    local_468 = (float)fVar14;
    local_450 = 0;
    local_44c = 1.0;
    local_448 = 0;
    FUN_00ddc1d0(local_320,&local_470,5);
    puVar5 = &local_450;
    pfVar12 = &local_410;
    D3DXVec3TransformNormal();
    fStack_45c = 0.0;
    fStack_458 = 0.0;
    fStack_454 = 1.0;
    FUN_00ddc1d0(afStack_32c,&fStack_47c,5);
    pfVar10 = afStack_32c;
    D3DXVec3TransformNormal(auStack_2ec,&fStack_45c);
    local_468 = 1.0;
    fStack_464 = 0.0;
    fStack_460 = 0.0;
    FUN_00ddc1d0(auStack_338,&local_488,5);
    puVar21 = auStack_338;
    pfVar20 = &local_468;
    pfVar19 = &fStack_418;
    D3DXVec3TransformNormal();
    local_4b4 = (int *)(fStack_434 * 1.5 + fStack_4c4);
    fStack_4b0 = local_430 * 1.5 + fVar4;
    fStack_4ac = local_42c * 1.5 + local_4bc;
    fStack_4a8 = local_428 * 1.5 + (float)local_4b8;
    fVar26 = fStack_4c4 - (float)local_4b4;
    fVar4 = fVar4 - fStack_4b0;
    fVar2 = local_4bc - fStack_4ac;
    FUN_00ddcfe0(&uStack_344,&local_424,0);
    puVar18 = &uStack_344;
    D3DXVec3TransformNormal(&stack0xfffffb2c,&stack0xfffffb2c);
    fStack_474 = (float)local_494;
    fStack_4b0 = (float)pfVar10 * -1.0;
    fStack_4ac = (float)pfVar12 * -1.0;
    fStack_4a8 = (float)puVar5 * -1.0;
    fStack_4a4 = fVar26 * -1.0;
    fVar3 = fStack_4a8 * fStack_4a8 + fStack_4ac * fStack_4ac + fStack_4b0 * fStack_4b0;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&fStack_4b0,&fStack_4b0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_4b0 = 0.0;
      fStack_4ac = 1.0;
      fStack_4a8 = 0.0;
    }
    local_490 = pfVar10;
    local_48c = pfVar12;
    local_488 = puVar5;
    local_484 = fVar26;
    FUN_00ddcfe0(afStack_350,&local_430,0xbfc90fdb);
    D3DXVec3TransformNormal(&local_490,&local_490,afStack_350);
    FUN_00ddcfe0(&iStack_35c,&local_4bc,0);
    D3DXVec3TransformNormal(&local_49c,&local_49c,&iStack_35c);
    local_468 = (float)puVar18 + (float)puVar5;
    fStack_464 = (float)pfVar19 + fVar26;
    fStack_460 = (float)pfVar20 + fVar4;
    fStack_45c = (float)puVar21 + fVar2;
    local_478 = local_468 + fStack_4a8;
    fStack_474 = fStack_464 + fStack_4a4;
    local_470 = fStack_460 + local_4a0;
    local_46c = fStack_45c + local_49c;
    FUN_00db6410(&fStack_438,&local_468,&local_478,&stack0xfffffb38);
    fVar14 = (float10)local_430;
    local_488 = (undefined4 *)
                (float)SQRT(fVar14 * fVar14 +
                            (float10)fStack_438 * (float10)fStack_438 +
                            (float10)fStack_434 * (float10)fStack_434);
    fVar17 = (float10)fStack_420;
    local_484 = (float)SQRT(fVar17 * fVar17 +
                            (float10)local_428 * (float10)local_428 +
                            (float10)local_424 * (float10)local_424);
    fVar15 = (float10)local_410;
    fVar16 = SQRT(fVar15 * fVar15 +
                  (float10)fStack_418 * (float10)fStack_418 +
                  (float10)fStack_414 * (float10)fStack_414);
    fVar17 = (float10)fpatan(fVar17 / fVar16,fVar15 / fVar16);
    local_498 = (float)fVar17;
    fVar14 = (float10)FUN_00ddbaa0((float)-(fVar14 / fVar16));
    fVar17 = (float10)fpatan((float10)fStack_434 / (float10)local_484,
                             (float10)fStack_438 / (float10)(float)local_488);
    *(float *)(param_1 + 0x70) = (float)puVar18 + (float)puVar5;
    *(float *)(param_1 + 0x74) = (float)pfVar19 + fVar26;
    *(float *)(param_1 + 0x78) = (float)pfVar20 + fVar4;
    *(float *)(param_1 + 0x7c) = (float)puVar21 + fVar2;
    *(float *)(param_1 + 0x80) = local_498;
    *(float *)(param_1 + 0x84) = (float)fVar14;
    *(float *)(param_1 + 0x88) = (float)fVar17;
    *(float **)(param_1 + 0x8c) = local_48c;
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x8c);
    StateMachineNode::vf10(param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x1fc);
  StateMachineNode::vf10();
  return;
}

