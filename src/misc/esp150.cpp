// src/misc/esp150.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0930..009F6DF0, 6 functions

#include "types.h"

// 009D0930  esp150::vf10  size=1  [class]
void esp150::vf10(void)

{
  return;
}

// 009D0940  esp150::thunk_vf14  size=5  [class]
void __fastcall esp150::thunk_vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4c0) != 0) {
    uVar2 = 0x50000;
    iVar1 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x4c4);
    FUN_009d5aa0(iVar1,uVar2,iVar3);
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  Spline<float>::Spline<float>();
  return;
}

// 009EEBC0  esp150::vf04  size=898  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
esp150::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  int local_2c;
  int local_28;
  int local_1c;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_00edb050();
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 == (undefined4 *)0x0)) {
LAB_009eece8:
    *(undefined4 *)(param_1 + 0x500) = 0;
    *(undefined2 *)(param_1 + 0x51c) = 0;
    *(undefined4 *)(param_1 + 0x518) = 0;
    *(undefined4 *)(param_1 + 0x508) = 0;
  }
  else {
    psVar1 = (short *)*puVar4;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar1 == (short *)0x0) goto LAB_009eece8;
    switch((int)*psVar1) {
    case 0:
      *(undefined4 *)(param_1 + 0x500) = 0;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x500) = 2;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x500) = 1;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x500) = 4;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x500) = 3;
      break;
    default:
      FUN_009cca90(param_1,&DAT_0165b6c0,(int)*psVar1);
      return 0;
    }
    *(short *)(param_1 + 0x51c) = psVar1[1];
    *(int *)(param_1 + 0x518) = (int)psVar1[2];
    *(short *)(param_1 + 0x508) = (short)*(char *)((int)psVar1 + 0x13);
    *(short *)(param_1 + 0x50a) = (short)(char)psVar1[10];
    local_1c = (int)*(char *)((int)psVar1 + 0x15);
    local_4 = (int)(char)psVar1[0xb];
    local_2c = *(char *)((int)psVar1 + 0x17) + -1;
    local_28 = local_2c;
  }
  DAT_01be1f54 = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0xd0), puVar4 != (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)*puVar4;
    if ((undefined4 *)((int)puVar4 + 0xfU & 0xfffffff0) != puVar4) {
      uVar5 = FUN_00f59ed0(0xd);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (puVar4 != (undefined4 *)0x0) {
      DAT_01be1f58 = (uint)((float)puVar4[3] != 0.0);
      DAT_01be1f64 = puVar4[1];
      DAT_01be1f68 = puVar4[2];
      DAT_01be1f6c = puVar4[3];
      DAT_01be1f60 = *puVar4;
      _DAT_01be1f74 = puVar4[5];
      _DAT_01be1f78 = puVar4[6];
      _DAT_01be1f7c = puVar4[7];
      _DAT_01be1f70 = puVar4[4];
      if ((float)puVar4[8] <= 0.0) {
        DAT_01be1f80 = 0x3f800000;
      }
      else {
        DAT_01be1f80 = puVar4[8];
      }
      if ((float)puVar4[9] <= 0.0) {
        DAT_01be1f84 = 0x3f800000;
      }
      else {
        DAT_01be1f84 = puVar4[9];
      }
      if ((float)puVar4[10] <= 0.0) {
        DAT_01be1f88 = 0x3f800000;
      }
      else {
        DAT_01be1f88 = puVar4[10];
      }
      DAT_01be1f8c = 0x3f800000;
      if (0.0 < (float)puVar4[0xb]) {
        DAT_01be1f8c = puVar4[0xb];
      }
      _DAT_01be1f90 = puVar4[0xc];
      goto LAB_009eee8e;
    }
  }
  DAT_01be1f58 = 0;
  DAT_01be1f60 = 0;
  DAT_01be1f64 = 0;
  DAT_01be1f68 = 0;
  DAT_01be1f6c = 0;
  _DAT_01be1f70 = 0;
  _DAT_01be1f74 = 0;
  _DAT_01be1f78 = 0;
  _DAT_01be1f7c = 0;
  DAT_01be1f80 = 0;
  DAT_01be1f84 = 0;
  DAT_01be1f88 = 0;
  DAT_01be1f8c = 0;
LAB_009eee8e:
  _DAT_01be1f5c = 0;
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x500) = 5;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar6 != (uint *)0x0)) {
    uVar2 = *puVar6;
    if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
      uVar5 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if ((uVar2 != 0) && (*(short *)(uVar2 + 0x14) == 0)) {
      local_c = 1;
    }
  }
  local_8 = 1;
  iVar3 = FUN_00f38b30(&local_2c);
  if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
      (iVar3 = FUN_00a7c800(), iVar3 != 0)) &&
     ((*(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4, *(short *)(param_1 + 0x508) == 0
      || (iVar3 = FUN_009ead80(), iVar3 != 0)))) {
    return 1;
  }
  return 0;
}

// 009F1880  esp150::vf08  size=458  [class]
void __fastcall esp150::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  undefined4 uVar19;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar2 = FUN_00a7c930();
    iVar1 = FUN_00a7c9b0(uVar2);
    if (iVar1 == 0) {
      puVar18 = &DAT_0165b7e8;
    }
    else {
      puVar18 = &DAT_0165b808;
    }
    FUN_009cca90(param_1,puVar18);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  piVar3 = (int *)FUN_00a7c800();
  if (piVar3 == (int *)0x0) {
    FUN_009cca90(param_1,&DAT_0165b7b0,iVar1);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) && (*(short *)(param_1 + 0x508) != 0)) {
    if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffbff;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x800) != 0) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffff7ff;
    }
    if (*(short *)(param_1 + 0x508) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x504);
      uVar19 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0x3f800000;
      iVar1 = (int)*(short *)(param_1 + 0x50a);
      uVar12 = 0xff;
      uVar11 = 0;
      uVar6 = *(uint *)(param_1 + 0x6c) | 0x40;
      uVar10 = *(undefined4 *)(param_1 + 0x74);
      uVar9 = *(undefined4 *)(param_1 + 0x78);
      uVar8 = 0;
      uVar7 = 0;
      uVar4 = FUN_00a81330(0,0,uVar9,uVar10,uVar6,iVar1,uVar2,0,0xff,0x3f800000,0,0,0,0,0);
      FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x510),
                   *(undefined4 *)(param_1 + 0x518),param_1 + 0x7c,uVar4,uVar7,uVar8,uVar9,uVar10,
                   uVar6,iVar1,uVar2,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar19);
    }
    *(undefined2 *)(param_1 + 0x508) = 0;
  }
  iVar1 = FUN_009d5b00(param_1);
  if (iVar1 == 0) {
    pcVar5 = *(code **)(*piVar3 + 0x20);
  }
  else {
    pcVar5 = *(code **)(*piVar3 + 0x1c);
  }
  (*pcVar5)();
  if (500.0 <= SQRT((float)piVar3[0x52] * (float)piVar3[0x52] +
                    (float)piVar3[0x50] * (float)piVar3[0x50] +
                    (float)piVar3[0x51] * (float)piVar3[0x51])) {
    iVar1 = FUN_009dfb70(piVar3);
    *(int *)(param_1 + 0x50c) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 0x20))();
    }
  }
  piVar3[0xd9] = piVar3[0xd9] | 0x10000;
  FUN_009eef60(piVar3);
  return;
}

// 009F6D30  esp150::esp150  size=18  [class]
undefined4 * __fastcall esp150::esp150(undefined4 *param_1)

{
  ModelShaderWtrJackModule::ModelShaderWtrJackModule();
  *param_1 = vftable;
  return param_1;
}

// 009F6DF0  esp150::vf00  size=43  [class]
undefined4 __thiscall esp150::vf00(undefined4 param_1,byte param_2)

{
  Spline<float>::Spline<float>();
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

