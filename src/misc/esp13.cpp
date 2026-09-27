// src/misc/esp13.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F16B00..00F40770, 3 functions

#include "types.h"

// 00F16B00  esp13::esp13  size=94  [class]
undefined4 * __fastcall esp13::esp13(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  param_1[0x117] = 0;
  param_1[0x11a] = 0;
  param_1[0x116] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  return param_1;
}

// 00F2FBC0  esp13::vf04  size=822  [class]
undefined4 __thiscall esp13::vf04(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = param_2;
  if ((*(int *)(param_2 + 4) == 0) ||
     (puVar5 = (uint *)(*(int *)(param_2 + 4) + 0x30), puVar5 == (uint *)0x0)) {
    param_2 = 0;
  }
  else {
    param_2 = *puVar5;
    if ((param_2 + 0xf & 0xfffffff0) != param_2) {
      uVar7 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
  }
  if (0 < *(short *)(param_2 + 0x2c)) {
    FUN_009cca90(param_1,&DAT_016db4f8);
    return 0;
  }
  iVar6 = cEspModel::vf04(iVar6,param_3,param_4);
  if (iVar6 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (uint *)0x0)) {
    uVar3 = *puVar5;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar7 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if (uVar3 != 0) {
      *(int *)(param_1 + 0x480) = (int)*(short *)(uVar3 + 8);
      *(float *)(param_1 + 0x484) = (float)(int)*(short *)(uVar3 + 10) / 100.0;
      fVar4 = (float)(int)*(short *)(uVar3 + 0xe) / 360.0;
      *(float *)(param_1 + 0x490) = (fVar4 + fVar4) * 3.1415927;
      cVar1 = *(char *)(uVar3 + 0x10);
      if (cVar1 == '\x01') {
        *(undefined4 *)(param_1 + 0x4b0) = 1;
      }
      else {
        if (cVar1 == '\x02') {
          *(undefined4 *)(param_1 + 0x4b0) = 1;
          goto LAB_00f2fd34;
        }
        if (cVar1 != '\x03') goto LAB_00f2fd34;
      }
      *(undefined4 *)(param_1 + 0x4b4) = 1;
    }
  }
LAB_00f2fd34:
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar5 != (uint *)0x0)) {
    uVar3 = *puVar5;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar7 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if ((uVar3 != 0) && (iVar6 = FUN_00ec94a0(uVar3,param_1 + 0x114), iVar6 == 0)) {
      return 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x480);
  if (iVar6 == 2) {
    *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  if (iVar6 < 3) {
    if (100.0 < *(float *)(param_1 + 0x484)) {
      FUN_009cca90(param_1,&DAT_016db53c);
      return 0;
    }
    sVar2 = *(short *)(param_1 + 0x428);
    if (sVar2 == 0x67) {
      if ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) {
        FUN_009cca90(param_1,&DAT_016db570);
        return 0;
      }
      if (*(float *)(param_1 + 0x484) != 0.0) {
        FUN_009cca90(param_1,&DAT_016db598);
        return 0;
      }
      *(undefined2 *)(param_1 + 0x428) = 0x68;
    }
    else {
      if (sVar2 == 0x69) {
        FUN_009cca90(param_1,&DAT_016db5cc);
        return 0;
      }
      if (sVar2 == 0x6a) {
        FUN_009cca90(param_1,&DAT_016db600);
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    if ((((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) || (*(float *)(param_1 + 0x484) != 0.0)) &&
       (iVar6 = FUN_00ed5150(), iVar6 != 0)) {
      *(undefined4 *)(param_1 + 0x4b8) = 1;
    }
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    if (((*(short *)(param_1 + 0x428) == 5) || ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0)) ||
       (0xfd < *(ushort *)(param_2 + 4))) {
      *(undefined4 *)(param_1 + 0x4bc) = 1;
    }
    return 1;
  }
  FUN_009cca90(param_1,&DAT_016db528,iVar6);
  return 0;
}

// 00F40770  esp13::vf00  size=72  [class]
undefined4 * __thiscall esp13::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

