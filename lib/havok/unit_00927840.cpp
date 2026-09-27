// lib/havok/unit_00927840.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00927840..00927840, 1 functions

#include "mgrr.h"
#include "hkpConvexTranslateShape.h"

// 00927840  hkpConvexTranslateShape::hkpConvexTranslateShape_2  size=3096  [run]
void hkpConvexTranslateShape::hkpConvexTranslateShape_2
               (int *param_1,int *param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  undefined4 unaff_ESI;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  uint uStack_314;
  uint uStack_310;
  float local_30c;
  int local_308;
  int local_304;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  float fStack_2e8;
  float local_2e4;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  int iStack_2d4;
  int aiStack_2d0 [2];
  undefined1 auStack_2c8 [4];
  undefined1 auStack_2c4 [4];
  float local_2c0;
  float local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined1 uStack_2a8;
  undefined1 uStack_2a6;
  undefined1 uStack_2a4;
  float local_290;
  float fStack_28c;
  float fStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 uStack_255;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 auStack_210 [524];
  
  if ((((param_3 == 1.0) && (param_4 == 1.0)) && (param_5 == 1.0)) || (param_2 == (int *)0x0)) {
LAB_00927889:
    return;
  }
  switch((char)param_2[2]) {
  case '\0':
    if (((0.0 <= param_3) && (0.0 <= param_4)) && (0.0 <= param_5)) {
      pvVar5 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x20);
      *(undefined2 *)(iVar3 + 4) = 0x20;
      puVar8 = (undefined4 *)hkpSphereShape::hkpSphereShape((float)param_2[4] * param_3);
      goto LAB_00927908;
    }
    break;
  case '\x01':
    if (((0.0 <= param_3) && (0.0 <= param_4)) && (0.0 <= param_5)) {
      local_2e0 = (float)param_2[8];
      fStack_2dc = (float)param_2[9];
      fStack_2d8 = (float)param_2[10];
      fStack_2f8 = (float)param_2[0xe];
      fStack_2fc = (float)param_2[0xd];
      iStack_2d4 = 0;
      local_300 = (float)param_2[0xc];
      iStack_2f4 = 0;
      fVar10 = (float10)FUN_0112c400();
      fVar11 = (float10)param_3;
      local_2e4 = (float)(fVar10 * fVar11);
      local_2e0 = (float)((float10)local_2e0 * fVar11);
      fStack_2dc = fStack_2dc * param_4;
      fStack_2d8 = fStack_2d8 * param_5;
      local_300 = (float)((float10)local_300 * fVar11);
      fStack_2fc = param_4 * fStack_2fc;
      fStack_2f8 = param_5 * fStack_2f8;
      pvVar5 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x60);
      *(undefined2 *)(iVar3 + 4) = 0x60;
      uVar4 = hkpCylinderShape::hkpCylinderShape(&local_2e4,&local_304,fStack_2e8,DAT_01b20754);
      (**(code **)(*param_1 + 0xc))(uVar4);
      FUN_010060a0();
      return;
    }
    break;
  case '\x02':
  case '\f':
  case '\x0e':
  case '\x12':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1e':
  case '\x1f':
  case '!':
    FUN_00dd5650(&DAT_0164d2ec);
    return;
  case '\x03':
    if (((0.0 <= param_3) && (0.0 <= param_4)) && (0.0 <= param_5)) {
      iStack_2f4 = param_2[0xb];
      local_300 = (float)param_2[8] * param_3;
      fStack_2fc = param_4 * (float)param_2[9];
      fStack_2f8 = param_5 * (float)param_2[10];
      pvVar5 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x30);
      *(undefined2 *)(iVar3 + 4) = 0x30;
      uVar4 = hkpBoxShape::hkpBoxShape(&local_304,param_2[4]);
      (**(code **)(*param_1 + 0xc))(uVar4);
      FUN_010060a0();
      return;
    }
    break;
  case '\x04':
    if (((0.0 <= param_3) && (0.0 <= param_4)) && (0.0 <= param_5)) {
      local_2e4 = (float)param_2[4];
      iStack_2d4 = 0;
      local_2e0 = (float)param_2[8] * param_3;
      fStack_2dc = (float)param_2[9] * param_4;
      iStack_2f4 = 0;
      fStack_2d8 = (float)param_2[10] * param_5;
      local_300 = (float)param_2[0xc] * param_3;
      fStack_2fc = param_4 * (float)param_2[0xd];
      fStack_2f8 = param_5 * (float)param_2[0xe];
      pvVar5 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x40);
      *(undefined2 *)(iVar3 + 4) = 0x40;
      uVar4 = hkpCapsuleShape::hkpCapsuleShape(&local_2e4,&local_304,fStack_2e8 * param_3);
      (**(code **)(*param_1 + 0xc))(uVar4);
      FUN_010060a0();
      return;
    }
    break;
  case '\x05':
    local_30c = 0.0;
    local_308 = 0;
    local_304 = -0x80000000;
    FUN_01130a20(&local_30c);
    if (local_308 == 0) {
      local_308 = 0;
      if (local_304 < 0) {
        return;
      }
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30c,local_304 << 4);
      return;
    }
    iVar3 = 0;
    if (0 < local_308) {
      iVar7 = 0;
      do {
        pfVar1 = (float *)((int)local_30c + iVar7);
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + 0x10;
        *(float *)(((int)local_30c - 0x10U) + iVar7) = param_3 * *pfVar1;
        *(float *)(((int)local_30c - 0xcU) + iVar7) =
             param_4 * *(float *)(((int)local_30c - 0xcU) + iVar7);
        *(float *)(((int)local_30c - 8U) + iVar7) =
             param_5 * *(float *)(((int)local_30c - 8U) + iVar7);
      } while (iVar3 < local_308);
    }
    fStack_2fc = (float)local_308;
    local_300 = local_30c;
    fStack_2d8 = -0.0;
    local_2b8 = 0x80000000;
    local_2ac = 0x80000000;
    fStack_2f8 = 2.24208e-44;
    local_2e0 = 0.0;
    fStack_2dc = 0.0;
    local_2c0 = 0.0;
    local_2bc = 0.0;
    local_2b4 = 0;
    local_2b0 = 0;
    FUN_01074110(&local_300,&local_2c0,&local_2e0);
    fStack_2fc = local_2bc;
    fStack_2f8 = 2.24208e-44;
    local_300 = local_2c0;
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x70);
    *(undefined2 *)(iVar3 + 4) = 0x70;
    uVar4 = hkpConvexVerticesShape::hkpConvexVerticesShape_5(&local_304,&local_2e4,param_2[4]);
    (**(code **)(*param_1 + 0xc))(uVar4);
    FUN_010060a0();
    FUN_009211c0();
    fStack_2e8 = 0.0;
    if (-1 < (int)local_2e4) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(iStack_2ec,(int)local_2e4 << 4);
    }
    iStack_2ec = 0;
    local_2e4 = -0.0;
    if ((int)uStack_310 < 0) {
      return;
    }
    iVar3 = uStack_310 << 4;
    goto LAB_00927f79;
  default:
    goto LAB_00927889;
  case '\b':
    local_30c = 0.0;
    local_308 = 0;
    local_304 = -0x80000000;
    uVar9 = 0;
    iVar3 = (**(code **)(param_2[4] + 4))();
    if (0 < iVar3) {
      iStack_2f0 = 0;
      do {
        if (((0xff < uVar9) || ((1 << ((byte)uVar9 & 0x1f) & param_2[(uVar9 >> 5) + 0x14]) != 0)) &&
           (aiStack_2d0[0] =
                 hkpConvexTranslateShape_3
                           (*(undefined4 *)(iStack_2f0 + param_2[6]),param_3,param_4,param_5),
           aiStack_2d0[0] != 0)) {
          if (uStack_314 == (uStack_310 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&stack0xfffffce8,4);
          }
          *(int *)(unaff_EBX + uStack_314 * 4) = aiStack_2d0[0];
          uStack_314 = uStack_314 + 1;
        }
        iStack_2f0 = iStack_2f0 + 0x10;
        uVar9 = uVar9 + 1;
        iVar3 = (**(code **)(param_2[4] + 4))();
      } while ((int)uVar9 < iVar3);
    }
    if (uStack_314 == 0) {
      if ((int)uStack_310 < 0) {
        return;
      }
      iVar3 = uStack_310 * 4;
      goto LAB_00927f79;
    }
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x70);
    *(undefined2 *)(iVar3 + 4) = 0x70;
    iVar3 = hkpListShape::hkpListShape_2(unaff_ESI,unaff_EBX,1);
    iVar7 = 0;
    iStack_2d4 = iVar3;
    if (0 < unaff_EBX) {
      do {
        FUN_010060a0();
        iVar7 = iVar7 + 1;
      } while (iVar7 < unaff_EBX);
    }
    FUN_0113f010();
    local_2b0 = CONCAT31(local_2b0._1_3_,1);
    local_2b4._0_3_ = CONCAT12(1,(undefined2)local_2b4);
    FUN_0113ef60(0x3dcccccd);
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar3 + 0x10;
    }
    uVar4 = FUN_0113eee0(iVar7,aiStack_2d0,0);
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar7 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar7 + 4) = 0x40;
    uVar4 = hkpSingleShapeContainer::hkpSingleShapeContainer_8(iVar3,uVar4);
    FUN_010060a0();
    goto LAB_00927f43;
  case '\t':
  case '\x16':
    piVar2 = (int *)(**(code **)(*param_2 + 0x38))();
    local_30c = 0.0;
    local_308 = 0;
    local_304 = -0x80000000;
    for (iVar3 = (**(code **)(*piVar2 + 8))(); iVar3 != -1;
        iVar3 = (**(code **)(*piVar2 + 0xc))(iVar3)) {
      uVar4 = (**(code **)(*piVar2 + 0x14))(iVar3,auStack_210);
      iStack_2ec = hkpConvexTranslateShape_3(uVar4,param_3,param_4,param_5);
      if (iStack_2ec != 0) {
        if (uStack_310 == ((uint)local_30c & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&uStack_314,4);
        }
        *(int *)(uStack_314 + uStack_310 * 4) = iStack_2ec;
        uStack_310 = uStack_310 + 1;
      }
    }
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x70);
    *(undefined2 *)(iVar3 + 4) = 0x70;
    fVar6 = (float)hkpListShape::hkpListShape_2(uStack_310,local_30c,1);
    iVar3 = 0;
    fStack_2e8 = fVar6;
    if (0 < (int)local_30c) {
      do {
        FUN_010060a0();
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_30c);
    }
    FUN_0113f010();
    uStack_2a4 = 1;
    uStack_2a6 = 1;
    FUN_0113ef60(0x3dcccccd);
    if (fVar6 == 0.0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)fVar6 + 0x10;
    }
    uVar4 = FUN_0113eee0(iVar3,auStack_2c4,0);
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar3 + 4) = 0x40;
    uVar4 = hkpSingleShapeContainer::hkpSingleShapeContainer_8(fVar6,uVar4);
    FUN_010060a0();
LAB_00927f43:
    FUN_010060a0();
    (**(code **)(*param_1 + 0xc))(uVar4);
    FUN_010060a0();
    if ((int)uStack_310 < 0) {
      return;
    }
    iVar3 = uStack_310 * 4;
LAB_00927f79:
    uStack_314 = 0;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(unaff_EBX,iVar3);
    return;
  case '\n':
    iStack_2f4 = param_2[0xb];
    local_300 = (float)param_2[8] * param_3;
    fStack_2fc = (float)param_2[9] * param_4;
    fStack_2f8 = (float)param_2[10] * param_5;
    iVar3 = hkpConvexTranslateShape_3(param_2[6],param_3,param_4,param_5);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_0164d460);
      return;
    }
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    puVar8 = (undefined4 *)(**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x30);
    *(undefined2 *)(puVar8 + 1) = 0x30;
    hkpSingleShapeContainer::hkpSingleShapeContainer_14(10,*(undefined4 *)(iVar3 + 0x10),iVar3,1);
    *puVar8 = vftable;
    puVar8[8] = local_304;
    puVar8[9] = local_300;
    puVar8[10] = fStack_2fc;
    puVar8[0xb] = 0;
    puVar8[7] = 0;
    FUN_010060a0();
    goto LAB_00927908;
  case '\v':
    FUN_0100a440(&local_2c0);
    iStack_2f4 = uStack_284;
    local_300 = local_290 * param_3;
    fStack_2fc = fStack_28c * param_4;
    fStack_2f8 = fStack_288 * param_5;
    local_290 = local_300;
    fStack_28c = fStack_2fc;
    fStack_288 = fStack_2f8;
    uVar4 = hkpConvexTranslateShape_3(param_2[6],param_3,param_4,param_5);
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x60);
    *(undefined2 *)(iVar3 + 4) = 0x60;
    uVar4 = hkpConvexTransformShape::hkpConvexTransformShape_2(uVar4,auStack_2c4,1);
    (**(code **)(*param_1 + 0xc))(uVar4);
    FUN_010060a0();
    return;
  case '\r':
    iVar3 = param_2[0x2e];
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar7 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0xf0);
    *(undefined2 *)(iVar7 + 4) = 0xf0;
    piVar2 = (int *)hkpExtendedMeshShape::hkpExtendedMeshShape(DAT_01b20754,0xc);
    uStack_254 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_228 = 0x3f800000;
    uStack_284 = CONCAT22(uStack_284._2_2_,10);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_27c = 0;
    uStack_255 = 0;
    uStack_274 = 0;
    uStack_224 = 0x3f800000;
    uStack_220 = 0x3f800000;
    uStack_21c = 0x3f800000;
    uStack_218 = 0x3f800000;
    FUN_00919310(iVar3);
    (**(code **)(*piVar2 + 0x4c))(&uStack_284);
    FUN_0113f010();
    uStack_2a8 = 1;
    local_2ac._0_3_ = CONCAT12(1,(undefined2)local_2ac);
    uVar4 = FUN_0113eee0(piVar2 + 4,auStack_2c8,0);
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar3 + 4) = 0x40;
    puVar8 = (undefined4 *)hkpSingleShapeContainer::hkpSingleShapeContainer_8(piVar2,uVar4);
    FUN_010060a0();
    FUN_010060a0();
LAB_00927908:
    (**(code **)(*param_1 + 0xc))(puVar8);
    FUN_010060a0();
    return;
  }
  FUN_00dd5650(&DAT_0164d358);
  return;
}

