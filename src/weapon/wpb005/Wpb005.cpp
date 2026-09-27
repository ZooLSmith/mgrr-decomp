// src/weapon/wpb005/Wpb005.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006012C0..00AB6B80, 13 functions

#include "types.h"

// 006012C0  Wpb005::vf44  size=5  [class]
void __fastcall Wpb005::vf44(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*(int *)(param_1 + 0xdb0) + 8))(0x3f800000,0,0);
  RayCastManager::getWork(param_1 + 0x1124);
  RayCastManager::getWork(param_1 + 0x1128);
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1130) + 4);
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  (*pcVar1)();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0xe60) + 4))();
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7b4);
  if (iVar2 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar2);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x28))((undefined4 *)(param_1 + 0x8dc));
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  FUN_00910ac0(0);
  *(undefined4 *)(param_1 + 0xf30) = 0;
  FUN_00900ca0();
  FUN_00900ca0();
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x1114) != 0) {
    FUN_00a805f0();
  }
  *(undefined4 *)(param_1 + 0x1114) = 0;
  FUN_00cd4630(param_1);
  Behavior::vf44();
  return;
}

// 006012D0  Wpb005::thunk_vf48  size=5  [class]
void __fastcall Wpb005::thunk_vf48(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  FUN_00a92fb0();
  fVar6 = (float10)FUN_00e049b0();
  param_1[0x3c8] = (int)(float)fVar6;
  BehaviorDebrisActor::vf48();
  if (param_1[0x369] == 0) {
    if (param_1[0x24c] != -1) {
      if (param_1[0x301] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00acfe16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x300))();
        return;
      }
      if (param_1[0x302] != 0) {
        FUN_00acc200();
      }
      param_1[0x302] = 1;
    }
  }
  else {
    fVar2 = (float)param_1[0x366];
    if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
      fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
      param_1[0x366] = (int)(float)((float10)(float)param_1[0x366] - fVar6);
    }
    if (param_1[0x36a] != 0) {
      fVar2 = (float)param_1[0x367] - (float)param_1[0x368];
      param_1[0x367] = (int)fVar2;
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        param_1[0x367] = 0;
      }
      iVar3 = param_1[0x367];
      iVar5 = 0;
      iVar4 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          *(int *)(iVar5 + 0x1c + param_1[200]) = iVar3;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar4 < (short)param_1[0xc9]);
      }
    }
    if ((float)param_1[0x366] < 0.0) {
      FUN_00acc0a0();
      param_1[0x369] = 0;
    }
    if (param_1[0x237] != 0) {
      FUN_004066f0();
      FUN_00916660();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
  }
  return;
}

// 006012E0  Wpb005::vf4C  size=5  [class]
void __fastcall Wpb005::vf4C(int *param_1)

{
  Behavior::vf4C();
  switchD_0080dbae::default();
  if (param_1[0x24c] != -1) {
    (**(code **)(*param_1 + 0x304))();
    if ((param_1[0x3c5] != 0) && (*(int *)(param_1[0x3c5] + 0x378) != 0)) {
      FUN_0043e160(param_1 + 0x250);
    }
  }
  return;
}

// 006012F0  Wpb005::vf50  size=26  [class]
void __fastcall Wpb005::vf50(int param_1)

{
  BehaviorBalkan::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 00601310  Wpb005::vf54  size=5  [class]
void __fastcall Wpb005::vf54(int param_1)

{
  Behavior::vf54();
  if ((*(int *)(param_1 + 0x930) != -1) && (*(int *)(param_1 + 0x7b4) != 0)) {
    FUN_0091e980(param_1);
  }
  return;
}

// 00601330  Wpb005::vf300  size=819  [class]
void __fastcall Wpb005::vf300(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int *piVar12;
  int iVar13;
  float *pfVar14;
  float unaff_EBX;
  float10 fVar15;
  float fVar16;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int *piStack_80;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [44];
  
  fVar15 = (float10)FUN_00e03a90(0);
  param_1[0x3c8] = (int)(float)fVar15;
  (**(code **)(*param_1 + 0x24))();
  iVar13 = param_1[0x186];
  if (iVar13 == 0) {
    FUN_00ad3c90();
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x2fc] = 0x41f00000;
    param_1[0x186] = 1;
  }
  else if (iVar13 != 1) {
    if (iVar13 != 2) {
      return;
    }
    (**(code **)(param_1[0x44c] + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  }
  piVar12 = (int *)FUN_00c13920();
  fVar16 = 0.0;
  iVar13 = (**(code **)(*piVar12 + 0x28))();
  if (iVar13 != 0) {
    piVar12 = (int *)FUN_00a7c8b0();
    param_1[0x2d4] = *piVar12;
    param_1[0x2d5] = piVar12[1];
    param_1[0x2d6] = piVar12[2];
    param_1[0x2d7] = piVar12[3];
  }
  fVar15 = (float10)FUN_00fdc1f0();
  param_1[0x249] = (int)(float)(fVar15 * (float10)(float)param_1[0x249]);
  fVar15 = (float10)FUN_00fdc1f0();
  param_1[0x248] = (int)(float)(fVar15 * (float10)(float)param_1[0x248]);
  param_1[0x24a] = (int)(float)(fVar15 * (float10)(float)param_1[0x24a]);
  fStack_84 = 0.0;
  piStack_80 = (int *)(unaff_EBX * 0.01);
  fStack_7c = unaff_EBX * (float)param_1[0x2e4];
  D3DXVec3TransformNormal(&fStack_84,&fStack_84,param_1 + 4);
  pfVar1 = (float *)(param_1 + 0x14);
  param_1[0x244] = param_1[0x14];
  pfVar2 = (float *)(param_1 + 0x2d4);
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  *pfVar1 = fStack_90 + *pfVar1;
  param_1[0x15] = (int)(fStack_8c + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)param_1[0x16] + fStack_88);
  param_1[0x17] = (int)(fStack_84 + (float)param_1[0x17]);
  fVar3 = *pfVar2;
  fVar4 = (float)param_1[0x2d8];
  fVar5 = (float)param_1[0x2d5];
  fVar6 = (float)param_1[0x2d9];
  fVar7 = (float)param_1[0x2d6];
  fVar8 = (float)param_1[0x2da];
  fVar9 = (float)param_1[0x2d7];
  fVar10 = (float)param_1[0x2db];
  pfVar14 = (float *)FUN_00a8cf30(auStack_30,pfVar2,&stack0xffffff60,pfVar1,param_1[0x2e4],
                                  0x3f19999a);
  *pfVar2 = *pfVar14;
  param_1[0x2d5] = (int)pfVar14[1];
  param_1[0x2d6] = (int)pfVar14[2];
  param_1[0x2d7] = (int)pfVar14[3];
  param_1[0x10] = (int)*pfVar1;
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  FUN_00acc460(pfVar2,&fStack_90,0x3f000000,fVar16 * 0.02617994,1);
  fVar11 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar11 - fVar16);
  if (0.0 <= fVar11 - fVar16) {
    iVar13 = FUN_009f8b40();
    uStack_50 = iVar13 << 0x10 | 0x15;
    piStack_80 = param_1 + 0x449;
    fStack_7c = 0.0;
    uStack_4c = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_48 = 2;
    uStack_44 = 5;
    pcStack_40 = "Bullet";
    fStack_70 = fVar3 - fVar4;
    fStack_6c = fVar5 - fVar6;
    fStack_68 = fVar7 - fVar8;
    fStack_64 = fVar9 - fVar10;
    fStack_60 = fVar3 - fVar4;
    fStack_5c = fVar5 - fVar6;
    fStack_58 = fVar7 - fVar8;
    fStack_54 = fVar9 - fVar10;
    HavokRayCastManager::set(&piStack_80);
    return;
  }
  param_1[0x186] = 2;
  return;
}

// 00601670  FUN_00601670  size=405  [between]
undefined4 __fastcall FUN_00601670(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc00) != 0) {
    FUN_00eaa7b0(1,*(undefined4 *)(param_1 + 0xc10),*(undefined4 *)(param_1 + 0xc14),
                 *(undefined4 *)(param_1 + 0xc18),0);
    fpatan((float10)*(float *)(param_1 + 0xc24),
           SQRT((float10)*(float *)(param_1 + 0xc20) * (float10)*(float *)(param_1 + 0xc20) +
                (float10)*(float *)(param_1 + 0xc28) * (float10)*(float *)(param_1 + 0xc28)));
    fpatan((float10)*(float *)(param_1 + 0xc20),(float10)*(float *)(param_1 + 0xc28));
    FUN_00c76f00();
    uVar1 = *(undefined4 *)(param_1 + 0xd5c);
    FUN_00a81330(uVar1);
    FUN_00a7c800();
    FUN_00a12210(uVar1);
    FUN_00a81330();
    FUN_009e85d0(0x65,0x3f800000);
    FUN_00eaa840();
    FUN_00acc0a0();
    *(undefined4 *)(param_1 + 0xf10) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    return 1;
  }
  return 0;
}

// 00601810  FUN_00601810  size=496  [between]
undefined4 __fastcall FUN_00601810(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  local_20 = param_1[0x244];
  local_1c = param_1[0x245];
  local_18 = param_1[0x246];
  local_14 = param_1[0x247];
  local_40 = param_1[0x14];
  local_3c = param_1[0x15];
  local_94 = 0;
  local_38 = param_1[0x16];
  local_34 = param_1[0x17];
  iVar1 = FUN_00907560(param_1 + 0x449,&local_90,&local_80,&local_94,0,&local_20,&local_40,0);
  if (iVar1 != 0) {
    FUN_00eaa7b0(1,local_90,local_8c,local_88,0);
    fVar2 = (float10)local_80;
    fVar3 = (float10)local_78;
    fVar4 = (float10)fpatan((float10)local_7c,SQRT(fVar3 * fVar3 + fVar2 * fVar2));
    local_30 = (float)-fVar4;
    fVar2 = (float10)fpatan(fVar2,fVar3);
    local_2c = (float)fVar2;
    FUN_00c76f00();
    local_44 = param_1[0x239];
    local_70 = local_90;
    local_6c = local_8c;
    local_68 = local_88;
    local_64 = local_84;
    local_60 = local_30;
    local_5c = local_2c;
    local_58 = 0.0;
    local_54 = local_24;
    if (local_44 != 0xffff) {
      local_60 = local_80;
      local_5c = local_7c;
      local_58 = local_78;
      local_54 = local_74;
    }
    FUN_00c76f30(local_94);
    (**(code **)(*param_1 + 0x318))(&local_70);
    FUN_009e85d0(0x65,0x3f800000);
    FUN_00eaa840();
    FUN_00acc0a0();
    return 1;
  }
  return 0;
}

// 00601A50  Wpb005::vf304  size=228  [class]
void __fastcall Wpb005::vf304(int *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = FUN_00acae60();
  if (iVar2 == 0) {
    iVar2 = FUN_00601670();
    if (iVar2 == 0) {
      iVar2 = FUN_00601810();
      if (iVar2 == 0) {
        if (param_1[0x243] != 0) {
          uVar3 = (**(code **)(*param_1 + 0x68))(0,0xffffffff);
          thunk_FUN_00e58e40(param_1[0x243],uVar3);
        }
        if (param_1[0x3c7] == 0) {
          local_30 = 0;
          local_2c = 0;
          local_28 = 0x3f800000;
          D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 4);
          local_2c = 0;
          local_28 = 0;
          uStack_24 = 0;
          pfVar1 = (float *)(param_1 + 0x24);
          thunk_FUN_00dde510(pfVar1,&stack0xffffffc0,&stack0xffffffc4,&local_2c);
          *pfVar1 = *pfVar1 * -1.0;
          param_1[0x26] = 0;
          param_1[0x25c] = param_1[0x25];
        }
        param_1[0x3c7] = 0;
      }
    }
  }
  return;
}

// 00601B40  Wpb005::vf40  size=230  [class]
undefined4 __fastcall Wpb005::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 local_160 [348];
  
  iVar2 = Pl1500Knife::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = RigidBodyCollection::RigidBodyCollection_2();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x7b0) = uVar3;
  uVar3 = FUN_00de46d0("_col.hkx",0);
  uVar4 = FUN_00de4550("_col.hkx",0);
  iVar2 = FUN_008f6410(uVar1,uVar4,uVar3);
  if (iVar2 != 0) {
    puVar5 = (undefined4 *)FUN_009f8b60();
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar5);
    FUN_008f2cd0(0);
  }
  FUN_004039a0(0,param_1,0);
  FUN_00e021c0(param_1);
  puVar6 = local_160;
  uVar3 = FUN_00e00b40(0x3b005,puVar6);
  FUN_00a8c930(uVar3,puVar6);
  return 1;
}

// 00AAC4B0  Wpb005::Wpb005  size=18  [class]
undefined4 * __fastcall Wpb005::Wpb005(undefined4 *param_1)

{
  BehaviorBulletBase::BehaviorBulletBase();
  *param_1 = vftable;
  return param_1;
}

// 00AAC4D0  Wpb005::vf04  size=6  [class]
undefined * Wpb005::vf04(void)

{
  return &DAT_01b35490;
}

// 00AB6B80  Wpb005::vf00  size=30  [class]
undefined4 __thiscall Wpb005::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_120();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

