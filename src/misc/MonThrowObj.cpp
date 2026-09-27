// src/misc/MonThrowObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051B0D0..00AB9720, 26 functions

#include "mgrr.h"
#include "MonThrowObj.h"

// 0051B0D0  FUN_0051b0d0  size=20  [callgraph]
void __fastcall FUN_0051b0d0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  return;
}

// 0051B140  MonThrowObj::vf54  size=36  [class]
void __fastcall MonThrowObj::vf54(int param_1)

{
  if ((*(int *)(param_1 + 0x1208) != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f7700(param_1);
  }
  Behavior::vf54();
  return;
}

// 0051B170  MonThrowObj::vf1B8  size=92  [class]
void MonThrowObj::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_00eaa6e0(0x3f800000,0);
  iVar1 = FUN_00a7fde0();
  if (iVar1 < 2) {
    if (0 < param_3) {
      do {
        *param_1 = 0x42380;
        param_1 = param_1 + 3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (0 < param_3) {
    do {
      *param_1 = 0x42300;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}

// 0051B1D0  MonThrowObj::vf30  size=138  [class]
void __fastcall MonThrowObj::vf30(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x14d0) = 1;
  BehaviorAppBase::vf30();
  iVar2 = FUN_0094eae0();
  iVar5 = 3;
  iVar3 = FUN_009c4bf0();
  if (iVar3 == 0) {
    iVar5 = 6;
  }
  if (iVar2 < iVar5) {
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      uVar4 = FUN_009f8b40(0);
      FUN_009577e0(0x23a6f56d,param_1 + 0x130,uVar4);
      return;
    }
    uVar4 = FUN_009f8b40(0);
    FUN_009577e0(0x70dce4d0,param_1 + 0x130,uVar4);
  }
  return;
}

// 0051B260  MonThrowObj::thunk_vf19C  size=5  [class]
void __thiscall MonThrowObj::thunk_vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a0 [48];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(auStack_a0,(void *)(param_2 + 0x40),0x40);
  uStack_70 = uVar1;
  uStack_6c = uVar2;
  uStack_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),auStack_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 0051B290  FUN_0051b290  size=295  [callgraph]
void __thiscall FUN_0051b290(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00a7c950();
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  *(undefined4 *)(param_1 + 0x1204) = 0;
  *(undefined4 *)(param_1 + 0x1220) = *param_2;
  *(undefined4 *)(param_1 + 0x1224) = param_2[1];
  *(undefined4 *)(param_1 + 0x1228) = param_2[2];
  *(undefined4 *)(param_1 + 0x122c) = param_2[3];
  FUN_00e5e0c0("em01a0_se_atk_throw_car",param_1,0xffffffff,0);
  if ((param_4 != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f40f0(param_1);
    FUN_008f3c70();
    *(undefined4 *)(param_1 + 0x1208) = 1;
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x8c))(&local_20,param_3);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x41700000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xbc))(0x3f000000);
  }
  *(undefined4 *)(param_1 + 0x12c0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x12c4) = 1;
  FUN_00a8caf0(3,0,0,0);
  return;
}

// 0051B3C0  FUN_0051b3c0  size=128  [callgraph]
void __fastcall FUN_0051b3c0(int param_1)

{
  FUN_00a7c950();
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  *(undefined4 *)(param_1 + 0x1204) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1434) = 0xffffffff;
  FUN_00e5e0c0("em01a0_se_atk_throw_car",param_1,0xffffffff,0);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f40f0(param_1);
  }
  *(undefined4 *)(param_1 + 0x12c0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x12c4) = 1;
  FUN_00a8caf0(4,0,0,0);
  return;
}

// 0051B440  FUN_0051b440  size=246  [callgraph]
void __thiscall FUN_0051b440(int param_1,undefined4 param_2)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_00a7c950();
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  *(undefined4 *)(param_1 + 0x1204) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x14d8) = param_2;
  *(undefined4 *)(param_1 + 0x1434) = 0xffffffff;
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f40f0(param_1);
    FUN_008f3c70();
    *(undefined4 *)(param_1 + 0x1208) = 1;
    FUN_008f3cb0(param_1);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(1);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_34 = 0;
    uStack_30 = 0x41200000;
    uStack_2c = 0;
    uStack_28 = uStack_18;
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x8c))(&uStack_34,&uStack_24);
  }
  *(undefined4 *)(param_1 + 0x12c0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x12c4) = 1;
  FUN_00a8caf0(6,0,0,0);
  return;
}

// 0051E0F0  MonThrowObj::getAttackInfo  size=264  [class]
int __thiscall MonThrowObj::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar1 = *(uint **)(iVar2 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      uVar5 = 10;
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 0) {
        uVar5 = 0x4b;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 1) {
        uVar5 = 0x96;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 2) {
        uVar5 = 0xe1;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 3) {
        uVar5 = 300;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 4) {
        uVar5 = 0x5dc;
      }
      puVar1[1] = uVar5;
      puVar1[3] = 10;
      *(undefined1 *)(puVar1 + 4) = 0xf;
      puVar1[2] = 10;
      *puVar1 = (uint)*param_2;
      *(undefined2 *)(puVar1 + 0x21) = 0x4002;
      if (*param_2 == 4) {
        *puVar1 = 0x12f;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
        puVar1[0x23] = puVar1[0x23] | 0x20001000;
      }
      return iVar2;
    }
  }
  FUN_00dd5650(&DAT_01640ce0);
  return 0;
}

// 0051E200  MonThrowObj::vf50  size=270  [class]
void __fastcall MonThrowObj::vf50(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      iVar5 = FUN_00a12210(param_1[0x50d]);
      if (iVar5 != 0) {
        piVar7 = (int *)(iVar5 + 0x10);
        piVar8 = param_1 + 4;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        D3DXVec3TransformNormal(&local_20,param_1 + 0x510,(int *)(iVar5 + 0x10));
        fVar1 = *(float *)(iVar5 + 0x44);
        fVar2 = *(float *)(iVar5 + 0x48);
        param_1[0x10] = (int)(*(float *)(iVar5 + 0x40) + local_20);
        param_1[0x11] = (int)(fVar1 + fStack_1c);
        param_1[0x12] = (int)(fVar2 + fStack_18);
        fVar1 = *(float *)(iVar4 + 0x44);
        fVar2 = *(float *)(iVar4 + 0x48);
        fVar3 = *(float *)(iVar4 + 0x4c);
        param_1[0x52c] = (int)((float)param_1[0x10] - *(float *)(iVar4 + 0x40));
        param_1[0x52d] = (int)((float)param_1[0x11] - fVar1);
        param_1[0x52e] = (int)((float)param_1[0x12] - fVar2);
        param_1[0x52f] = (int)((float)param_1[0x13] - fVar3);
      }
    }
  }
  switchD_0080dbae::default();
  if ((param_1[0x482] == 0) && (param_1[0x1ec] != 0)) {
    FUN_008f3cb0(param_1);
  }
  BehaviorAppBase::vf50();
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    (**(code **)(*param_1 + 0x128))();
  }
  return;
}

// 0051E310  FUN_0051e310  size=77  [callgraph]
uint FUN_0051e310(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 0051E3B0  FUN_0051e3b0  size=309  [callgraph]
void __fastcall FUN_0051e3b0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_150 [4];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined4 local_12c;
  uint local_b4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x120c) == 0) {
    FUN_00eaa6e0(0x41f00000,0);
    FUN_00eaa6e0(0x3f800000,0);
    *(undefined4 *)(param_1 + 0x120c) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    FUN_00410710();
    local_12c = *(undefined4 *)(param_1 + 0x4f0);
    local_30 = 0x40400000;
    local_b4 = local_b4 | 0x100000;
    local_2c = 0x3f800000;
    local_150[0] = 1;
    local_28 = 0x3f800000;
    local_140 = 0x10c;
    local_13c = 0x14;
    local_20 = 0x3d888889;
    local_134 = 0;
    local_138 = 0;
    local_130 = 0xa00;
    local_24 = 1;
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    local_40 = *(undefined4 *)(param_1 + 0x40);
    local_3c = *(undefined4 *)(param_1 + 0x44);
    local_38 = *(undefined4 *)(param_1 + 0x48);
    local_34 = *(undefined4 *)(param_1 + 0x4c);
    local_18 = FUN_009f8b40();
    Behavior::createAttackImpactWave(local_150);
  }
  return;
}

// 0051E4F0  FUN_0051e4f0  size=656  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0051e59d) */
/* WARNING: Removing unreachable block (ram,0x0051e59f) */
/* WARNING: Removing unreachable block (ram,0x0051e5a1) */

void __thiscall
FUN_0051e4f0(int *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

{
  float fVar1;
  int *piVar2;
  float10 fVar3;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  local_70 = (float)param_1[0x10];
  local_6c = (float)param_1[0x11];
  local_68 = (float)param_1[0x12];
  local_90 = *param_2 - local_70;
  local_8c = param_2[1] - local_6c;
  local_88 = param_2[2] - local_68;
  local_84 = param_2[3] - (float)param_1[0x13];
  if (0.0 < local_88 * local_88 + local_90 * local_90 + local_8c * local_8c) {
    FUN_00ddf460(&local_90,&local_90);
    local_a0 = *param_3;
    local_9c = param_3[1];
    local_98 = param_3[2];
    local_94 = param_3[3];
    fVar1 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_a0,&local_a0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_a0 = 0.0;
      local_9c = 1.0;
      local_98 = 0.0;
    }
    local_7c = local_9c * local_88 - local_98 * local_8c;
    local_78 = local_98 * local_90 - local_88 * local_a0;
    local_74 = local_8c * local_a0 - local_90 * local_9c;
    if (0.001 < local_74 * local_74 + local_78 * local_78 + local_7c * local_7c) {
      local_60 = local_7c;
      local_5c = local_78;
      local_58 = local_74;
      if (param_6 != 0) {
        fVar3 = (float10)(**(code **)(*param_1 + 0x24))();
        param_5 = (float)(fVar3 * (float10)param_5);
        fVar3 = (float10)(**(code **)(*param_1 + 0x24))(param_5);
        param_4 = (float)(fVar3 * (float10)param_4);
      }
      FUN_00de2bc0(local_50,&local_a0,&local_90,&local_60,param_4,param_5);
      piVar2 = param_1 + 4;
      D3DXMatrixMultiply(piVar2,piVar2,local_50);
      param_1[0x10] = (int)local_7c;
      param_1[0x11] = (int)local_78;
      param_1[0x12] = (int)local_74;
      FUN_00de28e0(piVar2,piVar2);
      return;
    }
  }
  return;
}

// 0052DFB0  MonThrowObj::vf44  size=196  [class]
void __fastcall MonThrowObj::vf44(int param_1)

{
  int iVar1;
  
  FUN_00dd7270();
  FUN_00900ca0();
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00900ca0();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
    }
  }
  FUN_00a8c820();
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  Behavior::vf44();
  return;
}

// 0052E080  FUN_0052e080  size=1957  [between]
void __fastcall FUN_0052e080(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined *puVar11;
  float fVar12;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float afStack_5c [3];
  undefined1 auStack_50 [76];
  
  iVar5 = FUN_00c13920();
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar6 + 0x28))(0);
    if (iVar5 != 0) {
      piVar6 = (int *)FUN_00a7c8a0();
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        puVar11 = &DAT_01be9db8;
        (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
        iVar5 = FUN_00dd6d80(puVar11);
        piVar6 = (int *)(-(uint)(iVar5 != 0) & (uint)piVar6);
      }
      goto LAB_0052e0de;
    }
  }
  piVar6 = (int *)0x0;
LAB_0052e0de:
  fVar12 = *(float *)(param_1 + 0x40);
  fVar1 = *(float *)(param_1 + 0x44);
  local_b8 = *(float *)(param_1 + 0x48);
  local_b4 = *(float *)(param_1 + 0x4c);
  fVar2 = (float)piVar6[0x10];
  fVar3 = (float)piVar6[0x12];
  local_64 = (float)piVar6[0x13];
  fVar8 = (float10)fVar12 - (float10)fVar2;
  fVar10 = (float10)fVar1 - ((float10)(float)piVar6[0x11] + (float10)1.8);
  fVar9 = (float10)local_b8 - (float10)fVar3;
  fVar8 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
  fStack_88 = (float)fVar8;
  if (*(int *)(param_1 + 0x12c4) != 0) {
    fVar4 = *(float *)(param_1 + 0x12c0) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x12c0) = fVar4;
    if (fVar8 <= (float10)100.0) {
      *(float *)(param_1 + 0x12c0) = fVar4 - *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0x12c0) < 0.0) {
      fStack_a0 = *(float *)(param_1 + 0x40);
      fStack_98 = *(float *)(param_1 + 0x48);
      fStack_94 = *(float *)(param_1 + 0x4c);
      fStack_9c = (float)piVar6[0x11];
      fVar8 = (float10)fpatan((float10)fVar2 - (float10)fStack_a0,
                              (float10)fVar3 - (float10)fStack_98);
      iVar5 = FUN_00c59480(0,0xffffffff,&fStack_a0,(float)fVar8,0x40000000,0x41200000,0x41400000,
                           0x41200000,0,5);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x48) = 0;
        *(undefined4 *)(iVar5 + 0x40) = 0x3f99999a;
        *(undefined4 *)(iVar5 + 0x44) = 0x3e99999a;
        if (*(int *)(param_1 + 0x4f0) != 0) {
          uVar7 = FUN_00a7c7f0();
          FUN_00a7c960(uVar7);
        }
      }
    }
  }
  fStack_84 = *(float *)(param_1 + 0x40);
  fStack_80 = *(float *)(param_1 + 0x44);
  fStack_7c = *(float *)(param_1 + 0x48);
  fVar8 = (float10)FUN_00a5e410(fStack_84,fStack_80,fStack_7c,&fStack_84);
  *(float *)(param_1 + 0x1290) = (float)fVar8;
  fStack_78 = 0.0;
  fStack_74 = *(float *)(param_1 + 0x910) * 0.5;
  fVar2 = fStack_74;
  if (((piVar6 != (int *)0x0) &&
      (iVar5 = (**(code **)(*piVar6 + 0x32c))(), fVar2 = fStack_74, iVar5 != 0)) &&
     (fStack_88 <= 36.0)) {
    fStack_78 = 1.4013e-45;
    fVar2 = fStack_74 * 0.05;
  }
  fVar8 = (float10)FUN_00a581b0(&fStack_84,fVar2,*(undefined4 *)(param_1 + 0x1290));
  *(float *)(param_1 + 0x1290) = (float)fVar8;
  fStack_b0 = fStack_84 - fVar12;
  fStack_ac = fStack_80 - fVar1;
  fStack_a8 = fStack_7c - local_b8;
  fStack_a4 = local_64 - local_b4;
  fVar2 = fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac;
  if (0.0001 < fVar2) {
    if (fVar2 <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_b0 = 0.0;
      fStack_ac = 1.0;
      fStack_a8 = 0.0;
    }
    else {
      FUN_00ddf460(&fStack_b0,&fStack_b0);
    }
    if ((piVar6 != (int *)0x0) && (*(int *)(param_1 + 0x1204) != 0)) {
      if (*(int *)(param_1 + 0x1208) == 0) {
        fVar2 = *(float *)(param_1 + 0x910);
        fStack_b0 = fStack_b0 * 0.08 * fVar2;
        fStack_ac = fStack_ac * 0.08 * fVar2;
        fStack_a8 = fStack_a8 * 0.08 * fVar2;
        fStack_a4 = fStack_a4 * 0.08 * fVar2;
        *(float *)(param_1 + 0x50) = fStack_b0 + fVar12;
        *(float *)(param_1 + 0x54) = fStack_ac + fVar1;
        *(float *)(param_1 + 0x58) = fStack_a8 + local_b8;
        *(float *)(param_1 + 0x5c) = fStack_a4 + local_b4;
        fStack_70 = 0.0;
        fStack_6c = 0.5;
        fStack_68 = 0.2;
        D3DXMatrixRotationAxis(auStack_50,&fStack_70,*(float *)(param_1 + 0x910) * 0.06981317);
        *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
        iVar5 = param_1 + 0x10;
        D3DXMatrixMultiply(iVar5,iVar5,afStack_5c);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
        FUN_00de28e0(iVar5,iVar5);
        return;
      }
      iVar5 = FUN_00a54a60(*(undefined4 *)(param_1 + 0x1290));
      if (iVar5 != 0) {
        FUN_0051e3b0();
        return;
      }
      local_b4 = *(float *)(param_1 + 0x910);
      local_c0 = fStack_b0 * local_b4;
      local_bc = fStack_ac * local_b4;
      local_b8 = fStack_a8 * local_b4;
      local_b4 = fStack_a4 * local_b4;
      if (fStack_78 != 0.0) {
        local_c0 = local_c0 * 0.5;
        local_bc = local_bc * 0.5;
        local_b8 = local_b8 * 0.5;
        local_b4 = local_b4 * 0.5;
      }
      fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x7b0) + 0xd8))();
      fStack_88 = (float)fVar8;
      fStack_a0 = (float)((float10)local_c0 * fVar8);
      fStack_9c = (float)((float10)local_bc * fVar8);
      fStack_98 = (float)((float10)local_b8 * fVar8);
      fStack_94 = (float)(fVar8 * (float10)local_b4);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x54))(0x3f000000,&fStack_a0);
      fVar8 = (float10)FUN_00dde300(0,0x3e19999a);
      fVar8 = fVar8 + (float10)0.15;
      local_b8 = (float)((float10)local_b8 * fVar8);
      local_b4 = (float)((float10)local_b4 * fVar8);
      fStack_b0 = (float)((float10)fStack_b0 * fVar8);
      fStack_ac = (float)(fVar8 * (float10)fStack_ac);
      FUN_00dde300(0,0x40000000);
      FUN_00dde300(0xbf800000,0x3f800000);
      FUN_00dde300(0xbf800000,0x3f800000);
      if (*(int *)(param_1 + 0x1214) == 0) {
        fVar12 = *(float *)(param_1 + 0x40);
        fStack_c4 = *(float *)(param_1 + 0x44);
        local_c0 = *(float *)(param_1 + 0x48);
        fVar1 = *(float *)(param_1 + 0x4c);
        fVar2 = fStack_b0 * fStack_b0 + local_b8 * local_b8 + local_b4 * local_b4;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&stack0xffffff38,&local_b8);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar12 = 0.0;
          fStack_c4 = 1.0;
          local_c0 = 0.0;
        }
        fVar8 = (float10)FUN_00dde300(0,0x3f800000);
        fVar8 = fVar8 + (float10)1;
        fStack_a8 = (float)((float10)*(float *)(param_1 + 0x40) + (float10)fVar12 * fVar8);
        fStack_a4 = (float)((float10)*(float *)(param_1 + 0x44) + fVar8 * (float10)fStack_c4);
        fStack_a0 = (float)((float10)*(float *)(param_1 + 0x48) + fVar8 * (float10)local_c0);
        fStack_9c = (float)((float10)*(float *)(param_1 + 0x4c) + fVar8 * (float10)fVar1);
        fVar8 = (float10)FUN_00dde300((float)(float10)1,0x40000000);
        local_64 = (float)(fVar8 * (float10)3.0);
        fVar8 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
        fStack_68 = (float)fVar8;
        fVar8 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
        fVar9 = (float10)fStack_90;
        fStack_78 = (float)((float10)fStack_68 * fVar9);
        fStack_74 = (float)((float10)local_64 * fVar9);
        fStack_70 = (float)(fVar8 * fVar9);
        fStack_6c = (float)(fVar9 * (float10)afStack_5c[0]);
        (**(code **)(**(int **)(param_1 + 0x7b0) + 0xcc))(&fStack_78,&fStack_a8,1);
        *(undefined4 *)(param_1 + 0x1214) = 1;
        return;
      }
    }
  }
  return;
}

// 0052E830  FUN_0052e830  size=412  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0052e830(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  float local_6c;
  float local_68;
  float local_64 [24];
  
  iVar2 = FUN_00c13920();
  if (iVar2 == 0) {
LAB_0052e884:
    uVar4 = 0;
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if ((iVar2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) goto LAB_0052e884;
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  local_68 = *(float *)(uVar4 + 0x48);
  local_64[0] = *(float *)(uVar4 + 0x4c);
  local_6c = *(float *)(uVar4 + 0x44) + 2.0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0052e90e;
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    FUN_00a8caf0(5,0,0,0);
  }
LAB_0052e90e:
  iVar2 = param_1 + 0x10;
  local_6c = *(float *)(param_1 + 0x14b4) + local_6c;
  local_68 = *(float *)(param_1 + 0x14b8) + local_68;
  local_64[0] = *(float *)(param_1 + 0x14bc) + local_64[0];
  local_64[1] = 0.0;
  local_64[2] = 0.0;
  local_64[3] = 1.0;
  D3DXVec3TransformNormal(local_64 + 1,local_64 + 1,iVar2);
  FUN_0051e4f0(&stack0xffffff84,&local_6c,0x3dcccccd,0x3e0efa35,0);
  D3DXMatrixRotationZ(local_64 + 2,*(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x928));
  D3DXMatrixMultiply(iVar2,local_64,iVar2);
  *(float *)(param_1 + 0x928) = *(float *)(param_1 + 0x928) + 0.0017453292;
  return;
}

// 0052E9D0  FUN_0052e9d0  size=299  [between]
void __fastcall FUN_0052e9d0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  iVar2 = FUN_00c13920();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar4);
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x928) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0x3e4ccccd;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0052ea80;
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    FUN_00a8caf0(7,0,0,0);
  }
LAB_0052ea80:
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) =
       *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x924) + *(float *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910) * 0.006;
  D3DXMatrixRotationZ(auStack_50,*(float *)(param_1 + 0x928) * *(float *)(param_1 + 0x910));
  D3DXMatrixMultiply(param_1 + 0x10,auStack_58,param_1 + 0x10);
  *(float *)(param_1 + 0x928) = *(float *)(param_1 + 0x928) + 0.0008726646;
  return;
}

// 0052EB00  MonThrowObj::vf1A4  size=149  [class]
void __thiscall MonThrowObj::vf1A4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  Bh0064::vf1A4(param_2,param_3);
  *(undefined4 *)(param_1 + 0x1488) = 1;
  if ((param_3 & 0xe) != 0) {
    *(undefined4 *)(param_1 + 0x148c) = 1;
  }
  iVar1 = FUN_00a81330();
  iVar2 = param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0(0xffffffff,0);
  }
  FUN_00e5e0c0("core_se_exp_car",iVar2);
  if (*(int *)(param_1 + 0x4b0) != 0xf00d5) {
    FUN_00eaa6e0(0x3f800000,0);
    *(undefined4 *)(param_1 + 0x120c) = 1;
    FUN_0051e3b0();
    *(undefined4 *)(param_1 + 0x4e4) = 1;
  }
  return;
}

// 00537890  MonThrowObj::vf40  size=1099  [class]
undefined4 __fastcall MonThrowObj::vf40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 auStack_1d0 [92];
  undefined1 auStack_174 [368];
  
  iVar3 = BehaviorAppBase::vf40();
  if (iVar3 != 0) {
    FUN_009fd240();
    FUN_00dd7240();
    uVar8 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar8);
    *(undefined4 *)(param_1 + 0x1210) = 0x43340000;
    *(undefined4 *)(param_1 + 0x1204) = 1;
    local_1e0 = 1;
    local_1dc = 1;
    local_1d8 = 1;
    *(undefined4 *)(param_1 + 0x1208) = 0;
    *(undefined4 *)(param_1 + 0x120c) = 0;
    *(undefined4 *)(param_1 + 0x14d0) = 0;
    iVar3 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_1e0);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x7b4) = 0;
      uVar8 = FUN_00de3850(0,"_col.hkx",0);
      iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = RigidBodyCollection::RigidBodyCollection_2();
      }
      *(int *)(param_1 + 0x7b0) = iVar3;
      if (iVar3 != 0) {
        local_1e4 = *(undefined4 *)(param_1 + 0x4f0);
        uVar4 = FUN_00de3ee0(uVar8);
        uVar8 = FUN_00de3cf0(uVar8);
        iVar3 = FUN_008f6410(local_1e4,uVar8,uVar4);
        if (iVar3 != 0) {
          FUN_008f2cd0(0);
          FUN_008f1600(0x80000000);
          FUN_008f1600(0x40);
          FUN_008f1600(0x20);
          uVar8 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(&local_1e4,0);
          FUN_00910ab0(uVar8);
          FUN_0091a930(5);
          FUN_009277e0();
        }
      }
      FUN_008f40f0(param_1);
      FUN_00410540(0x10,&DAT_01b7bd48);
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      *(undefined4 *)(param_1 + 0x6ec) = 1;
      FUN_00405230();
      local_1e0 = 0;
      local_1dc = 0;
      local_1d8 = 0;
      FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_1e0,0,0x43c80000,0x40400000,
                   2,0x10);
      uVar8 = FUN_00c57830(auStack_1d0);
      uVar8 = FUN_00c4d470(uVar8);
      *(undefined4 *)(param_1 + 0x1200) = uVar8;
      FUN_00a8d280();
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
      }
      *(undefined4 *)(param_1 + 0x1484) = 0;
      *(undefined4 *)(param_1 + 0x874) = 10;
      *(undefined4 *)(param_1 + 0x1480) = 0;
      *(undefined4 *)(param_1 + 0x870) = 10;
      *(undefined4 *)(param_1 + 0x1214) = 0;
      *(undefined4 *)(param_1 + 0x14b0) = 0;
      *(undefined4 *)(param_1 + 0x14b4) = 0;
      *(undefined4 *)(param_1 + 0x14b8) = 0;
      *(undefined4 *)(param_1 + 0x14dc) = 0;
      *(undefined4 *)(param_1 + 0x640) = 2;
      lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
      if (*(int *)(param_1 + 0x4b0) == 0xf00d5) {
        piVar5 = (int *)FUN_00900480();
        iVar3 = *piVar5;
        uVar8 = FUN_009f8b40(0);
        uVar8 = (**(code **)(iVar3 + 4))(param_1 + 0x40,0x40e9999a,5,uVar8);
        lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar8);
        FUN_00900bd0();
      }
      else {
        piVar5 = (int *)FUN_00900480();
        uVar8 = (**(code **)(*piVar5 + 4))(param_1 + 0x50,0x40200000,6,0,0);
        lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar8);
        FUN_00900bd0();
      }
      *(undefined2 *)(param_1 + 0x12bc) = 0;
      iVar3 = FUN_0051e310();
      if (iVar3 != 0) {
        FUN_00b88c80();
      }
      *(undefined4 *)(param_1 + 0x12c0) = 0;
      *(undefined4 *)(param_1 + 0x12c4) = 0;
      if (*(int *)(param_1 + 0x370) != 0) {
        FUN_00a1abe0(1);
      }
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
          if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"damage"), iVar6 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar3 = iVar3 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
      FUN_00a8caf0(0,0,0,0);
      FUN_004039a0(0,param_1,0);
      if (param_1 + 0x1380 != 0) {
        FUN_00dffb20(param_1 + 0x1380);
      }
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_174);
      if (*(int *)(param_1 + 0x4b0) == 0xf00a1) {
        FUN_0051b440(0);
      }
      return 1;
    }
  }
  return 0;
}

// 00537CF0  MonThrowObj::vf48  size=466  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall MonThrowObj::vf48(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined1 local_150 [24];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined1 auStack_128 [292];
  
  iVar2 = FUN_00c13920();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        puVar5 = &DAT_01be9db8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d80(puVar5);
        piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
      }
      goto LAB_00537d50;
    }
  }
  piVar3 = (int *)0x0;
LAB_00537d50:
  D3DXMatrixInverse(local_150,0,param_1 + 0x10);
  pfVar1 = (float *)(param_1 + 0x14c0);
  D3DXVec3TransformNormal(pfVar1,piVar3 + 0x10,&stack0xfffffea4);
  *pfVar1 = *pfVar1 + fStack_138;
  *(float *)(param_1 + 0x14c4) = *(float *)(param_1 + 0x14c4) + fStack_134;
  *(float *)(param_1 + 0x14c8) = *(float *)(param_1 + 0x14c8) + fStack_130;
  FUN_00a92fb0();
  fVar4 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x1490) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x910) = _DAT_01be942c;
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0x32c))();
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x120c) == 0)) &&
       (*(float *)(param_1 + 0x14c8) <= 10.0)) {
      *(float *)(param_1 + 0x910) =
           (0.01 - *(float *)(param_1 + 0x910)) * 0.94 + *(float *)(param_1 + 0x910);
    }
    (**(code **)(*piVar3 + 0x32c))();
    if (((0.0 < (float)piVar3[0xd07]) && (*(int *)(param_1 + 0x14dc) != 0)) &&
       (*(int *)(param_1 + 0x120c) == 0)) {
      *(float *)(param_1 + 0x910) =
           (0.01 - *(float *)(param_1 + 0x910)) * 0.94 + *(float *)(param_1 + 0x910);
    }
  }
  fVar4 = (float10)FUN_00a7fe80(*(undefined4 *)(param_1 + 0x4f0),0x42c80000,1);
  if (fVar4 < (float10)*(float *)(param_1 + 0x910)) {
    *(float *)(param_1 + 0x910) =
         (float)((fVar4 - (float10)*(float *)(param_1 + 0x910)) * (float10)0.94 +
                (float10)*(float *)(param_1 + 0x910));
  }
  FUN_00534310();
  FUN_004105d0();
  if (piVar3 != (int *)0x0) {
    FUN_00b88d00(auStack_128);
  }
  BehaviorAppBase::vf48();
  return;
}

// 00537ED0  FUN_00537ed0  size=1179  [callgraph]
void __fastcall FUN_00537ed0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  int local_1c0;
  float local_1bc;
  int local_1b8;
  int local_1b4 [2];
  undefined1 auStack_1ac [8];
  float fStack_1a4;
  undefined1 auStack_160 [348];
  
  iVar3 = FUN_00c13920();
  if (iVar3 == 0) {
LAB_00537f2c:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar3 == 0) goto LAB_00537f2c;
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      puVar13 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar13);
      piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
    }
  }
  local_1c0 = piVar4[0x10];
  local_1b8 = piVar4[0x12];
  local_1b4[0] = piVar4[0x13];
  local_1bc = (float)piVar4[0x11] + 2.0;
  iVar3 = FUN_00a12210(0);
  if (iVar3 != 0) {
    fStack_1a4 = *(float *)(iVar3 + 0x90);
    fVar5 = (float10)FUN_00dde300(0,*(float *)(param_1 + 0x1480) * 0.2);
    fVar5 = (float10)FUN_00ddba30((float)((fVar5 + (float10)*(float *)(param_1 + 0x1480)) *
                                          (float10)0.017453292 *
                                          (float10)*(float *)(param_1 + 0x910) + (float10)fStack_1a4
                                         ));
    *(float *)(iVar3 + 0x90) = (float)fVar5;
  }
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1480) =
       (float)(((float10)*(float *)(param_1 + 0x1484) - (float10)*(float *)(param_1 + 0x1480)) *
               fVar5 + (float10)*(float *)(param_1 + 0x1480));
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x1484) = 0x42000000;
    uVar14 = 0x3f800000;
    uVar12 = 0xbf800000;
    uVar11 = 0;
    uVar10 = 0x3f800000;
    uVar9 = 0;
    uVar8 = 0;
    puVar7 = &DAT_0163b5f4;
    FUN_00a92f90(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00e3ff90(puVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00538146;
  fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar2;
  if ((fVar2 < 0.0) || (*(float *)(param_1 + 0x44) < local_1bc - 2.0)) {
    FUN_004039a0(10,param_1,0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
    FUN_0051e3b0();
  }
  if (*(int *)(param_1 + 0x14a4) != 0) {
    FUN_004066f0();
    iVar3 = FUN_009165d0();
    if ((iVar3 != 0) && (0 < *(int *)(iVar3 + 0x14))) {
      FUN_004039a0(10,param_1,0);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
      FUN_0051e3b0();
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
LAB_00538146:
  if (piVar4 != (int *)0x0) {
    if (*(float *)(param_1 + 0x14c8) <= 13.0) {
      uStack_1e0 = 0;
      fStack_1dc = 0.0;
      fStack_1d8 = 1.0;
      D3DXVec3TransformNormal(&uStack_1e0,&uStack_1e0,param_1 + 0x10);
      FUN_0051e4f0(&uStack_1cc,&stack0xfffffe14,0x3dcccccd,*(float *)(param_1 + 0x910) * 0.017453292
                   ,0);
      iVar3 = (**(code **)(*piVar4 + 0x32c))();
      if (iVar3 != 0) {
        FUN_0051e4f0(&local_1c0,&uStack_1e0,0x3dcccccd,*(float *)(param_1 + 0x910) * 0.034906585,0);
      }
    }
    if ((*(float *)(param_1 + 0x14c8) <= 11.0) &&
       (iVar3 = (**(code **)(*piVar4 + 0x32c))(), iVar3 != 0)) {
      uStack_1e0 = 0;
      fStack_1dc = 0.0;
      fStack_1d8 = 1.0;
      D3DXVec3TransformNormal(&uStack_1e0,&uStack_1e0,param_1 + 0x10);
      FUN_0051e4f0(&local_1c0,&uStack_1e0,0x3dcccccd,*(float *)(param_1 + 0x910) * 0.034906585,0);
    }
  }
  iVar3 = FUN_009c4bf0();
  if (iVar3 == 0) {
    fVar5 = (float10)FUN_00fdc1f0();
    fVar6 = (float10)*(float *)(param_1 + 0x910) * (float10)0.014;
  }
  else {
    iVar3 = FUN_009c4bf0();
    if (iVar3 == 1) {
      fVar5 = (float10)FUN_00fdc1f0();
      fVar6 = (float10)*(float *)(param_1 + 0x910) * (float10)0.028;
    }
    else {
      fVar5 = (float10)FUN_00fdc1f0();
      fVar6 = (float10)*(float *)(param_1 + 0x910) * (float10)0.034;
    }
  }
  iVar3 = param_1 + 0x10;
  *(float *)(param_1 + 0x924) = (float)((fVar6 + (float10)*(float *)(param_1 + 0x924)) * fVar5);
  uStack_1d0 = 0;
  uStack_1cc = 0;
  fStack_1c8 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x924);
  D3DXVec3TransformNormal(&uStack_1d0,&uStack_1d0,iVar3);
  *(float *)(param_1 + 0x40) = fStack_1dc + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + fStack_1d8;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fStack_1d4;
  D3DXMatrixRotationZ(auStack_1ac,*(float *)(param_1 + 0x928) * *(float *)(param_1 + 0x910));
  D3DXMatrixMultiply(iVar3,local_1b4,iVar3);
  return;
}

// 00538370  FUN_00538370  size=787  [callgraph]
void __fastcall FUN_00538370(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fStack_170;
  float local_16c;
  float fStack_168;
  float fStack_164;
  undefined1 auStack_160 [348];
  
  iVar2 = FUN_00c13920();
  if (iVar2 == 0) {
LAB_005383ce:
    uVar4 = 0;
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar2 == 0) goto LAB_005383ce;
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar11 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar11);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
  }
  local_16c = *(float *)(uVar4 + 0x44) + 2.0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x1484) = 0x42000000;
    uVar12 = 0x3f800000;
    uVar10 = 0xbf800000;
    uVar9 = 0;
    uVar8 = 0x3f800000;
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &DAT_0163b5f4;
    FUN_00a92f90(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00e3ff90(puVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar12);
    FUN_004066f0();
    FUN_008f3c80();
    if (DAT_01885d68 != 1) {
      piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00538593;
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if ((fVar1 < 0.0) || (*(float *)(param_1 + 0x44) < local_16c - 2.0)) {
    FUN_004039a0(10,param_1,0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
    FUN_0051e3b0();
  }
  if (*(int *)(param_1 + 0x14a4) != 0) {
    FUN_004066f0();
    iVar2 = FUN_009165d0();
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x14))) {
      FUN_004039a0(10,param_1,0);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
      FUN_0051e3b0();
    }
    if (DAT_01885d68 != 1) {
      piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
LAB_00538593:
  fStack_170 = *(float *)(uVar4 + 0x40) - *(float *)(param_1 + 0x40);
  local_16c = (*(float *)(uVar4 + 0x44) + 2.5) - *(float *)(param_1 + 0x44);
  fStack_168 = *(float *)(uVar4 + 0x48) - *(float *)(param_1 + 0x48);
  fStack_164 = *(float *)(uVar4 + 0x4c) - *(float *)(param_1 + 0x4c);
  fVar1 = fStack_168 * fStack_168 + fStack_170 * fStack_170 + local_16c * local_16c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_170,&fStack_170);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_168 = 0.0;
    fStack_170 = 0.0;
    local_16c = 1.0;
  }
  fVar1 = *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x40) = fStack_170 * 0.3 * fVar1 + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + local_16c * 0.3 * fVar1;
  *(float *)(param_1 + 0x48) = fVar1 * fStack_168 * 0.3 + *(float *)(param_1 + 0x48);
  return;
}

// 00541170  MonThrowObj::vf4C  size=358  [class]
void __fastcall MonThrowObj::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1[0x483] != 0) {
    if (param_1[0x1ec] != 0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_00a9d8a0();
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
      }
      if (((int *)param_1[0x1ec] != (int *)0x0) &&
         (iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar2 != 0)) {
        HkRemovePhysicsSystem::HkRemovePhysicsSystem();
        if ((int *)param_1[0x1ec] != (int *)0x0) {
          (**(code **)(*(int *)param_1[0x1ec] + 4))(1);
          param_1[0x1ec] = 0;
        }
      }
      param_1[0x1ec] = 0;
    }
    fVar1 = (float)param_1[0x484];
    param_1[0x484] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 <= fVar1 - (float)param_1[0x244]) {
      return;
    }
    param_1[0x483] = 0;
    FUN_009fdde0();
    return;
  }
  Behavior::vf4C();
  switch(param_1[0x186]) {
  case 1:
    FUN_0052e080();
    break;
  case 2:
    FUN_0051b0d0();
    break;
  case 3:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
      param_1[0x248] = 0x43960000;
    }
    else if (param_1[0x187] != 1) break;
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
    }
    break;
  case 4:
    FUN_0052e830();
    break;
  case 5:
    FUN_00537ed0();
    break;
  case 6:
    FUN_0052e9d0();
    break;
  case 7:
    FUN_00538370();
  }
  if (param_1[0x534] != 0) {
    return;
  }
  hkpAllCdPointCollector::hkpAllCdPointCollector_6();
  return;
}

// 00AB1140  MonThrowObj::vf04  size=6  [class]
undefined * MonThrowObj::vf04(void)

{
  return &DAT_01b34f58;
}

// 00AB1150  MonThrowObj::vf24  size=7  [class]
float10 __fastcall MonThrowObj::vf24(int param_1)

{
  return (float10)*(float *)(param_1 + 0x910);
}

// 00AB9720  MonThrowObj::vf00  size=30  [class]
undefined4 __thiscall MonThrowObj::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_11();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

