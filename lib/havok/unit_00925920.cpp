// lib/havok/unit_00925920.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00925920..009262F0, 3 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"
#include "hkpConvexTranslateShape.h"

// 00925920  hkpConvexTranslateShape::hkpConvexTranslateShape_3  size=2148  [run]
undefined4 *
hkpConvexTranslateShape::hkpConvexTranslateShape_3
          (undefined4 *param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  int local_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    if (((0.0 <= param_2) && (0.0 <= param_3)) && (0.0 <= param_4)) {
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x20);
      *(undefined2 *)(iVar2 + 4) = 0x20;
      puVar5 = (undefined4 *)hkpSphereShape::hkpSphereShape((float)param_1[4] * param_2);
      return puVar5;
    }
    goto LAB_00925d26;
  case 1:
    if ((param_3 != param_2) || (param_4 != param_2)) {
      FUN_00dd5650(&DAT_0164d330);
    }
    if (((0.0 <= param_2) && (0.0 <= param_3)) && (0.0 <= param_4)) {
      local_a0 = (float)param_1[8];
      fStack_9c = (float)param_1[9];
      fStack_98 = (float)param_1[10];
      fStack_a8 = (float)param_1[0xe];
      fStack_ac = (float)param_1[0xd];
      uStack_94 = 0;
      local_b0 = (float)param_1[0xc];
      uStack_a4 = 0;
      fVar6 = (float10)FUN_0112c400();
      fVar7 = (float10)param_2;
      local_84 = (float)(fVar6 * fVar7);
      local_a0 = (float)((float10)local_a0 * fVar7);
      fStack_9c = fStack_9c * param_3;
      fStack_98 = fStack_98 * param_4;
      local_b0 = (float)((float10)local_b0 * fVar7);
      fStack_ac = param_3 * fStack_ac;
      fStack_a8 = param_4 * fStack_a8;
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x60);
      *(undefined2 *)(iVar2 + 4) = 0x60;
      puVar5 = (undefined4 *)
               hkpCylinderShape::hkpCylinderShape(&uStack_a4,&uStack_b4,local_88,DAT_01b20754);
      return puVar5;
    }
    goto LAB_00925d26;
  case 2:
    local_80 = (float)param_1[8];
    fStack_7c = (float)param_1[9];
    fStack_78 = (float)param_1[10];
    uStack_74 = param_1[0xb];
    local_70 = (float)param_1[0xc];
    fStack_6c = (float)param_1[0xd];
    fStack_68 = (float)param_1[0xe];
    uStack_64 = param_1[0xf];
    local_50 = local_80 * param_2;
    local_60 = (float)param_1[0x10];
    fStack_5c = (float)param_1[0x11];
    fStack_58 = (float)param_1[0x12];
    uStack_54 = param_1[0x13];
    local_4c = fStack_7c * param_3;
    local_48 = fStack_78 * param_4;
    local_40 = local_70 * param_2;
    local_3c = fStack_6c * param_3;
    local_38 = fStack_68 * param_4;
    local_30 = local_60 * param_2;
    local_2c = param_3 * fStack_5c;
    local_28 = param_4 * fStack_58;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x60);
    *(undefined2 *)(puVar5 + 1) = 0x60;
    uVar1 = DAT_01b20754;
    *(undefined2 *)((int)puVar5 + 6) = 1;
    *(undefined2 *)(puVar5 + 2) = 0x402;
    puVar5[4] = uVar1;
    puVar5[8] = uStack_54;
    puVar5[9] = local_50;
    puVar5[10] = local_4c;
    puVar5[0xb] = local_48;
    puVar5[0xc] = uStack_44;
    puVar5[0xd] = local_40;
    puVar5[0xe] = local_3c;
    puVar5[0xf] = local_38;
    puVar5[0x10] = uStack_34;
    puVar5[0x11] = local_30;
    puVar5[0x12] = local_2c;
    puVar5[0x13] = local_28;
    *(undefined2 *)((int)puVar5 + 10) = 0;
    puVar5[3] = 0;
    *puVar5 = hkpTriangleShape::vftable;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[5] = 0x60000;
    return puVar5;
  case 3:
    if ((param_3 != param_2) || (param_4 != param_2)) {
      FUN_00dd5650(&DAT_0164d30c);
    }
    if (((0.0 <= param_2) && (0.0 <= param_3)) && (0.0 <= param_4)) {
      uStack_a4 = param_1[0xb];
      local_b0 = (float)param_1[8] * param_2;
      fStack_ac = param_3 * (float)param_1[9];
      fStack_a8 = param_4 * (float)param_1[10];
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x30);
      *(undefined2 *)(iVar2 + 4) = 0x30;
      puVar5 = (undefined4 *)hkpBoxShape::hkpBoxShape(&uStack_b4,param_1[4]);
      return puVar5;
    }
    goto LAB_00925d26;
  case 4:
    if ((param_3 != param_2) || (param_4 != param_2)) {
      FUN_00dd5650(&DAT_0164d380);
    }
    if ((param_2 < 0.0) || (param_3 < 0.0)) {
      FUN_00dd5650(&DAT_0164d358);
      return (undefined4 *)0x0;
    }
    if (0.0 <= param_4) {
      local_84 = (float)param_1[4];
      uStack_94 = 0;
      local_a0 = (float)param_1[8] * param_2;
      fStack_9c = (float)param_1[9] * param_3;
      uStack_a4 = 0;
      fStack_98 = (float)param_1[10] * param_4;
      local_b0 = (float)param_1[0xc] * param_2;
      fStack_ac = param_3 * (float)param_1[0xd];
      fStack_a8 = param_4 * (float)param_1[0xe];
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x40);
      *(undefined2 *)(iVar2 + 4) = 0x40;
      puVar5 = (undefined4 *)
               hkpCapsuleShape::hkpCapsuleShape(&uStack_a4,&uStack_b4,local_88 * param_2);
      return puVar5;
    }
LAB_00925d26:
    FUN_00dd5650(&DAT_0164d358);
    return (undefined4 *)0x0;
  case 5:
    local_90 = 0.0;
    local_8c = 0;
    local_88 = -0.0;
    FUN_01130a20(&local_90);
    if (3 < local_8c) {
      iVar2 = 0;
      if (0 < local_8c) {
        iVar4 = 0;
        do {
          iVar2 = iVar2 + 1;
          *(float *)((int)local_90 + iVar4) = *(float *)((int)local_90 + iVar4) * param_2;
          *(float *)((int)local_90 + 4 + iVar4) = *(float *)((int)local_90 + 4 + iVar4) * param_3;
          *(float *)((int)local_90 + 8 + iVar4) = *(float *)((int)local_90 + 8 + iVar4) * param_4;
          iVar4 = iVar4 + 0x10;
        } while (iVar2 < local_8c);
      }
      fStack_ac = (float)local_8c;
      fStack_98 = -0.0;
      fStack_78 = -0.0;
      fStack_6c = -0.0;
      local_b0 = local_90;
      fStack_a8 = 2.24208e-44;
      local_a0 = 0.0;
      fStack_9c = 0.0;
      local_80 = 0.0;
      fStack_7c = 0.0;
      uStack_74 = 0;
      local_70 = 0.0;
      FUN_01074110(&local_b0,&local_80,&local_a0);
      fStack_ac = fStack_7c;
      fStack_a8 = 2.24208e-44;
      local_b0 = local_80;
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x70);
      *(undefined2 *)(iVar2 + 4) = 0x70;
      puVar5 = (undefined4 *)
               hkpConvexVerticesShape::hkpConvexVerticesShape_5(&uStack_b4,&uStack_a4,param_1[4]);
      FUN_009211c0();
      local_a0 = 0.0;
      if (-1 < (int)fStack_9c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(uStack_a4,(int)fStack_9c << 4);
      }
      uStack_a4 = 0;
      fStack_9c = -0.0;
      local_90 = 0.0;
      if (-1 < local_8c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(uStack_94,local_8c << 4);
      }
      return puVar5;
    }
    local_8c = 0;
    if (-1 < (int)local_88) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_90,(int)local_88 << 4);
      return (undefined4 *)0x0;
    }
    break;
  case 8:
  case 9:
  case 0xc:
  case 0xe:
  case 0x12:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1e:
  case 0x1f:
  case 0x21:
    FUN_00dd5650(&DAT_0164d2ec);
    break;
  case 10:
    uStack_a4 = param_1[0xb];
    local_b0 = (float)param_1[8] * param_2;
    fStack_ac = (float)param_1[9] * param_3;
    fStack_a8 = (float)param_1[10] * param_4;
    iVar2 = hkpConvexTranslateShape_3(param_1[6],param_2,param_3,param_4);
    if (iVar2 != 0) {
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x30);
      *(undefined2 *)(puVar5 + 1) = 0x30;
      hkpSingleShapeContainer::hkpSingleShapeContainer_14(10,*(undefined4 *)(iVar2 + 0x10),iVar2,1);
      *puVar5 = vftable;
      puVar5[8] = uStack_b4;
      puVar5[9] = local_b0;
      puVar5[10] = fStack_ac;
      puVar5[0xb] = 0;
      puVar5[7] = 0;
      FUN_010060a0();
      return puVar5;
    }
    break;
  case 0xb:
    FUN_0100a440(&local_50);
    uStack_a4 = uStack_14;
    local_b0 = local_20 * param_2;
    fStack_ac = fStack_1c * param_3;
    fStack_a8 = fStack_18 * param_4;
    local_20 = local_b0;
    fStack_1c = fStack_ac;
    fStack_18 = fStack_a8;
    iVar2 = hkpConvexTranslateShape_3(param_1[6],param_2,param_3,param_4);
    if (iVar2 != 0) {
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x60);
      *(undefined2 *)(iVar4 + 4) = 0x60;
      puVar5 = (undefined4 *)hkpConvexTransformShape::hkpConvexTransformShape_2(iVar2,&uStack_54,1);
      return puVar5;
    }
    break;
  case 0xd:
    return param_1;
  }
  return (undefined4 *)0x0;
}

// 009261E0  hkpAllCdPointCollector::hkpAllCdPointCollector_39  size=268  [run]
bool hkpAllCdPointCollector::hkpAllCdPointCollector_39(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  int local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  if (param_1 == 0) {
    return false;
  }
  puVar1 = *(undefined4 **)(DAT_01885d20 + 0x70);
  local_200 = *puVar1;
  local_1fc = puVar1[1];
  local_1f8 = puVar1[2];
  local_1f0 = puVar1[4];
  local_1ec = puVar1[5];
  local_1e8 = puVar1[6];
  local_1e0 = puVar1[8];
  uStack_1dc = puVar1[9];
  uStack_1d8 = puVar1[10];
  uStack_1d4 = puVar1[0xb];
  local_1d0 = puVar1[0xc];
  uStack_1cc = puVar1[0xd];
  uStack_1c8 = puVar1[0xe];
  uStack_1c4 = puVar1[0xf];
  local_1c0 = puVar1[0x10];
  uStack_1bc = puVar1[0x11];
  uStack_1b8 = puVar1[0x12];
  uStack_1b4 = puVar1[0x13];
  local_1f4 = param_2;
  local_1a0 = local_190;
  local_1ac = 0x7f7fffee;
  local_1b0 = vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  FUN_009062b0(param_1 + 0x10,&local_200,&local_1b0);
  bVar2 = local_19c != 0;
  local_1b0 = vftable;
  local_19c = 0;
  if (-1 < (int)local_198) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
  }
  return bVar2;
}

// 009262F0  hkpAllCdPointCollector::hkpAllCdPointCollector_40  size=103  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_40(int param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1a0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = vftable;
      puVar2[1] = 0x7f7fffee;
      puVar2[5] = 0;
      puVar2[6] = 0x80000008;
      puVar2[4] = puVar2 + 8;
      puVar2[5] = 0;
      puVar2[1] = 0x7f7fffee;
      *puVar2 = ContactPointCollector::vftable;
      *(undefined4 **)(param_1 + 0x2c) = puVar2;
      return;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

