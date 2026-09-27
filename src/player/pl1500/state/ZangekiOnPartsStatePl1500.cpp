// src/player/pl1500/state/ZangekiOnPartsStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A49D0..008D15E0, 12 functions

#include "types.h"

// 008A49D0  ZangekiOnPartsStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiOnPartsStatePl1500::vf14(int param_1,undefined4 param_2)

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

// 008A49E0  ZangekiOnPartsStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiOnPartsStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A49F0  ZangekiOnPartsStatePl1500::vf24  size=19  [class]
bool ZangekiOnPartsStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A4A10  ZangekiOnPartsStatePl1500::ZangekiOnPartsStatePl1500  size=36  [class]
undefined4 * __thiscall
ZangekiOnPartsStatePl1500::ZangekiOnPartsStatePl1500(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a603a0();
  return param_1;
}

// 008A4A40  ZangekiOnPartsStatePl1500::vf00  size=6  [class]
undefined * ZangekiOnPartsStatePl1500::vf00(void)

{
  return &DAT_01b35bd0;
}

// 008AA280  ZangekiOnPartsStatePl1500::vf04  size=42  [class]
undefined4 * __thiscall ZangekiOnPartsStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  cXml::cXml_7();
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B4670  ZangekiOnPartsStatePl1500::vf08  size=997  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiOnPartsStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b90);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  DAT_01bea060 = DAT_01bea060 | 0x400;
  *(undefined4 *)(uVar4 + 0x40c8) = 0xf;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(uVar3 + 0x2fc) = 1;
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
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
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
  *(undefined4 *)(uVar4 + 0x3e18) = 0;
  *(undefined4 *)(uVar4 + 0x3e1c) = 0;
  *(undefined4 *)(uVar4 + 0x3e20) = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01b35260;
    (**(code **)(*piVar2 + 4))(&DAT_01b35260);
    iVar1 = FUN_00dd6d80(puVar5);
    if (iVar1 != 0) {
      FUN_005ca330(0x3f800000);
    }
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    iVar1 = *(int *)(uVar3 + 0x408);
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
          *(undefined4 *)(param_1 + 0x38) = 3;
          break;
        case 0x111:
          *(undefined4 *)(param_1 + 0x38) = 2;
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
  *(undefined4 *)(uVar3 + 0x4a0) = 0;
  if (((((DAT_01bea090 & 0x80000000) != 0) && (0 < *(int *)(param_1 + 0x38))) &&
      (*(int *)(param_1 + 0x38) < 0xc)) && (iVar1 = FUN_009c4bf0(), iVar1 < 3)) {
    _DAT_01d61384 = 0x10;
    _DAT_01d61388 = 0;
    _DAT_01d6138c = 1;
  }
  *(undefined4 *)(uVar3 + 0x6c8) = 1;
  return;
}

// 008BD7C0  ZangekiOnPartsStatePl1500::vf0C  size=1496  [class]
void __thiscall ZangekiOnPartsStatePl1500::vf0C(int param_1,undefined4 *param_2)

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
  float *local_238;
  undefined4 *local_234;
  float local_220;
  float local_21c;
  int *local_218;
  float fStack_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float fStack_200;
  float local_1fc;
  float local_1f8;
  float *local_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined1 auStack_1dc [4];
  undefined4 auStack_1d8 [3];
  undefined1 auStack_1cc [4];
  undefined1 auStack_1c8 [8];
  float local_1c0;
  float local_1bc;
  float local_1b8 [3];
  undefined1 auStack_1ac [12];
  undefined1 local_1a0 [64];
  undefined1 auStack_160 [348];
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar10 = 0;
    }
    else {
      local_234 = (undefined4 *)&DAT_01b35bdc;
      local_238 = (float *)0x8bd7f3;
      (**(code **)*param_2)();
      local_238 = (float *)0x8bd7fa;
      iVar8 = FUN_00dd6d80();
      uVar10 = -(uint)(iVar8 != 0) & (uint)param_2;
    }
    piVar5 = *(int **)(uVar10 + 0x5e0);
    if (piVar5 == (int *)0x0) {
      local_1f4 = (float *)0x0;
    }
    else {
      local_234 = (undefined4 *)&DAT_01b35b90;
      local_238 = (float *)0x8bd820;
      (**(code **)(*piVar5 + 4))();
      local_238 = (float *)0x8bd827;
      iVar8 = FUN_00dd6d80();
      local_1f4 = (float *)(-(uint)(iVar8 != 0) & (uint)piVar5);
    }
    local_234 = (undefined4 *)0x8bd83c;
    iVar8 = FUN_00a81330();
    if (iVar8 != 0) {
      local_234 = (undefined4 *)0x8bd84b;
      iVar8 = FUN_00a7c8a0();
      if (iVar8 != 0) {
        local_234 = *(undefined4 **)(uVar10 + 0x408);
        local_238 = (float *)0x8bd861;
        iVar8 = FUN_00a12210();
        if (iVar8 != 0) {
          local_210 = *(float *)(iVar8 + 0x40);
          local_20c = *(float *)(iVar8 + 0x44);
          local_208 = *(float *)(iVar8 + 0x48);
          local_204 = *(float *)(iVar8 + 0x4c);
          local_220 = SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                           *(float *)(iVar8 + 0x10) * *(float *)(iVar8 + 0x10) +
                           *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
          local_21c = SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                           *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                           *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
          fVar1 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
                       *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
                       *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
          local_1fc = *(float *)(iVar8 + 0x28) / fVar1;
          local_1f8 = *(float *)(iVar8 + 0x38) / fVar1;
          local_234 = (undefined4 *)-(*(float *)(iVar8 + 0x18) / fVar1);
          local_238 = (float *)0x8bd912;
          fVar12 = (float10)FUN_00ddbaa0();
          local_238 = (float *)0x5;
          fVar13 = (float10)fpatan((float10)local_1fc,(float10)local_1f8);
          local_1c0 = (float)fVar13;
          local_1bc = (float)fVar12;
          fVar12 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)local_21c,
                                   (float10)*(float *)(iVar8 + 0x10) / (float10)local_220);
          local_1b8[0] = (float)fVar12;
          local_220 = 0.0;
          local_21c = 0.0;
          local_218 = (int *)0x3f800000;
          FUN_00ddc1d0(local_1a0,&local_1c0);
          local_234 = (undefined4 *)local_1a0;
          local_238 = &local_220;
          D3DXVec3TransformNormal(&local_1f0);
          FUN_00ddc1d0(auStack_1ac,auStack_1cc,5);
          D3DXVec3TransformNormal(auStack_1dc,&stack0xfffffdd4,auStack_1ac);
          local_238 = (float *)0x0;
          local_234 = (undefined4 *)0x3f800000;
          FUN_00ddc1d0(local_1b8,auStack_1d8,5);
          D3DXVec3TransformNormal(&local_1f8,&local_238,local_1b8);
          *(undefined4 **)(param_1 + 0x60) = local_234;
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x6c) = 0;
          fVar1 = *(float *)(uVar10 + 0x450);
          fVar2 = *(float *)(uVar10 + 0x458);
          local_238 = (float *)(fVar2 * local_208 + fStack_1e8 * fVar1 + 0.0);
          fVar3 = *(float *)(uVar10 + 0x454);
          *(float *)(param_1 + 0xb0) =
               local_204 * fVar3 + fStack_214 * fVar2 + (float)local_1f4 * fVar1 + (float)local_234;
          *(float *)(param_1 + 0xb4) =
               fStack_200 * fVar3 + local_210 * fVar2 + local_1f0 * fVar1 + 0.0;
          *(float *)(param_1 + 0xb8) =
               local_1fc * fVar3 + local_20c * fVar2 + fStack_1ec * fVar1 + 1.0;
          *(float *)(param_1 + 0xbc) = fVar3 * local_1f8 + (float)local_238;
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(uVar10 + 0x430);
          *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(uVar10 + 0x434);
          *(undefined4 *)(param_1 + 200) = *(undefined4 *)(uVar10 + 0x438);
          *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(uVar10 + 0x43c);
          fVar1 = *(float *)(uVar10 + 0x410);
          fVar2 = *(float *)(uVar10 + 0x418);
          fVar4 = *(float *)(uVar10 + 0x414);
          *(float *)(param_1 + 0x70) =
               local_204 * fVar4 + fStack_214 * fVar2 + fVar1 * (float)local_1f4 + (float)local_234;
          *(float *)(param_1 + 0x74) =
               fStack_200 * fVar4 + local_210 * fVar2 + local_1f0 * fVar1 + 0.0;
          *(float *)(param_1 + 0x78) =
               local_1fc * fVar4 + local_20c * fVar2 + fStack_1ec * fVar1 + 1.0;
          *(float *)(param_1 + 0x7c) =
               local_1f8 * fVar4 + local_208 * fVar2 + fStack_1e8 * fVar1 + 0.0;
          local_234 = (undefined4 *)(local_204 * fVar3);
          thunk_FUN_00dde510(auStack_1c8,auStack_1cc,(float *)(param_1 + 0x60),
                             (float *)(param_1 + 0x70));
          *(undefined4 *)(param_1 + 0xa0) = 0;
          fVar12 = (float10)fpatan((float10)*(float *)(param_1 + 0x60) -
                                   (float10)*(float *)(param_1 + 0x70),
                                   (float10)*(float *)(param_1 + 0x68) -
                                   (float10)*(float *)(param_1 + 0x78));
          *(float *)(param_1 + 0xa4) = (float)fVar12;
          iVar8 = *local_218;
          *(undefined4 *)(param_1 + 0x80) = 0;
          pcVar6 = *(code **)(iVar8 + 0x84);
          *(undefined4 *)(param_1 + 0x88) = 0;
          *(float *)(param_1 + 0x84) = (float)fVar12;
          *(undefined4 *)(param_1 + 0x8c) = auStack_1d8[0];
          *(int *)(param_1 + 0x40) = local_218[0x10];
          *(int *)(param_1 + 0x44) = local_218[0x11];
          *(int *)(param_1 + 0x48) = local_218[0x12];
          *(int *)(param_1 + 0x4c) = local_218[0x13];
          puVar9 = (undefined4 *)(*pcVar6)();
          *(undefined4 *)(param_1 + 0x50) = *puVar9;
          *(undefined4 *)(param_1 + 0x54) = puVar9[1];
          *(undefined4 *)(param_1 + 0x58) = puVar9[2];
          *(undefined4 *)(param_1 + 0x5c) = puVar9[3];
          *(float *)(param_1 + 0xdc) =
               SQRT(*(float *)(uVar10 + 0x418) * *(float *)(uVar10 + 0x418) +
                    *(float *)(uVar10 + 0x410) * *(float *)(uVar10 + 0x410) +
                    *(float *)(uVar10 + 0x414) * *(float *)(uVar10 + 0x414));
          if (param_2 == (undefined4 *)0x0) {
            uVar11 = 0;
          }
          else {
            local_234 = (undefined4 *)&DAT_01b35bdc;
            local_238 = (float *)0x8bdcb5;
            (**(code **)*param_2)();
            local_238 = (float *)0x8bdcbc;
            iVar8 = FUN_00dd6d80();
            uVar11 = -(uint)(iVar8 != 0) & (uint)param_2;
          }
          if (*(int *)(uVar11 + 0x4c4) != 1) {
            local_234 = param_2;
            local_238 = (float *)0x8bdcd7;
            FUN_008aa950();
            local_238 = (float *)0x16495c0;
            *(undefined4 *)(uVar11 + 0x4c4) = 1;
            FUN_00e5e1b0();
          }
        }
      }
    }
    local_234 = (undefined4 *)0x0;
    local_238 = (float *)0x0;
    (**(code **)(*(int *)(uVar10 + 400) + 8))(0);
    pfVar7 = local_1f4;
    local_234 = (undefined4 *)0x0;
    local_238 = local_1f4;
    FUN_004039a0(1);
    local_238 = (float *)0x8bdd31;
    local_234 = (undefined4 *)(uVar10 + 400);
    FUN_00dffb30();
    local_238 = (float *)pfVar7[0x13c];
    local_234 = (undefined4 *)0x0;
    FUN_00e03080();
    local_234 = (undefined4 *)0x8bdd51;
    local_238 = (float *)FUN_00a81330();
    if (local_238 != (float *)0x0) {
      local_234 = (undefined4 *)0x1;
      FUN_00e03080();
    }
    local_234 = (undefined4 *)auStack_160;
    local_238 = (float *)0x11500;
    FUN_00a8c8b0();
    *(undefined4 *)(param_1 + 0x160) = 0x420c0000;
  }
  local_234 = param_2;
  local_238 = (float *)0x8bdd8f;
  StateMachineNode::vf0C();
  return;
}

// 008BDDA0  ZangekiOnPartsStatePl1500::vf20  size=430  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ZangekiOnPartsStatePl1500::vf20(undefined4 param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
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
  DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  FUN_00a7c950();
  _DAT_01d61384 = 0xffffffff;
  FUN_008b8b40(param_2,param_1);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c950();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_009fdde0();
    }
  }
  uVar3 = 0;
  DAT_01d61a88 = 0;
  *(undefined4 *)(uVar4 + 0x4a0) = 0;
  if (param_2 != (undefined4 *)0x0) {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  (**(code **)(*(int *)(uVar3 + 0x240) + 8))(0x41200000,0,0);
  *(undefined4 *)(uVar4 + 0x6c8) = 0;
  return 1;
}

// 008BDF50  FUN_008bdf50  size=5719  [callgraph]
void __thiscall FUN_008bdf50(int param_1,float ***param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float ***pppfVar8;
  float **ppfVar9;
  float fVar10;
  undefined4 **ppuVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 ***pppuVar15;
  int iVar16;
  uint uVar17;
  float10 fVar18;
  float10 fVar19;
  float ****ppppfStack_190;
  float *pfStack_18c;
  float *pfStack_188;
  float ***pppfStack_184;
  undefined1 *puStack_180;
  float *pfStack_17c;
  float ***pppfStack_178;
  undefined4 **ppuStack_174;
  float **ppfStack_170;
  undefined4 ***pppuStack_16c;
  undefined4 ***pppuStack_168;
  float *pfStack_164;
  undefined4 ***pppuStack_160;
  float **ppfStack_15c;
  float *pfStack_158;
  float *pfStack_154;
  float **ppfStack_150;
  float *pfStack_14c;
  undefined4 ***pppuStack_148;
  float *local_144;
  float fStack_134;
  float **local_130;
  float local_12c;
  float local_128;
  undefined4 **ppuStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
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
  float afStack_dc [2];
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 **local_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float **ppfStack_ac;
  undefined4 ***pppuStack_a8;
  undefined4 *puStack_a4;
  float **local_a0;
  undefined4 *local_9c;
  undefined4 *puStack_98;
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
    uVar17 = 0;
  }
  else {
    local_144 = (float *)&DAT_01b35bdc;
    pppuStack_148 = (float ***)0x8bdf79;
    (*(code *)**param_2)();
    pppuStack_148 = (float ***)0x8bdf80;
    iVar16 = FUN_00dd6d80();
    uVar17 = -(uint)(iVar16 != 0) & (uint)param_2;
  }
  piVar7 = *(int **)(uVar17 + 0x5e0);
  if (piVar7 == (int *)0x0) {
    local_b8 = 0.0;
  }
  else {
    local_144 = (float *)&DAT_01b35b90;
    pppuStack_148 = (float ***)0x8bdfa9;
    (**(code **)(*piVar7 + 4))();
    pppuStack_148 = (float ***)0x8bdfb0;
    iVar16 = FUN_00dd6d80();
    local_b8 = (float)(-(uint)(iVar16 != 0) & (uint)piVar7);
  }
  if (*(int *)(uVar17 + 0x484) == 0) {
    local_144 = (float *)0x8bdfd5;
    iVar16 = FUN_00a81330();
    if (iVar16 == 0) {
      return;
    }
    local_144 = (float *)0x8bdfe4;
    iVar16 = FUN_00a7c8a0();
    if (iVar16 == 0) {
      return;
    }
    local_144 = *(float **)(uVar17 + 0x408);
    pppuStack_148 = (float ***)0x8bdffa;
    iVar16 = FUN_00a12210();
    if (iVar16 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x30) == 7) {
      return;
    }
    local_100 = *(float *)(iVar16 + 0x40);
    local_fc = *(float *)(iVar16 + 0x44);
    local_f8 = *(float *)(iVar16 + 0x48);
    local_f4 = *(float *)(iVar16 + 0x4c);
    local_a0 = (float **)
               SQRT(*(float *)(iVar16 + 0x14) * *(float *)(iVar16 + 0x14) +
                    *(float *)(iVar16 + 0x10) * *(float *)(iVar16 + 0x10) +
                    *(float *)(iVar16 + 0x18) * *(float *)(iVar16 + 0x18));
    local_9c = (undefined4 *)
               SQRT(*(float *)(iVar16 + 0x20) * *(float *)(iVar16 + 0x20) +
                    *(float *)(iVar16 + 0x24) * *(float *)(iVar16 + 0x24) +
                    *(float *)(iVar16 + 0x28) * *(float *)(iVar16 + 0x28));
    fVar1 = SQRT(*(float *)(iVar16 + 0x38) * *(float *)(iVar16 + 0x38) +
                 *(float *)(iVar16 + 0x34) * *(float *)(iVar16 + 0x34) +
                 *(float *)(iVar16 + 0x30) * *(float *)(iVar16 + 0x30));
    local_104 = *(float *)(iVar16 + 0x28) / fVar1;
    local_b4 = *(float *)(iVar16 + 0x38) / fVar1;
    local_144 = (float *)-(*(float *)(iVar16 + 0x18) / fVar1);
    pppuStack_148 = (float ***)0x8be0c4;
    fVar18 = (float10)FUN_00ddbaa0();
    pppuStack_148 = (float ***)0x5;
    fVar19 = (float10)fpatan((float10)local_104,(float10)local_b4);
    pfStack_14c = &local_60;
    local_60 = (float)fVar19;
    local_5c = (undefined4 *)(float)fVar18;
    fVar18 = (float10)fpatan((float10)*(float *)(iVar16 + 0x14) / (float10)(float)local_9c,
                             (float10)*(float *)(iVar16 + 0x10) / (float10)(float)local_a0);
    local_58 = (float)fVar18;
    local_130 = (float **)0x0;
    local_12c = 0.0;
    local_128 = 1.0;
    ppfStack_150 = (float **)local_50;
    pfStack_154 = (float *)0x8be123;
    FUN_00ddc1d0();
    local_144 = (float *)local_50;
    pppuStack_148 = &local_130;
    pfStack_14c = &local_f0;
    ppfStack_150 = (float **)0x8be13d;
    D3DXVec3TransformNormal();
    ppfStack_150 = (float **)0x5;
    pfStack_154 = &local_6c;
    pfStack_158 = (float *)&local_5c;
    fStack_134 = 0.0;
    ppfStack_15c = (float **)0x8be164;
    FUN_00ddc1d0();
    ppfStack_150 = (float **)&local_5c;
    pfStack_154 = (float *)&stack0xfffffec4;
    pfStack_158 = afStack_dc;
    ppfStack_15c = (float **)0x8be17e;
    D3DXVec3TransformNormal();
    pppuStack_148 = (float ***)0x0;
    ppfStack_15c = (float **)0x5;
    pppuStack_160 = (undefined4 ***)&pfStack_78;
    local_144 = (float *)0x3f800000;
    pfStack_164 = (float *)local_68;
    pppuStack_168 = (float ***)0x8be1a5;
    FUN_00ddc1d0();
    ppfStack_15c = (float **)local_68;
    pppuStack_160 = &pppuStack_148;
    pfStack_164 = &local_f8;
    pppuStack_168 = (float ***)0x8be1bf;
    D3DXVec3TransformNormal();
    *(undefined4 ***)(param_1 + 0x60) = ppuStack_124;
    *(float *)(param_1 + 100) = fStack_120;
    *(float *)(param_1 + 0x68) = fStack_11c;
    *(float *)(param_1 + 0x6c) = fStack_118;
    fVar1 = *(float *)(uVar17 + 0x450);
    fVar2 = *(float *)(uVar17 + 0x458);
    fVar14 = fStack_120 + fVar1 * local_f0 + fStack_110 * fVar2;
    fVar13 = fStack_10c * fVar2 + fStack_11c + fVar1 * fStack_ec;
    fVar12 = fVar2 * fStack_108 + fVar1 * fStack_e8 + fStack_118;
    fVar3 = *(float *)(uVar17 + 0x454);
    pfStack_154 = (float *)(local_104 * fVar3);
    ppfStack_150 = (float **)(local_100 * fVar3);
    *(float *)(param_1 + 0xb0) =
         (float)pfStack_154 + fStack_114 * fVar2 + local_f4 * fVar1 + (float)ppuStack_124;
    *(float *)(param_1 + 0xb4) = fVar14 + (float)ppfStack_150;
    *(float *)(param_1 + 0xb8) = local_fc * fVar3 + fVar13;
    *(float *)(param_1 + 0xbc) = fVar3 * local_f8 + fVar12;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(uVar17 + 0x430);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(uVar17 + 0x434);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(uVar17 + 0x438);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(uVar17 + 0x43c);
    if (*(int *)(uVar17 + 0x47c) == 0) {
      if (*(int *)(uVar17 + 0x480) == 0) {
        fVar1 = *(float *)(uVar17 + 0x410);
        fVar3 = *(float *)(uVar17 + 0x418);
        fVar4 = *(float *)(uVar17 + 0x414);
        fVar5 = (float)ppuStack_124 + local_f4 * fVar1 + fStack_114 * fVar3 + local_104 * fVar4;
        fVar6 = fVar4 * local_100 + fVar3 * fStack_110 + fVar1 * local_f0 + fStack_120;
        fVar2 = fStack_11c + fVar1 * fStack_ec + fVar3 * fStack_10c + fVar4 * local_fc;
        fVar1 = fStack_118 + fVar1 * fStack_e8 + fVar3 * fStack_108 + fVar4 * local_f8;
        fStack_120 = fVar14;
        fStack_11c = fVar13;
        fStack_118 = fVar12;
      }
      else {
        fVar3 = *(float *)((int)afStack_dc[0] + 0x341c) / *(float *)(param_1 + 0xd8);
        fVar1 = 1.0 - fVar3;
        fVar2 = fVar3 * *(float *)(uVar17 + 0x410) + *(float *)(uVar17 + 0x420) * fVar1;
        fVar5 = *(float *)(uVar17 + 0x414) * fVar3 + *(float *)(uVar17 + 0x424) * fVar1;
        fVar1 = *(float *)(uVar17 + 0x418) * fVar3 + *(float *)(uVar17 + 0x428) * fVar1;
        pfStack_154 = (float *)(local_f4 * fVar2);
        ppfStack_150 = (float **)(fStack_110 * fVar1);
        pfStack_14c = (float *)(local_fc * fVar5);
        *(float *)(param_1 + 0x70) =
             fStack_114 * fVar1 + (float)ppuStack_124 + (float)pfStack_154 + local_104 * fVar5;
        *(float *)(param_1 + 0x74) =
             fStack_120 + local_f0 * fVar2 + (float)ppfStack_150 + local_100 * fVar5;
        *(float *)(param_1 + 0x78) =
             fStack_11c + fStack_ec * fVar2 + fStack_10c * fVar1 + (float)pfStack_14c;
        *(float *)(param_1 + 0x7c) =
             fStack_118 + fStack_e8 * fVar2 + fStack_108 * fVar1 + local_f8 * fVar5;
        ppuVar11 = (undefined4 **)(*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60));
        fVar1 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 100);
        fVar2 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68);
        fStack_118 = *(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x6c);
        ppuStack_124 = ppuVar11;
        fStack_120 = fVar1;
        fStack_11c = fVar2;
        if ((((float)ppuVar11 != 0.0) || (fVar1 != 0.0)) || (fVar2 != 0.0)) {
          fVar1 = fVar2 * fVar2 + (float)ppuVar11 * (float)ppuVar11 + fVar1 * fVar1;
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            pppuStack_16c = &ppuStack_124;
            ppfStack_170 = (float **)0x8be5c6;
            pppuStack_168 = pppuStack_16c;
            FUN_00ddf460();
            fVar1 = fStack_120;
            fVar2 = fStack_11c;
            ppuVar11 = ppuStack_124;
          }
          else {
            pppuStack_168 = (undefined4 ***)&DAT_0163d0ac;
            pppuStack_16c = (undefined4 ***)0x8be5e7;
            FUN_00dd5650();
            fVar2 = 0.0;
            ppuVar11 = (undefined4 **)0x0;
            fVar1 = 1.0;
          }
        }
        fVar3 = *(float *)(param_1 + 0xdc);
        fVar5 = *(float *)(param_1 + 0x60) + (float)ppuVar11 * fVar3;
        fVar6 = *(float *)(param_1 + 100) + fVar3 * fVar1;
        fVar2 = *(float *)(param_1 + 0x68) + fVar3 * fVar2;
        fVar1 = fVar3 * fStack_118 + *(float *)(param_1 + 0x6c);
      }
    }
    else {
      fVar3 = *(float *)((int)afStack_dc[0] + 0x341c) / *(float *)(param_1 + 0xd8);
      fVar1 = 1.0 - fVar3;
      fVar10 = *(float *)(uVar17 + 0x410) * fVar3 + *(float *)(uVar17 + 0x420) * fVar1;
      fVar2 = *(float *)(uVar17 + 0x414) * fVar3 + *(float *)(uVar17 + 0x424) * fVar1;
      fVar3 = *(float *)(uVar17 + 0x418) * fVar3 + *(float *)(uVar17 + 0x428) * fVar1;
      pfStack_154 = (float *)(local_f4 * fVar10);
      ppfStack_150 = (float **)(fStack_110 * fVar3);
      fVar1 = fStack_118 + fStack_e8 * fVar10 + fStack_108 * fVar3;
      pfStack_14c = (float *)(local_fc * fVar2);
      fVar4 = local_f8 * fVar2;
      fVar5 = fStack_114 * fVar3 + (float)ppuStack_124 + (float)pfStack_154 + local_104 * fVar2;
      fVar6 = fStack_120 + local_f0 * fVar10 + (float)ppfStack_150 + local_100 * fVar2;
      fVar2 = fStack_11c + fStack_ec * fVar10 + fStack_10c * fVar3 + (float)pfStack_14c;
      fStack_120 = fVar14;
      fStack_11c = fVar13;
      fStack_118 = fVar12;
LAB_008bf57f:
      fVar1 = fVar1 + fVar4;
    }
  }
  else {
    local_144 = (float *)0x8be6b5;
    iVar16 = FUN_00a81330();
    if (iVar16 == 0) {
      return;
    }
    local_144 = (float *)0x8be6c4;
    local_104 = (float)FUN_00a7c8a0();
    if (local_104 == 0.0) {
      return;
    }
    local_144 = *(float **)(uVar17 + 0x408);
    pppuStack_148 = (float ***)0x8be6de;
    iVar16 = FUN_00a12210();
    local_144 = *(float **)(uVar17 + 0x40c);
    pppuStack_148 = (float ***)0x8be6f0;
    local_84 = FUN_00a12210();
    if (iVar16 == 0) {
      return;
    }
    if (local_84 == 0) {
      return;
    }
    local_d0 = *(float *)(iVar16 + 0x40);
    local_cc = *(float *)(iVar16 + 0x44);
    local_c8 = *(float *)(iVar16 + 0x48);
    local_c4 = *(undefined4 ***)(iVar16 + 0x4c);
    local_a0 = (float **)
               SQRT(*(float *)(iVar16 + 0x14) * *(float *)(iVar16 + 0x14) +
                    *(float *)(iVar16 + 0x10) * *(float *)(iVar16 + 0x10) +
                    *(float *)(iVar16 + 0x18) * *(float *)(iVar16 + 0x18));
    local_9c = (undefined4 *)
               SQRT(*(float *)(iVar16 + 0x20) * *(float *)(iVar16 + 0x20) +
                    *(float *)(iVar16 + 0x24) * *(float *)(iVar16 + 0x24) +
                    *(float *)(iVar16 + 0x28) * *(float *)(iVar16 + 0x28));
    fVar1 = SQRT(*(float *)(iVar16 + 0x38) * *(float *)(iVar16 + 0x38) +
                 *(float *)(iVar16 + 0x34) * *(float *)(iVar16 + 0x34) +
                 *(float *)(iVar16 + 0x30) * *(float *)(iVar16 + 0x30));
    local_104 = *(float *)(iVar16 + 0x28) / fVar1;
    local_b4 = *(float *)(iVar16 + 0x38) / fVar1;
    local_144 = (float *)-(*(float *)(iVar16 + 0x18) / fVar1);
    pppuStack_148 = (float ***)0x8be7c0;
    fVar18 = (float10)FUN_00ddbaa0();
    pppuStack_148 = (float ***)0x5;
    fVar19 = (float10)fpatan((float10)local_104,(float10)local_b4);
    pfStack_14c = &local_70;
    local_70 = (float)fVar19;
    local_6c = (float)fVar18;
    fVar18 = (float10)fpatan((float10)*(float *)(iVar16 + 0x14) / (float10)(float)local_9c,
                             (float10)*(float *)(iVar16 + 0x10) / (float10)(float)local_a0);
    local_68[0] = (undefined4 *)(float)fVar18;
    local_130 = (float **)0x0;
    local_12c = 0.0;
    local_128 = 1.0;
    ppfStack_150 = (float **)local_50;
    pfStack_154 = (float *)0x8be81f;
    FUN_00ddc1d0();
    local_144 = (float *)local_50;
    pppuStack_148 = &local_130;
    pfStack_14c = &local_f0;
    ppfStack_150 = (float **)0x8be839;
    D3DXVec3TransformNormal();
    ppfStack_150 = (float **)0x5;
    pfStack_154 = &fStack_7c;
    pfStack_158 = (float *)&local_5c;
    fStack_134 = 0.0;
    ppfStack_15c = (float **)0x8be860;
    FUN_00ddc1d0();
    ppfStack_150 = (float **)&local_5c;
    pfStack_154 = (float *)&stack0xfffffec4;
    pfStack_158 = &fStack_ec;
    ppfStack_15c = (float **)0x8be87a;
    D3DXVec3TransformNormal();
    pppuStack_148 = (float ***)0x0;
    ppfStack_15c = (float **)0x5;
    pppuStack_160 = (undefined4 ***)&pfStack_88;
    local_144 = (float *)0x3f800000;
    pfStack_164 = (float *)local_68;
    pppuStack_168 = (float ***)0x8be8a1;
    FUN_00ddc1d0();
    ppfStack_15c = (float **)local_68;
    pppuStack_160 = &pppuStack_148;
    pfStack_164 = &local_c8;
    pppuStack_168 = (float ***)0x8be8be;
    D3DXVec3TransformNormal();
    pppuVar15 = pppuStack_a8;
    fVar1 = *(float *)(uVar17 + 0x454);
    pfStack_154 = (float *)(local_f4 + fStack_d4 * fVar1);
    ppfStack_150 = (float **)(fVar1 * local_d0 + local_f0);
    pfStack_14c = (float *)(fVar1 * local_cc + fStack_ec);
    pppuStack_148 = (undefined4 ***)(fVar1 * local_c8 + fStack_e8);
    puStack_a4 = pppuStack_a8[0x10];
    local_a0 = (float **)pppuStack_a8[0x11];
    local_9c = pppuStack_a8[0x12];
    puStack_98 = pppuStack_a8[0x13];
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
    pppuStack_16c = (undefined4 ***)0x8be9d7;
    pppuStack_a8 = (undefined4 ***)((float)pppuStack_a8[10] / fVar1);
    fVar18 = (float10)FUN_00ddbaa0();
    pppuStack_16c = (undefined4 ***)0x5;
    fVar19 = (float10)fpatan((float10)(float)pppuStack_a8,(float10)local_128);
    ppfStack_170 = (float **)&ppuStack_124;
    ppuStack_174 = &ppuStack_74;
    ppuStack_124 = (undefined4 **)(float)fVar19;
    fStack_120 = (float)fVar18;
    fVar18 = (float10)fpatan((float10)(float)pppuVar15[5] / (float10)fStack_c0,
                             (float10)(float)pppuVar15[4] / (float10)(float)local_c4);
    fStack_11c = (float)fVar18;
    local_144 = (float *)0x0;
    pppfStack_178 = (float ***)0x8bea2a;
    FUN_00ddc1d0();
    pppuStack_168 = &ppuStack_74;
    pppuStack_16c = (undefined4 ***)&local_144;
    ppfStack_170 = (float **)&fStack_114;
    ppuStack_174 = (undefined4 **)0x8bea44;
    D3DXVec3TransformNormal();
    ppuStack_174 = (undefined4 **)0x5;
    ppfStack_150 = (float **)0x3f800000;
    pppfStack_178 = &local_130;
    pfStack_17c = &fStack_80;
    pfStack_14c = (float *)0x0;
    pppuStack_148 = (float ***)0x0;
    puStack_180 = (undefined1 *)0x8bea68;
    FUN_00ddc1d0();
    ppuStack_174 = (undefined4 **)&fStack_80;
    pppfStack_178 = &ppfStack_150;
    pfStack_17c = &fStack_110;
    puStack_180 = (undefined1 *)0x8bea82;
    D3DXVec3TransformNormal();
    ppfStack_15c = (float **)0x0;
    puStack_180 = (undefined1 *)0x5;
    pppfStack_184 = (float ***)&stack0xfffffec4;
    pfStack_158 = (float *)0x3f800000;
    pfStack_188 = (float *)auStack_8c;
    pfStack_154 = (float *)0x0;
    pfStack_18c = (float *)0x8beaa6;
    FUN_00ddc1d0();
    puStack_180 = auStack_8c;
    pppfStack_184 = &ppfStack_15c;
    pfStack_188 = &fStack_ec;
    pfStack_18c = (float *)0x8beac3;
    D3DXVec3TransformNormal();
    fVar1 = *(float *)(uVar17 + 0x454);
    fVar2 = 0.0;
    if (0.0 < *(float *)(param_1 + 0xd8)) {
      fVar2 = *(float *)((int)local_100 + 0x341c) / *(float *)(param_1 + 0xd8);
    }
    local_100 = 1.0 - fVar2;
    fStack_e8 = fStack_118 * fVar2;
    fStack_e4 = fVar2 * fStack_114;
    fStack_e0 = fVar2 * fStack_110;
    afStack_dc[0] = fVar2 * fStack_10c;
    *(float *)(param_1 + 0x60) = fStack_e8 + local_100 * local_c8;
    *(float *)(param_1 + 100) = fStack_e4 + local_100 * (float)local_c4;
    *(float *)(param_1 + 0x68) = fStack_e0 + local_100 * fStack_c0;
    *(float *)(param_1 + 0x6c) = local_100 * fStack_bc + afStack_dc[0];
    pppuStack_168 = (undefined4 ***)((float)pppfStack_178 * fVar2);
    pfStack_164 = (float *)(fVar2 * (float)ppuStack_174);
    pppuStack_160 = (undefined4 ***)(fVar2 * (float)ppfStack_170);
    ppfStack_15c = (float **)(fVar2 * (float)pppuStack_16c);
    *(float *)(param_1 + 0xb0) = (float)pppuStack_168 + (local_f8 * fVar1 + local_c8) * local_100;
    *(float *)(param_1 + 0xb4) =
         (float)pfStack_164 + local_100 * (local_f4 * fVar1 + (float)local_c4);
    *(float *)(param_1 + 0xb8) = (float)pppuStack_160 + local_100 * (local_f0 * fVar1 + fStack_c0);
    *(float *)(param_1 + 0xbc) = local_100 * (fStack_ec * fVar1 + fStack_bc) + (float)ppfStack_15c;
    fVar1 = *(float *)(uVar17 + 0x444);
    fVar3 = *(float *)(uVar17 + 0x448);
    fVar5 = *(float *)(uVar17 + 0x44c);
    pfStack_18c = (float *)0x5;
    ppppfStack_190 = (float ****)&pppuStack_a8;
    fVar6 = *(float *)(uVar17 + 0x434);
    fVar4 = *(float *)(uVar17 + 0x438);
    pppuStack_16c = (undefined4 ***)(*(float *)(uVar17 + 0x43c) * fVar2);
    *(float *)(param_1 + 0xc0) =
         fVar2 * *(float *)(uVar17 + 0x430) + local_100 * *(float *)(uVar17 + 0x440);
    *(float *)(param_1 + 0xc4) = fVar6 * fVar2 + fVar1 * local_100;
    *(float *)(param_1 + 200) = fVar3 * local_100 + fVar4 * fVar2;
    *(float *)(param_1 + 0xcc) = (float)pppuStack_16c + fVar5 * local_100;
    pppuStack_a8 = (undefined4 ***)(local_b8 * fVar2 + (float)pppuStack_148 * local_100);
    puStack_a4 = (undefined4 *)(fVar2 * local_b4 + local_100 * (float)local_144);
    local_a0 = (float **)(fVar2 * fStack_b0 + local_100 * 0.0);
    local_9c = (undefined4 *)(fVar2 * (float)ppfStack_ac + local_100 * 1.0);
    pppfStack_178 = (float ***)0x0;
    ppuStack_174 = (undefined4 **)0x0;
    ppfStack_170 = (float **)0x3f800000;
    FUN_00ddc1d0(&puStack_98);
    pfStack_18c = (float *)&puStack_98;
    ppppfStack_190 = &pppfStack_178;
    D3DXVec3TransformNormal(&stack0xfffffec8);
    pppfStack_184 = (float ***)0x3f800000;
    puStack_180 = (undefined1 *)0x0;
    pfStack_17c = (float *)0x0;
    FUN_00ddc1d0(&puStack_a4,&local_b4,5);
    D3DXVec3TransformNormal(&fStack_134,&pppfStack_184,&puStack_a4);
    ppppfStack_190 = (float ****)0x0;
    pfStack_18c = (float *)0x3f800000;
    pfStack_188 = (float *)0x0;
    FUN_00ddc1d0(&fStack_b0,&fStack_c0,5);
    D3DXVec3TransformNormal(&fStack_110,&ppppfStack_190,&fStack_b0);
    if (*(int *)(uVar17 + 0x47c) == 0) {
      if (*(int *)(uVar17 + 0x480) == 0) goto LAB_008bf58f;
      pppuStack_168 = (float ***)0x5;
      pfStack_154 = (float *)0x0;
      pppuStack_16c = (undefined4 ***)apfStack_94;
      ppfStack_150 = (float **)0x0;
      ppfStack_170 = (float **)&ppuStack_74;
      pfStack_14c = (float *)0x3f800000;
      ppuStack_174 = (undefined4 **)0x8bf16d;
      FUN_00ddc1d0();
      pppuStack_168 = &ppuStack_74;
      pppuStack_16c = (undefined4 ***)&pfStack_154;
      ppfStack_170 = (float **)&fStack_114;
      ppuStack_174 = (undefined4 **)0x8bf187;
      D3DXVec3TransformNormal();
      pppuStack_160 = (undefined4 ***)0x3f800000;
      ppuStack_174 = (undefined4 **)0x5;
      pppfStack_178 = &local_a0;
      ppfStack_15c = (float **)0x0;
      pfStack_17c = &fStack_80;
      pfStack_158 = (float *)0x0;
      puStack_180 = (undefined1 *)0x8bf1ae;
      FUN_00ddc1d0();
      ppuStack_174 = (undefined4 **)&fStack_80;
      pppfStack_178 = (float ***)&pppuStack_160;
      pfStack_17c = &fStack_110;
      puStack_180 = (undefined1 *)0x8bf1c8;
      D3DXVec3TransformNormal();
      pppuStack_16c = (undefined4 ***)0x0;
      puStack_180 = (undefined1 *)0x5;
      pppfStack_184 = &ppfStack_ac;
      pppuStack_168 = (float ***)0x3f800000;
      pfStack_188 = (float *)auStack_8c;
      pfStack_164 = (float *)0x0;
      pfStack_18c = (float *)0x8bf1ef;
      FUN_00ddc1d0();
      puStack_180 = auStack_8c;
      pppfStack_184 = (float ***)&pppuStack_16c;
      pfStack_188 = &fStack_ec;
      pfStack_18c = (float *)0x8bf20c;
      D3DXVec3TransformNormal();
      fVar1 = *(float *)(uVar17 + 0x410);
      fVar2 = *(float *)(uVar17 + 0x418);
      pfStack_18c = (float *)0x5;
      ppppfStack_190 = (float ****)&pppuStack_148;
      fVar3 = *(float *)(uVar17 + 0x414);
      pppfStack_178 = (float ***)(local_f8 * fVar3 + fVar2 * 0.0 + fStack_118 + local_128 * fVar1);
      ppuStack_174 = (undefined4 **)
                     (fVar3 * local_f4 +
                     fVar2 * fStack_134 + fVar1 * (float)ppuStack_124 + fStack_114);
      ppfStack_170 = (float **)
                     (fVar3 * local_f0 + fVar2 * (float)local_130 + fVar1 * fStack_120 + fStack_110)
      ;
      pppuStack_16c =
           (undefined4 ***)(fVar3 * fStack_ec + fVar2 * local_12c + fVar1 * fStack_11c + fStack_10c)
      ;
      pppuStack_168 = (float ***)0x0;
      pfStack_164 = (float *)0x0;
      pppuStack_160 = (undefined4 ****)0x3f800000;
      FUN_00ddc1d0(&puStack_98);
      pfStack_18c = (float *)&puStack_98;
      ppppfStack_190 = (float ****)&pppuStack_168;
      D3DXVec3TransformNormal(&stack0xfffffec8);
      ppuStack_174 = (undefined4 **)0x3f800000;
      ppfStack_170 = (float **)0x0;
      pppuStack_16c = (undefined4 ***)0x0;
      FUN_00ddc1d0(&puStack_a4,&pfStack_154,5);
      D3DXVec3TransformNormal(&fStack_134,&ppuStack_174,&puStack_a4);
      puStack_180 = (undefined1 *)0x0;
      pfStack_17c = (float *)0x3f800000;
      pppfStack_178 = (float ***)0x0;
      FUN_00ddc1d0(&fStack_b0,&pppuStack_160,5);
      D3DXVec3TransformNormal(&fStack_110,&puStack_180,&fStack_b0);
      fVar1 = *(float *)(uVar17 + 0x420);
      fVar2 = *(float *)(uVar17 + 0x428);
      fVar3 = *(float *)(uVar17 + 0x424);
      pppfVar8 = (float ***)
                 ((fVar3 * local_c8 + fVar2 * fStack_108 + fVar1 * local_f8 + (float)puStack_98) -
                 (float)pppuStack_148);
      *(float *)(param_1 + 0x70) =
           ((fStack_d4 * fVar3 + fStack_114 * fVar2 + local_104 * fVar1 + (float)puStack_a4) -
           (float)pfStack_154) * afStack_dc[0] + (float)pfStack_154;
      *(float *)(param_1 + 0x74) =
           (float)ppfStack_150 +
           ((fVar3 * local_d0 + fVar2 * fStack_110 + fVar1 * local_100 + (float)local_a0) -
           (float)ppfStack_150) * afStack_dc[0];
      *(float *)(param_1 + 0x78) =
           ((fVar3 * local_cc + fVar2 * fStack_10c + fVar1 * local_fc + (float)local_9c) -
           (float)pfStack_14c) * afStack_dc[0] + (float)pfStack_14c;
      *(float *)(param_1 + 0x7c) = (float)pppfVar8 * afStack_dc[0] + (float)pppuStack_148;
      ppfVar9 = (float **)(*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60));
      fVar1 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 100);
      fVar2 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68);
      local_b8 = *(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x6c);
      pppuStack_148 = pppfVar8;
      local_c4 = ppfVar9;
      fStack_c0 = fVar1;
      fStack_bc = fVar2;
      if ((((float)ppfVar9 != 0.0) || (fVar1 != 0.0)) || (fVar2 != 0.0)) {
        fVar1 = fVar2 * fVar2 + (float)ppfVar9 * (float)ppfVar9 + fVar1 * fVar1;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          pppuStack_16c = &local_c4;
          ppfStack_170 = (float **)0x8bf51f;
          pppuStack_168 = pppuStack_16c;
          FUN_00ddf460();
          fVar1 = fStack_c0;
          fVar2 = fStack_bc;
          ppfVar9 = (float **)local_c4;
        }
        else {
          pppuStack_168 = (undefined4 ***)&DAT_0163d0ac;
          pppuStack_16c = (undefined4 ***)0x8bf549;
          FUN_00dd5650();
          fVar2 = 0.0;
          ppfVar9 = (float **)0x0;
          fVar1 = 1.0;
        }
      }
      fVar3 = *(float *)(param_1 + 0xdc);
      fVar4 = fVar3 * local_b8;
      fVar5 = (float)ppfVar9 * fVar3 + *(float *)(param_1 + 0x60);
      fVar6 = *(float *)(param_1 + 100) + fVar3 * fVar1;
      fVar2 = *(float *)(param_1 + 0x68) + fVar3 * fVar2;
      fVar1 = *(float *)(param_1 + 0x6c);
      goto LAB_008bf57f;
    }
    pppuStack_168 = (float ***)0x5;
    pfStack_154 = (float *)0x0;
    pppuStack_16c = (undefined4 ***)apfStack_94;
    ppfStack_150 = (float **)0x0;
    ppfStack_170 = (float **)&ppuStack_74;
    pfStack_14c = (float *)0x3f800000;
    ppuStack_174 = (undefined4 **)0x8bee3b;
    FUN_00ddc1d0();
    pppuStack_168 = &ppuStack_74;
    pppuStack_16c = (undefined4 ***)&pfStack_154;
    ppfStack_170 = (float **)&fStack_114;
    ppuStack_174 = (undefined4 **)0x8bee55;
    D3DXVec3TransformNormal();
    pppuStack_160 = (undefined4 ***)0x3f800000;
    ppuStack_174 = (undefined4 **)0x5;
    pppfStack_178 = &local_a0;
    ppfStack_15c = (float **)0x0;
    pfStack_17c = &fStack_80;
    pfStack_158 = (float *)0x0;
    puStack_180 = (undefined1 *)0x8bee7c;
    FUN_00ddc1d0();
    ppuStack_174 = (undefined4 **)&fStack_80;
    pppfStack_178 = (float ***)&pppuStack_160;
    pfStack_17c = &fStack_110;
    puStack_180 = (undefined1 *)0x8bee96;
    D3DXVec3TransformNormal();
    pppuStack_16c = (undefined4 ***)0x0;
    puStack_180 = (undefined1 *)0x5;
    pppfStack_184 = &ppfStack_ac;
    pppuStack_168 = (float ***)0x3f800000;
    pfStack_188 = (float *)auStack_8c;
    pfStack_164 = (float *)0x0;
    pfStack_18c = (float *)0x8beebd;
    FUN_00ddc1d0();
    puStack_180 = auStack_8c;
    pppfStack_184 = (float ***)&pppuStack_16c;
    pfStack_188 = &fStack_ec;
    pfStack_18c = (float *)0x8beeda;
    D3DXVec3TransformNormal();
    fVar1 = *(float *)(uVar17 + 0x410);
    fVar2 = *(float *)(uVar17 + 0x418);
    pfStack_18c = (float *)0x5;
    ppppfStack_190 = (float ****)&pppuStack_148;
    fVar3 = *(float *)(uVar17 + 0x414);
    pppfStack_178 = (float ***)(local_f8 * fVar3 + fVar2 * 0.0 + local_128 * fVar1 + fStack_118);
    ppuStack_174 = (undefined4 **)
                   (fVar3 * local_f4 + fVar2 * fStack_134 + fVar1 * (float)ppuStack_124 + fStack_114
                   );
    ppfStack_170 = (float **)
                   (fVar3 * local_f0 + fVar2 * (float)local_130 + fVar1 * fStack_120 + fStack_110);
    pppuStack_16c =
         (undefined4 ***)(fVar3 * fStack_ec + fVar2 * local_12c + fVar1 * fStack_11c + fStack_10c);
    pppuStack_168 = (float ***)0x0;
    pfStack_164 = (float *)0x0;
    pppuStack_160 = (undefined4 ****)0x3f800000;
    FUN_00ddc1d0(&puStack_98);
    pfStack_18c = (float *)&puStack_98;
    ppppfStack_190 = (float ****)&pppuStack_168;
    D3DXVec3TransformNormal(&stack0xfffffec8);
    ppuStack_174 = (undefined4 **)0x3f800000;
    ppfStack_170 = (float **)0x0;
    pppuStack_16c = (undefined4 ***)0x0;
    FUN_00ddc1d0(&puStack_a4,&pfStack_154,5);
    D3DXVec3TransformNormal(&fStack_134,&ppuStack_174,&puStack_a4);
    puStack_180 = (undefined1 *)0x0;
    pfStack_17c = (float *)0x3f800000;
    pppfStack_178 = (float ***)0x0;
    FUN_00ddc1d0(&fStack_b0,&pppuStack_160,5);
    D3DXVec3TransformNormal(&fStack_110,&puStack_180,&fStack_b0);
    fVar1 = *(float *)(uVar17 + 0x420);
    fVar2 = *(float *)(uVar17 + 0x428);
    fVar3 = *(float *)(uVar17 + 0x424);
    pppfVar8 = (float ***)
               ((fVar3 * local_c8 + fVar2 * fStack_108 + fVar1 * local_f8 + (float)puStack_98) -
               (float)pppuStack_148);
    local_144 = (float *)(((fStack_d4 * fVar3 +
                           fStack_114 * fVar2 + local_104 * fVar1 + (float)puStack_a4) -
                          (float)pfStack_154) * afStack_dc[0]);
    fVar5 = (float)pfStack_154 + (float)local_144;
    fVar6 = afStack_dc[0] *
            ((fVar3 * local_d0 + fVar2 * fStack_110 + fVar1 * local_100 + (float)local_a0) -
            (float)ppfStack_150) + (float)ppfStack_150;
    fVar2 = afStack_dc[0] *
            ((fVar3 * local_cc + fVar2 * fStack_10c + fVar1 * local_fc + (float)local_9c) -
            (float)pfStack_14c) + (float)pfStack_14c;
    fVar1 = afStack_dc[0] * (float)pppfVar8 + (float)pppuStack_148;
    pppuStack_148 = pppfVar8;
  }
  *(float *)(param_1 + 0x70) = fVar5;
  *(float *)(param_1 + 0x74) = fVar6;
  *(float *)(param_1 + 0x78) = fVar2;
  *(float *)(param_1 + 0x7c) = fVar1;
LAB_008bf58f:
  pppuStack_168 = param_2;
  pppuStack_16c = (undefined4 ***)0x8bf59a;
  FUN_008b4ac0();
  return;
}

// 008BF5B0  FUN_008bf5b0  size=2170  [callgraph]
void __thiscall
FUN_008bf5b0(int param_1,float *param_2,int param_3,int param_4,float param_5,float param_6)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  undefined1 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puStack_198;
  undefined4 *puStack_194;
  float *pfStack_190;
  float *pfStack_18c;
  float *pfStack_188;
  float *local_184;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float *local_168;
  float local_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float *local_130;
  float *local_12c;
  float *pfStack_128;
  float *pfStack_124;
  undefined1 auStack_11c [12];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f4;
  float fStack_f0;
  undefined4 *puStack_ec;
  float *pfStack_e8;
  float local_e4;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0 [4];
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [112];
  
  if (param_2 == (float *)0x0) {
    local_168 = param_2;
  }
  else {
    local_184 = (float *)&DAT_01b35bdc;
    pfStack_188 = (float *)0x8bf5db;
    (**(code **)*param_2)();
    pfStack_188 = (float *)0x8bf5e2;
    iVar8 = FUN_00dd6d80();
    local_168 = (float *)(-(uint)(iVar8 != 0) & (uint)param_2);
  }
  piVar1 = (int *)local_168[0x178];
  if (piVar1 == (int *)0x0) {
    local_e4 = 0.0;
  }
  else {
    local_184 = (float *)&DAT_01b35b90;
    pfStack_188 = (float *)0x8bf611;
    (**(code **)(*piVar1 + 4))();
    pfStack_188 = (float *)0x8bf618;
    iVar8 = FUN_00dd6d80();
    local_e4 = (float)(-(uint)(iVar8 != 0) & (uint)piVar1);
  }
  if (*(int *)(param_1 + 0x1d0) == 0) {
    return;
  }
  pfStack_188 = &local_140;
  local_184 = param_2;
  pfStack_18c = (float *)0x8bf63d;
  FUN_008b8f00();
  local_164 = local_140;
  local_140 = local_13c;
  if (local_168[0xcc] == 2.10195e-44) {
    local_164 = local_164 * -1.0;
    local_140 = local_13c * -1.0;
  }
  local_184 = (float *)0x8bf67e;
  fVar9 = (float10)FUN_00da7570();
  local_164 = (float)(fVar9 * (float10)local_164);
  local_184 = (float *)0x8bf68b;
  fVar9 = (float10)FUN_00da7500();
  fVar10 = (float10)0.1;
  if ((ABS(*(float *)(param_1 + 0x224)) <= 0.0) || (fVar10 <= ABS((float10)local_164))) {
    *(float *)(param_1 + 0xf4) =
         (float)((float10)*(float *)(param_1 + 0xf4) - (float10)local_164 * (float10)2e-05);
LAB_008bf704:
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  else {
    fVar11 = ((float10)*(float *)(param_1 + 0x224) - (float10)*(float *)(param_1 + 0xf4)) * fVar10 +
             (float10)*(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0xf4) = (float)fVar11;
    if (ABS(fVar11 - (float10)*(float *)(param_1 + 0x224)) < (float10)0.0017453292)
    goto LAB_008bf704;
  }
  if ((ABS(*(float *)(param_1 + 0x228)) <= 0.0) || (fVar10 <= ABS(fVar9 * (float10)local_140))) {
    *(float *)(param_1 + 0xf8) =
         (float)((float10)*(float *)(param_1 + 0xf8) - (float10)2e-05 * fVar9 * (float10)local_140);
  }
  else {
    fVar9 = ((float10)*(float *)(param_1 + 0x228) - (float10)*(float *)(param_1 + 0xf8)) * fVar10 +
            (float10)*(float *)(param_1 + 0xf8);
    *(float *)(param_1 + 0xf8) = (float)fVar9;
    if ((float10)0.0017453292 <= ABS(fVar9 - (float10)*(float *)(param_1 + 0x228)))
    goto LAB_008bf77d;
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
LAB_008bf77d:
  if (0.0 < param_5) {
    param_5 = param_5 * 0.017453292;
    if (param_5 < *(float *)(param_1 + 0xf8)) {
      *(float *)(param_1 + 0xf8) = param_5;
    }
    if (*(float *)(param_1 + 0xf8) < -param_5) {
      *(float *)(param_1 + 0xf8) = -param_5;
    }
  }
  if (0.0 < param_6) {
    param_6 = param_6 * 0.017453292;
    if (param_6 < *(float *)(param_1 + 0xf4)) {
      *(float *)(param_1 + 0xf4) = param_6;
    }
    if (*(float *)(param_1 + 0xf4) < -param_6) {
      *(float *)(param_1 + 0xf4) = -param_6;
    }
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(float *)(param_1 + 0xf4) == 0.0) {
    *(undefined4 *)(param_1 + 0xf4) = 0x38d1b717;
  }
  if (*(float *)(param_1 + 0xf8) == 0.0) {
    *(undefined4 *)(param_1 + 0xf8) = 0x38d1b717;
  }
  local_184 = (float *)0x0;
  pfStack_188 = (float *)0x8bf85c;
  iVar8 = FUN_00a12210();
  local_150 = *(float *)(iVar8 + 0x40);
  pfVar16 = (float *)(iVar8 + 0x10);
  local_14c = *(float *)(iVar8 + 0x44);
  local_148 = *(float *)(iVar8 + 0x48);
  local_144 = *(float *)(iVar8 + 0x4c);
  local_130 = (float *)SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                            *pfVar16 * *pfVar16 +
                            *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
  local_12c = (float *)SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                            *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                            *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
  fVar2 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
               *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
               *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
  local_140 = *(float *)(iVar8 + 0x28) / fVar2;
  local_168 = (float *)(*(float *)(iVar8 + 0x38) / fVar2);
  local_184 = (float *)-(*(float *)(iVar8 + 0x18) / fVar2);
  pfStack_188 = (float *)0x8bf905;
  fVar9 = (float10)FUN_00ddbaa0();
  local_164 = (float)fVar9;
  fVar9 = (float10)fpatan((float10)local_140,(float10)(float)local_168);
  local_140 = (float)fVar9;
  fVar9 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)(float)local_12c,
                          (float10)*pfVar16 / (float10)(float)local_130);
  local_138 = (float)fVar9;
  local_d0[0] = 0.0;
  local_d0[1] = 1.0;
  pfStack_18c = local_d0;
  local_d0[2] = 0.0;
  pfStack_190 = (float *)0x8bf957;
  pfStack_188 = pfStack_18c;
  local_184 = pfVar16;
  D3DXVec3TransformNormal();
  uStack_bc = 0x3f800000;
  puStack_198 = &uStack_bc;
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  puStack_194 = puStack_198;
  pfStack_190 = pfVar16;
  D3DXVec3TransformNormal();
  fStack_b8 = 0.0;
  pfVar14 = &fStack_b8;
  fStack_b4 = 0.0;
  fStack_b0 = 1.0;
  pfVar15 = pfVar14;
  D3DXVec3TransformNormal(pfVar14,pfVar14,pfVar16);
  fStack_134 = fStack_f4 * 1.5 + fStack_174;
  local_130 = (float *)(fStack_f0 * 1.5 + fStack_170);
  local_12c = (float *)((float)puStack_ec * 1.5 + fStack_16c);
  pfStack_128 = (float *)((float)pfStack_e8 * 1.5 + (float)local_168);
  local_184 = (float *)(fStack_174 - fStack_134);
  FUN_00ddcfe0(auStack_74,&fStack_d4,-*(float *)(param_1 + 0xf8));
  puVar13 = auStack_74;
  D3DXVec3TransformNormal(&local_184,&local_184,puVar13);
  puStack_ec = puStack_194;
  pfStack_e8 = local_168;
  local_e4 = local_164;
  fStack_110 = (float)pfStack_190 * -1.0;
  fStack_10c = (float)pfStack_18c * -1.0;
  fStack_108 = (float)pfStack_188 * -1.0;
  fStack_104 = (float)local_184 * -1.0;
  fVar2 = fStack_108 * fStack_108 + fStack_110 * fStack_110 + fStack_10c * fStack_10c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&fStack_110,&fStack_110);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_110 = 0.0;
    fStack_10c = 1.0;
    fStack_108 = 0.0;
  }
  local_130 = pfStack_190;
  local_12c = pfStack_18c;
  pfStack_128 = pfStack_188;
  pfStack_124 = local_184;
  FUN_00ddcfe0(auStack_80,auStack_e0,0xbfc90fdb);
  D3DXVec3TransformNormal(&local_130,&local_130,auStack_80);
  FUN_00ddcfe0(auStack_8c,auStack_11c,*(undefined4 *)(param_1 + 0xf4));
  D3DXVec3TransformNormal(&local_13c,&local_13c,auStack_8c);
  puStack_198 = (undefined4 *)((float)puVar13 + fStack_158 + local_148);
  puStack_194 = (undefined4 *)((float)pfVar14 + fStack_154 + local_144);
  pfStack_190 = (float *)((float)pfVar15 + local_150 + local_140);
  pfStack_18c = (float *)((float)pfVar16 + local_14c + local_13c);
  FUN_00db6410(&fStack_d8,&stack0xfffffe88,&puStack_198,&pfStack_128);
  fVar2 = fStack_d4 * fStack_d4;
  fVar6 = fStack_d8 * fStack_d8;
  fVar3 = local_d0[0] * local_d0[0];
  fVar5 = local_d0[2] * local_d0[2];
  fVar4 = SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
  pfStack_188 = (float *)(fStack_c0 / fVar4);
  fVar12 = fStack_b0 / fVar4;
  fVar9 = (float10)FUN_00ddbaa0(-(local_d0[0] / fVar4));
  fVar10 = (float10)fpatan((float10)(float)pfStack_188,(float10)fVar12);
  fStack_108 = (float)fVar10;
  fStack_104 = (float)fVar9;
  fVar9 = (float10)fpatan((float10)fStack_d4 /
                          (float10)SQRT(fStack_c0 * fStack_c0 + fVar5 + local_d0[3] * local_d0[3]),
                          (float10)fStack_d8 / (float10)SQRT(fVar3 + fVar6 + fVar2));
  fStack_100 = (float)fVar9;
  local_168 = (float *)0x0;
  local_164 = 0.0;
  fStack_160 = 0.0;
  if (*(int *)(param_1 + 0x38) == 0xe) {
    local_168 = (float *)0xbe99999a;
    local_164 = 0.0;
    fStack_160 = 1.4;
    fStack_15c = fStack_dc;
    iVar8 = FUN_00a81330();
    if ((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      D3DXVec3TransformNormal(&local_168,&local_168,iVar8 + 0x10);
    }
  }
  pfVar7 = local_12c;
  puStack_198 = (undefined4 *)((float)local_168 + (float)puVar13 + fStack_158);
  puStack_194 = (undefined4 *)((float)pfVar14 + fStack_154 + local_164);
  pfStack_190 = (float *)((float)pfVar15 + local_150 + fStack_160);
  pfStack_18c = (float *)((float)pfVar16 + local_14c + fStack_15c);
  (**(code **)((int)*local_12c + 0x6c))(&puStack_198);
  (**(code **)((int)*pfVar7 + 0x88))(&fStack_10c);
  return;
}

// 008D15E0  ZangekiOnPartsStatePl1500::vf10  size=7209  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiOnPartsStatePl1500::vf10(undefined4 **param_1,undefined4 **param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  undefined4 **ppuVar10;
  int *piVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  undefined1 *puVar16;
  float *pfVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 **local_1d8;
  undefined4 **local_1d4;
  float fStack_1c4;
  float fStack_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 **local_1b4;
  undefined4 *puStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  int *local_198;
  undefined4 *local_194;
  undefined4 *local_190;
  float fStack_18c;
  undefined4 *local_188;
  float fStack_184;
  undefined4 *local_180;
  undefined4 **local_17c;
  undefined4 **local_178;
  undefined4 **local_174;
  undefined4 *local_170;
  undefined4 *puStack_16c;
  undefined4 *local_168;
  undefined4 *puStack_164;
  undefined4 *local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 *puStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 *local_130;
  float local_12c;
  undefined4 local_128;
  float fStack_124;
  undefined4 *puStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 *puStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 *puStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 *puStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 *apuStack_c0 [5];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [4];
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  undefined4 auStack_7c [3];
  undefined4 *apuStack_70 [13];
  undefined1 auStack_3c [12];
  undefined4 *local_30 [4];
  undefined4 *apuStack_20 [7];
  
  if (param_2 == (undefined4 **)0x0) {
    local_1bc = 0.0;
  }
  else {
    local_1d4 = (undefined4 **)&DAT_01b35bdc;
    local_1d8 = (undefined4 **)0x8d1609;
    (*(code *)**param_2)();
    local_1d8 = (undefined4 **)0x8d1610;
    iVar9 = FUN_00dd6d80();
    local_1bc = (float)(-(uint)(iVar9 != 0) & (uint)param_2);
  }
  piVar11 = *(int **)((int)local_1bc + 0x5e0);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    local_1d4 = (undefined4 **)&DAT_01b35b90;
    local_1d8 = (undefined4 **)0x8d1636;
    (**(code **)(*piVar11 + 4))();
    local_1d8 = (undefined4 **)0x8d163d;
    iVar9 = FUN_00dd6d80();
    piVar11 = (int *)(-(uint)(iVar9 != 0) & (uint)piVar11);
  }
  local_1d4 = (undefined4 **)0x8d164f;
  FUN_0093dc50();
  switch(param_1[0xc]) {
  case (undefined4 *)0x0:
    local_1d4 = param_1 + 0x1c;
    local_1d8 = param_1 + 0x10;
    param_1[0xc] = (undefined4 *)0x1;
    param_1[0xd] = (undefined4 *)0x0;
    FUN_00bc6e00(param_1 + 0x3f);
    local_1d4 = (undefined4 **)0x0;
    param_1[0x57] = (undefined4 *)0x0;
    local_1d8 = (undefined4 **)0x4000d;
    local_1b4 = (undefined4 **)FUN_00a82090("Et000d");
    if (local_1b4 == (undefined4 **)0x0) break;
    local_1d4 = (undefined4 **)0x8d16c3;
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) break;
    local_1d4 = (undefined4 **)0x8d16d6;
    local_1d4 = (undefined4 **)FUN_00a7c7f0();
    local_1d8 = (undefined4 **)0x8d16e6;
    FUN_00a7c960();
    local_1d4 = (undefined4 **)0x8d16f2;
    iVar9 = (**(code **)(*piVar11 + 0x84))();
    uStack_cc = *(undefined4 *)(iVar9 + 4);
    local_1d4 = &puStack_d0;
    puStack_d0 = (undefined4 *)0x0;
    uStack_c8 = 0;
    local_1d8 = (undefined4 **)(piVar11 + 0x10);
    (**(code **)(*piVar4 + 0x7c))();
    switch(param_1[0xe]) {
    case (undefined4 *)0x1:
      uVar6 = 0x25;
      break;
    case (undefined4 *)0x2:
      uVar6 = 0x26;
      break;
    case (undefined4 *)0x3:
      uVar6 = 0x27;
      break;
    case (undefined4 *)0x4:
      uVar6 = 0x28;
      break;
    case (undefined4 *)0x5:
      uVar6 = 0x29;
      break;
    case (undefined4 *)0x6:
      uVar6 = 0x2a;
      break;
    case (undefined4 *)0x7:
      uVar6 = 0x2b;
      break;
    case (undefined4 *)0x8:
      uVar6 = 0x2c;
      break;
    case (undefined4 *)0x9:
      uVar6 = 0x2d;
      break;
    case (undefined4 *)0xa:
      uVar6 = 0x2e;
      break;
    case (undefined4 *)0xb:
      uVar6 = 0x2f;
      break;
    case (undefined4 *)0xc:
      uVar6 = 0x30;
      break;
    case (undefined4 *)0xd:
      uVar6 = 0x31;
      break;
    case (undefined4 *)0xe:
      uVar6 = 0x32;
      break;
    case (undefined4 *)0xf:
      uVar6 = 0x33;
      break;
    case (undefined4 *)0x10:
      uVar6 = 0x34;
      break;
    default:
      goto switchD_008d172e_default;
    }
    local_1d4 = (undefined4 **)0x0;
    local_1d8 = (undefined4 **)0x0;
    FUN_00a8caf0(uVar6,0);
    param_1[0x75] = (undefined4 *)0xffffffff;
switchD_008d172e_default:
    local_1d4 = (undefined4 **)0x8d17fc;
    iVar9 = FUN_00a81330();
    if (iVar9 != 0) {
      local_1d4 = (undefined4 **)0x8d1807;
      piVar11 = (int *)FUN_00a7c8a0();
      if (piVar11 != (int *)0x0) {
        local_1d4 = (undefined4 **)param_1[0x75];
        local_1d8 = (undefined4 **)0x8d181b;
        local_1b8 = (float)FUN_00a12210();
        local_1b4 = (undefined4 **)*piVar4;
        local_1d4 = (undefined4 **)0x8d1831;
        local_1d4 = (undefined4 **)(**(code **)(*piVar11 + 0x84))();
        local_1d8 = (undefined4 **)((int)local_1b8 + 0x40);
        (*(code *)local_1b4[0x1f])();
      }
    }
    param_1[0x74] = piVar4;
    break;
  case (undefined4 *)0x1:
    if (param_1[0xd] == (undefined4 *)0x0) {
      local_1d4 = (undefined4 **)0x3f800000;
      local_1d8 = (undefined4 **)0xbf800000;
      FUN_00aa4080(0x169,0,0x3e4ccccd,0x3f800000,0x8000000);
      local_1d4 = (undefined4 **)0x41a00000;
      local_1d8 = (undefined4 **)0x8d18ad;
      FUN_00da8810();
      local_1d4 = (undefined4 **)&DAT_01bea1d0;
      local_1d8 = (undefined4 **)0x1;
      FUN_00db3e80(0x41a00000);
      local_1d4 = (undefined4 **)0x8d18d4;
      puVar7 = (undefined4 *)(**(code **)(*piVar11 + 0x84))();
      param_1[0x68] = (undefined4 *)*puVar7;
      param_1[0x69] = (undefined4 *)puVar7[1];
      param_1[0x6a] = (undefined4 *)puVar7[2];
      param_1[0x6b] = (undefined4 *)puVar7[3];
      param_1[0x6c] = param_1[0x68];
      param_1[0x6d] = param_1[0x69];
      param_1[0x6e] = param_1[0x6a];
      param_1[0x6f] = param_1[0x6b];
      piVar11[0x9b5] = 0;
      param_1[0xd] = (undefined4 *)((int)param_1[0xd] + 1);
LAB_008d1934:
      local_1d4 = (undefined4 **)0x8d193b;
      FUN_00a92f90();
      local_1d4 = (undefined4 **)0x8d1944;
      FUN_00e26e90();
      local_1d4 = (undefined4 **)0x0;
      local_1d8 = (undefined4 **)0x8d1951;
      FUN_00e22f10();
      local_1d4 = (undefined4 **)0x0;
      local_1d8 = (undefined4 **)0x8d195a;
      iVar9 = FUN_00a94ce0();
      if (iVar9 == 0) {
        local_1d4 = (undefined4 **)0x41f00000;
        local_1d8 = (undefined4 **)0x0;
        iVar9 = FUN_00a94e10(0);
        fVar2 = local_1bc;
        if (iVar9 == 0) {
          local_1d4 = param_1 + 0x6c;
          local_1d8 = (undefined4 **)0x8d1b2b;
          (**(code **)(*piVar11 + 0x88))();
        }
        else {
          local_180 = param_1[0x68];
          local_17c = (undefined4 **)param_1[0x69];
          local_178 = (undefined4 **)param_1[0x6a];
          local_174 = (undefined4 **)param_1[0x6b];
          local_160 = (undefined4 *)piVar11[0x10];
          local_158 = (float)piVar11[0x12];
          local_190 = param_1[0x1c];
          local_188 = param_1[0x1e];
          local_1d4 = (undefined4 **)0x8d1a0d;
          iVar9 = FUN_00a81330();
          if (iVar9 != 0) {
            local_1d4 = (undefined4 **)0x8d1a18;
            iVar9 = FUN_00a7c8a0();
            if (iVar9 != 0) {
              local_1d4 = *(undefined4 ***)((int)fVar2 + 0x408);
              local_1d8 = (undefined4 **)0x8d1a2c;
              iVar9 = FUN_00a12210();
              if (iVar9 != 0) {
                local_190 = *(undefined4 **)(iVar9 + 0x40);
                local_188 = *(undefined4 **)(iVar9 + 0x48);
              }
            }
          }
          if ((param_1[0xe] == (undefined4 *)0xe) || (param_1[0xe] == (undefined4 *)0xd)) {
            local_1d4 = (undefined4 **)0x8d1a56;
            iVar9 = FUN_00a81330();
            if (iVar9 != 0) {
              local_1d4 = (undefined4 **)0x8d1a61;
              iVar9 = FUN_00a7c8a0();
              if (iVar9 != 0) {
                local_190 = *(undefined4 **)(iVar9 + 0x40);
                local_188 = *(undefined4 **)(iVar9 + 0x48);
              }
            }
          }
          fVar12 = (float10)fpatan((float10)(float)local_190 - (float10)(float)local_160,
                                   (float10)(float)local_188 - (float10)local_158);
          local_1d4 = (undefined4 **)(float)fVar12;
          local_1d8 = (undefined4 **)0x8d1a8e;
          fVar12 = (float10)FUN_00ddba30();
          local_e0 = 0.0;
          local_d8 = 0;
          local_1d4 = (undefined4 **)0x5;
          local_1d8 = (undefined4 **)0x0;
          local_dc = (float)fVar12;
          local_1b8 = (float)FUN_00a959f0();
          local_1d8 = (undefined4 **)((float)(int)local_1b8 * 0.033333335);
          FUN_00ddefe0(&local_180,&local_180,&local_e0);
          local_1d4 = &local_180;
          local_1d8 = (undefined4 **)0x8d1aee;
          (**(code **)(*piVar11 + 0x88))();
          param_1[0x6c] = local_180;
          param_1[0x6d] = local_17c;
          param_1[0x6e] = local_178;
          param_1[0x6f] = local_174;
        }
      }
      else {
        param_1[0xc] = (undefined4 *)0x4;
        param_1[0xd] = (undefined4 *)0x0;
        local_1d4 = (undefined4 **)0x8d1977;
        FUN_008e3c10();
        local_1d4 = (undefined4 **)0x1f;
        local_1d8 = (undefined4 **)0x8d1984;
        FUN_008e5c50();
        *(undefined4 *)((int)local_1bc + 0x4a0) = 1;
      }
    }
    else if (param_1[0xd] == (undefined4 *)0x1) goto LAB_008d1934;
    local_1b8 = (float)((int)local_1bc + 0x534);
    piVar11[0xd07] = (int)param_1[0x36];
    local_1d4 = (undefined4 **)0x8d1b4a;
    iVar9 = FUN_00a81330();
    if (iVar9 != 0) {
      local_1d4 = (undefined4 **)0x8d1b55;
      puVar7 = (undefined4 *)FUN_00a7c8a0();
      if (puVar7 != (undefined4 *)0x0) {
        local_1d4 = (undefined4 **)0x8d1b6a;
        iVar9 = FUN_00a81330();
        if (iVar9 != 0) {
          local_1d4 = (undefined4 **)0x8d1b75;
          piVar11 = (int *)FUN_00a7c8a0();
          if (piVar11 != (int *)0x0) {
            local_1d4 = (undefined4 **)param_1[0x75];
            local_1d8 = (undefined4 **)0x8d1b89;
            local_1b4 = (undefined4 **)FUN_00a12210();
            local_194 = (undefined4 *)*puVar7;
            local_1d4 = (undefined4 **)0x8d1b9f;
            local_1d4 = (undefined4 **)(**(code **)(*piVar11 + 0x84))();
            local_1d8 = local_1b4 + 0x10;
            (*(code *)local_194[0x1f])();
          }
        }
      }
    }
    puVar7 = param_1[0xe];
    if (((puVar7 == (undefined4 *)0xc) || (puVar7 == (undefined4 *)0xd)) ||
       (puVar7 == (undefined4 *)0xe)) {
      local_1d4 = (undefined4 **)0x8d1bd8;
      iVar9 = FUN_00a81330();
      if (iVar9 != 0) {
        local_1d4 = (undefined4 **)0x8d1be7;
        ppuVar10 = (undefined4 **)FUN_00a7c8a0();
        local_1b4 = ppuVar10;
        if (ppuVar10 != (undefined4 **)0x0) {
          local_194 = (undefined4 *)0xffffffff;
          local_1d4 = (undefined4 **)0x8d1c08;
          iVar9 = FUN_00a81330();
          if (iVar9 != 0) {
            local_1d4 = (undefined4 **)0x8d1c13;
            iVar9 = FUN_00a7c8a0();
            if (iVar9 != 0) {
              local_1d4 = (undefined4 **)0x8d1c1e;
              local_194 = (undefined4 *)FUN_009f8b40();
            }
          }
          local_1d4 = (undefined4 **)0x8d1c2b;
          iVar9 = FUN_00a81330();
          if (iVar9 != 0) {
            local_1d4 = (undefined4 **)0x8d1c36;
            iVar9 = FUN_00a7c8a0();
            ppuVar10 = local_1b4;
            if (iVar9 != 0) {
              local_1d4 = (undefined4 **)0xffffffff;
              local_1d8 = (undefined4 **)0x8d1c45;
              iVar9 = FUN_00a12210();
              local_1d4 = (undefined4 **)0x0;
              local_1d8 = (undefined4 **)0x8d1c50;
              iVar5 = FUN_00a12210();
              puStack_1b0 = (undefined4 *)(*(float *)(iVar5 + 0x40) - *(float *)(iVar9 + 0x40));
              fStack_1ac = *(float *)(iVar5 + 0x44) - *(float *)(iVar9 + 0x44);
              fStack_1a8 = *(float *)(iVar5 + 0x48) - *(float *)(iVar9 + 0x48);
              fStack_1a4 = *(float *)(iVar5 + 0x4c) - *(float *)(iVar9 + 0x4c);
              ppuVar10 = local_1b4;
            }
          }
          if ((((float)local_170 != 0.0) || ((float)puStack_16c != 0.0)) ||
             ((float)local_168 != 0.0)) {
            fVar2 = fStack_1a8 * fStack_1a8 +
                    (float)puStack_1b0 * (float)puStack_1b0 + fStack_1ac * fStack_1ac;
            if (fVar2 < 0.0 == (fVar2 == 0.0)) {
              local_1d4 = &puStack_1b0;
              local_1d8 = &local_170;
              FUN_00ddf460();
            }
            else {
              local_1d4 = (undefined4 **)&DAT_0163d0ac;
              local_1d8 = (undefined4 **)0x8d1d27;
              FUN_00dd5650();
              local_170 = (undefined4 *)0x0;
              puStack_16c = (undefined4 *)0x3f800000;
              local_168 = (undefined4 *)0x0;
            }
          }
          local_1d4 = (undefined4 **)param_1[0x75];
          local_1d8 = (undefined4 **)0x8d1d52;
          iVar9 = FUN_00a12210();
          local_190 = *(undefined4 **)(iVar9 + 0x40);
          fStack_18c = *(float *)(iVar9 + 0x44);
          local_1d4 = (undefined4 **)0x0;
          local_1d8 = (undefined4 **)0x16497ec;
          local_188 = *(undefined4 **)(iVar9 + 0x48);
          uVar22 = 0;
          uVar20 = 0x60;
          fStack_184 = *(float *)(iVar9 + 0x4c);
          uVar19 = 0;
          local_160 = (undefined4 *)((float)local_190 + (float)puStack_1b0);
          fStack_15c = fStack_18c + fStack_1ac;
          local_158 = (float)local_188 + fStack_1a8;
          fStack_154 = fStack_184 + fStack_1a4;
          uVar6 = FUN_00410130(6,local_194,0,0,0,0,0x60,0);
          FUN_00445d40(&local_190,&local_160,uVar6,uVar19,uVar20,uVar22);
          local_1d4 = apuStack_c0;
          local_1d8 = (undefined4 **)0x0;
          iVar9 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_150,&local_180,0);
          if (iVar9 != 0) {
            local_1d4 = (undefined4 **)0x8d1e0e;
            iVar9 = FUN_00a81330();
            if (iVar9 != 0) {
              local_1d4 = (undefined4 **)0x8d1e1d;
              piVar11 = (int *)FUN_00a7c8a0();
              if (piVar11 != (int *)0x0) {
                puStack_110 = (undefined4 *)
                              ((fStack_150 - (float)puStack_1b0) + (float)local_180 * 0.5);
                fStack_10c = (fStack_14c - fStack_1ac) + (float)local_17c * 0.5;
                fStack_108 = (float)local_178 * 0.5 + (fStack_148 - fStack_1a8);
                fStack_104 = (float)local_174 * 0.5 + (fStack_144 - fStack_1a4);
                local_1b8 = (float)*piVar11;
                local_1d4 = (undefined4 **)0x8d1eaf;
                local_1d4 = (undefined4 **)(*(code *)(*ppuVar10)[0x21])();
                local_1d8 = &puStack_110;
                (**(code **)((int)local_1b8 + 0x7c))();
              }
            }
          }
        }
      }
    }
    break;
  default:
    break;
  case (undefined4 *)0x4:
    if (param_1[0xd] == (undefined4 *)0x0) {
      local_1d4 = (undefined4 **)0x3f800000;
      local_1d8 = (undefined4 **)0xbf800000;
      FUN_00aa4080(0x168,0,0,0x3f800000,0x8000000);
      pcVar1 = *(code **)(*piVar11 + 0x6c);
      local_1d4 = param_1 + 0x1c;
      piVar11[0xf88] = 1;
      local_1d8 = (undefined4 **)0x8d1f21;
      (*pcVar1)();
      puStack_84 = (undefined4 *)0x0;
      puStack_80 = param_1[0x21];
      local_1d8 = &puStack_84;
      auStack_7c[0] = 0;
      (**(code **)(*piVar11 + 0x88))();
      param_1[0xd] = (undefined4 *)((int)param_1[0xd] + 1);
LAB_008d1f55:
      local_1d4 = (undefined4 **)0x8d1f5c;
      FUN_00a92f90();
      local_1d4 = (undefined4 **)0x8d1f65;
      FUN_00e26e90();
      local_1d4 = (undefined4 **)0x0;
      local_1d8 = (undefined4 **)0x8d1f72;
      FUN_00e22f10();
      local_1d4 = (undefined4 **)0x0;
      local_1d8 = (undefined4 **)0x8d1f7b;
      iVar9 = FUN_00a94ce0();
      if (iVar9 != 0) {
        local_1d4 = (undefined4 **)0x42700000;
        param_1[0xc] = (undefined4 *)0x6;
        param_1[0xd] = (undefined4 *)0x0;
        local_1d8 = (undefined4 **)0x8d1fa1;
        FUN_00da8810();
        local_1d4 = (undefined4 **)&DAT_01bea1d0;
        local_1d8 = (undefined4 **)0x1;
        FUN_00db3e80(0x42700000);
      }
      local_1d4 = (undefined4 **)0x20;
      local_1d8 = (undefined4 **)0x8d1fc5;
      iVar9 = FUN_00a8c760();
      if (iVar9 != 0) {
        local_1d4 = (undefined4 **)0x3dcccccd;
        local_1d8 = (undefined4 **)0x0;
        FUN_00b85350(0x437a0000,piVar11[0x101a],piVar11[0x101b],0);
        local_1d4 = param_2;
        local_1d8 = (undefined4 **)0x8d2007;
        FUN_008b8630();
        _DAT_01d61ab0 = (undefined4 *)piVar11[0xd07];
        param_1[0x36] = _DAT_01d61ab0;
        local_1d8 = param_2;
        FUN_008c5fa0();
      }
    }
    else if (param_1[0xd] == (undefined4 *)0x1) goto LAB_008d1f55;
    piVar11[0xd07] = (int)param_1[0x36];
    local_1d4 = (undefined4 **)0x8d203d;
    iVar9 = FUN_00a81330();
    if (iVar9 != 0) {
      local_1d4 = (undefined4 **)0x8d204c;
      local_194 = (undefined4 *)FUN_00a7c8a0();
      if (local_194 != (undefined4 *)0x0) {
        local_1b4 = (undefined4 **)((int)local_1bc + 0x404);
        local_1d4 = (undefined4 **)0x8d206b;
        iVar9 = FUN_00a81330();
        if (iVar9 != 0) {
          local_1d4 = (undefined4 **)0x8d2076;
          piVar4 = (int *)FUN_00a7c8a0();
          if (piVar4 != (int *)0x0) {
            local_1d4 = (undefined4 **)param_1[0x75];
            local_1d8 = (undefined4 **)0x8d208a;
            local_1b8 = (float)FUN_00a12210();
            local_198 = (int *)*local_194;
            local_1d4 = (undefined4 **)0x8d20a4;
            local_1d4 = (undefined4 **)(**(code **)(*piVar4 + 0x84))();
            local_1d8 = (undefined4 **)((int)local_1b8 + 0x40);
            (*(code *)local_198[0x1f])();
          }
        }
        puVar7 = param_1[0xe];
        if (((puVar7 == (undefined4 *)0xc) || (puVar7 == (undefined4 *)0xd)) ||
           (puVar7 == (undefined4 *)0xe)) {
          local_1d4 = (undefined4 **)0x8d20d9;
          iVar9 = FUN_00a81330();
          if (iVar9 != 0) {
            local_1d4 = (undefined4 **)0x8d20e8;
            local_198 = (int *)FUN_00a7c8a0();
            if (local_198 != (int *)0x0) {
              local_1b8 = -NAN;
              local_1d4 = (undefined4 **)0x8d2105;
              iVar9 = FUN_00a81330();
              if (iVar9 != 0) {
                local_1d4 = (undefined4 **)0x8d2110;
                iVar9 = FUN_00a7c8a0();
                if (iVar9 != 0) {
                  local_1d4 = (undefined4 **)0x8d211b;
                  local_1b8 = (float)FUN_009f8b40();
                }
              }
              local_1d4 = (undefined4 **)0xffffffff;
              local_1d8 = (undefined4 **)0x8d212a;
              iVar9 = FUN_00a12210();
              local_1d4 = (undefined4 **)0x0;
              local_1d8 = (undefined4 **)0x8d2137;
              iVar5 = FUN_00a12210();
              puStack_1b0 = (undefined4 *)(*(float *)(iVar5 + 0x40) - *(float *)(iVar9 + 0x40));
              fStack_1ac = *(float *)(iVar5 + 0x44) - *(float *)(iVar9 + 0x44);
              fStack_1a8 = *(float *)(iVar5 + 0x48) - *(float *)(iVar9 + 0x48);
              fStack_1a4 = *(float *)(iVar5 + 0x4c) - *(float *)(iVar9 + 0x4c);
              if ((((float)local_170 != 0.0) || ((float)puStack_16c != 0.0)) ||
                 ((float)local_168 != 0.0)) {
                fVar2 = fStack_1a8 * fStack_1a8 +
                        (float)puStack_1b0 * (float)puStack_1b0 + fStack_1ac * fStack_1ac;
                if (fVar2 < 0.0 == (fVar2 == 0.0)) {
                  local_1d4 = &puStack_1b0;
                  local_1d8 = &local_170;
                  FUN_00ddf460();
                }
                else {
                  local_1d4 = (undefined4 **)&DAT_0163d0ac;
                  local_1d8 = (undefined4 **)0x8d21f0;
                  FUN_00dd5650();
                  local_170 = (undefined4 *)0x0;
                  puStack_16c = (undefined4 *)0x3f800000;
                  local_168 = (undefined4 *)0x0;
                }
              }
              piVar4 = local_198;
              local_1d4 = (undefined4 **)param_1[0x75];
              local_1d8 = (undefined4 **)0x8d221f;
              iVar9 = FUN_00a12210();
              local_190 = *(undefined4 **)(iVar9 + 0x40);
              fStack_18c = *(float *)(iVar9 + 0x44);
              local_1d4 = (undefined4 **)0x0;
              local_1d8 = (undefined4 **)0x16497ec;
              local_188 = *(undefined4 **)(iVar9 + 0x48);
              uVar22 = 0;
              uVar20 = 0x60;
              fStack_184 = *(float *)(iVar9 + 0x4c);
              uVar19 = 0;
              local_160 = (undefined4 *)((float)local_190 + (float)puStack_1b0);
              fStack_15c = fStack_18c + fStack_1ac;
              local_158 = (float)local_188 + fStack_1a8;
              fStack_154 = fStack_184 + fStack_1a4;
              uVar6 = FUN_00410130(6,local_1b8,0,0,0,0,0x60,0);
              FUN_00445d40(&local_190,&local_160,uVar6,uVar19,uVar20,uVar22);
              local_1d4 = apuStack_c0;
              local_1d8 = (undefined4 **)0x0;
              iVar9 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_150,&local_180,0);
              if (iVar9 != 0) {
                puStack_120 = (undefined4 *)
                              ((fStack_150 - (float)puStack_1b0) + (float)local_180 * 0.5);
                fStack_11c = (fStack_14c - fStack_1ac) + (float)local_17c * 0.5;
                fStack_118 = (float)local_178 * 0.5 + (fStack_148 - fStack_1a8);
                fStack_114 = (float)local_174 * 0.5 + (fStack_144 - fStack_1a4);
                local_198 = (int *)*local_194;
                local_1d4 = (undefined4 **)0x8d235e;
                local_1d4 = (undefined4 **)(**(code **)(*piVar4 + 0x84))();
                local_1d8 = &puStack_120;
                (*(code *)local_198[0x1f])();
              }
            }
          }
        }
        puStack_140 = (undefined4 *)0x0;
        fStack_13c = 0.0;
        fStack_138 = 0.0;
        if (param_1[0xe] == (undefined4 *)0xe) {
          puStack_140 = (undefined4 *)0xbe99999a;
          fStack_13c = 0.0;
          fStack_138 = 1.4;
          fStack_134 = fStack_124;
          local_1d4 = (undefined4 **)0x8d23c9;
          iVar9 = FUN_00a81330();
          if (iVar9 != 0) {
            local_1d4 = (undefined4 **)0x8d23d4;
            iVar9 = FUN_00a7c8a0();
            if (iVar9 != 0) {
              local_1d4 = (undefined4 **)(iVar9 + 0x10);
              local_1d8 = &puStack_140;
              D3DXVec3TransformNormal(local_1d8);
            }
          }
        }
        puStack_100 = (undefined4 *)((float)param_1[0x1c] + (float)puStack_140);
        local_1d4 = &puStack_100;
        fStack_fc = (float)param_1[0x1d] + fStack_13c;
        fStack_f8 = (float)param_1[0x1e] + fStack_138;
        fStack_f4 = (float)param_1[0x1f] + fStack_134;
        local_1d8 = (undefined4 **)0x8d2445;
        (**(code **)(*piVar11 + 0x6c))();
        local_1d8 = param_1 + 0x20;
        (**(code **)(*piVar11 + 0x88))();
      }
    }
    break;
  case (undefined4 *)0x6:
    if (param_1[0xd] == (undefined4 *)0x0) {
      local_1d4 = (undefined4 **)0x8d2476;
      FUN_008e3c10();
      local_1d4 = (undefined4 **)0x1f;
      local_1d8 = (undefined4 **)0x8d2483;
      FUN_008e5c50();
      local_1d4 = (undefined4 **)0x0;
      local_1d8 = (undefined4 **)0x8d2490;
      FUN_008e6c60();
      local_1d4 = param_2;
      local_1d8 = (undefined4 **)0x9;
      local_1d8 = (undefined4 **)(**(code **)*param_2[1])();
      FUN_00d82bf0();
      if (*(int *)((int)local_1bc + 0x480) != 0) {
        param_1[0x37] =
             (undefined4 *)
             SQRT(((float)param_1[0x1e] - (float)param_1[0x1a]) *
                  ((float)param_1[0x1e] - (float)param_1[0x1a]) +
                  ((float)param_1[0x1d] - (float)param_1[0x19]) *
                  ((float)param_1[0x1d] - (float)param_1[0x19]) +
                  ((float)param_1[0x1c] - (float)param_1[0x18]) *
                  ((float)param_1[0x1c] - (float)param_1[0x18]));
      }
      local_1d4 = (undefined4 **)0x8d24ef;
      iVar9 = FUN_00a81330();
      if (iVar9 != 0) {
        local_1d4 = (undefined4 **)0x42700000;
        local_1d8 = (undefined4 **)0x8d250b;
        FUN_00da8810();
        local_1d4 = (undefined4 **)0x0;
        local_1d8 = (undefined4 **)0x42700000;
        FUN_00dc1270();
        piVar11[0x1032] = 0xf;
        _DAT_01bea9a0 = 1;
        if ((param_1[0xe] == (undefined4 *)0xe) || (param_1[0xe] == (undefined4 *)0xd)) {
          local_1d4 = (undefined4 **)0x8d2549;
          iVar9 = FUN_00a81330();
          if (iVar9 != 0) {
            local_1d4 = (undefined4 **)0x8d2554;
            local_1d4 = (undefined4 **)FUN_00a7c8a0();
            if (local_1d4 != (undefined4 **)0x0) {
              local_1d8 = (undefined4 **)0x8d255e;
              iVar9 = FUN_00606e70();
              if (iVar9 != 0) {
                local_1d4 = (undefined4 **)((param_1[0xe] != (undefined4 *)0xd) + 4);
                local_1d8 = (undefined4 **)0x8d2579;
                FUN_00606920();
              }
            }
          }
        }
      }
      local_1d4 = (undefined4 **)0x8d2580;
      iVar9 = FUN_00a81330();
      if (iVar9 != 0) {
        local_1d4 = (undefined4 **)0x8d258b;
        iVar9 = FUN_00a7c8a0();
        if (iVar9 != 0) {
          local_1d4 = (undefined4 **)0x2;
          local_1d8 = (undefined4 **)0x8d2598;
          FUN_00a8cb60();
        }
      }
      piVar11[0x1032] = 0xf;
      DAT_01d61a88 = 0;
      if ((param_1[0xe] == (undefined4 *)0xe) || (param_1[0xe] == (undefined4 *)0xd)) {
        param_1[0x8a] = (undefined4 *)0xbe860a92;
      }
      param_1[0xd] = (undefined4 *)((int)param_1[0xd] + 1);
    }
    param_1[0x74] = (undefined4 *)0x0;
    local_1d4 = (undefined4 **)0x8d25e4;
    iVar9 = FUN_00a81330();
    if (iVar9 != 0) {
      local_1d4 = (undefined4 **)0x8d25ef;
      puVar7 = (undefined4 *)FUN_00a7c8a0();
      if (puVar7 != (undefined4 *)0x0) {
        param_1[0x74] = puVar7;
      }
    }
    if ((param_1[0x74] != (undefined4 *)0x0) && (param_1[0x74][0x21f] == 0)) {
      local_1d8 = param_2;
      local_1d4 = param_1;
      FUN_008c3c30();
      local_1d4 = (undefined4 **)0x3f800000;
      local_1d8 = param_2;
      FUN_008b83c0();
      if (param_1[0xe] == (undefined4 *)0xc) {
        local_1d8 = (undefined4 **)0x42480000;
      }
      else {
        local_1d8 = (undefined4 **)0x41f00000;
      }
      local_1d4 = local_1d8;
      FUN_008bf5b0(param_2,1,1);
      param_1[0x70] = (undefined4 *)piVar11[0x10];
      param_1[0x71] = (undefined4 *)piVar11[0x11];
      param_1[0x72] = (undefined4 *)piVar11[0x12];
      param_1[0x73] = (undefined4 *)piVar11[0x13];
      local_1d4 = (undefined4 **)0x8d2689;
      iVar9 = FUN_00a81330();
      if (iVar9 != 0) {
        local_1d4 = (undefined4 **)0x8d2694;
        local_1d4 = (undefined4 **)FUN_00a7c8a0();
        if (local_1d4 != (undefined4 **)0x0) {
          local_1d8 = (undefined4 **)0x8d269e;
          iVar9 = FUN_00860b50();
          if (iVar9 != 0) {
            local_1d4 = (undefined4 **)0x40000000;
            local_1d8 = (undefined4 **)0x8d26b6;
            FUN_005ca330();
          }
        }
      }
      fVar2 = SQRT(((float)param_1[0x1a] - (float)piVar11[0x12]) *
                   ((float)param_1[0x1a] - (float)piVar11[0x12]) +
                   ((float)param_1[0x19] - (float)piVar11[0x11]) *
                   ((float)param_1[0x19] - (float)piVar11[0x11]) +
                   ((float)param_1[0x18] - (float)piVar11[0x10]) *
                   ((float)param_1[0x18] - (float)piVar11[0x10])) * 1.5;
      local_1d4 = (undefined4 **)(fVar2 + fVar2);
      local_1d8 = (undefined4 **)0x8d26ef;
      FUN_008a4c60();
      local_1d4 = (undefined4 **)0x0;
      local_1d8 = (undefined4 **)0x8d26fc;
      FUN_00b8bb40();
      local_1d4 = (undefined4 **)0x0;
      local_1d8 = (undefined4 **)0x8d2709;
      FUN_00b8bbb0();
      local_1d4 = param_2;
      local_1d8 = (undefined4 **)0x8d270f;
      FUN_008b86a0();
      local_1d8 = param_1;
      FUN_008c3c30(param_2);
      local_1d4 = (undefined4 **)0x2000;
      local_1d8 = (undefined4 **)0x8d2728;
      FUN_00c5bbb0();
      break;
    }
    if (((*(float *)((int)local_1bc + 0x490) == 0.0) && (*(float *)((int)local_1bc + 0x494) == 0.0))
       && (*(float *)((int)local_1bc + 0x498) == 0.0)) {
      piVar11[0xf86] = 1;
      local_1d4 = param_2;
      param_1[0xc] = (undefined4 *)0x7;
      local_1d8 = (undefined4 **)0x8d2790;
      FUN_008aaa80();
      ppuVar10 = (undefined4 **)(piVar11 + 0x10);
      local_1d8 = (undefined4 **)0x8d27a0;
      local_1d4 = ppuVar10;
      (**(code **)(*piVar11 + 0x6c))();
      local_1d4 = apuStack_20;
      local_1d8 = (undefined4 **)0x8d27af;
      pfVar8 = (float *)FUN_00a926e0();
      local_1d4 = &local_170;
      local_1d8 = &local_160;
      local_160 = (undefined4 *)(*pfVar8 * 1.5 + (float)*ppuVar10);
      fStack_15c = pfVar8[1] * 1.5 + (float)piVar11[0x11];
      local_158 = (float)piVar11[0x12] + pfVar8[2] * 1.5;
      fStack_154 = pfVar8[3] * 1.5 + (float)piVar11[0x13];
      local_170 = param_1[0x10];
      puStack_16c = param_1[0x11];
      local_168 = param_1[0x12];
      puStack_164 = param_1[0x13];
      iVar9 = hkpAllRayHitCollector::hkpAllRayHitCollector_7(&local_190);
      if (iVar9 == 0) {
        local_1d4 = &local_160;
        local_1d8 = &local_170;
        iVar9 = hkpAllRayHitCollector::hkpAllRayHitCollector_7(&local_190);
        if (iVar9 == 0) goto LAB_008d28b2;
      }
      if (0.01 < SQRT(((float)local_188 - (float)param_1[0x12]) *
                      ((float)local_188 - (float)param_1[0x12]) +
                      (fStack_18c - (float)param_1[0x11]) * (fStack_18c - (float)param_1[0x11]) +
                      ((float)local_190 - (float)param_1[0x10]) *
                      ((float)local_190 - (float)param_1[0x10]))) {
        local_1d8 = param_1 + 0x10;
        puStack_f0 = (undefined4 *)0x0;
        local_1d4 = &puStack_f0;
        fVar12 = (float10)fpatan((float10)(float)*ppuVar10 - (float10)(float)*local_1d8,
                                 (float10)(float)piVar11[0x12] - (float10)(float)param_1[0x12]);
        fStack_ec = (float)fVar12;
        fStack_e8 = 0.0;
        (**(code **)(*piVar11 + 0x7c))();
      }
    }
LAB_008d28b2:
    local_1d4 = (undefined4 **)0x3f800000;
    param_1[0xd] = (undefined4 *)0x0;
    *(undefined4 *)((int)local_1bc + 0x56c) = 1;
    local_1d8 = (undefined4 **)0x8d28d6;
    FUN_00e25500();
    local_1d4 = (undefined4 **)0x41700000;
    DAT_01d61a88 = 1;
    _DAT_01bea9a0 = 0;
    local_1d8 = (undefined4 **)0x8d28fa;
    FUN_00da8810();
    local_1d4 = (undefined4 **)0x0;
    local_1d8 = (undefined4 **)0x41700000;
    FUN_00dc1270();
    local_1d4 = (undefined4 **)&DAT_01bea1d0;
    local_1d8 = (undefined4 **)0x1;
    FUN_00db3e80(0x41700000);
    param_1[0x88] = _DAT_01bea534;
    break;
  case (undefined4 *)0x7:
    local_1d4 = (undefined4 **)0x8d2946;
    FUN_00b7aa80();
    local_1d4 = (undefined4 **)0x8d2951;
    FUN_008e6d00();
    fVar2 = local_1bc;
    local_1d4 = (undefined4 **)0x1;
    ppuVar10 = (undefined4 **)((int)local_1bc + 0x490);
    local_1d8 = ppuVar10;
    FUN_008e4580();
    if (*(int *)(piVar11[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(piVar11[0x1d9] + 0x104) = 0;
    }
    local_1d4 = (undefined4 **)0x1;
    local_1d8 = (undefined4 **)0x8d298f;
    FUN_008e6c60();
    local_1d4 = (undefined4 **)0x6;
    local_1d8 = (undefined4 **)0x8d299c;
    FUN_008e5c50();
    local_1d8 = ppuVar10;
    if ((((float)*ppuVar10 == 0.0) && (*(float *)((int)fVar2 + 0x494) == 0.0)) &&
       (*(float *)((int)fVar2 + 0x498) == 0.0)) {
      local_1d8 = (undefined4 **)(piVar11 + 0x10);
    }
    local_1d4 = (undefined4 **)0x1;
    FUN_008e4580();
    local_1d4 = (undefined4 **)0x8d29e9;
    FUN_00da8ea0();
    if ((param_1[0xe] != (undefined4 *)0xe) && (param_1[0xe] != (undefined4 *)0xd)) {
      _DAT_01bea534 = param_1[0x88];
      local_1d4 = (undefined4 **)param_1[0x88];
      local_1d8 = (undefined4 **)0x8d2a16;
      FUN_00da10b0();
    }
    local_1d8 = (undefined4 **)0x41c80000;
    local_1b4 = (undefined4 **)0x41c80000;
    if (param_1[0xe] == (undefined4 *)0xc) {
      local_1d8 = (undefined4 **)0x40a00000;
      local_1b4 = (undefined4 **)0x40a00000;
    }
    local_1d4 = (undefined4 **)0x0;
    FUN_00dc1270();
    _DAT_01bea940 = local_1b4;
    local_1d4 = local_1b4;
    local_1d8 = (undefined4 **)0x8d2a5a;
    FUN_00da8810();
    local_1d4 = (undefined4 **)&DAT_01bea1d0;
    local_1d8 = (undefined4 **)0x1;
    FUN_00db3e80(local_1b4);
    if ((((float)*ppuVar10 == 0.0) && (*(float *)((int)fVar2 + 0x494) == 0.0)) &&
       (*(float *)((int)fVar2 + 0x498) == 0.0)) {
      *(undefined4 *)((int)local_1bc + 0x3ec) = 0x10008;
    }
    else {
      *(undefined4 *)((int)local_1bc + 0x3ec) = 0x10000;
    }
    local_1d4 = (undefined4 **)0x64;
    local_1d8 = (undefined4 **)0x1;
    FUN_00d82510();
    local_1d4 = (undefined4 **)0x0;
    piVar11[0xf87] = 1;
    local_1d8 = (undefined4 **)0x8d2adc;
    iVar9 = FUN_00a12210();
    local_170 = *(undefined4 **)(iVar9 + 0x40);
    local_168 = *(undefined4 **)(iVar9 + 0x48);
    local_1d8 = local_30;
    local_1d4 = (undefined4 **)0x3f800000;
    pfVar8 = (float *)FUN_00a8b8a0();
    local_160 = (undefined4 *)((float)piVar11[0x10] + *pfVar8);
    local_158 = pfVar8[2] + (float)piVar11[0x12];
    local_1d4 = (undefined4 **)0x8d2b21;
    iVar9 = FUN_00a81330();
    fVar2 = local_158;
    puVar7 = local_160;
    if (iVar9 != 0) {
      local_1d4 = (undefined4 **)0x8d2b2c;
      local_1d4 = (undefined4 **)FUN_00a7c8a0();
      fVar2 = local_158;
      puVar7 = local_160;
      if (local_1d4 != (undefined4 **)0x0) {
        local_1d8 = (undefined4 **)0x8d2b36;
        iVar9 = FUN_00445b60();
        fVar2 = local_158;
        puVar7 = local_160;
        if (iVar9 != 0) {
          fVar2 = *(float *)(iVar9 + 0x48);
          puVar7 = *(undefined4 **)(iVar9 + 0x40);
        }
      }
    }
    local_130 = (undefined4 *)0x0;
    local_1d4 = &local_130;
    fVar12 = (float10)fpatan((float10)(float)puVar7 - (float10)(float)local_170,
                             (float10)fVar2 - (float10)(float)local_168);
    local_12c = (float)fVar12;
    local_128 = 0;
    local_1d8 = (undefined4 **)0x8d2b86;
    (**(code **)(*piVar11 + 0x88))();
  }
  local_1d4 = (undefined4 **)0x8d2b9b;
  iVar9 = FUN_00a81330();
  if (iVar9 != 0) {
    local_1d4 = (undefined4 **)0x8d2baa;
    iVar9 = FUN_00a7c8a0();
    if (iVar9 != 0) {
      local_1d4 = (undefined4 **)0x0;
      local_1d8 = (undefined4 **)0x8d2bbb;
      iVar9 = FUN_00a12210();
      local_170 = *(undefined4 **)(iVar9 + 0x40);
      puStack_16c = *(undefined4 **)(iVar9 + 0x44);
      local_168 = *(undefined4 **)(iVar9 + 0x48);
      puStack_164 = *(undefined4 **)(iVar9 + 0x4c);
      puStack_140 = (undefined4 *)
                    SQRT(*(float *)(iVar9 + 0x14) * *(float *)(iVar9 + 0x14) +
                         *(float *)(iVar9 + 0x10) * *(float *)(iVar9 + 0x10) +
                         *(float *)(iVar9 + 0x18) * *(float *)(iVar9 + 0x18));
      fStack_13c = SQRT(*(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20) +
                        *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
                        *(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28));
      fVar2 = SQRT(*(float *)(iVar9 + 0x38) * *(float *)(iVar9 + 0x38) +
                   *(float *)(iVar9 + 0x34) * *(float *)(iVar9 + 0x34) +
                   *(float *)(iVar9 + 0x30) * *(float *)(iVar9 + 0x30));
      local_198 = (int *)(*(float *)(iVar9 + 0x28) / fVar2);
      local_1b8 = *(float *)(iVar9 + 0x38) / fVar2;
      local_1d4 = (undefined4 **)-(*(float *)(iVar9 + 0x18) / fVar2);
      local_1d8 = (undefined4 **)0x8d2c6a;
      fVar12 = (float10)FUN_00ddbaa0();
      fVar13 = (float10)fpatan((float10)(float)local_198,(float10)local_1b8);
      local_160 = (undefined4 *)(float)fVar13;
      fStack_15c = (float)fVar12;
      fVar12 = (float10)fpatan((float10)*(float *)(iVar9 + 0x14) / (float10)fStack_13c,
                               (float10)*(float *)(iVar9 + 0x10) / (float10)(float)puStack_140);
      local_158 = (float)fVar12;
      local_130 = (undefined4 *)0x0;
      local_1d8 = (undefined4 **)0x5;
      local_12c = 1.0;
      local_128 = 0;
      FUN_00ddc1d0(apuStack_70,&local_160);
      local_1d4 = apuStack_70;
      local_1d8 = &local_130;
      ppuVar10 = &puStack_100;
      D3DXVec3TransformNormal();
      fStack_13c = 0.0;
      fStack_138 = 0.0;
      fStack_134 = 1.0;
      FUN_00ddc1d0(auStack_7c,&puStack_16c,5);
      puVar7 = auStack_7c;
      D3DXVec3TransformNormal(auStack_3c,&fStack_13c);
      fStack_148 = 1.0;
      fStack_144 = 0.0;
      puStack_140 = (undefined4 *)0x0;
      FUN_00ddc1d0(auStack_88,&local_178,5);
      puVar18 = auStack_88;
      pfVar8 = &fStack_148;
      pfVar17 = &fStack_108;
      D3DXVec3TransformNormal();
      fStack_1a4 = fStack_124 * 1.5 + (float)local_194;
      fStack_1a0 = (float)puStack_120 * 1.5 + (float)local_190;
      fStack_19c = fStack_11c * 1.5 + fStack_18c;
      local_198 = (int *)(fStack_118 * 1.5 + (float)local_188);
      local_1d4 = (undefined4 **)((float)local_194 - fStack_1a4);
      fVar2 = (float)local_188 - (float)local_198;
      FUN_00ddcfe0(auStack_94,&fStack_114,0);
      puVar16 = auStack_94;
      D3DXVec3TransformNormal(&local_1d4,&local_1d4);
      fStack_154 = fStack_184;
      fStack_1c0 = (float)puVar7 * -1.0;
      local_1bc = (float)ppuVar10 * -1.0;
      local_1b8 = (float)local_1d8 * -1.0;
      local_1b4 = (undefined4 **)((float)local_1d4 * -1.0);
      fVar15 = local_1b8 * local_1b8 + fStack_1c0 * fStack_1c0 + local_1bc * local_1bc;
      if (fVar15 < 0.0 == (fVar15 == 0.0)) {
        FUN_00ddf460(&fStack_1c0,&fStack_1c0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_1c0 = 0.0;
        local_1bc = 1.0;
        local_1b8 = 0.0;
      }
      local_178 = local_1d8;
      local_174 = local_1d4;
      local_180 = puVar7;
      local_17c = ppuVar10;
      FUN_00ddcfe0(auStack_a0,&puStack_120,0xbfc90fdb);
      D3DXVec3TransformNormal(&local_180,&local_180,auStack_a0);
      FUN_00ddcfe0(auStack_ac,&stack0xfffffe34,0);
      D3DXVec3TransformNormal(&fStack_18c,&fStack_18c,auStack_ac);
      local_158 = (float)puVar16 + fVar2;
      fStack_154 = (float)pfVar17 + fStack_1c4;
      fStack_150 = (float)pfVar8 + fStack_1c0;
      fStack_14c = (float)puVar18 + local_1bc;
      local_168 = (undefined4 *)(local_158 + (float)local_198);
      puStack_164 = (undefined4 *)((float)local_194 + fStack_154);
      local_160 = (undefined4 *)(fStack_150 + (float)local_190);
      fStack_15c = fStack_18c + fStack_14c;
      FUN_00db6410(&fStack_108,&local_158,&local_168,&local_1d8);
      local_188 = (undefined4 *)
                  SQRT((float)puStack_100 * (float)puStack_100 +
                       fStack_108 * fStack_108 + fStack_104 * fStack_104);
      fStack_184 = SQRT((float)puStack_f0 * (float)puStack_f0 +
                        fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4);
      fVar3 = SQRT(local_e0 * local_e0 + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4);
      fVar21 = (float)puStack_f0 / fVar3;
      fVar15 = local_e0 / fVar3;
      fVar12 = (float10)FUN_00ddbaa0(-((float)puStack_100 / fVar3));
      fVar13 = (float10)fpatan((float10)fVar21,(float10)fVar15);
      fVar14 = (float10)fpatan((float10)fStack_104 / (float10)fStack_184,
                               (float10)fStack_108 / (float10)(float)local_188);
      param_1[0x1c] = (undefined4 *)((float)puVar16 + fVar2);
      param_1[0x1d] = (undefined4 *)((float)pfVar17 + fStack_1c4);
      param_1[0x1e] = (undefined4 *)((float)pfVar8 + fStack_1c0);
      param_1[0x1f] = (undefined4 *)((float)puVar18 + local_1bc);
      param_1[0x20] = (undefined4 *)(float)fVar13;
      param_1[0x21] = (undefined4 *)(float)fVar12;
      param_1[0x22] = (undefined4 *)(float)fVar14;
      param_1[0x23] = puStack_16c;
      param_1[0x78] = param_1[0x1c];
      param_1[0x79] = param_1[0x1d];
      param_1[0x7a] = param_1[0x1e];
      param_1[0x7b] = param_1[0x1f];
      param_1[0x7c] = param_1[0x20];
      param_1[0x7d] = param_1[0x21];
      param_1[0x7e] = param_1[0x22];
      param_1[0x7f] = param_1[0x23];
      StateMachineNode::vf10(param_2);
      return;
    }
  }
  param_1[0x1c] = param_1[0x78];
  local_1d4 = param_2;
  param_1[0x1d] = param_1[0x79];
  param_1[0x1e] = param_1[0x7a];
  param_1[0x1f] = param_1[0x7b];
  param_1[0x20] = param_1[0x7c];
  param_1[0x21] = param_1[0x7d];
  param_1[0x22] = param_1[0x7e];
  param_1[0x23] = param_1[0x7f];
  local_1d8 = (undefined4 **)0x8d3200;
  StateMachineNode::vf10();
  return;
}

