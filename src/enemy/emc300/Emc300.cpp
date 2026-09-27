// src/enemy/emc300/Emc300.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0083DFB0..00AB98D0, 17 functions

#include "types.h"

// 0083DFB0  Emc300::vf44  size=80  [class]
void __fastcall Emc300::vf44(int param_1)

{
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a944d0();
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  BehaviorEmBase::vf44();
  return;
}

// 0083E000  Emc300::vf54  size=26  [class]
void __fastcall Emc300::vf54(int param_1)

{
  BehaviorEmBase::vf54();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 0083E020  Emc300::vf50  size=16  [class]
void Emc300::vf50(void)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  return;
}

// 0083E030  Emc300::vf264  size=52  [class]
undefined4 __thiscall Emc300::vf264(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xab0);
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  return 1;
}

// 0083E070  Emc300::vf1A4  size=13  [class]
void __fastcall Emc300::vf1A4(int param_1)

{
  *(undefined4 *)(param_1 + 0xebc) = 1;
  return;
}

// 0083E080  Emc300::vf1D0  size=34  [class]
void __thiscall Emc300::vf1D0(undefined4 param_1,int param_2)

{
  if ((*(int *)(param_2 + 0x94) != 0) && (*(int *)(param_2 + 0xec) != 0)) {
    FUN_00a8e5d0(param_1,param_2,0);
  }
  return;
}

// 0083E0B0  Emc300::vf34C  size=1  [class]
void Emc300::vf34C(void)

{
  return;
}

// 0083E0C0  Emc300::vf0C  size=30  [class]
void __fastcall Emc300::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0xec4) != 0) {
    FUN_00d7acc0();
    *(undefined4 *)(param_1 + 0xec4) = 0;
  }
  return;
}

// 0083E0E0  Emc300::vf4C  size=674  [class]
void __fastcall Emc300::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00ac80a0(0x3f800000,0x3f800000);
  BehaviorEmBase::vf4C();
  if ((((param_1[0x3b0] == 0) && (param_1[0x3af] == 0)) && ((*(byte *)(param_1 + 0x2c0) & 1) != 0))
     && (param_1[0x2c2] != -1)) {
    iVar2 = param_1[0x188];
    if (iVar2 == 0) {
      FUN_00a8d6c0(param_1 + 0x10);
      param_1[0x188] = param_1[0x188] + 1;
      return;
    }
    if (iVar2 == 1) {
      param_1[0x3ac] = 0x3dcccccd;
      param_1[0x3ad] = 0x40400000;
      FUN_00a8d790(param_1 + 0x3a4);
      local_20 = (float)param_1[0x3a4] - (float)param_1[0x14];
      local_1c = (float)param_1[0x3a5] - (float)param_1[0x15];
      local_18 = (float)param_1[0x3a6] - (float)param_1[0x16];
      local_14 = 1.0;
      fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_18 = 0.0;
        local_1c = 1.0;
        local_20 = 0.0;
      }
      param_1[0x3a8] = 0;
      param_1[0x3a9] = 0;
      param_1[0x3aa] = 0;
      param_1[0x3ab] = 0x3f800000;
      fVar1 = (float)param_1[0x3ac];
      param_1[0x3a8] = (int)(fVar1 * local_20);
      param_1[0x3a9] = (int)(local_1c * fVar1);
      param_1[0x3aa] = (int)(local_18 * fVar1);
      param_1[0x3ab] = (int)(fVar1 * local_14);
      param_1[0x188] = param_1[0x188] + 1;
      return;
    }
    if (iVar2 == 2) {
      iVar2 = FUN_00a97e60(param_1[0x3ac],0);
      if (iVar2 != 1) {
        pfVar3 = (float *)(**(code **)(*param_1 + 0x68))();
        local_20 = *pfVar3;
        local_1c = pfVar3[1];
        local_18 = pfVar3[2];
        local_14 = pfVar3[3];
        fVar4 = (float10)FUN_00a92ff0();
        local_20 = (float)((float10)(float)param_1[0x3a8] * fVar4 + (float10)local_20);
        local_1c = (float)((float10)(float)param_1[0x3a9] * fVar4 + (float10)local_1c);
        local_18 = (float)((float10)(float)param_1[0x3aa] * fVar4 + (float10)local_18);
        local_14 = (float)((float10)(float)param_1[0x3ab] * fVar4 + (float10)local_14);
        (**(code **)(*param_1 + 0x6c))(&local_20);
        return;
      }
      param_1[0x188] = param_1[0x188] + 1;
      param_1[0x3ae] = 0;
      return;
    }
    if (iVar2 == 3) {
      fVar4 = (float10)FUN_00a92ff0();
      fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[0x3ae];
      param_1[0x3ae] = (int)(float)fVar4;
      if ((float10)(float)param_1[0x3ad] < fVar4) {
        param_1[0x188] = 1;
      }
    }
  }
  return;
}

// 0083E390  FUN_0083e390  size=227  [between]
void __thiscall FUN_0083e390(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((((param_1[0x139] == 0) && (iVar1 = *param_2, iVar1 != 0)) && (iVar1 != 1)) &&
     (((iVar1 != 2 && (iVar1 != 0x1b0)) && (iVar1 != 0x147)))) {
    (**(code **)(*param_1 + 0x30c))(param_2[1],0);
    param_1[0x3af] = 1;
    uVar2 = 0;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c8a0();
    }
    (**(code **)(*param_1 + 0x220))(0x40000000);
    fVar3 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
    param_1[0x245] = (int)(float)fVar3;
    (**(code **)(*param_1 + 0x198))(uVar2,param_2,1);
    if (param_1[0x21c] < 1) {
      param_1[0x21c] = 0;
      param_1[0x139] = 1;
    }
  }
  return;
}

// 0083E480  FUN_0083e480  size=309  [between]
undefined4 __fastcall FUN_0083e480(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_100;
  uint local_84;
  uint local_80;
  
  FUN_004105d0();
  local_10c = 9999;
  if ((*(int *)(param_1 + 0xaf4) == 1) || (*(int *)(param_1 + 0x4a0) == 1)) {
    local_10c = 300;
  }
  local_84 = local_84 | 0x1102000;
  local_80 = local_80 | 0x2000800;
  local_104 = 0;
  local_110 = 0x1d9;
  local_100 = 0xa01;
  local_108 = local_10c;
  uVar2 = CollisionAttackData::CollisionAttackData(&local_110);
  uVar2 = FUN_009f8b40(uVar2);
  piVar3 = (int *)CollisionSphere::CollisionSphere(0xb,uVar2);
  if (piVar3 == (int *)0x0) {
    FUN_00dd5650(&DAT_01648910);
    return 0;
  }
  piVar3[0xe0] = local_110;
  piVar3[0xe3] = 0;
  iVar1 = *piVar3;
  uVar2 = FUN_009f8b40(0);
  (**(code **)(iVar1 + 0x20))(3,uVar2);
  FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
  piVar3[0x144] = 0x3e99999a;
  uVar2 = FUN_00a8d280();
  FUN_00a8c370(piVar3,uVar2);
  FUN_00d7b0f0();
  FUN_00d7b890();
  *(int **)(param_1 + 0xec4) = piVar3;
  return 1;
}

// 0083E5C0  FUN_0083e5c0  size=487  [between]
void __fastcall FUN_0083e5c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00e5e0c0("emc300_se_mov_idle_stop",param_1,0xffffffff,0);
    if ((param_1[0x3b1] != 0) && (*(int *)(param_1[0x3b1] + 0x35c) != 0)) {
      FUN_00d7acc0();
      param_1[0x3b1] = 0;
    }
    (**(code **)(*param_1 + 0x20))();
    FUN_00aa92c0(1);
    iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
    if ((iVar2 != 0) && (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 != 0)) {
      puVar3 = *(undefined4 **)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 4) = 1;
      uVar6 = 9999;
      if ((param_1[0x2bd] == 1) || (param_1[0x128] == 1)) {
        uVar6 = 300;
      }
      puVar3[1] = uVar6;
      puVar3[2] = uVar6;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 1;
      *puVar3 = 0x1d9;
      puVar3[0x23] = puVar3[0x23] | 0x1100000;
      puVar3[0x24] = puVar3[0x24] | 0x2000000;
      puVar3[0x23] = puVar3[0x23] | 0x2000;
      puVar3[0x24] = puVar3[0x24] | 0x800;
      *(undefined1 *)((int)puVar3 + 0x11) = 10;
      puVar3 = (undefined4 *)FUN_009f8b60();
      piVar4 = (int *)FUN_00602cb0(5,*puVar3,iVar2);
      if (piVar4 != (int *)0x0) {
        iVar2 = *piVar4;
        uVar6 = (**(code **)(*param_1 + 0x68))();
        (**(code **)(iVar2 + 0x6c))(uVar6);
        piVar1 = (int *)piVar4[0x21c];
        piVar4[0x21d] = 0x3f000000;
        puVar3 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*piVar1 + 0x20))(0xb,*puVar3,0);
        piVar5 = (int *)FUN_00d773c0();
        (**(code **)(*piVar5 + 8))(piVar1);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar4[0x13c],0xffffffff);
        piVar1[0x144] = 0x3f800000;
        FUN_00d77580(0x3f800000,0x40400000,0x3e99999a);
        piVar1[0xe0] = 0x1d9;
        FUN_00d7b890();
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x40400000;
  }
  else if (iVar2 == 1) {
    fVar7 = (float10)FUN_00a92ff0();
    fVar7 = (float10)(float)param_1[0x248] - fVar7 * (float10)0.016666668;
    param_1[0x248] = (int)(float)fVar7;
    if (fVar7 <= (float10)0) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 0083E7B0  Emc300::vf40  size=433  [class]
undefined4 __fastcall Emc300::vf40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = EmBaseDLC::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 1;
  FUN_00a92f90(1);
  FUN_00e26e50(uVar3);
  FUN_00a9e290(&DAT_0163b5f4,0,0,0,0,0xbf800000,0x3f800000);
  *(undefined4 *)(param_1 + 0xec4) = 0;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  FUN_00410540(1,&DAT_01b7bd48);
  uVar3 = FUN_00a8d2a0();
  puVar2 = (undefined4 *)FUN_009f8b60();
  iVar1 = CollisionSphere::CollisionSphere(4,*puVar2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    *(undefined4 *)(iVar1 + 0x510) = 0x3f000000;
    _strncpy_s((char *)(iVar1 + 0x394),0x20,"FloatMineBody",0x1f);
    FUN_00a93a00(iVar1,uVar3);
    FUN_00d7b0f0();
    FUN_00d7b890();
    iVar1 = FUN_0083e480();
    if (iVar1 != 0) {
      FUN_009fd240();
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
      }
      *(undefined4 *)(param_1 + 0xe90) = 0;
      *(undefined4 *)(param_1 + 0xe94) = 0;
      *(undefined4 *)(param_1 + 0xe98) = 0;
      *(undefined4 *)(param_1 + 0xea0) = 0;
      *(undefined4 *)(param_1 + 0xea4) = 0;
      *(undefined4 *)(param_1 + 0xea8) = 0;
      *(undefined4 *)(param_1 + 0xeac) = 0x3f800000;
      FUN_00a8edf0(1);
      *(undefined4 *)(param_1 + 0xebc) = 0;
      FUN_00aa92c0(0x208);
      FUN_00aa92c0(0);
      *(undefined4 *)(param_1 + 0xec0) = 0;
      FUN_00e5e0c0("emc300_se_mov_idle",param_1,0xffffffff,0);
      return 1;
    }
  }
  return 0;
}

// 0083E970  Emc300::vf48  size=651  [class]
void __fastcall Emc300::vf48(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [24];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  
  EmBaseDLC::vf48();
  if ((param_1[0x3af] == 0) && ((DAT_01bea094 & 0x20000) == 0)) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      FID_conflict__memcpy(auStack_90,(void *)(iVar2 + 0x10),0x40);
      uStack_b0 = uStack_60;
      uStack_ac = uStack_5c;
      uStack_a8 = uStack_58;
      fStack_a4 = fStack_54;
      fStack_c4 = 0.35;
      iVar2 = FUN_00d467a0();
      if (iVar2 == 0) {
        D3DXVec3TransformNormal(auStack_c0);
        fStack_78 = fStack_78 + 0.0;
        fStack_74 = fStack_74 + 1.0;
        fStack_70 = fStack_70 + fStack_d0;
      }
      else {
        fStack_c4 = 1.0;
        uStack_a0 = 0;
        uStack_9c = 0x3f800000;
        uStack_98 = 0xbf800000;
        uStack_94 = 0x3f800000;
        D3DXVec3TransformNormal(auStack_c0);
        FID_conflict__memcpy(&uStack_5c,&uStack_9c,0x40);
        fStack_bc = fStack_2c + fStack_cc;
        fStack_b8 = fStack_c8 + fStack_28;
        fStack_b4 = fStack_c4 + fStack_24;
        uStack_b0 = uStack_20;
        fStack_a4 = fStack_a4 * -1.0;
        fStack_2c = fStack_bc;
        fStack_28 = fStack_b8;
        fStack_24 = fStack_b4;
        D3DXVec3TransformNormal(&fStack_cc,&uStack_ac,&uStack_9c);
        FID_conflict__memcpy(auStack_68,&uStack_a8,0x40);
      }
      uVar3 = (**(code **)(*param_1 + 0x68))(0x3e99999a,&fStack_c8,&stack0xffffff08,0x3fe66666);
      iVar2 = FUN_00d96ac0(uVar3);
      if (iVar2 != 0) {
        param_1[0x3af] = 1;
      }
    }
  }
  if ((param_1[0x3b0] == 0) && (param_1[0x3af] != 0)) {
    FUN_0083e5c0();
  }
  return;
}

// 0083EC00  Emc300::vf32C  size=194  [class]
undefined4 __fastcall Emc300::vf32C(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_160 [348];
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  iVar2 = FUN_00a8ef10();
  if ((iVar2 == 0) && (*(int *)(param_1 + 0xec0) == 0)) {
    iVar2 = FUN_00ac8a50();
    if (iVar2 == 0) {
      FUN_00ac2080(0);
    }
    piVar4 = *(int **)(param_1 + 0x67c);
    piVar5 = piVar4 + *(int *)(param_1 + 0x684) * 0x54;
    FUN_00445db0();
    iVar2 = -1;
    bVar1 = false;
    if (piVar4 != piVar5) {
      do {
        if ((*piVar4 != 0x147) && (iVar2 <= piVar4[1])) {
          bVar1 = true;
          FUN_00448f50(piVar4);
          iVar2 = piVar4[1];
        }
        piVar4 = piVar4 + 0x54;
      } while (piVar4 != piVar5);
      if (bVar1) {
        uVar3 = FUN_0083e390(local_160);
        return uVar3;
      }
    }
  }
  return 0;
}

// 00AB1570  Emc300::vf04  size=6  [class]
undefined * Emc300::vf04(void)

{
  return &DAT_01b35a30;
}

// 00AB98D0  Emc300::vf00  size=43  [class]
undefined4 __thiscall Emc300::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

