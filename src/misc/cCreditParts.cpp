// src/misc/cCreditParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDD000..00D37460, 8 functions

#include "mgrr.h"
#include "cCreditParts.h"

// 00CDD000  cCreditParts::~cCreditParts  size=100  [class]
void __fastcall cCreditParts::~cCreditParts(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  if (param_1[0x42] != 0) {
    (**(code **)(param_1[0x1c] + 8))(0,0,0);
  }
  cEspControler::~cEspControler();
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CF39C0  cCreditParts::vf00  size=30  [class]
undefined4 __thiscall cCreditParts::vf00(undefined4 param_1,byte param_2)

{
  ~cCreditParts();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D094B0  cCreditParts::create  size=663  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cCreditParts::create(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [284];
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    iVar3 = FUN_00f98aa0();
    *(float *)(param_1 + 0x58) =
         (float)iVar3 * 0.0013888889 * _DAT_018b5704 + *(float *)(param_1 + 0x58);
    fVar1 = *(float *)(*(int *)(param_1 + 0x18) + 0x44);
    iVar3 = FUN_00f98aa0();
    fVar2 = (float)iVar3 * 0.0013888889 * 360.0 + fVar1;
    iVar3 = FUN_00f98aa0();
    if (((float)iVar3 * 0.0013888889 * 800.0 <= fVar2) ||
       (iVar3 = FUN_00f98aa0(), fVar2 <= (float)iVar3 * 0.0013888889 * -80.0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    if (*(int *)(param_1 + 0x120) != iVar3) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(int *)(*(int *)(param_1 + 0x14) + 4) = iVar3;
      }
      *(int *)(param_1 + 0x120) = iVar3;
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        if (iVar3 != 0) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x101;
          FUN_00e01ca0();
          uVar6 = FUN_00a81330();
          FUN_00e020f0(uVar6);
          FUN_00dffb30(param_1 + 0x70);
          if (DAT_018b9174 == 0xf32) {
            uVar6 = 0xf05;
          }
          else if (DAT_018b9174 == 0xf34) {
            uVar6 = 0xf06;
          }
          else {
            uVar6 = 0xf04;
          }
          FUN_00e01540(uVar6,7,local_120);
          *(undefined4 *)(param_1 + 0x60) = 1;
        }
      }
      else if (*(int *)(param_1 + 0x60) == 1) {
        iVar4 = FUN_00f98aa0();
        iVar5 = FUN_00f98a90();
        local_130 = (float)iVar5 * 0.00078125 * 640.0;
        local_12c = (float)iVar4 * 0.0013888889 * 16.0 + fVar2;
        local_128 = 0;
        local_124 = local_134;
        FUN_00d9fab0(&local_140,&local_130);
        iVar4 = FUN_00a81330();
        if ((iVar4 != 0) && (iVar4 = FUN_00a7c800(), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x40) = local_140;
          *(undefined4 *)(iVar4 + 0x44) = local_13c;
          *(undefined4 *)(iVar4 + 0x48) = local_138;
        }
        if (iVar3 == 0) {
          (**(code **)(*(int *)(param_1 + 0x70) + 8))(0,0,0);
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x100;
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) & 0xfffffffe;
          *(undefined4 *)(param_1 + 0x60) = 2;
        }
      }
    }
    iVar3 = FUN_00f98aa0();
    if ((float)iVar3 * 0.0013888889 * -480.0 <= fVar1) {
      return;
    }
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + _DAT_018b5708;
    if (*(int *)(param_1 + 0x5c) != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 3;
    return;
  }
  return;
}

// 00D1BB80  cCreditParts::vf08  size=470  [class]
void __fastcall cCreditParts::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_90 [140];
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x88);
  }
  *(uint *)(param_1 + 0x20) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x8a);
  }
  *(uint *)(param_1 + 0x24) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x8c);
  }
  *(uint *)(param_1 + 0x28) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x8e);
  }
  *(uint *)(param_1 + 0x2c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x90);
  }
  *(uint *)(param_1 + 0x30) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x92);
  }
  *(uint *)(param_1 + 0x34) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x9c);
  }
  *(uint *)(param_1 + 0x38) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0x9e);
  }
  *(uint *)(param_1 + 0x3c) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xa0);
  }
  *(uint *)(param_1 + 0x40) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xa2);
  }
  *(uint *)(param_1 + 0x44) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xa4);
  }
  *(uint *)(param_1 + 0x48) = uVar5;
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb4);
  }
  *(uint *)(param_1 + 0x4c) = uVar5;
  iVar3 = FUN_00f98aa0();
  *(undefined4 *)(param_1 + 0x124) = 0;
  fVar2 = (float)iVar3 * 0.0013888889 * 480.0;
  *(float *)(param_1 + 0x58) = fVar2;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = 0;
    *(float *)(*(int *)(param_1 + 0x18) + 0x44) = fVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar3 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x34) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar1 != (int *)0x0)) &&
     ((iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 == 1 &&
      (iVar3 = FUN_00cf7390(piVar1 + 10,0x14b9eca8), iVar3 == 0)))) {
    FUN_00dd5650(&DAT_016b9264,0x14b9eca8);
  }
  FUN_0040b190();
  uVar4 = FUN_00a82090("EffDummy",0x700000,local_90);
  FUN_00a7c970(uVar4);
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}

// 00D36CC0  FUN_00d36cc0  size=214  [callgraph]
int __thiscall FUN_00d36cc0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
      piVar2 = (int *)0x0;
    }
    FUN_00d1fa60(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00D36DA0  cCreditParts::setLineData  size=1444  [class]
void __thiscall
cCreditParts::setLineData(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  float10 fVar6;
  undefined4 uVar7;
  int *local_38;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x124) = param_3;
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x24) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x3c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x40) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x40) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x44) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x44) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x48) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x48) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x4c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x4c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  if (0 < DAT_01dc13f8) {
    DAT_01dc13f8 = DAT_01dc13f8 + -1;
    goto LAB_00d37311;
  }
  local_38 = param_2;
  switch(*param_2) {
  case 0:
    break;
  case 1:
    uVar3 = 0;
    puVar4 = (uint *)(param_1 + 0x20);
    bVar5 = true;
    do {
      local_38 = local_38 + 1;
      if ((bVar5) && (*local_38 != -1)) {
        FUN_00ce4e80(*puVar4,*local_38,0,0xffffffff);
        iVar1 = *(int *)(param_1 + 0x18);
        if ((iVar1 != 0) &&
           ((*puVar4 < *(uint *)(iVar1 + 0x80) &&
            (iVar1 = *puVar4 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)))) {
          *(undefined4 *)(iVar1 + 0x3b0) = 1;
        }
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
      bVar5 = uVar3 < 5;
    } while ((int)uVar3 < 5);
    iVar1 = *(int *)(param_1 + 0x18);
    if ((((iVar1 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar1 + 0x80))) &&
        (iVar2 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar1 + 0x7c), iVar2 != 0)) &&
       (((*(int *)(iVar2 + 0x3b0) != 0 &&
         (uVar3 = *(uint *)(param_1 + 0x24), uVar3 < *(uint *)(iVar1 + 0x80))) &&
        ((iVar1 = uVar3 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
         (*(int *)(iVar1 + 0x3b0) != 0)))))) {
      fVar6 = (float10)FUN_00d36cc0(uVar3);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x20),(float)fVar6);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar1 + 0x80))) &&
       ((iVar2 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar1 + 0x7c), iVar2 != 0 &&
        ((((*(int *)(iVar2 + 0x3b0) != 0 &&
           (uVar3 = *(uint *)(param_1 + 0x2c), uVar3 < *(uint *)(iVar1 + 0x80))) &&
          (iVar1 = uVar3 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x3b0) != 0)))))) {
      fVar6 = (float10)FUN_00d36cc0(uVar3);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x30),(float)fVar6);
    }
    if ((param_2[7] != 0) && (param_2[3] != -1)) {
      FUN_00ce4e80(*(undefined4 *)(param_1 + 0x4c),param_2[3],0,0xffffffff);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),0);
      uVar7 = *(undefined4 *)(param_1 + 0x4c);
LAB_00d370b6:
      FUN_00cb2310(uVar7,1);
    }
    goto LAB_00d370bd;
  case 2:
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x34),param_2[3]);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),1);
    FUN_00cc4300();
    DAT_01dc13f8 = DAT_01dc13f8 + 1;
    break;
  case 3:
    uVar3 = 0;
    puVar4 = (uint *)(param_1 + 0x38);
    bVar5 = true;
    do {
      local_38 = local_38 + 1;
      if ((bVar5) && (*local_38 != -1)) {
        FUN_00ce4e80(*puVar4,*local_38,0,0xffffffff);
        iVar1 = *(int *)(param_1 + 0x18);
        if ((iVar1 != 0) &&
           ((*puVar4 < *(uint *)(iVar1 + 0x80) &&
            (iVar1 = *puVar4 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)))) {
          *(undefined4 *)(iVar1 + 0x3b0) = 1;
        }
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
      bVar5 = uVar3 < 5;
    } while ((int)uVar3 < 5);
    iVar1 = *(int *)(param_1 + 0x18);
    if (((((iVar1 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar1 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar1 + 0x7c), iVar2 != 0)) &&
        ((*(int *)(iVar2 + 0x3b0) != 0 &&
         (uVar3 = *(uint *)(param_1 + 0x3c), uVar3 < *(uint *)(iVar1 + 0x80))))) &&
       ((iVar1 = uVar3 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
        (*(int *)(iVar1 + 0x3b0) != 0)))) {
      fVar6 = (float10)FUN_00d36cc0(uVar3);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x38),(float)fVar6);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if ((((iVar1 != 0) && (*(uint *)(param_1 + 0x48) < *(uint *)(iVar1 + 0x80))) &&
        ((iVar2 = *(uint *)(param_1 + 0x48) * 0x400 + *(int *)(iVar1 + 0x7c), iVar2 != 0 &&
         (((*(int *)(iVar2 + 0x3b0) != 0 &&
           (uVar3 = *(uint *)(param_1 + 0x44), uVar3 < *(uint *)(iVar1 + 0x80))) &&
          (iVar1 = uVar3 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)))))) &&
       (*(int *)(iVar1 + 0x3b0) != 0)) {
      fVar6 = (float10)FUN_00d36cc0(uVar3);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x48),(float)fVar6);
    }
    if ((param_2[7] != 0) && (param_2[3] != -1)) {
      FUN_00ce4e80(*(undefined4 *)(param_1 + 0x4c),param_2[3],0,0xffffffff);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),0);
      uVar7 = *(undefined4 *)(param_1 + 0x4c);
      goto LAB_00d370b6;
    }
LAB_00d370bd:
    iVar1 = FUN_00f98aa0();
    *(float *)(param_1 + 0x54) =
         (float)iVar1 * 0.0013888889 * 40.0 * (float)*(int *)(param_1 + 0x50);
    break;
  default:
    FUN_00dd5650(&DAT_016bbe50,*param_2);
  }
  if (param_2[6] != 0) {
    iVar1 = FUN_00f98aa0();
    iVar2 = FUN_00f98a90();
    local_30 = (float)iVar2 * 0.00078125 * 640.0;
    local_2c = (float)iVar1 * 0.0013888889 * 800.0;
    local_28 = 0;
    local_24 = local_14;
    FUN_00d9fab0(&local_20,&local_30);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c800(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0x40) = local_20;
      *(undefined4 *)(iVar1 + 0x44) = local_1c;
      *(undefined4 *)(iVar1 + 0x48) = local_18;
    }
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
LAB_00d37311:
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 2;
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}

// 00D37360  cCreditParts::cCreditParts  size=253  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cCreditParts::cCreditParts(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  puVar5 = (undefined4 *)(param_1 + 8);
  do {
    puVar1 = (undefined4 *)FUN_00dd3500(0x130,&DAT_01b7be50);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[0x16] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 1;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *puVar1 = vftable;
      puVar1[7] = 0;
      puVar1[0x14] = 0xffffffff;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      FUN_00a7c930();
      cEspControler::cEspControler();
      puVar1[0x48] = 0;
      puVar1[0x49] = 0;
      puVar1[3] = "cCreditParts";
      puVar1[2] = 8;
      uVar2 = FUN_00d29960(0x86);
      puVar1[5] = uVar2;
      puVar1[4] = 0;
    }
    *puVar5 = puVar1;
    puVar1[0x14] = uVar4;
    iVar3 = FUN_00f98aa0();
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 1;
    puVar1[0x15] = (float)iVar3 * 0.0013888889 * 40.0 * (float)(int)puVar1[0x14];
  } while (uVar4 < 0x18);
  iVar3 = FUN_00f98aa0();
  _DAT_018b5708 = (float)iVar3 * 0.0013888889 * 40.0 * 24.0;
  return;
}

// 00D37460  FUN_00d37460  size=922  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d37460(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar11;
  float local_8;
  
  iVar5 = FUN_00c20a50();
  if (iVar5 != 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 == 0) {
    iVar5 = cXmlBinary::cXmlBinary_39();
    if (iVar5 == 0) goto LAB_00d37768;
    uVar10 = *(int *)(*(int *)(param_1 + 4) + 8) + *(int *)(*(int *)(param_1 + 4) + 4);
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (DAT_018b9174 == 0xf32) {
      iVar5 = FUN_00f98aa0();
      fVar1 = ((float)iVar5 * 0.0013888889 * 40.0 * (float)(int)(uVar10 - 1) + _DAT_018b5708) *
              -7.183908e-05;
    }
    else if (DAT_018b9174 == 0xf34) {
      iVar5 = FUN_00f98aa0();
      fVar1 = ((float)iVar5 * 0.0013888889 * 40.0 * (float)(int)(uVar10 - 1) + _DAT_018b5708) *
              -7.183908e-05;
    }
    else {
      iVar5 = FUN_00f98aa0();
      fVar1 = ((float)iVar5 * 0.0013888889 * 40.0 * (float)(int)(uVar10 - 1) + _DAT_018b5708) *
              -3.958828e-05;
    }
    *(float *)(param_1 + 0x70) = fVar1;
    *(uint *)(param_1 + 0x78) = uVar10;
    uVar7 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar10 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar10 * 4),&DAT_01b7bd48);
    *(undefined4 *)(param_1 + 0x7c) = uVar7;
    iVar5 = FUN_00f98aa0();
    iVar9 = 0;
    local_8 = (float)iVar5 * 0.0013888889 * 480.0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar5 = 0;
      do {
        *(float *)(*(int *)(param_1 + 0x7c) + iVar9 * 4) = local_8;
        iVar6 = FUN_00f98aa0();
        local_8 = (float)iVar6 * 0.0013888889 * 40.0 + local_8;
        if ((((-1 < iVar9) && (iVar9 < (*(int **)(param_1 + 4))[1])) &&
            (iVar6 = **(int **)(param_1 + 4), iVar6 != 0)) &&
           ((piVar8 = (int *)(iVar6 + iVar5), piVar8 != (int *)0x0 && (*piVar8 == 2)))) {
          iVar6 = FUN_00f98aa0();
          local_8 = (float)iVar6 * 0.0013888889 * 20.0 + local_8;
        }
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + 0x20;
      } while (iVar9 < *(int *)(param_1 + 0x78));
    }
    iVar5 = FUN_00fdbc60();
    fVar11 = extraout_ST0_00;
  }
  else {
    bVar4 = true;
    if (iVar5 == 1) {
      if ((*(int *)(param_1 + 8) != 0) && (*(int *)(*(int *)(param_1 + 8) + 0x1c) == 1)) {
        iVar5 = 0;
        uVar10 = 0;
        do {
          iVar9 = 0;
          if (((-1 < iVar5) && (iVar5 < (*(int **)(param_1 + 4))[1])) &&
             (iVar6 = **(int **)(param_1 + 4), iVar6 != 0)) {
            iVar9 = iVar6 + uVar10;
          }
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + (uint)(DAT_01dc13f8 < 1);
          if (iVar9 != 0) {
            cCreditParts::setLineData
                      (iVar9,*(int *)(param_1 + 0x6c),
                       *(undefined4 *)(*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x6c) * 4));
          }
          uVar10 = uVar10 + 0x20;
          iVar5 = iVar5 + 1;
        } while (uVar10 < 0x300);
        *(undefined4 *)(param_1 + 0x68) = 2;
      }
      goto LAB_00d37768;
    }
    if (iVar5 != 2) goto LAB_00d37768;
    iVar5 = FUN_00e03960();
    fVar1 = *(float *)(iVar5 + 0x7c);
    fVar2 = *(float *)(param_1 + 0x70);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      do {
        iVar9 = iVar5 * 4;
        iVar6 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        *(float *)(*(int *)(param_1 + 0x7c) + iVar6) =
             *(float *)(*(int *)(param_1 + 0x7c) + iVar9) + fVar1 * fVar2;
      } while (iVar5 < *(int *)(param_1 + 0x78));
    }
    piVar8 = (int *)(param_1 + 8);
    iVar5 = 0x18;
    do {
      if (*(int *)(*piVar8 + 0x1c) == 3) {
        iVar9 = *(int *)(param_1 + 0x6c);
        iVar6 = 0;
        if (((-1 < iVar9) && (iVar9 < (*(int **)(param_1 + 4))[1])) &&
           (iVar3 = **(int **)(param_1 + 4), iVar3 != 0)) {
          iVar6 = iVar9 * 0x20 + iVar3;
        }
        iVar9 = iVar9 + (uint)(DAT_01dc13f8 < 1);
        *(int *)(param_1 + 0x6c) = iVar9;
        if (iVar6 != 0) {
          cCreditParts::setLineData
                    (iVar6,iVar9,*(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar9 * 4));
        }
      }
      else {
        bVar4 = false;
      }
      piVar8 = piVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (bVar4) {
      *(undefined4 *)(param_1 + 0x68) = 3;
    }
    FUN_00e03960();
    iVar5 = FUN_00fdbc60();
    fVar11 = extraout_ST0;
  }
  *(float *)(param_1 + 0x74) = (float)(fVar11 - (float10)iVar5);
  _DAT_018b5704 = (float)iVar5;
LAB_00d37768:
  if (*(int *)(param_1 + 0x68) != 0) {
    piVar8 = (int *)(param_1 + 8);
    iVar5 = 0x18;
    do {
      if (*piVar8 != 0) {
        iVar9 = *piVar8;
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + *(int *)(iVar9 + 0x124) * 4);
        if (*(int *)(iVar9 + 0x18) != 0) {
          *(undefined4 *)(*(int *)(iVar9 + 0x18) + 0x40) = 0;
          *(undefined4 *)(*(int *)(iVar9 + 0x18) + 0x44) = uVar7;
          *(undefined4 *)(*(int *)(iVar9 + 0x18) + 0x48) = 0;
        }
        (**(code **)(*(int *)*piVar8 + 4))();
        iVar9 = *piVar8;
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + *(int *)(iVar9 + 0x124) * 4);
        if (*(int *)(iVar9 + 0x18) != 0) {
          *(undefined4 *)(*(int *)(iVar9 + 0x18) + 0x40) = 0;
          *(undefined4 *)(*(int *)(iVar9 + 0x18) + 0x44) = uVar7;
          *(undefined4 *)(*(int *)(iVar9 + 0x18) + 0x48) = 0;
        }
      }
      piVar8 = piVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

