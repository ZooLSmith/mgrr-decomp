// src/misc/ArmThrowObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00843B50..00ABA070, 30 functions

#include "types.h"

// 00843B50  ArmThrowObj::vf54  size=36  [class]
void __fastcall ArmThrowObj::vf54(int param_1)

{
  if ((*(int *)(param_1 + 0x1218) != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f7700(param_1);
  }
  Behavior::vf54();
  return;
}

// 00843B80  ArmThrowObj::vf1B8  size=52  [class]
void ArmThrowObj::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00eaa6e0(0x3f800000,0);
  if (0 < param_3) {
    do {
      *param_1 = 0x42380;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00843BC0  ArmThrowObj::vf30  size=179  [class]
void __fastcall ArmThrowObj::vf30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)(param_1 + 0x14f0) = 1;
  BehaviorAppBase::vf30();
  iVar1 = FUN_0094eae0();
  FUN_009c4bf0();
  if (iVar1 < 5) {
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0x40800000;
    D3DXVec3TransformNormal(&uStack_20,&uStack_20,param_1 + 0x10);
    uVar2 = FUN_009f8b40(0);
    FUN_009577e0(0x23a6f56d,&stack0xffffffd4,uVar2);
  }
  return;
}

// 00843C80  ArmThrowObj::thunk_vf19C  size=5  [class]
void __thiscall ArmThrowObj::thunk_vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 008486C0  FUN_008486c0  size=155  [callgraph]
void __fastcall FUN_008486c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    FUN_00a8caf0(4,0,0,0);
    return;
  }
  FUN_00a81330();
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 != (int *)0x0) {
    puVar3 = &DAT_01b35ad8;
    (**(code **)(*piVar2 + 4))(&DAT_01b35ad8);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && (piVar2[0x139] != 0)) {
      FUN_00a8caf0(4,0,0,0);
      FUN_00a7c950();
      return;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0xa04) = 0;
  }
  return;
}

// 00848760  ArmThrowObj::vf50  size=599  [class]
void __fastcall ArmThrowObj::vf50(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  if (param_1[0x281] == 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        iVar5 = FUN_00a12210(param_1[0x511]);
        if (iVar5 != 0) {
          piVar7 = (int *)(iVar5 + 0x10);
          piVar8 = param_1 + 4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
          D3DXVec3TransformNormal(&local_20,param_1 + 0x514,(int *)(iVar5 + 0x10));
          fVar1 = *(float *)(iVar5 + 0x44);
          fVar2 = *(float *)(iVar5 + 0x48);
          param_1[0x10] = (int)(*(float *)(iVar5 + 0x40) + local_20);
          param_1[0x11] = (int)(fVar1 + fStack_1c);
          param_1[0x12] = (int)(fVar2 + fStack_18);
          fVar1 = *(float *)(iVar4 + 0x44);
          fVar2 = *(float *)(iVar4 + 0x48);
          fVar3 = *(float *)(iVar4 + 0x4c);
          param_1[0x530] = (int)((float)param_1[0x10] - *(float *)(iVar4 + 0x40));
          param_1[0x531] = (int)((float)param_1[0x11] - fVar1);
          param_1[0x532] = (int)((float)param_1[0x12] - fVar2);
          param_1[0x533] = (int)((float)param_1[0x13] - fVar3);
        }
      }
    }
  }
  if (param_1[0x281] == 1) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        iVar5 = FUN_00a12210(param_1[0x511]);
        if (iVar5 != 0) {
          local_20 = (float)param_1[0x10];
          fStack_1c = (float)param_1[0x11];
          fStack_18 = (float)param_1[0x12];
          iStack_14 = param_1[0x13];
          piVar7 = (int *)(iVar5 + 0x10);
          piVar8 = param_1 + 4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
          D3DXVec3TransformNormal(&fStack_30,param_1 + 0x514,(int *)(iVar5 + 0x10));
          fStack_30 = *(float *)(iVar5 + 0x40) + fStack_30;
          fStack_2c = *(float *)(iVar5 + 0x44) + fStack_2c;
          fStack_28 = *(float *)(iVar5 + 0x48) + fStack_28;
          iVar5 = FUN_00a8dbe0(&fStack_30,&local_20,&fStack_30,0x3d75c28f,0x3d4ccccd,
                               (float)param_1[0x244] * 0.5);
          param_1[0x282] = iVar5;
          param_1[0x10] = (int)fStack_30;
          param_1[0x11] = (int)fStack_2c;
          param_1[0x12] = (int)fStack_28;
          fVar1 = *(float *)(iVar4 + 0x44);
          fVar2 = *(float *)(iVar4 + 0x48);
          fVar3 = *(float *)(iVar4 + 0x4c);
          param_1[0x530] = (int)((float)param_1[0x10] - *(float *)(iVar4 + 0x40));
          param_1[0x531] = (int)((float)param_1[0x11] - fVar1);
          param_1[0x532] = (int)((float)param_1[0x12] - fVar2);
          param_1[0x533] = (int)((float)param_1[0x13] - fVar3);
        }
      }
    }
  }
  switchD_0080dbae::default();
  if ((param_1[0x486] == 0) && (param_1[0x1ec] != 0)) {
    FUN_008f3cb0(param_1);
  }
  BehaviorAppBase::vf50();
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    (**(code **)(*param_1 + 0x128))();
  }
  return;
}

// 008489C0  FUN_008489c0  size=77  [callgraph]
uint FUN_008489c0(void)

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
      puVar3 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 00848A10  FUN_00848a10  size=218  [callgraph]
void __fastcall FUN_00848a10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00a7c950();
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  *(undefined4 *)(param_1 + 0x1214) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1444) = 0xffffffff;
  FUN_00e5e0c0("em01a0_se_atk_throw_car",param_1,0xffffffff,0);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f40f0(param_1);
  }
  *(undefined4 *)(param_1 + 0x12d0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x12d4) = 1;
  FUN_00a8caf0(3,0,0,0);
  iVar3 = 8;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b35ad8;
        (**(code **)(*piVar2 + 4))(&DAT_01b35ad8);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          FUN_00a8caf0(6,0,0,0);
        }
      }
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00848B40  FUN_00848b40  size=656  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00848bed) */
/* WARNING: Removing unreachable block (ram,0x00848bef) */
/* WARNING: Removing unreachable block (ram,0x00848bf1) */

void __thiscall
FUN_00848b40(int *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

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

// 00848DD0  FUN_00848dd0  size=63  [callgraph]
uint FUN_00848dd0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b35ab8;
  (**(code **)(*piVar2 + 4))(&DAT_01b35ab8);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 0084EFF0  ArmThrowObj::vf44  size=196  [class]
void __fastcall ArmThrowObj::vf44(int param_1)

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

// 0084F0C0  ArmThrowObj::getAttackInfo  size=368  [class]
int __thiscall ArmThrowObj::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined *puVar7;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar1 = *(uint **)(iVar2 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      uVar6 = 10;
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 0) {
        uVar6 = 0x4b;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 1) {
        uVar6 = 0x96;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 2) {
        uVar6 = 0xe1;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 3) {
        uVar6 = 300;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 4) {
        uVar6 = 0x5dc;
      }
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_00a7c8a0();
        if (piVar5 != (int *)0x0) {
          puVar7 = &DAT_01b35ab8;
          (**(code **)(*piVar5 + 4))(&DAT_01b35ab8);
          iVar4 = FUN_00dd6d80(puVar7);
          if (iVar4 != 0) {
            FUN_00848dd0();
            FUN_00aa28e0();
            uVar6 = FUN_00fdbc60();
          }
        }
      }
      puVar1[3] = 10;
      puVar1[2] = 10;
      puVar1[1] = uVar6;
      *(undefined1 *)(puVar1 + 4) = 0xf;
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
  FUN_00dd5650(&DAT_01648c68);
  return 0;
}

// 0084F230  FUN_0084f230  size=374  [callgraph]
void __fastcall FUN_0084f230(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_00c13920();
  if (iVar2 == 0) {
LAB_0084f284:
    uVar4 = 0;
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if ((iVar2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) goto LAB_0084f284;
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  local_28 = *(float *)(uVar4 + 0x48);
  local_24 = *(float *)(uVar4 + 0x4c);
  local_2c = *(float *)(uVar4 + 0x44) + 2.0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0084f30e;
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    FUN_00a8caf0(4,0,0,0);
  }
LAB_0084f30e:
  local_2c = *(float *)(param_1 + 0x14c4) + local_2c;
  local_28 = *(float *)(param_1 + 0x14c8) + local_28;
  local_24 = *(float *)(param_1 + 0x14cc) + local_24;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0x3f800000;
  D3DXVec3TransformNormal(&uStack_20,&uStack_20,param_1 + 0x10);
  FUN_00848b40(&stack0xffffffc4,&local_2c,0x3dcccccd,0x3e0efa35,0);
  *(float *)(param_1 + 0x928) = *(float *)(param_1 + 0x928) + 0.0017453292;
  return;
}

// 0084F3B0  FUN_0084f3b0  size=385  [callgraph]
void __fastcall FUN_0084f3b0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_94 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar5 = &DAT_01b35b20;
        (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
        iVar1 = FUN_00dd6d80(puVar5);
        uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
        goto LAB_0084f40b;
      }
    }
  }
  uVar3 = 0;
LAB_0084f40b:
  local_b0 = *(undefined4 *)(uVar3 + 0x40);
  local_ac = *(undefined4 *)(uVar3 + 0x44);
  local_a8 = *(undefined4 *)(uVar3 + 0x48);
  local_a4 = *(undefined4 *)(uVar3 + 0x4c);
  thunk_FUN_00dde510(local_94,&local_b4,&local_b0,(undefined4 *)(param_1 + 0x40));
  FUN_0040b190();
  uStack_40 = *(undefined4 *)(param_1 + 0x40);
  uStack_38 = *(undefined4 *)(param_1 + 0x48);
  uStack_3c = 0x43adc000;
  uStack_8c = 0;
  uStack_34 = 0;
  uStack_90 = 0;
  uStack_30 = local_b4;
  uStack_2c = 0;
  iVar1 = FUN_00a82090("PowerGaizer",0x2c70c,&uStack_90);
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar5 = &DAT_01b35ab8;
        (**(code **)(*piVar2 + 4))(&DAT_01b35ab8);
        iVar1 = FUN_00dd6d80(puVar5);
        if (iVar1 != 0) {
          FUN_00848dd0();
          piVar2 = (int *)FUN_00a7c8a0();
          if (piVar2 != (int *)0x0) {
            puVar5 = &DAT_01b35abc;
            (**(code **)(*piVar2 + 4))(&DAT_01b35abc);
            FUN_00dd6d80(puVar5);
          }
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
        }
      }
    }
  }
  return;
}

// 0084F540  FUN_0084f540  size=225  [callgraph]
void __thiscall FUN_0084f540(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 local_90 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_1 + 0x40);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_38 = *(undefined4 *)(param_1 + 0x48);
  local_90[0] = 2;
  iVar1 = FUN_00a82090("Copter Child",0x2c19a,local_90);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b35ad8;
      (**(code **)(*piVar3 + 4))(&DAT_01b35ad8);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_009f8b40();
        FUN_009f8ae0(uVar2);
        FUN_00843cb0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,param_3);
        iVar1 = FUN_00848dd0();
        if (iVar1 != 0) {
          iVar1 = FUN_00848dd0();
          FUN_00848e10(*(undefined4 *)(iVar1 + 0x4f0));
        }
      }
    }
  }
  return;
}

// 008565C0  ArmThrowObj::vf40  size=1420  [class]
/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall ArmThrowObj::vf40(int param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined4 uVar9;
  float fVar10;
  int local_1e8;
  int local_1e4 [5];
  undefined1 auStack_1d0 [112];
  undefined1 auStack_160 [348];
  
  iVar3 = BehaviorAppBase::vf40();
  if (iVar3 != 0) {
    FUN_009fd240();
    FUN_00dd7240();
    uVar9 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar9);
    uVar9 = *(undefined4 *)(param_1 + 0x4b0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(uVar9,0x20190);
    *(undefined4 *)(param_1 + 0x1220) = 0x43340000;
    *(undefined4 *)(param_1 + 0x1214) = 1;
    local_1e4[1] = 1;
    *(undefined4 *)(param_1 + 0x1500) = 0x3f800000;
    local_1e4[2] = 1;
    local_1e4[3] = 1;
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x1218) = 0;
    *(undefined4 *)(param_1 + 0x121c) = 0;
    *(undefined4 *)(param_1 + 0x14f0) = 0;
    iVar3 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(local_1e4 + 1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x7b4) = 0;
      uVar9 = FUN_00de3850(0,"_col.hkx",0);
      iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = RigidBodyCollection::RigidBodyCollection_2();
      }
      *(int *)(param_1 + 0x7b0) = iVar3;
      if (iVar3 != 0) {
        local_1e4[0] = *(int *)(param_1 + 0x4f0);
        uVar4 = FUN_00de3ee0(uVar9);
        uVar9 = FUN_00de3cf0(uVar9);
        iVar3 = FUN_008f6410(local_1e4[0],uVar9,uVar4);
        if (iVar3 != 0) {
          FUN_008f2cd0(0);
          FUN_008f1600(0x80000000);
          FUN_008f1600(0x40);
          FUN_008f1600(0x20);
          uVar9 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(local_1e4,0);
          FUN_00910ab0(uVar9);
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
      local_1e4[1] = 0;
      local_1e4[2] = 0;
      local_1e4[3] = 0;
      FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0xffffffff,local_1e4 + 1,0,0x43c80000,
                   0x40400000,2,0x10);
      uVar9 = FUN_00c57830(auStack_1d0);
      uVar9 = FUN_00c4d470(uVar9);
      *(undefined4 *)(param_1 + 0x1210) = uVar9;
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
      *(undefined4 *)(param_1 + 0x1494) = 0;
      *(undefined4 *)(param_1 + 0x874) = 10;
      *(undefined4 *)(param_1 + 0x1490) = 0;
      *(undefined4 *)(param_1 + 0x870) = 10;
      *(undefined4 *)(param_1 + 0x1224) = 0;
      *(undefined4 *)(param_1 + 0x14c0) = 0;
      *(undefined4 *)(param_1 + 0x14c4) = 0;
      *(undefined4 *)(param_1 + 0x14c8) = 0;
      *(undefined4 *)(param_1 + 0x14fc) = 0;
      *(undefined4 *)(param_1 + 0xa04) = 0;
      *(undefined4 *)(param_1 + 0x640) = 2;
      lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
      *(undefined4 *)(param_1 + 0x12d0) = 0;
      *(undefined2 *)(param_1 + 0x12cc) = 0;
      *(undefined4 *)(param_1 + 0x12d4) = 0;
      if (*(int *)(param_1 + 0x370) != 0) {
        FUN_00a1abe0(1);
      }
      local_1e8 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar5 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"damage"), iVar5 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          local_1e8 = local_1e8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (local_1e8 < *(short *)(param_1 + 0x324));
      }
      iVar3 = 0;
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xa08) = 0;
      *(undefined4 *)(param_1 + 0xa0c) = 0;
      FUN_004039a0(0,param_1,0);
      if (param_1 + 0x1390 != 0) {
        FUN_00dffb20(param_1 + 0x1390);
      }
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
      local_1e8 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar6 = *(int *)(param_1 + 800);
          iVar5 = *(int *)(*(int *)(iVar6 + 0x60 + iVar3) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"_EFD00"), iVar5 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar3);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          local_1e8 = local_1e8 + 1;
          iVar3 = iVar3 + 0x70;
        } while (local_1e8 < *(short *)(param_1 + 0x324));
      }
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        fVar7 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
        fVar10 = (float)fVar7;
        sVar2 = FUN_00dde2d0(0,0x1e);
        puVar8 = &DAT_01648d28;
      }
      else {
        fVar7 = (float10)FUN_00dde300(0x3f4ccccd,0x3fb33333);
        fVar10 = (float)fVar7;
        sVar2 = FUN_00dde2d0(0,0x1e);
        puVar8 = &DAT_01648d30;
      }
      local_1e4[0] = (int)sVar2;
      FUN_00a9e290(puVar8,0,0,0x3f800000,0,(float)local_1e4[0],fVar10);
      if (*(int *)(param_1 + 0x4a0) == 3) {
        fVar7 = (float10)FUN_00dde300(0x3f4ccccd,0x3fb33333);
        fVar10 = (float)fVar7;
        sVar2 = FUN_00dde2d0(0,0x1e);
        local_1e4[0] = (int)sVar2;
        FUN_00a9e290(&DAT_01648d30,0,0,0x3f800000,0,(float)local_1e4[0],fVar10);
      }
      if (*(int *)(param_1 + 0x4a0) == 1) {
        FUN_00a8caf0(1,0,0,0);
        iVar3 = FUN_008489c0();
        if (iVar3 != 0) {
          switchD_0080dbae::default();
        }
        switchD_0080dbae::default();
      }
      if (*(int *)(param_1 + 0x4a0) == 2) {
        *(undefined4 *)(param_1 + 0xa04) = 2;
        FUN_00a8caf0(2,0,0,0);
      }
      return 1;
    }
  }
  return 0;
}

// 00856B50  ArmThrowObj::vf48  size=767  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall ArmThrowObj::vf48(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined1 auStack_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  iVar3 = FUN_00c13920();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        puVar6 = &DAT_01b35b20;
        (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
        iVar3 = FUN_00dd6d80(puVar6);
        piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
      }
      goto LAB_00856bad;
    }
  }
  piVar4 = (int *)0x0;
LAB_00856bad:
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar5;
  if (*(int *)(param_1 + 0x4a0) == 1) {
    if (piVar4 != (int *)0x0) {
      D3DXMatrixInverse(auStack_50,0,param_1 + 0x10);
      pfVar1 = (float *)(param_1 + 0x14e0);
      D3DXVec3TransformNormal(pfVar1,piVar4 + 0x10,&stack0xffffffa4);
      *pfVar1 = *pfVar1 + fStack_38;
      *(float *)(param_1 + 0x14e4) = *(float *)(param_1 + 0x14e4) + fStack_34;
      *(float *)(param_1 + 0x14e8) = *(float *)(param_1 + 0x14e8) + fStack_30;
      FUN_00a92fb0();
      fVar5 = (float10)FUN_00e049b0();
      *(float *)(param_1 + 0x14a0) = (float)fVar5;
      *(undefined4 *)(param_1 + 0x910) = _DAT_01be942c;
      iVar3 = (**(code **)(*piVar4 + 0x32c))();
      if (((((iVar3 != 0) && (*(int *)(param_1 + 0x121c) == 0)) &&
           (*(float *)(param_1 + 0x14e8) <= 14.0)) &&
          ((*pfVar1 <= 5.0 && (fVar2 = *pfVar1, !NAN(fVar2) && -5.0 < fVar2 != (fVar2 == -5.0)))))
         && ((*(float *)(param_1 + 0x14e4) <= 5.0 &&
             (fVar2 = *(float *)(param_1 + 0x14e8), !NAN(fVar2) && -5.0 < fVar2 != (fVar2 == -5.0)))
            )) {
        *(float *)(param_1 + 0x910) =
             (0.01 - *(float *)(param_1 + 0x910)) * 0.94 + *(float *)(param_1 + 0x910);
      }
      iVar3 = (**(code **)(*piVar4 + 0x32c))();
      if (((((iVar3 == 0) && (*(int *)(param_1 + 0x618) == 4)) &&
           ((*(int *)(param_1 + 0x121c) == 0 &&
            (((*(int *)(param_1 + 0x14fc) == 0 && (*(float *)(param_1 + 0x14e8) <= 14.0)) &&
             (fVar2 = *(float *)(param_1 + 0x14e8), !NAN(fVar2) && 3.0 < fVar2 != (fVar2 == 3.0)))))
           )) && ((*pfVar1 <= 5.0 &&
                  (fVar2 = *pfVar1, !NAN(fVar2) && -5.0 < fVar2 != (fVar2 == -5.0))))) &&
         ((*(float *)(param_1 + 0x14e4) <= 5.0 &&
          (fVar2 = *(float *)(param_1 + 0x14e8), !NAN(fVar2) && -5.0 < fVar2 != (fVar2 == -5.0)))))
      {
        *(undefined4 *)(param_1 + 0x14fc) = 1;
        FUN_00b85350(0x42700000,0x3c23d70a,0x3c23d70a,1,1,0x3e4ccccd);
      }
      if (((0.0 < (float)piVar4[0xd07]) && (*(int *)(param_1 + 0x14fc) != 0)) &&
         (*(int *)(param_1 + 0x121c) == 0)) {
        *(float *)(param_1 + 0x910) =
             (0.01 - *(float *)(param_1 + 0x910)) * 0.94 + *(float *)(param_1 + 0x910);
      }
    }
    fVar5 = (float10)FUN_00a80040(*(undefined4 *)(param_1 + 0x4f0),0x42c80000,0);
    if (fVar5 < (float10)*(float *)(param_1 + 0x910)) {
      *(float *)(param_1 + 0x910) =
           (float)((fVar5 - (float10)*(float *)(param_1 + 0x910)) * (float10)0.94 +
                  (float10)*(float *)(param_1 + 0x910));
    }
  }
  if ((*(int *)(param_1 + 0x4a0) == 1) || (*(int *)(param_1 + 0x4a0) == 2)) {
    FUN_00854850();
  }
  BehaviorAppBase::vf48();
  return;
}

// 00856E50  FUN_00856e50  size=769  [callgraph]
void __fastcall FUN_00856e50(int param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x40400000;
  case 1:
    fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar3;
    if (fVar3 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      local_20 = 0x40a00000;
      local_1c = 0x40a00000;
      local_18 = 0;
      FUN_0084f540(0,&local_20);
      local_20 = 0xc0a00000;
      local_1c = 0x40800000;
      local_18 = 0;
      FUN_0084f540(1,&local_20);
      local_20 = 0x41200000;
      local_1c = 0xbf800000;
      local_18 = 0;
      FUN_0084f540(2,&local_20);
      local_20 = 0xc1200000;
      local_1c = 0xc0400000;
      local_18 = 0;
      FUN_0084f540(3,&local_20);
      return;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x61c) = 3;
    *(undefined4 *)(param_1 + 0x920) = 0x43160000;
  case 3:
    fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar3;
    if (fVar3 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      FUN_0084f630(0);
      return;
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x61c) = 5;
    *(undefined4 *)(param_1 + 0x920) = 0x41c80000;
  case 5:
    fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar3;
    if (fVar3 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      FUN_0084f630(1);
      return;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x61c) = 7;
    *(undefined4 *)(param_1 + 0x920) = 0x41a00000;
  case 7:
    fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar3;
    if (fVar3 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      FUN_0084f630(2);
      return;
    }
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x61c) = 9;
    *(undefined4 *)(param_1 + 0x920) = 0x41f00000;
  case 9:
    fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar3;
    if (fVar3 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      FUN_0084f630(3);
      return;
    }
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x61c) = 0xb;
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
  case 0xb:
    fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar3;
    if (fVar3 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      local_24 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"_EFD00"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 | 1;
          }
          local_24 = local_24 + 1;
          iVar5 = iVar5 + 0x70;
        } while (local_24 < *(short *)(param_1 + 0x324));
      }
      FUN_00854e70(0x28,param_1 + 0x1390);
      FUN_00854e70(0x29,param_1 + 0x1390);
      FUN_00dda360(0,0x3f800000,0x3f800000,8);
      return;
    }
  }
  return;
}

// 00857190  FUN_00857190  size=574  [callgraph]
void __fastcall FUN_00857190(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int iStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined1 auStack_160 [348];
  
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    FUN_00a8caf0(4,0,0,0);
    return;
  }
  FUN_00a81330();
  piVar5 = (int *)FUN_00a7c8a0();
  if (piVar5 != (int *)0x0) {
    puVar10 = &DAT_01b35ad8;
    (**(code **)(*piVar5 + 4))(&DAT_01b35ad8);
    iVar4 = FUN_00dd6d80(puVar10);
    if ((iVar4 != 0) && (piVar5[0x139] != 0)) {
      FUN_00a8caf0(4,0,0,0);
      FUN_00a7c950();
      return;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00a12210(*(undefined4 *)(param_1 + 0x1444)), iVar4 != 0)) {
      puVar8 = (undefined4 *)(iVar4 + 0x10);
      puVar9 = (undefined4 *)(param_1 + 0x10);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      D3DXVec3TransformNormal(&fStack_170,param_1 + 0x1450,(undefined4 *)(iVar4 + 0x10));
      fVar2 = *(float *)(iVar4 + 0x44);
      fVar3 = *(float *)(iVar4 + 0x48);
      *(float *)(param_1 + 0x40) = *(float *)(iVar4 + 0x40) + fStack_170;
      *(float *)(param_1 + 0x44) = fVar2 + fStack_16c;
      *(float *)(param_1 + 0x48) = fVar3 + fStack_168;
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar4 = 0;
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  if (*(int *)(param_1 + 0xa08) != 0) {
    *(undefined4 *)(param_1 + 0xa0c) = 1;
    iStack_174 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar7 = *(int *)(param_1 + 800);
        iVar6 = *(int *)(*(int *)(iVar7 + 0x60 + iVar4) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_EFD00"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar4);
          *puVar1 = *puVar1 | 1;
        }
        iStack_174 = iStack_174 + 1;
        iVar4 = iVar4 + 0x70;
      } while (iStack_174 < *(short *)(param_1 + 0x324));
    }
    iVar4 = param_1 + 0x1390;
    FUN_004039a0(0x28,param_1,0);
    if (iVar4 != 0) {
      FUN_00dffb20(iVar4);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
    FUN_004039a0(0x29,param_1,0);
    if (iVar4 != 0) {
      FUN_00dffb20(iVar4);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
    FUN_00a8caf0(5,0,0,0);
    FUN_00dda360(0,0x3f800000,0x3f800000,8);
  }
  return;
}

// 008573E0  FUN_008573e0  size=402  [callgraph]
void __fastcall FUN_008573e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_160 [348];
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0;
    local_174 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"_EFD00"), iVar4 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        local_174 = local_174 + 1;
        iVar5 = iVar5 + 0x70;
      } while (local_174 < *(short *)(param_1 + 0x324));
    }
    iVar5 = param_1 + 0x1390;
    FUN_004039a0(0x28,param_1,0);
    if (iVar5 != 0) {
      FUN_00dffb20(iVar5);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    FUN_004039a0(0x29,param_1,0);
    if (iVar5 != 0) {
      FUN_00dffb20(iVar5);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00857510;
  fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar3;
  if (fVar3 < 0.0) {
    FUN_00a8caf0(8,0,0,0);
  }
LAB_00857510:
  local_170 = 0;
  local_16c = 0;
  local_168 = 0x3f800000;
  D3DXVec3TransformNormal(&local_170,&local_170,param_1 + 0x10);
  FUN_00848b40(param_1 + 0x14d0,&stack0xfffffe84,0x3dcccccd,0x3e8efa35,0);
  *(float *)(param_1 + 0x928) = *(float *)(param_1 + 0x928) + 0.0017453292;
  return;
}

// 00859100  FUN_00859100  size=930  [callgraph]
void __fastcall FUN_00859100(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  undefined *puVar6;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  undefined1 auStack_18c [8];
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int local_170;
  float local_16c;
  int local_168;
  int local_164;
  undefined1 auStack_160 [348];
  
  iVar2 = FUN_00c13920();
  if (iVar2 == 0) {
LAB_0085915c:
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar2 == 0) goto LAB_0085915c;
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      puVar6 = &DAT_01b35b20;
      (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
      iVar2 = FUN_00dd6d80(puVar6);
      piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
    }
  }
  local_170 = piVar3[0x10];
  local_168 = piVar3[0x12];
  local_164 = piVar3[0x13];
  local_16c = (float)piVar3[0x11] + 2.0;
  iVar2 = FUN_00a12210(0);
  if (iVar2 != 0) {
    fStack_184 = *(float *)(iVar2 + 0x90);
    fVar4 = (float10)FUN_00dde300(0,*(float *)(param_1 + 0x1490) * 0.2);
    fVar4 = (float10)FUN_00ddba30((float)((fVar4 + (float10)*(float *)(param_1 + 0x1490)) *
                                          (float10)0.017453292 *
                                          (float10)*(float *)(param_1 + 0x910) + (float10)fStack_184
                                         ));
    *(float *)(iVar2 + 0x90) = (float)fVar4;
  }
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1490) =
       (float)(((float10)*(float *)(param_1 + 0x1494) - (float10)*(float *)(param_1 + 0x1490)) *
               fVar4 + (float10)*(float *)(param_1 + 0x1490));
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x1494) = 0x42000000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00859316;
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if ((fVar1 < 0.0) || (*(float *)(param_1 + 0x44) < 347.5)) {
    FUN_004039a0(10,param_1,0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
    FUN_00857810();
    FUN_0084f3b0();
  }
  if ((*(int *)(param_1 + 0x14b4) != 0) && (*(float *)(param_1 + 0x44) <= 349.0)) {
    FUN_004066f0();
    iVar2 = FUN_009165d0();
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x14))) {
      FUN_004039a0(10,param_1,0);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
      FUN_00857810();
      FUN_0084f3b0();
    }
    FUN_00406760();
  }
LAB_00859316:
  if ((piVar3 != (int *)0x0) &&
     (fVar1 = *(float *)(param_1 + 0x14e8), !NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0))) {
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_178 = 0x3f800000;
    D3DXVec3TransformNormal(&uStack_180,&uStack_180,param_1 + 0x10);
    FUN_00848b40(&uStack_17c,auStack_18c,0x3e4ccccd,*(float *)(param_1 + 0x910) * 0.13962634,0);
    iVar2 = (**(code **)(*piVar3 + 0x32c))();
    if (iVar2 != 0) {
      FUN_00848b40(&local_170,&uStack_180,0x3dcccccd,*(float *)(param_1 + 0x910) * 0.13962634,0);
    }
  }
  iVar2 = FUN_009c4bf0();
  if (iVar2 == 0) {
    fVar4 = (float10)FUN_00fdc1f0();
    fVar5 = (float10)*(float *)(param_1 + 0x910) * (float10)0.014;
  }
  else {
    iVar2 = FUN_009c4bf0();
    if (iVar2 == 1) {
      fVar4 = (float10)FUN_00fdc1f0();
      fVar5 = (float10)*(float *)(param_1 + 0x910) * (float10)0.028;
    }
    else {
      fVar4 = (float10)FUN_00fdc1f0();
      fVar5 = (float10)*(float *)(param_1 + 0x910) * (float10)0.034;
    }
  }
  *(float *)(param_1 + 0x924) = (float)((fVar5 + (float10)*(float *)(param_1 + 0x924)) * fVar4);
  uStack_1a0 = 0;
  uStack_19c = 0;
  fStack_198 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x924);
  D3DXVec3TransformNormal(&uStack_1a0,&uStack_1a0,param_1 + 0x10);
  *(float *)(param_1 + 0x40) = unaff_ESI + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + unaff_EBX;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fStack_1a4;
  return;
}

// 008594B0  FUN_008594b0  size=629  [callgraph]
void __fastcall FUN_008594b0(int param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int iStack_164;
  undefined1 auStack_160 [348];
  
  iVar4 = FUN_00c13920();
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(0);
    if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar7 = &DAT_01b35b20;
      (**(code **)(*piVar5 + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar7);
    }
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar7 = &DAT_01b35ad8;
      (**(code **)(*piVar5 + 4))(&DAT_01b35ad8);
      iVar4 = FUN_00dd6d80(puVar7);
      if ((iVar4 != 0) && (piVar5[0x139] != 0)) {
        FUN_00a8caf0(4,0,0,0);
        FUN_00a7c950();
        return;
      }
    }
    iVar4 = 0;
    if (*(int *)(param_1 + 0x61c) == 0) {
      *(undefined4 *)(param_1 + 0x920) = 0x43960000;
      *(undefined4 *)(param_1 + 0x61c) = 1;
      *(undefined4 *)(param_1 + 0xa04) = 0;
      *(undefined4 *)(param_1 + 0x924) = 0;
      *(undefined4 *)(param_1 + 0x1494) = 0x42000000;
      if (*(int *)(param_1 + 0xa0c) == 0) {
        *(undefined4 *)(param_1 + 0xa0c) = 1;
        iStack_164 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          do {
            iVar2 = *(int *)(param_1 + 800);
            iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
            if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"_EFD00"), iVar6 != 0)) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
              *puVar1 = *puVar1 | 1;
            }
            iStack_164 = iStack_164 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iStack_164 < *(short *)(param_1 + 0x324));
        }
        FUN_00854e70(0x28,param_1 + 0x1390);
        FUN_00854e70(0x29,param_1 + 0x1390);
        FUN_00dda360(0,0x3f800000,0x3f800000,8);
      }
    }
    else if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar3;
    if ((fVar3 < 0.0) || (*(float *)(param_1 + 0x44) < 347.5)) {
      FUN_004039a0(10,param_1,0);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
      FUN_00857810();
    }
    if ((*(int *)(param_1 + 0x14b4) != 0) && (*(float *)(param_1 + 0x44) <= 349.0)) {
      FUN_004066f0();
      iVar4 = FUN_009165d0();
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x14))) {
        FUN_004039a0(10,param_1,0);
        FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
        FUN_00857810();
        FUN_0084f3b0();
      }
      FUN_00406760();
    }
    return;
  }
  FUN_00a8caf0(4,0,0,0);
  return;
}

// 00859730  FUN_00859730  size=829  [callgraph]
void __fastcall FUN_00859730(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fStack_198;
  float fStack_194;
  float local_190;
  float local_18c;
  undefined4 local_188;
  float local_184;
  float local_164;
  undefined1 local_160 [348];
  
  iVar2 = FUN_00a12210(0);
  if (iVar2 != 0) {
    local_164 = *(float *)(iVar2 + 0x90);
    fVar4 = (float10)FUN_00dde300(0,*(float *)(param_1 + 0x1490) * 0.2);
    fVar4 = (float10)FUN_00ddba30((float)((fVar4 + (float10)*(float *)(param_1 + 0x1490)) *
                                          (float10)0.017453292 *
                                          (float10)*(float *)(param_1 + 0x910) + (float10)local_164)
                                 );
    *(float *)(iVar2 + 0x90) = (float)fVar4;
  }
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1490) =
       (float)(((float10)*(float *)(param_1 + 0x1494) - (float10)*(float *)(param_1 + 0x1490)) *
               fVar4 + (float10)*(float *)(param_1 + 0x1490));
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x1494) = 0x42000000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_008599a2;
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if ((fVar1 < 0.0) || (*(float *)(param_1 + 0x44) < 347.5)) {
    FUN_004039a0(10,param_1,0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    FUN_00857810();
    FUN_0084f3b0();
    local_190 = *(float *)(param_1 + 0x130);
    local_18c = *(float *)(param_1 + 0x134);
    local_188 = *(undefined4 *)(param_1 + 0x138);
    local_184 = *(float *)(param_1 + 0x13c);
    if (local_18c <= 349.5) {
      local_18c = 349.5;
    }
    uVar3 = FUN_009f8b40(0);
    FUN_009577e0(0x23a6f56d,&local_190,uVar3);
  }
  if ((*(int *)(param_1 + 0x14b4) != 0) && (*(float *)(param_1 + 0x44) <= 349.0)) {
    FUN_004066f0();
    iVar2 = FUN_009165d0();
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x14))) {
      FUN_004039a0(10,param_1,0);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
      FUN_00857810();
      FUN_0084f3b0();
      local_190 = *(float *)(param_1 + 0x130);
      local_18c = *(float *)(param_1 + 0x134);
      local_188 = *(undefined4 *)(param_1 + 0x138);
      local_184 = *(float *)(param_1 + 0x13c);
      if (local_18c <= 349.5) {
        local_18c = 349.5;
      }
      uVar3 = FUN_009f8b40(0);
      FUN_009577e0(0x23a6f56d,&local_190,uVar3);
    }
    FUN_00406760();
  }
LAB_008599a2:
  local_190 = 0.0;
  local_18c = 0.0;
  local_188 = 0x3f800000;
  D3DXVec3TransformNormal(&local_190,&local_190,param_1 + 0x10);
  FUN_00848b40(param_1 + 0x14d0,&stack0xfffffe64,0x3e4ccccd,*(float *)(param_1 + 0x910) * 0.13962634
               ,0);
  fVar4 = (float10)FUN_00fdc1f0();
  fVar4 = ((float10)*(float *)(param_1 + 0x910) * (float10)0.02 +
          (float10)*(float *)(param_1 + 0x924)) * fVar4;
  *(float *)(param_1 + 0x924) = (float)fVar4;
  local_18c = 0.0;
  local_188 = 0;
  local_184 = (float)(fVar4 * (float10)*(float *)(param_1 + 0x910));
  D3DXVec3TransformNormal(&local_18c,&local_18c,param_1 + 0x10);
  *(float *)(param_1 + 0x40) = fStack_198 + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + fStack_194;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + local_190;
  return;
}

// 00859A70  ArmThrowObj::vf1A4  size=149  [class]
void __thiscall ArmThrowObj::vf1A4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  Bh0064::vf1A4(param_2,param_3);
  *(undefined4 *)(param_1 + 0x1498) = 1;
  if ((param_3 & 0xe) != 0) {
    *(undefined4 *)(param_1 + 0x149c) = 1;
  }
  iVar1 = FUN_00a81330();
  iVar2 = param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0(0xffffffff,0);
  }
  FUN_00e5e0c0("core_se_exp_car",iVar2);
  if (*(int *)(param_1 + 0x4b0) != 0xf00d5) {
    FUN_00eaa6e0(0x3f800000,0);
    *(undefined4 *)(param_1 + 0x121c) = 1;
    FUN_00857810();
    *(undefined4 *)(param_1 + 0x4e4) = 1;
  }
  return;
}

// 00859E20  ArmThrowObj::vf4C  size=337  [class]
void __fastcall ArmThrowObj::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  
  param_1[0x540] = param_1[0x244];
  if (param_1[0x487] == 0) {
    Behavior::vf4C();
    switch(param_1[0x186]) {
    case 1:
      FUN_00856e50();
      break;
    case 2:
      FUN_00857190();
      break;
    case 3:
      FUN_0084f230();
      break;
    case 4:
      FUN_00859100();
      break;
    case 5:
      FUN_008486c0();
      break;
    case 6:
      FUN_008594b0();
      break;
    case 7:
      FUN_008573e0();
      break;
    case 8:
      FUN_00859730();
    }
    (**(code **)(*param_1 + 100))();
    if (param_1[0x53c] == 0) {
      hkpAllCdPointCollector::hkpAllCdPointCollector_4();
    }
    if (param_1[0x52d] != 0) {
      FUN_00916660();
      return;
    }
  }
  else {
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
    fVar1 = (float)param_1[0x488];
    param_1[0x488] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x487] = 0;
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00AB3FD0  ArmThrowObj::vf04  size=6  [class]
undefined * ArmThrowObj::vf04(void)

{
  return &DAT_01b35ad8;
}

// 00AB3FE0  ArmThrowObj::vf24  size=7  [class]
float10 __fastcall ArmThrowObj::vf24(int param_1)

{
  return (float10)*(float *)(param_1 + 0x910);
}

// 00AB3FF0  ArmThrowObj::vf94  size=6  [class]
undefined4 ArmThrowObj::vf94(void)

{
  return 2;
}

// 00AB4000  ArmThrowObj::vf98  size=6  [class]
undefined4 ArmThrowObj::vf98(void)

{
  return 0x20190;
}

// 00ABA070  ArmThrowObj::vf00  size=30  [class]
undefined4 __thiscall ArmThrowObj::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_24();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

