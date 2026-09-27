// lib/havok/Source/Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesShapeConstructor.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0113C420..0113C420, 1 functions

#include "types.h"

// 0113C420  hkpConvexVerticesShape::hkpConvexVerticesShape  size=1237  [__FILE__]
undefined4 * __thiscall
hkpConvexVerticesShape::hkpConvexVerticesShape(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  uint *puVar13;
  LPVOID pvVar14;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar15;
  int iVar16;
  undefined1 local_278 [516];
  undefined1 local_74 [13];
  undefined2 local_67;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_11;
  
  uVar2 = *(undefined4 *)(param_3 + 4);
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x405;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = uVar2;
  *param_1 = vftable;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  piVar1 = param_1 + 0x15;
  param_1[0x17] = 0x80000000;
  *piVar1 = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  hkgpConvexHull::hkgpConvexHull();
  FUN_01077490();
  local_74[0] = 1;
  local_67 = 0x101;
  FUN_01079670(param_2,local_74);
  iVar10 = FUN_01077610();
  uVar15 = extraout_ECX;
  if (iVar10 == -1) {
    hkErrStream::hkErrStream(local_278,0x200);
    FUN_01018d00("Cannot create convex hull");
    iVar10 = (**(code **)(*DAT_01f8fc58 + 0xc))
                       (3,0xc28c58e7,local_278,
                        "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Shape\\Convex\\ConvexVertices\\hkpConvexVerticesShapeConstructor.cpp"
                        ,0x36);
    if (iVar10 != 0) {
      pcVar9 = (code *)swi(3);
      puVar11 = (undefined4 *)(*pcVar9)();
      return puVar11;
    }
    hkBaseObject::hkBaseObject_38();
    uVar15 = extraout_ECX_00;
  }
  if ((3 < *(int *)(param_3 + 8)) &&
     (iVar10 = FUN_01077610(), uVar15 = extraout_ECX_01, iVar10 == 3)) {
    FUN_0107b1c0(&local_11,*(undefined4 *)(param_3 + 8),1);
    uVar15 = extraout_ECX_02;
  }
  FUN_01079310(0x3f7fff58,uVar15 & 0xffffff00);
  local_3c = 0;
  local_38 = 0;
  local_34 = -0x80000000;
  FUN_01078920(1,&local_3c);
  FUN_01078a50(piVar1);
  FUN_010792f0(*(undefined4 *)(param_3 + 0x14),piVar1);
  iVar10 = FUN_01077610();
  if (iVar10 == 2) {
    puVar12 = (ulonglong *)FUN_01077650();
    uVar3 = *puVar12;
    uVar4 = puVar12[1];
    local_30._0_4_ = (uint)uVar3;
    local_30._4_4_ = (uint)(uVar3 >> 0x20);
    uStack_28._0_4_ = (uint)uVar4;
    uStack_28._4_4_ = (uint)(uVar4 >> 0x20);
    local_50 = (uint)local_30 ^ 0x80000000;
    uStack_4c = local_30._4_4_ ^ 0x80000000;
    uStack_48 = (uint)uStack_28 ^ 0x80000000;
    uStack_44 = uStack_28._4_4_ ^ 0x80000000;
    local_30 = uVar3;
    uStack_28 = uVar4;
    if (param_1[0x16] == (param_1[0x17] & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x10);
    }
    puVar11 = (undefined4 *)(param_1[0x16] * 0x10 + *piVar1);
    *puVar11 = (uint)local_30;
    puVar11[1] = local_30._4_4_;
    puVar11[2] = (uint)uStack_28;
    puVar11[3] = uStack_28._4_4_;
    param_1[0x16] = param_1[0x16] + 1;
    if (param_1[0x16] == (param_1[0x17] & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x10);
    }
    puVar13 = (uint *)(param_1[0x16] * 0x10 + *piVar1);
    *puVar13 = local_50;
    puVar13[1] = uStack_4c;
    puVar13[2] = uStack_48;
    puVar13[3] = uStack_44;
    param_1[0x16] = param_1[0x16] + 1;
  }
  iVar10 = 0;
  if (0 < (int)param_1[0x16]) {
    iVar16 = 0;
    do {
      iVar10 = iVar10 + 1;
      *(float *)(*piVar1 + 0xc + iVar16) = *(float *)(*piVar1 + 0xc + iVar16) + 1.1920929e-07;
      iVar16 = iVar16 + 0x10;
    } while (iVar10 < (int)param_1[0x16]);
  }
  FUN_01130aa0(local_3c,0x10,local_38);
  if ((param_3[1] == '\0') || (local_11 = '\x01', *(float *)(param_3 + 4) <= 0.0)) {
    local_11 = '\0';
  }
  if ((*param_3 != '\0') || (local_11 != '\0')) {
    local_30 = local_30 & 0xffffffff;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_28 = 0x8000000000000000;
    uStack_44 = 0x80000000;
    pvVar14 = TlsGetValue(DAT_01f8fc4c);
    puVar11 = (undefined4 *)(**(code **)(**(int **)((int)pvVar14 + 0x2c) + 4))(0x20);
    puVar11[1] = 0x10020;
    *puVar11 = hkpConvexVerticesConnectivity::vftable;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0x80000000;
    puVar11[7] = 0x80000000;
    puVar11[5] = 0;
    puVar11[6] = 0;
    FUN_010795b0(1,(int)&local_30 + 4,&uStack_4c,1);
    FUN_0113c990((int)&local_30 + 4);
    FUN_0113c960(&uStack_4c);
    FUN_01131470(puVar11,0);
    FUN_010060a0();
    uStack_48 = 0;
    if (-1 < (int)uStack_44) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(uStack_4c,(uStack_44 & 0x3fffffff) * 2);
    }
    uVar4 = uStack_28;
    uStack_4c = 0;
    uVar3 = uStack_28 >> 0x20;
    uStack_28 = uStack_28 & 0xffffffff00000000;
    uStack_44 = 0x80000000;
    if (-1 < (longlong)uVar4) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30._4_4_,(uint)uVar3 & 0x3fffffff);
    }
    if (local_11 != '\0') {
      puVar11 = (undefined4 *)
                FUN_01151960(param_1,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0xc),
                             *(undefined4 *)(param_3 + 0x10),0,param_3[2]);
      if ((puVar11 == (undefined4 *)0x0) || (puVar11 == param_1)) {
        FUN_010790f0();
      }
      else {
        uVar5 = *(undefined8 *)(puVar11 + 0xc);
        uVar6 = *(undefined8 *)(puVar11 + 0xe);
        uVar2 = param_1[0xd];
        uVar7 = param_1[0xe];
        uVar8 = param_1[0xf];
        puVar11[0xc] = param_1[0xc];
        puVar11[0xd] = uVar2;
        puVar11[0xe] = uVar7;
        puVar11[0xf] = uVar8;
        local_30._0_4_ = (uint)uVar5;
        local_30._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
        uStack_28._0_4_ = (uint)uVar6;
        uStack_28._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
        param_1[0xc] = (uint)local_30;
        param_1[0xd] = local_30._4_4_;
        param_1[0xe] = (uint)uStack_28;
        param_1[0xf] = uStack_28._4_4_;
        uVar3 = *(ulonglong *)(puVar11 + 8);
        uVar4 = *(ulonglong *)(puVar11 + 10);
        uVar2 = param_1[9];
        uVar7 = param_1[10];
        uVar8 = param_1[0xb];
        puVar11[8] = param_1[8];
        puVar11[9] = uVar2;
        puVar11[10] = uVar7;
        puVar11[0xb] = uVar8;
        local_30._0_4_ = (uint)uVar3;
        local_30._4_4_ = (uint)(uVar3 >> 0x20);
        uStack_28._0_4_ = (uint)uVar4;
        uStack_28._4_4_ = (uint)(uVar4 >> 0x20);
        param_1[8] = (uint)local_30;
        param_1[9] = local_30._4_4_;
        param_1[10] = (uint)uStack_28;
        param_1[0xb] = uStack_28._4_4_;
        uVar2 = puVar11[0x13];
        puVar11[0x13] = param_1[0x13];
        param_1[0x13] = uVar2;
        uVar7 = param_1[0x18];
        uVar8 = puVar11[0x18];
        uVar2 = puVar11[4];
        puVar11[4] = param_1[4];
        puVar11[0x18] = uVar7;
        param_1[0x18] = uVar8;
        param_1[4] = uVar2;
        local_30 = uVar3;
        uStack_28 = uVar4;
        FUN_0113c900(param_1 + 0x10);
        FUN_0113c930(param_1 + 0x15);
      }
      if (puVar11 != (undefined4 *)0x0) {
        FUN_010060a0();
      }
    }
  }
  if ((*param_3 == '\0') && ((undefined4 *)param_1[0x18] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
    param_1[0x18] = 0;
  }
  local_38 = 0;
  if (-1 < local_34) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_3c,local_34 << 4);
  }
  local_3c = 0;
  local_34 = 0x80000000;
  hkBaseObject::hkBaseObject_27();
  return param_1;
}

