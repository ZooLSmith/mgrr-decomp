// src/player/pl1400/state/ZangekiOnPartsStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008601F0..00898B50, 12 functions

#include "mgrr.h"
#include "ZangekiOnPartsStatePl1400.h"

// 008601F0  ZangekiOnPartsStatePl1400::vf14  size=5  [class]
undefined4 __thiscall ZangekiOnPartsStatePl1400::vf14(int param_1,undefined4 param_2)

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

// 00860200  ZangekiOnPartsStatePl1400::thunk_vf18  size=5  [class]
undefined4 __thiscall ZangekiOnPartsStatePl1400::thunk_vf18(int param_1,undefined4 param_2)

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

// 00860210  ZangekiOnPartsStatePl1400::vf24  size=19  [class]
bool ZangekiOnPartsStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00860230  ZangekiOnPartsStatePl1400::ZangekiOnPartsStatePl1400  size=36  [class]
undefined4 * __thiscall
ZangekiOnPartsStatePl1400::ZangekiOnPartsStatePl1400(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode(param_2);
  *param_1 = vftable;
  FUN_00a603a0();
  return param_1;
}

// 00860260  ZangekiOnPartsStatePl1400::vf00  size=6  [class]
undefined * ZangekiOnPartsStatePl1400::vf00(void)

{
  return &DAT_01b35b6c;
}

// 00868DA0  ZangekiOnPartsStatePl1400::vf04  size=42  [class]
undefined4 * __thiscall ZangekiOnPartsStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  cXml::cXml_7();
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00873730  ZangekiOnPartsStatePl1400::vf08  size=1015  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiOnPartsStatePl1400::vf08(int param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
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
  *(undefined4 *)(uVar3 + 0x628) = 1;
  if ((0 < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x38) < 0xc)) {
    *(undefined4 *)(uVar3 + 0x690) = 1;
  }
  return;
}

// 0088AA50  ZangekiOnPartsStatePl1400::SafeCheck  size=1496  [class]
void __thiscall ZangekiOnPartsStatePl1400::SafeCheck(int param_1,undefined4 *param_2)

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
      local_234 = (undefined4 *)&DAT_01b35b78;
      local_238 = (float *)0x88aa83;
      (**(code **)*param_2)();
      local_238 = (float *)0x88aa8a;
      iVar8 = FUN_00dd6d80();
      uVar10 = -(uint)(iVar8 != 0) & (uint)param_2;
    }
    piVar5 = *(int **)(uVar10 + 0x5e0);
    if (piVar5 == (int *)0x0) {
      local_1f4 = (float *)0x0;
    }
    else {
      local_234 = (undefined4 *)&DAT_01b35b20;
      local_238 = (float *)0x88aab0;
      (**(code **)(*piVar5 + 4))();
      local_238 = (float *)0x88aab7;
      iVar8 = FUN_00dd6d80();
      local_1f4 = (float *)(-(uint)(iVar8 != 0) & (uint)piVar5);
    }
    local_234 = (undefined4 *)0x88aacc;
    iVar8 = FUN_00a81330();
    if (iVar8 != 0) {
      local_234 = (undefined4 *)0x88aadb;
      iVar8 = FUN_00a7c8a0();
      if (iVar8 != 0) {
        local_234 = *(undefined4 **)(uVar10 + 0x408);
        local_238 = (float *)0x88aaf1;
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
          local_238 = (float *)0x88aba2;
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
            local_234 = (undefined4 *)&DAT_01b35b78;
            local_238 = (float *)0x88af45;
            (**(code **)*param_2)();
            local_238 = (float *)0x88af4c;
            iVar8 = FUN_00dd6d80();
            uVar11 = -(uint)(iVar8 != 0) & (uint)param_2;
          }
          if (*(int *)(uVar11 + 0x4c4) != 1) {
            local_234 = param_2;
            local_238 = (float *)0x88af67;
            FUN_00869630();
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
    local_238 = (float *)0x88afc1;
    local_234 = (undefined4 *)(uVar10 + 400);
    FUN_00dffb30();
    local_238 = (float *)pfVar7[0x13c];
    local_234 = (undefined4 *)0x0;
    FUN_00e03080();
    local_234 = (undefined4 *)0x88afe1;
    local_238 = (float *)FUN_00a81330();
    if (local_238 != (float *)0x0) {
      local_234 = (undefined4 *)0x1;
      FUN_00e03080();
    }
    local_234 = (undefined4 *)auStack_160;
    local_238 = (float *)0x11400;
    FUN_00a8c8b0();
    *(undefined4 *)(param_1 + 0x160) = 0x420c0000;
  }
  local_234 = param_2;
  local_238 = (float *)0x88b01f;
  StateMachineNode::SafeCheck();
  return;
}

// 0088B030  ZangekiOnPartsStatePl1400::vf20  size=433  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall ZangekiOnPartsStatePl1400::vf20(undefined4 param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
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
  FUN_00877940(param_2,param_1);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c950();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  uVar3 = 0;
  DAT_01d61a88 = 0;
  *(undefined4 *)(uVar4 + 0x4a0) = 0;
  if (param_2 != (undefined4 *)0x0) {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  (**(code **)(*(int *)(uVar3 + 0x240) + 8))(0x41200000,0,0);
  return 1;
}

// 0088B1F0  FUN_0088b1f0  size=5719  [callgraph]
void __thiscall FUN_0088b1f0(int param_1,float ***param_2)

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
    local_144 = (float *)&DAT_01b35b78;
    pppuStack_148 = (float ***)0x88b219;
    (*(code *)**param_2)();
    pppuStack_148 = (float ***)0x88b220;
    iVar16 = FUN_00dd6d80();
    uVar17 = -(uint)(iVar16 != 0) & (uint)param_2;
  }
  piVar7 = *(int **)(uVar17 + 0x5e0);
  if (piVar7 == (int *)0x0) {
    local_b8 = 0.0;
  }
  else {
    local_144 = (float *)&DAT_01b35b20;
    pppuStack_148 = (float ***)0x88b249;
    (**(code **)(*piVar7 + 4))();
    pppuStack_148 = (float ***)0x88b250;
    iVar16 = FUN_00dd6d80();
    local_b8 = (float)(-(uint)(iVar16 != 0) & (uint)piVar7);
  }
  if (*(int *)(uVar17 + 0x484) == 0) {
    local_144 = (float *)0x88b275;
    iVar16 = FUN_00a81330();
    if (iVar16 == 0) {
      return;
    }
    local_144 = (float *)0x88b284;
    iVar16 = FUN_00a7c8a0();
    if (iVar16 == 0) {
      return;
    }
    local_144 = *(float **)(uVar17 + 0x408);
    pppuStack_148 = (float ***)0x88b29a;
    iVar16 = FUN_00a12210();
    if (iVar16 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x30) == 0xc) {
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
    pppuStack_148 = (float ***)0x88b364;
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
    pfStack_154 = (float *)0x88b3c3;
    FUN_00ddc1d0();
    local_144 = (float *)local_50;
    pppuStack_148 = &local_130;
    pfStack_14c = &local_f0;
    ppfStack_150 = (float **)0x88b3dd;
    D3DXVec3TransformNormal();
    ppfStack_150 = (float **)0x5;
    pfStack_154 = &local_6c;
    pfStack_158 = (float *)&local_5c;
    fStack_134 = 0.0;
    ppfStack_15c = (float **)0x88b404;
    FUN_00ddc1d0();
    ppfStack_150 = (float **)&local_5c;
    pfStack_154 = (float *)&stack0xfffffec4;
    pfStack_158 = afStack_dc;
    ppfStack_15c = (float **)0x88b41e;
    D3DXVec3TransformNormal();
    pppuStack_148 = (float ***)0x0;
    ppfStack_15c = (float **)0x5;
    pppuStack_160 = (undefined4 ***)&pfStack_78;
    local_144 = (float *)0x3f800000;
    pfStack_164 = (float *)local_68;
    pppuStack_168 = (float ***)0x88b445;
    FUN_00ddc1d0();
    ppfStack_15c = (float **)local_68;
    pppuStack_160 = &pppuStack_148;
    pfStack_164 = &local_f8;
    pppuStack_168 = (float ***)0x88b45f;
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
            ppfStack_170 = (float **)0x88b866;
            pppuStack_168 = pppuStack_16c;
            FUN_00ddf460();
            fVar1 = fStack_120;
            fVar2 = fStack_11c;
            ppuVar11 = ppuStack_124;
          }
          else {
            pppuStack_168 = (undefined4 ***)&DAT_0163d0ac;
            pppuStack_16c = (undefined4 ***)0x88b887;
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
LAB_0088c81f:
      fVar1 = fVar1 + fVar4;
    }
  }
  else {
    local_144 = (float *)0x88b955;
    iVar16 = FUN_00a81330();
    if (iVar16 == 0) {
      return;
    }
    local_144 = (float *)0x88b964;
    local_104 = (float)FUN_00a7c8a0();
    if (local_104 == 0.0) {
      return;
    }
    local_144 = *(float **)(uVar17 + 0x408);
    pppuStack_148 = (float ***)0x88b97e;
    iVar16 = FUN_00a12210();
    local_144 = *(float **)(uVar17 + 0x40c);
    pppuStack_148 = (float ***)0x88b990;
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
    pppuStack_148 = (float ***)0x88ba60;
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
    pfStack_154 = (float *)0x88babf;
    FUN_00ddc1d0();
    local_144 = (float *)local_50;
    pppuStack_148 = &local_130;
    pfStack_14c = &local_f0;
    ppfStack_150 = (float **)0x88bad9;
    D3DXVec3TransformNormal();
    ppfStack_150 = (float **)0x5;
    pfStack_154 = &fStack_7c;
    pfStack_158 = (float *)&local_5c;
    fStack_134 = 0.0;
    ppfStack_15c = (float **)0x88bb00;
    FUN_00ddc1d0();
    ppfStack_150 = (float **)&local_5c;
    pfStack_154 = (float *)&stack0xfffffec4;
    pfStack_158 = &fStack_ec;
    ppfStack_15c = (float **)0x88bb1a;
    D3DXVec3TransformNormal();
    pppuStack_148 = (float ***)0x0;
    ppfStack_15c = (float **)0x5;
    pppuStack_160 = (undefined4 ***)&pfStack_88;
    local_144 = (float *)0x3f800000;
    pfStack_164 = (float *)local_68;
    pppuStack_168 = (float ***)0x88bb41;
    FUN_00ddc1d0();
    ppfStack_15c = (float **)local_68;
    pppuStack_160 = &pppuStack_148;
    pfStack_164 = &local_c8;
    pppuStack_168 = (float ***)0x88bb5e;
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
    pppuStack_16c = (undefined4 ***)0x88bc77;
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
    pppfStack_178 = (float ***)0x88bcca;
    FUN_00ddc1d0();
    pppuStack_168 = &ppuStack_74;
    pppuStack_16c = (undefined4 ***)&local_144;
    ppfStack_170 = (float **)&fStack_114;
    ppuStack_174 = (undefined4 **)0x88bce4;
    D3DXVec3TransformNormal();
    ppuStack_174 = (undefined4 **)0x5;
    ppfStack_150 = (float **)0x3f800000;
    pppfStack_178 = &local_130;
    pfStack_17c = &fStack_80;
    pfStack_14c = (float *)0x0;
    pppuStack_148 = (float ***)0x0;
    puStack_180 = (undefined1 *)0x88bd08;
    FUN_00ddc1d0();
    ppuStack_174 = (undefined4 **)&fStack_80;
    pppfStack_178 = &ppfStack_150;
    pfStack_17c = &fStack_110;
    puStack_180 = (undefined1 *)0x88bd22;
    D3DXVec3TransformNormal();
    ppfStack_15c = (float **)0x0;
    puStack_180 = (undefined1 *)0x5;
    pppfStack_184 = (float ***)&stack0xfffffec4;
    pfStack_158 = (float *)0x3f800000;
    pfStack_188 = (float *)auStack_8c;
    pfStack_154 = (float *)0x0;
    pfStack_18c = (float *)0x88bd46;
    FUN_00ddc1d0();
    puStack_180 = auStack_8c;
    pppfStack_184 = &ppfStack_15c;
    pfStack_188 = &fStack_ec;
    pfStack_18c = (float *)0x88bd63;
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
      if (*(int *)(uVar17 + 0x480) == 0) goto LAB_0088c82f;
      pppuStack_168 = (float ***)0x5;
      pfStack_154 = (float *)0x0;
      pppuStack_16c = (undefined4 ***)apfStack_94;
      ppfStack_150 = (float **)0x0;
      ppfStack_170 = (float **)&ppuStack_74;
      pfStack_14c = (float *)0x3f800000;
      ppuStack_174 = (undefined4 **)0x88c40d;
      FUN_00ddc1d0();
      pppuStack_168 = &ppuStack_74;
      pppuStack_16c = (undefined4 ***)&pfStack_154;
      ppfStack_170 = (float **)&fStack_114;
      ppuStack_174 = (undefined4 **)0x88c427;
      D3DXVec3TransformNormal();
      pppuStack_160 = (undefined4 ***)0x3f800000;
      ppuStack_174 = (undefined4 **)0x5;
      pppfStack_178 = &local_a0;
      ppfStack_15c = (float **)0x0;
      pfStack_17c = &fStack_80;
      pfStack_158 = (float *)0x0;
      puStack_180 = (undefined1 *)0x88c44e;
      FUN_00ddc1d0();
      ppuStack_174 = (undefined4 **)&fStack_80;
      pppfStack_178 = (float ***)&pppuStack_160;
      pfStack_17c = &fStack_110;
      puStack_180 = (undefined1 *)0x88c468;
      D3DXVec3TransformNormal();
      pppuStack_16c = (undefined4 ***)0x0;
      puStack_180 = (undefined1 *)0x5;
      pppfStack_184 = &ppfStack_ac;
      pppuStack_168 = (float ***)0x3f800000;
      pfStack_188 = (float *)auStack_8c;
      pfStack_164 = (float *)0x0;
      pfStack_18c = (float *)0x88c48f;
      FUN_00ddc1d0();
      puStack_180 = auStack_8c;
      pppfStack_184 = (float ***)&pppuStack_16c;
      pfStack_188 = &fStack_ec;
      pfStack_18c = (float *)0x88c4ac;
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
          ppfStack_170 = (float **)0x88c7bf;
          pppuStack_168 = pppuStack_16c;
          FUN_00ddf460();
          fVar1 = fStack_c0;
          fVar2 = fStack_bc;
          ppfVar9 = (float **)local_c4;
        }
        else {
          pppuStack_168 = (undefined4 ***)&DAT_0163d0ac;
          pppuStack_16c = (undefined4 ***)0x88c7e9;
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
      goto LAB_0088c81f;
    }
    pppuStack_168 = (float ***)0x5;
    pfStack_154 = (float *)0x0;
    pppuStack_16c = (undefined4 ***)apfStack_94;
    ppfStack_150 = (float **)0x0;
    ppfStack_170 = (float **)&ppuStack_74;
    pfStack_14c = (float *)0x3f800000;
    ppuStack_174 = (undefined4 **)0x88c0db;
    FUN_00ddc1d0();
    pppuStack_168 = &ppuStack_74;
    pppuStack_16c = (undefined4 ***)&pfStack_154;
    ppfStack_170 = (float **)&fStack_114;
    ppuStack_174 = (undefined4 **)0x88c0f5;
    D3DXVec3TransformNormal();
    pppuStack_160 = (undefined4 ***)0x3f800000;
    ppuStack_174 = (undefined4 **)0x5;
    pppfStack_178 = &local_a0;
    ppfStack_15c = (float **)0x0;
    pfStack_17c = &fStack_80;
    pfStack_158 = (float *)0x0;
    puStack_180 = (undefined1 *)0x88c11c;
    FUN_00ddc1d0();
    ppuStack_174 = (undefined4 **)&fStack_80;
    pppfStack_178 = (float ***)&pppuStack_160;
    pfStack_17c = &fStack_110;
    puStack_180 = (undefined1 *)0x88c136;
    D3DXVec3TransformNormal();
    pppuStack_16c = (undefined4 ***)0x0;
    puStack_180 = (undefined1 *)0x5;
    pppfStack_184 = &ppfStack_ac;
    pppuStack_168 = (float ***)0x3f800000;
    pfStack_188 = (float *)auStack_8c;
    pfStack_164 = (float *)0x0;
    pfStack_18c = (float *)0x88c15d;
    FUN_00ddc1d0();
    puStack_180 = auStack_8c;
    pppfStack_184 = (float ***)&pppuStack_16c;
    pfStack_188 = &fStack_ec;
    pfStack_18c = (float *)0x88c17a;
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
LAB_0088c82f:
  pppuStack_168 = param_2;
  pppuStack_16c = (undefined4 ***)0x88c83a;
  FUN_00873b90();
  return;
}

// 0088C850  FUN_0088c850  size=1819  [callgraph]
void __thiscall
FUN_0088c850(int param_1,float *param_2,int param_3,int param_4,float param_5,float param_6)

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
    pfStack_174 = (float *)&DAT_01b35b78;
    ppfStack_178 = (float **)0x88c879;
    (**(code **)*param_2)();
    ppfStack_178 = (float **)0x88c880;
    iVar7 = FUN_00dd6d80();
    uVar9 = -(uint)(iVar7 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar9 + 0x5e0);
  piVar8 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    pfStack_174 = (float *)&DAT_01b35b20;
    ppfStack_178 = (float **)0x88c8a0;
    (**(code **)(*piVar1 + 4))();
    ppfStack_178 = (float **)0x88c8a7;
    iVar7 = FUN_00dd6d80();
    piVar8 = (int *)(-(uint)(iVar7 != 0) & (uint)piVar1);
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    pfStack_174 = param_2;
    ppfStack_178 = &local_128;
    pfStack_17c = (float *)0x88c8ce;
    FUN_00877d10();
    pfStack_154 = local_128;
    fStack_158 = (float)pfStack_124;
    if (*(int *)(uVar9 + 0x330) == 0xf) {
      pfStack_154 = (float *)((float)local_128 * -1.0);
      fStack_158 = (float)pfStack_124 * -1.0;
    }
    pfStack_174 = (float *)0x88c90b;
    fVar10 = (float10)FUN_00da7570();
    pfStack_174 = (float *)0x88c918;
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
    ppfStack_178 = (float **)0x88ca23;
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
    ppfStack_178 = (float **)0x88cad2;
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
    pfStack_180 = (float *)0x88cb2a;
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

// 00898B50  ZangekiOnPartsStatePl1400::qteSafeCheck  size=9277  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiOnPartsStatePl1400::qteSafeCheck(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int unaff_EBX;
  int *piVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float *pfVar20;
  float *pfVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined4 uVar24;
  float *pfVar25;
  undefined4 uVar26;
  float *pfVar27;
  undefined4 uVar28;
  char *pcVar29;
  float *local_3c4;
  float *local_3b0;
  float *local_3ac;
  float *local_3a8;
  float *local_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float fStack_334;
  float local_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float local_320;
  float local_31c;
  float local_318;
  int local_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float local_2d0 [4];
  undefined1 local_2c0 [8];
  float local_2b8;
  float local_2a0;
  float local_29c;
  float local_298;
  float fStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 local_270;
  float local_26c;
  undefined4 local_268;
  float fStack_260;
  float afStack_25c [3];
  float local_250;
  float local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  undefined1 auStack_238 [8];
  float fStack_230;
  float afStack_22c [3];
  float afStack_220 [13];
  undefined1 auStack_1ec [12];
  undefined1 local_1e0 [16];
  float afStack_1d0 [16];
  float afStack_190 [4];
  float local_180 [4];
  undefined1 auStack_170 [16];
  float local_160 [87];
  
  if (param_2 == (float *)0x0) {
    local_3b0 = (float *)0x0;
  }
  else {
    local_3c4 = (float *)&DAT_01b35b78;
    (**(code **)*param_2)();
    iVar14 = FUN_00dd6d80();
    local_3b0 = (float *)(-(uint)(iVar14 != 0) & (uint)param_2);
  }
  piVar15 = (int *)local_3b0[0x178];
  if (piVar15 == (int *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    local_3c4 = (float *)&DAT_01b35b20;
    (**(code **)(*piVar15 + 4))();
    iVar14 = FUN_00dd6d80();
    piVar15 = (int *)(-(uint)(iVar14 != 0) & (uint)piVar15);
  }
  local_3c4 = (float *)0x898bbf;
  FUN_0093dc50();
  switch(param_1[0xc]) {
  case 0.0:
    local_3c4 = param_1 + 0x1c;
    param_1[0xc] = 1.4013e-45;
    param_1[0xd] = 0.0;
    FUN_00bc6e00(param_1 + 0x3f,param_1 + 0x10);
    local_3c4 = (float *)0x0;
    param_1[0x57] = 0.0;
    local_3a8 = (float *)FUN_00a82090("Et000d",0x4000d);
    if (local_3a8 == (float *)0x0) break;
    local_3c4 = (float *)0x898c37;
    piVar8 = (int *)FUN_00a7c8a0();
    if (piVar8 == (int *)0x0) break;
    local_3c4 = (float *)0x898c4a;
    local_3c4 = (float *)FUN_00a7c7f0();
    FUN_00a7c960();
    local_3c4 = (float *)0x898c66;
    iVar14 = (**(code **)(*piVar15 + 0x84))();
    uStack_27c = *(undefined4 *)(iVar14 + 4);
    local_3c4 = &fStack_280;
    fStack_280 = 0.0;
    uStack_278 = 0;
    (**(code **)(*piVar8 + 0x7c))(piVar15 + 0x10);
    switch(param_1[0xe]) {
    case 1.4013e-45:
      uVar10 = 0x25;
      break;
    case 2.8026e-45:
      uVar10 = 0x26;
      break;
    case 4.2039e-45:
      uVar10 = 0x27;
      break;
    case 5.60519e-45:
      uVar10 = 0x28;
      break;
    case 7.00649e-45:
      uVar10 = 0x29;
      break;
    case 8.40779e-45:
      uVar10 = 0x2a;
      break;
    case 9.80909e-45:
      uVar10 = 0x2b;
      break;
    case 1.12104e-44:
      uVar10 = 0x2c;
      break;
    case 1.26117e-44:
      uVar10 = 0x2d;
      break;
    case 1.4013e-44:
      uVar10 = 0x2e;
      break;
    case 1.54143e-44:
      uVar10 = 0x2f;
      break;
    case 1.68156e-44:
      uVar10 = 0x30;
      break;
    case 1.82169e-44:
      uVar10 = 0x31;
      break;
    case 1.96182e-44:
      uVar10 = 0x32;
      break;
    case 2.10195e-44:
      uVar10 = 0x33;
      break;
    case 2.24208e-44:
      uVar10 = 0x34;
      break;
    default:
      goto switchD_00898ca2_default;
    }
    local_3c4 = (float *)0x0;
    FUN_00a8caf0(uVar10,0,0);
    param_1[0x75] = -NAN;
switchD_00898ca2_default:
    local_3c4 = (float *)0x898d70;
    iVar14 = FUN_00a81330();
    if (iVar14 != 0) {
      local_3c4 = (float *)0x898d7b;
      piVar15 = (int *)FUN_00a7c8a0();
      if (piVar15 != (int *)0x0) {
        local_3c4 = (float *)param_1[0x75];
        local_3ac = (float *)FUN_00a12210();
        local_3a4 = (float *)*piVar8;
        local_3c4 = (float *)0x898da5;
        local_3c4 = (float *)(**(code **)(*piVar15 + 0x84))();
        (*(code *)local_3a4[0x1f])(local_3ac + 0x10);
      }
    }
    param_1[0x74] = (float)piVar8;
    break;
  case 1.4013e-45:
    if (param_1[0xd] == 0.0) {
      local_3c4 = (float *)0x3c888889;
      uVar10 = 0x1cc;
      iVar14 = (**(code **)(*piVar15 + 800))();
      if (iVar14 == 0) {
        uVar10 = 0x1cd;
      }
      FUN_00aa4080(uVar10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00da8810(0x41a00000);
      FUN_00db3e80(0x41a00000,1,&DAT_01bea1d0);
      pfVar13 = (float *)(**(code **)(*piVar15 + 0x84))();
      param_1[0x68] = *pfVar13;
      param_1[0x69] = pfVar13[1];
      param_1[0x6a] = pfVar13[2];
      param_1[0x6b] = pfVar13[3];
      param_1[0x6c] = param_1[0x68];
      param_1[0x6d] = param_1[0x69];
      param_1[0x6e] = param_1[0x6a];
      param_1[0x6f] = param_1[0x6b];
      piVar15[0x9b5] = 0;
      param_1[0xd] = (float)((int)param_1[0xd] + 1);
LAB_00898ece:
      local_3c4 = (float *)0x898ed5;
      FUN_00a92f90();
      local_3c4 = (float *)0x898ede;
      FUN_00e26e90();
      local_3c4 = (float *)0x0;
      FUN_00e22f10();
      local_3c4 = (float *)0x0;
      iVar14 = FUN_00a94ce0();
      if (iVar14 == 0) {
        local_3c4 = (float *)0x41f00000;
        iVar14 = FUN_00a94e10(0,0);
        pfVar13 = local_3b0;
        if (iVar14 == 0) {
          local_3c4 = param_1 + 0x6c;
          (**(code **)(*piVar15 + 0x88))();
        }
        else {
          local_390 = param_1[0x68];
          local_38c = param_1[0x69];
          local_388 = param_1[0x6a];
          local_384 = param_1[0x6b];
          local_330 = (float)piVar15[0x10];
          local_328 = (float)piVar15[0x12];
          local_380 = param_1[0x1c];
          local_378 = param_1[0x1e];
          local_3c4 = (float *)0x898fad;
          iVar14 = FUN_00a81330();
          if (iVar14 != 0) {
            local_3c4 = (float *)0x898fb8;
            iVar14 = FUN_00a7c8a0();
            if (iVar14 != 0) {
              local_3c4 = (float *)pfVar13[0x102];
              iVar14 = FUN_00a12210();
              if (iVar14 != 0) {
                local_380 = *(float *)(iVar14 + 0x40);
                local_378 = *(float *)(iVar14 + 0x48);
              }
            }
          }
          if ((param_1[0xe] == 1.96182e-44) || (param_1[0xe] == 1.82169e-44)) {
            local_3c4 = (float *)0x898ff6;
            iVar14 = FUN_00a81330();
            if (iVar14 != 0) {
              local_3c4 = (float *)0x899001;
              iVar14 = FUN_00a7c8a0();
              if (iVar14 != 0) {
                local_380 = *(float *)(iVar14 + 0x40);
                local_378 = *(float *)(iVar14 + 0x48);
              }
            }
          }
          fVar16 = (float10)fpatan((float10)local_380 - (float10)local_330,
                                   (float10)local_378 - (float10)local_328);
          local_3c4 = (float *)(float)fVar16;
          fVar16 = (float10)FUN_00ddba30();
          local_270 = 0;
          local_268 = 0;
          local_3c4 = (float *)0x5;
          local_26c = (float)fVar16;
          local_3ac = (float *)FUN_00a959f0(0);
          FUN_00ddefe0(&local_390,&local_390,&local_270,(float)(int)local_3ac * 0.033333335);
          local_3c4 = &local_390;
          (**(code **)(*piVar15 + 0x88))();
          param_1[0x6c] = local_390;
          param_1[0x6d] = local_38c;
          param_1[0x6e] = local_388;
          param_1[0x6f] = local_384;
        }
      }
      else {
        param_1[0xc] = 5.60519e-45;
        param_1[0xd] = 0.0;
        local_3c4 = (float *)0x898f11;
        FUN_008e3c10();
        local_3c4 = (float *)0x1f;
        FUN_008e5c50();
        local_3b0[0x128] = 1.4013e-45;
      }
    }
    else if (param_1[0xd] == 1.4013e-45) goto LAB_00898ece;
    local_3ac = local_3b0 + 0x14d;
    piVar15[0xd07] = (int)param_1[0x36];
    local_3c4 = (float *)0x8990f0;
    iVar14 = FUN_00a81330();
    if (iVar14 != 0) {
      local_3c4 = (float *)0x8990fb;
      puVar7 = (undefined4 *)FUN_00a7c8a0();
      if (puVar7 != (undefined4 *)0x0) {
        local_3c4 = (float *)0x899110;
        iVar14 = FUN_00a81330();
        if (iVar14 != 0) {
          local_3c4 = (float *)0x89911b;
          piVar15 = (int *)FUN_00a7c8a0();
          if (piVar15 != (int *)0x0) {
            local_3c4 = (float *)param_1[0x75];
            local_3a4 = (float *)FUN_00a12210();
            local_3a8 = (float *)*puVar7;
            local_3c4 = (float *)0x899145;
            local_3c4 = (float *)(**(code **)(*piVar15 + 0x84))();
            (*(code *)local_3a8[0x1f])(local_3a4 + 0x10);
          }
        }
      }
    }
    fVar11 = param_1[0xe];
    if (((fVar11 == 1.68156e-44) || (fVar11 == 1.82169e-44)) || (fVar11 == 1.96182e-44)) {
      local_3c4 = (float *)0x89917e;
      iVar14 = FUN_00a81330();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x89918d;
        pfVar13 = (float *)FUN_00a7c8a0();
        local_3a8 = pfVar13;
        if (pfVar13 != (float *)0x0) {
          local_3a4 = (float *)0xffffffff;
          local_3c4 = (float *)0x8991ae;
          iVar14 = FUN_00a81330();
          if (iVar14 != 0) {
            local_3c4 = (float *)0x8991b9;
            iVar14 = FUN_00a7c8a0();
            if (iVar14 != 0) {
              local_3c4 = (float *)0x8991c4;
              local_3a4 = (float *)FUN_009f8b40();
            }
          }
          local_3c4 = (float *)0x8991d1;
          iVar14 = FUN_00a81330();
          if (iVar14 != 0) {
            local_3c4 = (float *)0x8991dc;
            iVar14 = FUN_00a7c8a0();
            pfVar13 = local_3a8;
            if (iVar14 != 0) {
              local_3c4 = (float *)0xffffffff;
              iVar14 = FUN_00a12210();
              local_3c4 = (float *)0x0;
              iVar9 = FUN_00a12210();
              fStack_3a0 = *(float *)(iVar9 + 0x40) - *(float *)(iVar14 + 0x40);
              fStack_39c = *(float *)(iVar9 + 0x44) - *(float *)(iVar14 + 0x44);
              fStack_398 = *(float *)(iVar9 + 0x48) - *(float *)(iVar14 + 0x48);
              fStack_394 = *(float *)(iVar9 + 0x4c) - *(float *)(iVar14 + 0x4c);
              pfVar13 = local_3a8;
            }
          }
          if (((fStack_360 != 0.0) || (fStack_35c != 0.0)) || (fStack_358 != 0.0)) {
            fVar11 = fStack_398 * fStack_398 + fStack_3a0 * fStack_3a0 + fStack_39c * fStack_39c;
            if (fVar11 < 0.0 == (fVar11 == 0.0)) {
              local_3c4 = &fStack_3a0;
              FUN_00ddf460(&fStack_360);
            }
            else {
              local_3c4 = (float *)&DAT_0163d0ac;
              FUN_00dd5650();
              fStack_360 = 0.0;
              fStack_35c = 1.0;
              fStack_358 = 0.0;
            }
          }
          local_3c4 = (float *)param_1[0x75];
          iVar14 = FUN_00a12210();
          local_390 = *(float *)(iVar14 + 0x40);
          local_3c4 = (float *)0x0;
          local_38c = *(float *)(iVar14 + 0x44);
          pcVar29 = "zangekiOnPartsStartPosCheck";
          uVar28 = 0;
          local_388 = *(float *)(iVar14 + 0x48);
          uVar26 = 0x60;
          uVar24 = 0;
          local_384 = *(float *)(iVar14 + 0x4c);
          local_370 = local_390 + fStack_3a0;
          local_36c = local_38c + fStack_39c;
          local_368 = local_388 + fStack_398;
          local_364 = local_384 + fStack_394;
          uVar10 = FUN_00410130(6,local_3a4,0,0,0,0,0x60,0,"zangekiOnPartsStartPosCheck");
          FUN_00445d40(&local_390,&local_370,uVar10,uVar24,uVar26,uVar28,pcVar29);
          local_3c4 = afStack_1d0;
          iVar14 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_330,&local_380,0,0);
          if (iVar14 != 0) {
            local_3c4 = (float *)0x8993ab;
            iVar14 = FUN_00a81330();
            if (iVar14 != 0) {
              local_3c4 = (float *)0x8993ba;
              pfVar12 = (float *)FUN_00a7c8a0();
              if (pfVar12 != (float *)0x0) {
                fStack_2f0 = (local_330 - fStack_3a0) + local_380 * 0.5;
                fStack_2ec = (fStack_32c - fStack_39c) + fStack_37c * 0.5;
                fStack_2e8 = local_378 * 0.5 + (local_328 - fStack_398);
                fStack_2e4 = fStack_374 * 0.5 + (fStack_324 - fStack_394);
                local_3ac = (float *)*pfVar12;
                local_3c4 = (float *)0x89944c;
                local_3c4 = (float *)(**(code **)((int)*pfVar13 + 0x84))();
                (*(code *)local_3ac[0x1f])(&fStack_2f0);
              }
            }
          }
        }
      }
    }
    break;
  default:
    break;
  case 5.60519e-45:
    if (param_1[0xd] == 0.0) {
      local_3c4 = (float *)0x3f800000;
      FUN_00aa4080(0x1ca,0,0,0x3f800000,0x8000000,0xbf800000);
      pcVar6 = *(code **)(*piVar15 + 0x6c);
      local_3c4 = param_1 + 0x1c;
      piVar15[0xf88] = 1;
      (*pcVar6)();
      uStack_244 = 0;
      fStack_240 = param_1[0x21];
      uStack_23c = 0;
      (**(code **)(*piVar15 + 0x88))(&uStack_244);
      param_1[0xd] = (float)((int)param_1[0xd] + 1);
LAB_008994f2:
      local_3c4 = (float *)0x8994f9;
      FUN_00a92f90();
      local_3c4 = (float *)0x899502;
      FUN_00e26e90();
      local_3c4 = (float *)0x0;
      FUN_00e22f10();
      local_3c4 = (float *)0x0;
      iVar14 = FUN_00a94ce0();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x42700000;
        param_1[0xc] = 8.40779e-45;
        param_1[0xd] = 0.0;
        FUN_00da8810();
        local_3c4 = (float *)&DAT_01bea1d0;
        FUN_00db3e80(0x42700000,1);
      }
      local_3c4 = (float *)0x20;
      iVar14 = FUN_00a8c760();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x3dcccccd;
        FUN_00b85350(0x437a0000,piVar15[0x101a],piVar15[0x101b],0,0);
        local_3c4 = param_2;
        FUN_00877430();
        _DAT_01d61ab0 = (float)piVar15[0xd07];
        param_1[0x36] = _DAT_01d61ab0;
        FUN_00892c40(param_2);
      }
    }
    else if (param_1[0xd] == 1.4013e-45) goto LAB_008994f2;
    piVar15[0xd07] = (int)param_1[0x36];
    local_3c4 = (float *)0x8995da;
    iVar14 = FUN_00a81330();
    if (iVar14 != 0) {
      local_3c4 = (float *)0x8995e9;
      local_3a8 = (float *)FUN_00a7c8a0();
      if (local_3a8 != (float *)0x0) {
        local_3c4 = (float *)0x899604;
        iVar14 = FUN_00a81330();
        if (iVar14 != 0) {
          local_3c4 = (float *)0x89960f;
          piVar8 = (int *)FUN_00a7c8a0();
          if (piVar8 != (int *)0x0) {
            local_3c4 = (float *)param_1[0x75];
            local_3ac = (float *)FUN_00a12210();
            local_3a4 = (float *)*local_3a8;
            local_3c4 = (float *)0x89963d;
            local_3c4 = (float *)(**(code **)(*piVar8 + 0x84))();
            (*(code *)local_3a4[0x1f])(local_3ac + 0x10);
          }
        }
        fVar11 = param_1[0xe];
        if (((fVar11 == 1.68156e-44) || (fVar11 == 1.82169e-44)) || (fVar11 == 1.96182e-44)) {
          local_3c4 = (float *)0x899678;
          iVar14 = FUN_00a81330();
          if (iVar14 != 0) {
            local_3c4 = (float *)0x899687;
            local_3a4 = (float *)FUN_00a7c8a0();
            if (local_3a4 != (float *)0x0) {
              local_3ac = (float *)0xffffffff;
              local_3c4 = (float *)0x8996a6;
              iVar14 = FUN_00a81330();
              if (iVar14 != 0) {
                local_3c4 = (float *)0x8996b1;
                iVar14 = FUN_00a7c8a0();
                if (iVar14 != 0) {
                  local_3c4 = (float *)0x8996bc;
                  local_3ac = (float *)FUN_009f8b40();
                }
              }
              local_3c4 = (float *)0xffffffff;
              iVar14 = FUN_00a12210();
              local_3c4 = (float *)0x0;
              iVar9 = FUN_00a12210();
              fStack_3a0 = *(float *)(iVar9 + 0x40) - *(float *)(iVar14 + 0x40);
              fStack_39c = *(float *)(iVar9 + 0x44) - *(float *)(iVar14 + 0x44);
              fStack_398 = *(float *)(iVar9 + 0x48) - *(float *)(iVar14 + 0x48);
              fStack_394 = *(float *)(iVar9 + 0x4c) - *(float *)(iVar14 + 0x4c);
              if (((fStack_360 != 0.0) || (fStack_35c != 0.0)) || (fStack_358 != 0.0)) {
                fVar11 = fStack_398 * fStack_398 + fStack_3a0 * fStack_3a0 + fStack_39c * fStack_39c
                ;
                if (fVar11 < 0.0 == (fVar11 == 0.0)) {
                  local_3c4 = &fStack_3a0;
                  FUN_00ddf460(&fStack_360);
                }
                else {
                  local_3c4 = (float *)&DAT_0163d0ac;
                  FUN_00dd5650();
                  fStack_360 = 0.0;
                  fStack_35c = 1.0;
                  fStack_358 = 0.0;
                }
              }
              pfVar13 = local_3a4;
              local_3c4 = (float *)param_1[0x75];
              iVar14 = FUN_00a12210();
              local_370 = *(float *)(iVar14 + 0x40);
              local_3c4 = (float *)0x0;
              local_36c = *(float *)(iVar14 + 0x44);
              pcVar29 = "zangekiOnPartsStartPosCheck";
              uVar28 = 0;
              local_368 = *(float *)(iVar14 + 0x48);
              uVar26 = 0x60;
              uVar24 = 0;
              local_364 = *(float *)(iVar14 + 0x4c);
              local_330 = local_370 + fStack_3a0;
              fStack_32c = local_36c + fStack_39c;
              local_328 = local_368 + fStack_398;
              fStack_324 = local_364 + fStack_394;
              uVar10 = FUN_00410130(6,local_3ac,0,0,0,0,0x60,0,"zangekiOnPartsStartPosCheck");
              FUN_00445d40(&local_370,&local_330,uVar10,uVar24,uVar26,uVar28,pcVar29);
              local_3c4 = afStack_1d0;
              iVar14 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_380,&local_390,0,0);
              if (iVar14 != 0) {
                fStack_310 = local_390 * 0.5 + (local_380 - fStack_3a0);
                fStack_30c = (fStack_37c - fStack_39c) + local_38c * 0.5;
                fStack_308 = local_388 * 0.5 + (local_378 - fStack_398);
                fStack_304 = local_384 * 0.5 + (fStack_374 - fStack_394);
                local_3ac = (float *)*local_3a8;
                local_3c4 = (float *)0x8998ee;
                local_3c4 = (float *)(**(code **)((int)*pfVar13 + 0x84))();
                (*(code *)local_3ac[0x1f])(&fStack_310);
              }
            }
          }
        }
        local_3c4 = param_1 + 0x1c;
        (**(code **)(*piVar15 + 0x6c))();
        (**(code **)(*piVar15 + 0x88))(param_1 + 0x20);
      }
    }
    break;
  case 8.40779e-45:
    pfVar13 = local_3b0;
    if (param_1[0xd] == 0.0) {
      local_3c4 = (float *)0x899944;
      FUN_008e3c10();
      local_3c4 = (float *)0x1f;
      FUN_008e5c50();
      local_3c4 = (float *)0x0;
      FUN_008e6c60();
      local_3c4 = param_2;
      uVar10 = (*(code *)**(undefined4 **)param_2[1])(0xd);
      FUN_00d82bf0(uVar10);
      pfVar13 = local_3b0;
      if (local_3b0[0x120] != 0.0) {
        param_1[0x37] =
             SQRT((param_1[0x1e] - param_1[0x1a]) * (param_1[0x1e] - param_1[0x1a]) +
                  (param_1[0x1d] - param_1[0x19]) * (param_1[0x1d] - param_1[0x19]) +
                  (param_1[0x1c] - param_1[0x18]) * (param_1[0x1c] - param_1[0x18]));
      }
      local_3c4 = (float *)0x8999b7;
      iVar14 = FUN_00a81330();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x42700000;
        FUN_00da8810();
        local_3c4 = (float *)0x0;
        FUN_00dc1270(0x42700000);
        piVar15[0x1032] = 0xf;
        _DAT_01bea9a0 = 1;
      }
      local_3c4 = (float *)0x899a04;
      iVar14 = FUN_00a81330();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x899a0f;
        iVar14 = FUN_00a7c8a0();
        if (iVar14 != 0) {
          local_3c4 = (float *)0x2;
          FUN_00a8cb60();
        }
      }
      piVar15[0x1032] = 0xf;
      DAT_01d61a88 = 0;
      fVar11 = param_1[0xe];
      if ((fVar11 == 1.96182e-44) || (fVar11 == 1.82169e-44)) {
        param_1[0x3e] = -0.2617994;
      }
      if (fVar11 == 1.68156e-44) {
        param_1[0x3e] = -0.5235988;
        param_1[0x3d] = -0.34906584;
      }
      param_1[0xd] = (float)((int)param_1[0xd] + 1);
    }
    param_1[0x74] = 0.0;
    local_3c4 = (float *)0x899a84;
    iVar14 = FUN_00a81330();
    if (iVar14 != 0) {
      local_3c4 = (float *)0x899a8f;
      fVar11 = (float)FUN_00a7c8a0();
      if (fVar11 != 0.0) {
        param_1[0x74] = fVar11;
      }
    }
    if ((param_1[0x74] != 0.0) && (*(int *)((int)param_1[0x74] + 0x87c) == 0)) {
      local_3c4 = param_1;
      FUN_00890cb0(param_2);
      local_3c4 = (float *)0x3f800000;
      FUN_008770b0(param_2);
      if (param_1[0xe] == 1.68156e-44) {
        local_3c4 = (float *)0x42480000;
      }
      else {
        local_3c4 = (float *)0x41f00000;
      }
      FUN_0088c850(param_2,1,1,local_3c4);
      param_1[0x70] = (float)piVar15[0x10];
      pfVar13 = (float *)(piVar15 + 0x10);
      param_1[0x71] = (float)piVar15[0x11];
      param_1[0x72] = (float)piVar15[0x12];
      param_1[0x73] = (float)piVar15[0x13];
      local_3c4 = (float *)0x899b2f;
      iVar14 = FUN_00a81330();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x899b3a;
        local_3c4 = (float *)FUN_00a7c8a0();
        if ((local_3c4 != (float *)0x0) && (iVar14 = FUN_00860b50(), iVar14 != 0)) {
          local_3c4 = (float *)0x40000000;
          FUN_005ca330();
        }
      }
      fVar11 = SQRT((param_1[0x1a] - (float)piVar15[0x12]) * (param_1[0x1a] - (float)piVar15[0x12])
                    + (param_1[0x19] - (float)piVar15[0x11]) *
                      (param_1[0x19] - (float)piVar15[0x11]) +
                      (param_1[0x18] - *pfVar13) * (param_1[0x18] - *pfVar13)) * 1.5;
      local_3c4 = (float *)(fVar11 + fVar11);
      FUN_00b83ea0();
      if (param_1[0xe] == 1.68156e-44) {
        local_3c4 = (float *)0x41700000;
        FUN_00b83ea0();
      }
      local_3c4 = (float *)0x0;
      FUN_00b8bb40();
      local_3c4 = (float *)0x0;
      FUN_00b8bbb0();
      local_3c4 = param_2;
      FUN_008774a0();
      FUN_00890cb0(param_2,param_1);
      local_3c4 = (float *)0x2000;
      FUN_00c5bbb0();
      if ((int)local_3b0[0x189] < (int)local_3b0[0x188]) {
        local_3c4 = pfVar13;
        (**(code **)(*piVar15 + 0x6c))();
        fStack_2e4 = 0.0;
        fStack_2e0 = param_1[0x15];
        fStack_2dc = 0.0;
        (**(code **)(*piVar15 + 0x88))(&fStack_2e4);
        _DAT_01bea9a0 = 0;
        *(undefined4 *)(unaff_EBX + 0x56c) = 1;
        FUN_00e25500(0x3f800000);
        FUN_00b7aa80();
        FUN_008e6d00();
        if (*(int *)(piVar15[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(piVar15[0x1d9] + 0x104) = 0;
        }
        FUN_008e6c60(1);
        FUN_008e5c50(6);
        (**(code **)(*piVar15 + 0x318))();
        local_3c4 = (float *)0x0;
        FUN_008e0af0();
        local_3c4 = (float *)0x0;
        FUN_00dc1270(0);
        _DAT_01bea940 = (float *)0x0;
        local_3c4 = (float *)0x0;
        FUN_00da8810();
        local_3c4 = (float *)&DAT_01bea1d0;
        FUN_00db3e80(0,0);
        local_3b0[0x18c] = *pfVar13;
        local_3b0[0x18d] = (float)piVar15[0x11];
        local_3b0[0x18e] = (float)piVar15[0x12];
        local_3b0[399] = (float)piVar15[0x13];
        local_3c4 = (float *)0x899d32;
        iVar14 = FUN_00a81330();
        fVar11 = fStack_2e0;
        fVar1 = fStack_2dc;
        if (iVar14 != 0) {
          local_3c4 = (float *)0x899d3d;
          iVar14 = FUN_00a7c8a0();
          fVar11 = fStack_2e0;
          fVar1 = fStack_2dc;
          if (iVar14 != 0) {
            local_3c4 = (float *)local_3b0[0x102];
            iVar14 = FUN_00a12210();
            fVar11 = fStack_2e0;
            fVar1 = fStack_2dc;
            if (iVar14 != 0) {
              fStack_2d8 = *(float *)(iVar14 + 0x48);
              fStack_2d4 = *(float *)(iVar14 + 0x4c);
              fVar11 = *(float *)(iVar14 + 0x40);
              fVar1 = *(float *)(iVar14 + 0x44);
            }
          }
        }
        local_3b0[400] = fVar11;
        local_3b0[0x191] = fVar1;
        local_3b0[0x192] = fStack_2d8;
        local_3b0[0x193] = fStack_2d4;
        if (param_1[0xe] == 1.12104e-44) {
          local_3c4 = (float *)0x40400000;
          pfVar12 = (float *)FUN_00a8b8a0(auStack_170);
          fVar11 = pfVar12[1];
          fVar1 = (float)piVar15[0x11];
          fVar2 = pfVar12[2];
          fVar3 = (float)piVar15[0x12];
          fVar4 = pfVar12[3];
          fVar5 = (float)piVar15[0x13];
          local_3b0[400] = *pfVar13 + *pfVar12;
          local_3b0[0x191] = fVar11 + fVar1;
          local_3b0[0x192] = fVar2 + fVar3;
          local_3b0[0x193] = fVar4 + fVar5;
        }
        local_3c4 = (float *)0x64;
        pfVar13 = (float *)(piVar15 + 4);
        pfVar12 = local_3b0 + 0x194;
        for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
          *pfVar12 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          pfVar12 = pfVar12 + 1;
        }
        FUN_00d82510(0xc);
      }
      break;
    }
    if (((pfVar13[0x124] == 0.0) && (pfVar13[0x125] == 0.0)) && (pfVar13[0x126] == 0.0)) {
      piVar15[0xf86] = 1;
      local_3c4 = param_2;
      param_1[0xc] = 1.68156e-44;
      FUN_00869760();
      local_3c4 = (float *)(piVar15 + 0x10);
      (**(code **)(*piVar15 + 0x6c))();
      local_3c4 = (float *)0x899e98;
      iVar14 = FUN_00a81330();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x899ea3;
        local_3ac = (float *)FUN_00a7c8a0();
        if (local_3ac != (float *)0x0) {
          local_3c4 = (float *)pfVar13[0x102];
          FUN_00a12210();
          local_3c4 = (float *)0x899ec2;
          FUN_009f8b40();
        }
      }
      local_3c4 = afStack_190;
      pfVar13 = (float *)FUN_00a926e0();
      pfVar12 = param_1 + 0x10;
      local_3c4 = (float *)0x0;
      local_370 = (float)piVar15[0x10] + *pfVar13 * 1.5;
      local_36c = pfVar13[1] * 1.5 + (float)piVar15[0x11];
      local_368 = (float)piVar15[0x12] + pfVar13[2] * 1.5;
      local_364 = pfVar13[3] * 1.5 + (float)piVar15[0x13];
      fStack_360 = *pfVar12;
      fStack_35c = param_1[0x11];
      fStack_358 = param_1[0x12];
      fStack_354 = param_1[0x13];
      local_3ac = (float *)FUN_00410130(6,0xffffffff,0,0);
      local_3c4 = (float *)0x0;
      FUN_00445d40(&local_370,&fStack_360,local_3ac,0,0x60,0,"partsZanEndForward");
      local_3c4 = (float *)0x0;
      FUN_00445d40(&fStack_360,&local_370,local_3ac,0,0x60,0,"partsZanEndReturn");
      local_3c4 = afStack_1d0;
      iVar14 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_330,&local_390,0,0);
      if (iVar14 == 0) {
        local_3c4 = afStack_220;
        iVar14 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_330,&local_390,0,0);
        pfVar13 = local_3b0;
        if (iVar14 == 0) goto LAB_0089a053;
      }
      pfVar13 = local_3b0;
      if (0.1 < SQRT((local_328 - param_1[0x12]) * (local_328 - param_1[0x12]) +
                     (fStack_32c - param_1[0x11]) * (fStack_32c - param_1[0x11]) +
                     (local_330 - *pfVar12) * (local_330 - *pfVar12))) {
        fStack_230 = 0.0;
        local_3c4 = &fStack_230;
        fVar16 = (float10)fpatan((float10)(float)piVar15[0x10] - (float10)*pfVar12,
                                 (float10)(float)piVar15[0x12] - (float10)param_1[0x12]);
        afStack_22c[0] = (float)fVar16;
        afStack_22c[1] = 0.0;
        (**(code **)(*piVar15 + 0x7c))(pfVar12);
        pfVar13 = local_3b0;
      }
    }
    else {
      param_1[0xc] = 1.26117e-44;
    }
LAB_0089a053:
    param_1[0xd] = 0.0;
    local_3c4 = (float *)0x3f800000;
    pfVar13[0x15b] = 1.4013e-45;
    FUN_00e25500();
    local_3c4 = (float *)0x41700000;
    DAT_01d61a88 = 1;
    _DAT_01bea9a0 = 0;
    FUN_00da8810();
    local_3c4 = (float *)0x0;
    FUN_00dc1270(0x41700000);
    local_3c4 = (float *)&DAT_01bea1d0;
    FUN_00db3e80(0x41700000,1);
    param_1[0x88] = _DAT_01bea534;
    break;
  case 1.12104e-44:
    if (param_1[0xd] == 0.0) {
      local_3c4 = (float *)0x3f800000;
      FUN_00aa4080(0x1cb,0,0,0x3f800000,0x8000000,0x3d888889);
      pfVar13 = local_3b0;
      pfVar12 = local_3b0 + 0x124;
      local_3c4 = pfVar12;
      (**(code **)(*piVar15 + 0x6c))();
      local_3c4 = (float *)0x89a43f;
      iVar14 = FUN_00a81330();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x89a44a;
        iVar14 = FUN_00a7c8a0();
        if (iVar14 != 0) {
          local_3c4 = &fStack_260;
          fStack_260 = 0.0;
          fVar16 = (float10)fpatan((float10)*(float *)(iVar14 + 0x40) - (float10)*pfVar12,
                                   (float10)*(float *)(iVar14 + 0x48) - (float10)pfVar13[0x126]);
          afStack_25c[0] = (float)fVar16;
          afStack_25c[1] = 0.0;
          (**(code **)(*piVar15 + 0x88))();
        }
      }
      local_3c4 = (float *)0x89a495;
      FUN_008e6d00();
      local_3c4 = (float *)0x1;
      FUN_008e4580(pfVar12);
      if (*(int *)(piVar15[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(piVar15[0x1d9] + 0x104) = 0;
      }
      local_3c4 = (float *)0x1;
      FUN_008e6c60();
      local_3c4 = (float *)0x6;
      FUN_008e5c50();
      local_3c4 = (float *)0x0;
      FUN_00dc1270(0);
      _DAT_01bea940 = (float *)0x0;
      local_3c4 = (float *)0x0;
      FUN_00da8810();
      local_3c4 = (float *)&DAT_01bea1d0;
      FUN_00db3e80(0,0);
      piVar15[0xf86] = 1;
      piVar15[0xf87] = 1;
      param_1[0xd] = (float)((int)param_1[0xd] + 1);
    }
    else if (param_1[0xd] != 1.4013e-45) break;
    local_3c4 = (float *)0x89a52f;
    FUN_00a92f90();
    local_3c4 = (float *)0x89a538;
    FUN_00e26e90();
    local_3c4 = (float *)0x0;
    FUN_00e22f10();
    local_3c4 = (float *)0x0;
    FUN_00dc1270(0);
    _DAT_01bea940 = (float *)0x0;
    local_3c4 = (float *)0x0;
    FUN_00da8810();
    local_3c4 = (float *)&DAT_01bea1d0;
    FUN_00db3e80(0,0);
    local_3c4 = (float *)0x89a593;
    iVar14 = FUN_00a81330();
    if (iVar14 != 0) {
      local_3c4 = (float *)0x89a59e;
      iVar14 = FUN_00a7c8a0();
      if (iVar14 != 0) {
        local_3c4 = &local_250;
        local_250 = 0.0;
        fVar16 = (float10)fpatan((float10)*(float *)(iVar14 + 0x40) - (float10)local_3b0[0x124],
                                 (float10)*(float *)(iVar14 + 0x48) - (float10)local_3b0[0x126]);
        local_24c = (float)fVar16;
        local_248 = 0;
        (**(code **)(*piVar15 + 0x88))();
      }
    }
    local_3c4 = (float *)0x0;
    iVar14 = FUN_00a94ce0();
    if (iVar14 != 0) {
      param_1[0xc] = 1.68156e-44;
      param_1[0xd] = 0.0;
      local_3c4 = (float *)0x89a617;
      iVar14 = FUN_00a81330();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x0;
        FUN_00a7c970();
      }
    }
    break;
  case 1.26117e-44:
    if (param_1[0xd] == 0.0) {
      local_3c4 = (float *)0x3f800000;
      FUN_00aa4080(0x1ce,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000);
      local_3c4 = (float *)0x41700000;
      FUN_00da8810();
      local_3c4 = (float *)0x0;
      FUN_00dc1270(0x41700000);
      local_3c4 = (float *)&DAT_01bea1d0;
      FUN_00db3e80(0x41700000,1);
      local_3c4 = param_2;
      _DAT_01bea9a0 = 0;
      FUN_00869760();
      param_1[0x84] = (float)piVar15[0x10];
      param_1[0x85] = (float)piVar15[0x11];
      param_1[0x86] = (float)piVar15[0x12];
      param_1[0x87] = (float)piVar15[0x13];
      FUN_00869630(param_2);
      param_1[0xd] = (float)((int)param_1[0xd] + 1);
    }
    else if (param_1[0xd] != 1.4013e-45) break;
    local_3c4 = (float *)0x89a1c7;
    FUN_00a92f90();
    local_3c4 = (float *)0x89a1d0;
    FUN_00e26e90();
    local_3c4 = (float *)0x0;
    FUN_00e22f10();
    local_3c4 = (float *)0x0;
    iVar14 = FUN_00a94ce0();
    if (iVar14 != 0) {
      local_3c4 = (float *)0x16;
      param_1[0xc] = 1.4013e-44;
      param_1[0xd] = 0.0;
      iVar14 = FUN_00a12210();
      if (iVar14 != 0) {
        local_370 = *(float *)(iVar14 + 0x40);
        local_3c4 = (float *)0x0;
        local_36c = *(float *)(iVar14 + 0x44);
        local_368 = *(float *)(iVar14 + 0x48);
        local_364 = *(float *)(iVar14 + 0x4c);
        FUN_004039a0(0x45,piVar15);
        local_3c4 = &local_370;
        FUN_0041cdb0();
        local_3c4 = local_160;
        FUN_00a8c930(0);
        local_3c4 = (float *)0x0;
        FUN_00e5e080("core_se_hit_kick_mg",&local_370,0,0xffffffff);
      }
      piVar15[0xf86] = 1;
      local_3c4 = (float *)0x89a281;
      FUN_00b7aa80();
    }
    local_3c4 = (float *)0x41200000;
    iVar14 = FUN_00a952e0(0);
    if (iVar14 != 0) {
      local_3c4 = (float *)0x3c23d70a;
      FUN_00b7ab80(0x41f00000);
    }
    local_3c4 = (float *)0x0;
    iVar14 = FUN_00a959f0();
    local_3c4 = local_180;
    local_3ac = (float *)((float)iVar14 * 0.04347826);
    pfVar13 = (float *)FUN_00a925a0();
    local_3c4 = &local_300;
    local_300 = (float)local_3ac * *pfVar13 + param_1[0x84];
    local_2fc = pfVar13[1] * (float)local_3ac + param_1[0x85];
    local_2f8 = pfVar13[2] * (float)local_3ac + param_1[0x86];
    local_2f4 = pfVar13[3] * (float)local_3ac + param_1[0x87];
    (**(code **)(*piVar15 + 0x6c))();
    break;
  case 1.4013e-44:
    if (param_1[0xd] == 0.0) {
      local_3c4 = (float *)0x3f800000;
      FUN_00aa4080(0x1cf,0,0,0x3f800000,0x8000000,0xbf800000);
      param_1[0xd] = (float)((int)param_1[0xd] + 1);
    }
    else if (param_1[0xd] != 1.4013e-45) break;
    if (piVar15 != (int *)0x0) {
      local_3c4 = (float *)0x89a391;
      iVar14 = FUN_00a92f90();
      if (iVar14 != 0) {
        local_3c4 = (float *)0x0;
        FUN_00a92f90();
        FUN_00404b90();
      }
    }
    local_3c4 = (float *)0x0;
    iVar14 = FUN_00a94ce0();
    if (iVar14 != 0) {
      param_1[0xc] = 1.12104e-44;
      param_1[0xd] = 0.0;
      _DAT_01bea9a0 = 0;
      local_3c4 = (float *)0x89a3ce;
      FUN_00b7aa80();
    }
    break;
  case 1.68156e-44:
    local_3c4 = (float *)0x89a63e;
    FUN_00b7aa80();
    local_3c4 = (float *)0x89a649;
    FUN_008e6d00();
    pfVar13 = local_3b0;
    local_3c4 = (float *)0x1;
    pfVar12 = local_3b0 + 0x124;
    FUN_008e4580(pfVar12);
    if (*(int *)(piVar15[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(piVar15[0x1d9] + 0x104) = 0;
    }
    local_3c4 = (float *)0x1;
    FUN_008e6c60();
    local_3c4 = (float *)0x6;
    FUN_008e5c50();
    pfVar27 = pfVar12;
    if (((*pfVar12 == 0.0) && (pfVar13[0x125] == 0.0)) && (pfVar13[0x126] == 0.0)) {
      pfVar27 = (float *)(piVar15 + 0x10);
    }
    local_3c4 = (float *)0x1;
    FUN_008e4580(pfVar27);
    local_3c4 = (float *)0x89a6e1;
    FUN_00da8ea0();
    if ((param_1[0xe] != 1.96182e-44) && (param_1[0xe] != 1.82169e-44)) {
      _DAT_01bea534 = param_1[0x88];
      local_3c4 = (float *)param_1[0x88];
      FUN_00da10b0();
    }
    uVar10 = 0x41c80000;
    local_3a8 = (float *)0x41c80000;
    if (param_1[0xe] == 1.68156e-44) {
      uVar10 = 0x40a00000;
      local_3a8 = (float *)0x40a00000;
    }
    local_3c4 = (float *)0x0;
    FUN_00dc1270(uVar10);
    _DAT_01bea940 = local_3a8;
    local_3c4 = local_3a8;
    FUN_00da8810();
    local_3c4 = (float *)&DAT_01bea1d0;
    FUN_00db3e80(local_3a8,1);
    if (((*pfVar12 == 0.0) && (pfVar13[0x125] == 0.0)) && (pfVar13[0x126] == 0.0)) {
      local_3b0[0xfb] = 1.469375e-39;
    }
    else {
      local_3b0[0xfb] = 1.469368e-39;
    }
    local_3c4 = (float *)0x64;
    FUN_00d82510(1);
    piVar15[0xf87] = 1;
    local_3b0[0x18a] = 0.0;
    local_3b0[0x1a4] = 0.0;
    local_320 = (float)piVar15[0x10];
    local_31c = (float)piVar15[0x11];
    local_318 = (float)piVar15[0x12];
    local_314 = piVar15[0x13];
    local_3c4 = (float *)0x3f800000;
    pfVar13 = (float *)FUN_00a8b8a0(local_1e0);
    local_350 = (float)piVar15[0x10] + *pfVar13;
    local_34c = pfVar13[1] + (float)piVar15[0x11];
    local_348 = pfVar13[2] + (float)piVar15[0x12];
    local_344 = pfVar13[3] + (float)piVar15[0x13];
    local_3c4 = (float *)0x89a84c;
    iVar14 = FUN_00a81330();
    if (iVar14 != 0) {
      local_3c4 = (float *)0x89a857;
      iVar14 = FUN_00a7c8a0();
      if (iVar14 != 0) {
        local_350 = *(float *)(iVar14 + 0x40);
        local_348 = *(float *)(iVar14 + 0x48);
        local_344 = *(float *)(iVar14 + 0x4c);
      }
    }
    local_3c4 = local_2d0;
    local_34c = local_31c;
    local_2d0[0] = 0.0;
    local_2d0[1] = 1.0;
    local_2d0[2] = 0.0;
    FUN_00db6410(local_2c0,&local_320,&local_350);
    local_3c4 = (float *)-(local_2b8 /
                          SQRT(local_298 * local_298 + local_2a0 * local_2a0 + local_29c * local_29c
                              ));
    fVar16 = (float10)FUN_00ddbaa0();
    local_340 = 0.0;
    local_338 = 0.0;
    local_3c4 = &local_340;
    local_33c = (float)fVar16;
    (**(code **)(*piVar15 + 0x88))();
    piVar15[0x1504] = piVar15[0x25];
  }
  local_3c4 = (float *)0x89a943;
  iVar14 = FUN_00a81330();
  if (iVar14 != 0) {
    local_3c4 = (float *)0x89a952;
    iVar14 = FUN_00a7c8a0();
    if (iVar14 != 0) {
      local_3c4 = (float *)0x0;
      iVar14 = FUN_00a12210();
      fStack_360 = *(float *)(iVar14 + 0x40);
      fStack_35c = *(float *)(iVar14 + 0x44);
      fStack_358 = *(float *)(iVar14 + 0x48);
      fStack_354 = *(float *)(iVar14 + 0x4c);
      local_320 = SQRT(*(float *)(iVar14 + 0x14) * *(float *)(iVar14 + 0x14) +
                       *(float *)(iVar14 + 0x10) * *(float *)(iVar14 + 0x10) +
                       *(float *)(iVar14 + 0x18) * *(float *)(iVar14 + 0x18));
      local_31c = SQRT(*(float *)(iVar14 + 0x20) * *(float *)(iVar14 + 0x20) +
                       *(float *)(iVar14 + 0x24) * *(float *)(iVar14 + 0x24) +
                       *(float *)(iVar14 + 0x28) * *(float *)(iVar14 + 0x28));
      fVar11 = SQRT(*(float *)(iVar14 + 0x38) * *(float *)(iVar14 + 0x38) +
                    *(float *)(iVar14 + 0x34) * *(float *)(iVar14 + 0x34) +
                    *(float *)(iVar14 + 0x30) * *(float *)(iVar14 + 0x30));
      local_3ac = (float *)(*(float *)(iVar14 + 0x28) / fVar11);
      local_3a4 = (float *)(*(float *)(iVar14 + 0x38) / fVar11);
      local_3c4 = (float *)-(*(float *)(iVar14 + 0x18) / fVar11);
      fVar16 = (float10)FUN_00ddbaa0();
      fVar19 = (float10)fpatan((float10)(float)local_3ac,(float10)(float)local_3a4);
      local_370 = (float)fVar19;
      local_36c = (float)fVar16;
      fVar16 = (float10)fpatan((float10)*(float *)(iVar14 + 0x14) / (float10)local_31c,
                               (float10)*(float *)(iVar14 + 0x10) / (float10)local_320);
      local_368 = (float)fVar16;
      local_340 = 0.0;
      local_33c = 1.0;
      local_338 = 0.0;
      FUN_00ddc1d0(afStack_220,&local_370,5);
      local_3c4 = afStack_220;
      pfVar13 = &local_340;
      pfVar12 = &local_300;
      D3DXVec3TransformNormal();
      local_34c = 0.0;
      local_348 = 0.0;
      local_344 = 1.0;
      FUN_00ddc1d0(afStack_22c,&fStack_37c,5);
      pfVar27 = afStack_22c;
      pfVar25 = &local_34c;
      puVar23 = auStack_1ec;
      D3DXVec3TransformNormal();
      fStack_358 = 1.0;
      fStack_354 = 0.0;
      local_350 = 0.0;
      FUN_00ddc1d0(auStack_238,&local_388,5);
      puVar22 = auStack_238;
      pfVar21 = &fStack_358;
      pfVar20 = &fStack_2e8;
      D3DXVec3TransformNormal();
      local_3b0 = (float *)(local_320 * 1.5 + local_380);
      local_3ac = (float *)(local_31c * 1.5 + fStack_37c);
      local_3a8 = (float *)(local_318 * 1.5 + local_378);
      local_3c4 = (float *)(local_384 - (fStack_324 * 1.5 + local_384));
      fVar1 = local_380 - (float)local_3b0;
      fVar11 = fStack_37c - (float)local_3ac;
      FUN_00ddcfe0(&uStack_244,&local_2f4,0);
      puVar7 = &uStack_244;
      D3DXVec3TransformNormal(&local_3c4,&local_3c4);
      local_364 = fStack_394;
      local_380 = (float)pfVar27 * -1.0;
      fStack_37c = (float)pfVar12 * -1.0;
      local_378 = (float)pfVar13 * -1.0;
      fStack_374 = (float)local_3c4 * -1.0;
      fVar2 = local_378 * local_378 + fStack_37c * fStack_37c + local_380 * local_380;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_380,&local_380);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_380 = 0.0;
        fStack_37c = 1.0;
        local_378 = 0.0;
      }
      local_3a4 = local_3c4;
      local_3b0 = pfVar27;
      local_3ac = pfVar12;
      local_3a8 = pfVar13;
      FUN_00ddcfe0(&local_250,&local_300,0xbfc90fdb);
      D3DXVec3TransformNormal(&local_3b0,&local_3b0,&local_250);
      FUN_00ddcfe0(afStack_25c,&local_38c,0);
      D3DXVec3TransformNormal(&stack0xfffffc44,&stack0xfffffc44,afStack_25c);
      local_338 = (float)puVar7 + (float)puVar23;
      fStack_334 = (float)pfVar20 + (float)pfVar25;
      local_330 = (float)pfVar21 + (float)pfVar27;
      fStack_32c = (float)puVar22 + (float)pfVar12;
      fStack_358 = local_338 + (float)pfVar13;
      fStack_354 = fStack_334 + (float)local_3c4;
      local_350 = local_330 + fVar1;
      local_34c = fStack_32c + fVar11;
      FUN_00db6410(&fStack_308,&local_338,&fStack_358,&fStack_398);
      fVar16 = (float10)local_300;
      local_368 = (float)SQRT(fVar16 * fVar16 +
                              (float10)fStack_308 * (float10)fStack_308 +
                              (float10)fStack_304 * (float10)fStack_304);
      fVar19 = (float10)fStack_2f0;
      local_364 = (float)SQRT(fVar19 * fVar19 +
                              (float10)local_2f8 * (float10)local_2f8 +
                              (float10)local_2f4 * (float10)local_2f4);
      fVar17 = (float10)fStack_2e0;
      fVar18 = SQRT(fVar17 * fVar17 +
                    (float10)fStack_2e8 * (float10)fStack_2e8 +
                    (float10)fStack_2e4 * (float10)fStack_2e4);
      fVar19 = (float10)fpatan(fVar19 / fVar18,fVar17 / fVar18);
      local_388 = (float)fVar19;
      fVar16 = (float10)FUN_00ddbaa0((float)-(fVar16 / fVar18));
      fVar19 = (float10)fpatan((float10)fStack_304 / (float10)local_364,
                               (float10)fStack_308 / (float10)local_368);
      param_1[0x1c] = (float)puVar7 + (float)puVar23;
      param_1[0x1d] = (float)pfVar20 + (float)pfVar25;
      param_1[0x1e] = (float)pfVar21 + (float)pfVar27;
      param_1[0x1f] = (float)puVar22 + (float)pfVar12;
      param_1[0x20] = local_388;
      param_1[0x21] = (float)fVar16;
      param_1[0x22] = (float)fVar19;
      param_1[0x23] = fStack_37c;
      param_1[0x78] = param_1[0x1c];
      param_1[0x79] = param_1[0x1d];
      param_1[0x7a] = param_1[0x1e];
      param_1[0x7b] = param_1[0x1f];
      param_1[0x7c] = param_1[0x20];
      param_1[0x7d] = param_1[0x21];
      param_1[0x7e] = param_1[0x22];
      param_1[0x7f] = param_1[0x23];
      StateMachineNode::qteSafeCheck(param_2);
      return;
    }
  }
  param_1[0x1c] = param_1[0x78];
  local_3c4 = param_2;
  param_1[0x1d] = param_1[0x79];
  param_1[0x1e] = param_1[0x7a];
  param_1[0x1f] = param_1[0x7b];
  param_1[0x20] = param_1[0x7c];
  param_1[0x21] = param_1[0x7d];
  param_1[0x22] = param_1[0x7e];
  param_1[0x23] = param_1[0x7f];
  StateMachineNode::qteSafeCheck();
  return;
}

