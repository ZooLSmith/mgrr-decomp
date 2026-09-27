// src/managers/raycastmanager/RayCastManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00905E50..0090D8C0, 21 functions

#include "mgrr.h"
#include "RayCastManager.h"

// 00905E50  RayCastManager::getWork  size=81  [class]
void __thiscall RayCastManager::getWork(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x134) == 0) {
    *param_2 = 0;
    return;
  }
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (param_2 != *(int **)(iVar1 + 0x10)) {
      FUN_00dd5650(&DAT_0164c08c);
      *param_2 = 0;
      return;
    }
    if (iVar1 != 0) {
      *(undefined2 *)(iVar1 + 0x1a) = 1;
    }
  }
  *param_2 = 0;
  return;
}

// 00905EE0  RayCastManager::getWork_2  size=45  [class]
void RayCastManager::getWork_2(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1 != *(int **)(iVar1 + 0x10)) {
      FUN_00dd5650(&DAT_0164c08c);
      return;
    }
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x1d) = param_2;
    }
  }
  return;
}

// 00907DC0  RayCastManager::set  size=163  [class]
undefined4 __thiscall RayCastManager::set(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    FUN_00dd5650(&DAT_0164c364,param_4);
    return 0;
  }
  FUN_00dd72e0();
  iVar2 = *(int *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0x70) <= iVar2) {
    (**(code **)(*param_2 + 4))(1);
    FUN_00dd5650(&DAT_0164c330,param_3);
    FUN_00dd7320();
    return 0;
  }
  if (iVar2 < *(int *)(param_1 + 0x70)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x6c) + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_2;
    }
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  FUN_00dd7320();
  if (*param_3 == 0) {
    *param_3 = (int)param_2;
  }
  param_2[4] = (int)param_3;
  return 1;
}

// 0090BAE0  RayCastManager::~RayCastManager  size=156  [class]
void __fastcall RayCastManager::~RayCastManager(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = vftable;
  FUN_00dd7270();
  FUN_00dd7270();
  iVar1 = 4;
  puVar2 = param_1 + 0x39;
  do {
    if (puVar2[-5] != 0) {
      puVar2[-3] = 0;
      if (puVar2[-2] != 0) {
        FUN_00dd48d0(puVar2[-5],0);
        puVar2[-2] = 0;
      }
      puVar2[-5] = 0;
      puVar2[-4] = 0;
    }
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -5;
  } while (-1 < iVar1);
  if (param_1[0x1b] != 0) {
    param_1[0x1d] = 0;
    if (param_1[0x1e] != 0) {
      FUN_00dd48d0(param_1[0x1b],0);
      param_1[0x1e] = 0;
    }
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  iVar1 = (**(code **)(param_1[4] + 0xc))();
  if (iVar1 != 0) {
    FUN_009078e0();
  }
  Hw::cHeap::cHeap_5();
  return;
}

// 0090BB80  RayCastManager::vf00  size=30  [class]
undefined4 __thiscall RayCastManager::vf00(undefined4 param_1,byte param_2)

{
  ~RayCastManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0090BBA0  FUN_0090bba0  size=1102  [between]
void FUN_0090bba0(undefined4 param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  LPVOID pvVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  float fStack_138;
  float afStack_134 [4];
  float fStack_124;
  float local_120;
  float fStack_11c;
  undefined4 uStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_bc;
  undefined1 auStack_b0 [4];
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [2];
  undefined1 auStack_9c [60];
  undefined1 auStack_60 [92];
  
  local_170 = 0.0;
  local_16c = 0.0;
  local_168 = param_4[2] * 0.5;
  FUN_00ddc1d0(&local_120,param_3,5);
  D3DXVec3TransformNormal(&local_170,&local_170,&local_120);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fStack_174 = param_2[2] + fStack_174;
  local_170 = param_2[3] + local_170;
  afStack_134[0] = 0.0;
  fStack_138 = 0.0;
  fStack_13c = 0.0;
  uStack_140 = 0;
  fStack_148 = 0.0;
  fStack_14c = 0.0;
  uStack_150 = 0;
  fStack_154 = 0.0;
  fStack_15c = 0.0;
  uStack_160 = 0;
  fStack_164 = 0.0;
  local_168 = 0.0;
  afStack_134[1] = 1.0;
  fStack_144 = 1.0;
  fStack_158 = 1.0;
  local_16c = 1.0;
  if (param_3[2] != 0.0) {
    D3DXMatrixRotationZ(afStack_134 + 2,param_3[2]);
    D3DXMatrixMultiply(&fStack_174,afStack_134,&fStack_174);
  }
  if (param_3[1] != 0.0) {
    D3DXMatrixRotationY(afStack_134 + 2,param_3[1]);
    D3DXMatrixMultiply(&fStack_174,afStack_134,&fStack_174);
  }
  if (*param_3 != 0.0) {
    D3DXMatrixRotationX(afStack_134 + 2,*param_3);
    D3DXMatrixMultiply(&fStack_174,afStack_134,&fStack_174);
  }
  afStack_134[0] = fStack_174;
  fStack_d4 = fStack_174;
  fStack_c8 = SQRT(fStack_164 * fStack_164 + local_16c * local_16c + local_168 * local_168);
  fStack_c4 = SQRT(fStack_154 * fStack_154 + fStack_15c * fStack_15c + fStack_158 * fStack_158);
  fVar3 = SQRT(fStack_144 * fStack_144 + fStack_148 * fStack_148 + fStack_14c * fStack_14c);
  fStack_e4 = fStack_154 / fVar3;
  fStack_e0 = fStack_144 / fVar3;
  fStack_13c = unaff_ESI + fVar1;
  fStack_138 = fVar2 + unaff_EBX;
  fStack_dc = unaff_ESI + fVar1;
  fStack_d8 = fVar2 + unaff_EBX;
  fVar6 = (float10)FUN_00ddbaa0(-(fStack_164 / fVar3));
  fStack_e8 = (float)fVar6;
  fVar7 = (float10)fpatan((float10)fStack_e4,(float10)fStack_e0);
  fStack_bc = (float)fVar7;
  fVar8 = (float10)fpatan((float10)local_168 / (float10)fStack_c4,
                          (float10)local_16c / (float10)fStack_c8);
  fVar7 = (float10)0;
  fStack_f4 = (float)fVar7;
  fStack_f8 = (float)fVar7;
  fStack_fc = (float)fVar7;
  fStack_100 = (float)fVar7;
  fStack_108 = (float)fVar7;
  fStack_10c = (float)fVar7;
  fStack_110 = (float)fVar7;
  fStack_114 = (float)fVar7;
  fStack_11c = (float)fVar7;
  local_120 = (float)fVar7;
  fStack_124 = (float)fVar7;
  afStack_134[3] = (float)fVar7;
  uStack_f0 = 0x3f800000;
  uStack_104 = 0x3f800000;
  uStack_118 = 0x3f800000;
  afStack_134[2] = 1.0;
  if (fVar7 != fVar8) {
    D3DXMatrixRotationZ(auStack_9c,(float)fVar8);
    D3DXMatrixMultiply(afStack_134,afStack_a4,afStack_134);
    fVar6 = (float10)fStack_e8;
  }
  if ((float10)0 != fVar6) {
    D3DXMatrixRotationY(auStack_9c,(float)fVar6);
    D3DXMatrixMultiply(afStack_134,afStack_a4,afStack_134);
  }
  if (fStack_bc != 0.0) {
    D3DXMatrixRotationX(auStack_9c,fStack_bc);
    D3DXMatrixMultiply(afStack_134,afStack_a4,afStack_134);
  }
  fStack_fc = fStack_dc;
  fStack_f8 = fStack_d8;
  fStack_f4 = fStack_d4;
  FUN_01005190(afStack_134 + 2);
  fStack_ac = *param_4 * 0.5;
  fStack_a8 = param_4[1] * 0.5;
  afStack_a4[0] = param_4[2] * 0.5;
  afStack_a4[1] = 0.0;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x30);
  *(undefined2 *)(iVar5 + 4) = 0x30;
  iVar5 = hkpBoxShape::hkpBoxShape(auStack_b0,DAT_01b20754);
  if (iVar5 != 0) {
    FUN_009083c0(param_1,iVar5,0,auStack_60,param_5,param_6,param_7,param_8);
    return;
  }
  return;
}

// 0090BFF0  FUN_0090bff0  size=509  [between]
void FUN_0090bff0(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  LPVOID pvVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_74 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  fVar1 = (*param_3 + *param_2) * 0.5;
  local_60 = *param_2 - fVar1;
  fVar2 = (param_3[1] + param_2[1]) * 0.5;
  fStack_5c = param_2[1] - fVar2;
  fStack_6c = param_3[1] - fVar2;
  fStack_68 = (param_3[2] + param_2[2]) * 0.5;
  fStack_58 = param_2[2] - fStack_68;
  fStack_68 = param_3[2] - fStack_68;
  local_70 = *param_3 - fVar1;
  uStack_54 = 0;
  fVar5 = (local_60 - local_70) * (local_60 - local_70);
  fVar6 = (fStack_5c - fStack_6c) * (fStack_5c - fStack_6c);
  fVar7 = (fStack_58 - fStack_68) * (fStack_58 - fStack_68);
  uStack_64 = 0;
  fVar8 = fVar6 + fVar5 + fVar7;
  auVar9._4_4_ = fVar6 + fVar5 + fVar7;
  auVar9._0_4_ = fVar8;
  auVar9._8_4_ = fVar6 + fVar5 + fVar7;
  auVar9._12_4_ = fVar6 + fVar5 + fVar7;
  auVar9 = rsqrtps(ZEXT416((uint)fStack_68),auVar9);
  fVar5 = auVar9._0_4_;
  fVar5 = (float)(~-(uint)(fVar8 <= 0.0) &
                 (uint)((3.0 - fVar5 * fVar8 * fVar5) * fVar5 * 0.5 * fVar8));
  if (fVar5 <= 0.0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar4 + 4) = 0x20;
    iVar4 = hkpSphereShape::hkpSphereShape(param_4);
  }
  else {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar4 + 4) = 0x40;
    iVar4 = hkpCapsuleShape::hkpCapsuleShape(&uStack_64,auStack_74,param_4);
  }
  if (iVar4 == 0) {
    return;
  }
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_18 = 0x3f800000;
  fStack_24 = fVar5;
  fStack_20 = fVar1;
  fStack_1c = fVar2;
  FUN_009083c0(param_1,iVar4,0,&uStack_54,param_5,param_6,param_7,param_8);
  return;
}

// 0090C1F0  FUN_0090c1f0  size=373  [between]
void FUN_0090c1f0(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined1 auStack_74 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  fVar1 = (*param_3 + *param_2) * 0.5;
  local_60 = *param_2 - fVar1;
  fVar2 = (param_3[1] + param_2[1]) * 0.5;
  fStack_5c = param_2[1] - fVar2;
  fStack_6c = param_3[1] - fVar2;
  fStack_68 = (param_3[2] + param_2[2]) * 0.5;
  fStack_58 = param_2[2] - fStack_68;
  fStack_68 = param_3[2] - fStack_68;
  uStack_54 = 0;
  local_70 = *param_3 - fVar1;
  uStack_64 = 0;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x60);
  *(undefined2 *)(iVar4 + 4) = 0x60;
  iVar4 = hkpCylinderShape::hkpCylinderShape(&uStack_64,auStack_74,param_4,DAT_01b20754);
  if (iVar4 == 0) {
    return;
  }
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_18 = 0x3f800000;
  fStack_20 = fVar1;
  fStack_1c = fVar2;
  FUN_009083c0(param_1,iVar4,0,&uStack_54,param_5,param_6,param_7,param_8);
  return;
}

// 0090C370  FUN_0090c370  size=191  [between]
void FUN_0090c370(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
  *(undefined2 *)(iVar2 + 4) = 0x20;
  iVar2 = hkpSphereShape::hkpSphereShape(param_3);
  if (iVar2 == 0) {
    return;
  }
  uStack_20 = param_2[1];
  uStack_1c = param_2[2];
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = *param_2;
  uStack_18 = 0x3f800000;
  FUN_009083c0(param_1,iVar2,0,&uStack_54,param_4,param_5,param_6,param_7);
  return;
}

// 0090C430  FUN_0090c430  size=880  [between]
undefined4
FUN_0090c430(undefined4 param_1,undefined4 *param_2,float *param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fStack_118;
  float fStack_114;
  undefined4 local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [76];
  
  if (param_4 != 0) {
    FUN_01006000();
    if (param_3[2] != 0.0) {
      D3DXMatrixRotationZ(&local_110,param_3[2]);
      D3DXMatrixMultiply(&stack0xfffffe98,&fStack_118,&stack0xfffffe98);
    }
    if (param_3[1] != 0.0) {
      D3DXMatrixRotationY(&local_110,param_3[1]);
      D3DXMatrixMultiply(&stack0xfffffe98,&fStack_118,&stack0xfffffe98);
    }
    if (*param_3 != 0.0) {
      D3DXMatrixRotationX(&local_110,*param_3);
      D3DXMatrixMultiply(&stack0xfffffe98,&fStack_118,&stack0xfffffe98);
    }
    uStack_c0 = *param_2;
    uStack_bc = param_2[1];
    uStack_b8 = param_2[2];
    fStack_ac = 1.0;
    fStack_a8 = 1.0;
    fStack_114 = 0.0;
    fStack_c4 = 1.0;
    fVar2 = (float10)FUN_00ddbaa0(0x80000000);
    fStack_118 = (float)fVar2;
    fVar3 = (float10)fpatan((float10)fStack_114,(float10)fStack_c4);
    fStack_a0 = (float)fVar3;
    fVar4 = (float10)fpatan((float10)0.0 / (float10)fStack_a8,(float10)1.0 / (float10)fStack_ac);
    fVar3 = (float10)0;
    fStack_d8 = (float)fVar3;
    fStack_dc = (float)fVar3;
    fStack_e0 = (float)fVar3;
    fStack_e4 = (float)fVar3;
    fStack_ec = (float)fVar3;
    fStack_f0 = (float)fVar3;
    fStack_f4 = (float)fVar3;
    fStack_f8 = (float)fVar3;
    fStack_100 = (float)fVar3;
    fStack_104 = (float)fVar3;
    fStack_108 = (float)fVar3;
    fStack_10c = (float)fVar3;
    uStack_d4 = 0x3f800000;
    uStack_e8 = 0x3f800000;
    uStack_fc = 0x3f800000;
    local_110 = 0x3f800000;
    if (fVar3 != fVar4) {
      D3DXMatrixRotationZ(auStack_90,(float)fVar4);
      D3DXMatrixMultiply(&fStack_118,auStack_98,&fStack_118);
      fVar2 = (float10)fStack_118;
    }
    if ((float10)0 != fVar2) {
      D3DXMatrixRotationY(auStack_90,(float)fVar2);
      D3DXMatrixMultiply(&fStack_118,auStack_98,&fStack_118);
    }
    if (fStack_a0 != 0.0) {
      D3DXMatrixRotationX(auStack_90,fStack_a0);
      D3DXMatrixMultiply(&fStack_118,auStack_98,&fStack_118);
    }
    fStack_e0 = (float)uStack_c0;
    fStack_dc = (float)uStack_bc;
    fStack_d8 = (float)uStack_b8;
    FUN_01005190(&local_110);
    uVar1 = FUN_009083c0(param_1,param_4,param_5,auStack_50,param_6,param_7,param_8,param_9);
    return uVar1;
  }
  return 0;
}

// 0090C7A0  FUN_0090c7a0  size=165  [between]
undefined4
FUN_0090c7a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_00860de0();
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  FUN_01006000();
  uVar3 = FUN_009083c0(param_1,uVar3,param_3,param_2 + 0xf0,*(undefined4 *)(param_2 + 0x2c),param_4,
                       param_5,param_6);
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    piVar1 = (int *)(iVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return uVar3;
}

// 0090C850  FUN_0090c850  size=461  [between]
void FUN_0090c850(undefined4 param_1,undefined4 *param_2,float *param_3,float *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  LPVOID pvVar1;
  int iVar2;
  undefined1 auStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [2];
  undefined1 local_90 [60];
  undefined1 auStack_54 [80];
  
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_a4 = 0x3f800000;
  local_b8 = 0x3f800000;
  local_cc = 0x3f800000;
  local_e0 = 0x3f800000;
  if (param_3[2] != 0.0) {
    D3DXMatrixRotationZ(local_90,param_3[2]);
    D3DXMatrixMultiply(auStack_e8,afStack_98,auStack_e8);
  }
  if (param_3[1] != 0.0) {
    D3DXMatrixRotationY(local_90,param_3[1]);
    D3DXMatrixMultiply(auStack_e8,afStack_98,auStack_e8);
  }
  if (*param_3 != 0.0) {
    D3DXMatrixRotationX(local_90,*param_3);
    D3DXMatrixMultiply(auStack_e8,afStack_98,auStack_e8);
  }
  local_b0 = *param_2;
  local_ac = param_2[1];
  local_a8 = param_2[2];
  FUN_01005190(&local_e0);
  fStack_a0 = *param_4 * 0.5;
  fStack_9c = param_4[1] * 0.5;
  afStack_98[0] = param_4[2] * 0.5;
  afStack_98[1] = 0.0;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x30);
  *(undefined2 *)(iVar2 + 4) = 0x30;
  iVar2 = hkpBoxShape::hkpBoxShape(&local_a4,DAT_01b20754);
  if (iVar2 == 0) {
    return;
  }
  FUN_00908ef0(param_1,iVar2,auStack_54,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}

// 0090CA20  FUN_0090ca20  size=197  [between]
void FUN_0090ca20(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
  *(undefined2 *)(iVar2 + 4) = 0x20;
  iVar2 = hkpSphereShape::hkpSphereShape(param_3);
  if (iVar2 == 0) {
    return;
  }
  uStack_20 = param_2[1];
  uStack_1c = param_2[2];
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = *param_2;
  uStack_18 = 0x3f800000;
  FUN_00908ef0(param_1,iVar2,&uStack_54,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

// 0090CAF0  FUN_0090caf0  size=239  [between]
void FUN_0090caf0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  LPVOID pvVar1;
  int iVar2;
  undefined1 auStack_74 [4];
  undefined4 local_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [20];
  
  FUN_01005190(param_2);
  fStack_5c = param_3 * 0.5;
  fStack_6c = param_3 * -0.5;
  local_60 = 0;
  uStack_58 = 0;
  auStack_54[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x60);
  *(undefined2 *)(iVar2 + 4) = 0x60;
  iVar2 = hkpCylinderShape::hkpCylinderShape(&uStack_64,auStack_74,param_4,DAT_01b20754);
  if (iVar2 == 0) {
    return;
  }
  FUN_00908ef0(param_1,iVar2,auStack_54,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}

// 0090CBE0  FUN_0090cbe0  size=1102  [between]
void FUN_0090cbe0(undefined4 param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  LPVOID pvVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  float fStack_138;
  float afStack_134 [4];
  float fStack_124;
  float local_120;
  float fStack_11c;
  undefined4 uStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_bc;
  undefined1 auStack_b0 [4];
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [2];
  undefined1 auStack_9c [60];
  undefined1 auStack_60 [92];
  
  local_170 = 0.0;
  local_16c = 0.0;
  local_168 = param_4[2] * 0.5;
  FUN_00ddc1d0(&local_120,param_3,5);
  D3DXVec3TransformNormal(&local_170,&local_170,&local_120);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fStack_174 = param_2[2] + fStack_174;
  local_170 = param_2[3] + local_170;
  afStack_134[0] = 0.0;
  fStack_138 = 0.0;
  fStack_13c = 0.0;
  uStack_140 = 0;
  fStack_148 = 0.0;
  fStack_14c = 0.0;
  uStack_150 = 0;
  fStack_154 = 0.0;
  fStack_15c = 0.0;
  uStack_160 = 0;
  fStack_164 = 0.0;
  local_168 = 0.0;
  afStack_134[1] = 1.0;
  fStack_144 = 1.0;
  fStack_158 = 1.0;
  local_16c = 1.0;
  if (param_3[2] != 0.0) {
    D3DXMatrixRotationZ(afStack_134 + 2,param_3[2]);
    D3DXMatrixMultiply(&fStack_174,afStack_134,&fStack_174);
  }
  if (param_3[1] != 0.0) {
    D3DXMatrixRotationY(afStack_134 + 2,param_3[1]);
    D3DXMatrixMultiply(&fStack_174,afStack_134,&fStack_174);
  }
  if (*param_3 != 0.0) {
    D3DXMatrixRotationX(afStack_134 + 2,*param_3);
    D3DXMatrixMultiply(&fStack_174,afStack_134,&fStack_174);
  }
  afStack_134[0] = fStack_174;
  fStack_d4 = fStack_174;
  fStack_c8 = SQRT(fStack_164 * fStack_164 + local_16c * local_16c + local_168 * local_168);
  fStack_c4 = SQRT(fStack_154 * fStack_154 + fStack_15c * fStack_15c + fStack_158 * fStack_158);
  fVar3 = SQRT(fStack_144 * fStack_144 + fStack_148 * fStack_148 + fStack_14c * fStack_14c);
  fStack_e4 = fStack_154 / fVar3;
  fStack_e0 = fStack_144 / fVar3;
  fStack_13c = unaff_ESI + fVar1;
  fStack_138 = fVar2 + unaff_EBX;
  fStack_dc = unaff_ESI + fVar1;
  fStack_d8 = fVar2 + unaff_EBX;
  fVar6 = (float10)FUN_00ddbaa0(-(fStack_164 / fVar3));
  fStack_e8 = (float)fVar6;
  fVar7 = (float10)fpatan((float10)fStack_e4,(float10)fStack_e0);
  fStack_bc = (float)fVar7;
  fVar8 = (float10)fpatan((float10)local_168 / (float10)fStack_c4,
                          (float10)local_16c / (float10)fStack_c8);
  fVar7 = (float10)0;
  fStack_f4 = (float)fVar7;
  fStack_f8 = (float)fVar7;
  fStack_fc = (float)fVar7;
  fStack_100 = (float)fVar7;
  fStack_108 = (float)fVar7;
  fStack_10c = (float)fVar7;
  fStack_110 = (float)fVar7;
  fStack_114 = (float)fVar7;
  fStack_11c = (float)fVar7;
  local_120 = (float)fVar7;
  fStack_124 = (float)fVar7;
  afStack_134[3] = (float)fVar7;
  uStack_f0 = 0x3f800000;
  uStack_104 = 0x3f800000;
  uStack_118 = 0x3f800000;
  afStack_134[2] = 1.0;
  if (fVar7 != fVar8) {
    D3DXMatrixRotationZ(auStack_9c,(float)fVar8);
    D3DXMatrixMultiply(afStack_134,afStack_a4,afStack_134);
    fVar6 = (float10)fStack_e8;
  }
  if ((float10)0 != fVar6) {
    D3DXMatrixRotationY(auStack_9c,(float)fVar6);
    D3DXMatrixMultiply(afStack_134,afStack_a4,afStack_134);
  }
  if (fStack_bc != 0.0) {
    D3DXMatrixRotationX(auStack_9c,fStack_bc);
    D3DXMatrixMultiply(afStack_134,afStack_a4,afStack_134);
  }
  fStack_fc = fStack_dc;
  fStack_f8 = fStack_d8;
  fStack_f4 = fStack_d4;
  FUN_01005190(afStack_134 + 2);
  fStack_ac = *param_4 * 0.5;
  fStack_a8 = param_4[1] * 0.5;
  afStack_a4[0] = param_4[2] * 0.5;
  afStack_a4[1] = 0.0;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x30);
  *(undefined2 *)(iVar5 + 4) = 0x30;
  iVar5 = hkpBoxShape::hkpBoxShape(auStack_b0,DAT_01b20754);
  if (iVar5 != 0) {
    FUN_00909ac0(param_1,iVar5,0,auStack_60,param_5,param_6,param_7,param_8);
    return;
  }
  return;
}

// 0090D030  FUN_0090d030  size=509  [between]
void FUN_0090d030(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  LPVOID pvVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_74 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  fVar1 = (*param_3 + *param_2) * 0.5;
  local_60 = *param_2 - fVar1;
  fVar2 = (param_3[1] + param_2[1]) * 0.5;
  fStack_5c = param_2[1] - fVar2;
  fStack_6c = param_3[1] - fVar2;
  fStack_68 = (param_3[2] + param_2[2]) * 0.5;
  fStack_58 = param_2[2] - fStack_68;
  fStack_68 = param_3[2] - fStack_68;
  local_70 = *param_3 - fVar1;
  uStack_54 = 0;
  fVar5 = (local_60 - local_70) * (local_60 - local_70);
  fVar6 = (fStack_5c - fStack_6c) * (fStack_5c - fStack_6c);
  fVar7 = (fStack_58 - fStack_68) * (fStack_58 - fStack_68);
  uStack_64 = 0;
  fVar8 = fVar6 + fVar5 + fVar7;
  auVar9._4_4_ = fVar6 + fVar5 + fVar7;
  auVar9._0_4_ = fVar8;
  auVar9._8_4_ = fVar6 + fVar5 + fVar7;
  auVar9._12_4_ = fVar6 + fVar5 + fVar7;
  auVar9 = rsqrtps(ZEXT416((uint)fStack_68),auVar9);
  fVar5 = auVar9._0_4_;
  fVar5 = (float)(~-(uint)(fVar8 <= 0.0) &
                 (uint)((3.0 - fVar5 * fVar8 * fVar5) * fVar5 * 0.5 * fVar8));
  if (fVar5 <= 0.0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar4 + 4) = 0x20;
    iVar4 = hkpSphereShape::hkpSphereShape(param_4);
  }
  else {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar4 + 4) = 0x40;
    iVar4 = hkpCapsuleShape::hkpCapsuleShape(&uStack_64,auStack_74,param_4);
  }
  if (iVar4 == 0) {
    return;
  }
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_18 = 0x3f800000;
  fStack_24 = fVar5;
  fStack_20 = fVar1;
  fStack_1c = fVar2;
  FUN_00909ac0(param_1,iVar4,0,&uStack_54,param_5,param_6,param_7,param_8);
  return;
}

// 0090D230  FUN_0090d230  size=373  [between]
void FUN_0090d230(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined1 auStack_74 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  fVar1 = (*param_3 + *param_2) * 0.5;
  local_60 = *param_2 - fVar1;
  fVar2 = (param_3[1] + param_2[1]) * 0.5;
  fStack_5c = param_2[1] - fVar2;
  fStack_6c = param_3[1] - fVar2;
  fStack_68 = (param_3[2] + param_2[2]) * 0.5;
  fStack_58 = param_2[2] - fStack_68;
  fStack_68 = param_3[2] - fStack_68;
  uStack_54 = 0;
  local_70 = *param_3 - fVar1;
  uStack_64 = 0;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x60);
  *(undefined2 *)(iVar4 + 4) = 0x60;
  iVar4 = hkpCylinderShape::hkpCylinderShape(&uStack_64,auStack_74,param_4,DAT_01b20754);
  if (iVar4 == 0) {
    return;
  }
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_18 = 0x3f800000;
  fStack_20 = fVar1;
  fStack_1c = fVar2;
  FUN_00909ac0(param_1,iVar4,0,&uStack_54,param_5,param_6,param_7,param_8);
  return;
}

// 0090D3B0  FUN_0090d3b0  size=191  [between]
void FUN_0090d3b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
  *(undefined2 *)(iVar2 + 4) = 0x20;
  iVar2 = hkpSphereShape::hkpSphereShape(param_3);
  if (iVar2 == 0) {
    return;
  }
  uStack_20 = param_2[1];
  uStack_1c = param_2[2];
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = *param_2;
  uStack_18 = 0x3f800000;
  FUN_00909ac0(param_1,iVar2,0,&uStack_54,param_4,param_5,param_6,param_7);
  return;
}

// 0090D470  FUN_0090d470  size=879  [between]
undefined4
FUN_0090d470(undefined4 param_1,undefined4 *param_2,float *param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fStack_118;
  float fStack_114;
  undefined4 local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [76];
  
  if (param_4 != 0) {
    FUN_01006000();
    if (param_3[2] != 0.0) {
      D3DXMatrixRotationZ(&local_110,param_3[2]);
      D3DXMatrixMultiply(&stack0xfffffe98,&fStack_118,&stack0xfffffe98);
    }
    if (param_3[1] != 0.0) {
      D3DXMatrixRotationY(&local_110,param_3[1]);
      D3DXMatrixMultiply(&stack0xfffffe98,&fStack_118,&stack0xfffffe98);
    }
    if (*param_3 != 0.0) {
      D3DXMatrixRotationX(&local_110,*param_3);
      D3DXMatrixMultiply(&stack0xfffffe98,&fStack_118,&stack0xfffffe98);
    }
    uStack_c0 = *param_2;
    uStack_bc = param_2[1];
    uStack_b8 = param_2[2];
    fStack_ac = 1.0;
    fStack_a8 = 1.0;
    fStack_114 = 0.0;
    fStack_c4 = 1.0;
    fVar2 = (float10)FUN_00ddbaa0(0x80000000);
    fStack_118 = (float)fVar2;
    fVar3 = (float10)fpatan((float10)fStack_114,(float10)fStack_c4);
    fStack_a0 = (float)fVar3;
    fVar4 = (float10)fpatan((float10)0.0 / (float10)fStack_a8,(float10)1.0 / (float10)fStack_ac);
    fVar3 = (float10)0;
    fStack_d8 = (float)fVar3;
    fStack_dc = (float)fVar3;
    fStack_e0 = (float)fVar3;
    fStack_e4 = (float)fVar3;
    fStack_ec = (float)fVar3;
    fStack_f0 = (float)fVar3;
    fStack_f4 = (float)fVar3;
    fStack_f8 = (float)fVar3;
    fStack_100 = (float)fVar3;
    fStack_104 = (float)fVar3;
    fStack_108 = (float)fVar3;
    fStack_10c = (float)fVar3;
    uStack_d4 = 0x3f800000;
    uStack_e8 = 0x3f800000;
    uStack_fc = 0x3f800000;
    local_110 = 0x3f800000;
    if (fVar3 != fVar4) {
      D3DXMatrixRotationZ(auStack_90,(float)fVar4);
      D3DXMatrixMultiply(&fStack_118,auStack_98,&fStack_118);
      fVar2 = (float10)fStack_118;
    }
    if ((float10)0 != fVar2) {
      D3DXMatrixRotationY(auStack_90,(float)fVar2);
      D3DXMatrixMultiply(&fStack_118,auStack_98,&fStack_118);
    }
    if (fStack_a0 != 0.0) {
      D3DXMatrixRotationX(auStack_90,fStack_a0);
      D3DXMatrixMultiply(&fStack_118,auStack_98,&fStack_118);
    }
    fStack_e0 = (float)uStack_c0;
    fStack_dc = (float)uStack_bc;
    fStack_d8 = (float)uStack_b8;
    FUN_01005190(&local_110);
    uVar1 = FUN_00909ac0(param_1,param_4,0,auStack_50,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0;
}

// 0090D7E0  RayCastManager::RayCastManager  size=220  [class]
undefined4 * __fastcall RayCastManager::RayCastManager(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[2] = 0;
  Hw::cHeapVariable::cHeapVariable();
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  return param_1;
}

// 0090D8C0  FUN_0090d8c0  size=204  [callgraph]
void FUN_0090d8c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  if (((*param_5 != 0.0) && (param_5[1] != 0.0)) && (param_5[2] != 0.0)) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_2();
      iVar2 = RayCastManager::set(iVar1,param_1,param_7);
      if (iVar2 == 0) {
        return;
      }
    }
    else if (param_1 != *(int **)(iVar1 + 0x10)) {
      FUN_00dd5650(&DAT_0164c08c);
      FUN_00dd5650(&DAT_0164c454,param_7);
      return;
    }
    iVar2 = FUN_0090cbe0(param_2,param_3,param_4,param_5,param_6,param_7,5,0);
    if (iVar2 == 0) {
      *(undefined2 *)(iVar1 + 0x1a) = 1;
    }
    return;
  }
  return;
}

