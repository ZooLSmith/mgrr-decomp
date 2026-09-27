// lib/havok/unit_008E5E20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E5E20..008E5E20, 1 functions

#include "mgrr.h"
#include "hkBaseObject.h"

// 008E5E20  hkBaseObject::hkBaseObject_240  size=636  [run]
undefined4 __thiscall hkBaseObject::hkBaseObject_240(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  undefined4 uStack_d0;
  float local_cc;
  float local_c4 [3];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined **local_a0 [23];
  float local_44;
  
  local_cc = *(float *)(param_1 + 0xfc);
  local_c4[0] = *(float *)(param_1 + 0xf8);
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
      FUN_00860de0();
      hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2();
      FUN_01269700(local_a0);
      local_a0[0] = vftable;
      FUN_00860e40();
    }
    else {
      local_44 = *(float *)(*(int *)(param_1 + 8) + 0x3c);
    }
    local_cc = local_cc + local_44;
    local_c4[0] = local_44 + local_44 + local_c4[0];
  }
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    iVar2 = FUN_012696c0();
  }
  else {
    iVar2 = FUN_0126f3e0();
  }
  cVar1 = *(char *)(*(int *)(iVar2 + 0x10) + 8);
  if (cVar1 == '\0') {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar2 + 4) = 0x20;
    uVar4 = hkpSphereShape::hkpSphereShape(uStack_d0);
    return uVar4;
  }
  if (cVar1 == '\x01') {
    local_c4[2] = local_c4[0] * 0.5;
    fStack_ac = -local_c4[2];
    local_c4[1] = 0.0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x60);
    *(undefined2 *)(iVar2 + 4) = 0x60;
    uVar4 = hkpCylinderShape::hkpCylinderShape(local_c4,&uStack_b4,uStack_d0,DAT_01b20754);
    return uVar4;
  }
  if (cVar1 != '\x04') {
    if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
      iVar2 = FUN_012696c0();
      uVar4 = *(undefined4 *)(iVar2 + 0x10);
      FUN_01006000();
      return uVar4;
    }
    iVar2 = FUN_0126f3e0();
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
    FUN_01006000();
    return uVar4;
  }
  fStack_ac = (local_c4[0] - (local_cc + local_cc)) * 0.5;
  local_c4[2] = -fStack_ac;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_c4[1] = 0.0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  uVar4 = hkpCapsuleShape::hkpCapsuleShape(&uStack_b4,local_c4,uStack_d0);
  return uVar4;
}

