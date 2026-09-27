// src/havok/CharacterControl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E4780..008EC700, 11 functions

#include "types.h"

// 008E4780  CharacterControl::setRadius  size=607  [class]
void __thiscall CharacterControl::setRadius(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 local_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 == *(float *)(param_1 + 0xfc)) {
    return;
  }
  if (param_2 <= 0.0) {
    FUN_00dd5650(&DAT_0164b188,"CharacterControl::setRadius",(double)param_2,"radius");
    return;
  }
  FUN_004066f0();
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    iVar2 = FUN_012696c0();
  }
  else {
    iVar2 = FUN_0126f3e0();
  }
  cVar1 = *(char *)(*(int *)(iVar2 + 0x10) + 8);
  if (cVar1 == '\0') {
    fVar5 = *(float *)(param_1 + 0xfc);
    puVar4 = (undefined4 *)FUN_008e1d50();
    local_20 = *puVar4;
    uStack_18 = puVar4[2];
    uStack_14 = puVar4[3];
    fStack_1c = (float)puVar4[1] + (param_2 - fVar5);
    FUN_008e1e10(&local_20);
    *(float *)(param_1 + 0xfc) = param_2;
    iVar2 = FUN_008e1d30();
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0xfc);
    *(int *)(param_1 + 0x164) = iVar2;
    FUN_00406760();
    return;
  }
  if (cVar1 == '\x01') {
    *(float *)(param_1 + 0xfc) = param_2;
    uVar3 = FUN_008e1d30();
    FUN_0112c440(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x164) = uVar3;
    FUN_00406760();
    return;
  }
  if (cVar1 != '\x04') {
    FUN_00dd5650();
    FUN_00406760();
    return;
  }
  if (*(float *)(param_1 + 0xf8) * 0.5 <= param_2) {
    FUN_009f8ea0(&local_20,0x10,*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x4b0),0);
    FUN_00dd5650(&DAT_0164b120,&local_20);
    FUN_00406760();
    return;
  }
  *(float *)(param_1 + 0xfc) = param_2;
  fVar5 = *(float *)(param_1 + 0xf8) * 0.5 - *(float *)(param_1 + 0xfc);
  iVar2 = FUN_008e1d30();
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(float *)(iVar2 + 0x24) = fVar5;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(float *)(iVar2 + 0x34) = -fVar5;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar2 + 0x10);
  *(int *)(param_1 + 0x164) = iVar2;
  FUN_00406760();
  return;
}

// 008E49E0  CharacterControl::setHeight  size=906  [class]
void __thiscall CharacterControl::setHeight(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 == *(float *)(param_1 + 0xf8)) {
    return;
  }
  if (param_2 <= 0.0) {
    return;
  }
  FUN_004066f0();
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    iVar3 = FUN_012696c0();
  }
  else {
    iVar3 = FUN_0126f3e0();
  }
  cVar2 = *(char *)(*(int *)(iVar3 + 0x10) + 8);
  if (cVar2 == '\x01') {
    iVar3 = *(int *)(param_1 + 0xf0);
    local_50 = 0.0;
    local_4c = (param_2 - *(float *)(param_1 + 0xf8)) * 0.5;
    local_48 = 0.0;
    D3DXVec3TransformNormal(&local_50,&local_50,iVar3 + 0xb0);
    local_50 = *(float *)(iVar3 + 0xe0) + local_50;
    local_4c = *(float *)(iVar3 + 0xe4) + local_4c;
    local_48 = *(float *)(iVar3 + 0xe8) + local_48;
    pfVar4 = (float *)FUN_008e1d50();
    fStack_34 = pfVar4[3];
    fStack_40 = *pfVar4 + local_50;
    fStack_3c = pfVar4[1] + local_4c;
    fStack_38 = pfVar4[2] + local_48;
    FUN_008e1e10(&fStack_40);
    *(float *)(param_1 + 0xf8) = param_2;
    fStack_1c = *(float *)(param_1 + 0xf8) * 0.5;
    fStack_2c = -fStack_1c;
    uStack_20 = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
      iVar3 = FUN_012696c0();
    }
    else {
      iVar3 = FUN_0126f3e0();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0x20) = uStack_20;
    *(float *)(iVar3 + 0x24) = fStack_1c;
    *(undefined4 *)(iVar3 + 0x28) = uStack_18;
    *(undefined4 *)(iVar3 + 0x2c) = uStack_14;
    *(undefined4 *)(iVar3 + 0x30) = uStack_30;
    *(float *)(iVar3 + 0x34) = fStack_2c;
    *(undefined4 *)(iVar3 + 0x38) = uStack_28;
    *(undefined4 *)(iVar3 + 0x3c) = uStack_24;
  }
  else {
    if (cVar2 != '\x04') {
      FUN_00dd5650(&DAT_0164b1d8,"CharacterControl::setHeight");
      goto LAB_008e4d1c;
    }
    if (param_2 * 0.5 < *(float *)(param_1 + 0xfc)) {
      param_2 = *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0xfc) + 0.01;
    }
    iVar3 = *(int *)(param_1 + 0xf0);
    local_50 = 0.0;
    local_4c = (param_2 - *(float *)(param_1 + 0xf8)) * 0.5;
    local_48 = 0.0;
    D3DXVec3TransformNormal(&local_50,&local_50,iVar3 + 0xb0);
    local_50 = *(float *)(iVar3 + 0xe0) + local_50;
    local_4c = *(float *)(iVar3 + 0xe4) + local_4c;
    local_48 = *(float *)(iVar3 + 0xe8) + local_48;
    pfVar4 = (float *)FUN_008e1d50();
    fStack_34 = pfVar4[3];
    fStack_40 = *pfVar4 + local_50;
    fStack_3c = pfVar4[1] + local_4c;
    fStack_38 = pfVar4[2] + local_48;
    FUN_008e1e10(&fStack_40);
    *(float *)(param_1 + 0xf8) = param_2;
    if (param_2 <= *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0xfc)) {
      *(float *)(param_1 + 0xf8) = param_2 + 0.01;
    }
    fStack_2c = *(float *)(param_1 + 0xf8) * 0.5 - *(float *)(param_1 + 0xfc);
    fStack_1c = -fStack_2c;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
      iVar3 = FUN_012696c0();
    }
    else {
      iVar3 = FUN_0126f3e0();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(iVar3 + 0x20) = uStack_30;
    *(float *)(iVar3 + 0x24) = fStack_2c;
    *(undefined4 *)(iVar3 + 0x28) = uStack_28;
    *(undefined4 *)(iVar3 + 0x2c) = uStack_24;
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0x30) = uStack_20;
    *(float *)(iVar3 + 0x34) = fStack_1c;
    *(undefined4 *)(iVar3 + 0x38) = uStack_18;
    *(undefined4 *)(iVar3 + 0x3c) = uStack_14;
    *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar3 + 0x10);
  }
  *(int *)(param_1 + 0x164) = iVar3;
LAB_008e4d1c:
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 008EBCD0  FUN_008ebcd0  size=482  [callgraph]
undefined4 __thiscall
FUN_008ebcd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9
            ,int param_10,int param_11)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  *(uint *)(param_1 + 0x110) = param_9;
  *(int *)(param_1 + 0x100) = param_10;
  uVar2 = param_9 & 0x1f | param_10 << 0x10;
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    iVar3 = CharacterProxy::CharacterProxy(param_2,param_3,param_5,param_6,param_7,param_8,uVar2);
    if (iVar3 != 0) goto LAB_008ebdb8;
  }
  else {
    iVar3 = CharacterRigidBody::CharacterRigidBody(param_2,param_3,param_5,param_6,param_8,uVar2);
    if (iVar3 == 0) {
      if (DAT_01885d68 == 1) {
        return 0;
      }
      iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_008ebd50;
    }
LAB_008ebdb8:
    *(undefined4 *)(param_1 + 0xf0) = param_3;
    *(float *)(param_1 + 0xf4) = *(float *)(DAT_01885d20 + 0x14) * 5.0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 **)(param_1 + 0xd0) = (undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0xa0) = *param_4;
    *(undefined4 *)(param_1 + 0xa4) = param_4[1];
    *(undefined4 *)(param_1 + 0xa8) = param_4[2];
    *(undefined4 *)(param_1 + 0xac) = param_4[3];
    hkBaseObject::hkBaseObject_205(param_1 + 0x90,param_4);
    iVar3 = hkpAllCdPointCollector::hkpAllCdPointCollector_18();
    if (iVar3 != 0) {
      if (param_11 != 0) {
        (**(code **)(*DAT_01b35d9c + 0x20))(param_1);
        *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 2;
      }
      *(undefined4 *)(param_1 + 0x164) = 0;
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      return 1;
    }
  }
  if (DAT_01885d68 == 1) {
    return 0;
  }
  iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_008ebd50:
  piVar1 = (int *)(iVar3 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
  return 0;
}

// 008EBEC0  FUN_008ebec0  size=544  [callgraph]
int FUN_008ebec0(undefined4 param_1,float *param_2,float param_3,float param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 *param_10,undefined4 param_11)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  char *pcVar4;
  float local_44 [3];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  if (param_4 < 0.0 == (param_4 == 0.0)) {
    if (param_3 < 0.0 == (param_3 == 0.0)) {
      local_44[0] = param_3 * 0.5;
      if (local_44[0] < param_4 != (local_44[0] == param_4)) {
        FUN_00dd5650("!!!!! CharacterControl::Create radius large than height half !!!!!!");
        param_4 = local_44[0];
      }
      iVar1 = (**(code **)(*DAT_01b35d9c + 0x1c))();
      if (iVar1 == 0) {
        return 0;
      }
      *(float *)(iVar1 + 0xf8) = param_3;
      *(float *)(iVar1 + 0xfc) = param_4;
      local_44[0] = (param_3 - (param_4 + param_4)) * 0.5;
      local_44[2] = -local_44[0];
      uStack_30 = 0;
      uStack_28 = 0;
      fStack_24 = 0.0;
      local_44[1] = 0.0;
      uStack_38 = 0;
      uStack_34 = 0;
      fStack_2c = local_44[0];
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x40);
      *(undefined2 *)(iVar3 + 4) = 0x40;
      iVar3 = hkpCapsuleShape::hkpCapsuleShape(&uStack_34,local_44,*(undefined4 *)(iVar1 + 0xfc));
      if (iVar3 != 0) {
        *(undefined4 *)(iVar1 + 0xb0) = 0;
        *(undefined4 *)(iVar1 + 0xb4) = 0;
        *(undefined4 *)(iVar1 + 0xb8) = 0;
        *(undefined4 *)(iVar1 + 0xbc) = 0;
        if (param_10 != (undefined4 *)0x0) {
          *(undefined4 *)(iVar1 + 0xb0) = *param_10;
          *(undefined4 *)(iVar1 + 0xb4) = param_10[1];
          *(undefined4 *)(iVar1 + 0xb8) = param_10[2];
          *(undefined4 *)(iVar1 + 0xbc) = param_10[3];
        }
        fStack_24 = *(float *)(iVar1 + 0xb0) + *param_2;
        fStack_20 = (*(float *)(iVar1 + 0xb4) - *(float *)(iVar1 + 0xf8) * -0.5) + param_2[1];
        fStack_1c = *(float *)(iVar1 + 0xb8) + param_2[2];
        uStack_18 = 0;
        iVar3 = FUN_008ebcd0(iVar3,param_1,param_2,&fStack_24,param_5,param_6,param_7,param_8,
                             param_9,param_11);
        if (iVar3 != 0) {
          return iVar1;
        }
      }
      *(uint *)(iVar1 + 0x168) = *(uint *)(iVar1 + 0x168) | 4;
      return 0;
    }
    pcVar4 = "height";
    param_4 = param_3;
  }
  else {
    pcVar4 = "radius";
  }
  FUN_00dd5650(&DAT_0164b188,"CharacterControl::createCapsule",(double)param_4,pcVar4);
  return 0;
}

// 008EC0E0  CharacterControl::createCylinder  size=509  [class]
int CharacterControl::createCylinder
              (undefined4 param_1,float *param_2,float param_3,float param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
              undefined4 *param_10,undefined4 param_11)

{
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  char *pcVar5;
  float afStack_44 [3];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  if (param_4 < 0.0 == (param_4 == 0.0)) {
    if (param_3 < 0.0 == (param_3 == 0.0)) {
      iVar2 = (**(code **)(*DAT_01b35d9c + 0x1c))();
      if (iVar2 == 0) {
        return 0;
      }
      *(float *)(iVar2 + 0xf8) = param_3;
      *(float *)(iVar2 + 0xfc) = param_4;
      afStack_44[0] = param_3 * 0.5;
      afStack_44[2] = -afStack_44[0];
      uStack_30 = 0;
      uStack_28 = 0;
      fStack_24 = 0.0;
      afStack_44[1] = 0.0;
      uStack_38 = 0;
      uStack_34 = 0;
      fStack_2c = afStack_44[0];
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x60);
      *(undefined2 *)(iVar4 + 4) = 0x60;
      iVar4 = hkpCylinderShape::hkpCylinderShape
                        (&uStack_34,afStack_44,*(undefined4 *)(iVar2 + 0xfc),DAT_01b20754);
      if (iVar4 != 0) {
        if (param_10 == (undefined4 *)0x0) {
          uVar1 = 0;
          *(undefined4 *)(iVar2 + 0xb0) = 0;
          *(undefined4 *)(iVar2 + 0xb4) = 0;
          *(undefined4 *)(iVar2 + 0xb8) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0xb0) = *param_10;
          *(undefined4 *)(iVar2 + 0xb4) = param_10[1];
          *(undefined4 *)(iVar2 + 0xb8) = param_10[2];
          uVar1 = param_10[3];
        }
        *(undefined4 *)(iVar2 + 0xbc) = uVar1;
        fStack_24 = *(float *)(iVar2 + 0xb0) + *param_2;
        fStack_20 = (*(float *)(iVar2 + 0xb4) - *(float *)(iVar2 + 0xf8) * -0.5) + param_2[1];
        fStack_1c = *(float *)(iVar2 + 0xb8) + param_2[2];
        uStack_18 = 0;
        iVar4 = FUN_008ebcd0(iVar4,param_1,param_2,&fStack_24,param_5,param_6,param_7,param_8,
                             param_9,param_11);
        if (iVar4 != 0) {
          return iVar2;
        }
      }
      *(uint *)(iVar2 + 0x168) = *(uint *)(iVar2 + 0x168) | 4;
      return 0;
    }
    pcVar5 = "height";
    param_4 = param_3;
  }
  else {
    pcVar5 = "radius";
  }
  FUN_00dd5650(&DAT_0164b188,"CharacterControl::createCylinder",(double)param_4,pcVar5);
  return 0;
}

// 008EC2E0  CharacterControl::createSphere  size=372  [class]
int CharacterControl::createSphere
              (undefined4 param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5
              ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9,
              undefined4 param_10)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  if (param_3 < 0.0 == (param_3 == 0.0)) {
    iVar1 = (**(code **)(*DAT_01b35d9c + 0x1c))();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xf8) = 0;
      *(float *)(iVar1 + 0xfc) = param_3;
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x20);
      *(undefined2 *)(iVar3 + 4) = 0x20;
      iVar3 = hkpSphereShape::hkpSphereShape();
      if (iVar3 != 0) {
        *(undefined4 *)(iVar1 + 0xb0) = 0;
        *(undefined4 *)(iVar1 + 0xb4) = 0;
        *(undefined4 *)(iVar1 + 0xb8) = 0;
        *(undefined4 *)(iVar1 + 0xbc) = 0;
        if (param_9 != (undefined4 *)0x0) {
          *(undefined4 *)(iVar1 + 0xb0) = *param_9;
          *(undefined4 *)(iVar1 + 0xb4) = param_9[1];
          *(undefined4 *)(iVar1 + 0xb8) = param_9[2];
          *(undefined4 *)(iVar1 + 0xbc) = param_9[3];
        }
        fStack_24 = *(float *)(iVar1 + 0xb0) + *param_2;
        fStack_1c = *(float *)(iVar1 + 0xb8) + param_2[2];
        fStack_20 = *(float *)(iVar1 + 0xb4) + param_2[1] + *(float *)(iVar1 + 0xfc);
        uStack_18 = 0;
        iVar3 = FUN_008ebcd0(iVar3,param_1,param_2,&fStack_24,param_4,param_5,param_6,param_7,
                             param_8,param_10);
        if (iVar3 != 0) {
          return iVar1;
        }
      }
      *(uint *)(iVar1 + 0x168) = *(uint *)(iVar1 + 0x168) | 4;
      return 0;
    }
  }
  else {
    FUN_00dd5650(&DAT_0164b188,"CharacterControl::createSphere",(double)param_3,"radius");
  }
  return 0;
}

// 008EC460  CharacterControl::addSphere  size=167  [class]
undefined4 __thiscall
CharacterControl::addSphere
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,int param_11)

{
  if ((*(byte *)(param_1 + 0x16c) & 2) == 0) {
    FUN_00dd5650("CharacterControl::addSphere this work is sub collision");
  }
  else {
    param_11 = FUN_008ebec0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                            ,param_11,0);
    if (param_11 != 0) {
      if (*(int *)(param_11 + 0x104) != 1) {
        *(undefined4 *)(param_11 + 0x104) = 1;
        *(undefined4 *)(*(int *)(param_11 + 0xd0) + 4) = 0;
      }
      (**(code **)(*(int *)(param_1 + 0x50) + 8))(&param_11);
      return param_10;
    }
  }
  return 0;
}

// 008EC510  CharacterControl::addSphere_2  size=167  [class]
undefined4 __thiscall
CharacterControl::addSphere_2
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,int param_11)

{
  if ((*(byte *)(param_1 + 0x16c) & 2) == 0) {
    FUN_00dd5650("CharacterControl::addSphere this work is sub collision");
  }
  else {
    param_11 = createCylinder(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,0);
    if (param_11 != 0) {
      if (*(int *)(param_11 + 0x104) != 1) {
        *(undefined4 *)(param_11 + 0x104) = 1;
        *(undefined4 *)(*(int *)(param_11 + 0xd0) + 4) = 0;
      }
      (**(code **)(*(int *)(param_1 + 0x50) + 8))(&param_11);
      return param_10;
    }
  }
  return 0;
}

// 008EC5C0  CharacterControl::addSphere_3  size=159  [class]
undefined4 __thiscall
CharacterControl::addSphere_3
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  if ((*(byte *)(param_1 + 0x16c) & 2) == 0) {
    FUN_00dd5650("CharacterControl::addSphere this work is sub collision");
  }
  else {
    param_10 = createSphere(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                            ,0);
    if (param_10 != 0) {
      if (*(int *)(param_10 + 0x104) != 1) {
        *(undefined4 *)(param_10 + 0x104) = 1;
        *(undefined4 *)(*(int *)(param_10 + 0xd0) + 4) = 0;
      }
      (**(code **)(*(int *)(param_1 + 0x50) + 8))(&param_10);
      return param_9;
    }
  }
  return 0;
}

// 008EC660  FUN_008ec660  size=79  [callgraph]
void FUN_008ec660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009f8b40(param_8,1);
  FUN_008ebec0(param_1,param_1 + 0x50,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
  return;
}

// 008EC700  FUN_008ec700  size=71  [callgraph]
void FUN_008ec700(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009f8b40(param_7,1);
  CharacterControl::createSphere
            (param_1,param_1 + 0x50,param_2,param_3,param_4,param_5,param_6,uVar1);
  return;
}

